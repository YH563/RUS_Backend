#pragma once

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <cv_bridge/cv_bridge.h>
#include <image_transport/image_transport.hpp>
#include <opencv2/opencv.hpp>
#include <memory>
#include <functional>

#include "fairino_msgs/msg/robot_nonrt_state.hpp"
#include "rus_sim_interfaces/srv/calibration_capture.hpp"
#include "rus_sim_interfaces/srv/calibration_compute.hpp"
#include "rus_sim_interfaces/srv/calibration_save.hpp"
#include "rus_sim_calibration/hand_eye_calibration.hpp"

namespace RusCalibrationNode {
    using RusCalibration::CalibrationSolver;
    using RusCalibration::PatternParameter;
    using RusCalibration::CameraParameter;
    using geometry_msgs::msg::Pose;
    using fairino_msgs::msg::RobotNonrtState;
    using std::placeholders::_1;
    using std::placeholders::_2;

    // 标定用节点
    class CalibrationNode : public rclcpp::Node
    {
    public:
        CalibrationNode();
        ~CalibrationNode() = default;
        void SetImageTransport(std::shared_ptr<rclcpp::Node> p){
            it_ = std::make_unique<image_transport::ImageTransport>(p);
        }
        // 初始化函数
        bool Initialize();
    private:
        // 法兰坐标转pose
        Pose flange_to_pose(double x, double y, double z, double a, double b, double c);
        // 将图像信息与位姿信息进行对齐并保存
        void align_image_pose();

        // 接收图像的回调函数
        void on_image(const sensor_msgs::msg::Image::ConstSharedPtr msg);
        // 接收机械臂末端位姿的回调函数
        void on_robot_pose(const RobotNonrtState::SharedPtr msg);

        // 捕获图像+位姿信息
        void handle_capture(
            const rus_sim_interfaces::srv::CalibrationCapture::Request::SharedPtr request,
            const rus_sim_interfaces::srv::CalibrationCapture::Response::SharedPtr response
        );

        // 计算深度相机标定
        void handle_compute(
            const rus_sim_interfaces::srv::CalibrationCompute::Request::SharedPtr request,
            const rus_sim_interfaces::srv::CalibrationCompute::Response::SharedPtr response
        );

        // 保存标定结果
        void handle_save(
            const rus_sim_interfaces::srv::CalibrationSave::Request::SharedPtr request,
            const rus_sim_interfaces::srv::CalibrationSave::Response::SharedPtr response
        );
        
        // ============== 私有成员变量 ==============
        // 话题
        std::unique_ptr<image_transport::ImageTransport> it_;  // 改为指针，延迟初始化
        image_transport::Subscriber image_sub_;  // 图像数据订阅
        rclcpp::Subscription<RobotNonrtState>::SharedPtr robot_pose_sub_;  // 机械臂末端位姿订阅

        // 服务
        rclcpp::Service<rus_sim_interfaces::srv::CalibrationCapture>::SharedPtr capture_service_;  // 捕获服务
        rclcpp::Service<rus_sim_interfaces::srv::CalibrationCompute>::SharedPtr compute_service_;  // 计算服务
        rclcpp::Service<rus_sim_interfaces::srv::CalibrationSave>::SharedPtr save_service_;  // 保存服务

        // 缓存数据
        sensor_msgs::msg::Image::ConstSharedPtr image_cache_;  // 缓存图像信息
        std::mutex image_mutex_;  // 需要加锁保证线程安全
        std::deque<geometry_msgs::msg::PoseStamped::SharedPtr> pose_cache_;  // 缓存最近的位姿消息
        size_t max_cache_size_ = 50; // 缓存位姿信息的最大数量
        double max_allowed_diff_sec_ = 0.05;  // 允许对齐时间的容忍范围，默认为50毫秒

        cv::Mat latest_color_image_;  // 缓存最近的图像
        Pose latest_pose_;  // 缓存与图像匹配的位姿信息

        // 求解器和参数
        std::unique_ptr<CalibrationSolver> calibration_solver_;  // 手眼标定求解器
        PatternParameter pattern_param_;  // 棋盘格参数
        CameraParameter camera_param_;  // 相机内参
        std::string result_file_path_;  // 文件保存路径
    };
}