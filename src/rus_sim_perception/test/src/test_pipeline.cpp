#include "test_include/test_pipeline.hpp"
#include "test_include/test_denoise.hpp"
#include "test_include/test_enhance.hpp"
#include "test_include/test_roi.hpp"
#include "test_include/test_muscle.hpp"
#include "test_include/test_tendon.hpp"
#include "test_include/test_bone.hpp"
#include "test_include/test_edge.hpp"
#include "test_include/test_joint.hpp"
#include "test_include/test_quality.hpp"
#include "test_include/test_feature.hpp"

#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void perception_pipeline(const Mat& src)
{
    cout << "==== 完整超声流水线 ====\n";

    Mat img_dn = perception_denoise(src);
    Mat img_en = perception_enhance(img_dn);
    Mat img_roi = perception_get_roi(img_en);

    Mat muscle = perception_segment_muscle(img_roi);
    Mat tendon = perception_segment_tendon(img_roi);
    Mat bone = perception_segment_bone(img_roi);
    Mat edge = perception_detect_edge(img_roi);
    vector<Point> joints = perception_detect_joint(img_roi);

    double score = perception_quality_score(img_roi);
    perception_print_features(img_roi);

    imshow("原图", src);
    imshow("去噪", img_dn);
    imshow("增强", img_en);
    imshow("ROI", img_roi);
    imshow("肌肉", muscle);
    imshow("肌腱", tendon);
    imshow("骨", bone);
    imshow("边缘", edge);

    Mat show_joint;
    cvtColor(img_roi, show_joint, COLOR_GRAY2BGR);
    for (auto& p : joints) circle(show_joint, p, 5, Scalar(0,255,0), -1);
    imshow("关节点", show_joint);
}

// 这里必须保留唯一的 main
int main()
{
    Mat img = imread("test.png", IMREAD_GRAYSCALE);
    if (img.empty()) {
        cerr << "无法读取 test.png\n";
        return -1;
    }
    perception_pipeline(img);
    waitKey(0);
    return 0;
}