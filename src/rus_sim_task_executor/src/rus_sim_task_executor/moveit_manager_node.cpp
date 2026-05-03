#include "rus_sim_task_executor/moveit_manager_node.hpp"

namespace RusMoveitManagerNode
{
    MoveitManagerNode::MoveitManagerNode() : rclcpp::Node("moveit_manager_node")
    {
        planner_client_ = this->create_client<ServiceGenerateTrajectory>("generate_trajectory");
        while (!planner_client_->wait_for_service(std::chrono::seconds(2))) {
            RCLCPP_INFO(this->get_logger(), "等待轨迹生成服务端上线");
        }
        RCLCPP_INFO(this->get_logger(), "客户端已连接服务端");
    }

    void MoveitManagerNode::RequestTrajectory(const Pose& start, const Pose& end)
    {
        auto request = std::make_shared<ServiceGenerateTrajectory::Request>();
        request->start_pose = start;
        request->end_pose = end;
        auto future = planner_client_->async_send_request(
            request,
            std::bind(&MoveitManagerNode::response_trajectory_callback, this, _1)
        );
    }

    bool MoveitManagerNode::ExecuteTrajectory()
    {
        if (trajectory_.empty())
        {
            RCLCPP_ERROR(
                this->get_logger(),
                "无轨迹生成"
            );
            return false;
        }
        else
        {
            if (moveit_manager_ == nullptr)
            {
                RCLCPP_ERROR(
                    this->get_logger(),
                    "规划组未初始化"
                );
                return false;
            }

            RCLCPP_INFO(this->get_logger(), "移动至初始位姿处...");
            if (!moveit_manager_->MoveToPose(trajectory_[0]))
            {
                RCLCPP_ERROR(
                    this->get_logger(),
                    "无法移动至初始位姿"
                );
                return false;
            }
            RCLCPP_INFO(this->get_logger(), "开始沿完整路径运动...");
            if (!moveit_manager_->ExecuteCartesianPath(trajectory_))
            {
                RCLCPP_ERROR(
                    this->get_logger(),
                    "机械臂运动失败"
                );
                return false;
            }
            RCLCPP_INFO(this->get_logger(), "机械臂运动完成");
            return true;
        }
    }

    void MoveitManagerNode::response_trajectory_callback(rclcpp::Client<ServiceGenerateTrajectory>::SharedFuture future)
    {
        auto response = future.get();
        if (!response->success)
        {
            RCLCPP_ERROR(
                this->get_logger(),
                "轨迹生成失败"
            );
            return;
        }
        RCLCPP_INFO(this->get_logger(), "收到轨迹点数：%zu", response->poses.size());
        trajectory_ = std::move(response->poses);
        return;
    }
}