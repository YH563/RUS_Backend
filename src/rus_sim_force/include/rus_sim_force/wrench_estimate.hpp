#pragma once

#include <string>
#include <Eigen/SVD>
#include <Eigen/Geometry>
#include <Eigen/Dense>
#include <urdf/model.h>

#include <rclcpp/rclcpp.hpp>

#include <pinocchio/parsers/urdf.hpp>
#include <pinocchio/algorithm/rnea.hpp>
#include <pinocchio/algorithm/joint-configuration.hpp>
#include <pinocchio/algorithm/kinematics.hpp>
#include <pinocchio/algorithm/jacobian.hpp>

namespace RusSimForce {
    using Vector3d    = Eigen::Vector3d;
    using Vector6d    = Eigen::Matrix<double, 6, 1>;
    using Matrix3d    = Eigen::Matrix3d;
    using MatrixXd    = Eigen::MatrixXd;
    using VectorXd    = Eigen::VectorXd;
    using Transform3d = Eigen::Isometry3d;

    // 单根连杆的静态惯性参数，从 URDF 解析后存入
    struct LinkParam {
        std::string name;       // 连杆名
        double      mass;       // 质量 (kg)
        Vector3d    com;        // 质心在本连杆坐标系下的位置 (m)
        Matrix3d    inertia;    // 惯性张量关于质心，在连杆坐标系下 (kg·m^2)
    };

    // 单个旋转关节的静态运动学参数，从 URDF 解析后存入
    struct JointParam {
        std::string name;       // 关节名
        int         parent_idx; // 父连杆在 links 数组中的索引
        int         child_idx;  // 子连杆在 links 数组中的索引
        Transform3d T_fixed;    // 父连杆坐标系到关节坐标系的固定变换（不含关节角）
        Vector3d    axis;       // 关节转轴，已归一化，表达在关节坐标系下
    };

    // wrist3_link 原点处的原始力旋量估算结果
    // ⚠️ force / torque 表达在 LOCAL_WORLD_ALIGNED 坐标系下（原点在末端，轴向与世界系对齐）
    struct ForceResult {
        Vector3d torque;     // [nx, ny, nz]，world-aligned 坐标系 (Nm)
        Vector3d force;      // [fx, fy, fz]，world-aligned 坐标系 (N)
        double   cond_num;   // 雅可比条件数，越大越接近奇异
        bool     is_valid;   // 条件数低于阈值时为 true，结果可信
    };

    // 法兰原点处的完整末端力旋量，由 ForceResult 经坐标变换得到
    struct EndEffectorWrench {
        Vector3d force;              // 法兰处接触力，world-aligned 坐标系 (N)
        Vector3d torque;             // 法兰处接触力矩，world-aligned 坐标系 (Nm)
        Vector3d force_in_flange;    // 法兰处接触力，法兰坐标系 (N)
        Vector3d torque_in_flange;   // 法兰处接触力矩，法兰坐标系 (Nm)
        Vector3d p_flange;           // 法兰原点在 base 坐标系下的位置 (m)
        Matrix3d R_flange;           // 法兰相对于 base 的旋转矩阵
        double   cond_num = 0.0;     // 继承自 ForceResult
        bool     is_valid = false;   // 继承自 ForceResult
    };

    // WrenchEstimate 的全部内部状态，集中管理便于序列化和调试
    struct WrenchEstimateState {
        // ── 从 URDF 解析得到 ──────────────────────────
        std::vector<JointParam>  joints;  // 仅含 revolute 关节，顺序与 URDF 一致
        std::vector<LinkParam>   links;   // 所有连杆，顺序与 URDF 一致
        pinocchio::Model         model;   // Pinocchio 动力学模型，用于 RNEA 和雅可比计算

        // ── 算法参数 ──────────────────────────────────
        Vector3d gravity               = {0.0, 0.0, -9.81}; // 重力向量，base 坐标系下 (m/s^2)
        Vector3d flange_in_wrist3      = {0.0, 0.0, 0.094}; // 法兰原点在 wrist3 坐标系下的偏置 (m)
        double   singularity_threshold = 200.0;              // 条件数超过此值认为接近奇异，结果不可信
        double   lambda                = 0.001;              // DLS 正则化系数，避免奇异位形下解爆炸
    };

    // 末端力旋量估算器：基于 Pinocchio RNEA + 雅可比伪逆，从关节力矩反推末端接触力，构造后需调用 SetConfig() 配置参数，SetToolPayload() 只能调用一次
    class WrenchEstimate {
    public:
        // ── 机械臂基础配置 ──────────────────────────────────────

