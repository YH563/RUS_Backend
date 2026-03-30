#include "rus_sim_perception/perception_joint.hpp"
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
        std::cerr << "无法读取 test.png" << std::endl;
        return -1;
    }

    auto joints = perception_detect_joint(img);

    // 绘制关节点
    cv::Mat show_img;
    cv::cvtColor(img, show_img, cv::COLOR_GRAY2BGR);
    for (auto& p : joints)
    {
        cv::circle(show_img, p, 5, cv::Scalar(0, 255, 0), -1);
    }

    cv::imshow("原始图像", img);
    cv::imshow("关节点检测（骨缘交点）", show_img);
    cv::waitKey(0);

    return 0;
}
#endif