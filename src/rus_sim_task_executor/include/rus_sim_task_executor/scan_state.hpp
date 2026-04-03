#pragma once

#include "yasmin/state.hpp"
#include <rclcpp/rclcpp.hpp>
#include <string>

namespace RusScanState {
    // 状态枚举
    enum class StateId { INIT, IDLE, RUNNING, PAUSED, ERROR, SHUTDOWN };

    // 动作结果枚举
    enum class Outcome { SUCCESS, ERROR, TIMEOUT };

    // 状态枚举转字符串
    inline std::string Enum2String(StateId stateId)
    {
        switch (stateId) {
            case StateId::INIT: return "INIT";  // 初始化
            case StateId::IDLE: return "IDLE";  // 待机
            case StateId::RUNNING: return "RUNNING";  // 执行动作
            case StateId::PAUSED: return "PAUSED";  // 暂停
            case StateId::ERROR: return "ERROR";  // 错误
            case StateId::SHUTDOWN: return "SHUTDOWN";  // 关闭
            default: return "UNKOWN";
        }
    }

    // 动作结果枚举转字符串
    inline std::string Enum2String(Outcome outcome)
    {
        switch (outcome) {
            case Outcome::SUCCESS: return "SUCCESS";  // 动作执行成功
            case Outcome::ERROR: return "ERROR";  // 动作执行失败
            case Outcome::TIMEOUT: return "TIMEOUT";  // 动作执行超时
            default: return "UNKNOWN";
        }
    }

    // 初始状态
    class InitState : public yasmin::State
    {
    public:
        InitState() : yasmin::State({Enum2String(Outcome::SUCCESS), Enum2String(Outcome::ERROR), Enum2String(Outcome::TIMEOUT)}){}
        // 执行动作
        std::string execute(yasmin::Blackboard::SharedPtr blackboard) override{

        }
    };
}