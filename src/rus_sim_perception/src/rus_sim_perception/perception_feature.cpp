#include "rus_sim_perception/perception_feature.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>

namespace rus_sim_perception
{
// 打印图像基础特征
void perception_print_features(const cv::Mat& src)
{
    cv::Mat mean_mat, stddev_mat;
    // 正确调用 meanStdDev：传入均值和标准差的存储矩阵
    cv::meanStdDev(src, mean_mat, stddev_mat);

    double mean_val = mean_mat.at<double>(0);
    double std_val = stddev_mat.at<double>(0);

    std::cout << "==== 超声图像特征 ====" << std::endl;
    std::cout << "图像尺寸：" << src.cols << "x" << src.rows << std::endl;
    std::cout << "平均灰度：" << mean_val << std::endl;
    std::cout << "对比度：" << std_val << std::endl;
}
}