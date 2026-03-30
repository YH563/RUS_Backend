#pragma once
#include <opencv2/opencv.hpp>

// 超声图像去噪：双边滤波，保留边缘、去除斑点噪声
cv::Mat perception_denoise(const cv::Mat& src);