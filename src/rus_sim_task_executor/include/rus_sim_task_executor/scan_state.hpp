#pragma once

#include <set>
#include <string>
#include <functional>

#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>

#include "yasmin/state.hpp"
#include "yasmin_ros/monitor_state.hpp"

#include "fairino_msgs/msg/robot_nonrt_state.hpp"

namespace RusScanState {
    // 状态字符串常量
    constexpr const char* kInitState = "INIT";                  // 初始化
    constexpr const char* kIdleState = "IDLE";                  // 空闲，已使能，等待指令
    constexpr const char* kRunningState = "RUNNING";            // 运行中
    constexpr const char* kPausedState = "PAUSED";              // 暂停
    constexpr const char* kErrorState = "ERROR";                // 错误
    constexpr const char* kCompletedState = "COMPLETED";        // 完成
    constexpr const char* kShutdownState = "SHUTDOWN";          // 关闭

    // ====================== 动作结果字符串常量 ======================
    // Init 结果
    constexpr const char* kOutcomeInitSuccess = "INITSUCCESS";  // 初始化成功
    constexpr const char* kOutcomeInitFail = "INITFAIL";        // 初始化失败

    // Idle 结果
    constexpr const char* kOutcomeGotoRunning = "GOTO_RUNNING"; // 进入运行状态
    constexpr const char* kOutcomeShutdown = "SHUTDOWN";        // 关闭
    constexpr const char* kOutcomeStay = "STAY";                // 保持

    // Running 结果
    constexpr const char* kOutcomeSuccess = "SCANSUCCESS";      // 扫查完成
    constexpr const char* kOutcomeError = "ERROR";              // 执行出错
    constexpr const char* kOutcomePause = "PAUSE";              // 暂停（外部或内部触发）
    constexpr const char* kOutcomeTimeout = "TIMEOUT";          // 超时

    // Paused 结果
    constexpr const char* kOutcomeResume = "RESUME";            // 恢复运行
    constexpr const char* kOutcomeErrorFromPaused = "ERROR";    // 暂停状态下出错
    constexpr const char* kOutcomeAbort = "ABORT";              // 中止，回到 IDLE

    // Error 结果
    constexpr const char* kOutcomeRetry = "RETRY";              // 重试当前操作
    constexpr const char* kOutcomeRecover = "RECOVER";          // 恢复，回到 IDLE 重新开始
    constexpr const char* kOutcomeFail = "FAIL";                // 确认失败，进入 SHUTDOWN

    // Completed 结果
    constexpr const char* kOutcomeAutoReturn = "AUTO_RETURN";   // 自动回到 IDLE

    // Shutdown 结果
    constexpr const char* kOutcomeDone = "DONE";

    // ====================== Blackboard 键名常量 ======================
    constexpr const char* kBBLastCommand = "last_command";
    constexpr const char* kBBScanProgress = "scan_progress";
    constexpr const char* kBBErrorMessage = "error_message";
    constexpr const char* kBBRetryCount = "retry_count";

    // ============================================================
    //  InitState: 初始化
    //  功能: 硬件自检、加载参数、初始化 moveit / 超声设备
    //  输出: INITSUCCESS | INITFAIL
    // ============================================================
    class InitState : public yasmin::State
    {
    public:
        InitState() : yasmin::State({kOutcomeInitSuccess, kOutcomeInitFail}) {}

        std::string execute(yasmin::Blackboard::SharedPtr blackboard) override
        {
            RCLCPP_INFO(rclcpp::get_logger("InitState"), "开始初始化...");

            // 1. 加载参数配置
            blackboard->set<std::string>("config_path", "default_config.yaml");
            blackboard->set<int>(kBBRetryCount, 0);

            // 2. 自检逻辑（模拟）
            bool hardware_ok = checkHardware();
            if (!hardware_ok) {
                RCLCPP_ERROR(rclcpp::get_logger("InitState"), "硬件自检失败");
                blackboard->set<std::string>(kBBErrorMessage, "硬件自检失败");
                return kOutcomeInitFail;
            }

            RCLCPP_INFO(rclcpp::get_logger("InitState"), "初始化完成");
            return kOutcomeInitSuccess;
        }

