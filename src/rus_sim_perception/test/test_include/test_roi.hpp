#pragma once
#include <opencv2/opencv.hpp>

// 超声图像ROI提取：获取中心有效区域
cv::Mat perception_get_roi(const cv::Mat& src);