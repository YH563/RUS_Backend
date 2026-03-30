#include "rus_sim_perception/perception_enhance.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>
namespace rus_sim_perception
{
// 增强实现：直方图均衡化
cv::Mat perception_enhance(const cv::Mat& src)
{
    cv::Mat dst;
    cv::equalizeHist(src, dst);
    return dst;
}
}