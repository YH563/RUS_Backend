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

        // 读取并创建 servo 参数对象（shared const ptr）
        servo_params_ = moveit_servo::ServoParameters::makeServoParameters(node_);
        if (!servo_params_) {
            RCLCPP_ERROR(node_->get_logger(), "无法加载 servo 参数，请检查 YAML 配置或参数声明");
            throw std::runtime_error("Servo parameters loading failed");
        }

        // 创建 PlanningSceneMonitor
        auto planning_scene_monitor = 
        std::make_shared<planning_scene_monitor::PlanningSceneMonitor>(node_, "robot_description");

        // 创建伺服实例
        servo_ = std::make_unique<moveit_servo::Servo>(node_, servo_params_, planning_scene_monitor);
        
        // 创建速度指令发布器（伺服默认订阅 /servo_server/delta_twist_cmds）
        std::string twist_topic = "/servo_server/delta_twist_cmds";
        twist_cmd_pub_ = node_->create_publisher<TwistStamped>(
            twist_topic,
            rclcpp::QoS(1)
        );
        RCLCPP_INFO(node_->get_logger(), "Twist命令发布器已创建，话题: %s", twist_topic.c_str());

        RCLCPP_INFO(node_->get_logger(), "伺服控制初始化完成，控制周期: %.3f s", parameter_.servo_publish_period);
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

    void MoveitManager::SendVelocityCommand(const TwistStamped& twist)
    {
        if (!twist_cmd_pub_) {
            RCLCPP_ERROR(node_->get_logger(), "Twist命令发布器未初始化，无法发送");
            return;
        }
        twist_cmd_pub_->publish(twist);
    }

    void MoveitManager::StopMotion()
    {
        TwistStamped stop_twist;
        stop_twist.header.stamp = node_->now();
        stop_twist.header.frame_id = parameter_.base_frame;

        // 所有速度置零
        stop_twist.twist.linear.x = 0.0;
        stop_twist.twist.linear.y = 0.0;
        stop_twist.twist.linear.z = 0.0;
        stop_twist.twist.angular.x = 0.0;
        stop_twist.twist.angular.y = 0.0;
        stop_twist.twist.angular.z = 0.0;

        SendVelocityCommand(stop_twist);
        RCLCPP_DEBUG(node_->get_logger(), "已发送零速度指令");
    }

    TwistStamped MoveitManager::CalTwistFromPose(const Pose& current, const Pose& target)
    {
        TwistStamped twist;
        twist.header.stamp = node_->now();
        twist.header.frame_id = parameter_.base_frame;

        // ----- 位置误差 -> 线速度 (P控制) -----
        Eigen::Vector3d pos_error(
            target.position.x - current.position.x,
            target.position.y - current.position.y,
            target.position.z - current.position.z
        );
        double dist = pos_error.norm();

        if (dist > parameter_.position_tolerance) {
            // 比例控制，但建议限制最大速度，此处简单用 kp
            twist.twist.linear.x = parameter_.kp_linear * pos_error.x();
            twist.twist.linear.y = parameter_.kp_linear * pos_error.y();
            twist.twist.linear.z = parameter_.kp_linear * pos_error.z();
        } else {
            twist.twist.linear.x = 0.0;
            twist.twist.linear.y = 0.0;
            twist.twist.linear.z = 0.0;
        }

        // ----- 姿态误差 -> 角速度 -----
        tf2::Quaternion q_curr, q_targ;
        tf2::fromMsg(current.orientation, q_curr);
        tf2::fromMsg(target.orientation, q_targ);

        // 相对旋转 q_rel = q_targ * q_curr.inverse()
        tf2::Quaternion q_rel = q_targ * q_curr.inverse();
        q_rel.normalize();

        double angle = q_rel.getAngle();
        if (angle > M_PI) angle = 2 * M_PI - angle;  // 取最短路径

        if (angle > parameter_.orientation_tolerance) {
            tf2::Vector3 axis = q_rel.getAxis();
            // 比例控制
            twist.twist.angular.x = parameter_.kp_angular * axis.x() * angle;
            twist.twist.angular.y = parameter_.kp_angular * axis.y() * angle;
            twist.twist.angular.z = parameter_.kp_angular * axis.z() * angle;
        } else {
            twist.twist.angular.x = 0.0;
            twist.twist.angular.y = 0.0;
            twist.twist.angular.z = 0.0;
        }

        return twist;
    }
}