    private:
        bool checkHardware() {
            // TODO: 执行实际的硬件检查
            
            RCLCPP_INFO(rclcpp::get_logger("InitState"), "硬件自检通过");
            return true;
        }
    };

    // ============================================================
    //  IdleState: 空闲待命 —— ✅ 已完成
    //  监听 topic，接收指令: "start", "shutdown"
    //  输出: GOTO_RUNNING | SHUTDOWN | STAY
    // ============================================================
    class IdleState : public yasmin_ros::MonitorState<std_msgs::msg::String>
    {
    public:
        explicit IdleState(const std::string& topic_name)
            : yasmin_ros::MonitorState<std_msgs::msg::String>(
                topic_name,
                {kOutcomeGotoRunning, kOutcomeShutdown, kOutcomeStay},
                std::bind(&IdleState::callback, this, std::placeholders::_1, std::placeholders::_2),
                10,  // 超时时间 (秒)
                10,  // 队列大小
                10   // 频率
            ) {}

    private:
        std::string callback(yasmin::Blackboard::SharedPtr blackboard,
                             const std_msgs::msg::String::SharedPtr msg)
        {
            RCLCPP_INFO(rclcpp::get_logger("IdleState"), "Received command: %s", msg->data.c_str());
            blackboard->set<std::string>(kBBLastCommand, msg->data);

            if (msg->data == "start") {
                return kOutcomeGotoRunning;
            } else if (msg->data == "shutdown") {
                return kOutcomeShutdown;
            } else {
                return kOutcomeStay;
            }
        }
    };

    // ============================================================
    //  RunningState: 执行超声扫查
    //  功能: 接收扫查参数 → 移动到初始位姿 → 执行笛卡尔轨迹
    //  输出: SUCCESS | ERROR | PAUSE | TIMEOUT
    // ============================================================
    class RunningState : public yasmin::State
    {
    public:
        RunningState() : yasmin::State({kOutcomeSuccess, kOutcomeError,
                                        kOutcomePause, kOutcomeTimeout}) {}

        std::string execute(yasmin::Blackboard::SharedPtr blackboard) override
        {
            RCLCPP_INFO(rclcpp::get_logger("RunningState"), "开始执行扫查任务");

            // 从 Blackboard 获取扫查参数
            // auto trajectory = blackboard->get<std::vector<Pose>>("scan_trajectory");

            // 1. 移动到初始位姿
            if (!moveToStartPose(blackboard)) {
                blackboard->set<std::string>(kBBErrorMessage, "无法移动到初始位姿");
                return kOutcomeError;
            }

            // 2. 执行扫查轨迹
            bool scan_result = executeScanTrajectory(blackboard);
            if (scan_result) {
                RCLCPP_INFO(rclcpp::get_logger("RunningState"), "扫查完成");
                return kOutcomeSuccess;
            } else {
                // TODO: 检查是否暂停请求
                // if (pause_requested) return kOutcomePause;
                blackboard->set<std::string>(kBBErrorMessage, "扫查失败");
                return kOutcomeError;
            }
        }

    private:
        bool moveToStartPose(yasmin::Blackboard::SharedPtr blackboard)
        {
            // TODO: 通过 MoveitManager 移动到轨迹起始点
            RCLCPP_INFO(rclcpp::get_logger("RunningState"), "移动到初始位姿...");
            return true;  // 占位
        }

        bool executeScanTrajectory(yasmin::Blackboard::SharedPtr blackboard)
        {
            // TODO: 通过 MoveitManager::ExecuteCartesianPath 执行扫查路径
            //       同时检查暂停标志、超时、错误等
            RCLCPP_INFO(rclcpp::get_logger("RunningState"), "执行扫查轨迹...");
            return true;  // 占位
        }
    };

