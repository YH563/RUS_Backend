#include "rus_sim_motion/motion_controller_node.hpp"
#include <memory>
#include <rclcpp/client.hpp>
#include <string>

using namespace std::placeholders;
using namespace std::chrono_literals;

namespace RusMotionControllerNode
{
    MotionControllerNode::MotionControllerNode() : rclcpp::Node("motion_controller_node")
    {
        // ========== 声明并加载参数 ==========
        this->declare_parameter<std::string>("robot_pose_topic", "/nonrt_state_data");
        this->declare_parameter<std::string>("cmd_service", "motion_cmd");
        this->declare_parameter<std::string>("planner_service", "generate_trajectory");

        this->declare_parameter<std::vector<double>>("probe_to_flange", std::vector<double>());

        this->declare_parameter<std::string>("planning_group", "fairino3_v6_group");
        this->declare_parameter<std::string>("base_frame", "base_link");
        this->declare_parameter<std::string>("end_effector_link", "wrist3_link");

        this->declare_parameter<double>("velocity_scaling_factor", 0.25);
        this->declare_parameter<double>("max_step", 0.01);
        this->declare_parameter<double>("jump_threshold", 0.0);
        
        auto robot_pose_topic   = this->get_parameter("robot_pose_topic").as_string();
        auto cmd_service = this->get_parameter("cmd_service").as_string();
        auto planner_service = this->get_parameter("planner_service").as_string();

        std::vector<double> probe_to_flange = this->get_parameter("probe_to_flange").as_double_array();
        if (probe_to_flange.size() != 16)
        {
            RCLCPP_ERROR(this->get_logger(), "载入的探头标定矩阵参数不足16个，检查参数输入");
            probe_to_flange_ = Eigen::Matrix4d::Identity();
        }
        else {
            probe_to_flange_.row(0) << probe_to_flange[0], probe_to_flange[1],probe_to_flange[2],probe_to_flange[3];
            probe_to_flange_.row(1) << probe_to_flange[4], probe_to_flange[5],probe_to_flange[6],probe_to_flange[7];
            probe_to_flange_.row(2) << probe_to_flange[8], probe_to_flange[9],probe_to_flange[10],probe_to_flange[11];
            probe_to_flange_.row(3) << probe_to_flange[12], probe_to_flange[13],probe_to_flange[14],probe_to_flange[15];
        }

        // 创建订阅
        robot_pose_sub_ = this->create_subscription<fairino_msgs::msg::RobotNonrtState>(
            robot_pose_topic,
            10,
            std::bind(&MotionControllerNode::on_robot_pose, this, _1)
        );

        // 创建服务器
        cmd_server_ = this->create_service<rus_sim_interfaces::srv::Cmd>(
            cmd_service,
            std::bind(&MotionControllerNode::handle_cmd, this, _1, _2, _3)
        );

        // 创建客户端
        planner_client_ = this->create_client<ServiceGenerateTrajectory>(planner_service);
        RCLCPP_INFO(this->get_logger(), "运动控制节点构造完成");
    }

    bool MotionControllerNode::Initialize()
    {
        RusMoveitManager::MoveitParameter param;
        param.planning_group          = this->get_parameter("planning_group").as_string();
        param.base_frame              = this->get_parameter("base_frame").as_string();
        param.end_effector_link       = this->get_parameter("end_effector_link").as_string();
        param.velocity_scaling_factor = this->get_parameter("velocity_scaling_factor").as_double();
        param.max_step                = this->get_parameter("max_step").as_double();
        param.jump_threshold          = this->get_parameter("jump_threshold").as_double();
        // 加载moveit规划组
        moveit_manager_ = std::make_unique<MoveitManager>(shared_from_this(), param);
        RCLCPP_INFO(this->get_logger(), "运动控制初始化完成");
        return true;
    }

