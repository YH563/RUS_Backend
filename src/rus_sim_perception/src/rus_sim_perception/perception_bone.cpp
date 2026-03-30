#include "rus_sim_perception/perception_bone.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>
namespace rus_sim_perception
{
// 骨分割：高亮度区域
cv::Mat perception_segment_bone(const cv::Mat& src)
{
    cv::Mat result;
    // 骨组织：高回声高亮区域
    cv::threshold(src,result, 180, 255, cv::THRESH_BINARY);
    return result;
}
}