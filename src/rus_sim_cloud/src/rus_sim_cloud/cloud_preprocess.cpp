#include "rus_sim_cloud/cloud_preprocess.hpp"

namespace RusCloudPreprocess
{
    bool CloudPreprocess::ProcessClouds()
    {
        if (clouds_.empty())
        {
            RCLCPP_ERROR(rclcpp::get_logger(class_name_), "尚无点云数据，检查是否成功传入");
            return false;
        }
        return merge_clouds();
    }

    CloudRGBPtr CloudPreprocess::GetCloud() const
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
        if (cloud == nullptr || cloud->empty())
        {
            RCLCPP_ERROR(rclcpp::get_logger(class_name_), "传入的点云数据无效，请检查数据");
            return false;
        }
        Eigen::Matrix4f T_base_ee;  // 末端在基坐标系下的位姿
        pose_to_matrix(end_pose, T_base_ee);
        auto transform_matrix = T_base_ee * parameter_.camera_to_flange;  // 计算基坐标系下的变换矩阵
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
            clouds_.emplace_back(transform_cloud);
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
        // 创建体素滤波器对象
        pcl::VoxelGrid<pcl::PointXYZRGB> voxel_grid;
        
        // 设置输入点云
        voxel_grid.setInputCloud(cloud.makeShared());
        
        // 设置体素大小（叶子大小），单位：米
        // 这个值越大，降采样越厉害，点越稀疏
        voxel_grid.setLeafSize(
            parameter_.voxel_leaf_size,  // x方向体素大小
            parameter_.voxel_leaf_size,  // y方向体素大小
            parameter_.voxel_leaf_size   // z方向体素大小
        );
        
        // 执行滤波，结果存回原cloud
        voxel_grid.filter(cloud);
        
        // 检查滤波后的点云是否为空
        if (cloud.empty())
        {
            RCLCPP_WARN(rclcpp::get_logger(class_name_), 
                "体素滤波后点云为空，当前体素大小可能过大: %f", 
                parameter_.voxel_leaf_size);
            return false;
        }
        
        RCLCPP_DEBUG(rclcpp::get_logger(class_name_), 
            "体素滤波完成，体素大小: %f, 剩余点数: %zu", 
            parameter_.voxel_leaf_size, cloud.size());
        
        return true;
    }

    bool CloudPreprocess::merge_clouds()
    {
        // 创建合并后的点云
        cloud_rgb_ptr_ = CloudRGBPtr(new CloudRGB());

        // 逐帧拼接
        for (size_t i = 0; i < clouds_.size(); ++i)
        {
            if (clouds_[i] == nullptr || clouds_[i]->empty())
            {
                RCLCPP_WARN(rclcpp::get_logger(class_name_),
                            "第 %zu 帧点云为空，跳过", i);
                continue;
            }
            *cloud_rgb_ptr_ += *clouds_[i];
        }

        // 检查合并结果
        if (cloud_rgb_ptr_->empty())
        {
            RCLCPP_ERROR(rclcpp::get_logger(class_name_),
                         "合并后点云为空，所有输入帧均无效");
            cloud_rgb_ptr_ = nullptr;
            return false;
        }

        RCLCPP_INFO(rclcpp::get_logger(class_name_),
                    "点云合并完成，共 %zu 帧，总点数: %zu",
                    clouds_.size(), cloud_rgb_ptr_->size());

        // 合并后整体做一次体素滤波，去除重叠冗余点
        voxel_filter(*cloud_rgb_ptr_);
        return true;
    }

    void CloudPreprocess::pose_to_matrix(const Pose& pose, Eigen::Matrix4f& matrix)
    {
        // 从四元数构造旋转矩阵
        Eigen::Quaternionf q(
            pose.orientation.w,
            pose.orientation.x,
            pose.orientation.y,
            pose.orientation.z
        );
        matrix.setIdentity();
        matrix.block<3,3>(0,0) = q.toRotationMatrix();
        matrix(0,3) = pose.position.x;
        matrix(1,3) = pose.position.y;
        matrix(2,3) = pose.position.z;
    }
}
