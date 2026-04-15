#include "rus_sim_force/wrench_pub_node.hpp"

namespace RusSimForceNode {

    using RusSimForce::VectorXd;

    WrenchPubNode::WrenchPubNode()
        : Node("wrench_pub_node")
    {
        // ── 参数声明 ────────────────────────────────────────────────────────────
        this->declare_parameter<std::string>("urdf_path",             "");
        this->declare_parameter<std::string>("joint_state_topic",     "/joint_states");
        this->declare_parameter<std::string>("wrench_topic",          "/flange_wrench");
        this->declare_parameter<std::string>("wrench_frame_id",       "flange");
        this->declare_parameter<double>     ("publish_rate_hz",       100.0);
        this->declare_parameter<double>     ("qdd_alpha",             0.2);
        this->declare_parameter<bool>       ("publish_in_flange",     true);
        this->declare_parameter<double>     ("lambda",                0.001);
        this->declare_parameter<double>     ("singularity_threshold", 200.0);

        // ── 参数读取 ────────────────────────────────────────────────────────────
        const std::string urdf_path         = this->get_parameter("urdf_path").as_string();
        joint_state_topic_                  = this->get_parameter("joint_state_topic").as_string();
        wrench_topic_                       = this->get_parameter("wrench_topic").as_string();
        wrench_frame_id_                    = this->get_parameter("wrench_frame_id").as_string();
        publish_rate_hz_                    = this->get_parameter("publish_rate_hz").as_double();
        qdd_alpha_                          = this->get_parameter("qdd_alpha").as_double();
        publish_in_flange_                  = this->get_parameter("publish_in_flange").as_bool();
        const double lambda_                = this->get_parameter("lambda").as_double();
        const double singularity_threshold_ = this->get_parameter("singularity_threshold").as_double();

        if (urdf_path.empty()) {
            RCLCPP_FATAL(this->get_logger(),
                        "[WrenchPubNode] 参数 urdf_path 不能为空，节点初始化终止");
            return;
        }

        // ── 构造估计器并配置 ────────────────────────────────────────────────────
        estimator_ = std::make_unique<RusSimForce::WrenchEstimate>(urdf_path);
        estimator_->SetConfig(lambda_, singularity_threshold_);

        // ── 订阅 JointState ────────────────────────────────────────────────────
        joint_state_sub_ = this->create_subscription<sensor_msgs::msg::JointState>(
            joint_state_topic_, 10,
            std::bind(&WrenchPubNode::joint_state_callback, this, std::placeholders::_1)
        );

        // ── 发布 WrenchStamped ─────────────────────────────────────────────────
        wrench_pub_ = this->create_publisher<geometry_msgs::msg::WrenchStamped>(
            wrench_topic_, 10
        );

        // ── 定时发布（由 timer 驱动，与订阅解耦）─────────────────────────────
        const auto period_ms = std::chrono::milliseconds(
            static_cast<int>(1000.0 / publish_rate_hz_));
        timer_ = this->create_wall_timer(
            period_ms,
            std::bind(&WrenchPubNode::timer_callback, this)
        );

        // ── 启动信息 ────────────────────────────────────────────────────────────
        RCLCPP_INFO(this->get_logger(), "WrenchPubNode 已启动");
        RCLCPP_INFO(this->get_logger(), "  urdf_path        : %s", urdf_path.c_str());
        RCLCPP_INFO(this->get_logger(), "  joint_state_topic: %s", joint_state_topic_.c_str());
        RCLCPP_INFO(this->get_logger(), "  wrench_topic     : %s", wrench_topic_.c_str());
        RCLCPP_INFO(this->get_logger(), "  wrench_frame_id  : %s", wrench_frame_id_.c_str());
        RCLCPP_INFO(this->get_logger(), "  publish_rate_hz  : %.1f", publish_rate_hz_);
        RCLCPP_INFO(this->get_logger(), "  publish_in_flange: %s",
                    publish_in_flange_ ? "true（法兰系）" : "false（base系）");
        RCLCPP_INFO(this->get_logger(), "  qdd_alpha        : %.2f（加速度滤波系数）", qdd_alpha_);
    }

