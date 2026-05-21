// 测试文件，用于直接读取本地的点云数据进行测试
#pragma once

#include <filesystem>

#include <rclcpp/node.hpp>
#include <rclcpp/rclcpp.hpp>

#include <pcl/io/pcd_io.h>
#include <pcl/io/ply_io.h>
#include <pcl/point_types.h>
#include <pcl/impl/point_types.hpp>
#include <pcl/point_cloud.h>

namespace TestLocalCloud
{
    using CloudRGBPtr = pcl::PointCloud<pcl::PointXYZRGB>::Ptr;
    using CloudRGB = pcl::PointCloud<pcl::PointXYZRGB>;

    // 根据文件夹路径读取点云数据
    std::vector<CloudRGBPtr> LoadPCDsFromFolder(const std::string& folder_path);
    // 保存点云数据
    bool SavePCDFile(const CloudRGBPtr& cloud, const std::string& file_path);
}