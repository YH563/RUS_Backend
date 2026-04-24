#include "test_include/planner_test.hpp"

namespace TestTrajectoryPlanner 
{
    PlannerClientNode::PlannerClientNode(const Pose& start, const Pose& end) : rclcpp::Node("test_planner_client")
    {
        start_ = start;
        end_ = end;
        planner_client_ = this->create_client<GenerateTrajectory>("generate_trajectory");
        while (!planner_client_->wait_for_service(std::chrono::seconds(2))) {
            RCLCPP_INFO(this->get_logger(), "等待轨迹生成服务端上线");
        }
        path_pub_ = this->create_publisher<nav_msgs::msg::Path>("/trajectory_path", 10);
        marker_pub_ = this->create_publisher<visualization_msgs::msg::MarkerArray>("/trajectory_arrow", 10);
        RCLCPP_INFO(this->get_logger(), "客户端已连接服务端");
    }

    void PlannerClientNode::SendRequest()
    {
        auto request = std::make_shared<GenerateTrajectory::Request>();
        request->start_pose = start_;
        request->end_pose = end_;
        auto future = planner_client_->async_send_request(
            request,
            std::bind(&PlannerClientNode::response_callback, this, _1)
        );
    }

    void PlannerClientNode::response_callback(rclcpp::Client<GenerateTrajectory>::SharedFuture future)
    {
        auto response = future.get();
        if (!response->success)
        {
            RCLCPP_ERROR(
                this->get_logger(),
                "服务失败"
            );
            return;
        }
        RCLCPP_INFO(this->get_logger(), "收到轨迹点数：%zu", response->poses.size());

        nav_msgs::msg::Path path_msg;
        path_msg.header.frame_id = "base_link";         // 必须和 RVIZ 一致
        path_msg.header.stamp = this->now();
        for (const auto& p : response->poses)
        {
            geometry_msgs::msg::PoseStamped pose_stamped;
            pose_stamped.header = path_msg.header;
            pose_stamped.pose = p;
            path_msg.poses.push_back(pose_stamped);
        }
        path_pub_->publish(path_msg);

        visualization_msgs::msg::MarkerArray marker_array;
        double arrow_length = 0.1;  // 箭头长度（米），可调

        for (size_t i = 0; i < response->poses.size(); ++i) {
            visualization_msgs::msg::Marker marker;
            marker.header.frame_id = "base_link";
            marker.header.stamp = this->now();
            marker.ns = "trajectory_arrows";
            marker.id = i;
            marker.type = visualization_msgs::msg::Marker::ARROW;
            marker.action = visualization_msgs::msg::Marker::ADD;

            // 起点：轨迹点位置
            geometry_msgs::msg::Point start = response->poses[i].position;

            tf2::Quaternion q;
            tf2::fromMsg(response->poses[i].orientation, q);
            tf2::Vector3 local_x(0, 0, 1);
            tf2::Vector3 normal = tf2::quatRotate(q, local_x);

            // 终点：位置 + 法向量 * 长度
            geometry_msgs::msg::Point end;
            end.x = start.x + normal.x() * arrow_length;
            end.y = start.y + normal.y() * arrow_length;
            end.z = start.z + normal.z() * arrow_length;

            marker.points.push_back(start);
            marker.points.push_back(end);

            // 箭头外观：杆半径、箭头头长度、箭头头宽度
            marker.scale.x = 0.02;   // 杆半径
            marker.scale.y = 0.05;   // 箭头头长度
            marker.scale.z = 0.05;   // 箭头头宽度

            // 颜色：绿色
            marker.color.r = 0.0f;
            marker.color.g = 1.0f;
            marker.color.b = 0.0f;
            marker.color.a = 1.0;

            marker_array.markers.push_back(marker);
        }

        marker_pub_->publish(marker_array);

        RCLCPP_INFO(this->get_logger(), "已发布轨迹到Rviz，点数：%zu", response->poses.size());
        return;
    }
}