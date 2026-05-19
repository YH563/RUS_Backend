#pragma once

#include <rclcpp/rclcpp.hpp>

#include "rus_sim_task_executor/moveit_manager.hpp"
#include "rus_sim_interfaces/srv/generate_trajectory.hpp"

namespace RusMoveitManagerNode
{
    using MoveitManager = RusMoveitManager::MoveitManager;  // 规划器管理类
    using ServiceGenerateTrajectory = rus_sim_interfaces::srv::GenerateTrajectory;  // 生成轨迹的服务
    using Pose = geometry_msgs::msg::Pose;  // 位姿
    using namespace std::placeholders;

    class MoveitManagerNode : public rclcpp::Node
    {
    public:
        MoveitManagerNode();
        // 初始化规划组
        void Initialize() { moveit_manager_ = std::make_unique<MoveitManager>(shared_from_this(), "fairino3_v6_group"); }
        // 发送请求，生成轨迹
        void RequestTrajectory(const Pose& start, const Pose& end);
        // 执行轨迹
        bool ExecuteTrajectory();

    private:
        // 接收到轨迹生成服务的回调函数
        void response_trajectory(rclcpp::Client<ServiceGenerateTrajectory>::SharedFuture future);
        
        std::unique_ptr<MoveitManager> moveit_manager_;  // 规划器
        rclcpp::Client<ServiceGenerateTrajectory>::SharedPtr planner_client_;  // 客户端，发布规划请求
        std::vector<Pose> trajectory_;  // 计算生成的轨迹
    };
}