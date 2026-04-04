#pragma once

#include <string>
#include "rclcpp/rclcpp.hpp"
#include "rus_sim_force/wrench_estimate.hpp"

namespace TestRusSimForcePinocchio {
    void TestPinocchioIntegration(const std::string& urdf_path);
} // namespace TestRusSimForcePinocchio
