#pragma once

#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <geometry_msgs/msg/pose.hpp>
#include <moveit_visual_tools/moveit_visual_tools.h>
#include <nav_msgs/msg/path.hpp>
#include <visualization_msgs/msg/marker_array.hpp>
#include <visualization_msgs/msg/marker.hpp>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>

#include "rus_sim_interfaces/srv/generate_trajectory.hpp"

namespace TestTrajectoryPlanner 
{
    using Pose = geometry_msgs::msg::Pose;  // ROS2 Pose
    using namespace std::placeholders;
    using GenerateTrajectory = rus_sim_interfaces::srv::GenerateTrajectory;

    // 客户端节点
    class PlannerClientNode : public rclcpp::Node
    {
    public:
        PlannerClientNode(const Pose& start, const Pose& end);
        // 向服务器发送请求
        void SendRequest();
    private:
        // 接收到服务的回调函数
        void response_callback(rclcpp::Client<GenerateTrajectory>::SharedFuture future);
        
        Pose start_;  // 起始位姿
        Pose end_;  // 末端位姿
        rclcpp::Client<GenerateTrajectory>::SharedPtr planner_client_;  // 客户端
        rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr path_pub_;  // 发布轨迹
        rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr marker_pub_;
    };
}