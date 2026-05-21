#include "rus_sim_cloud/cloud_node.hpp"

namespace RusCloudNode 
{
    CloudNode::CloudNode() : rclcpp::Node("cloud_node"), timer_(nullptr)
    {
        // 声明参数
        this->declare_parameter<std::string>("input_cloud_topic", "/input_cloud");
        this->declare_parameter<std::string>("output_cloud_topic", "/output_cloud");
        this->declare_parameter<std::string>("robot_pose_topic", "/nonrt_state_data");
        this->declare_parameter<std::string>("cmd_topic", "/pre_sacn_cmd");
        this->declare_parameter<double>("cloud_sample_period", 2);
        this->declare_parameter<double>("max_allowed_diff_sec", 0.05);
        this->declare_parameter<int>("max_cache_size", 50);
        this->declare_parameter<bool>("use_voxel_filter", true);
        this->declare_parameter<double>("voxel_leaf_size", 0.003);
        this->declare_parameter<std::vector<double>>("camera_to_flange", {
            1.0, 0.0, 0.0, 0.0,
            0.0, 1.0, 0.0, 0.0,
            0.0, 0.0, 1.0, 0.0,
            0.0, 0.0, 0.0, 1.0
        });

        // 读取参数
        auto input_cloud_topic  = this->get_parameter("input_cloud_topic").as_string();
        auto output_cloud_topic = this->get_parameter("output_cloud_topic").as_string();
        auto robot_pose_topic   = this->get_parameter("robot_pose_topic").as_string();
        auto cmd_topic          = this->get_parameter("cmd_topic").as_string();
        max_allowed_diff_sec_   = this->get_parameter("max_allowed_diff_sec").as_double();
        max_cache_size_         = this->get_parameter("max_cache_size").as_int();
        cloud_sample_period_    = this->get_parameter("cloud_sample_period").as_double();
        std::vector<double> mat_vec = this->get_parameter("camera_to_flange").as_double_array();
        

        // 初始化点云预处理对象
        cloud_preprocess_ = std::make_unique<CloudPreprocess>();
        cloud_cache_ = std::make_shared<PointCloud2>();
        latest_cloud_ = std::make_shared<CloudRGB>();

        // 配置预处理参数
        RusCloudPreprocess::CloudParameter param;
        param.use_voxel_filter = this->get_parameter("use_voxel_filter").as_bool();
        param.voxel_leaf_size  = static_cast<float>(this->get_parameter("voxel_leaf_size").as_double());
        if (mat_vec.size() == 16) {
            param.camera_to_flange.row(0) << mat_vec[0], mat_vec[1], mat_vec[2], mat_vec[3];
            param.camera_to_flange.row(1) << mat_vec[4], mat_vec[5], mat_vec[6], mat_vec[7];
            param.camera_to_flange.row(2) << mat_vec[8], mat_vec[9], mat_vec[10], mat_vec[11];
            param.camera_to_flange.row(3) << mat_vec[12], mat_vec[13], mat_vec[14], mat_vec[15];
        } else {
            RCLCPP_WARN(this->get_logger(), "camera_to_flange 参数大小不为16，使用单位矩阵");
            param.camera_to_flange = Eigen::Matrix4f::Identity();
        }
        cloud_preprocess_->SetFilterParamter(param);

        // 创建发布器
        cloud_pub_ = this->create_publisher<PointCloud2>(output_cloud_topic, 10);

        // 创建订阅器
        cloud_sub_ = this->create_subscription<PointCloud2>(
            input_cloud_topic, 10,
            std::bind(&CloudNode::on_cloud, this, std::placeholders::_1)
        );

        robot_pose_sub_ = this->create_subscription<RobotNonrtState>(
            robot_pose_topic, 10,
            std::bind(&CloudNode::on_robot_pose, this, std::placeholders::_1)
        );

        cmd_sub_ = this->create_subscription<std_msgs::msg::String>(
            cmd_topic, 10,
            std::bind(&CloudNode::on_cmd, this, std::placeholders::_1)
        );
        RCLCPP_INFO(this->get_logger(), "点云数据处理节点初始化完成");
    }

