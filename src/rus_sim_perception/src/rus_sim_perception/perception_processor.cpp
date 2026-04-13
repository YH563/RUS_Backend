#include "rus_sim_perception/perception_processor.hpp"
#include <opencv2/imgproc.hpp>

namespace RusPerception
{
    // 总处理流程：降噪 → 增强 → 边缘
    rus_perception_ImagePtr PerceptionProcessor::Process(const rus_perception_ImagePtr& image) const
    {
        // 空图像直接返回
        if (!image || image->empty())
            return nullptr;

        auto denoised = Denoise(image);
        auto enhanced = Enhance(denoised);
        return ExtractEdges(enhanced);
    }

    // 高斯模糊降噪（超声图像标准预处理）
    rus_perception_ImagePtr PerceptionProcessor::Denoise(const rus_perception_ImagePtr& in) const
    {
        auto out = std::make_shared<cv::Mat>();
        cv::GaussianBlur(*in, *out, cv::Size(5, 5), 0);
        return out;
    }

    // 灰度化 + 直方图均衡化，增强图像对比度
    rus_perception_ImagePtr PerceptionProcessor::Enhance(const rus_perception_ImagePtr& in) const
    {
        auto gray = std::make_shared<cv::Mat>();

        // 彩色图像转灰度
        if (in->channels() == 3)
            cv::cvtColor(*in, *gray, cv::COLOR_BGR2GRAY);
        else
            *gray = *in;

        // 直方图均衡化
        auto out = std::make_shared<cv::Mat>();
        cv::equalizeHist(*gray, *out);
        return out;
    }

    // Canny 边缘检测
    rus_perception_ImagePtr PerceptionProcessor::ExtractEdges(const rus_perception_ImagePtr& in) const
    {
        auto out = std::make_shared<cv::Mat>();
        cv::Canny(*in, *out, 50, 150);
        return out;
    }

} // namespace RusPerception