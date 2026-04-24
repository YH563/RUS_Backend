#include "test_include/point_cloud_generator.hpp"

namespace TestPointCloud {
    PointCloudGenerator::PointCloudGenerator() : Node("point_cloud_generator")
    {
        // 1. 声明参数
        this->declare_parameter<std::string>("topic_name", "/pointcloud_data");
        this->declare_parameter<double>("publish_rate", 1.0/5); // Hz
        this->declare_parameter<std::string>("frame_id", "world");

        // 2. 创建发布者
        std::string topic_name = this->get_parameter("topic_name").as_string();
        publisher_ = this->create_publisher<sensor_msgs::msg::PointCloud2>(topic_name, 10);
        
        // 加载测试数据集
        std::string pcd_path = "/home/yh_ros2/RUS_Backend/src/rus_sim_pointcloud/test/convex_cloud.pcd";
        publish_pointcloud(pcd_path);

        RCLCPP_INFO(this->get_logger(), "点云生成器已启动，将在话题 [%s] 上发布数据", topic_name.c_str());
    }

    void PointCloudGenerator::publish_pointcloud(const std::string& path)
    {
        PointCloudPtr cloud(new pcl::PointCloud<pcl::PointXYZ>);
        if (pcl::io::loadPCDFile<pcl::PointXYZ>(path, *cloud) == -1) {
            RCLCPP_ERROR(this->get_logger(),"Couldn't read file %s\n", path.c_str());
            return ;
        }
        RCLCPP_INFO(this->get_logger(), "成功读取 PCD 文件，点数: %zu", cloud->size());
        sensor_msgs::msg::PointCloud2 ros_cloud;
        pcl::toROSMsg(*cloud, ros_cloud);
        ros_cloud.header.frame_id = "base_link";
        ros_cloud.header.stamp = this->now();
        publisher_->publish(ros_cloud);
        RCLCPP_INFO(this->get_logger(), "点云已发布一次到 /pointcloud_data");
    }

}
