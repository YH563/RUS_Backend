#pragma once
#include <opencv2/opencv.hpp>
namespace rus_sim_perception
{
// 骨组织分割：高亮度强回声区域
cv::Mat perception_segment_bone(const cv::Mat& src);
}