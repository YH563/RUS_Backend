#include "test_include/perception_generator.hpp"
#include <cv_bridge/cv_bridge.h>
#include <opencv2/opencv.hpp>

namespace TestPerception
{
    // 构造：创建发布器 + 定时器
    PerceptionGenerator::PerceptionGenerator()
        : Node("perception_generator")
    {
        // 发布到节点订阅的同一话题
        pub_ = this->create_publisher<sensor_msgs::msg::Image>("/ultrasound_input", 10);

        // 100ms 发一张图
        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(100),
            std::bind(&PerceptionGenerator::TimerCallback, this));
    }

    // 生成模拟超声图像并发布
    void PerceptionGenerator::TimerCallback()
    {
        // 创建带噪声的灰色背景（模拟超声）
        cv::Mat img(480, 640, CV_8UC3);
        cv::randn(img, cv::Scalar(110), cv::Scalar(30));

        // 画一个圆形模拟组织结构
        cv::circle(img, cv::Point(320, 240), 50, cv::Scalar(180), -1);

        // 转为 ROS 消息
        auto msg = cv_bridge::CvImage(
            std_msgs::msg::Header{},
            "bgr8",
            img
        ).toImageMsg();

        pub_->publish(*msg);
    }

} // namespace TestPerception