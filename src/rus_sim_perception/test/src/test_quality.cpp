#include "rus_sim_perception/perception_quality.hpp"
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

    double score = perception_quality_score(img);
    std::cout << "图像质量分数（清晰度）：" << score << std::endl;

    cv::imshow("测试图像", img);
    cv::waitKey(0);

    return 0;
}
#endif