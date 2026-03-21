#include "rus_sim_pointcloud/point_cloud_node.hpp"

// 只有在测试模式下才使用
#ifdef ENABLE_TESTING
#include "test_include/point_cloud_generator.hpp"
#endif


int main(int argc, char **argv)
{
    // 解析命令行参数
    bool test_mode = false;
    for (int i = 1; i < argc; ++i) {
        std::string arg(argv[i]);
        if (arg == "--test") {
            test_mode = true;
            break;
        }
    }
    
    rclcpp::init(argc, argv);
    auto point_cloud_node = std::make_shared<RusPointCloudNode::PointCloudNode>();
    rclcpp::executors::MultiThreadedExecutor executor;
    executor.add_node(point_cloud_node);

    #ifdef ENABLE_TESTING
        if (test_mode) {
            RCLCPP_INFO(point_cloud_node->get_logger(), "测试模式已启用，将启动点云生成器");
            auto point_cloud_generator = std::make_shared<TestPointCloud::PointCloudGenerator>();
            executor.add_node(point_cloud_generator);
            executor.spin();
            rclcpp::shutdown();
            return 0;
        } 
    #endif
    
    executor.spin();
    rclcpp::shutdown();
    return 0;
}