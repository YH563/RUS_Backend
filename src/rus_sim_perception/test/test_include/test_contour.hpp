#pragma once
#include <opencv2/opencv.hpp>
#include <vector>

// 轮廓提取
std::vector<std::vector<cv::Point>> get_contours(const cv::Mat& src);