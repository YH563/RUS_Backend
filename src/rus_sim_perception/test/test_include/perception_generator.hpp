#pragma once

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <memory>

namespace TestPerception
{
    class PerceptionGenerator;

    using rus_test_PerceptionGeneratorPtr = std::shared_ptr<PerceptionGenerator>;

    /**
     * @brief 模拟超声图像发生器
     * 功能：定时发布假超声图像，供节点测试使用
     */
    class PerceptionGenerator : public rclcpp::Node
    {
    public:
        PerceptionGenerator();

    private:
        // 定时发布图像
        void TimerCallback();

        rclcpp::TimerBase::SharedPtr timer_;
        rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr pub_;
    };

} // namespace TestPerception