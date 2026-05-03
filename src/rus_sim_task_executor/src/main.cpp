#include "rus_sim_task_executor/moveit_manager_node.hpp"

int main(int argc, char *argv[])
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
    auto moveit_node = std::make_shared<RusMoveitManagerNode::MoveitManagerNode>();
    rclcpp::executors::MultiThreadedExecutor executor;
    executor.add_node(moveit_node);
    moveit_node->Init();
    
    auto start_pose = geometry_msgs::msg::Pose();
    auto end_pose = geometry_msgs::msg::Pose();
    start_pose.position.x = -0.4002;
    start_pose.position.y = -0.2105;
    start_pose.position.z = -0.1622;

    end_pose.position.x = -0.4083;
    end_pose.position.y = 0.2398;
    end_pose.position.z = -0.1687;

    // 发送请求
    moveit_node->RequestTrajectory(start_pose, end_pose);
    moveit_node->ExecuteTrajectory();
    executor.spin();
    rclcpp::shutdown();
    return 0;
}