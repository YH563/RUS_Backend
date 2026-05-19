#include "rus_sim_calibration/calibration_node.hpp"

namespace RusCalibrationNode
{
    CalibrationNode::CalibrationNode() : rclcpp::Node("calibration_node")
    {
        // 声明参数
        this->declare_parameter<std::string>("image_topic", "/camera/color/image_raw");
        this->declare_parameter<std::string>("robot_pose_topic", "/robot/end_effector_pose");
        this->declare_parameter<std::string>("capture_service", "calibration_capture");
        this->declare_parameter<std::string>("compute_service", "calibration_compute");
        this->declare_parameter<std::string>("save_service", "calibration_save");
        this->declare_parameter<std::string>("result_file_path", "");

        // 棋盘格参数
        this->declare_parameter<int>("pattern_width", 9);
        this->declare_parameter<int>("pattern_height", 6);
        this->declare_parameter<double>("square_size", 0.025);

        // 相机内参（经由参数传入）
        this->declare_parameter<std::vector<double>>("camera_matrix", std::vector<double>());
        this->declare_parameter<std::vector<double>>("dist_coeffs", std::vector<double>());
        
        result_file_path_ = this->get_parameter("result_file_path").as_string();

        pattern_param_.pattern_width  = this->get_parameter("pattern_width").as_int();
        pattern_param_.pattern_height = this->get_parameter("pattern_height").as_int();
        pattern_param_.square_size_   = this->get_parameter("square_size").as_double();

        // 读取相机内参（若无参数则使用默认值）
        auto cm_vec = this->get_parameter("camera_matrix").as_double_array();
        auto dc_vec = this->get_parameter("dist_coeffs").as_double_array();

        if (cm_vec.size() == 9 && dc_vec.size() == 5)
        {
            camera_param_.camera_matrix_ = cv::Mat(3, 3, CV_64F, cm_vec.data()).clone();
            camera_param_.dist_coeffs_ = cv::Mat(1, 5, CV_64F, dc_vec.data()).clone();
        }
        else
        {
            // 使用默认内参（仅作占位，用户应提供真实值）
            camera_param_.camera_matrix_ = cv::Mat::eye(3, 3, CV_64F);
            camera_param_.dist_coeffs_ = cv::Mat::zeros(1, 5, CV_64F);
            RCLCPP_WARN(this->get_logger(),
                "相机内参未提供或尺寸不正确（需9个内参值 + 5个畸变系数），将使用默认值。");
        }

        calibration_solver_ = std::make_unique<CalibrationSolver>();

        if (!calibration_solver_->Initialize(pattern_param_, camera_param_))
        {
            RCLCPP_ERROR(this->get_logger(), "标定求解器初始化失败！");
            return;
        }
        RCLCPP_INFO(this->get_logger(), "标定求解器初始化成功。");
    }

    bool CalibrationNode::Initialize()
    {
        std::string image_topic      = this->get_parameter("image_topic").as_string();
        std::string robot_pose_topic = this->get_parameter("robot_pose_topic").as_string();
        std::string capture_service = this->get_parameter("capture_service").as_string();
        std::string compute_service = this->get_parameter("compute_service").as_string();
        std::string save_service = this->get_parameter("save_service").as_string();

        // 初始化话题、服务订阅
        image_sub_ = it_->subscribe(
            image_topic,
            1,
            std::bind(&CalibrationNode::on_image, this, _1)
        );

        robot_pose_sub_ = this->create_subscription<RobotNonrtState>(
            robot_pose_topic, 1,
            std::bind(&CalibrationNode::on_robot_pose, this, std::placeholders::_1)
        );

        capture_service_ = this->create_service<rus_sim_interfaces::srv::CalibrationCapture>(
            capture_service,
            std::bind(&CalibrationNode::handle_capture, this,
                std::placeholders::_1, std::placeholders::_2)
        );

        compute_service_ = this->create_service<rus_sim_interfaces::srv::CalibrationCompute>(
            compute_service,
            std::bind(&CalibrationNode::handle_compute, this,
                std::placeholders::_1, std::placeholders::_2)
        );

        save_service_ = this->create_service<rus_sim_interfaces::srv::CalibrationSave>(
            save_service,
            std::bind(&CalibrationNode::handle_save, this,
                std::placeholders::_1, std::placeholders::_2)
        );

        RCLCPP_INFO(this->get_logger(), "标定节点初始化完成。");
        return true;
    }

    Pose CalibrationNode::flange_to_pose(double x, double y, double z, double a, double b, double c)
    {
        // 1. 角度转弧度 (a, b, c 单位为度)
        double a_rad = a * M_PI / 180.0;
        double b_rad = b * M_PI / 180.0;
        double c_rad = c * M_PI / 180.0;

        // 2. 使用 Eigen 构建 RPY 旋转矩阵并转换为四元数
        Eigen::AngleAxisd roll(a_rad, Eigen::Vector3d::UnitX());
        Eigen::AngleAxisd pitch(b_rad, Eigen::Vector3d::UnitY());
        Eigen::AngleAxisd yaw(c_rad, Eigen::Vector3d::UnitZ());
        Eigen::Quaterniond q = yaw * pitch * roll;
        // 3. 构造 Pose
        geometry_msgs::msg::Pose pose;
        pose.position.x = x;
        pose.position.y = y;
        pose.position.z = z;
        pose.orientation.x = q.x();
        pose.orientation.y = q.y();
        pose.orientation.z = q.z();
        pose.orientation.w = q.w();

        return pose;
    }

