#include "rus_sim_perception/perception_muscle.hpp"
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

    cv::Mat muscle = perception_segment_muscle(img);

    cv::imshow("原始图像", img);
    cv::imshow("肌肉分割", muscle);
    cv::waitKey(0);

    return 0;
}
#endif
