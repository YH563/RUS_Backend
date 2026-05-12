#pragma once

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <cv_bridge/cv_bridge.h>
#include <image_transport/image_transport.hpp>
#include <opencv2/opencv.hpp>
#include <memory>

#include "rus_sim_calibration/hand_eye_calibration.hpp"

namespace RusCalibrationNode {
    using RusCalibration::CalibrationSolver;

    // 标定用节点
    class CalibrationNode : public rclcpp::Node
    {
    public:
        CalibrationNode();
    private:
        std::unique_ptr<CalibrationSolver> calibration_solver_;  // 手眼标定求解器
    };
}
