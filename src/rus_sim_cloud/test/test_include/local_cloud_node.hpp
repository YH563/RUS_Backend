// 测试文件，用于直接读取本地的点云数据进行测试
#pragma once

#include <cmath>
#include <numeric>
#include <filesystem>

#include <rclcpp/node.hpp>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>

#include <pcl_conversions/pcl_conversions.h>
#include <pcl/io/pcd_io.h>
#include <pcl/io/ply_io.h>
#include <pcl/point_types.h>
#include <pcl/impl/point_types.hpp>
#include <pcl/point_cloud.h>
#include <pcl/kdtree/kdtree_flann.h>
#include <pcl/features/moment_of_inertia_estimation.h>

namespace TestLocalCloud
{
    using CloudRGBPtr = pcl::PointCloud<pcl::PointXYZRGB>::Ptr;
    using CloudRGB = pcl::PointCloud<pcl::PointXYZRGB>;

    // 根据文件路径读取点云数据
    CloudRGBPtr LoadPCD(const std::string& file_path);

    // 根据文件夹路径读取点云数据
    std::vector<CloudRGBPtr> LoadPCDsFromFolder(const std::string& folder_path);

    // 点云质量评估指标结构体
    struct CloudQualityMetrics {
        size_t num_points;               // 总点数
        double density;                   // 密度（点/立方米，基于OBB包围盒体积）
        double avg_luminance;            // 平均亮度 (0-255)
        double std_luminance;            // 亮度标准差，衡量颜色均匀性
        size_t num_outliers;             // 离群点数量（基于局部邻域距离阈值）
    };

    // 评估单个点云质量，返回指标结构体
    CloudQualityMetrics EvaluateCloudQuality(const CloudRGB::ConstPtr& cloud);

    // 打印点云质量报告（到控制台）
    void PrintCloudQualityReport(const CloudRGB::ConstPtr& cloud);

    // 发布点云数据的节点
    class TestCLoudPub : public rclcpp::Node
    {
    public:
        TestCLoudPub(const std::string& file_path, const std::string& topic = "/preprocessed_cloud")
            : Node("test_cloud_pub"), file_path_(file_path)
        {
            publisher_ = this->create_publisher<sensor_msgs::msg::PointCloud2>(topic, 1);
            load_and_publish();
        }

    private:
        void load_and_publish()
        {
            auto cloud = LoadPCD(file_path_);
            if (!cloud || cloud->empty()) {
                RCLCPP_ERROR(this->get_logger(), "Failed to load cloud from %s", file_path_.c_str());
                return;
            }
            sensor_msgs::msg::PointCloud2 ros_cloud;
            pcl::toROSMsg(*cloud, ros_cloud);
            ros_cloud.header.frame_id = "base_link";
            ros_cloud.header.stamp = this->now();
            publisher_->publish(ros_cloud);
            RCLCPP_INFO(this->get_logger(), "Published cloud with %zu points", cloud->size());
        }
        
        rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr publisher_;
        std::string file_path_;
    };
}