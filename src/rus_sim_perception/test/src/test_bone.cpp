#include "rus_sim_perception/perception_bone.hpp"
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

    cv::Mat bone = perception_segment_bone(img);

    cv::imshow("原始图像", img);
    cv::imshow("骨组织分割", bone);
    cv::waitKey(0);

    return 0;
}
#endif