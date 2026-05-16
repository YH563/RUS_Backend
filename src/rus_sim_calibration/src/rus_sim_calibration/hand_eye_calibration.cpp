#include "rus_sim_calibration/hand_eye_calibration.hpp"

namespace RusCalibration
{
    namespace  // 匿名命名空间：内部工具函数
    {
        // 从 4x4 齐次变换矩阵中提取旋转矩阵(3x3)和平移向量(3x1)
        void DecomposeTransform(const cv::Mat& T, cv::Mat& R, cv::Mat& t)
        {
            cv::Mat(T(cv::Rect(0, 0, 3, 3))).copyTo(R);
            cv::Mat(T(cv::Rect(3, 0, 1, 3))).copyTo(t);
        }

        // 将旋转矩阵和平移向量组合成 4x4 齐次变换矩阵
        cv::Mat ComposeTransform(const cv::Mat& R, const cv::Mat& t)
        {
            cv::Mat T = cv::Mat::eye(4, 4, CV_64F);
            R.copyTo(T(cv::Rect(0, 0, 3, 3)));
            t.copyTo(T(cv::Rect(3, 0, 1, 3)));
            return T;
        }

        // 序列化 4x4 变换矩阵到 YAML
        void SerializeTransformToYAML(YAML::Emitter& out, const cv::Mat& T, const std::string& name)
        {
            out << YAML::Key << name << YAML::Value << YAML::BeginMap;

            out << YAML::Key << "rotation" << YAML::Value << YAML::Flow << YAML::BeginSeq;
            for (int r = 0; r < 3; r++)
                for (int c = 0; c < 3; c++)
                    out << T.at<double>(r, c);
            out << YAML::EndSeq;

            out << YAML::Key << "translation" << YAML::Value << YAML::Flow << YAML::BeginSeq;
            out << T.at<double>(0, 3) << T.at<double>(1, 3) << T.at<double>(2, 3);
            out << YAML::EndSeq;

            out << YAML::Key << "transform_matrix" << YAML::Value << YAML::Flow << YAML::BeginSeq;
            for (int r = 0; r < 4; r++)
                for (int c = 0; c < 4; c++)
                    out << T.at<double>(r, c);
            out << YAML::EndSeq;

            out << YAML::EndMap;
        }

        // 从手眼标定数据统一提取旋转和平移向量
        void PrepareHandEyeData(
            const std::vector<cv::Mat>& robot_poses,
            const std::vector<cv::Mat>& target_poses,
            std::vector<cv::Mat>& R_gripper2base,
            std::vector<cv::Mat>& t_gripper2base,
            std::vector<cv::Mat>& R_target2cam,
            std::vector<cv::Mat>& t_target2cam)
        {
            for (size_t i = 0; i < robot_poses.size(); i++)
            {
                cv::Mat R_g, t_g, R_t, t_t;
                DecomposeTransform(robot_poses[i], R_g, t_g);
                DecomposeTransform(target_poses[i], R_t, t_t);
                R_gripper2base.push_back(R_g);
                t_gripper2base.push_back(t_g);
                R_target2cam.push_back(R_t);
                t_target2cam.push_back(t_t);
            }
        }
    }

    cv::Mat PoseToCvMat(const Pose& pose)
    {
        cv::Mat transform = cv::Mat::eye(4, 4, CV_64F);
        transform.at<double>(0, 3) = pose.position.x;
        transform.at<double>(1, 3) = pose.position.y;
        transform.at<double>(2, 3) = pose.position.z;
        cv::Mat rvec(3, 1, CV_64F);
        rvec.at<double>(0) = pose.orientation.x;
        rvec.at<double>(1) = pose.orientation.y;
        rvec.at<double>(2) = pose.orientation.z;
        cv::Mat rot;
        cv::Rodrigues(rvec, rot);
        rot.copyTo(transform(cv::Rect(0, 0, 3, 3)));
        return transform;
    }

    bool CalibrationSolver::Initialize(
        const PatternParameter &pattern_parameter,
        const CameraParameter &camera_parameter
    )
    {
        if (is_initialized_)
        {
            RCLCPP_WARN(rclcpp::get_logger("CalibrationSolver"), "已初始化，请勿重复初始化！");
            return true;
        }
        pattern_parameter_ = pattern_parameter;
        camera_parameter_ = camera_parameter;
        is_initialized_ = true;
        return true;
    }