    void MotionControllerNode::on_robot_pose(const std::shared_ptr<fairino_msgs::msg::RobotNonrtState> msg)
    {
        if (pose_flag_ == 0) return;
        if (pose_flag_ == 1) 
        {
            start_pose_ = RusUtils::FlangePose(
                msg->flange_x_cur_pos,
                msg->flange_y_cur_pos,
                msg->flange_z_cur_pos,
                msg->flange_a_cur_pos,
                msg->flange_b_cur_pos,
                msg->flange_c_cur_pos
            );
            pose_flag_ = 0;
        }
        if (pose_flag_ == 2)
        {
            end_pose_ = RusUtils::FlangePose(
                msg->flange_x_cur_pos,
                msg->flange_y_cur_pos,
                msg->flange_z_cur_pos,
                msg->flange_a_cur_pos,
                msg->flange_b_cur_pos,
                msg->flange_c_cur_pos
            );
            pose_flag_ = 0;
        }
    }

    void MotionControllerNode::handle_cmd(
        const std::shared_ptr<rmw_request_id_t> req_id,
        const std::shared_ptr<rus_sim_interfaces::srv::Cmd::Request> request,
        std::shared_ptr<rus_sim_interfaces::srv::Cmd::Response> response
    ){
        // 设置起点位姿
        if (request->command == RusUtils::Commands::kSetStartPose)
        {
            pose_flag_ = 1;
            RCLCPP_INFO(this->get_logger(), "成功设置起点: position(%.3f, %.3f, %.3f), orientation(%.3f, %.3f, %.3f, %.3f)",
                        start_pose_.position.x, start_pose_.position.y, start_pose_.position.z,
                        start_pose_.orientation.x, start_pose_.orientation.y, start_pose_.orientation.z, start_pose_.orientation.w);
            response->success = true;
            response->message = "已成功设置起点";
            return ;
        }
        // 设置终点位姿
        if (request->command == RusUtils::Commands::kSetEndPose)
        {
            pose_flag_ = 2;
            RCLCPP_INFO(this->get_logger(), "成功设置终点: position(%.3f, %.3f, %.3f), orientation(%.3f, %.3f, %.3f, %.3f)",
                        end_pose_.position.x, end_pose_.position.y, end_pose_.position.z,
                        end_pose_.orientation.x, end_pose_.orientation.y, end_pose_.orientation.z, end_pose_.orientation.w);
            response->success = true;
            response->message = "已成功设置终点";
            return ;
        }
        // 开始执行预扫查
        if (request->command == RusUtils::Commands::kPreScanStart)
        {
            // auto [ok_start, msg_start] = service_clients_->RequestPreScan(std::string(RusUtils::Commands::kPreScanStart));
            // bool ok = moveit_manager_->PreScan(start_pose_, end_pose_);
            // auto [ok_end, msg_end] = service_clients_->RequestPreScan(std::string(RusUtils::Commands::kPreScanEnd));
            // response->success = ok_start && ok && ok_end;
            // response->message = ok ? "预扫查完成" : "预扫查失败";
            // return;
        }
        // 进行规划
        if (request->command == RusUtils::Commands::kPlan)
        {
            // 向规划节点发送请求
            auto plan_request = std::make_shared<ServiceGenerateTrajectory::Request>();
            plan_request->start_pose = start_pose_;
            plan_request->end_pose = end_pose_;
            planner_client_->async_send_request(
                plan_request,
                [this, &req_id, &response](rclcpp::Client<ServiceGenerateTrajectory>::SharedFuture future){
                    auto plan_response = future.get();
                    trajectory_ = plan_response->poses;
                    response->success = plan_response->success;
                    response->message = plan_response->message;
                    cmd_server_->send_response(*req_id, *response);
                    return;
                }
            );
            return ;
        }
        // 执行
        if (request->command == RusUtils::Commands::kExecute)
        {
            response->success = execute_trajectory();
            response->message = response->success ? "机械臂运动完成" : "机械臂运动失败";
            return ;
        }
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