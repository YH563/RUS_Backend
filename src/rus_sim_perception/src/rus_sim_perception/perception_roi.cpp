#include "rus_sim_perception/perception_roi.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>
namespace rus_sim_perception
{
// ROI实现：截取图像中心50%区域
cv::Mat perception_get_roi(const cv::Mat& src)
{
    int width = src.cols;
    int height = src.rows;

    // 定义ROI区域：从1/4位置开始，截取宽高的1/2
    int x = width / 4;
    int y = height / 4;
    int w = width / 2;
    int h = height / 2;

    cv::Rect roi_rect(x, y, w, h);
    return src(roi_rect).clone();
}
}