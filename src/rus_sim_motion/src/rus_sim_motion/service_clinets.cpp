#include "rus_sim_motion/service_clients.hpp"
#include <rclcpp/logging.hpp>
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
        bool ok = wait_for_services();
        if (ok)
        {
            RCLCPP_INFO(node_->get_logger(), "所有服务均以上线");
            return;
        }
        else {
            RCLCPP_ERROR(node_->get_logger(), "请检查是否有服务节点未启动");
            return;
        }
    }

    // 向点云节点，发送预扫查指令请求
    std::pair<bool, std::string> ServiceClients::RequestPreScan(
        const std::string& cmd,
        std::chrono::seconds timeout
    ){
        auto request = std::make_shared<ServiceCmd::Request>();
        request->command = cmd;
        auto future = cloud_client_->async_send_request(request);
        if (future.wait_for(timeout) == std::future_status::ready) {
            return std::make_pair(future.get()->success, future.get()->message);
        }
        RCLCPP_ERROR(node_->get_logger(), "预扫查指令服务超时或失败");
        return {false, "预扫查指令服务超时或失败"};
    }

    // 向规划器发送生成轨迹的请求
    std::pair<bool, std::string> ServiceClients::RequestTrajectory(
        const Pose& start, 
        const Pose& end, 
        std::vector<Pose>& out_poses,
        std::chrono::seconds timeout
    ){
        auto request = std::make_shared<ServiceGenerateTrajectory::Request>();
        request->start_pose = start;
        request->end_pose = end;
        auto future = planner_client_->async_send_request(request);
        
        // 直接等待，没有 spin_some
        if (future.wait_for(timeout) == std::future_status::ready) {
            auto response = future.get();
            out_poses = response->poses;
            return {response->success, response->message};
        }
        RCLCPP_ERROR(node_->get_logger(), "轨迹生成服务超时或失败");
        return {false, "轨迹生成服务超时或失败"};
    }

    // 等待所有注册的服务都上线
    bool ServiceClients::wait_for_services(std::chrono::seconds timeout)
    {
        auto start = std::chrono::steady_clock::now();
        const auto check_duration = std::chrono::milliseconds(100); // 每次检查间隔

        while (std::chrono::steady_clock::now() - start < timeout)
        {
            bool cloud_ok = cloud_client_->wait_for_service(check_duration);
            bool planner_ok = planner_client_->wait_for_service(check_duration);
            
            if (cloud_ok && planner_ok)
                return true;
            
            // 短暂休眠以避免忙等待
            std::this_thread::sleep_for(std::chrono::milliseconds(50));
        }
        RCLCPP_ERROR(node_->get_logger(), "Timeout waiting for services");
        return false;
    }
}