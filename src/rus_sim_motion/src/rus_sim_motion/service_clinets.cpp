#include "rus_sim_motion/service_clients.hpp"
#include <rclcpp/node.hpp>
#include <utility>

namespace RusServiceClients
{
    ServiceClients::ServiceClients(
        rclcpp::Node::SharedPtr node, 
        std::vector<std::string>& services_list
    ): node_(node)
    {
        cloud_client_ = node_->create_client<ServiceCmd>(services_list[0].c_str());
        planner_client_ = node_->create_client<ServiceGenerateTrajectory>(services_list[1].c_str());
    }

    // 向点云节点，发送预扫查指令请求
    std::pair<bool, std::string> ServiceClients::RequestPreScan(
        const std::string& cmd,
        std::chrono::seconds timeout
    ){
        auto request = std::make_shared<ServiceCmd::Request>();
        request->command = cmd;
        auto future = cloud_client_->async_send_request(request);
        auto ret = rclcpp::spin_until_future_complete(
            node_->get_node_base_interface(),
            future, 
            timeout
        );
        if (ret != rclcpp::FutureReturnCode::SUCCESS) {
            RCLCPP_ERROR(node_->get_logger(), "预扫查指令服务超时或失败");
            return std::make_pair(false, "预扫查指令服务超时或失败");
        }
        return std::make_pair(future.get()->success, future.get()->message);
    }

    // 向规划器发送生成轨迹的请求
    bool ServiceClients::RequestTrajectory(
        const Pose& start, 
        const Pose& end, 
        std::vector<Pose>& out_poses,
        std::chrono::seconds timeout
    ){
        auto request = std::make_shared<ServiceGenerateTrajectory::Request>();
        request->start_pose = start;
        request->end_pose = end;
        // 异步发送请求，获得 future
        auto future = planner_client_->async_send_request(request);
        auto ret = rclcpp::spin_until_future_complete(
            node_->get_node_base_interface(),
            future, 
            timeout
        );
        if (ret != rclcpp::FutureReturnCode::SUCCESS) {
            RCLCPP_ERROR(node_->get_logger(), "轨迹生成服务超时或失败");
            return false;
        }
        auto response = future.get();
        if (!response->success) return false;
        out_poses = std::move(response->poses);
        return true;
    }
}