        // 从 URDF 文件加载机器人模型，失败时打印 FATAL 日志，后续调用结果未定义
        explicit WrenchEstimate(const std::string& urdf_path);

        // 将工具负载合并到末端连杆惯性参数中，只能调用一次，重复调用会被忽略并打印警告
        void SetToolPayload(double mass, const Vector3d& com_in);

        // 设置 DLS 正则化系数和奇异性判断阈值，可多次调用
        void SetConfig(double lambda, double singularity_threshold);

        // ── 仿真力配置 ──────────────────────────────────────────

        // 设置仿真注入的末端力旋量，用于 BuildSimTauMeas()，必须为 6 维 [torque; force]
        void SetSimForce(const VectorXd& wrench_6d);

        // 清除仿真力，将 sim_wrench_ 重置为零向量
        void ClearSimForce();

        // ── 构建仿真关节力矩测量值 ──────────────────────────────

        // 用 RNEA 计算动力学力矩，再叠加 sim_wrench_ 经雅可比映射的等效力矩，用于在没有真实传感器时生成合成的 tau_meas，供 Estimate() 闭环验证
        VectorXd BuildSimTauMeas(
            const VectorXd& q,
            const VectorXd& qd,
            const VectorXd& qdd) const;

        // ── 基础估算：返回 wrist3 原点处的力旋量 ───────────────

        // 核心估算接口：tau_ext = tau_meas - RNEA(q,qd,qdd)，再用 DLS 伪逆求解 J^T * w = tau_ext，返回 wrist3 原点处的力旋量，坐标系为 LOCAL_WORLD_ALIGNED
        ForceResult Estimate(
            const VectorXd& q,
            const VectorXd& qd,
            const VectorXd& qdd,
            const VectorXd& tau_meas) const;

        // ── 变换到法兰中心（有实测力矩）───────────────────────

        // 在 Estimate() 基础上，将结果从 wrist3 原点变换到法兰原点
        EndEffectorWrench EstimateAtFlange(
            const VectorXd& q,
            const VectorXd& qd,
            const VectorXd& qdd,
            const VectorXd& tau_meas) const;

        // ── 变换到法兰中心（仿真模式，无需传入 tau_meas）──────

        // 仿真模式重载：内部自动调用 BuildSimTauMeas() 生成 tau_meas，再走 EstimateAtFlange()
        EndEffectorWrench EstimateAtFlange(
            const VectorXd& q,
            const VectorXd& qd,
            const VectorXd& qdd) const;

    private:
        // ── 内部工具函数 ────────────────────────────────────────

        // 解析 URDF 文件，填充 state_.links / state_.joints / state_.model，失败返回 false
        bool load_urdf(const std::string& urdf_path);

        // 用 Pinocchio forwardKinematics 计算各关节坐标系在 base 下的变换，返回 n+1 个 Transform3d
        std::vector<Transform3d> forward_kinematics(
            const VectorXd& q) const;

        // 计算末端关节的 6×n 雅可比矩阵（LOCAL_WORLD_ALIGNED），行序为 [torque; force]
        MatrixXd jacobian(
            const VectorXd& q) const;

        // 计算雅可比矩阵的条件数（最大奇异值 / 最小奇异值），最小奇异值 < 1e-12 时返回 1e18
        double compute_condition_number(
            const MatrixXd& jacobian) const;

        // 将 wrist3 处的力旋量沿 flange_in_wrist3 偏置变换到法兰原点，同时转换到法兰坐标系
        EndEffectorWrench transform_to_flange(
            const VectorXd& q,
            const ForceResult& raw) const;

        // 调用 Pinocchio RNEA 计算纯动力学关节力矩（不含外力），输入维度需与 DOF 一致
        VectorXd inverse_dynamics(
            const VectorXd& q,
            const VectorXd& qd,
            const VectorXd& qdd) const;

        VectorXd sim_wrench_ = VectorXd::Zero(6); // 当前注入的仿真力旋量 [torque; force]
        bool tool_applied_ = false;               // 防止 SetToolPayload() 被重复调用的保护标志
        WrenchEstimateState state_;
    };

    // 将 VectorXd 格式化为空格分隔的字符串，方便 RCLCPP_INFO 打印调试
    std::string vec_to_str(const VectorXd& v);

} // namespace RusSimForce