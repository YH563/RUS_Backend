#pragma once

#include <vector>
#include <string>
#include <Eigen/Dense>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/features/normal_3d.h>
#include <pcl/search/kdtree.h>
#include <pcl/io/pcd_io.h>
#include <pcl/common/transforms.h>
#include <pcl/filters/voxel_grid.h>
#include <rclcpp/rclcpp.hpp>
#include <pcl/common/transforms.h>
#include <geometry_msgs/msg/pose.hpp>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>

namespace RusCloudPreprocess 
{
    using CloudRGBPtr = pcl::PointCloud<pcl::PointXYZRGB>::Ptr;  // 彩色点云数据指针，为智能指针对象
    using CloudRGB = pcl::PointCloud<pcl::PointXYZRGB>;  // 彩色点云
    using CloudPtr = pcl::PointCloud<pcl::PointXYZ>::Ptr;  // 点云数据指针，为智能指针对象
    using Cloud = pcl::PointCloud<pcl::PointXYZ>;  // 点云
    using geometry_msgs::msg::Pose;  // ROS位姿
    
    // 点云预处理参数
    struct CloudParameter
    {
        // 体素滤波参数
        bool use_voxel_filter = true;       // 是否启用体素滤波
        float voxel_leaf_size = 0.003f;     // 体素大小（米），默认3mm

        // 眼在手上变换矩阵，深度相机相对于法兰的变换矩阵
        Eigen::Matrix4f camera_to_flange = Eigen::Matrix4f::Identity();  
    };

    // 点云预处理类
    class CloudPreprocess
    {
    public:
        CloudPreprocess() = default;
        ~CloudPreprocess() = default;

        // 对点云数据进行处理
        bool ProcessClouds();
        // 获取处理后点云数据
        const CloudRGBPtr& GetCloud() const;
        // 添加点云数据
        bool AddCloud(const CloudRGBPtr& cloud, const Pose& end_pose);
        // 设置点云预处理参数
        void SetFilterParamter(CloudParameter& param) { parameter_ = param; }
        // 清空数据
        void Clear(){ cloud_rgb_ptr_ = nullptr; clouds_.clear();}

    private:
        // 进行体素滤波
        bool voxel_filter(CloudRGB& cloud);
        // 合并点云数据
        bool merge_clouds();

        // 私有成员变量
        std::string class_name_ = "cloud_preprocess";  // 保存类名，用于日志保存以及输出
        CloudRGBPtr cloud_rgb_ptr_;  // 保存处理完的点云数据
        std::vector<CloudRGBPtr> clouds_;  // 保存捕获的多次点云数据，用于后续点云数据的拼接
        CloudParameter parameter_;  // 预处理参数
    };
}