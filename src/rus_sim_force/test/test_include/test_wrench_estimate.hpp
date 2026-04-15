#pragma once

#include <string>
#include "rclcpp/rclcpp.hpp"
#include "rus_sim_force/wrench_estimate.hpp"

namespace TestWrenchEstimate {
    // 冒烟测试：验证所有对外接口可正常调用而不崩溃
    // 覆盖：构造、Estimate、EstimateAtFlange（4参数/RobotState/仿真模式）、SetSimForce/ClearSimForce
    void TestWrenchEstimatorSmoke(const std::string& urdf_path);

    // 数值验证测试：注入已知力，验证 EstimateAtFlange 反算精度
    // 覆盖：静态/动态位形、单轴力、多轴力、力+力矩、法兰坐标变换一致性（5组）
    void TestWrenchDemo(const std::string& urdf_path);

    // Pinocchio 集成验证：验证 RNEA 动力学模型与雅可比计算正确性
    // 覆盖：零外力自洽、力注入闭环、动态闭环、tau 数值对比、法兰变换一致性（5组）
    void TestPinocchioIntegration(const std::string& urdf_path);
}