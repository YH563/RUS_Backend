#pragma once
#include <opencv2/opencv.hpp>
namespace rus_sim_perception
{
// 肌腱分割：中等亮度区域提取
cv::Mat perception_segment_tendon(const cv::Mat& src);
}