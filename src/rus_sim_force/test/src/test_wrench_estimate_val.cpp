#include "test_wrench_estimate.hpp"

namespace TestWrenchEstimate {

    using RusSimForce::vec_to_str;
    using RusSimForce::Vector3d;
    using RusSimForce::VectorXd;

    // ─────────────────────────────────────────────────────────────────────
    // 内部辅助：检查力误差，打印 PASS/FAIL，返回是否通过
    // ─────────────────────────────────────────────────────────────────────
    static bool check_force(
        const rclcpp::Logger& logger,
        const std::string& tag,
        const Vector3d& got,
        const Vector3d& expected,
        double tol = 0.05)
    {
        const Vector3d err  = got - expected;
        const double   norm = err.norm();
        if (norm < tol) {
            RCLCPP_INFO(logger,
                "  [PASS] %-35s err = %.2e N  (< %.2f)",
                tag.c_str(), norm, tol);
            return true;
        } else {
            RCLCPP_ERROR(logger,
                "  [FAIL] %-35s err = %.4f N  (>= %.2f)",
                tag.c_str(), norm, tol);
            RCLCPP_ERROR(logger,
                "         got=[%s]  expected=[%s]",
                vec_to_str(got).c_str(),
                vec_to_str(expected).c_str());
            return false;
        }
    }

    static bool check_torque(
        const rclcpp::Logger& logger,
        const std::string& tag,
        const Vector3d& got,
        const Vector3d& expected,
        double tol = 0.05)
    {
        const Vector3d err  = got - expected;
        const double   norm = err.norm();
        if (norm < tol) {
            RCLCPP_INFO(logger,
                "  [PASS] %-35s err = %.2e Nm (< %.2f)",
                tag.c_str(), norm, tol);
            return true;
        } else {
            RCLCPP_ERROR(logger,
                "  [FAIL] %-35s err = %.4f Nm (>= %.2f)",
                tag.c_str(), norm, tol);
            RCLCPP_ERROR(logger,
                "         got=[%s]  expected=[%s]",
                vec_to_str(got).c_str(),
                vec_to_str(expected).c_str());
            return false;
        }
    }

    // ─────────────────────────────────────────────────────────────────────
    // 单组 SetSimForce 测试
    // ─────────────────────────────────────────────────────────────────────
    static bool run_one_case(
        const rclcpp::Logger& logger,
        RusSimForce::WrenchEstimate& est,
        const std::string& case_name,
        const VectorXd& q,
        const VectorXd& qd,
        const VectorXd& qdd,
        const VectorXd& F_true,
        double tol = 0.05)
    {
        RCLCPP_INFO(logger, "── %s ──", case_name.c_str());
        RCLCPP_INFO(logger, "  F_true : [%s]", vec_to_str(F_true).c_str());

        est.SetSimForce(F_true);
        const RusSimForce::EndEffectorWrench res = est.EstimateAtFlange(q, qd, qdd);
        est.ClearSimForce();

        if (!res.is_valid) {
            RCLCPP_ERROR(logger, "  [FAIL] is_valid=false, cond=%.2e", res.cond_num);
            return false;
        }

        RCLCPP_INFO(logger, "  cond_num     = %.4f  (valid)", res.cond_num);
        RCLCPP_INFO(logger, "  force_base   = [%s]", vec_to_str(res.force).c_str());
        RCLCPP_INFO(logger, "  torque_base  = [%s]", vec_to_str(res.torque).c_str());
        RCLCPP_INFO(logger, "  force_flange = [%s]", vec_to_str(res.force_in_flange).c_str());
        RCLCPP_INFO(logger, "  torque_flange= [%s]", vec_to_str(res.torque_in_flange).c_str());

        const Vector3d force_true = F_true.tail<3>();
        return check_force(logger, "force_base vs F_true.force", res.force, force_true, tol);
    }

