#include "rus_sim_perception/perception_denoise.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>
// 轮廓实现：先分割再提取
using namespace cv;
using namespace rus_sim_perception;
#ifdef STANDALONE
int main()
{// 双边滤波去噪：适合肌骨超声斑点噪声
    cv::Mat img = cv::imread("test.png", 0);
    cv::Mat res = perception_denoise(img);

    cv::imshow("original", img);
    cv::imshow("denoise", res);
    cv::waitKey(0);
    return 0;
}
#endif

