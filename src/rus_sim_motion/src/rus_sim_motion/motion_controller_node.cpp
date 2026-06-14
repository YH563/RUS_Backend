#include "rus_sim_motion/motion_controller_node.hpp"
#include <functional>

namespace RusMotionControllerNode
{
    MotionControllerNode::MotionControllerNode() : rclcpp::Node("motion_controller_node")
    {
        // ========== 声明并加载参数 ==========
        this->declare_parameter<std::string>("end_pose_topic", "/end_pose");
        this->declare_parameter<std::string>("robot_pose_topic", "/nonrt_state_data");
        this->declare_parameter<std::string>("cmd_service", "motion_cmd");
        this->declare_parameter("cmd_services_list", std::vector<std::string>());

        this->declare_parameter<std::vector<double>>("probe_to_flange", std::vector<double>());

        this->declare_parameter<std::string>("planning_group", "fairino3_v6_group");
        this->declare_parameter<std::string>("base_frame", "base_link");
        this->declare_parameter<std::string>("end_effector_link", "wrist3_link");

        this->declare_parameter<double>("velocity_scaling_factor", 0.25);
        this->declare_parameter<double>("max_step", 0.01);
        this->declare_parameter<double>("jump_threshold", 0.0);

        this->declare_parameter<double>("servo_publish_period", 0.01);
        this->declare_parameter<double>("linear_scale", 0.5);
        this->declare_parameter<double>("rotational_scale", 0.5);
        this->declare_parameter<double>("kp_linear", 0.5);
        this->declare_parameter<double>("kp_angular", 0.5);
        this->declare_parameter<double>("position_tolerance", 0.005);
        this->declare_parameter<double>("orientation_tolerance", 0.05);
        
        auto end_pose_topic = this->get_parameter("end_pose_topic").as_string();
        auto robot_pose_topic   = this->get_parameter("robot_pose_topic").as_string();
        auto cmd_service = this->get_parameter("cmd_service").as_string();

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
        // robot_pose_sub_ = this->create_subscription<fairino_msgs::msg::RobotNonrtState>(
        //     robot_pose_topic,
        //     10,
        //     std::bind(&MotionControllerNode::on_robot_pose, this, _1)
        // );

        // 创建计时器发布
        robot_pose_pub_ = this->create_publisher<PoseStamped>(end_pose_topic, 10);
        tf_buffer_ = std::make_unique<tf2_ros::Buffer>(this->get_clock());
        tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);
        timer_ = this->create_wall_timer(20ms, std::bind(&MotionControllerNode::pub_end_pose, this));

