#pragma once

#include <vector>
#include <string>
#include <memory>

#include <rclcpp/node.hpp>
#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose.hpp>

#include "rus_sim_interfaces/srv/cmd.hpp"
#include "rus_sim_interfaces/srv/generate_trajectory.hpp"
#include "rus_sim_utils/command_definitions.hpp"


namespace RusServiceClients
{
    using geometry_msgs::msg::Pose;
    using ServiceCmd = rus_sim_interfaces::srv::Cmd;  // 服务指令
    using ServiceGenerateTrajectory = rus_sim_interfaces::srv::GenerateTrajectory;  // 生成轨迹的服务

    // 客户端类，管理发布的客户端
    class ServiceClients
    {
    public:
        explicit ServiceClients(rclcpp::Node::SharedPtr node, std::vector<std::string>& services_list);

        // 向点云节点，发送预扫查指令请求，返回请求结果
        std::pair<bool, std::string> RequestPreScan(
            const std::string& cmd,
            std::chrono::seconds timeout = std::chrono::seconds(3)
        );

        // 发送请求，生成轨迹，同步阻塞
        std::pair<bool, std::string> RequestTrajectory(
            const Pose& start, 
            const Pose& end, 
            std::vector<Pose>& out_poses,
            std::chrono::seconds timeout = std::chrono::seconds(20)
        );
    private:
        // 等待所有注册的服务都上线
        bool wait_for_services(std::chrono::seconds timeout = std::chrono::seconds(5));

        // 私有成员变量
        rclcpp::Node::SharedPtr node_;
        rclcpp::Client<ServiceCmd>::SharedPtr cloud_client_;  // 向点云处理节点发起指令请求的客户端
        rclcpp::Client<ServiceGenerateTrajectory>::SharedPtr planner_client_;  // 向规划器节点发起规划请求的客户端
        
        // rclcpp::Client<Cmd>::SharedPtr force_client_;  // 向力控处理节点发起指令请求的客户端
        // rclcpp::Client<Cmd>::SharedPtr ultra_image_client_;  // 向超声图像处理节点发起指令请求的客户端
    };
}