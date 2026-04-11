#pragma once

#include <functional> 
#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <shape_msgs/msg/mesh.hpp>
#include <Eigen/Core>
#include <optional>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/PolygonMesh.h>
#include <pcl/conversions.h>
#include <pcl/memory.h>

namespace RusTrajectoryPlanner {
    using Vector3 = Eigen::Vector3d;  // 3D向量
    using Quaternion = Eigen::Quaterniond;  // 四元数
    using SE3 = Eigen::Isometry3d;  // 位姿矩阵
    using Pose = std::pair<Vector3, Quaternion>;  // 位姿，使用平移量加旋转量的方式
    using Trajectory = std::vector<Pose>;  // 轨迹由多个位姿点组成，每个点包含位姿和时间戳
    using MsgMeshPtr = shape_msgs::msg::Mesh::ConstSharedPtr;  // 三角网格数据指针
    using VertexMatrix = Eigen::MatrixXd;  // 网格顶点矩阵，每行表示一个顶点的坐标
    using FaceMatrix = Eigen::MatrixXi;  // 网格面矩阵，每行表示一个面的顶点索引

    // 轨迹规划器
    class TrajectoryPlanner
    {
    public:
        TrajectoryPlanner() = default;
        ~TrajectoryPlanner() = default;
        // 初始化轨迹规划器
        bool Initialize(const MsgMeshPtr& mesh, int number_points=1000);
        // 生成轨迹
        bool GenerateTrajectory(const Pose& start, const Pose& goal);
        // 获取生成的轨迹
        std::optional<std::reference_wrapper<const Trajectory>> GetTrajectory() const { 
            if (!is_initialized_) {
                RCLCPP_ERROR(rclcpp::get_logger("TrajectoryPlanner"), "轨迹规划器未初始化");
                return std::nullopt;
            }
            if (trajectory_.empty()) 
            {
                RCLCPP_ERROR(rclcpp::get_logger("TrajectoryPlanner"), "轨迹未生成");
                return std::nullopt;
            }
            return std::cref(trajectory_);
        }

    private:
        // 将PCL网格数据转换为Eigen矩阵，便于 libigl 进行处理计算
        bool pclmesh_to_eigen(const MsgMeshPtr& mesh);  

        // 私有成员变量
        bool is_initialized_ = false;  // 是否已初始化
        std::pair<VertexMatrix, FaceMatrix> mesh_data_;  // 网格数据：顶点矩阵和面矩阵
        Pose start_pose_ = {Vector3::Zero(), Quaternion::Identity()};  // 起始位姿
        Pose goal_pose_ = {Vector3::Zero(), Quaternion::Identity()};   // 目标位姿
        int number_points_ = 0;  // 轨迹点数
        Trajectory trajectory_;  // 轨迹
    };
}