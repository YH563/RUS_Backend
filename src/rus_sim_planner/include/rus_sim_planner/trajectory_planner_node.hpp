#pragma once

#include <rclcpp/publisher.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp/timer.hpp>
#include <rus_sim_interfaces/msg/detail/scan_path__struct.hpp>
#include <shape_msgs/msg/mesh.hpp>
#include "rus_sim_planner/trajectory_planner.hpp"
#include "rus_sim_interfaces/msg/scan_path.hpp"

namespace RusTrajectoryPlannerNode
{
    // 轨迹规划节点类
    class TrajectoryPlannerNode : public rclcpp::Node
    {
    public:
        TrajectoryPlannerNode();

    private:
        // 发布轨迹的回调函数
        void publish_path();

        RusTrajectoryPlanner::TrajectoryPlanner planner_;  // 轨迹规划器实例
        rclcpp::TimerBase::SharedPtr timer_;  // 定时器，用于周期性发布轨迹
        rclcpp::Subscription<shape_msgs::msg::Mesh>::SharedPtr mesh_subscription_;  // 三角网格数据订阅
        rclcpp::Publisher<rus_sim_interfaces::msg::ScanPath>::SharedPtr trajectory_publisher_;  // 轨迹发布器
    };
}