    void WrenchPubNode::joint_state_callback(
        const sensor_msgs::msg::JointState::SharedPtr msg)
    {
        const size_t n = msg->position.size();

        // 三路维度必须一致，否则本帧数据不完整，直接丢弃
        if (n == 0 || msg->velocity.size() != n || msg->effort.size() != n) {
            RCLCPP_WARN_THROTTLE(
                this->get_logger(), *this->get_clock(), 2000,
                "[WrenchPubNode] JointState 维度不完整，跳过本帧"
                "（position=%zu, velocity=%zu, effort=%zu）",
                msg->position.size(), msg->velocity.size(), msg->effort.size());
            return;
        }

        // 首帧初始化，后续帧不再重新分配
        if (!has_state_) {
            q_        = VectorXd::Zero(n);
            qd_       = VectorXd::Zero(n);
            qdd_      = VectorXd::Zero(n);
            tau_meas_ = VectorXd::Zero(n);
            prev_qd_  = VectorXd::Zero(n);
            joint_names_ = msg->name;
        }

        for (size_t i = 0; i < n; ++i) {
            q_(i)        = msg->position[i];
            qd_(i)       = msg->velocity[i];
            tau_meas_(i) = msg->effort[i];
        }

        // 消息时间戳为零时兜底用节点时钟，避免 dt 计算出错
        const rclcpp::Time stamp =
            (msg->header.stamp.sec == 0 && msg->header.stamp.nanosec == 0)
            ? this->now()
            : rclcpp::Time(msg->header.stamp);

        // qdd 一阶低通：qdd = α * (Δqd/Δt) + (1-α) * qdd_prev
        // dt 限制在 [1μs, 500ms]，过小说明时钟异常，过大说明消息中断，两种情况均跳过微分
        if (has_prev_qd_) {
            const double dt = (stamp - last_stamp_).seconds();
            if (dt > 1e-6 && dt < 0.5) {
                const VectorXd qdd_raw = (qd_ - prev_qd_) / dt;
                qdd_ = qdd_alpha_ * qdd_raw + (1.0 - qdd_alpha_) * qdd_;
            }
        }

        prev_qd_     = qd_;
        last_stamp_  = stamp;
        has_prev_qd_ = true;
        has_state_   = true;
    }

    void WrenchPubNode::publish_wrench(const RusSimForce::EndEffectorWrench& wrench)
    {
        geometry_msgs::msg::WrenchStamped msg;
        msg.header.stamp    = this->now();
        msg.header.frame_id = wrench_frame_id_;

        if (publish_in_flange_) {
            msg.wrench.force.x  = wrench.force_in_flange.x();
            msg.wrench.force.y  = wrench.force_in_flange.y();
            msg.wrench.force.z  = wrench.force_in_flange.z();
            msg.wrench.torque.x = wrench.torque_in_flange.x();
            msg.wrench.torque.y = wrench.torque_in_flange.y();
            msg.wrench.torque.z = wrench.torque_in_flange.z();
        } else {
            msg.wrench.force.x  = wrench.force.x();
            msg.wrench.force.y  = wrench.force.y();
            msg.wrench.force.z  = wrench.force.z();
            msg.wrench.torque.x = wrench.torque.x();
            msg.wrench.torque.y = wrench.torque.y();
            msg.wrench.torque.z = wrench.torque.z();
        }

        wrench_pub_->publish(msg);
    }

    void WrenchPubNode::timer_callback()
    {
        if (!has_state_) {
            RCLCPP_WARN_THROTTLE(this->get_logger(), *this->get_clock(), 2000,
                "[WrenchPubNode] 尚未收到 JointState，暂不发布 wrench");
            return;
        }

        try {
            const auto wrench = estimator_->EstimateAtFlange(q_, qd_, qdd_, tau_meas_);

            if (!wrench.is_valid) {
                RCLCPP_WARN_THROTTLE(
                    this->get_logger(), *this->get_clock(), 1000,
                    "[WrenchPubNode] 当前位形接近奇异，条件数=%.1f，wrench 结果可能不可靠",
                    wrench.cond_num);
            }

            publish_wrench(wrench);

            RCLCPP_DEBUG(this->get_logger(),
                "wrench published | frame=%s | F=[%.3f %.3f %.3f] N | T=[%.3f %.3f %.3f] Nm"
                " | cond=%.1f | valid=%s",
                wrench_frame_id_.c_str(),
                publish_in_flange_ ? wrench.force_in_flange.x()  : wrench.force.x(),
                publish_in_flange_ ? wrench.force_in_flange.y()  : wrench.force.y(),
                publish_in_flange_ ? wrench.force_in_flange.z()  : wrench.force.z(),
                publish_in_flange_ ? wrench.torque_in_flange.x() : wrench.torque.x(),
                publish_in_flange_ ? wrench.torque_in_flange.y() : wrench.torque.y(),
                publish_in_flange_ ? wrench.torque_in_flange.z() : wrench.torque.z(),
                wrench.cond_num,
                wrench.is_valid ? "OK" : "SINGULAR");
        }
        catch (const std::exception& e) {
            RCLCPP_WARN_THROTTLE(
                this->get_logger(), *this->get_clock(), 2000,
                "[WrenchPubNode] EstimateAtFlange 异常: %s", e.what());
        }
    }

} // namespace RusSimForceNode