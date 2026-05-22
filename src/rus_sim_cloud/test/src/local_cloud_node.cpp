#include "test_include/local_cloud_node.hpp"

namespace TestLocalCloud
{
    CloudRGBPtr LoadPCD(const std::string& file_path) 
    {
        if (!std::filesystem::exists(file_path)) {
            RCLCPP_ERROR(rclcpp::get_logger("main"), "文件路径不存在: %s", file_path.c_str());
            return nullptr;
        }
        
        CloudRGBPtr cloud(new pcl::PointCloud<pcl::PointXYZRGB>);
        if (pcl::io::loadPCDFile<pcl::PointXYZRGB>(file_path, *cloud) == -1) {
            RCLCPP_ERROR(rclcpp::get_logger("main"), "读取PCD文件失败: %s", file_path.c_str());
            return nullptr;
        }
        
        RCLCPP_INFO(rclcpp::get_logger("main"), "成功读取点云: %s (%zu 点)", 
                    file_path.c_str(), cloud->size());
        return cloud;
    }

    std::vector<CloudRGBPtr> LoadPCDsFromFolder(const std::string& folder_path) 
    {
        std::vector<CloudRGBPtr> clouds;
        if (!std::filesystem::exists(folder_path) || !std::filesystem::is_directory(folder_path)) {
            RCLCPP_ERROR(rclcpp::get_logger("main"), "文件夹路径无效: %s", folder_path.c_str());
            return clouds;
        }
        for (const auto& entry : std::filesystem::directory_iterator(folder_path)) {
            if (entry.is_regular_file() && entry.path().extension() == ".pcd") {
                CloudRGBPtr cloud(new pcl::PointCloud<pcl::PointXYZRGB>);
                if (pcl::io::loadPCDFile<pcl::PointXYZRGB>(entry.path().string(), *cloud) == -1) {
                    RCLCPP_ERROR(rclcpp::get_logger("main"), "读取PCD文件失败: %s", entry.path().c_str());
                    continue;
                }
                clouds.push_back(cloud);
                RCLCPP_INFO(rclcpp::get_logger("main"), "成功读取点云: %s (%zu 点)", entry.path().c_str(), cloud->size());
            }
        }
        return clouds;
    }

