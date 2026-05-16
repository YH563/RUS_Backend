#include "rus_sim_cloud/cloud_preprocess.hpp"

namespace RusCloudPreprocess
{
    const CloudRGBPtr& CloudPreprocess::GetCloud() const
    {
        if (cloud_rgb_ptr_ == nullptr)
        {
            RCLCPP_ERROR(rclcpp::get_logger(class_name_), "尚无点云数据，检查是否成功传入");
            return cloud_rgb_ptr_;
        }
        return cloud_rgb_ptr_;
    }

    bool CloudPreprocess::AddCloud(const CloudRGBPtr& cloud, const Pose& end_pose)
    {
        if (cloud == nullptr)
        {
            RCLCPP_ERROR(rclcpp::get_logger(class_name_), "传入的点云数据无效，请检查数据");
            return false;
        }
        Eigen::Matrix4f T_ee_base;  // 基坐标系到末端的变换矩阵
        tf2::fromMsg(end_pose, T_ee_base);
        auto transform_matrix = T_ee_base * parameter_.camera_to_flange;  // 计算基坐标系下的变换矩阵
        CloudRGBPtr transform_cloud(new pcl::PointCloud<pcl::PointXYZRGB>);
        // 执行点云变换
        pcl::transformPointCloud(
            *cloud,
            *transform_cloud,
            transform_matrix.cast<float>()
        );
        // 进行体素滤波
        if (voxel_filter(*transform_cloud))
        {
            clouds_.emplace_back(cloud);
            return true;
        }
        else return false;
    }

    bool CloudPreprocess::voxel_filter(CloudRGB& cloud)
    {
        if (!parameter_.use_voxel_filter)
        {
            return true;
        }
        else {
            
        }
    }
}