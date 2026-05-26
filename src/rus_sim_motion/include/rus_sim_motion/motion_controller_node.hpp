#pragma once

#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <geometry_msgs/msg/pose.hpp>

#include "rus_sim_motion/moveit_manager.hpp"
#include "rus_sim_interfaces/srv/generate_trajectory.hpp"
#include "rus_sim_interfaces/srv/cmd.hpp"
#include "fairino_msgs/msg/robot_nonrt_state.hpp"
#include "rus_sim_utils/utils.hpp"
#include "rus_sim_utils/command_definitions.hpp"
#include "rus_sim_motion/service_clients.hpp"

namespace RusMotionControllerNode
{
    using MoveitManager = RusMoveitManager::MoveitManager;  // 规划器管理类
    using MoveitParameter = RusMoveitManager::MoveitParameter;  // 规划器参数
    using ServiceGenerateTrajectory = rus_sim_interfaces::srv::GenerateTrajectory;  // 生成轨迹的服务
    using Pose = geometry_msgs::msg::Pose;  // 位姿
    using namespace std::placeholders;

    class MotionControllerNode : public rclcpp::Node
    {
    public:
        MotionControllerNode();
        // 初始化
        bool Initialize();
        // 测试用接口，完成后删除
        void SetStartPose(Pose& pose){start_pose_ = pose;}
        void SetEndPose(Pose& pose){end_pose_ = pose;}

    private:
        // 接收机械臂末端位姿
        void on_robot_pose(const std::shared_ptr<fairino_msgs::msg::RobotNonrtState> msg);

        // 处理指令服务
        void handle_cmd(
            const std::shared_ptr<rmw_request_id_t> req_id,
            const std::shared_ptr<rus_sim_interfaces::srv::Cmd::Request> request,
            std::shared_ptr<rus_sim_interfaces::srv::Cmd::Response> response
        );

        // 执行轨迹
        bool execute_trajectory();
        
        // 私有成员变量
        // 话题订阅，服务端，客户端
        rclcpp::Subscription<fairino_msgs::msg::RobotNonrtState>::SharedPtr robot_pose_sub_;  // 订阅机械臂末端位姿
        rclcpp::Service<rus_sim_interfaces::srv::Cmd>::SharedPtr cmd_server_;  // 指令服务端
        std::unique_ptr<RusServiceClients::ServiceClients> service_clients_;  // 指令客户端
        
        std::unique_ptr<MoveitManager> moveit_manager_;  // 规划器
        std::vector<Pose> trajectory_;  // 计算生成的轨迹
        MoveitParameter parameter_;  // 存储机械臂参数
        Pose start_pose_;  // 起点
        Pose end_pose_;  // 终点
        int pose_flag_ = 0;  // 接收起点、终点位姿，0表示不接收，1表示为起点，2表示为终点
        bool generate_success_;  // 轨迹是否生成成功

        std::vector<std::future<void>> pending_tasks_;  // 储存所有异步任务的结果
    };
}