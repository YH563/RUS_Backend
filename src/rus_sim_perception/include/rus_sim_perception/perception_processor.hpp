#pragma once

#include <opencv2/opencv.hpp>
#include <memory>

namespace RusPerception
{
    using rus_perception_ImagePtr = std::shared_ptr<cv::Mat>;

    /**
     * @brief 超声图像处理类
     * 功能：降噪 → 对比度增强 → 边缘提取
     */
    class PerceptionProcessor
    {
    public:
        PerceptionProcessor() = default;

        /**
         * @brief 图像处理总入口
         * @param image 输入超声图像
         * @return 处理完成后的边缘图像
         */
        rus_perception_ImagePtr Process(const rus_perception_ImagePtr& image) const;

    private:
        // 高斯降噪（去除超声斑点噪声）
        rus_perception_ImagePtr Denoise(const rus_perception_ImagePtr& in) const;

        // 图像增强（提升组织对比度）
        rus_perception_ImagePtr Enhance(const rus_perception_ImagePtr& in) const;

        // 边缘提取（Canny算子）
        rus_perception_ImagePtr ExtractEdges(const rus_perception_ImagePtr& in) const;
    };

} // namespace RusPerception