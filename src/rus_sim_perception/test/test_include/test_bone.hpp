#pragma once
#include <opencv2/opencv.hpp>

// 骨组织分割：高亮度强回声区域
cv::Mat perception_segment_bone(const cv::Mat& src);