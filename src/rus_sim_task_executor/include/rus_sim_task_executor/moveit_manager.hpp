#pragma once

#include <vector>

#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <geometry_msgs/msg/pose.hpp>
#include <moveit/exceptions/exceptions.h>


namespace RusMoveitManager
{
    using Pose = geometry_msgs::msg::Pose;  // 位姿

    // Moveit 管理类，负责调用 moveit 控制机械臂末端运动
    class MoveitManager
    {
    public:
        // 显式构造函数
        explicit MoveitManager(
            rclcpp::Node::SharedPtr node, 
            const std::string& planning_group, 
            const std::string& base_frame = "base_link"
        );
        // 移动到某个目标位姿
        bool MoveToPose(const Pose& target_pose);
        // 执行一条笛卡尔轨迹
        bool ExecuteCartesianPath(
            const std::vector<Pose>& trajectory,
            double max_step = 0.01,
            double jump_threshold = 0.0 
        );
        // 获取当前末端位姿
        Pose GetCurrentPose(){ 
            if (move_group_ != nullptr) return move_group_->getCurrentPose().pose; 
            else{
                RCLCPP_ERROR(node_->get_logger(), "尚未初始化 Moveit 规划组");
                return Pose();
            }
        }
        
    private:
        rclcpp::Node::SharedPtr node_;  // 持有管理类的节点
        std::unique_ptr<moveit::planning_interface::MoveGroupInterface> move_group_;  // 规划组
        std::string planning_group_;  // 规划组名称
        std::string base_frame_;  // 规划组处于的坐标系
    };
}