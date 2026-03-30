#pragma once
#include <opencv2/opencv.hpp>
namespace rus_sim_perception
{
// 组织边缘检测
cv::Mat perception_detect_edge(const cv::Mat& src);
}