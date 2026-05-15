#include <rclcpp/rclcpp.hpp>
#include "rus_sim_calibration/calibration_node.hpp"

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);

    auto node = std::make_shared<RusCalibrationNode::CalibrationNode>();
    node->SetImageTransport(node);
    node->Initialize();
    rclcpp::spin(node);

    rclcpp::shutdown();
    return 0;
}