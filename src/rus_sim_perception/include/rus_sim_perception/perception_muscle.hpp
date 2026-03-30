#pragma once
#include <opencv2/opencv.hpp>
namespace rus_sim_perception
{
// 肌肉组织分割：低灰度区域提取
cv::Mat perception_segment_muscle(const cv::Mat& src);
}