#include "rus_sim_perception/perception_tendon.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>
namespace rus_sim_perception
{
// 肌腱分割：区间阈值提取
cv::Mat perception_segment_tendon(const cv::Mat& src)
{
    cv::Mat result;
    // 肌腱：中等亮度区域
    cv::inRange(src, 100, 160, result);
    return result;
}
}