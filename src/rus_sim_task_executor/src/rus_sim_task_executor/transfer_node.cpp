#include "rus_sim_task_executor/transfer_node.hpp"

namespace RusTransfer {
    TransferNode::TransferNode() : Node("transfer_node")
    {
        // 声明加载参数
        this->declare_parameter("cmd_services_list", std::vector<std::string>());

        
    }

    TransferNode::~TransferNode()
    {

    }

    // 处理状态机节点发布的服务请求
    void TransferNode::handle_cmd(
        const std::shared_ptr<rmw_request_id_t> req_id,
        const std::shared_ptr<rus_sim_interfaces::srv::Cmd::Request> request,
        std::shared_ptr<rus_sim_interfaces::srv::Cmd::Response> response
    ){

    }


}