        // 创建服务器
        cmd_server_ = this->create_service<rus_sim_interfaces::srv::Cmd>(
            cmd_service,
            std::bind(&MotionControllerNode::handle_cmd, this, _1, _2, _3)
        );
        RCLCPP_INFO(this->get_logger(), "运动控制节点构造完成");
    }

    bool MotionControllerNode::Initialize()
    {
        auto cmd_services_list = this->get_parameter("cmd_services_list").as_string_array();
        RusMoveitManager::MoveitParameter param;
        param.planning_group          = this->get_parameter("planning_group").as_string();
        param.base_frame              = this->get_parameter("base_frame").as_string();
        param.end_effector_link       = this->get_parameter("end_effector_link").as_string();
        param.velocity_scaling_factor = this->get_parameter("velocity_scaling_factor").as_double();
        param.max_step                = this->get_parameter("max_step").as_double();
        param.jump_threshold          = this->get_parameter("jump_threshold").as_double();
        param.servo_publish_period    = this->get_parameter("servo_publish_period").as_double();
        param.linear_scale            = this->get_parameter("linear_scale").as_double();
        param.rotational_scale        = this->get_parameter("rotational_scale").as_double();
        param.kp_linear               = this->get_parameter("kp_linear").as_double();
        param.kp_angular             = this->get_parameter("kp_angular").as_double();
        param.position_tolerance      = this->get_parameter("position_tolerance").as_double();
        param.orientation_tolerance   = this->get_parameter("orientation_tolerance").as_double();

        // 加载moveit规划组
        moveit_manager_ = std::make_unique<MoveitManager>(shared_from_this(), param);
        // 加载服务客户端
        service_clients_ = std::make_unique<RusServiceClients::RelayNode>(shared_from_this(), cmd_services_list);
        RCLCPP_INFO(this->get_logger(), "运动控制初始化完成");
        return true;
    }

    void MotionControllerNode::on_robot_pose(const std::shared_ptr<fairino_msgs::msg::RobotNonrtState> msg)
    {
        // if (pose_flag_ == 0) return;
        // if (pose_flag_ == 1) 
        // {
        //     start_pose_ = moveit_manager_->GetCurrentPose();
        //     pose_flag_ = 0;
        // }
        // if (pose_flag_ == 2)
        // {
        //     end_pose_ = moveit_manager_->GetCurrentPose();
        //     pose_flag_ = 0;
        // }
    }

    // 发布末端位姿
    void MotionControllerNode::pub_end_pose()
    {
        geometry_msgs::msg::TransformStamped transformStamped;
        try {
            transformStamped = tf_buffer_->lookupTransform("base_link", "wrist3_link", tf2::TimePointZero);
            
            geometry_msgs::msg::PoseStamped end_effector_pose;
            end_effector_pose.header = transformStamped.header;
            end_effector_pose.pose.position.x = transformStamped.transform.translation.x;
            end_effector_pose.pose.position.y = transformStamped.transform.translation.y;
            end_effector_pose.pose.position.z = transformStamped.transform.translation.z;
            end_effector_pose.pose.orientation = transformStamped.transform.rotation;
            
            // 现在 end_effector_pose 就是末端相对于 base_link 的位姿
            robot_pose_pub_->publish(end_effector_pose);

        } catch (tf2::TransformException &ex) {
            RCLCPP_WARN(this->get_logger(), "Could not transform: %s", ex.what());
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
            response->success = true;
            response->message = "";
            geometry_msgs::msg::TransformStamped transformStamped;
            transformStamped = tf_buffer_->lookupTransform("base_link", "wrist3_link", tf2::TimePointZero);
            
            geometry_msgs::msg::PoseStamped end_effector_pose;
            end_effector_pose.header = transformStamped.header;
            end_effector_pose.pose.position.x = transformStamped.transform.translation.x;
            end_effector_pose.pose.position.y = transformStamped.transform.translation.y;
            end_effector_pose.pose.position.z = transformStamped.transform.translation.z;
            end_effector_pose.pose.orientation = transformStamped.transform.rotation;
            start_pose_ = end_effector_pose.pose;
            RCLCPP_INFO(this->get_logger(), "成功设置起点: position(%.3f, %.3f, %.3f), orientation(%.3f, %.3f, %.3f, %.3f)",
                        start_pose_.position.x, start_pose_.position.y, start_pose_.position.z,
                        start_pose_.orientation.x, start_pose_.orientation.y, start_pose_.orientation.z, start_pose_.orientation.w);
            return ;
        }
        // 设置终点位姿
        if (request->command == RusUtils::Commands::kSetEndPose)
        {
            response->success = true;
            response->message = "";
            geometry_msgs::msg::TransformStamped transformStamped;
            transformStamped = tf_buffer_->lookupTransform("base_link", "wrist3_link", tf2::TimePointZero);
            
            geometry_msgs::msg::PoseStamped end_effector_pose;
            end_effector_pose.header = transformStamped.header;
            end_effector_pose.pose.position.x = transformStamped.transform.translation.x;
            end_effector_pose.pose.position.y = transformStamped.transform.translation.y;
            end_effector_pose.pose.position.z = transformStamped.transform.translation.z;
            end_effector_pose.pose.orientation = transformStamped.transform.rotation;
            end_pose_ = end_effector_pose.pose;
            RCLCPP_INFO(this->get_logger(), "成功设置终点: position(%.3f, %.3f, %.3f), orientation(%.3f, %.3f, %.3f, %.3f)",
                        end_pose_.position.x, end_pose_.position.y, end_pose_.position.z,
                        end_pose_.orientation.x, end_pose_.orientation.y, end_pose_.orientation.z, end_pose_.orientation.w);
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
            pending_tasks_.push_back(std::async(std::launch::async, [this, req_id, response, request](){
                auto [ok, message] = service_clients_->RequestTrajectory(
                    start_pose_, end_pose_, trajectory_
                );
                response->success = ok;
                response->message = message;
                cmd_server_->send_response(*req_id, *response);
                if(ok) RCLCPP_INFO(this->get_logger(), "%s",response->message.c_str());
                else RCLCPP_ERROR(this->get_logger(), "%s",response->message.c_str());
            }));
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