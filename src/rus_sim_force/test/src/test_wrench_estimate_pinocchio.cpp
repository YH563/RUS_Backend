#include "test_wrench_estimate.hpp"

namespace TestWrenchEstimate {

    using RusSimForce::vec_to_str;
    using RusSimForce::Vector3d;
    using RusSimForce::VectorXd;

    // ─────────────────────────────────────────────────────────────────────────────
    // 内部辅助
    // ─────────────────────────────────────────────────────────────────────────────
    static int g_pass  = 0;
    static int g_total = 0;

    static bool check_vec3(const rclcpp::Logger& logger,
                            const std::string& tag,
                            const Vector3d& got,
                            const Vector3d& expected,
                            double tol,
                            const std::string& unit)
    {
        const double err = (got - expected).norm();
        g_total++;
        if (err < tol) {
            RCLCPP_INFO(logger, "  [PASS] %-40s err=%.2e %s",
                        tag.c_str(), err, unit.c_str());
            g_pass++;
            return true;
        }
        RCLCPP_ERROR(logger, "  [FAIL] %-40s err=%.4f %s",
                     tag.c_str(), err, unit.c_str());
        RCLCPP_ERROR(logger, "         got     =[%s]", vec_to_str(got).c_str());
        RCLCPP_ERROR(logger, "         expected=[%s]", vec_to_str(expected).c_str());
        return false;
    }

    // ─────────────────────────────────────────────────────────────────────────────
    // 【第一组】Pinocchio RNEA 零外力自洽验证
    // ─────────────────────────────────────────────────────────────────────────────
    static void test_group1_zero_ext_force(const rclcpp::Logger& logger,
                                            RusSimForce::WrenchEstimate& est)
    {
        RCLCPP_INFO(logger, "【第一组】零外力自洽：RNEA(q,0,0) → tau_gravity → Estimate → force≈0");

        const std::vector<VectorXd> configs = {
            (VectorXd(6) << 0.0,  0.0,    0.0,    0.0,   0.0,  0.0).finished(),
            (VectorXd(6) << 0.0, -0.5236, 1.0472,-0.5236, 1.5708, 0.0).finished(),
            (VectorXd(6) << M_PI/4, -M_PI/4, M_PI/2, -M_PI/4, M_PI/3, M_PI/6).finished(),
            (VectorXd(6) <<-M_PI/6, -M_PI/3, 2*M_PI/3,-M_PI/6, M_PI/4,-M_PI/4).finished(),
        };

        const VectorXd qd_zero  = VectorXd::Zero(6);
        const VectorXd qdd_zero = VectorXd::Zero(6);

        for (size_t k = 0; k < configs.size(); ++k) {
            const VectorXd& q = configs[k];

            VectorXd F_zero(6); F_zero.setZero();
            est.SetSimForce(F_zero);
            const VectorXd tau_gravity = est.BuildSimTauMeas(q, qd_zero, qdd_zero);
            est.ClearSimForce();

            RCLCPP_INFO(logger, "  Config-%zu  q=[%s]", k, vec_to_str(q).c_str());
            RCLCPP_INFO(logger, "           tau_gravity=[%s]", vec_to_str(tau_gravity).c_str());

            const RusSimForce::ForceResult res = est.Estimate(q, qd_zero, qdd_zero, tau_gravity);

            RCLCPP_INFO(logger, "           force =[%s]  (expect ≈ 0)",
                        vec_to_str(res.force).c_str());
            RCLCPP_INFO(logger, "           torque=[%s]  (expect ≈ 0)",
                        vec_to_str(res.torque).c_str());
            RCLCPP_INFO(logger, "           cond  =%.4f  valid=%s",
                        res.cond_num, res.is_valid ? "true" : "false");

            check_vec3(logger,
                       "Config-" + std::to_string(k) + " force≈0",
                       res.force, Vector3d::Zero(), 0.01, "N");
            check_vec3(logger,
                       "Config-" + std::to_string(k) + " torque≈0",
                       res.torque, Vector3d::Zero(), 0.01, "Nm");
        }
    }

