#include "rus_sim_force/wrench_estimate.hpp"

namespace RusSimForce {

    WrenchEstimate::WrenchEstimate(const std::string& urdf_path) {
        if (!load_urdf(urdf_path)) {
            RCLCPP_FATAL(rclcpp::get_logger("WrenchEstimate"),
                         "[EeWrenchEstimator] URDF 加载失败: %s", urdf_path.c_str());
            return;
        }
    }

    bool WrenchEstimate::load_urdf(const std::string& urdf_path) {
        urdf::Model model;
        if (!model.initFile(urdf_path)) {
            RCLCPP_ERROR(rclcpp::get_logger("urdf_loader"),
                         "Failed to load URDF: %s", urdf_path.c_str());
            return false;
        }

        RCLCPP_INFO(rclcpp::get_logger("urdf_loader"),
                    "Robot name: %s", model.getName().c_str());

        state_.links.clear();
        state_.joints.clear();

        std::map<std::string, int> link_index_map;

        // ── 解析 link ─────────────────────────────────────────
        for (const auto& link_entry : model.links_) {
            const auto& link = link_entry.second;

            LinkParam link_param;
            link_param.name    = link->name;
            link_param.mass    = 0.0;
            link_param.com     = Vector3d::Zero();
            link_param.inertia = Matrix3d::Zero();

            if (link->inertial) {
                link_param.mass = link->inertial->mass;

                const auto& pos = link->inertial->origin.position;
                link_param.com  = Vector3d(pos.x, pos.y, pos.z);

                // 惯性张量以行优先顺序填充，ixy/ixz/iyz 为对称元素
                const auto& inertial = link->inertial;
                link_param.inertia << inertial->ixx, inertial->ixy, inertial->ixz,
                                      inertial->ixy, inertial->iyy, inertial->iyz,
                                      inertial->ixz, inertial->iyz, inertial->izz;
            }

            link_index_map[link_param.name] = static_cast<int>(state_.links.size());
            state_.links.push_back(link_param);
        }

        // ── 解析 revolute joint ───────────────────────────────
        for (const auto& joint_entry : model.joints_) {
            const auto& joint = joint_entry.second;

            if (joint->type != urdf::Joint::REVOLUTE) {
                continue;
            }

            JointParam joint_param;
            joint_param.name       = joint->name;
            joint_param.parent_idx = -1;
            joint_param.child_idx  = -1;
            joint_param.axis       = Vector3d(0.0, 0.0, 1.0);

            auto parent_iter = link_index_map.find(joint->parent_link_name);
            auto child_iter  = link_index_map.find(joint->child_link_name);

            if (parent_iter == link_index_map.end() || child_iter == link_index_map.end()) {
                RCLCPP_WARN(rclcpp::get_logger("urdf_loader"),
                            "Joint %s: parent/child link not found, skipped",
                            joint_param.name.c_str());
                continue;
            }

            joint_param.parent_idx = parent_iter->second;
            joint_param.child_idx  = child_iter->second;

            const auto& pose        = joint->parent_to_joint_origin_transform;
            const auto& translation = pose.position;
            const auto& rotation    = pose.rotation;

            Eigen::Quaterniond eigen_quaternion(rotation.w, rotation.x,
                                                rotation.y, rotation.z);

            joint_param.T_fixed = Transform3d::Identity();
            joint_param.T_fixed.linear()      = eigen_quaternion.toRotationMatrix();
            joint_param.T_fixed.translation() = Vector3d(
                translation.x, translation.y, translation.z);

            joint_param.axis = Vector3d(
                joint->axis.x, joint->axis.y, joint->axis.z).normalized();

            state_.joints.push_back(joint_param);
        }

        if (state_.joints.empty()) {
            RCLCPP_ERROR(rclcpp::get_logger("urdf_loader"),
                         "No revolute joints found in URDF");
            return false;
        }

        RCLCPP_INFO(rclcpp::get_logger("urdf_loader"),
                    "Loaded %zu links, %zu revolute joints",
                    state_.links.size(), state_.joints.size());

        pinocchio::urdf::buildModel(urdf_path, state_.model);
        state_.model.gravity.linear(state_.gravity);
        RCLCPP_INFO(rclcpp::get_logger("urdf_loader"),
                    "Pinocchio model: %d DOF", state_.model.nv);

        return true;
    }

