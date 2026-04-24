#include "rus_sim_task_executor/moveit_manager.hpp"

namespace RusMoveitManager 
{
    MoveitManager::MoveitManager(
        rclcpp::Node::SharedPtr node, 
        const std::string& planning_group, 
        const std::string& base_frame
    ) : node_(node), planning_group_(planning_group), base_frame_(base_frame)
    {
        move_group_ = std::make_unique<moveit::planning_interface::MoveGroupInterface>(node_, planning_group_);
        move_group_->setEndEffectorLink("wrist3_link");
        RCLCPP_INFO(node_->get_logger(), "MoveItTrajectoryExecutor 初始化完成，规划组: %s", planning_group_.c_str());
    }

    bool MoveitManager::MoveToPose(const Pose& target_pose)
    {
        move_group_->setPoseTarget(target_pose);
        auto const [success, plan] = [this]{
            moveit::planning_interface::MoveGroupInterface::Plan msg;
            auto const ok = static_cast<bool>(this->move_group_->plan(msg));
            return std::make_pair(ok, msg);
        }();
        if (success)
        {
            move_group_->execute(plan);
            RCLCPP_INFO(
                node_->get_logger(), 
                "执行末端移动到目标点指令，目标点为：[%.2f, %.2f,%.2f, %.2f, %.2f,%.2f, %.2f]", 
                target_pose.position.x, target_pose.position.y, target_pose.position.z,
                target_pose.orientation.x, target_pose.orientation.y, target_pose.orientation.z, target_pose.orientation.w
            );
            return true;
        }
        else {
            RCLCPP_ERROR(node_->get_logger(), "无法移动到目标点！");
            return false;
        }
    }

    bool MoveitManager::ExecuteCartesianPath(
        const std::vector<Pose>& trajectory,
        double max_step,
        double jump_threshold
    ){
        if (trajectory.empty())
        {
            RCLCPP_ERROR(node_->get_logger(), "轨迹点为空");
            return false;
        }

        moveit_msgs::msg::RobotTrajectory robot_trajectory;
        double fraction = move_group_->computeCartesianPath(trajectory, max_step, jump_threshold, robot_trajectory);

        if (fraction < 0.99) {
            RCLCPP_ERROR(node_->get_logger(), "笛卡尔路径规划失败，成功比例: %.2f", fraction);
            return false;
        }

        moveit::core::MoveItErrorCode result = move_group_->execute(robot_trajectory);
        if (result == moveit::core::MoveItErrorCode::SUCCESS) {
            RCLCPP_INFO(node_->get_logger(), "轨迹执行成功");
            return true;
        } else {
            RCLCPP_ERROR(node_->get_logger(), "轨迹执行失败，错误码: %d", result.val);
            return false;
        }
    }
}