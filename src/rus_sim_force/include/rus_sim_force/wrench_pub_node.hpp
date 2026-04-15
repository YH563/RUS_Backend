#pragma once

#include <memory>
#include <string>
#include <vector>

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
#include <geometry_msgs/msg/wrench_stamped.hpp>
#include <Eigen/Dense>

#include "rus_sim_force/wrench_estimate.hpp"

namespace RusSimForceNode {

    using RusSimForce::VectorXd;

    // ROS2 节点：订阅 JointState，定时估算末端力旋量并发布 WrenchStamped
    // 发布频率由 publish_rate_hz 参数控制，与 JointState 订阅频率解耦
    class WrenchPubNode : public rclcpp::Node {
    public:
        // 声明并读取所有 ROS2 参数，构造估计器，创建订阅 / 发布 / 定时器
        WrenchPubNode();

    private:
        // ── 回调 ──────────────────────────────────────────────

        // 缓存最新关节状态，并用数值微分 + 一阶低通滤波估算 qdd
        // 仅在 position / velocity / effort 三路维度一致时更新缓存，否则丢弃本帧
        void joint_state_callback(
            const sensor_msgs::msg::JointState::SharedPtr msg);

        // 定时触发：调用 EstimateAtFlange()，将结果打包发布；尚未收到 JointState 时跳过
        void timer_callback();

        // ── 内部辅助 ──────────────────────────────────────────

        // 将 EndEffectorWrench 打包为 WrenchStamped 并发布
        // publish_in_flange_ 为 true 时发布法兰系分量，否则发布 base 系分量
        void publish_wrench(const RusSimForce::EndEffectorWrench& wrench);

        // ── 核心估计器 ────────────────────────────────────────
        std::unique_ptr<RusSimForce::WrenchEstimate> estimator_;

        // ── ROS 通信对象 ──────────────────────────────────────
        rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr  joint_state_sub_;
        rclcpp::Publisher<geometry_msgs::msg::WrenchStamped>::SharedPtr wrench_pub_;
        rclcpp::TimerBase::SharedPtr                                    timer_;

        // ── 参数（从 ROS2 参数服务器读取）────────────────────
        std::string joint_state_topic_;   // 订阅的 JointState 话题名
        std::string wrench_topic_;        // 发布的 WrenchStamped 话题名
        std::string wrench_frame_id_;     // WrenchStamped header.frame_id
        double      publish_rate_hz_;     // 定时发布频率 (Hz)
        double      qdd_alpha_;           // 加速度低通滤波系数，范围 (0,1]，越小越平滑
        bool        publish_in_flange_;   // true=发布法兰系，false=发布 base 系

        // ── 机械臂状态缓存 ────────────────────────────────────
        bool has_state_   = false;   // 是否已收到至少一帧合法 JointState
        bool has_prev_qd_ = false;   // 是否已积累到上一帧速度，用于首帧跳过 qdd 微分

        rclcpp::Time             last_stamp_;   // 上一帧 JointState 的时间戳，用于计算 dt
        std::vector<std::string> joint_names_;  // 关节名列表，首帧初始化后不再更新

        VectorXd q_;        // 当前关节位置 (rad)
        VectorXd qd_;       // 当前关节速度 (rad/s)
        VectorXd qdd_;      // 关节加速度估算值 (rad/s^2)，数值微分 + 低通滤波
        VectorXd tau_meas_; // 当前关节实测力矩 (Nm)，来自 JointState.effort
        VectorXd prev_qd_;  // 上一帧关节速度，用于计算 qdd = (qd - prev_qd) / dt
    };

} // namespace RusSimForceNode