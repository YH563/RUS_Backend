#include "rus_sim_cloud/cloud_node.hpp"

// 只有在测试模式下才使用
#ifdef ENABLE_TESTING
#include "test_include/local_cloud_node.hpp"

std::vector<pcl::PointCloud<pcl::PointXYZRGB>::Ptr> LoadPCDsFromFolder(const std::string& folder_path) {
    std::vector<pcl::PointCloud<pcl::PointXYZRGB>::Ptr> clouds;
    if (!std::filesystem::exists(folder_path) || !std::filesystem::is_directory(folder_path)) {
        RCLCPP_ERROR(rclcpp::get_logger("main"), "文件夹路径无效: %s", folder_path.c_str());
        return clouds;
    }
    for (const auto& entry : std::filesystem::directory_iterator(folder_path)) {
        if (entry.is_regular_file() && entry.path().extension() == ".pcd") {
            pcl::PointCloud<pcl::PointXYZRGB>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZRGB>);
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

#endif


int main(int argc, char **argv)
{
    bool test_mode = false;
    for (int i = 1; i < argc; ++i) {
        if (std::string(argv[i]) == "--test") {
            test_mode = true;
            break;
        }
    }

    rclcpp::init(argc, argv);
    auto node = std::make_shared<RusCloudNode::CloudNode>();
    rclcpp::executors::MultiThreadedExecutor executor;
    executor.add_node(node);
    executor.spin_some();

    #ifdef ENABLE_TESTING
        if (test_mode)
        {
            auto cloud_preprocess = RusCloudPreprocess::CloudPreprocess();
            geometry_msgs::msg::Pose pose{};
            pose.orientation.w = 1;
            std::string pcd_folder = "";  // 读取的点云文件夹路径
            auto clouds = LoadPCDsFromFolder(pcd_folder);
            for (const auto &cloud : clouds) 
                cloud_preprocess.AddCloud(cloud, pose);
            cloud_preprocess.ProcessClouds();
            return 0;
        }
    #endif

    executor.spin();
    rclcpp::shutdown();
    return 0;
}