    void WrenchEstimate::SetToolPayload(double mass, const Vector3d& com_in)
    {
        if (tool_applied_) {
            RCLCPP_WARN(rclcpp::get_logger("WrenchEstimate"),
                        "[WrenchEstimate] SetToolPayload 已调用过，忽略重复调用");
            return;
        }

        const int last_child  = state_.joints.back().child_idx;
        LinkParam& last_link  = state_.links[last_child];

        const double original_mass = last_link.mass;
        const double tool_mass     = mass;
        const double combined_mass = original_mass + tool_mass;

        if (combined_mass < 1e-12) return; // 合并质量为零则跳过，避免除零

        const Vector3d combined_com =
            (original_mass * last_link.com + tool_mass * com_in) / combined_mass;

        // 平行轴定理：将惯性张量从各自质心平移到合并质心
        auto steiner = [](double m, const Vector3d& d) -> Matrix3d {
            return m * (d.squaredNorm() * Matrix3d::Identity() - d * d.transpose());
        };

        last_link.inertia += steiner(original_mass, last_link.com - combined_com)
                           + steiner(tool_mass,     com_in        - combined_com);
        last_link.com  = combined_com;
        last_link.mass = combined_mass;

        // 同步更新 Pinocchio 模型的末端惯性，使 RNEA 结果包含工具负载
        const pinocchio::JointIndex joint_index =
            static_cast<pinocchio::JointIndex>(state_.model.njoints - 1);

        state_.model.inertias[joint_index] = pinocchio::Inertia(
            last_link.mass,
            last_link.com,
            last_link.inertia
        );

        tool_applied_ = true;
    }

    void WrenchEstimate::SetSimForce(const VectorXd& wrench_6d)
    {
        if (wrench_6d.size() != 6) {
            RCLCPP_ERROR(rclcpp::get_logger("WrenchEstimate"),
                         "[WrenchEstimate] SetSimForce 输入必须为 6 维，当前维度: %ld",
                         wrench_6d.size());
            return;
        }
        sim_wrench_ = wrench_6d;
    }

    void WrenchEstimate::ClearSimForce()
    {
        sim_wrench_ = VectorXd::Zero(6);
    }

    std::vector<Transform3d> WrenchEstimate::forward_kinematics(
        const VectorXd& q) const
    {
        const int joint_count = static_cast<int>(state_.joints.size());
        if (q.size() != joint_count) {
            RCLCPP_ERROR(rclcpp::get_logger("WrenchEstimate"),
                         "[WrenchEstimate] ForwardKinematics 输入维度与 DOF 不匹配，"
                         "输入维度: %ld, DOF: %d", q.size(), joint_count);
            return {};
        }
        if (state_.model.nv != joint_count) {
            RCLCPP_ERROR(rclcpp::get_logger("WrenchEstimate"),
                         "[WrenchEstimate] Pinocchio model_.nv(%d) 与 joints_.size()(%d) 不一致，"
                         "请检查 URDF 是否含有非 revolute 关节",
                         state_.model.nv, joint_count);
            return {};
        }

        pinocchio::Data local_data(state_.model);
        pinocchio::forwardKinematics(state_.model, local_data, q);

        // oMi[0] 为世界系，oMi[i+1] 对应第 i 个关节坐标系在 base 下的变换
        std::vector<Transform3d> link_transforms(joint_count + 1);
        link_transforms[0] = Transform3d::Identity();
        for (int i = 0; i < joint_count; ++i) {
            const pinocchio::SE3& joint_transform = local_data.oMi[i + 1];
            link_transforms[i + 1] = Transform3d::Identity();
            link_transforms[i + 1].linear()      = joint_transform.rotation();
            link_transforms[i + 1].translation() = joint_transform.translation();
        }
        return link_transforms;
    }

