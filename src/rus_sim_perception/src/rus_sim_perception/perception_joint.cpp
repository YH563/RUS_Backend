#include "rus_sim_perception/perception_joint.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>
namespace rus_sim_perception
{
// 肌骨超声专用关节点检测：
// 1. 先找骨组织（高亮度区域）
// 2. 再找骨边缘交点
// 3. 过滤小区域（避免字母被检测）
std::vector<cv::Point> perception_detect_joint(const cv::Mat& src)
{
    std::vector<cv::Point> joints;

    // 1. 提取骨组织（高亮度区域）
    cv::Mat bone;
    cv::threshold(src, bone, 180, 255, cv::THRESH_BINARY);

    // 2. 形态学开运算：去掉小噪点（字母就被去掉了）
    cv::Mat kernel = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(5, 5));
    cv::morphologyEx(bone, bone, cv::MORPH_OPEN, kernel);

    // 3. 找轮廓
    std::vector<std::vector<cv::Point>> contours;
    cv::findContours(bone, contours, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);

    // 4. 只保留大轮廓（骨轮廓），取角点作为关节
    for (auto& cnt : contours)
    {
        if (cv::contourArea(cnt) > 200)  // 过滤小区域（字母）
        {
            // 取轮廓端点作为关节点
            if (!cnt.empty())
            {
                joints.push_back(cnt.front());
                joints.push_back(cnt.back());
            }
        }
    }

    return joints;
}
}