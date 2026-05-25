#pragma once

#include <chrono>
#include <utility>
#include <type_traits>
#include <variant>
#include <functional>

#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose.hpp>

#include <Eigen/Dense>

namespace RusUtils
{
    using geometry_msgs::msg::Pose;
    using Eigen::Matrix4d;

    // 模板函数，可以衡量任意可调用对象的执行时间
    template <typename Func, typename... Args>
    auto TimeMeasure(Func&& f, Args&&... args) {
        using Ret = std::invoke_result_t<Func, Args...>;
        auto start = std::chrono::high_resolution_clock::now();
        if constexpr (std::is_same_v<Ret, void>) {
            std::invoke(std::forward<Func>(f), std::forward<Args>(args)...);
            auto end = std::chrono::high_resolution_clock::now();
            auto us = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
            return std::pair<long long, std::monostate>{us, {}};
        } else {
            auto ret = std::invoke(std::forward<Func>(f), std::forward<Args>(args)...);
            auto end = std::chrono::high_resolution_clock::now();
            auto us = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
            return std::pair<long long, Ret>{us, std::move(ret)};
        }
    }

    // 法兰坐标转位姿
    Pose Flange2Pose(double x, double y, double z, double a, double b, double c);

    // Pose 和 Matrix4d 的相互转换
    Matrix4d PoseToMatrix4d(const Pose& pose);
    Pose Matrix4dToPose(const Matrix4d& matrix);
}