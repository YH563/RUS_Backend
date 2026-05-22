#include "rus_sim_cloud/cloud_node.hpp"

// 只有在测试模式下才使用
#ifdef ENABLE_TESTING
#include "test_include/local_cloud_node.hpp"
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
            std::string pcd_folder = "/home/hp/cpp_test/scripts";  // 读取的点云文件夹路径
            std::string origin_pcd = "/home/hp/cpp_test/noisy_surface_full.pcd";  // 测试用的原始完整点云数据路径
            std::string pcd_file_path = "/home/hp/cpp_test/1.pcd";  // 保存的点云文件路径
            auto clouds = TestLocalCloud::LoadPCDsFromFolder(pcd_folder);
            for (const auto &cloud : clouds) 
                cloud_preprocess.AddCloud(cloud, pose);
            cloud_preprocess.ProcessClouds();
            cloud_preprocess.SaveCloud(pcd_file_path);
            TestLocalCloud::PrintCloudQualityReport(cloud_preprocess.GetCloud());
            TestLocalCloud::PrintCloudQualityReport(TestLocalCloud::LoadPCD(origin_pcd));
            return 0;
        }
    #endif

    executor.spin();
    rclcpp::shutdown();
    return 0;
}
