#include "rus_sim_perception/perception_roi.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace rus_sim_perception;

#ifdef STANDALONE
// 测试主函数
int main()
{
    // 读取测试图片
    cv::Mat img = cv::imread("test.png", cv::IMREAD_GRAYSCALE);

    if (img.empty())
    {
        std::cerr << "错误:无法读取test.png" << std::endl;
        return -1;
    }

    // 获取ROI
    cv::Mat roi_img = perception_get_roi(img);

    // 显示结果
    cv::imshow("原始图像", img);
    cv::imshow("ROI区域", roi_img);
    cv::waitKey(0);

    return 0;
}
#endif