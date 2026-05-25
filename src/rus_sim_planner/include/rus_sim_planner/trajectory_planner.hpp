#pragma once

#include <functional>
#include <optional>

#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <shape_msgs/msg/mesh.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <tf2/LinearMath/Transform.h>

#include <Eigen/Core>
#include <Eigen/Sparse>
#include <Eigen/IterativeLinearSolvers>
#include <Eigen/Dense>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/kdtree/kdtree_flann.h>
#include <pcl/conversions.h>
#include <pcl/memory.h>
#include <pcl/features/normal_3d.h>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/dijkstra_shortest_paths.hpp>

#include "rus_sim_utils/utils.hpp"

namespace RusTrajectoryPlanner 
{
    using Vector3d = Eigen::Vector3d;  // 3D向量
    using Matrix4d = Eigen::Matrix4d;  // 4x4矩阵
    using Quaterniond = Eigen::Quaterniond;  // 四元数
    using SparseMatrixd = Eigen::SparseMatrix<double>;  // 稀疏矩阵
    using Pose = geometry_msgs::msg::Pose;  // ROS2 Pose
    using Trajectory = std::vector<Pose>;  // 轨迹由多个位姿点组成
    using Point = pcl::PointXYZ;  // PCL 点
    using CloudPtr = pcl::PointCloud<pcl::PointXYZ>::Ptr;  // PCL 点云指针
    using CloudNormalsPtr = pcl::PointCloud<pcl::PointNormal>::Ptr;  // 带有法向量的点云指针
    using Graph = boost::adjacency_list<boost::vecS, boost::vecS, boost::undirectedS,
                                    boost::no_property,                   // 顶点无属性
                                    boost::property<boost::edge_weight_t, float>>; // 边有权重

    // Point 转 Vector3d 的函数
    inline Vector3d PointToVector3d(const Point& p){return Vector3d(p.x, p.y, p.z);}

    // 计算两点间的距离
    inline double Distance(const Point& p1, const Point& p2){
        double dx = p1.x - p2.x;
        double dy = p1.y - p2.y;
        double dz = p1.z - p2.z;
        return std::sqrt(dx*dx + dy*dy + dz*dz);
    }

    // 从 PointNormal 中获取 Point
    inline Point PointNormalToPoint(const pcl::PointNormal& p){return Point(p.x, p.y, p.z);}

    // 工具函数，根据法向量+切向量生成对应四元数，保持末端姿态固定
    Quaterniond GenerateQuaternion(Vector3d& normal, Vector3d& tangent);

    // 参数结构体
    struct TrajectoryParameter
    {
        double alpha = 1;  // 椭圆 Gabriel 条件检查参数
        int graph_k = 30;  // 构建初始图的 k-NN 参数
        int normal_k = 30;  // 法线估计的参数
        int projection_k = 30;  // 重投影的参数
        double tol = 1e-6;  // 长度变化容差
        int max_iter = 40;  // 最大迭代轮次
        bool use_smoothing = true;  // 是否开启平滑
        double lambda = 0.63;  // 平滑参数
        double mu = -0.65;  // 平滑参数
        double flange_offset = 0.0938;  // 法兰相对TF树末端的Z轴方向的偏移量
        Matrix4d probe_to_flange = Matrix4d::Identity();  // 法兰到探头的变换矩阵
    };

    // 轨迹规划器
    class TrajectoryPlanner
    {
    public:
        TrajectoryPlanner() = default;
        ~TrajectoryPlanner() = default;

        // 加载点云数据
        bool LoadCloud(const CloudPtr& cloud);
        // 设置参数
        void SetParameter(TrajectoryParameter parameter){ parameter_ = parameter; }
        // 生成轨迹
        bool GenerateTrajectory(const Pose& start, const Pose& goal);
        // 获取生成的轨迹
        std::optional<std::reference_wrapper<const Trajectory>> GetTrajectory() const;

    private:
        // 生成连接图
        void generate_graph();
        // 运行 dijkstra 算法，获取初始路径，根据起点和终点的索引
        bool generate_origin_path(int start_idx, int end_idx);
        // 椭圆 Gabriel 条件检查
        bool elliptic_gabriel_condition(int i, int j);
        bool point_inside_rotated_ellipsoid(const Point& pi, const Point& pj, const Point& pk, double alpha);

        // 计算全局点云的法向量
        bool compute_global_normals(const CloudPtr&);
        // 计算路径点的法向量
        void compute_path_normals();
        // 计算路径总长度
        double compute_path_length(const std::vector<Vector3d> path);
        // 构造用于优化的矩阵参数
        void build_m(); 
        // 定向投影
        Vector3d project_point(const Vector3d&, const Vector3d&);
        // Taubin 平滑
        void taubin_smooth();
        // 根据点坐标查询点云中与之距离最近的点
        int find_nearest_point(const Point& p);
        // 计算末端探头的Pose
        Pose cal_probe_pose(const Pose& pose);
        // 计算Moveit规划末端的真实位姿
        Pose cal_end_pose(const Pose& pose);

        // ============== 私有成员变量 ==============
        bool is_initialized_ = false;  // 是否已初始化
        std::string class_name_ = "trajectory_planner";  // 保存类名，用于日志保存以及输出
        Pose start_pose_ {};  // 起始位姿
        Pose goal_pose_ {};   // 目标位姿
        Trajectory trajectory_;  // 轨迹

        // 点云相关的成员变量
        pcl::KdTreeFLANN<Point> tree_;  // KDTree
        CloudNormalsPtr cloud_normals_ptr_;  // 携带法向量的点云数据
        std::shared_ptr<Graph> graph_ptr_;  // 图对象
        std::vector<std::pair<Point, int>> origin_path_;  // 包含索引的初始路径
        SparseMatrixd M;  // 用于优化的矩阵
        std::vector<Vector3d> result_path_;  // 保存优化好的路径
        std::vector<Vector3d> result_path_normals_;  // 保存路径上的法向量
        TrajectoryParameter parameter_;  // 轨迹生成相关参数
    };
}