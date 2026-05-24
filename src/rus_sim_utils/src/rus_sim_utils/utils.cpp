#include "rus_sim_utils/utils.hpp"

namespace RusUtils
{
    // 法兰坐标转位姿
    Pose Flange2Pose(double x, double y, double z, double a, double b, double c)
    {
        // 1. 角度转弧度 (a, b, c 单位为度)
        double a_rad = a * M_PI / 180.0;
        double b_rad = b * M_PI / 180.0;
        double c_rad = c * M_PI / 180.0;

        // 2. 使用 Eigen 构建 RPY 旋转矩阵并转换为四元数
        Eigen::AngleAxisd roll(a_rad, Eigen::Vector3d::UnitX());
        Eigen::AngleAxisd pitch(b_rad, Eigen::Vector3d::UnitY());
        Eigen::AngleAxisd yaw(c_rad, Eigen::Vector3d::UnitZ());
        Eigen::Quaterniond q = yaw * pitch * roll;
        // 3. 构造 Pose
        geometry_msgs::msg::Pose pose;
        pose.position.x = x;
        pose.position.y = y;
        pose.position.z = z;
        pose.orientation.x = q.x();
        pose.orientation.y = q.y();
        pose.orientation.z = q.z();
        pose.orientation.w = q.w();

        return pose;
    }
}