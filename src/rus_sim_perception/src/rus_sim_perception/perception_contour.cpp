#include "rus_sim_perception/perception_contour.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>


namespace rus_sim_perception
{// 轮廓实现：先分割再提取
std::vector<std::vector<cv::Point>> get_contours(const cv::Mat& src)
{
    cv::Mat bin;
    cv::threshold(src, bin, 0, 255, cv::THRESH_BINARY | cv::THRESH_OTSU);

    std::vector<std::vector<cv::Point>> contours;
    cv::findContours(bin, contours, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);
    return contours;
}
}