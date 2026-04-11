#pragma once

#include <cmath>
#include <random>
#include <vector>

#include <rclcpp/rclcpp.hpp>
#include <shape_msgs/msg/mesh.hpp>
#include <std_msgs/msg/float32_multi_array.hpp>
#include <Eigen/Core>

#include <igl/heat_geodesics.h>
#include <igl/grad.h>
#include <igl/opengl/glfw/Viewer.h>

namespace TestGeodesic {
    using MsgMesh = shape_msgs::msg::Mesh;  // 三角网格消息类型
    using MsgMeshPtr = shape_msgs::msg::Mesh::ConstSharedPtr;  // 三角网格数据指针
    using DistanceArray = std_msgs::msg::Float32MultiArray;
    
    class GeodesicNode : public rclcpp::Node
    {
    public:
        GeodesicNode();
    private:
        // 接收到网格数据的回调函数
        void on_mesh_data(const MsgMeshPtr& msg);
        // 发布距离数据
        void publish_distance();

        rclcpp::Subscription<MsgMesh>::SharedPtr mesh_subscriber_;  // 三角网格数据订阅
        rclcpp::Publisher<DistanceArray>::SharedPtr distance_publisher_;  // 距离数据发布
    };
}