#include "rus_sim_motion/motion_controller_node.hpp"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<RusMotionControllerNode::MotionControllerNode>();
    node->Initialize();
    rclcpp::executors::MultiThreadedExecutor executor;
    // 设置位姿，用于测试
    geometry_msgs::msg::Pose start_pose;
    geometry_msgs::msg::Pose end_pose;
    node->SetStartPose(start_pose);
    node->SetEndPose(end_pose);
    executor.add_node(node);
    executor.spin();
}