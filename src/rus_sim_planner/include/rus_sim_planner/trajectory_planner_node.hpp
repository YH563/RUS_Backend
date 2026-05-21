#pragma once

#include <rclcpp/publisher.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp/timer.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <pcl_conversions/pcl_conversions.h>

#include "rus_sim_planner/trajectory_planner.hpp"
#include "rus_sim_interfaces/srv/generate_trajectory.hpp"
#include "rus_sim_interfaces/srv/module_init.hpp"

namespace RusTrajectoryPlannerNode
{
    using namespace std::placeholders;
    using TrajectoryPlanner = RusTrajectoryPlanner::TrajectoryPlanner;  // 轨迹规划器类
    using PointCloudPtr = pcl::PointCloud<pcl::PointXYZ>::Ptr;  // PCL 点云指针

    // 轨迹规划节点类
    class TrajectoryPlannerNode : public rclcpp::Node
    {
    public:
        TrajectoryPlannerNode();

    private:
        // 接收规划服务的回调函数
        void handle_generate_trajectory(
            const std::shared_ptr<rus_sim_interfaces::srv::GenerateTrajectory::Request> request,
            std::shared_ptr<rus_sim_interfaces::srv::GenerateTrajectory::Response> response
        );

        // 接收初始化服务的回调函数
        void handle_init(
            const std::shared_ptr<rus_sim_interfaces::srv::ModuleInit::Request> request,
            std::shared_ptr<rus_sim_interfaces::srv::ModuleInit::Response> response
        );

        // ============== 私有成员变量 ==============
        bool is_initialized_ = false;  // 是否已经初始化
        std::unique_ptr<TrajectoryPlanner> planner_;  // 轨迹规划器实例
        rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr cloud_sub_;  // 点云数据订阅
        rclcpp::Service<rus_sim_interfaces::srv::GenerateTrajectory>::SharedPtr planner_server_;  // 规划服务
        rclcpp::Service<rus_sim_interfaces::srv::ModuleInit>::SharedPtr init_server_;  // 初始化服务
        PointCloudPtr cloud_;  // 保存点云数据
    };
}