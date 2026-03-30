#pragma once
#include <opencv2/opencv.hpp>
namespace rus_sim_perception
{
// 图像质量评分（清晰度/对比度）
double perception_quality_score(const cv::Mat& src);
}