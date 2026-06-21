#include "rus_sim_task_executor/transfer_node.hpp"
#include <functional>
#include <rclcpp/client.hpp>

using namespace std::chrono_literals;
using namespace std::placeholders;

namespace RusTransfer {
    TransferNode::TransferNode() : Node("transfer_node")
    {
        // 声明加载参数
        this->declare_parameter<std::string>("cmd_service", "transfer_cmd");
        this->declare_parameter("cmd_services_list", std::vector<std::string>());

        // 加载客户端
        auto cmd_service = this->get_parameter("cmd_service").as_string();
        auto cmd_services_list = this->get_parameter("cmd_services_list").as_string_array();
        for(const auto& s : cmd_services_list)
        {
            clients_map_[s] = this->create_client<ServiceCmd>(s);
        }

        // 等待下游服务
        for (auto& [name, client] : clients_map_) {
            if (!client->wait_for_service(2s)) {
                RCLCPP_WARN(this->get_logger(), "服务 [%s] 未就绪", name.c_str());
            }
        }

        // 创建中转服务端
        transfer_cmd_server_ = this->create_service<ServiceCmd>(
            cmd_service,
            std::bind(&TransferNode::handle_cmd, this, _1, _2, _3)
        );
        RCLCPP_INFO(this->get_logger(), "指令中转节点已启动");
    }

    TransferNode::~TransferNode()
    {
        watchdog_stop_ = true;
        if (watchdog_thread_.joinable()) {
            watchdog_thread_.join();
        }
        RCLCPP_INFO(this->get_logger(), "节点安全关闭");
    }

    // 处理状态机节点发布的服务请求
    void TransferNode::handle_cmd(
        const std::shared_ptr<rmw_request_id_t> req_id,
        const std::shared_ptr<rus_sim_interfaces::srv::Cmd::Request> request,
        std::shared_ptr<rus_sim_interfaces::srv::Cmd::Response> response
    ){
        if (is_busy_.exchange(true)) {
            response->success = false;
            response->message = "下游服务繁忙，请稍后再试。";
            transfer_cmd_server_->send_response(*req_id, *response);
            RCLCPP_WARN(this->get_logger(), "下游服务繁忙，请稍后再试。");
            return;
        }

        ctx_.Reset();

        std::lock_guard<std::mutex> lock(ctx_.mtx);
        ctx_.total_targets = clients_map_.size();
        ctx_.req_id = req_id;      // 存储 request_id
        ctx_.response = response;          // 存储 response
        ctx_.timeout_promise = std::make_shared<std::promise<void>>();

        // 启动看门狗
        if (watchdog_thread_.joinable()) watchdog_thread_.join();
        watchdog_stop_ = false;
        watchdog_thread_ = std::thread([this]() {
            auto status = ctx_.timeout_promise->get_future().wait_for(
                std::chrono::seconds(TIMEOUT_SECONDS));
            if (watchdog_stop_.load()) return;
            if (status == std::future_status::timeout) {
                std::string partial = ctx_.GetMessage();
                RCLCPP_ERROR(rclcpp::get_logger("watchdog"), 
                            "超时 %ds，强制返回部分结果: %s", TIMEOUT_SECONDS, partial.c_str());
                finalize_and_reply(false, "Timeout partial: " + partial);
            }
        });

        // 循环向下游发布指令服务
        for(const auto& [_, client] : clients_map_)
        {
            client->async_send_request(
                request,
                [this](rclcpp::Client<ServiceCmd>::SharedFuture future)
                {
                    auto result = future.get();
                    if(ctx_.AddResult(result))
                    {
                        if (ctx_.timeout_promise) {
                            ctx_.timeout_promise->set_value();
                        }
                        std::string final_msg = "All done: " + ctx_.GetMessage();
                        finalize_and_reply(!ctx_.has_error, final_msg);
                    }
                }
            );
        }
    }

    void TransferNode::finalize_and_reply(bool success, const std::string& message)
    {
        if (!is_busy_.exchange(false)) {
            RCLCPP_DEBUG(this->get_logger(), "已回复过，忽略本次调用");
            return;
        }
        std::lock_guard<std::mutex> lock(ctx_.mtx);
        if (ctx_.response && ctx_.req_id) {
            ctx_.response->success = success;
            ctx_.response->message = message;
            transfer_cmd_server_->send_response(*ctx_.req_id, *ctx_.response);
            RCLCPP_INFO(this->get_logger(), "%s 指令的处理结果为：%s", ctx_.request->command.c_str(), message.c_str());
        }else {
            RCLCPP_ERROR(this->get_logger(), "上下文无效，无法回复");
        }
        ctx_.Reset();
    }
}