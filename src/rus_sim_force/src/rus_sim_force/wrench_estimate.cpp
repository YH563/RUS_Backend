#include"rus_sim_force/wrench_estimate.hpp"

namespace RusSimForce{

WrenchEstimate::WrenchEstimate(const std::string& urdf_path) {
    if (!load_urdf(urdf_path)) {
        throw std::runtime_error("[EeWrenchEstimator] URDF 加载失败: " + urdf_path);
    }
}

bool WrenchEstimate::load_urdf(const std::string& urdf_path) {
    urdf::Model model;
    // 检查返回值
    if (!model.initFile(urdf_path)) {
        RCLCPP_ERROR(rclcpp::get_logger("urdf_loader"),"Failed to load URDF: %s", urdf_path.c_str());
        return false;
    }

    RCLCPP_INFO(rclcpp::get_logger("urdf_loader"),"Robot name: %s", model.getName().c_str());  //读取名字

    links_.clear();
    joints_.clear();//清缓存

    std::map<std::string, int> link_index_map; //绑定机械臂部位名称与索引序号

    // ── 解析 link ─────────────────────────────────────────
    for (const auto& kv : model.links_) {
        const auto& link = kv.second;

        LinkParam lp;   //初始化LinkParam对象
        lp.name    = link->name;
        lp.mass    = 0.0;
        lp.com     = Eigen::Vector3d::Zero();
        lp.inertia = Eigen::Matrix3d::Zero();

        if (link->inertial) {
            lp.mass = link->inertial->mass;  //传入质量

            const auto& pos = link->inertial->origin.position;  //传入初始位姿
            lp.com = Eigen::Vector3d(pos.x, pos.y, pos.z);

            const auto& I = link->inertial;  //传入惯性张量
            lp.inertia << I->ixx, I->ixy, I->ixz,
                        I->ixy, I->iyy, I->iyz,
                        I->ixz, I->iyz, I->izz;
        }

        link_index_map[lp.name] = static_cast<int>(links_.size()); //建立名称到索引的映射关系
        links_.push_back(lp);
    }

    // ── 解析 revolute joint ───────────────────────────────
    for (const auto& kv : model.joints_) {
        const auto& joint = kv.second;
        //旋转关节判断
        if (joint->type != urdf::Joint::REVOLUTE) {
            continue;
        }
        //关节初始化
        JointParam jp;
        jp.name       = joint->name;
        jp.parent_idx = -1;
        jp.child_idx  = -1;
        jp.axis       = Eigen::Vector3d(0.0, 0.0, 1.0);
        //建立关节前后索引
        auto it_p = link_index_map.find(joint->parent_link_name);
        auto it_c = link_index_map.find(joint->child_link_name);

        if (it_p == link_index_map.end() || it_c == link_index_map.end()) {
            RCLCPP_WARN(rclcpp::get_logger("urdf_loader"),"Joint %s: parent/child link not found, skipped",jp.name.c_str());
            continue;
        }

        jp.parent_idx = it_p->second;
        jp.child_idx  = it_c->second;

         // 获取关节的固定变换（父link坐标系 → 关节坐标系）
        const auto& pose = joint->parent_to_joint_origin_transform;
        const auto& p    = pose.position;   // 平移向量 (x, y, z)
        const auto& q    = pose.rotation;   // 旋转四元数 (x, y, z, w)

        // 构造Eigen四元数（注意：Eigen构造器参数顺序为 w, x, y, z）
        Eigen::Quaterniond eq(q.w, q.x, q.y, q.z);
        
        // 组装4x4齐次变换矩阵
        jp.T_fixed = Eigen::Matrix4d::Identity();           // 初始化为单位矩阵
        jp.T_fixed.block<3, 3>(0, 0) = eq.toRotationMatrix(); // 左上3x3：旋转矩阵
        jp.T_fixed.block<3, 1>(0, 3) = Eigen::Vector3d(p.x, p.y, p.z); // 右上3x1：平移向量

        // 关节旋转轴（在关节坐标系中），归一化确保单位向量
        jp.axis = Eigen::Vector3d(joint->axis.x, joint->axis.y, joint->axis.z).normalized();

        joints_.push_back(jp);  // 保存关节参数
    }

    // 检查是否成功加载到旋转关节
    if (joints_.empty()) {
        RCLCPP_ERROR(rclcpp::get_logger("urdf_loader"),"No revolute joints found in URDF");
        return false;  // 没有可用关节，加载失败
    }

    // 打印加载结果：link数量、关节数量
    RCLCPP_INFO(rclcpp::get_logger("urdf_loader"),"Loaded %zu links, %zu revolute joints",links_.size(), joints_.size());

    //用 Pinocchio 独立建模
    pinocchio::urdf::buildModel(urdf_path, model_);
    model_.gravity.linear(gravity_);
    RCLCPP_INFO(rclcpp::get_logger("urdf_loader"),"Pinocchio model: %d DOF", model_.nv);

    return true;  // URDF加载成功
}

void WrenchEstimate::SetGravity(const Eigen::Vector3d& gravity) {
    gravity_ = gravity;
    model_.gravity.linear(gravity_); 
}

void WrenchEstimate::SetFlangeConfig(const FlangeConfig& config) {
    flange_config_ = config;
}

void WrenchEstimate::SetSingularityThreshold(double threshold) {
    singularity_threshold_ = threshold;
}

void WrenchEstimate::SetDampingFactor(double lambda) {
    lambda_ = lambda;
}

void WrenchEstimate::SetToolPayload(double mass, const Eigen::Vector3d& com_in)
{
    if (tool_applied_) {
        RCLCPP_WARN(rclcpp::get_logger("WrenchEstimate"),
                    "[WrenchEstimate] SetToolPayload 已调用过，忽略重复调用");
        return;
    }
    // 取末端 link（最后一个关节的子 link）
    const int last_child = joints_.back().child_idx;
    LinkParam& last_link  = links_[last_child];

    const double m0    = last_link.mass;
    const double mt    = mass;
    const double m_new = m0 + mt;

    if (m_new < 1e-12) return;  // 防除零

      // ── links_[] 合并（原有逻辑不变）──────────────────────────
    const Eigen::Vector3d com_new = (m0 * last_link.com + mt * com_in) / m_new;
    auto steiner = [](double m, const Eigen::Vector3d& d) -> Eigen::Matrix3d {
        return m * (d.squaredNorm() * Eigen::Matrix3d::Identity() - d * d.transpose());
    };
    last_link.inertia += steiner(m0, last_link.com - com_new)
                       + steiner(mt, com_in        - com_new);
    last_link.com  = com_new;
    last_link.mass = m_new;

    // ── 同步到 Pinocchio：覆盖式写入，不再 += ────────────────
    // Pinocchio 关节索引：从 1 开始，model_.njoints-1 是最后一个运动关节
    const pinocchio::JointIndex jid =
        static_cast<pinocchio::JointIndex>(model_.njoints - 1);

    // 用 links_[] 里已合并好的最终值构造 Pinocchio Inertia 并直接赋值
    // pinocchio::Inertia(mass, com, I_3x3)
    // 注意：Pinocchio 的 Inertia 构造器第三个参数是关于质心的惯量矩阵（3×3）
    model_.inertias[jid] = pinocchio::Inertia(
        last_link.mass,
        last_link.com,
        last_link.inertia   // 已经是合并后关于新质心的惯量
    );


    tool_applied_ = true;
}

void WrenchEstimate::SetSimForce(const Eigen::VectorXd& wrench_6d)
{
    if (wrench_6d.size() != 6) {
        throw std::invalid_argument("[WrenchEstimate] SetSimForce 输入必须为 6 维");
    }
    sim_config_.enabled   = true;
    sim_config_.wrench_6d = wrench_6d;
}

void WrenchEstimate::ClearSimForce()
{
    sim_config_.enabled   = false;
    sim_config_.wrench_6d = Eigen::VectorXd::Zero(6);
}

std::vector<Eigen::Matrix4d> WrenchEstimate::forward_kinematics(const Eigen::VectorXd& q) const
{
    const int dof = static_cast<int>(joints_.size());
 if (q.size() != dof) {
        throw std::invalid_argument("[WrenchEstimate] ForwardKinematics 输入维度与 DOF 不匹配");
    }
    // ← 新增：防御性检查，确认 Pinocchio 模型的运动关节数与 joints_ 一致
    if (model_.nv != dof) {
        throw std::runtime_error(
            "[WrenchEstimate] Pinocchio model_.nv 与 joints_.size() 不一致，"
            "请检查 URDF 是否含有非 revolute 关节");
    }

    // 转换为原有接口格式 vector<Matrix4d>，下游代码完全不变
    pinocchio::Data local_data(model_);          // ← 改为局部 Data
    pinocchio::forwardKinematics(model_, local_data, q);

    std::vector<Eigen::Matrix4d> T_link(dof + 1);
    T_link[0] = Eigen::Matrix4d::Identity();
    for (int i = 0; i < dof; ++i) {
        const pinocchio::SE3& se3 = local_data.oMi[i + 1];  // ← 改为 local_data
        T_link[i + 1] = Eigen::Matrix4d::Identity();
        T_link[i + 1].block<3,3>(0,0) = se3.rotation();
        T_link[i + 1].block<3,1>(0,3) = se3.translation();
    }
    return T_link;
}

Eigen::MatrixXd WrenchEstimate::jacobian(const Eigen::VectorXd& q) const 
{
    const int dof = model_.nv;

    pinocchio::Data local_data(model_);          // ← 改为局部 Data
    pinocchio::computeJointJacobians(model_, local_data, q);

    Eigen::MatrixXd J_pin = Eigen::MatrixXd::Zero(6, dof);
    pinocchio::getJointJacobian(
        model_, local_data,
        static_cast<pinocchio::JointIndex>(model_.njoints - 1),
        pinocchio::LOCAL_WORLD_ALIGNED,
        J_pin);

    Eigen::MatrixXd J(6, dof);
    J.topRows<3>()    = J_pin.bottomRows<3>();
    J.bottomRows<3>() = J_pin.topRows<3>();
    return J;
}


double WrenchEstimate::compute_condition_number(const Eigen::MatrixXd& J) const
{
    const Eigen::JacobiSVD<Eigen::MatrixXd> svd(J);
    const auto& sv = svd.singularValues();
    if (sv.minCoeff() < 1e-12) {
        return 1e18;
    }
    return sv.maxCoeff() / sv.minCoeff();
}

Eigen::VectorXd WrenchEstimate::build_sim_tau_meas(const Eigen::VectorXd& q,const Eigen::VectorXd& qd,const Eigen::VectorXd& qdd) const
{
    pinocchio::Data local_data(model_);

    const Eigen::VectorXd tau_model =
        pinocchio::rnea(model_, local_data, q, qd, qdd);

    // 复用同一个 local_data 算雅可比
    const int dof = model_.nv;
    pinocchio::computeJointJacobians(model_, local_data, q);
    Eigen::MatrixXd J_pin = Eigen::MatrixXd::Zero(6, dof);
    pinocchio::getJointJacobian(
        model_, local_data,
        static_cast<pinocchio::JointIndex>(model_.njoints - 1),
        pinocchio::LOCAL_WORLD_ALIGNED,
        J_pin);
    Eigen::MatrixXd J(6, dof);
    J.topRows<3>()    = J_pin.bottomRows<3>();
    J.bottomRows<3>() = J_pin.topRows<3>();

    return tau_model + J.transpose() * sim_config_.wrench_6d;
}

EndEffectorWrench WrenchEstimate::transform_to_flange(const Eigen::VectorXd& q,const ForceResult& raw) const
{
// 用局部 Data 做 FK，不污染成员 data_
    pinocchio::Data local_data(model_);
    pinocchio::forwardKinematics(model_, local_data, q);

    const int last = static_cast<int>(joints_.size());
    const pinocchio::SE3& se3_last = local_data.oMi[last];

    const Eigen::Matrix3d R_wrist3 = se3_last.rotation();
    const Eigen::Vector3d p_wrist3 = se3_last.translation();

    const Eigen::Vector3d p_flange =
        p_wrist3 + R_wrist3 * flange_config_.flange_in_wrist3;
    const Eigen::Matrix3d R_flange = R_wrist3;

    const Eigen::Vector3d torque_at_flange =
        raw.torque + (p_flange - p_wrist3).cross(raw.force);

    EndEffectorWrench res;
    res.force            = raw.force;
    res.torque           = torque_at_flange;
    res.force_in_flange  = R_flange.transpose() * raw.force;
    res.torque_in_flange = R_flange.transpose() * torque_at_flange;
    res.p_flange         = p_flange;
    res.R_flange         = R_flange;
    res.cond_num         = raw.cond_num;
    res.is_valid         = raw.is_valid;
    return res;
}

Eigen::VectorXd WrenchEstimate::inverse_dynamics(const Eigen::VectorXd& q,const Eigen::VectorXd& qd,const Eigen::VectorXd& qdd) const
{
        const int dof = static_cast<int>(joints_.size());
    if (q.size() != dof || qd.size() != dof || qdd.size() != dof) {
        throw std::invalid_argument(
            "[WrenchEstimate] inverse_dynamics 输入维度与 DOF 不匹配");
    }

    // RNEA：完整 Newton-Euler，自动处理所有质心偏置和惯量
    pinocchio::Data local_data(model_);
    return pinocchio::rnea(model_, local_data, q, qd, qdd);
}

ForceResult WrenchEstimate::Estimate(const Eigen::VectorXd& q,const Eigen::VectorXd& qd,const Eigen::VectorXd& qdd,const Eigen::VectorXd& tau_meas) const
{
    const int dof = static_cast<int>(joints_.size());
    if (q.size() != dof || qd.size() != dof ||
        qdd.size() != dof || tau_meas.size() != dof) {
        throw std::invalid_argument(
            "[WrenchEstimate] Estimate 输入维度与 DOF 不匹配");
    }
    

    // 用局部 Data，避免成员 data_ 被多次写入互相覆盖
    pinocchio::Data local_data(model_);

    // 1. RNEA（内部调用 FK，写入 local_data）
    const Eigen::VectorXd tau_model =
        pinocchio::rnea(model_, local_data, q, qd, qdd);
    const Eigen::VectorXd tau_ext = tau_meas - tau_model;

    // 2. 雅可比（复用 local_data，顺序安全）
    pinocchio::computeJointJacobians(model_, local_data, q);
    Eigen::MatrixXd J_pin = Eigen::MatrixXd::Zero(6, dof);
    pinocchio::getJointJacobian(
        model_, local_data,
        static_cast<pinocchio::JointIndex>(model_.njoints - 1),
        pinocchio::LOCAL_WORLD_ALIGNED,
        J_pin);
    Eigen::MatrixXd J(6, dof);
    J.topRows<3>()    = J_pin.bottomRows<3>();
    J.bottomRows<3>() = J_pin.topRows<3>();

    // 3. 条件数
    const double cond  = compute_condition_number(J);
    const bool   valid = (cond < singularity_threshold_);
    if (!valid) {
        RCLCPP_WARN(rclcpp::get_logger("WrenchEstimate"),
                    "[WrenchEstimate] 条件数 %.2f 超过阈值，结果不可靠", cond);
    }

    // 4. DLS 求解（原公式不变）
    const Eigen::MatrixXd JtJ = J.transpose() * J;
    const Eigen::MatrixXd A   = JtJ + lambda_ * lambda_ *
                                Eigen::MatrixXd::Identity(dof, dof);
    const Eigen::VectorXd F_vec = J * A.ldlt().solve(tau_ext);

    ForceResult result;
    result.torque   = F_vec.head<3>();
    result.force    = F_vec.tail<3>();
    result.cond_num = cond;
    result.is_valid = valid;
    return result;
}


ForceResult WrenchEstimate::Estimate(const RobotState& state) const
{
    return Estimate(state.q, state.qd, state.qdd, state.tau_meas);
}


EndEffectorWrench WrenchEstimate::EstimateAtFlange(const Eigen::VectorXd& q,const Eigen::VectorXd& qd,const Eigen::VectorXd& qdd,const Eigen::VectorXd& tau_meas) const
{
    return transform_to_flange(q, Estimate(q, qd, qdd, tau_meas));
}


EndEffectorWrench WrenchEstimate::EstimateAtFlange(const RobotState& state) const
{
    return EstimateAtFlange(state.q, state.qd, state.qdd, state.tau_meas);
}


EndEffectorWrench WrenchEstimate::EstimateAtFlange(const Eigen::VectorXd& q,const Eigen::VectorXd& qd,const Eigen::VectorXd& qdd) const
{
    if (!sim_config_.enabled) {
        throw std::runtime_error("[WrenchEstimate] 仿真模式未启用，请先调用 SetSimForce()");
    }

    const Eigen::VectorXd tau_meas = build_sim_tau_meas(q, qd, qdd);
    return EstimateAtFlange(q, qd, qdd, tau_meas);
}

std::string vec_to_str(const Eigen::VectorXd& v) {
    std::ostringstream ss;
    for (int i = 0; i < v.size(); ++i) {
        ss << v(i);
        if (i < v.size() - 1) ss << " ";
    }
    return ss.str();
}

std::string vec3_to_str(const Eigen::Vector3d& v) {
    std::ostringstream ss;
    ss << v(0) << " " << v(1) << " " << v(2);
    return ss.str();
}


};