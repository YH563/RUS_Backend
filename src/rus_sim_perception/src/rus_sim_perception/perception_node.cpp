#include "rus_sim_perception/perception_node.hpp"
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.hpp>

namespace RusPerception
{
    // 构造函数：创建订阅、发布
    PerceptionNode::PerceptionNode(const rclcpp::NodeOptions& options)
        : Node("perception_node", options)
    {
        // 订阅超声图像话题
        perception_image_subscriber_ = this->create_subscription<sensor_msgs::msg::Image>(
            "/ultrasound_input", 10,
            std::bind(&PerceptionNode::ImageCallback, this, std::placeholders::_1));

        // 发布处理后的边缘图像
        perception_image_publisher_ = this->create_publisher<sensor_msgs::msg::Image>(
            "/ultrasound_output", 10);

        RCLCPP_INFO(this->get_logger(), "PerceptionNode 初始化完成");
    }

    // 图像回调：收到图像 → 转换 → 处理 → 发布
    void PerceptionNode::ImageCallback(const sensor_msgs::msg::Image::SharedPtr msg) const
    {
        try
        {
            // ================= 规范图像转换 =================
            // ROS 图像消息 → OpenCV Mat（安全拷贝，无野指针风险）
            cv::Mat cv_image = cv_bridge::toCvCopy(*msg, sensor_msgs::image_encodings::BGR8)->image;

            // 转为团队规范智能指针
            rus_perception_ImagePtr input_image = std::make_shared<cv::Mat>(std::move(cv_image));

            // 调用处理函数
            rus_perception_ImagePtr output_image = processor_.Process(input_image);

            // 空结果判断
            if (!output_image)
            {
                RCLCPP_WARN(this->get_logger(), "图像处理返回空");
                return;
            }

            // 转换回 ROS 消息并发布
            auto output_msg = cv_bridge::CvImage(
                msg->header,
                sensor_msgs::image_encodings::MONO8,
                *output_image
            ).toImageMsg();

            perception_image_publisher_->publish(*output_msg);
        }
        // 异常捕获：图像转换失败
        catch (const cv_bridge::Exception& e)
        {
            RCLCPP_ERROR(this->get_logger(), "图像转换失败: %s", e.what());
        }
    }

} // namespace RusPerception