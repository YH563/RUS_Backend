#include "rus_sim_motion/motion_controller_node.hpp"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<RusMotionControllerNode::MotionControllerNode>();
    node->Initialize();
    rclcpp::executors::MultiThreadedExecutor executor(rclcpp::ExecutorOptions(), 2);
    executor.add_node(node);

    // 设置位姿，用于测试
    geometry_msgs::msg::Pose start_pose;
    start_pose.position.x = -0.587649;
    start_pose.position.y = -0.068419;
    start_pose.position.z = -0.004565;
    geometry_msgs::msg::Pose end_pose;
    end_pose.position.x = -0.488920;
    end_pose.position.y = 0.218002;
    end_pose.position.z = -0.021148;
    node->SetStartPose(start_pose);
    node->SetEndPose(end_pose);

    executor.spin();
    rclcpp::shutdown();
    return 0;
}