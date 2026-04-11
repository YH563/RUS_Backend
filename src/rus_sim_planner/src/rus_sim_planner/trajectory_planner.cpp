#include "rus_sim_planner/trajectory_planner.hpp"

namespace RusTrajectoryPlanner {
    bool TrajectoryPlanner::Initialize(const MsgMeshPtr& mesh, int number_points)
    {
        if (number_points <= 0)
        {
            RCLCPP_ERROR(rclcpp::get_logger("TrajectoryPlanner"), "轨迹点数必须大于0！");
            return false;
        }
        if (!pclmesh_to_eigen(mesh)) {
            RCLCPP_ERROR(rclcpp::get_logger("TrajectoryPlanner"), "网格数据转换失败");
            return false;
        }
        number_points_ = number_points;
        is_initialized_ = true;
        return true;
    }

    bool TrajectoryPlanner::pclmesh_to_eigen(const MsgMeshPtr& mesh)
    {
        if (mesh->vertices.empty() || mesh->triangles.empty() || !mesh) {
            RCLCPP_ERROR(rclcpp::get_logger("TrajectoryPlanner"), "输入网格为空");
            return false;
        }
        else 
        {
            size_t num_vertices = mesh->vertices.size();
            size_t num_faces = mesh->triangles.size();

            // 创建顶点和面矩阵
            mesh_data_.first.resize(num_vertices, 3);  // 顶点矩阵
            mesh_data_.second.resize(num_faces, 3);   // 面矩阵

            // 对顶点矩阵和面矩阵进行填充
            for (size_t i=0; i < num_vertices; ++i) {
                mesh_data_.first(i, 0) = mesh->vertices[i].x;
                mesh_data_.first(i, 1) = mesh->vertices[i].y;
                mesh_data_.first(i, 2) = mesh->vertices[i].z;
            }
            for (size_t i=0; i < num_faces; ++i) {
                if (mesh->triangles[i].vertex_indices.size() != 3) {
                    RCLCPP_ERROR(rclcpp::get_logger("TrajectoryPlanner"), "非三角形面数据不支持");
                    return false;
                }
                mesh_data_.second(i, 0) = mesh->triangles[i].vertex_indices[0];
                mesh_data_.second(i, 1) = mesh->triangles[i].vertex_indices[1];
                mesh_data_.second(i, 2) = mesh->triangles[i].vertex_indices[2];
            }
            return true;
        }
        
    }

    bool TrajectoryPlanner::GenerateTrajectory(const Pose& start, const Pose& goal)
    {
        if (!is_initialized_) {
            RCLCPP_ERROR(rclcpp::get_logger("TrajectoryPlanner"), "轨迹规划器未初始化");
            return false;
        }
        if (mesh_data_.first.rows() == 0 || mesh_data_.second.rows() == 0) {
            RCLCPP_ERROR(rclcpp::get_logger("TrajectoryPlanner"), "三角网格数据不能为空");
            return false;
        }
        if (start.first.isApprox(goal.first) && start.second.isApprox(goal.second)) {
            RCLCPP_ERROR(rclcpp::get_logger("TrajectoryPlanner"), "起始位姿和目标位姿不能相同");
            return false;
        }
        start_pose_ = start;
        goal_pose_ = goal;
        
        // TODO
        return true;
    }
}