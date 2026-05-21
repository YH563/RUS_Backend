#pragma once

#include <vector>
#include <string>
#include <memory>
#include <fstream>
#include <rclcpp/rclcpp.hpp>
#include <Eigen/Dense>
#include <opencv2/opencv.hpp>
#include <opencv2/calib3d.hpp>
#include <opencv2/aruco.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <yaml-cpp/yaml.h>

namespace RusCalibration
{
    using Pose = geometry_msgs::msg::Pose;  // 位姿

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
        cv::Mat camera_matrix_;  // 内参矩阵，3x3矩阵
        cv::Mat dist_coeffs_;  // 畸变系数，1x5的行向量
    };

    // Pose 转 cv::Mat
    cv::Mat PoseToCvMat(const Pose& pose);

    // 手眼标定求解器
    class CalibrationSolver
    {
    public:
        // 构造函数
        CalibrationSolver() = default;
        ~CalibrationSolver() = default;

        // 初始化函数
        bool Initialize(
            const PatternParameter& pattern_parameter,  // 棋盘格参数
            const CameraParameter& camera_parameter  // 相机参数
        );

        // 添加一组标定数据：机械臂法兰到基座的变换，以及对应的深度相机图像
        bool AddCalibrationData(const Pose& robot_pose, const cv::Mat& color_image);

        // 执行手眼标定（眼在手上）
        bool CalibrateEyeInHand(cv::Mat& transform_camera_to_flange);

        // 获取标定结果
        cv::Mat GetCameraToFlange() const { return camera_to_flange_; }
        // 保存标定结果到文件
        bool SaveCalibrationResult(const std::string& file_path);

    private:
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

        // 从图像直接提取标定板位姿（组合 detect_chessboard_corners + generate_chessboard_points + estimate_board_pose）
        bool ExtractBoardPose(const cv::Mat& image, cv::Mat& camera_to_target);

        // ============== 私有成员变量 ==============
        bool is_initialized_ = false;  // 是否已初始化
        PatternParameter pattern_parameter_;  // 棋盘格参数
        CameraParameter camera_parameter_;  // 相机内参
        std::vector<cv::Mat> robot_poses_;   // 机械臂法兰到基座变换矩阵 (4x4)
        std::vector<cv::Mat> target_poses_;  // 标定板位姿
        cv::Mat camera_to_flange_;     // 眼在手上: 相机到法兰
    };
}