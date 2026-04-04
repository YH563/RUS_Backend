#include "rclcpp/rclcpp.hpp"
#include "rus_sim_force/wrench_pub_node.hpp"

#ifdef ENABLE_TESTING
#include "test_wrench_estimate_smoke.hpp"
#include "test_wrench_estimate_val.hpp"
#include "test_wrench_estimate_pinocchio.hpp"
namespace TestRusSimForceSmoke {
void TestWrenchEstimatorSmoke(const std::string& urdf_path);
}
namespace TestRusSimForceVal {
void TestWrenchDemo(const std::string& urdf_path);
}
namespace TestRusSimForcePinocchio {
void TestPinocchioIntegration(const std::string& urdf_path);
}
#endif

// ─────────────────────────────────────────────────────────────────────────────
// URDF 路径：优先从命令行 --urdf 参数读取，兜底使用默认路径
// ─────────────────────────────────────────────────────────────────────────────
static std::string parse_urdf_path(int argc, char* argv[])
{
    const std::string default_path =
        "src/frcobot_ros2/fairino_description/urdf/fairino3_v6.urdf";

    for (int i = 1; i < argc - 1; ++i) {
        if (std::string(argv[i]) == "--urdf") {
            return std::string(argv[i + 1]);
        }
    }
    return default_path;
}

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    auto logger = rclcpp::get_logger("main");

    // ── 解析命令行参数 ──────────────────────────────────────────────────────
    bool run_test = false;
    for (int i = 1; i < argc; ++i) {
        if (std::string(argv[i]) == "--test") {
            run_test = true;
            break;
        }
    }
    const std::string urdf_path = parse_urdf_path(argc, argv);

    // ── 测试模式分支 ────────────────────────────────────────────────────────
#ifdef ENABLE_TESTING
    if (run_test) {
        RCLCPP_INFO(logger, "[main] 测试模式启动，urdf_path: %s", urdf_path.c_str());

        // ---- 历史测试（按需取消注释） ----
        // TestRusSimForceSmoke::TestWrenchEstimatorSmoke(urdf_path);
        // TestRusSimForceVal::TestWrenchDemo(urdf_path);

        // ---- 当前主要测试：Pinocchio 集成验证 ----
        TestRusSimForcePinocchio::TestPinocchioIntegration(urdf_path);

        rclcpp::shutdown();
        return 0;
    }
#else
    if (run_test) {
        RCLCPP_ERROR(logger,
            "[main] 当前编译未包含测试代码，请用 -DENABLE_TESTING=ON 重新编译");
        rclcpp::shutdown();
        return 1;
    }
#endif

    // ── 正式节点：wrench 实时发布 ──────────────────────────────────────────
    RCLCPP_INFO(logger, "[main] 启动 WrenchPubNode，urdf_path: %s", urdf_path.c_str());

    try {
        auto wrench_node = std::make_shared<RusSimForceNode::WrenchPubNode>();

        rclcpp::executors::MultiThreadedExecutor executor;
        executor.add_node(wrench_node);
        executor.spin();
    }
    catch (const std::exception& e) {
        RCLCPP_FATAL(logger, "[main] 节点启动失败: %s", e.what());
        rclcpp::shutdown();
        return 1;
    }

    rclcpp::shutdown();
    return 0;
}