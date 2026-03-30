#include "rus_sim_perception/perception_enhance.hpp"
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

    cv::Mat res = perception_enhance(img);

    cv::imshow("原始", img);
    cv::imshow("增强", res);
    cv::waitKey(0);
    return 0;
}
#endif