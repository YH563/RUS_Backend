#include "test_include/geodesic_test.hpp"

namespace TestGeodesic{
    GeodesicNode::GeodesicNode() : rclcpp::Node("geodesic_node")
    {
        mesh_subscriber_ = this->create_subscription<MsgMesh>(
            "/mesh_data", 10, 
            std::bind(&GeodesicNode::on_mesh_data, this, std::placeholders::_1)
        );

        distance_publisher_ = this->create_publisher<DistanceArray>(
            "/geodesic_distance", 10);
    }

    void GeodesicNode::on_mesh_data(const MsgMeshPtr& msg)
    {
        size_t num_vertices = msg->vertices.size();
        size_t num_faces = msg->triangles.size();

        auto mesh_data = std::make_pair(Eigen::MatrixXd(), Eigen::MatrixXi());

        // 创建顶点和面矩阵
        mesh_data.first.resize(num_vertices, 3);  // 顶点矩阵
        mesh_data.second.resize(num_faces, 3);   // 面矩阵

        // 对顶点矩阵和面矩阵进行填充
        for (size_t i=0; i < num_vertices; ++i) {
            mesh_data.first(i, 0) = msg->vertices[i].x;
            mesh_data.first(i, 1) = msg->vertices[i].y;
            mesh_data.first(i, 2) = msg->vertices[i].z;
        }
        for (size_t i=0; i < num_faces; ++i) {
            if (msg->triangles[i].vertex_indices.size() != 3) {
                RCLCPP_ERROR(rclcpp::get_logger("TrajectoryPlanner"), "非三角形面数据不支持");
                return;
            }
            mesh_data.second(i, 0) = msg->triangles[i].vertex_indices[0];
            mesh_data.second(i, 1) = msg->triangles[i].vertex_indices[1];
            mesh_data.second(i, 2) = msg->triangles[i].vertex_indices[2];
        }

        // 开始求解测地线距离
        // Eigen::VectorXd d(num_vertices);
        // int source_index = 400;  // TEST：源点索引
        // // 创建并初始化热方法求解器
        // igl::HeatGeodesicsData<double> data;
        // Eigen::VectorXi gamma = Eigen::VectorXi::Zero(num_vertices); // 全0
        // gamma(source_index) = 1;
        // igl::heat_geodesics_precompute(mesh_data.first, mesh_data.second, data);
        // igl::heat_geodesics_solve(data, gamma, d);

        // // 将计算出的距离值打印出来，方便调试
        // std::cout << "距离计算完成，最小值：" << d.minCoeff() << "，最大值：" << d.maxCoeff() << std::endl;

        // 可视化部分
        igl::opengl::glfw::Viewer viewer;
        viewer.data().set_mesh(mesh_data.first, mesh_data.second);
        Eigen::MatrixXd N;
        igl::per_vertex_normals(mesh_data.first, mesh_data.second, N);
        viewer.data().set_normals(N);
        
        // 启动查看器
        viewer.launch();
    }

    void GeodesicNode::publish_distance()
    {

    }
}