    // ─────────────────────────────────────────────────────────────────────
    // 主测试函数
    // ─────────────────────────────────────────────────────────────────────
    void TestWrenchDemo(const std::string& urdf_path) {
        auto logger = rclcpp::get_logger("TestWrenchDemo");

        RCLCPP_INFO(logger, "========================================");
        RCLCPP_INFO(logger, "   WrenchEstimate 数值验证测试");
        RCLCPP_INFO(logger, "========================================");

        RusSimForce::WrenchEstimate est(urdf_path);
        int pass_count  = 0;
        int total_count = 0;

        VectorXd q(6);
        q << 0.0, -0.5236, 1.0472, -0.5236, 1.5708, 0.0;

        const VectorXd qd_zero  = VectorXd::Zero(6);
        const VectorXd qdd_zero = VectorXd::Zero(6);

        VectorXd qd(6), qdd(6);
        qd  << 0.1, -0.05,  0.08, -0.03,  0.05,  0.02;
        qdd << 0.05, -0.02, 0.03, -0.01,  0.02,  0.01;

        // ================================================================
        RCLCPP_INFO(logger, "【第一组】静态 + 单轴力验证（排除动力学）");
        // ================================================================

        { VectorXd F(6); F << 0, 0, 0,  0, 0, -19.62;
          total_count++;
          if (run_one_case(logger, est, "Case1-1: fz=-19.62N (静)", q, qd_zero, qdd_zero, F)) pass_count++; }

        { VectorXd F(6); F << 0, 0, 0,  10.0, 0, 0;
          total_count++;
          if (run_one_case(logger, est, "Case1-2: fx=+10N (静)", q, qd_zero, qdd_zero, F)) pass_count++; }

        { VectorXd F(6); F << 0, 0, 0,  0, 10.0, 0;
          total_count++;
          if (run_one_case(logger, est, "Case1-3: fy=+10N (静)", q, qd_zero, qdd_zero, F)) pass_count++; }

        { VectorXd F(6); F << 0, 0, 0,  10.0, 0, -10.0;
          total_count++;
          if (run_one_case(logger, est, "Case1-4: fx=+10, fz=-10N (静)", q, qd_zero, qdd_zero, F)) pass_count++; }

        { VectorXd F(6); F << 0, 0, 0,  5.0, -8.0, -15.0;
          total_count++;
          if (run_one_case(logger, est, "Case1-5: fx=5,fy=-8,fz=-15N (静)", q, qd_zero, qdd_zero, F)) pass_count++; }

        // ================================================================
        RCLCPP_INFO(logger, "【第二组】静态 + 力矩验证");
        // ================================================================

        { VectorXd F(6); F << 0, 0, 5.0,  0, 0, 0;
          total_count++;
          if (run_one_case(logger, est, "Case2-1: nz=+5Nm (静)", q, qd_zero, qdd_zero, F)) pass_count++; }

        { VectorXd F(6); F << 3.0, 0, 0,  0, 0, -10.0;
          total_count++;
          if (run_one_case(logger, est, "Case2-2: nx=3Nm, fz=-10N (静)", q, qd_zero, qdd_zero, F)) pass_count++; }

        // ================================================================
        RCLCPP_INFO(logger, "【第三组】动态 + 力验证（验证动力学补偿）");
        // ================================================================

        { VectorXd F(6); F << 0, 0, 0,  0, 0, -19.62;
          total_count++;
          if (run_one_case(logger, est, "Case3-1: fz=-19.62N (动态)", q, qd, qdd, F)) pass_count++; }

        { VectorXd F(6); F << 0, 0, 0,  5.0, -8.0, -15.0;
          total_count++;
          if (run_one_case(logger, est, "Case3-2: fx=5,fy=-8,fz=-15N (动态)", q, qd, qdd, F)) pass_count++; }

        // ================================================================
        RCLCPP_INFO(logger, "【第四组】Method1 自洽性验证");
        // ================================================================

        {
            total_count++;
            VectorXd F(6); F << 2.0, 0, 0,  5.0, -3.0, -10.0;
            est.SetSimForce(F);
            const VectorXd tau_auto = est.BuildSimTauMeas(q, qd, qdd);
            est.ClearSimForce();

            RCLCPP_INFO(logger, "── Case4-1: Method1 自洽（build_sim_tau_meas）──");
            RCLCPP_INFO(logger, "  tau_auto = [%s]", vec_to_str(tau_auto).c_str());

            const RusSimForce::ForceResult res = est.Estimate(q, qd, qdd, tau_auto);

            RCLCPP_INFO(logger, "  force_base  = [%s]", vec_to_str(res.force).c_str());
            RCLCPP_INFO(logger, "  torque_base = [%s]", vec_to_str(res.torque).c_str());
            RCLCPP_INFO(logger, "  cond_num    = %.4f", res.cond_num);

            bool ok = true;
            ok &= check_force (logger, "Case4-1 force",  res.force,  F.tail<3>());
            ok &= check_torque(logger, "Case4-1 torque", res.torque, F.head<3>());
            if (ok) pass_count++;
        }

        // ================================================================
        RCLCPP_INFO(logger, "【第五组】法兰坐标变换数学一致性验证");
        // ================================================================

        auto verify_flange_transform = [&](
            const std::string& tag,
            const VectorXd& q_in,
            const VectorXd& qd_in,
            const VectorXd& qdd_in,
            const VectorXd& F_in) -> bool
        {
            RCLCPP_INFO(logger, "── %s ──", tag.c_str());
            RCLCPP_INFO(logger, "  q      : [%s]", vec_to_str(q_in).c_str());
            RCLCPP_INFO(logger, "  F_true : [%s]", vec_to_str(F_in).c_str());

            est.SetSimForce(F_in);
            const VectorXd tau = est.BuildSimTauMeas(q_in, qd_in, qdd_in);
            est.ClearSimForce();

            const RusSimForce::ForceResult       raw = est.Estimate(q_in, qd_in, qdd_in, tau);
            const RusSimForce::EndEffectorWrench res = est.EstimateAtFlange(q_in, qd_in, qdd_in, tau);

            if (!raw.is_valid) {
                RCLCPP_WARN(logger, "  [SKIP] 接近奇异位形 cond=%.2e，跳过", raw.cond_num);
                return true;
            }

            const Vector3d flange_in_wrist3(0.0, 0.0, 0.094);
            const Vector3d d               = res.R_flange * flange_in_wrist3;
            const Vector3d expected_torque = raw.torque + d.cross(raw.force);

            RCLCPP_INFO(logger, "  cond         : %.4f", raw.cond_num);
            RCLCPP_INFO(logger, "  raw.force    : [%s]  (wrist3, base系)",
                        vec_to_str(raw.force).c_str());
            RCLCPP_INFO(logger, "  raw.torque   : [%s]  (wrist3, base系)",
                        vec_to_str(raw.torque).c_str());
            RCLCPP_INFO(logger, "  d_base(偏置) : [%s]  (R_flange*[0,0,0.094])",
                        vec_to_str(d).c_str());
            RCLCPP_INFO(logger, "  d×F(贡献)   : [%s]",
                        vec_to_str(d.cross(raw.force)).c_str());
            RCLCPP_INFO(logger, "  res.torque   : [%s]  (法兰, 代码输出)",
                        vec_to_str(res.torque).c_str());
            RCLCPP_INFO(logger, "  expect torque: [%s]  (公式手算)",
                        vec_to_str(expected_torque).c_str());

            return check_torque(logger, tag + " torque一致性", res.torque, expected_torque, 1e-3);
        };

        // ── 位形 A ─────────────────────────────────────────────────────
        { total_count++;
          VectorXd F(6); F << 5.0, -3.0, 2.0,   0.0, 0.0, 0.0;
          if (verify_flange_transform("Case5-1: 纯力矩_force=0_传递不变", q, qd_zero, qdd_zero, F)) pass_count++; }

        { total_count++;
          VectorXd F(6); F << 2.0, -3.0, 1.5,   8.0, -5.0, -12.0;
          if (verify_flange_transform("Case5-2: 完整6D力旋量_位形A_静态", q, qd_zero, qdd_zero, F)) pass_count++; }

        { total_count++;
          VectorXd F(6); F << 2.0, -3.0, 1.5,   8.0, -5.0, -12.0;
          if (verify_flange_transform("Case5-3: 完整6D力旋量_位形A_动态", q, qd, qdd, F)) pass_count++; }

        // ── 位形 B ─────────────────────────────────────────────────────
        {
            VectorXd q_B(6);
            q_B << M_PI/4.0, -M_PI/4.0, M_PI/2.0, -M_PI/4.0, M_PI/3.0, M_PI/6.0;

            { total_count++;
              VectorXd F(6); F << -1.0, 4.0, -2.5,   6.0, 3.0, -9.0;
              if (verify_flange_transform("Case5-4: 完整6D力旋量_位形B_静态", q_B, qd_zero, qdd_zero, F)) pass_count++; }

            { total_count++;
              VectorXd F(6); F << -4.0, 2.0, -6.0,   0.0, 0.0, 0.0;
              if (verify_flange_transform("Case5-5: 纯力矩_位形B_传递不变", q_B, qd_zero, qdd_zero, F)) pass_count++; }

            { total_count++;
              VectorXd F(6); F << 1.0, -2.0, 3.0,   0.0, 0.0, -19.62;
              if (verify_flange_transform("Case5-6: 6D力旋量_位形B_动态", q_B, qd, qdd, F)) pass_count++; }
        }

        // ── 位形 C ─────────────────────────────────────────────────────
        {
            VectorXd q_C(6);
            q_C << -M_PI/6.0, -M_PI/3.0, 2.0*M_PI/3.0, -M_PI/6.0, M_PI/4.0, -M_PI/4.0;

            { total_count++;
              VectorXd F(6); F << 3.0, -1.0, 0.5,   15.0, -8.0, 6.0;
              if (verify_flange_transform("Case5-7: 大幅值6D力旋量_位形C_静态", q_C, qd_zero, qdd_zero, F)) pass_count++; }

            { total_count++;
              VectorXd F(6); F << 8.0, -6.0, 4.0,   0.0, 0.0, 0.0;
              if (verify_flange_transform("Case5-8: 纯力矩_位形C_传递不变", q_C, qd_zero, qdd_zero, F)) pass_count++; }
        }

        // ================================================================
        // 汇总
        // ================================================================
        RCLCPP_INFO(logger, "========================================");
        if (pass_count == total_count) {
            RCLCPP_INFO(logger,  "[SUCCESS] 全部通过 %d / %d", pass_count, total_count);
        } else {
            RCLCPP_ERROR(logger, "[FAILED]  通过 %d / %d，请检查上方 FAIL 项",
                         pass_count, total_count);
        }
        RCLCPP_INFO(logger, "========================================");
    }

} // namespace TestWrenchEstimate