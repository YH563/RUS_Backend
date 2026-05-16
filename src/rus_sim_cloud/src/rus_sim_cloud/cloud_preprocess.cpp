#include "rus_sim_cloud/cloud_preprocess.hpp"

namespace RusCloud
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

    bool CloudPreprocess::AddCloud(const CloudRGBPtr& cloud)
    {
        if (cloud == nullptr)
        {
            RCLCPP_ERROR(rclcpp::get_logger(class_name_), "传入的点云数据无效，请检查数据");
            return false;
        }
        clouds_.emplace_back(cloud);
    }
}