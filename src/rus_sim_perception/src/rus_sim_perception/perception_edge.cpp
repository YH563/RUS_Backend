#include "rus_sim_perception/perception_edge.hpp"
#include <opencv2/opencv.hpp>
namespace rus_sim_perception
{
// Canny边缘检测
cv::Mat perception_detect_edge(const cv::Mat& src)
{
    cv::Mat edge;
    cv::Canny(src, edge, 50, 150);
    return edge;
}
}