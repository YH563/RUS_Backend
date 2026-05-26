#include "rus_sim_motion/moveit_manager.hpp"

namespace RusMoveitManager 
{
    MoveitManager::MoveitManager(rclcpp::Node::SharedPtr node, const MoveitParameter& param)
        : node_(node), parameter_(param)
    {
        move_group_ = std::make_unique<moveit::planning_interface::MoveGroupInterface>(node_, parameter_.planning_group);
        move_group_->setMaxVelocityScalingFactor(parameter_.velocity_scaling_factor);
        move_group_->setEndEffectorLink(parameter_.end_effector_link);
        move_group_->setPoseReferenceFrame(parameter_.base_frame);
        RCLCPP_INFO(
            node_->get_logger(), 
            "MoveItTrajectoryExecutor 初始化完成，规划组: %s，末端执行器速度缩放：%.2f", 
            parameter_.planning_group.c_str(),
            parameter_.velocity_scaling_factor
        );
    }

    bool MoveitManager::MoveToPose(const Pose& target_pose)
    {
        move_group_->setPoseTarget(target_pose);
        auto const [success, plan] = [this]{
            moveit::planning_interface::MoveGroupInterface::Plan msg;
            auto const ok = static_cast<bool>(this->move_group_->plan(msg));
            return std::make_pair(ok, msg);
        }();
        
        if (!success) {
            RCLCPP_ERROR(node_->get_logger(), "无法规划到目标点！");
            return false;
        }
        
        // 执行并检查结果
        auto exec_result = move_group_->execute(plan);
        if (exec_result != moveit::core::MoveItErrorCode::SUCCESS) {
            RCLCPP_ERROR(node_->get_logger(), "执行目标点失败，错误码: %d", exec_result.val);
            return false;
        }
        
        RCLCPP_INFO(
            node_->get_logger(), 
            "执行末端移动到目标点指令，目标点为：[%.2f, %.2f, %.2f, %.2f, %.2f, %.2f, %.2f]", 
            target_pose.position.x, target_pose.position.y, target_pose.position.z,
            target_pose.orientation.x, target_pose.orientation.y, 
            target_pose.orientation.z, target_pose.orientation.w
        );
        return true;
    }

    bool MoveitManager::ExecuteCartesianPath(const std::vector<Pose>& trajectory)
    {
        if (trajectory.empty())
        {
            RCLCPP_ERROR(node_->get_logger(), "轨迹点为空");
            return false;
        }

        moveit_msgs::msg::RobotTrajectory robot_trajectory;
        double fraction = move_group_->computeCartesianPath(trajectory, parameter_.max_step, parameter_.jump_threshold, robot_trajectory);

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

    bool MoveitManager::PreScan(const Pose& start, const Pose& end)
    {
        return true;
    }
}