    bool CalibrationSolver::AddCalibrationData(const Pose& robot_pose, const cv::Mat& color_image)
    {
        if (!is_initialized_)
        {
            RCLCPP_ERROR(rclcpp::get_logger("CalibrationSolver"), "请先进行初始化！");
            return false;
        }
        if (color_image.empty())
        {
            RCLCPP_ERROR(rclcpp::get_logger("CalibrationSolver"), "检查图像是否存在！");
            return false;
        }

        // 将 robot_pose 转为 4x4 矩阵
        cv::Mat flange_to_base = PoseToCvMat(robot_pose);

        // 从图像中提取标定板位姿
        cv::Mat camera_to_target;
        if (!ExtractBoardPose(color_image, camera_to_target))
        {
            RCLCPP_ERROR(rclcpp::get_logger("CalibrationSolver"), 
                "第%zu组数据：无法从图像中提取标定板位姿，请检查棋盘格是否完整可见！",
                robot_poses_.size() + 1);
            return false;
        }

        // 保存配对数据
        robot_poses_.emplace_back(flange_to_base);
        target_poses_.emplace_back(camera_to_target);

        RCLCPP_INFO(rclcpp::get_logger("CalibrationSolver"),
            "成功添加第%zu组标定数据", robot_poses_.size());

        return true;
    }

    // 眼在手上标定
    bool CalibrationSolver::CalibrateEyeInHand(cv::Mat &transform_camera_to_flange)
    {
        if (!is_initialized_)
        {
            RCLCPP_ERROR(rclcpp::get_logger("CalibrationSolver"), "请先进行初始化！");
            return false;
        }

        size_t n = robot_poses_.size();
        if (n < 3)
        {
            RCLCPP_ERROR(rclcpp::get_logger("CalibrationSolver"),
                "标定数据不足！当前仅有%zu组数据，至少需要3组。", n);
            return false;
        }

        // 准备数据
        std::vector<cv::Mat> R_gripper2base, t_gripper2base;
        std::vector<cv::Mat> R_target2cam, t_target2cam;
        PrepareHandEyeData(robot_poses_, target_poses_,
                           R_gripper2base, t_gripper2base,
                           R_target2cam, t_target2cam);

        // 执行标定
        cv::Mat R_cam2gripper, t_cam2gripper;
        cv::calibrateHandEye(
            R_gripper2base, t_gripper2base,
            R_target2cam, t_target2cam,
            R_cam2gripper, t_cam2gripper,
            cv::CALIB_HAND_EYE_TSAI
        );

        // 组装 4x4 变换矩阵并保存
        transform_camera_to_flange = ComposeTransform(R_cam2gripper, t_cam2gripper);
        camera_to_flange_ = transform_camera_to_flange.clone();

        RCLCPP_INFO(rclcpp::get_logger("CalibrationSolver"),
            "✓ 眼在手上标定完成！使用%zu组数据。", n);

        return true;
    }

    bool CalibrationSolver::detect_chessboard_corners(
        const cv::Mat& image, 
        std::vector<cv::Point2f>& corners, 
        cv::Size& board_size)
    {
        // 棋盘格内角点数量：比如 9×6 的棋盘格，内角点是 (9-1)×(6-1) = 8×5
        board_size = cv::Size(
            pattern_parameter_.pattern_width - 1,
            pattern_parameter_.pattern_height - 1
        );

        // 转换为灰度图（findChessboardCorners 需要单通道）
        cv::Mat gray;
        if (image.channels() == 3)
            cv::cvtColor(image, gray, cv::COLOR_BGR2GRAY);
        else
            gray = image.clone();

        // 检测棋盘格角点（亚像素级别）
        bool found = cv::findChessboardCorners(
            gray,
            board_size,
            corners,
            cv::CALIB_CB_ADAPTIVE_THRESH |
            cv::CALIB_CB_NORMALIZE_IMAGE |
            cv::CALIB_CB_FAST_CHECK
        );

        if (!found)
        {
            RCLCPP_WARN(rclcpp::get_logger("CalibrationSolver"), "棋盘格角点检测失败！");
            return false;
        }

        // 亚像素精确化，提高角点精度
        cv::cornerSubPix(
            gray,
            corners,
            cv::Size(11, 11),           // 搜索窗口大小
            cv::Size(-1, -1),           // 死区（-1表示无）
            cv::TermCriteria(
                cv::TermCriteria::EPS + cv::TermCriteria::MAX_ITER,
                30,      // 最大迭代次数
                0.001    // 最小误差变化
            )
        );

        return true;
    }