    Pose CloudNode::flange_to_pose(double x, double y, double z, double a, double b, double c)
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

    void CloudNode::add_cloud_pose()
    {
        // 只在开启与扫查后进行操作
        if (!enabled_) return;
        if (cloud_cache_->data.empty())
        {
            RCLCPP_ERROR(this->get_logger(), "缓存的点云数据为空，请检查深度相机点云话题发布。");
            return;
        }
        if (pose_cache_.empty())
        {
            RCLCPP_ERROR(this->get_logger(), "缓存的位姿数据为空，请检查机械臂位姿话题发布。");
            return;
        }
        rclcpp::Time cloud_time(cloud_cache_->header.stamp);
        geometry_msgs::msg::PoseStamped::SharedPtr best_pose = nullptr;
        double min_diff = std::numeric_limits<double>::max();
        
        for (const auto &pose : pose_cache_) {
            rclcpp::Time pose_time(pose->header.stamp);
            double diff = std::abs((cloud_time - pose_time).seconds());
            if (diff < min_diff) {
                min_diff = diff;
                best_pose = pose;
            }
        }
        if (min_diff > max_allowed_diff_sec_) 
            RCLCPP_WARN(this->get_logger(), "点云与位姿的时间差过大(%.4f秒)，可能导致计算不准", min_diff);
        if (best_pose)
            pcl::fromROSMsg(*cloud_cache_, *latest_cloud_);
        cloud_preprocess_->AddCloud(latest_cloud_, best_pose->pose);
    }

    void CloudNode::on_cmd(const std_msgs::msg::String::SharedPtr msg)
    {
        if (msg->data == "start" && !enabled_)
        {
            RCLCPP_INFO(this->get_logger(), "启动点云预处理节点");
            cloud_preprocess_->Clear();
            enabled_ = true;
            // 创建计时器
            timer_ = this->create_wall_timer(
                std::chrono::duration<double>(cloud_sample_period_), 
                std::bind(&CloudNode::add_cloud_pose, this)
            );
        }
        if (msg->data == "stop" && enabled_)
        {
            publish_cloud();
            RCLCPP_INFO(this->get_logger(), "点云预处理计算完成");
            enabled_ = false;
        }
        return;
    }

    void CloudNode::on_robot_pose(const RobotNonrtState::SharedPtr msg)
    {
        if (!enabled_) return;
        auto pose_stamped_ptr = std::make_shared<geometry_msgs::msg::PoseStamped>();
        auto pose = flange_to_pose(
            msg->flange_x_cur_pos,
            msg->flange_y_cur_pos,
            msg->flange_y_cur_pos,
            msg->flange_a_cur_pos,
            msg->flange_b_cur_pos,
            msg->flange_c_cur_pos
        );
        pose_stamped_ptr->pose = pose;
        pose_stamped_ptr->header.stamp = this->get_clock()->now();
        pose_stamped_ptr->header.frame_id = "base_link";
        pose_cache_.push_back(pose_stamped_ptr);
        // 超过最大缓存数量的时候出队
        while (pose_cache_.size() > max_cache_size_) 
            pose_cache_.pop_front();
    }

    void CloudNode::on_cloud(const PointCloud2::SharedPtr msg)
    {
        if (!enabled_) return;
        if (msg->data.empty())
        {
            RCLCPP_ERROR(this->get_logger(), "传入的点云数据为空，请检查深度相机点云话题发布。");
            return;
        }
        cloud_cache_ = msg;
    }

    void CloudNode::publish_cloud()
    {
        cloud_preprocess_->ProcessClouds();
        PointCloud2::SharedPtr cloud_result = std::make_shared<PointCloud2>();
        cloud_result->header.frame_id = "base_link";
        cloud_result->header.stamp = this->now();
        pcl::toROSMsg(*cloud_preprocess_->GetCloud(), *cloud_result);
        cloud_pub_->publish(*cloud_result);
    }
}