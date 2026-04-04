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

class WrenchPubNode : public rclcpp::Node
{
public:
    WrenchPubNode();

private:
    // ── 回调 ──────────────────────────────────────────────
    void joint_state_callback(const sensor_msgs::msg::JointState::SharedPtr msg);
    void timer_callback();

    // ── 内部辅助 ──────────────────────────────────────────
    bool build_robot_state(RusSimForce::RobotState& state) const;
    void publish_wrench(const RusSimForce::EndEffectorWrench& wrench);

    // ── 核心估计器 ────────────────────────────────────────
    std::unique_ptr<RusSimForce::WrenchEstimate> estimator_;

    // ── ROS 通信对象 ──────────────────────────────────────
    rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_state_sub_;
    rclcpp::Publisher<geometry_msgs::msg::WrenchStamped>::SharedPtr wrench_pub_;
    rclcpp::TimerBase::SharedPtr timer_;

    // ── 参数（从 ROS2 参数服务器读取）──────────────────────
    std::string joint_state_topic_;   // 输入话题
    std::string wrench_topic_;        // 输出话题
    std::string wrench_frame_id_;     // 发布的 frame_id
    double      publish_rate_hz_;     // 发布频率 (Hz)
    double      qdd_alpha_;           // 加速度低通滤波系数 (0~1，越小越平滑)
    bool        publish_in_flange_;   // true=法兰系，false=base系

    // ── 机械臂状态缓存 ────────────────────────────────────
    bool has_state_        = false;   // 是否已收到第一帧 JointState
    bool has_prev_qd_      = false;   // 是否已有上一帧速度（用于 qdd 微分）

    rclcpp::Time        last_stamp_;
    std::vector<std::string> joint_names_;

    Eigen::VectorXd q_;          // 关节位置
    Eigen::VectorXd qd_;         // 关节速度
    Eigen::VectorXd qdd_;        // 关节加速度（数值微分 + 低通滤波）
    Eigen::VectorXd tau_meas_;   // 关节实测力矩
    Eigen::VectorXd prev_qd_;    // 上一帧速度（用于求 qdd）
};

} // namespace RusSimForceNode