    MatrixXd WrenchEstimate::jacobian(const VectorXd& q) const
    {
        const int joint_count = state_.model.nv;

        pinocchio::Data local_data(state_.model);
        pinocchio::computeJointJacobians(state_.model, local_data, q);

        MatrixXd jacobian_pinocchio = MatrixXd::Zero(6, joint_count);
        pinocchio::getJointJacobian(
            state_.model, local_data,
            static_cast<pinocchio::JointIndex>(state_.model.njoints - 1),
            pinocchio::LOCAL_WORLD_ALIGNED,
            jacobian_pinocchio);

        // Pinocchio 输出行序为 [angular(0:3); linear(3:6)]，
        // 本项目约定 [torque(0:3); force(3:6)]，两者物理含义相同，交换行对齐即可
        MatrixXd jacobian(6, joint_count);
        jacobian.topRows<3>()    = jacobian_pinocchio.bottomRows<3>();
        jacobian.bottomRows<3>() = jacobian_pinocchio.topRows<3>();
        return jacobian;
    }

    double WrenchEstimate::compute_condition_number(const MatrixXd& jacobian) const
    {
        const Eigen::JacobiSVD<MatrixXd> svd(jacobian);
        const auto& singular_values = svd.singularValues();
        if (singular_values.minCoeff() < 1e-12) {
            return 1e18; // 最小奇异值近似为零，视为完全奇异
        }
        return singular_values.maxCoeff() / singular_values.minCoeff();
    }

    VectorXd WrenchEstimate::BuildSimTauMeas(
        const VectorXd& q,
        const VectorXd& qd,
        const VectorXd& qdd) const
    {
        pinocchio::Data local_data(state_.model);

        const VectorXd tau_model =
            pinocchio::rnea(state_.model, local_data, q, qd, qdd);

        const int joint_count = state_.model.nv;
        pinocchio::computeJointJacobians(state_.model, local_data, q);

        MatrixXd jacobian_pinocchio = MatrixXd::Zero(6, joint_count);
        pinocchio::getJointJacobian(
            state_.model, local_data,
            static_cast<pinocchio::JointIndex>(state_.model.njoints - 1),
            pinocchio::LOCAL_WORLD_ALIGNED,
            jacobian_pinocchio);

        MatrixXd jacobian(6, joint_count);
        jacobian.topRows<3>()    = jacobian_pinocchio.bottomRows<3>();
        jacobian.bottomRows<3>() = jacobian_pinocchio.topRows<3>();

        // tau_meas = tau_dynamics + J^T * w_ext，模拟传感器读到的带外力的关节力矩
        return tau_model + jacobian.transpose() * sim_wrench_;
    }

    EndEffectorWrench WrenchEstimate::transform_to_flange(
        const VectorXd& q, const ForceResult& raw) const
    {
        pinocchio::Data local_data(state_.model);
        pinocchio::forwardKinematics(state_.model, local_data, q);

        const int last_joint_index                 = static_cast<int>(state_.joints.size());
        const pinocchio::SE3& last_joint_transform = local_data.oMi[last_joint_index];

        const Matrix3d wrist3_rotation = last_joint_transform.rotation();
        const Vector3d wrist3_position = last_joint_transform.translation();

        const Vector3d flange_position = wrist3_position + wrist3_rotation * state_.flange_in_wrist3;
        const Matrix3d flange_rotation = wrist3_rotation; // 法兰与 wrist3 姿态相同，仅平移偏置

        // 力矩转移公式：n_flange = n_wrist3 + d × f，d 为 wrist3 到法兰的向量
        const Vector3d torque_at_flange =
            raw.torque + (flange_position - wrist3_position).cross(raw.force);

        EndEffectorWrench result;
        result.force            = raw.force;
        result.torque           = torque_at_flange;
        result.force_in_flange  = flange_rotation.transpose() * raw.force;
        result.torque_in_flange = flange_rotation.transpose() * torque_at_flange;
        result.p_flange         = flange_position;
        result.R_flange         = flange_rotation;
        result.cond_num         = raw.cond_num;
        result.is_valid         = raw.is_valid;
        return result;
    }

    VectorXd WrenchEstimate::inverse_dynamics(
        const VectorXd& q,
        const VectorXd& qd,
        const VectorXd& qdd) const
    {
        const int joint_count = static_cast<int>(state_.joints.size());
        if (q.size() != joint_count || qd.size() != joint_count || qdd.size() != joint_count) {
            RCLCPP_ERROR(rclcpp::get_logger("WrenchEstimate"),
                         "[WrenchEstimate] inverse_dynamics 输入维度与 DOF 不匹配，"
                         "DOF: %d, q: %ld, qd: %ld, qdd: %ld",
                         joint_count, q.size(), qd.size(), qdd.size());
            return VectorXd::Zero(joint_count);
        }

        pinocchio::Data local_data(state_.model);
        return pinocchio::rnea(state_.model, local_data, q, qd, qdd);
    }

