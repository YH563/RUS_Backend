#include "rus_sim_planner/trajectory_planner_node.hpp"

namespace RusTrajectoryPlannerNode
{
    TrajectoryPlannerNode::TrajectoryPlannerNode() : Node("trajectory_planner_node")
    {
        // 创建轨迹规划器实例
        planner_ = std::make_unique<RusTrajectoryPlanner::TrajectoryPlanner>();
        mesh_subscription_ = this->create_subscription<shape_msgs::msg::Mesh>(
            "/mesh_data", 10, 
            std::bind(&TrajectoryPlannerNode::on_mesh_data, this, std::placeholders::_1)
        );
    }

    void TrajectoryPlannerNode::on_mesh_data(const MsgMeshPtr& msg)
    {
        RCLCPP_INFO(this->get_logger(), "接收到环境网格数据，准备进行轨迹规划");
        bool is_initialized = planner_->Initialize(msg);  // 初始化轨迹规划器
        if (!is_initialized)
        {
            RCLCPP_ERROR(this->get_logger(), "轨迹规划器初始化失败！");
            return;
        }
    }
}