    // ============================================================
    //  PausedState: 暂停状态
    //  功能: 监听恢复/中止命令
    //  输出: RESUME | ERROR | ABORT
    // ============================================================
    class PausedState : public yasmin_ros::MonitorState<std_msgs::msg::String>
    {
    public:
        explicit PausedState(const std::string& topic_name)
            : yasmin_ros::MonitorState<std_msgs::msg::String>(
                topic_name,
                {kOutcomeResume, kOutcomeErrorFromPaused, kOutcomeAbort},
                std::bind(&PausedState::callback, this, std::placeholders::_1, std::placeholders::_2),
                10, 10, 10) {}

    private:
        std::string callback(yasmin::Blackboard::SharedPtr blackboard,
                             const std_msgs::msg::String::SharedPtr msg)
        {
            RCLCPP_INFO(rclcpp::get_logger("PausedState"), "暂停中，收到指令: %s", msg->data.c_str());
            if (msg->data == "resume") {
                return kOutcomeResume;
            } else if (msg->data == "abort") {
                return kOutcomeAbort;
            }
            return kOutcomeResume; // 默认恢复
        }
    };

    // ============================================================
    //  ErrorState: 错误处理
    //  功能: 显示错误信息，尝试恢复或终止
    //  输出: RETRY | RECOVER | FAIL
    // ============================================================
    class ErrorState : public yasmin_ros::MonitorState<std_msgs::msg::String>
    {
    public:
        explicit ErrorState(const std::string& topic_name)
            : yasmin_ros::MonitorState<std_msgs::msg::String>(
                topic_name,
                {kOutcomeRetry, kOutcomeRecover, kOutcomeFail},
                std::bind(&ErrorState::callback, this, std::placeholders::_1, std::placeholders::_2),
                10, 10, 10) {}

    private:
        std::string callback(yasmin::Blackboard::SharedPtr blackboard,
                             const std_msgs::msg::String::SharedPtr msg)
        {
            auto err_msg = blackboard->get<std::string>(kBBErrorMessage);
            int retry_count = blackboard->get<int>(kBBRetryCount);
            RCLCPP_ERROR(rclcpp::get_logger("ErrorState"),
                         "错误: %s (重试次数: %d)", err_msg.c_str(), retry_count);

            if (msg->data == "retry" || retry_count < 3) {
                blackboard->set<int>(kBBRetryCount, retry_count + 1);
                return kOutcomeRetry;
            } else if (msg->data == "recover") {
                return kOutcomeRecover;
            } else {
                return kOutcomeFail;
            }
        }
    };

    // ============================================================
    //  CompletedState: 完成展示
    //  功能: 展示扫查结果，自动回到 IDLE
    //  输出: AUTO_RETURN
    // ============================================================
    class CompletedState : public yasmin::State
    {
    public:
        CompletedState() : yasmin::State({kOutcomeAutoReturn}) {}

        std::string execute(yasmin::Blackboard::SharedPtr blackboard) override
        {
            RCLCPP_INFO(rclcpp::get_logger("CompletedState"), "扫查完成任务");
            // TODO: 展示扫查结果、生成报告等
            // 短暂等待后自动回到 IDLE
            std::this_thread::sleep_for(std::chrono::seconds(2));
            return kOutcomeAutoReturn;
        }
    };

    // ============================================================
    //  ShutdownState: 安全关机
    //  功能: 释放资源、关闭硬件、安全停止
    // ============================================================
    class ShutdownState : public yasmin::State
    {
    public:
        ShutdownState() : yasmin::State({kOutcomeDone}) {}

        std::string execute(yasmin::Blackboard::SharedPtr blackboard) override
        {
            RCLCPP_INFO(rclcpp::get_logger("ShutdownState"), "正在安全关闭...");

            // 1. 释放机械臂控制
            // 2. 关闭超声设备
            // 3. 保存日志/状态
            // 4. 清理资源

            rclcpp::shutdown();
            return kOutcomeDone;
        }
    };
}