#pragma once

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <cv_bridge/cv_bridge.h>
#include <image_transport/image_transport.hpp>
#include <opencv2/opencv.hpp>
#include <fstream>
#include <filesystem>

namespace RusCalibrationNode {

    // 标定用节点
    class CalibrationNode : public rclcpp::Node
    {
    public:
        CalibrationNode();
    private:

    };
}
