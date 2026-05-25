#include "rus_sim_motion/motion_controller_node.hpp"
#include "rus_sim_motion/service_clients.hpp"
#include <memory>
#include <rus_sim_utils/command_definitions.hpp>

namespace RusMotionControllerNode
{
    MotionControllerNode::MotionControllerNode() : rclcpp::Node("moveit_manager_node")
    {
        // ========== 声明并加载参数 ==========
        this->declare_parameter<std::string>("robot_pose_topic", "/nonrt_state_data");
        this->declare_parameter<std::string>("cmd_service", "motion_cmd");
        this->declare_parameter("cmd_services_list", std::vector<std::string>());

        this->declare_parameter<std::string>("planning_group", "fairino3_v6_group");
        this->declare_parameter<std::string>("base_frame", "base_link");
        this->declare_parameter<std::string>("end_effector_link", "wrist3_link");
        this->declare_parameter<double>("velocity_scaling_factor", 0.25);
        this->declare_parameter<double>("max_step", 0.01);
        this->declare_parameter<double>("jump_threshold", 0.0);

        auto robot_pose_topic   = this->get_parameter("robot_pose_topic").as_string();
        auto cmd_service = this->get_parameter("cmd_service").as_string();
        auto cmd_services_list = this->get_parameter("cmd_services_list").as_string_array();

        parameter_.planning_group          = this->get_parameter("planning_group").as_string();
        parameter_.base_frame              = this->get_parameter("base_frame").as_string();
        parameter_.end_effector_link       = this->get_parameter("end_effector_link").as_string();
        parameter_.velocity_scaling_factor = this->get_parameter("velocity_scaling_factor").as_double();
        parameter_.max_step                = this->get_parameter("max_step").as_double();
        parameter_.jump_threshold          = this->get_parameter("jump_threshold").as_double();

        // 加载moveit规划组
        moveit_manager_ = std::make_unique<MoveitManager>(shared_from_this(), parameter_);

        // 创建订阅
        robot_pose_sub_ = this->create_subscription<fairino_msgs::msg::RobotNonrtState>(
            robot_pose_topic,
            10,
            std::bind(&MotionControllerNode::on_robot_pose, this, _1)
        );

        // 创建服务器
        cmd_server_ = this->create_service<rus_sim_interfaces::srv::Cmd>(
            cmd_service,
            std::bind(&MotionControllerNode::handle_cmd, this, _1, _2)
        );

        service_clients_ = std::make_unique<RusServiceClients::ServiceClients>(shared_from_this(), cmd_services_list);
    }

    void MotionControllerNode::on_robot_pose(const std::shared_ptr<fairino_msgs::msg::RobotNonrtState> msg)
    {
        if (pose_flag_ == 0) return;
        if (pose_flag_ == 1) 
        {
            start_pose_ = RusUtils::Flange2Pose(
                msg->flange_x_cur_pos,
                msg->flange_y_cur_pos,
                msg->flange_y_cur_pos,
                msg->flange_a_cur_pos,
                msg->flange_b_cur_pos,
                msg->flange_c_cur_pos
            );
            pose_flag_ = 0;
        }
        if (pose_flag_ == 2)
        {
            end_pose_ = RusUtils::Flange2Pose(
                msg->flange_x_cur_pos,
                msg->flange_y_cur_pos,
                msg->flange_y_cur_pos,
                msg->flange_a_cur_pos,
                msg->flange_b_cur_pos,
                msg->flange_c_cur_pos
            );
            pose_flag_ = 0;
        }
    }

    void MotionControllerNode::handle_cmd(
        const std::shared_ptr<rus_sim_interfaces::srv::Cmd::Request> request,
        std::shared_ptr<rus_sim_interfaces::srv::Cmd::Response> response
    ){
        // 设置起点位姿
        if (request->command == RusUtils::Commands::kSetStartPose)
        {
            pose_flag_ = 1;
            response->success = true;
            response->message = "";
            RCLCPP_INFO(this->get_logger(), "成功设置起点");
            return ;
        }
        // 设置终点位姿
        if (request->command == RusUtils::Commands::kSetEndPose)
        {
            pose_flag_ = 2;
            response->success = true;
            response->message = "";
            RCLCPP_INFO(this->get_logger(), "成功设置终点");
            return ;
        }
        // 开始执行预扫查
        if (request->command == RusUtils::Commands::kPreScanStart)
        {
            auto [ok_start, msg_start] = service_clients_->RequestPreScan(std::string(RusUtils::Commands::kPreScanStart));
            bool ok = moveit_manager_->PreScan(start_pose_, end_pose_);
            auto [ok_end, msg_end] = service_clients_->RequestPreScan(std::string(RusUtils::Commands::kPreScanEnd));
            response->success = ok_start && ok && ok_end;
            response->message = ok ? "预扫查完成" : "预扫查失败";
            return;
        }
        // 进行规划
        if (request->command == RusUtils::Commands::kPlan)
        {
            response->success = service_clients_->RequestTrajectory(start_pose_, end_pose_, trajectory_);
            response->message = response->success ? "轨迹生成成功" : "轨迹生成失败";
            return ;
        }
        // 执行
        if (request->command == RusUtils::Commands::kExecute)
        {
            response->success = execute_trajectory();
            response->message = response->success ? "机械臂运动完成" : "机械臂运动失败";
            return ;
        }
        response->success = false;
        response->message = "请检查指令是否准确";
        return;
    }

    bool MotionControllerNode::execute_trajectory()
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
}