#pragma once
#include <opencv2/opencv.hpp>
namespace rus_sim_perception
{
// 图像增强：直方图均衡化
cv::Mat perception_enhance(const cv::Mat& src);
}