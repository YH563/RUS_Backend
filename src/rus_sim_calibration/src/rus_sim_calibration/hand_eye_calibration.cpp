#include "rus_sim_calibration/hand_eye_calibration.hpp"

namespace RusCalibration
{
    geometry_msgs::msg::Pose CvMatToPose(const cv::Mat& transform)
    {
        geometry_msgs::msg::Pose pose;
        pose.position.x = transform.at<double>(0, 3);
        pose.position.y = transform.at<double>(1, 3);
        pose.position.z = transform.at<double>(2, 3);
        cv::Mat rot;
        cv::Rodrigues(transform(cv::Rect(0, 0, 3, 3)), rot);
        pose.orientation.x = rot.at<double>(0);
        pose.orientation.y = rot.at<double>(1);
        pose.orientation.z = rot.at<double>(2);
        pose.orientation.w = rot.at<double>(3);
        return pose;
    }

    cv::Mat PoseToCvMat(const geometry_msgs::msg::Pose& pose)
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

    geometry_msgs::msg::Pose EigenToPose(const Eigen::Matrix4d& transform)
    {
        geometry_msgs::msg::Pose pose;
        pose.position.x = transform(0, 3);
        pose.position.y = transform(1, 3);
        pose.position.z = transform(2, 3);
        Eigen::Quaterniond q(transform.block<3,3>(0,0));
        pose.orientation.x = q.x();
        pose.orientation.y = q.y();
        pose.orientation.z = q.z();
        pose.orientation.w = q.w();
        return pose;
    }

    Eigen::Matrix4d PoseToEigen(const geometry_msgs::msg::Pose& pose)
    {
        Eigen::Matrix4d transform = Eigen::Matrix4d::Identity();
        transform(0, 3) = pose.position.x;
        transform(1, 3) = pose.position.y;
        transform(2, 3) = pose.position.z;
        Eigen::Quaterniond q(pose.orientation.w, pose.orientation.x, pose.orientation.y, pose.orientation.z);
        transform.block<3,3>(0,0) = q.toRotationMatrix();
        return transform;
    }

    Eigen::Matrix4d CvMatToEigen(const cv::Mat& transform)
    {
        Eigen::Matrix4d eigen_mat;
        for (int i = 0; i < 4; ++i)
            for (int j = 0; j < 4; ++j)
                eigen_mat(i, j) = transform.at<double>(i, j);
        return eigen_mat;
    }

    cv::Mat EigenToCvMat(const Eigen::Matrix4d& transform)
    {
        cv::Mat mat = cv::Mat::eye(4, 4, CV_64F);
        for (int i = 0; i < 4; ++i)
            for (int j = 0; j < 4; ++j)
                mat.at<double>(i, j) = transform(i, j);
        return mat;
    }
}