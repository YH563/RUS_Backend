#pragma once

#include <memory>
#include <deque>
#include <chrono>
#include <functional>

#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <rclcpp/subscription.hpp>
#include <rclcpp/timer.hpp>
#include <sensor_msgs/msg/detail/point_cloud2__struct.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <shape_msgs/msg/mesh.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <geometry_msgs/msg/point.hpp>
#include <std_msgs/msg/detail/string__struct.hpp>
#include <std_msgs/msg/string.hpp>

#include <pcl_conversions/pcl_conversions.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/features/normal_3d.h>
#include <pcl/surface/gp3.h>

#include "rus_sim_interfaces/srv/cmd.hpp"
#include "rus_sim_cloud/cloud_preprocess.hpp"
#include "fairino_msgs/msg/robot_nonrt_state.hpp"
#include "rus_sim_utils/utils.hpp"
#include "rus_sim_utils/command_definitions.hpp"

namespace RusCloudNode 
{
    using std::placeholders::_1;
    using std::placeholders::_2;
    using RusCloudPreprocess::CloudPreprocess;
    using geometry_msgs::msg::Pose;
    using sensor_msgs::msg::PointCloud2;
    using fairino_msgs::msg::RobotNonrtState;
    using CloudRGBPtr = pcl::PointCloud<pcl::PointXYZRGB>::Ptr;  // 彩色点云数据指针，为智能指针对象
    using CloudRGB = pcl::PointCloud<pcl::PointXYZRGB>;  // 彩色点云

    // 接收点云数据，进行处理并发布处理后的点云数据
    class CloudNode : public rclcpp::Node
    {
    public:
        CloudNode();
        // 保存处理好的点云数据
        bool SaveCloud(const std::string& file_path);

    private:
        // 将位姿与点云数据进行对齐并保存数据，以进行预处理
        void add_cloud_pose();

        // 处理指令服务
        void handle_cmd(
            const std::shared_ptr<rus_sim_interfaces::srv::Cmd::Request> request,
            std::shared_ptr<rus_sim_interfaces::srv::Cmd::Response> response
        );

        // 接收位姿数据
        void on_robot_pose(const RobotNonrtState::SharedPtr msg);
        // 接收点云数据
        void on_cloud(const PointCloud2::SharedPtr msg);
        // 发布预处理后的点云数据
        void publish_cloud();

        // ============== 私有成员变量 ==============
        // 话题
        rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr cloud_sub_;  // 点云数据订阅
        rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr cloud_pub_;  // 处理后的点云数据发布
        rclcpp::Subscription<RobotNonrtState>::SharedPtr robot_pose_sub_;  // 机械臂末端位姿订阅
        rclcpp::Service<rus_sim_interfaces::srv::Cmd>::SharedPtr cmd_server_;  // 指令服务端

        // 缓存数据
        PointCloud2::SharedPtr cloud_cache_;  // 缓存最近的点云数据
        std::deque<geometry_msgs::msg::PoseStamped::SharedPtr> pose_cache_;  // 缓存最近的位姿消息
        size_t max_cache_size_ = 50; // 缓存位姿信息的最大数量
        double max_allowed_diff_sec_ = 0.05;  // 允许对齐时间的容忍范围，默认为50毫秒
        CloudRGBPtr latest_cloud_;  // 缓存用于匹配的点云信息

        bool enabled_ = false;  // 是否接受点云与位姿信息
        std::unique_ptr<CloudPreprocess> cloud_preprocess_;  // 点云预处理对象
        rclcpp::TimerBase::SharedPtr timer_;  // 计时器
        double cloud_sample_period_;  // 点云的采样周期，单位秒
    };
}