#pragma once

#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <shape_msgs/msg/mesh.hpp>
#include <geometry_msgs/msg/point.hpp>
#include <pcl_conversions/pcl_conversions.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/features/normal_3d.h>
#include <pcl/surface/gp3.h>

#include "rus_sim_cloud/cloud_preprocess.hpp"
#include "fairino_msgs/msg/robot_nonrt_state.hpp"

namespace RusCloudNode 
{
    using RusCloudPreprocess::CloudPreprocess;

    // 接收点云数据，进行处理并发布处理后的点云数据
    class CloudNode : public rclcpp::Node
    {
    public:
        CloudNode();

    private:
        // 接收点云数据
        void on_cloud(const sensor_msgs::msg::PointCloud2::ConstSharedPtr msg);
        // 发布预处理后的点云数据


        // 私有成员变量
        std::unique_ptr<CloudPreprocess> cloud_preprocess;  // 点云预处理对象
        rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr cloud_sub_;  // 点云数据订阅
        rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr cloud_pub_;  // 处理后的点云数据发布
    };
}