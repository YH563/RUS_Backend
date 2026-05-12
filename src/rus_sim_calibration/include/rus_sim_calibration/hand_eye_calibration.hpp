#pragma once

#include <rclcpp/rclcpp.hpp>
#include <Eigen/Dense>
#include <opencv2/opencv.hpp>
#include <opencv2/calib3d.hpp>
#include <opencv2/aruco.hpp>
#include <vector>
#include <string>
#include <memory>
#include <geometry_msgs/msg/pose.hpp>

namespace RusCalibration
{
    // 棋盘格参数
    struct PatternParameter
    {
        int pattern_width = 9;
        int pattern_height = 6;
        float square_size_ = 0.025;  // 单位：米
    };

    // 相机内参
    struct CameraParameter
    {
        cv::Mat camera_matrix_;
        cv::Mat dist_coeffs_;
    };

    // cv::Mat (4x4) 与 geometry_msgs::msg::Pose 相互转换
    geometry_msgs::msg::Pose CvMatToPose(const cv::Mat& transform);
    cv::Mat PoseToCvMat(const geometry_msgs::msg::Pose& pose);

    // Eigen::Matrix4d 与 geometry_msgs::msg::Pose 相互转换
    geometry_msgs::msg::Pose EigenToPose(const Eigen::Matrix4d& transform);
    Eigen::Matrix4d PoseToEigen(const geometry_msgs::msg::Pose& pose);

    // cv::Mat (4x4) 与 Eigen::Matrix4d 相互转换
    Eigen::Matrix4d CvMatToEigen(const cv::Mat& transform);
    cv::Mat EigenToCvMat(const Eigen::Matrix4d& transform);

    // 手眼标定求解器
    class CalibrationSolver
    {
    public:
        // 构造函数
        CalibrationSolver() = default;
        ~CalibrationSolver() = default;

        // 设置棋盘格参数
        void SetChessboardParams(const PatternParameter& pattern_parameter);

        // 设置深度相机内参和畸变系数
        void SetCameraIntrinsics(const cv::Mat& camera_matrix, const cv::Mat& dist_coeffs);

        // 添加一组标定数据：机械臂法兰到基座的变换，以及对应的深度相机图像
        bool AddCalibrationData(const cv::Mat& robot_pose, const cv::Mat& color_image, const cv::Mat& depth_image);

        // 执行手眼标定（眼在手外 或 眼在手上，默认眼在手外）
        bool CalibrateEyeToHand(cv::Mat& transform_camera_to_robot_base);
        bool CalibrateEyeInHand(cv::Mat& transform_camera_to_flange);

        // 获取标定结果
        cv::Mat GetCameraToRobotBase() const { return camera_to_robot_base_; }
        cv::Mat GetCameraToFlange() const { return camera_to_flange_; }

        // 保存标定结果到文件
        bool SaveCalibrationResult(const std::string& file_path);

    private:
        PatternParameter pattern_parameter_;  // 棋盘格参数
        CameraParameter camera_parameter_;  // 相机内参

        // 存储标定数据
        std::vector<cv::Mat> robot_poses_;   // 机械臂法兰到基座变换矩阵 (4x4)
        std::vector<cv::Mat> camera_images_; // 彩色图像

        // 标定结果
        cv::Mat camera_to_robot_base_; // 眼在手外: 相机到机器人基座
        cv::Mat camera_to_flange_;     // 眼在手上: 相机到法兰

        // 棋盘格角点检测
        bool detect_chessboard_corners(const cv::Mat& image, std::vector<cv::Point2f>& corners, cv::Size& board_size);

        // 生成棋盘格世界坐标
        std::vector<cv::Point3f> generate_chessboard_points();

        // 从图像计算相机到棋盘格的外参
        bool estimate_board_pose(
            const std::vector<cv::Point2f>& corners, 
            const std::vector<cv::Point3f>& board_points, 
            cv::Mat& rvec, 
            cv::Mat& tvec
        );
    };
}