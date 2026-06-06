#pragma once

#include <vector>
#include <memory>
#include <mutex>

#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_monitor/planning_scene_monitor.h>
#include <moveit_servo/servo.h>
#include <moveit_servo/servo_parameters.h>
#include <geometry_msgs/msg/pose.hpp>
#include <geometry_msgs/msg/twist_stamped.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>

namespace RusMoveitManager
{
    using geometry_msgs::msg::Pose;  // 位姿
    using geometry_msgs::msg::TwistStamped;

    // 设置moveit所需参数
    struct MoveitParameter
    {
        std::string planning_group = "fairino3_v6_group";  // 规划组名称
        std::string base_frame = "base_link";  // 规划组处于的坐标系
        std::string end_effector_link = "wrist3_link";  // 末端执行器 link 名称

        // 规划参数
        double velocity_scaling_factor = 0.25;  // 速度缩放因子
        double max_step = 0.01;  // 轨迹规划插值步长
        double jump_threshold = 0.0;  // 关节空间跳跃阈值，默认表示禁用跳跃检测

        // 伺服控制参数
        double servo_publish_period = 0.01;   // 控制周期（秒）
        double linear_scale = 0.5;  // 线速度缩放
        double rotational_scale = 0.5;  // 角速度缩放
        double kp_linear = 0.5;              // 位置比例增益
        double kp_angular = 0.5;             // 姿态比例增益
        double position_tolerance = 0.005;    // 位置到达阈值 (m)
        double orientation_tolerance = 0.05;  // 姿态到达阈值 (rad)
    };

    // Moveit 管理类，负责调用 moveit 控制机械臂末端运动
    class MoveitManager
    {
    public:
        // 显式构造函数，可接受外部参数
        explicit MoveitManager(rclcpp::Node::SharedPtr node,
                               const MoveitParameter& param = MoveitParameter());
        ~MoveitManager() = default;

        // 移动到某个目标位姿
        bool MoveToPose(const Pose& target_pose);
        
        // 执行一条笛卡尔轨迹
        bool ExecuteCartesianPath(const std::vector<Pose>& trajectory);

        // 伺服单步指令：向 servo 发送一条 Twist 指令
        void SendVelocityCommand(const TwistStamped& twist);

        // 停止伺服运动 (发送零速度)
        void StopMotion();

        // 获取当前末端位姿
        Pose GetCurrentPose(){ 
            if (move_group_ != nullptr) return move_group_->getCurrentPose().pose; 
            else{
                RCLCPP_ERROR(node_->get_logger(), "尚未初始化 Moveit 规划组");
                return Pose();
            }
        }

        // 计算从当前位姿到目标位姿的速度指令
        TwistStamped CalTwistFromPose(const Pose& current, const Pose& target);
        
    private:
        rclcpp::Node::SharedPtr node_;  // 持有管理类的节点
        std::unique_ptr<moveit::planning_interface::MoveGroupInterface> move_group_;  // 规划组
        std::unique_ptr<moveit_servo::Servo> servo_;  // 伺服控制
        moveit_servo::ServoParameters::SharedConstPtr servo_params_;  // 伺服参数
        MoveitParameter parameter_;  // Moveit所需参数
        rclcpp::Publisher<TwistStamped>::SharedPtr twist_cmd_pub_;  // 速度指令发布
    };
}