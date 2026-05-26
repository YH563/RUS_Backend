#include "rus_sim_cloud/cloud_node.hpp"
#include <memory>

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
    // auto node = std::make_shared<RusCloudNode::CloudNode>();
    rclcpp::executors::MultiThreadedExecutor executor;
    // executor.add_node(node);

    #ifdef ENABLE_TESTING
        if (test_mode)
        {
            std::string cloud_file_path = "/home/hp/pytest/dome_pointcloud.pcd";
            auto test_node = std::make_shared<TestLocalCloud::TestCLoudPub>(cloud_file_path);
            executor.add_node(test_node);
            executor.spin();
            rclcpp::shutdown();
            return 0;
        }
    #endif

    executor.spin();
    rclcpp::shutdown();
    return 0;
}
