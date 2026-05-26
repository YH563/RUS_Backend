#include "rus_sim_planner/trajectory_planner_node.hpp"

// 只有在测试模式下才使用
#ifdef ENABLE_TESTING
#include "test_include/planner_test.hpp"
#endif

int main(int argc, char *argv[]) {
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
    auto planner_node = std::make_shared<RusTrajectoryPlannerNode::TrajectoryPlannerNode>();
    rclcpp::executors::MultiThreadedExecutor executor;
    executor.add_node(planner_node);

    #ifdef ENABLE_TESTING
        if (test_mode) {
            RCLCPP_INFO(planner_node->get_logger(), "测试模式已启用");
            auto start_pose = geometry_msgs::msg::Pose();
            auto end_pose = geometry_msgs::msg::Pose();
            start_pose.position.x = -0.4002;
            start_pose.position.y = -0.2105;
            start_pose.position.z = -0.1622;

            end_pose.position.x = -0.4083;
            end_pose.position.y = 0.2398;
            end_pose.position.z = -0.1687;
            auto test_node = std::make_shared<TestTrajectoryPlanner::PlannerClientNode>(start_pose, end_pose);
            executor.add_node(test_node);
            executor.spin_some();
            std::this_thread::sleep_for(std::chrono::milliseconds(4000));
            test_node->SendRequest();
            executor.spin();
            rclcpp::shutdown();
            return 0;
        } 
    #endif
    
    executor.spin();
    rclcpp::shutdown();
    return 0;
}