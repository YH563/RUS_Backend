#include "rus_sim_planner/trajectory_planner_node.hpp"
#include <Eigen/src/Core/Matrix.h>
#include <rclcpp/logging.hpp>
#include <vector>

namespace RusTrajectoryPlannerNode
{
    TrajectoryPlannerNode::TrajectoryPlannerNode() : Node("trajectory_planner_node")
    {
        // 声明参数
        // 话题/服务名参数
        this->declare_parameter<std::string>("point_cloud_topic", "/pointcloud_data");
        this->declare_parameter<std::string>("init_service", "init_planner");
        this->declare_parameter<std::string>("planner_service", "generate_trajectory");

        // 规划器参数
        this->declare_parameter<double>("alpha", 1.0);
        this->declare_parameter<int>("graph_k", 30);
        this->declare_parameter<int>("normal_k", 30);
        this->declare_parameter<int>("projection_k", 30);
        this->declare_parameter<double>("tol", 1.0e-6);
        this->declare_parameter<int>("max_iter", 40);
        this->declare_parameter<bool>("use_smoothing", true);
        this->declare_parameter<double>("lambda", 0.63);
        this->declare_parameter<double>("mu", -0.65);
        this->declare_parameter<double>("flange_offset", 0.0938);
        this->declare_parameter<std::vector<double>>("probe_to_flange", std::vector<double>());

        // 读取参数
        auto point_cloud_topic = this->get_parameter("point_cloud_topic").as_string();
        auto init_service      = this->get_parameter("init_service").as_string();
        auto planner_service   = this->get_parameter("planner_service").as_string();

        // 创建轨迹规划器实例
        cloud_ = std::make_shared<pcl::PointCloud<pcl::PointXYZ>>();
        planner_ = std::make_unique<RusTrajectoryPlanner::TrajectoryPlanner>();

        // 设置规划器参数
        RusTrajectoryPlanner::TrajectoryParameter param;
        param.alpha         = this->get_parameter("alpha").as_double();
        param.graph_k       = this->get_parameter("graph_k").as_int();
        param.normal_k      = this->get_parameter("normal_k").as_int();
        param.projection_k  = this->get_parameter("projection_k").as_int();
        param.tol           = this->get_parameter("tol").as_double();
        param.max_iter      = this->get_parameter("max_iter").as_int();
        param.use_smoothing = this->get_parameter("use_smoothing").as_bool();
        param.lambda        = this->get_parameter("lambda_").as_double();
        param.mu            = this->get_parameter("mu").as_double();
        param.flange_offset = this->get_parameter("flange_offset").as_double();
        std::vector<double> probe_to_flange = this->get_parameter("probe_to_flange").as_double_array();
        if (probe_to_flange.size() != 16)
        {
            RCLCPP_ERROR(this->get_logger(), "载入的探头标定矩阵参数不足16个，检查参数输入");
            param.probe_to_flange = Eigen::Matrix4d::Identity();
        }
        else {
            param.probe_to_flange.row(0) << probe_to_flange[0], probe_to_flange[1],probe_to_flange[2],probe_to_flange[3];
            param.probe_to_flange.row(1) << probe_to_flange[4], probe_to_flange[5],probe_to_flange[6],probe_to_flange[7];
            param.probe_to_flange.row(2) << probe_to_flange[8], probe_to_flange[9],probe_to_flange[10],probe_to_flange[11];
            param.probe_to_flange.row(3) << probe_to_flange[12], probe_to_flange[13],probe_to_flange[14],probe_to_flange[15];
        }
        planner_->SetParameter(param);
        
        // 订阅话题，创建服务
        cloud_sub_ = this->create_subscription<sensor_msgs::msg::PointCloud2>(
            point_cloud_topic, 10, 
            [this](const sensor_msgs::msg::PointCloud2::SharedPtr msg){
                pcl::fromROSMsg(*msg, *cloud_);
                planner_->LoadCloud(cloud_);
            }
        );
        planner_server_ = this->create_service<rus_sim_interfaces::srv::GenerateTrajectory>(
            planner_service,
            std::bind(&TrajectoryPlannerNode::handle_generate_trajectory, this, _1, _2)
        );
        init_server_ = this->create_service<rus_sim_interfaces::srv::ModuleInit>(
            init_service,
            std::bind(&TrajectoryPlannerNode::handle_init, this, _1, _2)
        );

        RCLCPP_INFO(this->get_logger(), "轨迹规划器节点已创建");
    }

    void TrajectoryPlannerNode::handle_generate_trajectory(
        const std::shared_ptr<rus_sim_interfaces::srv::GenerateTrajectory::Request> request,
        std::shared_ptr<rus_sim_interfaces::srv::GenerateTrajectory::Response> response
    ){
        // if (!is_initialized_)
        // {
        //     response->success = false;
        //     RCLCPP_ERROR(this->get_logger(), "请先对节点进行初始化！");
        //     return;
        // }
        if (cloud_ == nullptr)
        {
            response->success = false;
            RCLCPP_ERROR(this->get_logger(), "请先输入点云数据！");
            return;
        }
        auto start = request->start_pose;
        auto end = request->end_pose;
        RCLCPP_INFO(
            this->get_logger(), 
            "开始生成目标轨迹，起点为：[%.2f, %.2f, %.2f]，终点为：[%.2f, %.2f, %.2f]。",
            start.position.x, start.position.y, start.position.z,
            end.position.x, end.position.y, end.position.z
        );
        if (!planner_->GenerateTrajectory(start, end))
        {
            response->success = false;
            RCLCPP_ERROR(this->get_logger(), "轨迹生成失败！");
            return;
        }
        else
        {
            auto trajectory = planner_->GetTrajectory();
            if (!trajectory)
            {
                response->success = false;
                RCLCPP_ERROR(this->get_logger(), "所生成的轨迹点数量为0");
                return;
            }
            else
            {
                response->poses = trajectory.value().get();
                response->success = true;
                RCLCPP_INFO(this->get_logger(), "已生成轨迹点，数量为%.zu，坐标如下：", response->poses.size());
                for (const auto& p : response->poses)
                {
                    RCLCPP_INFO(
                        this->get_logger(), 
                        "[%.2f, %.2f,%.2f, %.2f, %.2f,%.2f, %.2f]", 
                        p.position.x, p.position.y, p.position.z,
                        p.orientation.x, p.orientation.y, p.orientation.z, p.orientation.w
                    );
                }
                RCLCPP_INFO(this->get_logger(), "轨迹生成完毕");
            }
        }
    }

    void TrajectoryPlannerNode::handle_init(
        const std::shared_ptr<rus_sim_interfaces::srv::ModuleInit::Request> request,
        std::shared_ptr<rus_sim_interfaces::srv::ModuleInit::Response> response
    ){
        // TODO
        (void)request;
        response->success = true;
        is_initialized_ = response->success;
        response->error_message = "轨迹规划器节点已初始化";
        return;
    }
}