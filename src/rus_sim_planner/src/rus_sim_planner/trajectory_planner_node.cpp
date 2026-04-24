#include "rus_sim_planner/trajectory_planner_node.hpp"

namespace RusTrajectoryPlannerNode
{
    TrajectoryPlannerNode::TrajectoryPlannerNode() : Node("trajectory_planner_node")
    {
        // 创建轨迹规划器实例
        cloud_ = std::make_shared<pcl::PointCloud<pcl::PointXYZ>>();
        planner_ = std::make_unique<RusTrajectoryPlanner::TrajectoryPlanner>();
        point_cloud_subscription_ = this->create_subscription<sensor_msgs::msg::PointCloud2>(
            "/pointcloud_data", 10, 
            [this](const sensor_msgs::msg::PointCloud2::SharedPtr msg){
                pcl::fromROSMsg(*msg, *cloud_);
                planner_->Initialize(cloud_);
            }
        );
        planner_service_ = this->create_service<rus_sim_interfaces::srv::GenerateTrajectory>(
            "generate_trajectory",
            std::bind(&TrajectoryPlannerNode::handle_generate_trajectory, this, _1, _2)
        );
        RCLCPP_INFO(this->get_logger(), "轨迹规划器节点已创建");
    }

    void TrajectoryPlannerNode::handle_generate_trajectory(
        const std::shared_ptr<rus_sim_interfaces::srv::GenerateTrajectory::Request> request,
        std::shared_ptr<rus_sim_interfaces::srv::GenerateTrajectory::Response> response
    ){
        auto start = request->start_pose;
        auto end = request->end_pose;
        RCLCPP_INFO(
            this->get_logger(), 
            "开始生成目标轨迹，起点为：[%.2f, %.2f, %.2f]，终点为：[%.2f, %.2f, %.2f]。",
            start.position.x, start.position.y, start.position.z,
            end.position.x, end.position.y, end.position.z
        );
        if (!planner_->GenerateTrajectory(start, end))
        {
            response->success = false;
            RCLCPP_ERROR(this->get_logger(), "轨迹生成失败！");
            return;
        }
        else
        {
            auto trajectory = planner_->GetTrajectory();
            if (!trajectory)
            {
                response->success = false;
                RCLCPP_ERROR(this->get_logger(), "所生成的轨迹点数量为0");
                return;
            }
            else
            {
                response->poses = trajectory.value().get();
                response->success = true;
                RCLCPP_INFO(this->get_logger(), "已生成轨迹点，数量为%.zu，坐标如下：", response->poses.size());
                for (const auto& p : response->poses)
                {
                    RCLCPP_INFO(
                        this->get_logger(), 
                        "[%.2f, %.2f,%.2f, %.2f, %.2f,%.2f, %.2f]", 
                        p.position.x, p.position.y, p.position.z,
                        p.orientation.x, p.orientation.y, p.orientation.z, p.orientation.w
                    );
                }
                RCLCPP_INFO(this->get_logger(), "轨迹生成完毕");
            }
        }
    }
    
}