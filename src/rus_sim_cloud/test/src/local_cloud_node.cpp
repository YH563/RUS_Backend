#include "test_include/local_cloud_node.hpp"

namespace TestLocalCloud
{
    std::vector<CloudRGBPtr> LoadPCDsFromFolder(const std::string& folder_path) 
    {
        std::vector<CloudRGBPtr> clouds;
        if (!std::filesystem::exists(folder_path) || !std::filesystem::is_directory(folder_path)) {
            RCLCPP_ERROR(rclcpp::get_logger("main"), "文件夹路径无效: %s", folder_path.c_str());
            return clouds;
        }
        for (const auto& entry : std::filesystem::directory_iterator(folder_path)) {
            if (entry.is_regular_file() && entry.path().extension() == ".pcd") {
                CloudRGBPtr cloud(new pcl::PointCloud<pcl::PointXYZRGB>);
                if (pcl::io::loadPCDFile<pcl::PointXYZRGB>(entry.path().string(), *cloud) == -1) {
                    RCLCPP_ERROR(rclcpp::get_logger("main"), "读取PCD文件失败: %s", entry.path().c_str());
                    continue;
                }
                clouds.push_back(cloud);
                RCLCPP_INFO(rclcpp::get_logger("main"), "成功读取点云: %s (%zu 点)", entry.path().c_str(), cloud->size());
            }
        }
        return clouds;
    }

    bool SavePCDFile(const CloudRGBPtr& cloud, const std::string& file_path)
    {
        if (!cloud || cloud->empty()) {
            RCLCPP_ERROR(rclcpp::get_logger("cloud_test"), "点云为空或无效，无法保存: %s", file_path.c_str());
            return false;
        }
        if (pcl::io::savePCDFileBinary(file_path, *cloud) == -1) {
            RCLCPP_ERROR(rclcpp::get_logger("cloud_test"), "保存PCD文件失败: %s", file_path.c_str());
            return false;
        }
        RCLCPP_INFO(rclcpp::get_logger("cloud_test"), "成功保存点云: %s (%zu 点)", file_path.c_str(), cloud->size());
        return true;
    }
}