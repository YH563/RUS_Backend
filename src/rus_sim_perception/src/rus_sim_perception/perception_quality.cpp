#include "rus_sim_perception/perception_quality.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>
namespace rus_sim_perception
{
// 质量评分：灰度标准差（越大越清晰）
double perception_quality_score(const cv::Mat& src)
{
    cv::Mat mean, stddev;
    cv::meanStdDev(src, mean, stddev);
    return stddev.at<double>(0);
}
}