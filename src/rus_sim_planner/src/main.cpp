#include "rus_sim_planner/trajectory_planner.hpp"

// 只有在测试模式下才使用
#ifdef ENABLE_TESTING
#include "test_include/geodesic_test.hpp"
#endif

int main(int argc, char *argv[]) {
    // 解析命令行参数
    bool test_mode = false;
    for (int i = 1; i < argc; ++i) {
        std::string arg(argv[i]);
        if (arg == "--test") {
            test_mode = true;
            break;
        }
    }
    
    rclcpp::init(argc, argv);
    #ifdef ENABLE_TESTING
        if (test_mode) {
            auto geodesic_node = std::make_shared<TestGeodesic::GeodesicNode>();
            rclcpp::spin(geodesic_node);
            rclcpp::shutdown();
            return 0;
        } 
    #endif

    return 0;
}