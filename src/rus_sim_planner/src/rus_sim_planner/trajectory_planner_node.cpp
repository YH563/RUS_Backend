#include "rus_sim_planner/trajectory_planner_node.hpp"

namespace RusTrajectoryPlannerNode
{
    TrajectoryPlannerNode::TrajectoryPlannerNode() : Node("trajectory_planner_node")
    {
        planner_ = RusTrajectoryPlanner::TrajectoryPlanner();
        trajectory_publisher_ = this->create_publisher<rus_sim_interfaces::msg::ScanPath>("trajectory", 10);
        // timer_ = this->create_wall_timer(
        //     std::chrono::milliseconds(1000), std::bind(&TrajectoryPlannerNode::publish_path, this)
        // );
        
    }

    void TrajectoryPlannerNode::publish_path()
    {
        auto trajectory_opt = planner_.GetTrajectory();
        if (!trajectory_opt) {
            RCLCPP_ERROR(get_logger(), "无法获取轨迹，发布失败");
            return;
        }
        const auto& trajectory = trajectory_opt->get();
        rus_sim_interfaces::msg::ScanPath path_msg;
        for (const auto& point : trajectory) {
            geometry_msgs::msg::Pose pose_msg;
            const auto& se3 = point.first;
            pose_msg.position.x = se3.translation().x();
            pose_msg.position.y = se3.translation().y();
            pose_msg.position.z = se3.translation().z();
            Eigen::Quaterniond q(se3.rotation());
            pose_msg.orientation.x = q.x();
            pose_msg.orientation.y = q.y();
            pose_msg.orientation.z = q.z();
            pose_msg.orientation.w = q.w();
            path_msg.poses.push_back(pose_msg);
            path_msg.timestamps.push_back(point.second);  // 添加时间戳
        }
        trajectory_publisher_->publish(path_msg);
    }
}