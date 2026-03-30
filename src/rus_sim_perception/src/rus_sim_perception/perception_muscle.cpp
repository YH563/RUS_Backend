#include "rus_sim_perception/perception_muscle.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>
namespace rus_sim_perception
{
// 肌肉分割：低阈值二值化
cv::Mat perception_segment_muscle(const cv::Mat& src)
{
    cv::Mat result;
    // 肌肉：低灰度区域
    cv::threshold(src, result, 50, 255, cv::THRESH_BINARY);
    return result;
}
}