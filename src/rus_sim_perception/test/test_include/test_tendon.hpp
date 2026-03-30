#pragma once
#include <opencv2/opencv.hpp>

// 肌腱分割：中等亮度区域提取
cv::Mat perception_segment_tendon(const cv::Mat& src);