    ForceResult WrenchEstimate::Estimate(
        const VectorXd& q,
        const VectorXd& qd,
        const VectorXd& qdd,
        const VectorXd& tau_meas) const
    {
        const int joint_count = static_cast<int>(state_.joints.size());
        if (q.size() != joint_count || qd.size() != joint_count ||
            qdd.size() != joint_count || tau_meas.size() != joint_count) {
            RCLCPP_ERROR(rclcpp::get_logger("WrenchEstimate"),
                         "[WrenchEstimate] Estimate 输入维度与 DOF 不匹配，"
                         "DOF: %d, q: %ld, qd: %ld, qdd: %ld, tau: %ld",
                         joint_count, q.size(), qd.size(), qdd.size(), tau_meas.size());
            ForceResult empty{};
            empty.is_valid = false;
            return empty;
        }

        pinocchio::Data local_data(state_.model);

        // 1. RNEA 计算动力学力矩，tau_ext 为残差（外力等效关节力矩）
        const VectorXd tau_model =
            pinocchio::rnea(state_.model, local_data, q, qd, qdd);
        const VectorXd tau_ext = tau_meas - tau_model;

        // 2. 计算末端雅可比
        pinocchio::computeJointJacobians(state_.model, local_data, q);
        MatrixXd jacobian_pinocchio = MatrixXd::Zero(6, joint_count);
        pinocchio::getJointJacobian(
            state_.model, local_data,
            static_cast<pinocchio::JointIndex>(state_.model.njoints - 1),
            pinocchio::LOCAL_WORLD_ALIGNED,
            jacobian_pinocchio);

        MatrixXd jacobian(6, joint_count);
        jacobian.topRows<3>()    = jacobian_pinocchio.bottomRows<3>();
        jacobian.bottomRows<3>() = jacobian_pinocchio.topRows<3>();

        // 3. 条件数判断奇异性
        const double condition_number = compute_condition_number(jacobian);
        const bool   is_valid         = (condition_number < state_.singularity_threshold);
        if (!is_valid) {
            RCLCPP_WARN(rclcpp::get_logger("WrenchEstimate"),
                        "[WrenchEstimate] 条件数 %.2f 超过阈值，结果不可靠",
                        condition_number);
        }

        // 4. DLS（阻尼最小二乘）伪逆求解 w = J(J^T J + λ²I)⁻¹ τ_ext
        //    用 LDLT 代替直接求逆，数值更稳定
        const MatrixXd jacobian_square    = jacobian.transpose() * jacobian;
        const MatrixXd regularized_matrix = jacobian_square + state_.lambda * state_.lambda *
                                            MatrixXd::Identity(joint_count, joint_count);
        const VectorXd force_vector =
            jacobian * regularized_matrix.ldlt().solve(tau_ext);

        ForceResult result;
        result.torque   = force_vector.head<3>();
        result.force    = force_vector.tail<3>();
        result.cond_num = condition_number;
        result.is_valid = is_valid;
        return result;
    }

    EndEffectorWrench WrenchEstimate::EstimateAtFlange(
        const VectorXd& q,
        const VectorXd& qd,
        const VectorXd& qdd,
        const VectorXd& tau_meas) const
    {
        return transform_to_flange(q, Estimate(q, qd, qdd, tau_meas));
    }

    EndEffectorWrench WrenchEstimate::EstimateAtFlange(
        const VectorXd& q,
        const VectorXd& qd,
        const VectorXd& qdd) const
    {
        const VectorXd tau_meas = BuildSimTauMeas(q, qd, qdd);
        return EstimateAtFlange(q, qd, qdd, tau_meas);
    }

    void WrenchEstimate::SetConfig(double lambda, double singularity_threshold)
    {
        state_.lambda                = lambda;
        state_.singularity_threshold = singularity_threshold;
    }

    std::string vec_to_str(const VectorXd& v) {
        std::ostringstream ss;
        ss << v.transpose();
        return ss.str();
    }

} // namespace RusSimForce