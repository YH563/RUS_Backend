#pragma once

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <memory>

#include "perception_processor.hpp"

namespace RusPerception
{
   // 前向声明 PerceptionNode 类
    class PerceptionNode;

   //再定义智能指针别名（此时编译器知道这个类存在）
    using rus_perception_PerceptionNodePtr = std::shared_ptr<PerceptionNode>;

    // 完整定义 PerceptionNode 类
    class PerceptionNode : public rclcpp::Node
    {
    public:
        explicit PerceptionNode(const rclcpp::NodeOptions& options = rclcpp::NodeOptions{});

    private:
        void ImageCallback(const sensor_msgs::msg::Image::SharedPtr msg) const;

        rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr perception_image_subscriber_;
        rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr perception_image_publisher_;

        PerceptionProcessor processor_;
    };

} // namespace RusPerception