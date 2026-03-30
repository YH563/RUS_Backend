#pragma once
#include <opencv2/opencv.hpp>
#include <vector>

// 关节点检测
std::vector<cv::Point> perception_detect_joint(const cv::Mat& src);