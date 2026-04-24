#pragma once

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <sensor_msgs/point_cloud2_iterator.hpp>
#include <random>
#include <cmath>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/io/pcd_io.h>
#include <pcl_conversions/pcl_conversions.h>

namespace TestPointCloud {
    using PointCloudPtr = pcl::PointCloud<pcl::PointXYZ>::Ptr;  // PCL 点云指针
    // 测试用的点云生成器
    class PointCloudGenerator : public rclcpp::Node
    {
    public:
        PointCloudGenerator();
    private:
        void publish_pointcloud(const std::string& path);
        rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr publisher_;
        rclcpp::TimerBase::SharedPtr timer_;
    };

}