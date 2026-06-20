#pragma once

#include <thread>
#include <atomic>
#include <vector>
#include <string>
#include <memory>
#include <map>
#include <string>

#include <rclcpp/node.hpp>
#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose.hpp>

#include "rus_sim_interfaces/srv/cmd.hpp"
#include "rus_sim_interfaces/srv/generate_trajectory.hpp"
#include "rus_sim_utils/command_definitions.hpp"

namespace RusTransfer
{
    using geometry_msgs::msg::Pose;
    using ServiceCmd = rus_sim_interfaces::srv::Cmd;  // 服务指令

    // 节点状态，保存中转节点状态变量，进行服务结果整合
    struct NodeState
    {
        std::mutex mtx;  // 保护内部变量
        int total_targets = 0;  // 转发目标下游节点的数量
        int counter = 0;  // 计数器，确保在所有服务返回处理结果后，再返回完整的处理结果
        std::string aggregated_message = "";  // 整合后的完整信息
        bool has_error = false;

        // 重置
        void Reset() {
            std::lock_guard<std::mutex> lock(mtx);
            total_targets = 0;
            counter = 0;
            has_error = false;
            aggregated_message.clear();
        }

        // 添加处理结果
        bool AddResult(const std::shared_ptr<ServiceCmd::Response>& result)
        {
            std::lock_guard<std::mutex> lock(mtx);
            aggregated_message += result->message + "; ";
            if (!result->success) has_error = true;
            counter++;
            return (counter >= total_targets);
        }
    };

    // 中转节点，负责接收指令，向下游节点发布服务
    class TransferNode : rclcpp::Node
    {
    public:
        TransferNode();

        ~TransferNode();
    private:
        // 处理状态机节点发布的服务请求
        void handle_cmd(
            const std::shared_ptr<rmw_request_id_t> req_id,
            const std::shared_ptr<rus_sim_interfaces::srv::Cmd::Request> request,
            std::shared_ptr<rus_sim_interfaces::srv::Cmd::Response> response
        );

        // 私有成员变量
        // 接收状态机指令，向下游节点转发
        rclcpp::Service<ServiceCmd>::SharedPtr transfer_cmd_server_;  
        // 保存服务名称与下游客户端的键值对
        std::unordered_map<std::string, rclcpp::Client<ServiceCmd>::SharedPtr> clients_map_;

        // 必须的状态变量
        std::atomic<bool> is_busy_{false};  // 服务是否在繁忙，单次只允许处理单条服务指令
        NodeState node_state_;  // 保存处理每次服务请求时的状态
    };
}