    // ─────────────────────────────────────────────────────────────────────────────
    // 【第二组】已知力注入闭环验证
    // ─────────────────────────────────────────────────────────────────────────────
    static void test_group2_force_recovery(const rclcpp::Logger& logger,
                                            RusSimForce::WrenchEstimate& est)
    {
        RCLCPP_INFO(logger, "【第二组】力注入闭环：SetSimForce → build_tau → Estimate → 恢复原力");

        VectorXd q(6);
        q << 0.0, -0.5236, 1.0472, -0.5236, 1.5708, 0.0;
        const VectorXd qd_zero  = VectorXd::Zero(6);
        const VectorXd qdd_zero = VectorXd::Zero(6);

        const std::vector<std::pair<std::string, VectorXd>> cases = {
            {"纯fz=-19.62N",
             (VectorXd(6) << 0,0,0,  0,0,-19.62).finished()},
            {"纯fx=+15N",
             (VectorXd(6) << 0,0,0,  15,0,0).finished()},
            {"纯fy=-10N",
             (VectorXd(6) << 0,0,0,  0,-10,0).finished()},
            {"三轴力 fx=5,fy=-8,fz=-12N",
             (VectorXd(6) << 0,0,0,  5,-8,-12).finished()},
            {"力+力矩 nx=3,fz=-10N",
             (VectorXd(6) << 3,0,0,  0,0,-10).finished()},
            {"全6D nx=2,ny=-1,nz=0.5,fx=8,fy=-5,fz=-15N",
             (VectorXd(6) << 2,-1,0.5,  8,-5,-15).finished()},
        };

        for (const auto& c : cases) {
            const std::string& name    = c.first;
            const VectorXd&    F_true  = c.second;

            est.SetSimForce(F_true);
            const VectorXd tau_meas = est.BuildSimTauMeas(q, qd_zero, qdd_zero);
            est.ClearSimForce();

            RCLCPP_INFO(logger, "  ── %s ──", name.c_str());
            RCLCPP_INFO(logger, "     tau_meas=[%s]", vec_to_str(tau_meas).c_str());

            const RusSimForce::ForceResult res = est.Estimate(q, qd_zero, qdd_zero, tau_meas);

            RCLCPP_INFO(logger, "     force =[%s]  (true=[%s])",
                        vec_to_str(res.force).c_str(),
                        vec_to_str(F_true.tail<3>()).c_str());
            RCLCPP_INFO(logger, "     torque=[%s]  (true=[%s])",
                        vec_to_str(res.torque).c_str(),
                        vec_to_str(F_true.head<3>()).c_str());

            check_vec3(logger, name + " force",  res.force,  F_true.tail<3>(), 0.05, "N");
            check_vec3(logger, name + " torque", res.torque, F_true.head<3>(), 0.05, "Nm");
        }
    }

    // ─────────────────────────────────────────────────────────────────────────────
    // 【第三组】动态状态（qd≠0, qdd≠0）闭环验证
    // ─────────────────────────────────────────────────────────────────────────────
    static void test_group3_dynamic_recovery(const rclcpp::Logger& logger,
                                              RusSimForce::WrenchEstimate& est)
    {
        RCLCPP_INFO(logger, "【第三组】动态闭环：有速度加速度时，力恢复精度与静态一致");

        VectorXd q(6);
        q << 0.0, -0.5236, 1.0472, -0.5236, 1.5708, 0.0;

        VectorXd qd(6), qdd(6);
        qd  << 0.1, -0.05,  0.08, -0.03,  0.05,  0.02;
        qdd << 0.05,-0.02,  0.03, -0.01,  0.02,  0.01;

        const std::vector<std::pair<std::string, VectorXd>> cases = {
            {"动态+fz=-19.62N",
             (VectorXd(6) << 0,0,0,  0,0,-19.62).finished()},
            {"动态+三轴力 fx=5,fy=-8,fz=-15N",
             (VectorXd(6) << 0,0,0,  5,-8,-15).finished()},
            {"动态+全6D",
             (VectorXd(6) << 2,-1,0.5,  8,-5,-15).finished()},
        };

        for (const auto& c : cases) {
            const std::string& name   = c.first;
            const VectorXd&    F_true = c.second;

            est.SetSimForce(F_true);
            const VectorXd tau_meas = est.BuildSimTauMeas(q, qd, qdd);
            est.ClearSimForce();

            RCLCPP_INFO(logger, "  ── %s ──", name.c_str());
            RCLCPP_INFO(logger, "     tau_meas=[%s]", vec_to_str(tau_meas).c_str());

            const RusSimForce::ForceResult res = est.Estimate(q, qd, qdd, tau_meas);

            RCLCPP_INFO(logger, "     force =[%s]  (true=[%s])",
                        vec_to_str(res.force).c_str(),
                        vec_to_str(F_true.tail<3>()).c_str());

            check_vec3(logger, name + " force",  res.force,  F_true.tail<3>(), 0.05, "N");
            check_vec3(logger, name + " torque", res.torque, F_true.head<3>(), 0.05, "Nm");
        }
    }