    void CalibrationNode::on_image(const sensor_msgs::msg::Image::ConstSharedPtr msg)
    {
        // 图像回调：将 ROS 图像消息转为 cv::Mat 并缓存
        try
        {
            auto cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
            latest_color_image_ = cv_ptr->image.clone();
            has_image_ = true;
        }
        catch (cv_bridge::Exception& e)
        {
            RCLCPP_ERROR(this->get_logger(), "cv_bridge 转换失败: %s", e.what());
        }
    }

    void CalibrationNode::on_robot_pose(const RobotNonrtState::SharedPtr msg)
    {
        latest_robot_pose_ = flange_to_pose(
            msg->flange_x_cur_pos,
            msg->flange_y_cur_pos,
            msg->flange_y_cur_pos,
            msg->flange_a_cur_pos,
            msg->flange_b_cur_pos,
            msg->flange_c_cur_pos
        );
        has_robot_pose_ = true;
    }

    void CalibrationNode::handle_capture(
        const rus_sim_interfaces::srv::CalibrationCapture::Request::SharedPtr request,
        const rus_sim_interfaces::srv::CalibrationCapture::Response::SharedPtr response
    )
    {
        (void)request;

        // 检查数据是否已就绪
        if (!has_image_)
        {
            response->success = false;
            response->message = "尚未接收到图像数据，请确保相机话题正在发布。";
            RCLCPP_WARN(this->get_logger(), "%s", response->message.c_str());
            return;
        }

        if (!has_robot_pose_)
        {
            response->success = false;
            response->message = "尚未接收到机械臂位姿数据，请确保机械臂话题正在发布。";
            RCLCPP_WARN(this->get_logger(), "%s", response->message.c_str());
            return;
        }

        if (latest_color_image_.empty())
        {
            response->success = false;
            response->message = "缓存的图像为空，数据无效。";
            RCLCPP_WARN(this->get_logger(), "%s", response->message.c_str());
            return;
        }

        // 将捕获的数据传给求解器
        bool ok = calibration_solver_->AddCalibrationData(latest_robot_pose_, latest_color_image_);

        if (ok)
        {
            response->success = true;
            response->message = "成功捕获一组标定数据。";
            RCLCPP_INFO(this->get_logger(), "%s", response->message.c_str());
        }
        else
        {
            response->success = false;
            response->message = "捕获失败：可能是棋盘格检测未通过或数据无效。";
            RCLCPP_ERROR(this->get_logger(), "%s", response->message.c_str());
        }
    }

    void CalibrationNode::handle_compute(
        const rus_sim_interfaces::srv::CalibrationCompute::Request::SharedPtr request,
        const rus_sim_interfaces::srv::CalibrationCompute::Response::SharedPtr response
    )
    {
        (void)request;

        // 检查求解器状态
        if (!calibration_solver_)
        {
            response->success = false;
            response->message = "标定求解器未初始化。";
            RCLCPP_ERROR(this->get_logger(), "%s", response->message.c_str());
            return;
        }

        // 眼在手上标定
        cv::Mat eye_in_hand_result;
        bool eye_in_hand_ok = calibration_solver_->CalibrateEyeInHand(eye_in_hand_result);
        if (eye_in_hand_ok)
        {
            // 将 4x4 矩阵按行展平填充到响应中
            for (int i = 0; i < 16; i++)
            {
                int r = i / 4;
                int c = i % 4;
                response->eye_in_hand_matrix[i] = eye_in_hand_result.at<double>(r, c);
            }
            RCLCPP_INFO(this->get_logger(), "眼在手上标定成功。");
            response->message = "眼在手上标定完成";
            response->success = true;
            return;
        }
        else {
            response->success = false;
            response->message = "标定失败。请检查标定数据是否足够（≥3组）且有效。";
            RCLCPP_ERROR(this->get_logger(), "%s", response->message.c_str());
        }
    }

    void CalibrationNode::handle_save(
        const rus_sim_interfaces::srv::CalibrationSave::Request::SharedPtr request,
        const rus_sim_interfaces::srv::CalibrationSave::Response::SharedPtr response
    )
    {
        // 确定保存路径：优先使用请求中指定的路径，否则使用节点参数中的路径
        std::string save_path = request->file_path;
        if (save_path.empty())
        {
            save_path = result_file_path_;
        }

        if (save_path.empty())
        {
            response->success = false;
            response->message = "未指定保存路径，请通过服务请求的 file_path 字段或节点参数 result_file_path 提供路径。";
            RCLCPP_WARN(this->get_logger(), "%s", response->message.c_str());
            return;
        }

        // 调用求解器的保存功能
        bool ok = calibration_solver_->SaveCalibrationResult(save_path);

        if (ok)
        {
            response->success = true;
            response->message = "标定结果已保存至: " + save_path;
            RCLCPP_INFO(this->get_logger(), "%s", response->message.c_str());
        }
        else
        {
            response->success = false;
            response->message = "保存标定结果失败，请检查路径和文件权限: " + save_path;
            RCLCPP_ERROR(this->get_logger(), "%s", response->message.c_str());
        }
    }
}