    std::vector<cv::Point3f> CalibrationSolver::generate_chessboard_points()
    {
        std::vector<cv::Point3f> points;
        
        // 内角点数量
        int width = pattern_parameter_.pattern_width - 1;
        int height = pattern_parameter_.pattern_height - 1;
        float square_size = pattern_parameter_.square_size_;

        // 按行生成，顺序必须与 findChessboardCorners 的输出顺序一致
        // OpenCV 的角点顺序是：从左到右，从上到下
        for (int h = 0; h < height; h++)
        {
            for (int w = 0; w < width; w++)
            {
                points.emplace_back(cv::Point3f(
                    w * square_size,       // X 坐标
                    h * square_size,       // Y 坐标
                    0.0f                   // Z 坐标（棋盘格平面）
                ));
            }
        }

        return points;
    }

    bool CalibrationSolver::estimate_board_pose(
        const std::vector<cv::Point2f>& corners,
        const std::vector<cv::Point3f>& board_points,
        cv::Mat& rvec,
        cv::Mat& tvec)
    {
        if (corners.size() != board_points.size())
        {
            RCLCPP_ERROR(rclcpp::get_logger("CalibrationSolver"),
                "2D角点数量(%zu)与3D点数量(%zu)不匹配！",
                corners.size(), board_points.size());
            return false;
        }

        // 使用 PnP 算法求解外参
        bool success = cv::solvePnP(
            board_points,                         // 3D 世界坐标
            corners,                              // 2D 像素坐标
            camera_parameter_.camera_matrix_,     // 相机内参矩阵
            camera_parameter_.dist_coeffs_,       // 畸变系数
            rvec,                                 // 输出的旋转向量
            tvec,                                 // 输出的平移向量
            false,                                // 是否使用外参初始值
            cv::SOLVEPNP_ITERATIVE                // 求解方法
        );

        if (!success)
        {
            RCLCPP_ERROR(rclcpp::get_logger("CalibrationSolver"), "PnP位姿估计失败！");
            return false;
        }

        return true;
    }

    bool CalibrationSolver::ExtractBoardPose(
        const cv::Mat& image, 
        cv::Mat& camera_to_target)
    {
        // 检测棋盘格角点
        std::vector<cv::Point2f> corners;
        cv::Size board_size;
        if (!detect_chessboard_corners(image, corners, board_size))
        {
            RCLCPP_ERROR(rclcpp::get_logger("CalibrationSolver"), "角点检测失败！");
            return false;
        }

        // 生成棋盘格的3D物理坐标
        std::vector<cv::Point3f> board_points = generate_chessboard_points();

        // PnP求解旋转和平移向量
        cv::Mat rvec, tvec;
        if (!estimate_board_pose(corners, board_points, rvec, tvec))
        {
            RCLCPP_ERROR(rclcpp::get_logger("CalibrationSolver"), "位姿估计失败！");
            return false;
        }

        // 将 rvec 旋转向量转换为 3×3 旋转矩阵，组合成 4×4 齐次变换矩阵
        cv::Mat rot_mat;
        cv::Rodrigues(rvec, rot_mat);
        camera_to_target = ComposeTransform(rot_mat, tvec);

        return true;
    }

    bool CalibrationSolver::SaveCalibrationResult(const std::string& file_path)
    {
        if (!is_initialized_)
        {
            RCLCPP_ERROR(rclcpp::get_logger("CalibrationSolver"), "请先进行初始化！");
            return false;
        }

        YAML::Emitter out;

        out << YAML::BeginMap;
        out << YAML::Key << "calibration_result";
        out << YAML::Value << YAML::BeginMap;

        // 标定参数
        out << YAML::Key << "pattern_parameter";
        out << YAML::Value << YAML::BeginMap;
        out << YAML::Key << "width" << YAML::Value << pattern_parameter_.pattern_width;
        out << YAML::Key << "height" << YAML::Value << pattern_parameter_.pattern_height;
        out << YAML::Key << "square_size" << YAML::Value << pattern_parameter_.square_size_;
        out << YAML::EndMap;  // pattern_parameter

        out << YAML::Key << "data_count" << YAML::Value << static_cast<int>(robot_poses_.size());

        // 眼在手上结果
        if (!camera_to_flange_.empty())
        {
            out << YAML::Key << "eye_in_hand";
            out << YAML::Value << YAML::BeginMap;
            SerializeTransformToYAML(out, camera_to_flange_, "camera_to_flange");
            out << YAML::EndMap;
        }

        out << YAML::EndMap;  // calibration_result
        out << YAML::EndMap;

        // 写入文件
        std::ofstream file(file_path);
        if (!file.is_open())
        {
            RCLCPP_ERROR(rclcpp::get_logger("CalibrationSolver"), "无法打开文件: %s", file_path.c_str());
            return false;
        }
        file << out.c_str();
        file.close();

        RCLCPP_INFO(rclcpp::get_logger("CalibrationSolver"),
            "标定结果已保存到: %s", file_path.c_str());
        return true;
    }
}