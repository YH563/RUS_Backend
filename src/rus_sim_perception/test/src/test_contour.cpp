#include "rus_sim_perception/perception_contour.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace rus_sim_perception;

#ifdef STANDALONE
// 测试主函数

int main()
{
    cv::Mat img = cv::imread("test.png", cv::IMREAD_GRAYSCALE);

    if (img.empty())
    {
        std::cerr << "无法读取 test.png" << std::endl;
        return -1;
    }

    auto contours = get_contours(img);

    cv::cvtColor(img, img, cv::COLOR_GRAY2BGR);
    cv::drawContours(img, contours, -1, cv::Scalar(0, 255, 0), 2);

    cv::imshow("轮廓", img);
    cv::waitKey(0);
    return 0;
}
#endif