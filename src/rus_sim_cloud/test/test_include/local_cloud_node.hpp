// 测试文件，用于直接读取本地的点云数据进行测试
#pragma once

#include <filesystem>

#include <rclcpp/node.hpp>
#include <rclcpp/rclcpp.hpp>

#include <pcl/io/pcd_io.h>
#include <pcl/io/ply_io.h>
#include <pcl/point_types.h>


namespace TestLocalCloud
{
    class LocalCloudNode : public rclcpp::Node
    {
    public:
        LocalCloudNode();
    private:

    };
}