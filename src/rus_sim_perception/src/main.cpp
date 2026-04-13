#include "rus_sim_perception/perception_node.hpp"
#include <rclcpp/rclcpp.hpp>

// 测试宏：开启则自动生成模拟超声图像（供无硬件测试）


#ifdef ENABLE_TESTING
#include "test_include/perception_generator.hpp"
#endif

int main(int argc, char** argv)
{
    // ROS2 初始化
    rclcpp::init(argc, argv);

    // 创建节点（使用规范指针）
    RusPerception::rus_perception_PerceptionNodePtr node =
        std::make_shared<RusPerception::PerceptionNode>();

    // 单线程执行器
    rclcpp::executors::SingleThreadedExecutor exec;
    exec.add_node(node);

#ifdef ENABLE_TESTING
    // 启动测试图像发生器
    auto generator = std::make_shared<TestPerception::PerceptionGenerator>();
    exec.add_node(generator);
    RCLCPP_INFO(node->get_logger(), "测试图像发生器已启动");
#endif

    // 循环运行
    exec.spin();
    rclcpp::shutdown();
    return 0;
}