    // ─────────────────────────────────────────────────────────────────────────────
    // 【第四组】tau 数值对比：Pinocchio RNEA vs 旧手写逆动力学
    // ─────────────────────────────────────────────────────────────────────────────
    static void test_group4_rnea_comparison(const rclcpp::Logger& logger,
                                             RusSimForce::WrenchEstimate& est)
    {
        RCLCPP_INFO(logger, "【第四组】tau 对比：Pinocchio vs 旧手写（需人工审查）");
        RCLCPP_INFO(logger, "  说明：仅打印数值，不判断PASS/FAIL。若两者有差异，差值反映旧代码误差");

        VectorXd q(6);
        q << 0.0, -0.5236, 1.0472, -0.5236, 1.5708, 0.0;
        const VectorXd qd_zero  = VectorXd::Zero(6);
        const VectorXd qdd_zero = VectorXd::Zero(6);

        VectorXd F_zero(6); F_zero.setZero();
        est.SetSimForce(F_zero);
        const VectorXd tau_pinocchio = est.BuildSimTauMeas(q, qd_zero, qdd_zero);
        est.ClearSimForce();

        RCLCPP_INFO(logger, "  q              = [%s]", vec_to_str(q).c_str());
        RCLCPP_INFO(logger, "  tau (current)  = [%s]", vec_to_str(tau_pinocchio).c_str());
        RCLCPP_INFO(logger, "  说明：切换到Pinocchio前后跑一次，对比tau数值差异即可定位误差");
        RCLCPP_INFO(logger, "  参考量级：|tau[1]| 最大（大臂承载），应在 20~50 Nm 范围");
        RCLCPP_INFO(logger, "            |tau[5]| 最小（腕关节），应在 0~2 Nm 范围");
    }

    // ─────────────────────────────────────────────────────────────────────────────
    // 【第五组】法兰变换一致性
    // ─────────────────────────────────────────────────────────────────────────────
    static void test_group5_flange_consistency(const rclcpp::Logger& logger,
                                                RusSimForce::WrenchEstimate& est)
    {
        RCLCPP_INFO(logger, "【第五组】法兰变换一致性：torque_base = raw.torque + d×force");

        VectorXd q(6);
        q << 0.0, -0.5236, 1.0472, -0.5236, 1.5708, 0.0;
        const VectorXd qd_zero  = VectorXd::Zero(6);
        const VectorXd qdd_zero = VectorXd::Zero(6);

        const std::vector<VectorXd> forces = {
            (VectorXd(6) << 0,0,0,  0,0,-19.62).finished(),
            (VectorXd(6) << 2,-1,0.5,  8,-5,-15).finished(),
            (VectorXd(6) << 5,0,0,  0,0,0).finished(),
        };

        for (size_t k = 0; k < forces.size(); ++k) {
            const VectorXd& F_true = forces[k];

            est.SetSimForce(F_true);
            const VectorXd tau = est.BuildSimTauMeas(q, qd_zero, qdd_zero);
            est.ClearSimForce();

            const RusSimForce::ForceResult       raw = est.Estimate(q, qd_zero, qdd_zero, tau);
            const RusSimForce::EndEffectorWrench res =
                est.EstimateAtFlange(q, qd_zero, qdd_zero, tau);

            const Vector3d flange_offset(0.0, 0.0, 0.094);
            const Vector3d d               = res.R_flange * flange_offset;
            const Vector3d expected_torque = raw.torque + d.cross(raw.force);

            RCLCPP_INFO(logger, "  Force-%zu  d_base=[%s]", k, vec_to_str(d).c_str());
            RCLCPP_INFO(logger, "            res.torque   =[%s]",
                        vec_to_str(res.torque).c_str());
            RCLCPP_INFO(logger, "            expect_torque=[%s]",
                        vec_to_str(expected_torque).c_str());

            check_vec3(logger,
                       "Force-" + std::to_string(k) + " flange torque",
                       res.torque, expected_torque, 1e-3, "Nm");
        }
    }

    // ─────────────────────────────────────────────────────────────────────────────
    // 主入口
    // ─────────────────────────────────────────────────────────────────────────────
    void TestPinocchioIntegration(const std::string& urdf_path)
    {
        auto logger = rclcpp::get_logger("TestPinocchio");

        RCLCPP_INFO(logger, "========================================");
        RCLCPP_INFO(logger, "  Pinocchio 集成验证测试");
        RCLCPP_INFO(logger, "========================================");

        g_pass  = 0;
        g_total = 0;

        RusSimForce::WrenchEstimate est(urdf_path);

        test_group1_zero_ext_force(logger, est);
        RCLCPP_INFO(logger, " ");
        test_group2_force_recovery(logger, est);
        RCLCPP_INFO(logger, " ");
        test_group3_dynamic_recovery(logger, est);
        RCLCPP_INFO(logger, " ");
        test_group4_rnea_comparison(logger, est);
        RCLCPP_INFO(logger, " ");
        test_group5_flange_consistency(logger, est);

        RCLCPP_INFO(logger, "========================================");
        if (g_pass == g_total) {
            RCLCPP_INFO(logger, "[SUCCESS] 全部通过 %d / %d", g_pass, g_total);
        } else {
            RCLCPP_ERROR(logger, "[FAILED]  通过 %d / %d，请检查上方 FAIL 项",
                         g_pass, g_total);
        }
        RCLCPP_INFO(logger, "========================================");
    }

} // namespace TestWrenchEstimate