    CloudQualityMetrics EvaluateCloudQuality(const CloudRGB::ConstPtr& cloud)
    {
        CloudQualityMetrics metrics{};
        if (!cloud || cloud->empty()) {
            return metrics;
        }

        // --- 1. Total number of points ---
        metrics.num_points = cloud->size();

        // --- 2. Density (points per cubic meter via OBB volume) ---
        pcl::MomentOfInertiaEstimation<pcl::PointXYZRGB> feature_extractor;
        feature_extractor.setInputCloud(cloud);
        feature_extractor.compute();

        pcl::PointXYZRGB min_obb, max_obb;
        pcl::PointXYZRGB position_obb;
        Eigen::Matrix3f rotational_matrix_obb;
        feature_extractor.getOBB(min_obb, max_obb, position_obb, rotational_matrix_obb);

        Eigen::Vector3f obb_extent(
            max_obb.x - min_obb.x,
            max_obb.y - min_obb.y,
            max_obb.z - min_obb.z
        );
        double volume = obb_extent.prod();            // cubic meters
        // Ensure minimum volume to avoid division by zero / huge densities
        volume = std::max(volume, 1e-8);

        metrics.density = static_cast<double>(metrics.num_points) / volume;

        // --- 3. Average luminance and standard deviation ---
        // Convert RGB to luminance: L = 0.299*R + 0.587*G + 0.114*B
        double sum_lum = 0.0;
        double sum_sq_lum = 0.0;

        const uint32_t rgb_field_offset = reinterpret_cast<const char*>(&cloud->points[0].rgb)
                                        - reinterpret_cast<const char*>(&cloud->points[0]);

        for (size_t i = 0; i < cloud->size(); ++i) {
            uint32_t rgb;
            std::memcpy(&rgb, reinterpret_cast<const char*>(&cloud->points[i]) + rgb_field_offset, sizeof(uint32_t));
            uint8_t r = (rgb >> 16) & 0xFF;
            uint8_t g = (rgb >>  8) & 0xFF;
            uint8_t b = (rgb)       & 0xFF;
            double lum = 0.299 * r + 0.587 * g + 0.114 * b;
            sum_lum += lum;
            sum_sq_lum += lum * lum;
        }

        metrics.avg_luminance = sum_lum / static_cast<double>(metrics.num_points);
        double mean_lum = metrics.avg_luminance;
        metrics.std_luminance = std::sqrt(sum_sq_lum / metrics.num_points - mean_lum * mean_lum);

        // --- 4. Number of outliers (based on local neighbourhood distance threshold) ---
        // Build kd-tree for the cloud
        pcl::KdTreeFLANN<pcl::PointXYZRGB> kdtree;
        kdtree.setInputCloud(cloud);

        const int k_neighbors = 20;
        const double outlier_factor = 2.0;  // multiplier × MAD-like median distance

        // Compute median of mean distances to k neighbours (sample first 1000 points if large)
        const size_t sample_size = std::min(cloud->size(), size_t(1000));
        std::vector<double> mean_distances;
        mean_distances.reserve(sample_size);

        std::vector<int> indices(k_neighbors + 1);   // include the point itself
        std::vector<float> sq_distances(k_neighbors + 1);

        for (size_t i = 0; i < sample_size; ++i) {
            if (kdtree.nearestKSearch(cloud->points[i], k_neighbors + 1, indices, sq_distances) > 1) {
                double sum_dist = 0.0;
                int count = 0;
                for (int j = 1; j < k_neighbors + 1; ++j) {   // skip the point itself (index 0)
                    sum_dist += std::sqrt(sq_distances[j]);
                    ++count;
                }
                mean_distances.push_back(sum_dist / count);
            }
        }

        if (mean_distances.empty()) {
            return metrics;
        }

        // Median of mean distances (robust central tendency)
        std::sort(mean_distances.begin(), mean_distances.end());
        double median_dist = mean_distances[mean_distances.size() / 2];

        // MAD (median absolute deviation)
        std::vector<double> abs_dev;
        abs_dev.reserve(mean_distances.size());
        for (double d : mean_distances) {
            abs_dev.push_back(std::fabs(d - median_dist));
        }
        std::sort(abs_dev.begin(), abs_dev.end());
        double mad = abs_dev[abs_dev.size() / 2];
        double threshold = median_dist + outlier_factor * mad;

        // Count outliers on the entire cloud
        size_t outlier_count = 0;
        for (size_t i = 0; i < cloud->size(); ++i) {
            if (kdtree.nearestKSearch(cloud->points[i], k_neighbors + 1, indices, sq_distances) > 1) {
                double sum_dist = 0.0;
                int count = 0;
                for (int j = 1; j < k_neighbors + 1; ++j) {
                    sum_dist += std::sqrt(sq_distances[j]);
                    ++count;
                }
                double avg_dist = sum_dist / count;
                if (avg_dist > threshold) {
                    ++outlier_count;
                }
            }
        }

        metrics.num_outliers = outlier_count;

        return metrics;
    }

    void PrintCloudQualityReport(const CloudRGB::ConstPtr& cloud)
    {
        if (!cloud) {
            std::cout << "[PrintCloudQualityReport] Cloud is null.\n";
            return;
        }

        CloudQualityMetrics metrics = EvaluateCloudQuality(cloud);

        std::cout << "\n======== Cloud Quality Report ========\n";
        std::cout << std::fixed << std::setprecision(3);
        std::cout << "  Total points            : " << metrics.num_points << "\n";
        std::cout << "  Density (points/m³)     : " << metrics.density << "\n";
        std::cout << "  Average luminance       : " << metrics.avg_luminance << "\n";
        std::cout << "  Luminance std dev       : " << metrics.std_luminance << "\n";
        std::cout << "  Outlier count           : " << metrics.num_outliers
                << " (" << (metrics.num_points > 0
                            ? 100.0 * metrics.num_outliers / metrics.num_points
                            : 0.0)
                << "%)\n";
        std::cout << "======================================\n\n";
    }
}