#pragma once

#include <vector>
#include <string>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/PolygonMesh.h>
#include <pcl/features/normal_3d.h>
#include <pcl/surface/gp3.h>
#include <pcl/search/kdtree.h>
#include <pcl/io/pcd_io.h>
#include <rclcpp/rclcpp.hpp>

namespace RusCloud {
    using CloudRGBPtr = pcl::PointCloud<pcl::PointXYZRGB>::Ptr;  // 彩色点云数据指针，为智能指针对象
    using CloudPtr = pcl::PointCloud<pcl::PointXYZ>::Ptr;  // 点云数据指针，为智能指针对象
    
    // 保存滤波参数的结构体
    struct FilterParameter
    {
        bool use_voxel_filter = true;       // 是否启用体素滤波
        float voxel_leaf_size = 0.003f;     // 体素大小（米），默认3mm
    };

    // 点云预处理类
    class CloudPreprocess
    {
    public:
        CloudPreprocess() = default;
        ~CloudPreprocess() = default;

        // 获取处理后点云数据
        const CloudRGBPtr& GetCloud() const;
        // 添加点云数据
        bool AddCloud(const CloudRGBPtr& cloud);
        // 设置滤波参数
        void SetFilterParamter(FilterParameter& param) { filter_parameter_ = param; }
    private:
        // 进行体素滤波
        bool voxel_filter();

        // 私有成员变量
        std::string class_name_ = "cloud_preprocess";  // 保存类名，用于日志保存以及输出
        CloudRGBPtr cloud_rgb_ptr_;  // 保存处理完的点云数据
        std::vector<CloudRGBPtr> clouds_;  // 保存捕获的多次点云数据，用于后续点云数据的拼接
        FilterParameter filter_parameter_;  // 滤波参数
    };
}