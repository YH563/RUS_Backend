#pragma once

#include <set>
#include <string>
#include <functional>

#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>

#include "yasmin/state.hpp"
#include "yasmin_ros/monitor_state.hpp"

namespace RusScanState {
    // 状态字符串常量
    constexpr const char* kInitState = "INIT";  // 初始化
    constexpr const char* kIdleState = "IDLE";  // 空闲，已使能，等待指令
    constexpr const char* kRunningState = "RUNNING";  // 运行中
    constexpr const char* kPausedState = "PAUSED";  // 暂停
    constexpr const char* kErrorState = "ERROR";  // 错误
    constexpr const char* kShutdownState = "SHUTDOWN";  // 关闭

    // 动作结果字符串常量
    constexpr const char* kOutcomeInitSuccess = "INITSUCCESS";  // 初始化成功
    constexpr const char* kOutcomeInitFail = "INITFAIL";  // 初始化失败

    constexpr const char* kOutcomeGotoRunning = "GOTO_RUNNING";  // 从空闲状态进入运行状态
    constexpr const char* kOutcomeShutdown = "SHUTDOWN";
    constexpr const char* kOutcomeStay = "STAY";
    constexpr const char* kOutcomeSuccess = "SUCCESS";
    constexpr const char* kOutcomeError = "ERROR";
    constexpr const char* kOutcomeTimeout = "TIMEOUT";

    // 初始化状态
    class InitState : public yasmin::State
    {
    public:

    private:
    };

    // 空闲状态
    class IdleState : public yasmin_ros::MonitorState<std_msgs::msg::String>
    {
    public:
        explicit IdleState(const std::string& topic_name) : yasmin_ros::MonitorState<std_msgs::msg::String>(
            topic_name, 
            {kOutcomeGotoRunning, kOutcomeShutdown, kOutcomeStay},
            std::bind(&IdleState::callback, this, std::placeholders::_1, std::placeholders::_2), 
            10, 
            10, 
            10
        ){}
    private:
        // 接收到消息时的回调函数
        std::string callback(yasmin::Blackboard::SharedPtr blackboard,
                         const std_msgs::msg::String::SharedPtr msg)
        {
            RCLCPP_INFO(rclcpp::get_logger("IdleState"), "Received command: %s", msg->data.c_str());
            blackboard->set<std::string>("last_command", msg->data);

            if (msg->data == "start") {
                RCLCPP_INFO(rclcpp::get_logger("IdleState"), kOutcomeGotoRunning);
                return kOutcomeGotoRunning;
            } else if (msg->data == "shutdown") {
                RCLCPP_INFO(rclcpp::get_logger("IdleState"), kOutcomeShutdown);
                return kOutcomeShutdown;
            } else {
                RCLCPP_INFO(rclcpp::get_logger("IdleState"), kOutcomeStay);
                return kOutcomeStay;
            }
        }
    };

    // 运行状态
    class RunningState : public yasmin::State
    {
    public:

    private:
        
    };
}