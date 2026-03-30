#include "rus_sim_perception/perception_denoise.hpp"
#include <opencv2/opencv.hpp>
namespace rus_sim_perception
{
cv::Mat perception_denoise(const cv::Mat& src)
{// 双边滤波去噪：适合肌骨超声斑点噪声
    cv::Mat dst;
    cv::bilateralFilter(src, dst, 9, 75, 75);
    return dst;
}
}