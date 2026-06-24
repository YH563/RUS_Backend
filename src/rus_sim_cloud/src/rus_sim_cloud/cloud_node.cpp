#include "rus_sim_cloud/cloud_node.hpp"
#include <functional>
#include <unistd.h>
#include <utility>

namespace RusCloudNode 
{
    CloudNode::CloudNode() : rclcpp::Node("cloud_node"), timer_(nullptr)
    {
        // 声明参数
        this->declare_parameter<std::string>("end_pose_topic", "/end_pose");
        this->declare_parameter<std::string>("input_cloud_topic", "/input_cloud");
        this->declare_parameter<std::string>("output_cloud_topic", "/output_cloud");
        this->declare_parameter<std::string>("robot_pose_topic", "/nonrt_state_data");
        this->declare_parameter<std::string>("cmd_service", "pre_sacn_cmd");
        this->declare_parameter<double>("flange_offset", 0.0938);
        this->declare_parameter<double>("cloud_sample_period", 2.);
        this->declare_parameter<double>("max_allowed_diff_sec", 0.05);
        this->declare_parameter<int>("max_cache_size", 50);
        this->declare_parameter<double>("voxel_leaf_size", 0.003);
        this->declare_parameter<std::string>("passthrough_field", "z");
        this->declare_parameter<double>("passthrough_limit_min", -0.5);
        this->declare_parameter<double>("passthrough_limit_max", 0.5);
        this->declare_parameter<bool>("passthrough_negative", false);
        this->declare_parameter<int>("statistical_mean_k", 50);
        this->declare_parameter<double>("statistical_std_dev_mul", 1.0);
        this->declare_parameter<std::vector<double>>("camera_to_end", {
            1.0, 0.0, 0.0, 0.0,
            0.0, 1.0, 0.0, 0.0,
            0.0, 0.0, 1.0, 0.0,
            0.0, 0.0, 0.0, 1.0
        });

        // 读取参数
        auto input_cloud_topic  = this->get_parameter("input_cloud_topic").as_string();
        auto output_cloud_topic = this->get_parameter("output_cloud_topic").as_string();
        auto robot_pose_topic   = this->get_parameter("robot_pose_topic").as_string();
        auto cmd_service          = this->get_parameter("cmd_service").as_string();
        flange_offset_ = this->get_parameter("flange_offset").as_double();
        max_allowed_diff_sec_   = this->get_parameter("max_allowed_diff_sec").as_double();
        max_cache_size_         = this->get_parameter("max_cache_size").as_int();
        cloud_sample_period_    = this->get_parameter("cloud_sample_period").as_double();
        std::vector<double> mat_vec = this->get_parameter("camera_to_end").as_double_array();
        

        // 初始化点云预处理对象
        cloud_preprocess_ = std::make_unique<CloudPreprocess>();
        cloud_cache_ = std::make_shared<PointCloud2>();
        cloud_cache_ = nullptr;
        latest_cloud_ = std::make_shared<CloudRGB>();

        // 配置预处理参数
        RusCloudPreprocess::CloudParameter param;
        param.voxel_leaf_size  = static_cast<float>(this->get_parameter("voxel_leaf_size").as_double());
        param.passthrough_field = this->get_parameter("passthrough_field").as_string();
        param.passthrough_limit_min = static_cast<float>(this->get_parameter("passthrough_limit_min").as_double());
        param.passthrough_limit_max = static_cast<float>(this->get_parameter("passthrough_limit_max").as_double());
        param.passthrough_negative = this->get_parameter("passthrough_negative").as_bool();
        param.statistical_mean_k = this->get_parameter("statistical_mean_k").as_int();
        param.statistical_std_dev_mul = static_cast<float>(this->get_parameter("statistical_std_dev_mul").as_double());
        if (mat_vec.size() == 16) {
            param.camera_to_end.row(0) << mat_vec[0], mat_vec[1], mat_vec[2], mat_vec[3];
            param.camera_to_end.row(1) << mat_vec[4], mat_vec[5], mat_vec[6], mat_vec[7];
            param.camera_to_end.row(2) << mat_vec[8], mat_vec[9], mat_vec[10], mat_vec[11];
            param.camera_to_end.row(3) << mat_vec[12], mat_vec[13], mat_vec[14], mat_vec[15];
        } else {
            RCLCPP_WARN(this->get_logger(), "camera_to_end 参数大小不为16，使用单位矩阵");
            param.camera_to_end = Eigen::Matrix4f::Identity();
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

        // 创建指令服务
        cmd_server_ = this->create_service<rus_sim_interfaces::srv::Cmd>(
            cmd_service,
            std::bind(&CloudNode::handle_cmd, this, _1, _2)
        );
        RCLCPP_INFO(this->get_logger(), "点云数据处理节点初始化完成");
    }

    bool CloudNode::SaveCloud(const std::string &file_path)
    {
        return cloud_preprocess_->SaveCloud(file_path);
    }

    void CloudNode::add_cloud_pose()
    {
        // 只在开启预扫查后进行操作
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

    void CloudNode::handle_cmd(
        const std::shared_ptr<rus_sim_interfaces::srv::Cmd::Request> request,
        std::shared_ptr<rus_sim_interfaces::srv::Cmd::Response> response
    ){
        if (request->command == RusUtils::Commands::kPreScanStart && !enabled_)
        {
            RCLCPP_INFO(this->get_logger(), "正在启动点云预处理节点");
            cloud_preprocess_->Clear();
            enabled_ = true;
            // 创建一次性定时器，延迟 10秒后执行 add_cloud_pose
            timer_ = this->create_wall_timer(
            std::chrono::seconds(10),
            [this]() {
                this->add_cloud_pose();
                this->timer_->cancel();  // 只执行一次
            });
            RCLCPP_INFO(this->get_logger(), "已启动点云预处理节点");
            response->success = true;
            response->message = "已启动点云预处理节点";
            return;
        }
        if (request->command == RusUtils::Commands::kPreScanEnd && enabled_)
        {
            publish_cloud();
            RCLCPP_INFO(this->get_logger(), "点云数据处理完成");
            enabled_ = false;
            response->success = true;
            response->message = "点云数据处理完成";
            return;
        }
        return;
    }

    void CloudNode::on_robot_pose(const RobotNonrtState::SharedPtr msg)
    {
        if (!enabled_) return;
        auto now_time = this->get_clock()->now();
        auto pose_stamped_ptr = std::make_shared<geometry_msgs::msg::PoseStamped>();
        auto pose = RusUtils::FlangePose(
            msg->flange_x_cur_pos,
            msg->flange_y_cur_pos,
            msg->flange_y_cur_pos,
            msg->flange_a_cur_pos,
            msg->flange_b_cur_pos,
            msg->flange_c_cur_pos
        );
        pose_stamped_ptr->pose = RusUtils::FlangeToEnd(pose, flange_offset_);
        pose_stamped_ptr->header.stamp = now_time;
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
        // 保存点云文件测试看看
        cloud_preprocess_->SaveCloud("/home/hp/pytest/result.pcd");
        pcl::toROSMsg(*cloud_preprocess_->GetCloud(), *cloud_result);
        cloud_pub_->publish(*cloud_result);
    }
}