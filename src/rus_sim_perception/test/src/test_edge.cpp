#include "rus_sim_perception/perception_edge.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace rus_sim_perception;
#ifdef STANDALONE
int main()
{
    cv::Mat img = cv::imread("test.png", cv::IMREAD_GRAYSCALE);

    if (img.empty())
    {
        std::cerr << "错误:无法读取test.png" << std::endl;
        return -1;
    }

    cv::Mat edge = perception_detect_edge(img);

    cv::imshow("原始图像", img);
    cv::imshow("边缘检测", edge);
    cv::waitKey(0);

    return 0;
}
#endif