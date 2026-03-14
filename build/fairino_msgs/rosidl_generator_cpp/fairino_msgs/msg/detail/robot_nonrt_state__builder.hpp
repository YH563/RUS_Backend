// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fairino_msgs:msg/RobotNonrtState.idl
// generated code does not contain a copyright notice

#ifndef FAIRINO_MSGS__MSG__DETAIL__ROBOT_NONRT_STATE__BUILDER_HPP_
#define FAIRINO_MSGS__MSG__DETAIL__ROBOT_NONRT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fairino_msgs/msg/detail/robot_nonrt_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fairino_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotNonrtState_servoj_cmd_num
{
public:
  explicit Init_RobotNonrtState_servoj_cmd_num(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  ::fairino_msgs::msg::RobotNonrtState servoj_cmd_num(::fairino_msgs::msg::RobotNonrtState::_servoj_cmd_num_type arg)
  {
    msg_.servoj_cmd_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j6_last_servoj_target
{
public:
  explicit Init_RobotNonrtState_j6_last_servoj_target(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_servoj_cmd_num j6_last_servoj_target(::fairino_msgs::msg::RobotNonrtState::_j6_last_servoj_target_type arg)
  {
    msg_.j6_last_servoj_target = std::move(arg);
    return Init_RobotNonrtState_servoj_cmd_num(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j5_last_servoj_target
{
public:
  explicit Init_RobotNonrtState_j5_last_servoj_target(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j6_last_servoj_target j5_last_servoj_target(::fairino_msgs::msg::RobotNonrtState::_j5_last_servoj_target_type arg)
  {
    msg_.j5_last_servoj_target = std::move(arg);
    return Init_RobotNonrtState_j6_last_servoj_target(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j4_last_servoj_target
{
public:
  explicit Init_RobotNonrtState_j4_last_servoj_target(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j5_last_servoj_target j4_last_servoj_target(::fairino_msgs::msg::RobotNonrtState::_j4_last_servoj_target_type arg)
  {
    msg_.j4_last_servoj_target = std::move(arg);
    return Init_RobotNonrtState_j5_last_servoj_target(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j3_last_servoj_target
{
public:
  explicit Init_RobotNonrtState_j3_last_servoj_target(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j4_last_servoj_target j3_last_servoj_target(::fairino_msgs::msg::RobotNonrtState::_j3_last_servoj_target_type arg)
  {
    msg_.j3_last_servoj_target = std::move(arg);
    return Init_RobotNonrtState_j4_last_servoj_target(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j2_last_servoj_target
{
public:
  explicit Init_RobotNonrtState_j2_last_servoj_target(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j3_last_servoj_target j2_last_servoj_target(::fairino_msgs::msg::RobotNonrtState::_j2_last_servoj_target_type arg)
  {
    msg_.j2_last_servoj_target = std::move(arg);
    return Init_RobotNonrtState_j3_last_servoj_target(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j1_last_servoj_target
{
public:
  explicit Init_RobotNonrtState_j1_last_servoj_target(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j2_last_servoj_target j1_last_servoj_target(::fairino_msgs::msg::RobotNonrtState::_j1_last_servoj_target_type arg)
  {
    msg_.j1_last_servoj_target = std::move(arg);
    return Init_RobotNonrtState_j2_last_servoj_target(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_load_cog_z
{
public:
  explicit Init_RobotNonrtState_load_cog_z(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j1_last_servoj_target load_cog_z(::fairino_msgs::msg::RobotNonrtState::_load_cog_z_type arg)
  {
    msg_.load_cog_z = std::move(arg);
    return Init_RobotNonrtState_j1_last_servoj_target(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_load_cog_y
{
public:
  explicit Init_RobotNonrtState_load_cog_y(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_load_cog_z load_cog_y(::fairino_msgs::msg::RobotNonrtState::_load_cog_y_type arg)
  {
    msg_.load_cog_y = std::move(arg);
    return Init_RobotNonrtState_load_cog_z(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_load_cog_x
{
public:
  explicit Init_RobotNonrtState_load_cog_x(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_load_cog_y load_cog_x(::fairino_msgs::msg::RobotNonrtState::_load_cog_x_type arg)
  {
    msg_.load_cog_x = std::move(arg);
    return Init_RobotNonrtState_load_cog_y(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_load
{
public:
  explicit Init_RobotNonrtState_load(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_load_cog_x load(::fairino_msgs::msg::RobotNonrtState::_load_type arg)
  {
    msg_.load = std::move(arg);
    return Init_RobotNonrtState_load_cog_x(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ex_axis_coord_c
{
public:
  explicit Init_RobotNonrtState_ex_axis_coord_c(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_load ex_axis_coord_c(::fairino_msgs::msg::RobotNonrtState::_ex_axis_coord_c_type arg)
  {
    msg_.ex_axis_coord_c = std::move(arg);
    return Init_RobotNonrtState_load(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ex_axis_coord_b
{
public:
  explicit Init_RobotNonrtState_ex_axis_coord_b(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ex_axis_coord_c ex_axis_coord_b(::fairino_msgs::msg::RobotNonrtState::_ex_axis_coord_b_type arg)
  {
    msg_.ex_axis_coord_b = std::move(arg);
    return Init_RobotNonrtState_ex_axis_coord_c(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ex_axis_coord_a
{
public:
  explicit Init_RobotNonrtState_ex_axis_coord_a(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ex_axis_coord_b ex_axis_coord_a(::fairino_msgs::msg::RobotNonrtState::_ex_axis_coord_a_type arg)
  {
    msg_.ex_axis_coord_a = std::move(arg);
    return Init_RobotNonrtState_ex_axis_coord_b(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ex_axis_coord_z
{
public:
  explicit Init_RobotNonrtState_ex_axis_coord_z(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ex_axis_coord_a ex_axis_coord_z(::fairino_msgs::msg::RobotNonrtState::_ex_axis_coord_z_type arg)
  {
    msg_.ex_axis_coord_z = std::move(arg);
    return Init_RobotNonrtState_ex_axis_coord_a(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ex_axis_coord_y
{
public:
  explicit Init_RobotNonrtState_ex_axis_coord_y(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ex_axis_coord_z ex_axis_coord_y(::fairino_msgs::msg::RobotNonrtState::_ex_axis_coord_y_type arg)
  {
    msg_.ex_axis_coord_y = std::move(arg);
    return Init_RobotNonrtState_ex_axis_coord_z(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ex_axis_coord_x
{
public:
  explicit Init_RobotNonrtState_ex_axis_coord_x(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ex_axis_coord_y ex_axis_coord_x(::fairino_msgs::msg::RobotNonrtState::_ex_axis_coord_x_type arg)
  {
    msg_.ex_axis_coord_x = std::move(arg);
    return Init_RobotNonrtState_ex_axis_coord_y(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ex_tool_coord_c
{
public:
  explicit Init_RobotNonrtState_ex_tool_coord_c(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ex_axis_coord_x ex_tool_coord_c(::fairino_msgs::msg::RobotNonrtState::_ex_tool_coord_c_type arg)
  {
    msg_.ex_tool_coord_c = std::move(arg);
    return Init_RobotNonrtState_ex_axis_coord_x(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ex_tool_coord_b
{
public:
  explicit Init_RobotNonrtState_ex_tool_coord_b(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ex_tool_coord_c ex_tool_coord_b(::fairino_msgs::msg::RobotNonrtState::_ex_tool_coord_b_type arg)
  {
    msg_.ex_tool_coord_b = std::move(arg);
    return Init_RobotNonrtState_ex_tool_coord_c(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ex_tool_coord_a
{
public:
  explicit Init_RobotNonrtState_ex_tool_coord_a(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ex_tool_coord_b ex_tool_coord_a(::fairino_msgs::msg::RobotNonrtState::_ex_tool_coord_a_type arg)
  {
    msg_.ex_tool_coord_a = std::move(arg);
    return Init_RobotNonrtState_ex_tool_coord_b(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ex_tool_coord_z
{
public:
  explicit Init_RobotNonrtState_ex_tool_coord_z(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ex_tool_coord_a ex_tool_coord_z(::fairino_msgs::msg::RobotNonrtState::_ex_tool_coord_z_type arg)
  {
    msg_.ex_tool_coord_z = std::move(arg);
    return Init_RobotNonrtState_ex_tool_coord_a(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ex_tool_coord_y
{
public:
  explicit Init_RobotNonrtState_ex_tool_coord_y(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ex_tool_coord_z ex_tool_coord_y(::fairino_msgs::msg::RobotNonrtState::_ex_tool_coord_y_type arg)
  {
    msg_.ex_tool_coord_y = std::move(arg);
    return Init_RobotNonrtState_ex_tool_coord_z(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ex_tool_coord_x
{
public:
  explicit Init_RobotNonrtState_ex_tool_coord_x(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ex_tool_coord_y ex_tool_coord_x(::fairino_msgs::msg::RobotNonrtState::_ex_tool_coord_x_type arg)
  {
    msg_.ex_tool_coord_x = std::move(arg);
    return Init_RobotNonrtState_ex_tool_coord_y(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_wobj_coord_c
{
public:
  explicit Init_RobotNonrtState_wobj_coord_c(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ex_tool_coord_x wobj_coord_c(::fairino_msgs::msg::RobotNonrtState::_wobj_coord_c_type arg)
  {
    msg_.wobj_coord_c = std::move(arg);
    return Init_RobotNonrtState_ex_tool_coord_x(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_wobj_coord_b
{
public:
  explicit Init_RobotNonrtState_wobj_coord_b(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_wobj_coord_c wobj_coord_b(::fairino_msgs::msg::RobotNonrtState::_wobj_coord_b_type arg)
  {
    msg_.wobj_coord_b = std::move(arg);
    return Init_RobotNonrtState_wobj_coord_c(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_wobj_coord_a
{
public:
  explicit Init_RobotNonrtState_wobj_coord_a(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_wobj_coord_b wobj_coord_a(::fairino_msgs::msg::RobotNonrtState::_wobj_coord_a_type arg)
  {
    msg_.wobj_coord_a = std::move(arg);
    return Init_RobotNonrtState_wobj_coord_b(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_wobj_coord_z
{
public:
  explicit Init_RobotNonrtState_wobj_coord_z(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_wobj_coord_a wobj_coord_z(::fairino_msgs::msg::RobotNonrtState::_wobj_coord_z_type arg)
  {
    msg_.wobj_coord_z = std::move(arg);
    return Init_RobotNonrtState_wobj_coord_a(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_wobj_coord_y
{
public:
  explicit Init_RobotNonrtState_wobj_coord_y(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_wobj_coord_z wobj_coord_y(::fairino_msgs::msg::RobotNonrtState::_wobj_coord_y_type arg)
  {
    msg_.wobj_coord_y = std::move(arg);
    return Init_RobotNonrtState_wobj_coord_z(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_wobj_coord_x
{
public:
  explicit Init_RobotNonrtState_wobj_coord_x(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_wobj_coord_y wobj_coord_x(::fairino_msgs::msg::RobotNonrtState::_wobj_coord_x_type arg)
  {
    msg_.wobj_coord_x = std::move(arg);
    return Init_RobotNonrtState_wobj_coord_y(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_tool_coord_c
{
public:
  explicit Init_RobotNonrtState_tool_coord_c(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_wobj_coord_x tool_coord_c(::fairino_msgs::msg::RobotNonrtState::_tool_coord_c_type arg)
  {
    msg_.tool_coord_c = std::move(arg);
    return Init_RobotNonrtState_wobj_coord_x(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_tool_coord_b
{
public:
  explicit Init_RobotNonrtState_tool_coord_b(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_tool_coord_c tool_coord_b(::fairino_msgs::msg::RobotNonrtState::_tool_coord_b_type arg)
  {
    msg_.tool_coord_b = std::move(arg);
    return Init_RobotNonrtState_tool_coord_c(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_tool_coord_a
{
public:
  explicit Init_RobotNonrtState_tool_coord_a(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_tool_coord_b tool_coord_a(::fairino_msgs::msg::RobotNonrtState::_tool_coord_a_type arg)
  {
    msg_.tool_coord_a = std::move(arg);
    return Init_RobotNonrtState_tool_coord_b(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_tool_coord_z
{
public:
  explicit Init_RobotNonrtState_tool_coord_z(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_tool_coord_a tool_coord_z(::fairino_msgs::msg::RobotNonrtState::_tool_coord_z_type arg)
  {
    msg_.tool_coord_z = std::move(arg);
    return Init_RobotNonrtState_tool_coord_a(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_tool_coord_y
{
public:
  explicit Init_RobotNonrtState_tool_coord_y(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_tool_coord_z tool_coord_y(::fairino_msgs::msg::RobotNonrtState::_tool_coord_y_type arg)
  {
    msg_.tool_coord_y = std::move(arg);
    return Init_RobotNonrtState_tool_coord_z(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_tool_coord_x
{
public:
  explicit Init_RobotNonrtState_tool_coord_x(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_tool_coord_y tool_coord_x(::fairino_msgs::msg::RobotNonrtState::_tool_coord_x_type arg)
  {
    msg_.tool_coord_x = std::move(arg);
    return Init_RobotNonrtState_tool_coord_y(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_wide_voltage_ctrl_box_fan_current
{
public:
  explicit Init_RobotNonrtState_wide_voltage_ctrl_box_fan_current(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_tool_coord_x wide_voltage_ctrl_box_fan_current(::fairino_msgs::msg::RobotNonrtState::_wide_voltage_ctrl_box_fan_current_type arg)
  {
    msg_.wide_voltage_ctrl_box_fan_current = std::move(arg);
    return Init_RobotNonrtState_tool_coord_x(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_jwide_voltage_ctrl_box_temp
{
public:
  explicit Init_RobotNonrtState_jwide_voltage_ctrl_box_temp(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_wide_voltage_ctrl_box_fan_current jwide_voltage_ctrl_box_temp(::fairino_msgs::msg::RobotNonrtState::_jwide_voltage_ctrl_box_temp_type arg)
  {
    msg_.jwide_voltage_ctrl_box_temp = std::move(arg);
    return Init_RobotNonrtState_wide_voltage_ctrl_box_fan_current(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j6_tgt_tor
{
public:
  explicit Init_RobotNonrtState_j6_tgt_tor(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_jwide_voltage_ctrl_box_temp j6_tgt_tor(::fairino_msgs::msg::RobotNonrtState::_j6_tgt_tor_type arg)
  {
    msg_.j6_tgt_tor = std::move(arg);
    return Init_RobotNonrtState_jwide_voltage_ctrl_box_temp(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j5_tgt_tor
{
public:
  explicit Init_RobotNonrtState_j5_tgt_tor(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j6_tgt_tor j5_tgt_tor(::fairino_msgs::msg::RobotNonrtState::_j5_tgt_tor_type arg)
  {
    msg_.j5_tgt_tor = std::move(arg);
    return Init_RobotNonrtState_j6_tgt_tor(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j4_tgt_tor
{
public:
  explicit Init_RobotNonrtState_j4_tgt_tor(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j5_tgt_tor j4_tgt_tor(::fairino_msgs::msg::RobotNonrtState::_j4_tgt_tor_type arg)
  {
    msg_.j4_tgt_tor = std::move(arg);
    return Init_RobotNonrtState_j5_tgt_tor(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j3_tgt_tor
{
public:
  explicit Init_RobotNonrtState_j3_tgt_tor(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j4_tgt_tor j3_tgt_tor(::fairino_msgs::msg::RobotNonrtState::_j3_tgt_tor_type arg)
  {
    msg_.j3_tgt_tor = std::move(arg);
    return Init_RobotNonrtState_j4_tgt_tor(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j2_tgt_tor
{
public:
  explicit Init_RobotNonrtState_j2_tgt_tor(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j3_tgt_tor j2_tgt_tor(::fairino_msgs::msg::RobotNonrtState::_j2_tgt_tor_type arg)
  {
    msg_.j2_tgt_tor = std::move(arg);
    return Init_RobotNonrtState_j3_tgt_tor(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j1_tgt_tor
{
public:
  explicit Init_RobotNonrtState_j1_tgt_tor(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j2_tgt_tor j1_tgt_tor(::fairino_msgs::msg::RobotNonrtState::_j1_tgt_tor_type arg)
  {
    msg_.j1_tgt_tor = std::move(arg);
    return Init_RobotNonrtState_j2_tgt_tor(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_weldarcstate
{
public:
  explicit Init_RobotNonrtState_weldarcstate(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j1_tgt_tor weldarcstate(::fairino_msgs::msg::RobotNonrtState::_weldarcstate_type arg)
  {
    msg_.weldarcstate = std::move(arg);
    return Init_RobotNonrtState_j1_tgt_tor(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_weldbreakoffstate
{
public:
  explicit Init_RobotNonrtState_weldbreakoffstate(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_weldarcstate weldbreakoffstate(::fairino_msgs::msg::RobotNonrtState::_weldbreakoffstate_type arg)
  {
    msg_.weldbreakoffstate = std::move(arg);
    return Init_RobotNonrtState_weldarcstate(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_gripper_rot_torque
{
public:
  explicit Init_RobotNonrtState_gripper_rot_torque(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_weldbreakoffstate gripper_rot_torque(::fairino_msgs::msg::RobotNonrtState::_gripper_rot_torque_type arg)
  {
    msg_.gripper_rot_torque = std::move(arg);
    return Init_RobotNonrtState_weldbreakoffstate(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_gripper_rot_speed
{
public:
  explicit Init_RobotNonrtState_gripper_rot_speed(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_gripper_rot_torque gripper_rot_speed(::fairino_msgs::msg::RobotNonrtState::_gripper_rot_speed_type arg)
  {
    msg_.gripper_rot_speed = std::move(arg);
    return Init_RobotNonrtState_gripper_rot_torque(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_gripper_rot_num
{
public:
  explicit Init_RobotNonrtState_gripper_rot_num(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_gripper_rot_speed gripper_rot_num(::fairino_msgs::msg::RobotNonrtState::_gripper_rot_num_type arg)
  {
    msg_.gripper_rot_num = std::move(arg);
    return Init_RobotNonrtState_gripper_rot_speed(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_tl_analog_output
{
public:
  explicit Init_RobotNonrtState_tl_analog_output(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_gripper_rot_num tl_analog_output(::fairino_msgs::msg::RobotNonrtState::_tl_analog_output_type arg)
  {
    msg_.tl_analog_output = std::move(arg);
    return Init_RobotNonrtState_gripper_rot_num(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cl_analog_output_2
{
public:
  explicit Init_RobotNonrtState_cl_analog_output_2(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_tl_analog_output cl_analog_output_2(::fairino_msgs::msg::RobotNonrtState::_cl_analog_output_2_type arg)
  {
    msg_.cl_analog_output_2 = std::move(arg);
    return Init_RobotNonrtState_tl_analog_output(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cl_analog_output_1
{
public:
  explicit Init_RobotNonrtState_cl_analog_output_1(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cl_analog_output_2 cl_analog_output_1(::fairino_msgs::msg::RobotNonrtState::_cl_analog_output_1_type arg)
  {
    msg_.cl_analog_output_1 = std::move(arg);
    return Init_RobotNonrtState_cl_analog_output_2(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_end_lua_err_code
{
public:
  explicit Init_RobotNonrtState_end_lua_err_code(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cl_analog_output_1 end_lua_err_code(::fairino_msgs::msg::RobotNonrtState::_end_lua_err_code_type arg)
  {
    msg_.end_lua_err_code = std::move(arg);
    return Init_RobotNonrtState_cl_analog_output_1(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_rbt_enable_state
{
public:
  explicit Init_RobotNonrtState_rbt_enable_state(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_end_lua_err_code rbt_enable_state(::fairino_msgs::msg::RobotNonrtState::_rbt_enable_state_type arg)
  {
    msg_.rbt_enable_state = std::move(arg);
    return Init_RobotNonrtState_end_lua_err_code(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ext_ao_state_4
{
public:
  explicit Init_RobotNonrtState_ext_ao_state_4(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_rbt_enable_state ext_ao_state_4(::fairino_msgs::msg::RobotNonrtState::_ext_ao_state_4_type arg)
  {
    msg_.ext_ao_state_4 = std::move(arg);
    return Init_RobotNonrtState_rbt_enable_state(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ext_ao_state_3
{
public:
  explicit Init_RobotNonrtState_ext_ao_state_3(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ext_ao_state_4 ext_ao_state_3(::fairino_msgs::msg::RobotNonrtState::_ext_ao_state_3_type arg)
  {
    msg_.ext_ao_state_3 = std::move(arg);
    return Init_RobotNonrtState_ext_ao_state_4(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ext_ao_state_2
{
public:
  explicit Init_RobotNonrtState_ext_ao_state_2(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ext_ao_state_3 ext_ao_state_2(::fairino_msgs::msg::RobotNonrtState::_ext_ao_state_2_type arg)
  {
    msg_.ext_ao_state_2 = std::move(arg);
    return Init_RobotNonrtState_ext_ao_state_3(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ext_ao_state_1
{
public:
  explicit Init_RobotNonrtState_ext_ao_state_1(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ext_ao_state_2 ext_ao_state_1(::fairino_msgs::msg::RobotNonrtState::_ext_ao_state_1_type arg)
  {
    msg_.ext_ao_state_1 = std::move(arg);
    return Init_RobotNonrtState_ext_ao_state_2(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ext_ai_state_4
{
public:
  explicit Init_RobotNonrtState_ext_ai_state_4(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ext_ao_state_1 ext_ai_state_4(::fairino_msgs::msg::RobotNonrtState::_ext_ai_state_4_type arg)
  {
    msg_.ext_ai_state_4 = std::move(arg);
    return Init_RobotNonrtState_ext_ao_state_1(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ext_ai_state_3
{
public:
  explicit Init_RobotNonrtState_ext_ai_state_3(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ext_ai_state_4 ext_ai_state_3(::fairino_msgs::msg::RobotNonrtState::_ext_ai_state_3_type arg)
  {
    msg_.ext_ai_state_3 = std::move(arg);
    return Init_RobotNonrtState_ext_ai_state_4(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ext_ai_state_2
{
public:
  explicit Init_RobotNonrtState_ext_ai_state_2(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ext_ai_state_3 ext_ai_state_2(::fairino_msgs::msg::RobotNonrtState::_ext_ai_state_2_type arg)
  {
    msg_.ext_ai_state_2 = std::move(arg);
    return Init_RobotNonrtState_ext_ai_state_3(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ext_ai_state_1
{
public:
  explicit Init_RobotNonrtState_ext_ai_state_1(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ext_ai_state_2 ext_ai_state_1(::fairino_msgs::msg::RobotNonrtState::_ext_ai_state_1_type arg)
  {
    msg_.ext_ai_state_1 = std::move(arg);
    return Init_RobotNonrtState_ext_ai_state_2(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ext_do_state_8
{
public:
  explicit Init_RobotNonrtState_ext_do_state_8(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ext_ai_state_1 ext_do_state_8(::fairino_msgs::msg::RobotNonrtState::_ext_do_state_8_type arg)
  {
    msg_.ext_do_state_8 = std::move(arg);
    return Init_RobotNonrtState_ext_ai_state_1(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ext_do_state_7
{
public:
  explicit Init_RobotNonrtState_ext_do_state_7(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ext_do_state_8 ext_do_state_7(::fairino_msgs::msg::RobotNonrtState::_ext_do_state_7_type arg)
  {
    msg_.ext_do_state_7 = std::move(arg);
    return Init_RobotNonrtState_ext_do_state_8(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ext_do_state_6
{
public:
  explicit Init_RobotNonrtState_ext_do_state_6(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ext_do_state_7 ext_do_state_6(::fairino_msgs::msg::RobotNonrtState::_ext_do_state_6_type arg)
  {
    msg_.ext_do_state_6 = std::move(arg);
    return Init_RobotNonrtState_ext_do_state_7(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ext_do_state_5
{
public:
  explicit Init_RobotNonrtState_ext_do_state_5(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ext_do_state_6 ext_do_state_5(::fairino_msgs::msg::RobotNonrtState::_ext_do_state_5_type arg)
  {
    msg_.ext_do_state_5 = std::move(arg);
    return Init_RobotNonrtState_ext_do_state_6(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ext_do_state_4
{
public:
  explicit Init_RobotNonrtState_ext_do_state_4(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ext_do_state_5 ext_do_state_4(::fairino_msgs::msg::RobotNonrtState::_ext_do_state_4_type arg)
  {
    msg_.ext_do_state_4 = std::move(arg);
    return Init_RobotNonrtState_ext_do_state_5(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ext_do_state_3
{
public:
  explicit Init_RobotNonrtState_ext_do_state_3(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ext_do_state_4 ext_do_state_3(::fairino_msgs::msg::RobotNonrtState::_ext_do_state_3_type arg)
  {
    msg_.ext_do_state_3 = std::move(arg);
    return Init_RobotNonrtState_ext_do_state_4(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ext_do_state_2
{
public:
  explicit Init_RobotNonrtState_ext_do_state_2(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ext_do_state_3 ext_do_state_2(::fairino_msgs::msg::RobotNonrtState::_ext_do_state_2_type arg)
  {
    msg_.ext_do_state_2 = std::move(arg);
    return Init_RobotNonrtState_ext_do_state_3(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ext_do_state_1
{
public:
  explicit Init_RobotNonrtState_ext_do_state_1(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ext_do_state_2 ext_do_state_1(::fairino_msgs::msg::RobotNonrtState::_ext_do_state_1_type arg)
  {
    msg_.ext_do_state_1 = std::move(arg);
    return Init_RobotNonrtState_ext_do_state_2(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ext_di_state_8
{
public:
  explicit Init_RobotNonrtState_ext_di_state_8(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ext_do_state_1 ext_di_state_8(::fairino_msgs::msg::RobotNonrtState::_ext_di_state_8_type arg)
  {
    msg_.ext_di_state_8 = std::move(arg);
    return Init_RobotNonrtState_ext_do_state_1(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ext_di_state_7
{
public:
  explicit Init_RobotNonrtState_ext_di_state_7(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ext_di_state_8 ext_di_state_7(::fairino_msgs::msg::RobotNonrtState::_ext_di_state_7_type arg)
  {
    msg_.ext_di_state_7 = std::move(arg);
    return Init_RobotNonrtState_ext_di_state_8(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ext_di_state_6
{
public:
  explicit Init_RobotNonrtState_ext_di_state_6(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ext_di_state_7 ext_di_state_6(::fairino_msgs::msg::RobotNonrtState::_ext_di_state_6_type arg)
  {
    msg_.ext_di_state_6 = std::move(arg);
    return Init_RobotNonrtState_ext_di_state_7(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ext_di_state_5
{
public:
  explicit Init_RobotNonrtState_ext_di_state_5(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ext_di_state_6 ext_di_state_5(::fairino_msgs::msg::RobotNonrtState::_ext_di_state_5_type arg)
  {
    msg_.ext_di_state_5 = std::move(arg);
    return Init_RobotNonrtState_ext_di_state_6(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ext_di_state_4
{
public:
  explicit Init_RobotNonrtState_ext_di_state_4(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ext_di_state_5 ext_di_state_4(::fairino_msgs::msg::RobotNonrtState::_ext_di_state_4_type arg)
  {
    msg_.ext_di_state_4 = std::move(arg);
    return Init_RobotNonrtState_ext_di_state_5(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ext_di_state_3
{
public:
  explicit Init_RobotNonrtState_ext_di_state_3(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ext_di_state_4 ext_di_state_3(::fairino_msgs::msg::RobotNonrtState::_ext_di_state_3_type arg)
  {
    msg_.ext_di_state_3 = std::move(arg);
    return Init_RobotNonrtState_ext_di_state_4(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ext_di_state_2
{
public:
  explicit Init_RobotNonrtState_ext_di_state_2(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ext_di_state_3 ext_di_state_2(::fairino_msgs::msg::RobotNonrtState::_ext_di_state_2_type arg)
  {
    msg_.ext_di_state_2 = std::move(arg);
    return Init_RobotNonrtState_ext_di_state_3(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ext_di_state_1
{
public:
  explicit Init_RobotNonrtState_ext_di_state_1(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ext_di_state_2 ext_di_state_1(::fairino_msgs::msg::RobotNonrtState::_ext_di_state_1_type arg)
  {
    msg_.ext_di_state_1 = std::move(arg);
    return Init_RobotNonrtState_ext_di_state_2(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_aux_servo_torque
{
public:
  explicit Init_RobotNonrtState_aux_servo_torque(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ext_di_state_1 aux_servo_torque(::fairino_msgs::msg::RobotNonrtState::_aux_servo_torque_type arg)
  {
    msg_.aux_servo_torque = std::move(arg);
    return Init_RobotNonrtState_ext_di_state_1(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_aux_servo_vel
{
public:
  explicit Init_RobotNonrtState_aux_servo_vel(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_aux_servo_torque aux_servo_vel(::fairino_msgs::msg::RobotNonrtState::_aux_servo_vel_type arg)
  {
    msg_.aux_servo_vel = std::move(arg);
    return Init_RobotNonrtState_aux_servo_torque(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_aux_servo_pos
{
public:
  explicit Init_RobotNonrtState_aux_servo_pos(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_aux_servo_vel aux_servo_pos(::fairino_msgs::msg::RobotNonrtState::_aux_servo_pos_type arg)
  {
    msg_.aux_servo_pos = std::move(arg);
    return Init_RobotNonrtState_aux_servo_vel(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_aux_servo_state
{
public:
  explicit Init_RobotNonrtState_aux_servo_state(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_aux_servo_pos aux_servo_state(::fairino_msgs::msg::RobotNonrtState::_aux_servo_state_type arg)
  {
    msg_.aux_servo_state = std::move(arg);
    return Init_RobotNonrtState_aux_servo_pos(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_aux_servo_err
{
public:
  explicit Init_RobotNonrtState_aux_servo_err(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_aux_servo_state aux_servo_err(::fairino_msgs::msg::RobotNonrtState::_aux_servo_err_type arg)
  {
    msg_.aux_servo_err = std::move(arg);
    return Init_RobotNonrtState_aux_servo_state(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_aux_servo_id
{
public:
  explicit Init_RobotNonrtState_aux_servo_id(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_aux_servo_err aux_servo_id(::fairino_msgs::msg::RobotNonrtState::_aux_servo_id_type arg)
  {
    msg_.aux_servo_id = std::move(arg);
    return Init_RobotNonrtState_aux_servo_err(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_gripper_voltage
{
public:
  explicit Init_RobotNonrtState_gripper_voltage(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_aux_servo_id gripper_voltage(::fairino_msgs::msg::RobotNonrtState::_gripper_voltage_type arg)
  {
    msg_.gripper_voltage = std::move(arg);
    return Init_RobotNonrtState_aux_servo_id(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_gripper_temp
{
public:
  explicit Init_RobotNonrtState_gripper_temp(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_gripper_voltage gripper_temp(::fairino_msgs::msg::RobotNonrtState::_gripper_temp_type arg)
  {
    msg_.gripper_temp = std::move(arg);
    return Init_RobotNonrtState_gripper_voltage(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_gripper_current
{
public:
  explicit Init_RobotNonrtState_gripper_current(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_gripper_temp gripper_current(::fairino_msgs::msg::RobotNonrtState::_gripper_current_type arg)
  {
    msg_.gripper_current = std::move(arg);
    return Init_RobotNonrtState_gripper_temp(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_gripper_speed
{
public:
  explicit Init_RobotNonrtState_gripper_speed(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_gripper_current gripper_speed(::fairino_msgs::msg::RobotNonrtState::_gripper_speed_type arg)
  {
    msg_.gripper_speed = std::move(arg);
    return Init_RobotNonrtState_gripper_current(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_gripper_position
{
public:
  explicit Init_RobotNonrtState_gripper_position(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_gripper_speed gripper_position(::fairino_msgs::msg::RobotNonrtState::_gripper_position_type arg)
  {
    msg_.gripper_position = std::move(arg);
    return Init_RobotNonrtState_gripper_speed(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_gripper_active
{
public:
  explicit Init_RobotNonrtState_gripper_active(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_gripper_position gripper_active(::fairino_msgs::msg::RobotNonrtState::_gripper_active_type arg)
  {
    msg_.gripper_active = std::move(arg);
    return Init_RobotNonrtState_gripper_position(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_grippererro
{
public:
  explicit Init_RobotNonrtState_grippererro(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_gripper_active grippererro(::fairino_msgs::msg::RobotNonrtState::_grippererro_type arg)
  {
    msg_.grippererro = std::move(arg);
    return Init_RobotNonrtState_gripper_active(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_gripper_fault_id
{
public:
  explicit Init_RobotNonrtState_gripper_fault_id(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_grippererro gripper_fault_id(::fairino_msgs::msg::RobotNonrtState::_gripper_fault_id_type arg)
  {
    msg_.gripper_fault_id = std::move(arg);
    return Init_RobotNonrtState_grippererro(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_safety_stop2_state
{
public:
  explicit Init_RobotNonrtState_safety_stop2_state(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_gripper_fault_id safety_stop2_state(::fairino_msgs::msg::RobotNonrtState::_safety_stop2_state_type arg)
  {
    msg_.safety_stop2_state = std::move(arg);
    return Init_RobotNonrtState_gripper_fault_id(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_safety_stop1_state
{
public:
  explicit Init_RobotNonrtState_safety_stop1_state(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_safety_stop2_state safety_stop1_state(::fairino_msgs::msg::RobotNonrtState::_safety_stop1_state_type arg)
  {
    msg_.safety_stop1_state = std::move(arg);
    return Init_RobotNonrtState_safety_stop2_state(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_trajectory_pnum
{
public:
  explicit Init_RobotNonrtState_trajectory_pnum(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_safety_stop1_state trajectory_pnum(::fairino_msgs::msg::RobotNonrtState::_trajectory_pnum_type arg)
  {
    msg_.trajectory_pnum = std::move(arg);
    return Init_RobotNonrtState_safety_stop1_state(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_collision_err
{
public:
  explicit Init_RobotNonrtState_collision_err(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_trajectory_pnum collision_err(::fairino_msgs::msg::RobotNonrtState::_collision_err_type arg)
  {
    msg_.collision_err = std::move(arg);
    return Init_RobotNonrtState_trajectory_pnum(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_mc_queue_len
{
public:
  explicit Init_RobotNonrtState_mc_queue_len(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_collision_err mc_queue_len(::fairino_msgs::msg::RobotNonrtState::_mc_queue_len_type arg)
  {
    msg_.mc_queue_len = std::move(arg);
    return Init_RobotNonrtState_collision_err(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_grip_motion_done
{
public:
  explicit Init_RobotNonrtState_grip_motion_done(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_mc_queue_len grip_motion_done(::fairino_msgs::msg::RobotNonrtState::_grip_motion_done_type arg)
  {
    msg_.grip_motion_done = std::move(arg);
    return Init_RobotNonrtState_mc_queue_len(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_motion_done
{
public:
  explicit Init_RobotNonrtState_motion_done(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_grip_motion_done motion_done(::fairino_msgs::msg::RobotNonrtState::_motion_done_type arg)
  {
    msg_.motion_done = std::move(arg);
    return Init_RobotNonrtState_grip_motion_done(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_emg
{
public:
  explicit Init_RobotNonrtState_emg(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_motion_done emg(::fairino_msgs::msg::RobotNonrtState::_emg_type arg)
  {
    msg_.emg = std::move(arg);
    return Init_RobotNonrtState_motion_done(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ft_actstatus
{
public:
  explicit Init_RobotNonrtState_ft_actstatus(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_emg ft_actstatus(::fairino_msgs::msg::RobotNonrtState::_ft_actstatus_type arg)
  {
    msg_.ft_actstatus = std::move(arg);
    return Init_RobotNonrtState_emg(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ft_tz_data
{
public:
  explicit Init_RobotNonrtState_ft_tz_data(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ft_actstatus ft_tz_data(::fairino_msgs::msg::RobotNonrtState::_ft_tz_data_type arg)
  {
    msg_.ft_tz_data = std::move(arg);
    return Init_RobotNonrtState_ft_actstatus(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ft_ty_data
{
public:
  explicit Init_RobotNonrtState_ft_ty_data(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ft_tz_data ft_ty_data(::fairino_msgs::msg::RobotNonrtState::_ft_ty_data_type arg)
  {
    msg_.ft_ty_data = std::move(arg);
    return Init_RobotNonrtState_ft_tz_data(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ft_tx_data
{
public:
  explicit Init_RobotNonrtState_ft_tx_data(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ft_ty_data ft_tx_data(::fairino_msgs::msg::RobotNonrtState::_ft_tx_data_type arg)
  {
    msg_.ft_tx_data = std::move(arg);
    return Init_RobotNonrtState_ft_ty_data(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ft_fz_data
{
public:
  explicit Init_RobotNonrtState_ft_fz_data(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ft_tx_data ft_fz_data(::fairino_msgs::msg::RobotNonrtState::_ft_fz_data_type arg)
  {
    msg_.ft_fz_data = std::move(arg);
    return Init_RobotNonrtState_ft_tx_data(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ft_fy_data
{
public:
  explicit Init_RobotNonrtState_ft_fy_data(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ft_fz_data ft_fy_data(::fairino_msgs::msg::RobotNonrtState::_ft_fy_data_type arg)
  {
    msg_.ft_fy_data = std::move(arg);
    return Init_RobotNonrtState_ft_fz_data(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ft_fx_data
{
public:
  explicit Init_RobotNonrtState_ft_fx_data(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ft_fy_data ft_fx_data(::fairino_msgs::msg::RobotNonrtState::_ft_fx_data_type arg)
  {
    msg_.ft_fx_data = std::move(arg);
    return Init_RobotNonrtState_ft_fy_data(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ft_tz_raw_data
{
public:
  explicit Init_RobotNonrtState_ft_tz_raw_data(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ft_fx_data ft_tz_raw_data(::fairino_msgs::msg::RobotNonrtState::_ft_tz_raw_data_type arg)
  {
    msg_.ft_tz_raw_data = std::move(arg);
    return Init_RobotNonrtState_ft_fx_data(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ft_ty_raw_data
{
public:
  explicit Init_RobotNonrtState_ft_ty_raw_data(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ft_tz_raw_data ft_ty_raw_data(::fairino_msgs::msg::RobotNonrtState::_ft_ty_raw_data_type arg)
  {
    msg_.ft_ty_raw_data = std::move(arg);
    return Init_RobotNonrtState_ft_tz_raw_data(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ft_tx_raw_data
{
public:
  explicit Init_RobotNonrtState_ft_tx_raw_data(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ft_ty_raw_data ft_tx_raw_data(::fairino_msgs::msg::RobotNonrtState::_ft_tx_raw_data_type arg)
  {
    msg_.ft_tx_raw_data = std::move(arg);
    return Init_RobotNonrtState_ft_ty_raw_data(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ft_fz_raw_data
{
public:
  explicit Init_RobotNonrtState_ft_fz_raw_data(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ft_tx_raw_data ft_fz_raw_data(::fairino_msgs::msg::RobotNonrtState::_ft_fz_raw_data_type arg)
  {
    msg_.ft_fz_raw_data = std::move(arg);
    return Init_RobotNonrtState_ft_tx_raw_data(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ft_fy_raw_data
{
public:
  explicit Init_RobotNonrtState_ft_fy_raw_data(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ft_fz_raw_data ft_fy_raw_data(::fairino_msgs::msg::RobotNonrtState::_ft_fy_raw_data_type arg)
  {
    msg_.ft_fy_raw_data = std::move(arg);
    return Init_RobotNonrtState_ft_fz_raw_data(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_ft_fx_raw_data
{
public:
  explicit Init_RobotNonrtState_ft_fx_raw_data(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ft_fy_raw_data ft_fx_raw_data(::fairino_msgs::msg::RobotNonrtState::_ft_fx_raw_data_type arg)
  {
    msg_.ft_fx_raw_data = std::move(arg);
    return Init_RobotNonrtState_ft_fy_raw_data(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_tl_anglog_input
{
public:
  explicit Init_RobotNonrtState_tl_anglog_input(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_ft_fx_raw_data tl_anglog_input(::fairino_msgs::msg::RobotNonrtState::_tl_anglog_input_type arg)
  {
    msg_.tl_anglog_input = std::move(arg);
    return Init_RobotNonrtState_ft_fx_raw_data(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cl_analog_input_2
{
public:
  explicit Init_RobotNonrtState_cl_analog_input_2(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_tl_anglog_input cl_analog_input_2(::fairino_msgs::msg::RobotNonrtState::_cl_analog_input_2_type arg)
  {
    msg_.cl_analog_input_2 = std::move(arg);
    return Init_RobotNonrtState_tl_anglog_input(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cl_analog_input_1
{
public:
  explicit Init_RobotNonrtState_cl_analog_input_1(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cl_analog_input_2 cl_analog_input_1(::fairino_msgs::msg::RobotNonrtState::_cl_analog_input_1_type arg)
  {
    msg_.cl_analog_input_1 = std::move(arg);
    return Init_RobotNonrtState_cl_analog_input_2(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_tl_dgt_input_l
{
public:
  explicit Init_RobotNonrtState_tl_dgt_input_l(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cl_analog_input_1 tl_dgt_input_l(::fairino_msgs::msg::RobotNonrtState::_tl_dgt_input_l_type arg)
  {
    msg_.tl_dgt_input_l = std::move(arg);
    return Init_RobotNonrtState_cl_analog_input_1(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_dgt_input_l
{
public:
  explicit Init_RobotNonrtState_dgt_input_l(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_tl_dgt_input_l dgt_input_l(::fairino_msgs::msg::RobotNonrtState::_dgt_input_l_type arg)
  {
    msg_.dgt_input_l = std::move(arg);
    return Init_RobotNonrtState_tl_dgt_input_l(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_dgt_input_h
{
public:
  explicit Init_RobotNonrtState_dgt_input_h(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_dgt_input_l dgt_input_h(::fairino_msgs::msg::RobotNonrtState::_dgt_input_h_type arg)
  {
    msg_.dgt_input_h = std::move(arg);
    return Init_RobotNonrtState_dgt_input_l(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_tl_dgt_output_l
{
public:
  explicit Init_RobotNonrtState_tl_dgt_output_l(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_dgt_input_h tl_dgt_output_l(::fairino_msgs::msg::RobotNonrtState::_tl_dgt_output_l_type arg)
  {
    msg_.tl_dgt_output_l = std::move(arg);
    return Init_RobotNonrtState_dgt_input_h(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_dgt_output_l
{
public:
  explicit Init_RobotNonrtState_dgt_output_l(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_tl_dgt_output_l dgt_output_l(::fairino_msgs::msg::RobotNonrtState::_dgt_output_l_type arg)
  {
    msg_.dgt_output_l = std::move(arg);
    return Init_RobotNonrtState_tl_dgt_output_l(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_dgt_output_h
{
public:
  explicit Init_RobotNonrtState_dgt_output_h(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_dgt_output_l dgt_output_h(::fairino_msgs::msg::RobotNonrtState::_dgt_output_h_type arg)
  {
    msg_.dgt_output_h = std::move(arg);
    return Init_RobotNonrtState_dgt_output_l(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_work_num
{
public:
  explicit Init_RobotNonrtState_work_num(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_dgt_output_h work_num(::fairino_msgs::msg::RobotNonrtState::_work_num_type arg)
  {
    msg_.work_num = std::move(arg);
    return Init_RobotNonrtState_dgt_output_h(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_tool_num
{
public:
  explicit Init_RobotNonrtState_tool_num(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_work_num tool_num(::fairino_msgs::msg::RobotNonrtState::_tool_num_type arg)
  {
    msg_.tool_num = std::move(arg);
    return Init_RobotNonrtState_work_num(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j6_cur_tor
{
public:
  explicit Init_RobotNonrtState_j6_cur_tor(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_tool_num j6_cur_tor(::fairino_msgs::msg::RobotNonrtState::_j6_cur_tor_type arg)
  {
    msg_.j6_cur_tor = std::move(arg);
    return Init_RobotNonrtState_tool_num(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j5_cur_tor
{
public:
  explicit Init_RobotNonrtState_j5_cur_tor(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j6_cur_tor j5_cur_tor(::fairino_msgs::msg::RobotNonrtState::_j5_cur_tor_type arg)
  {
    msg_.j5_cur_tor = std::move(arg);
    return Init_RobotNonrtState_j6_cur_tor(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j4_cur_tor
{
public:
  explicit Init_RobotNonrtState_j4_cur_tor(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j5_cur_tor j4_cur_tor(::fairino_msgs::msg::RobotNonrtState::_j4_cur_tor_type arg)
  {
    msg_.j4_cur_tor = std::move(arg);
    return Init_RobotNonrtState_j5_cur_tor(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j3_cur_tor
{
public:
  explicit Init_RobotNonrtState_j3_cur_tor(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j4_cur_tor j3_cur_tor(::fairino_msgs::msg::RobotNonrtState::_j3_cur_tor_type arg)
  {
    msg_.j3_cur_tor = std::move(arg);
    return Init_RobotNonrtState_j4_cur_tor(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j2_cur_tor
{
public:
  explicit Init_RobotNonrtState_j2_cur_tor(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j3_cur_tor j2_cur_tor(::fairino_msgs::msg::RobotNonrtState::_j2_cur_tor_type arg)
  {
    msg_.j2_cur_tor = std::move(arg);
    return Init_RobotNonrtState_j3_cur_tor(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j1_cur_tor
{
public:
  explicit Init_RobotNonrtState_j1_cur_tor(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j2_cur_tor j1_cur_tor(::fairino_msgs::msg::RobotNonrtState::_j1_cur_tor_type arg)
  {
    msg_.j1_cur_tor = std::move(arg);
    return Init_RobotNonrtState_j2_cur_tor(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cart_c_cur_speed
{
public:
  explicit Init_RobotNonrtState_cart_c_cur_speed(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j1_cur_tor cart_c_cur_speed(::fairino_msgs::msg::RobotNonrtState::_cart_c_cur_speed_type arg)
  {
    msg_.cart_c_cur_speed = std::move(arg);
    return Init_RobotNonrtState_j1_cur_tor(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cart_b_cur_speed
{
public:
  explicit Init_RobotNonrtState_cart_b_cur_speed(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cart_c_cur_speed cart_b_cur_speed(::fairino_msgs::msg::RobotNonrtState::_cart_b_cur_speed_type arg)
  {
    msg_.cart_b_cur_speed = std::move(arg);
    return Init_RobotNonrtState_cart_c_cur_speed(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cart_a_cur_speed
{
public:
  explicit Init_RobotNonrtState_cart_a_cur_speed(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cart_b_cur_speed cart_a_cur_speed(::fairino_msgs::msg::RobotNonrtState::_cart_a_cur_speed_type arg)
  {
    msg_.cart_a_cur_speed = std::move(arg);
    return Init_RobotNonrtState_cart_b_cur_speed(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cart_z_cur_speed
{
public:
  explicit Init_RobotNonrtState_cart_z_cur_speed(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cart_a_cur_speed cart_z_cur_speed(::fairino_msgs::msg::RobotNonrtState::_cart_z_cur_speed_type arg)
  {
    msg_.cart_z_cur_speed = std::move(arg);
    return Init_RobotNonrtState_cart_a_cur_speed(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cart_y_cur_speed
{
public:
  explicit Init_RobotNonrtState_cart_y_cur_speed(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cart_z_cur_speed cart_y_cur_speed(::fairino_msgs::msg::RobotNonrtState::_cart_y_cur_speed_type arg)
  {
    msg_.cart_y_cur_speed = std::move(arg);
    return Init_RobotNonrtState_cart_z_cur_speed(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cart_x_cur_speed
{
public:
  explicit Init_RobotNonrtState_cart_x_cur_speed(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cart_y_cur_speed cart_x_cur_speed(::fairino_msgs::msg::RobotNonrtState::_cart_x_cur_speed_type arg)
  {
    msg_.cart_x_cur_speed = std::move(arg);
    return Init_RobotNonrtState_cart_y_cur_speed(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cart_rot_cur_speed
{
public:
  explicit Init_RobotNonrtState_cart_rot_cur_speed(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cart_x_cur_speed cart_rot_cur_speed(::fairino_msgs::msg::RobotNonrtState::_cart_rot_cur_speed_type arg)
  {
    msg_.cart_rot_cur_speed = std::move(arg);
    return Init_RobotNonrtState_cart_x_cur_speed(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cart_lin_cur_speed
{
public:
  explicit Init_RobotNonrtState_cart_lin_cur_speed(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cart_rot_cur_speed cart_lin_cur_speed(::fairino_msgs::msg::RobotNonrtState::_cart_lin_cur_speed_type arg)
  {
    msg_.cart_lin_cur_speed = std::move(arg);
    return Init_RobotNonrtState_cart_rot_cur_speed(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cart_c_cmd_speed
{
public:
  explicit Init_RobotNonrtState_cart_c_cmd_speed(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cart_lin_cur_speed cart_c_cmd_speed(::fairino_msgs::msg::RobotNonrtState::_cart_c_cmd_speed_type arg)
  {
    msg_.cart_c_cmd_speed = std::move(arg);
    return Init_RobotNonrtState_cart_lin_cur_speed(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cart_b_cmd_speed
{
public:
  explicit Init_RobotNonrtState_cart_b_cmd_speed(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cart_c_cmd_speed cart_b_cmd_speed(::fairino_msgs::msg::RobotNonrtState::_cart_b_cmd_speed_type arg)
  {
    msg_.cart_b_cmd_speed = std::move(arg);
    return Init_RobotNonrtState_cart_c_cmd_speed(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cart_a_cmd_speed
{
public:
  explicit Init_RobotNonrtState_cart_a_cmd_speed(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cart_b_cmd_speed cart_a_cmd_speed(::fairino_msgs::msg::RobotNonrtState::_cart_a_cmd_speed_type arg)
  {
    msg_.cart_a_cmd_speed = std::move(arg);
    return Init_RobotNonrtState_cart_b_cmd_speed(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cart_z_cmd_speed
{
public:
  explicit Init_RobotNonrtState_cart_z_cmd_speed(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cart_a_cmd_speed cart_z_cmd_speed(::fairino_msgs::msg::RobotNonrtState::_cart_z_cmd_speed_type arg)
  {
    msg_.cart_z_cmd_speed = std::move(arg);
    return Init_RobotNonrtState_cart_a_cmd_speed(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cart_y_cmd_speed
{
public:
  explicit Init_RobotNonrtState_cart_y_cmd_speed(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cart_z_cmd_speed cart_y_cmd_speed(::fairino_msgs::msg::RobotNonrtState::_cart_y_cmd_speed_type arg)
  {
    msg_.cart_y_cmd_speed = std::move(arg);
    return Init_RobotNonrtState_cart_z_cmd_speed(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cart_x_cmd_speed
{
public:
  explicit Init_RobotNonrtState_cart_x_cmd_speed(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cart_y_cmd_speed cart_x_cmd_speed(::fairino_msgs::msg::RobotNonrtState::_cart_x_cmd_speed_type arg)
  {
    msg_.cart_x_cmd_speed = std::move(arg);
    return Init_RobotNonrtState_cart_y_cmd_speed(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cart_rot_cmd_speed
{
public:
  explicit Init_RobotNonrtState_cart_rot_cmd_speed(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cart_x_cmd_speed cart_rot_cmd_speed(::fairino_msgs::msg::RobotNonrtState::_cart_rot_cmd_speed_type arg)
  {
    msg_.cart_rot_cmd_speed = std::move(arg);
    return Init_RobotNonrtState_cart_x_cmd_speed(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cart_lin_cmd_speed
{
public:
  explicit Init_RobotNonrtState_cart_lin_cmd_speed(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cart_rot_cmd_speed cart_lin_cmd_speed(::fairino_msgs::msg::RobotNonrtState::_cart_lin_cmd_speed_type arg)
  {
    msg_.cart_lin_cmd_speed = std::move(arg);
    return Init_RobotNonrtState_cart_rot_cmd_speed(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j6_actual_qdd
{
public:
  explicit Init_RobotNonrtState_j6_actual_qdd(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cart_lin_cmd_speed j6_actual_qdd(::fairino_msgs::msg::RobotNonrtState::_j6_actual_qdd_type arg)
  {
    msg_.j6_actual_qdd = std::move(arg);
    return Init_RobotNonrtState_cart_lin_cmd_speed(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j5_actual_qdd
{
public:
  explicit Init_RobotNonrtState_j5_actual_qdd(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j6_actual_qdd j5_actual_qdd(::fairino_msgs::msg::RobotNonrtState::_j5_actual_qdd_type arg)
  {
    msg_.j5_actual_qdd = std::move(arg);
    return Init_RobotNonrtState_j6_actual_qdd(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j4_actual_qdd
{
public:
  explicit Init_RobotNonrtState_j4_actual_qdd(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j5_actual_qdd j4_actual_qdd(::fairino_msgs::msg::RobotNonrtState::_j4_actual_qdd_type arg)
  {
    msg_.j4_actual_qdd = std::move(arg);
    return Init_RobotNonrtState_j5_actual_qdd(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j3_actual_qdd
{
public:
  explicit Init_RobotNonrtState_j3_actual_qdd(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j4_actual_qdd j3_actual_qdd(::fairino_msgs::msg::RobotNonrtState::_j3_actual_qdd_type arg)
  {
    msg_.j3_actual_qdd = std::move(arg);
    return Init_RobotNonrtState_j4_actual_qdd(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j2_actual_qdd
{
public:
  explicit Init_RobotNonrtState_j2_actual_qdd(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j3_actual_qdd j2_actual_qdd(::fairino_msgs::msg::RobotNonrtState::_j2_actual_qdd_type arg)
  {
    msg_.j2_actual_qdd = std::move(arg);
    return Init_RobotNonrtState_j3_actual_qdd(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j1_actual_qdd
{
public:
  explicit Init_RobotNonrtState_j1_actual_qdd(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j2_actual_qdd j1_actual_qdd(::fairino_msgs::msg::RobotNonrtState::_j1_actual_qdd_type arg)
  {
    msg_.j1_actual_qdd = std::move(arg);
    return Init_RobotNonrtState_j2_actual_qdd(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j6_actual_qd
{
public:
  explicit Init_RobotNonrtState_j6_actual_qd(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j1_actual_qdd j6_actual_qd(::fairino_msgs::msg::RobotNonrtState::_j6_actual_qd_type arg)
  {
    msg_.j6_actual_qd = std::move(arg);
    return Init_RobotNonrtState_j1_actual_qdd(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j5_actual_qd
{
public:
  explicit Init_RobotNonrtState_j5_actual_qd(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j6_actual_qd j5_actual_qd(::fairino_msgs::msg::RobotNonrtState::_j5_actual_qd_type arg)
  {
    msg_.j5_actual_qd = std::move(arg);
    return Init_RobotNonrtState_j6_actual_qd(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j4_actual_qd
{
public:
  explicit Init_RobotNonrtState_j4_actual_qd(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j5_actual_qd j4_actual_qd(::fairino_msgs::msg::RobotNonrtState::_j4_actual_qd_type arg)
  {
    msg_.j4_actual_qd = std::move(arg);
    return Init_RobotNonrtState_j5_actual_qd(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j3_actual_qd
{
public:
  explicit Init_RobotNonrtState_j3_actual_qd(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j4_actual_qd j3_actual_qd(::fairino_msgs::msg::RobotNonrtState::_j3_actual_qd_type arg)
  {
    msg_.j3_actual_qd = std::move(arg);
    return Init_RobotNonrtState_j4_actual_qd(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j2_actual_qd
{
public:
  explicit Init_RobotNonrtState_j2_actual_qd(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j3_actual_qd j2_actual_qd(::fairino_msgs::msg::RobotNonrtState::_j2_actual_qd_type arg)
  {
    msg_.j2_actual_qd = std::move(arg);
    return Init_RobotNonrtState_j3_actual_qd(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j1_actual_qd
{
public:
  explicit Init_RobotNonrtState_j1_actual_qd(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j2_actual_qd j1_actual_qd(::fairino_msgs::msg::RobotNonrtState::_j1_actual_qd_type arg)
  {
    msg_.j1_actual_qd = std::move(arg);
    return Init_RobotNonrtState_j2_actual_qd(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_flange_c_cur_pos
{
public:
  explicit Init_RobotNonrtState_flange_c_cur_pos(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j1_actual_qd flange_c_cur_pos(::fairino_msgs::msg::RobotNonrtState::_flange_c_cur_pos_type arg)
  {
    msg_.flange_c_cur_pos = std::move(arg);
    return Init_RobotNonrtState_j1_actual_qd(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_flange_b_cur_pos
{
public:
  explicit Init_RobotNonrtState_flange_b_cur_pos(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_flange_c_cur_pos flange_b_cur_pos(::fairino_msgs::msg::RobotNonrtState::_flange_b_cur_pos_type arg)
  {
    msg_.flange_b_cur_pos = std::move(arg);
    return Init_RobotNonrtState_flange_c_cur_pos(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_flange_a_cur_pos
{
public:
  explicit Init_RobotNonrtState_flange_a_cur_pos(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_flange_b_cur_pos flange_a_cur_pos(::fairino_msgs::msg::RobotNonrtState::_flange_a_cur_pos_type arg)
  {
    msg_.flange_a_cur_pos = std::move(arg);
    return Init_RobotNonrtState_flange_b_cur_pos(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_flange_z_cur_pos
{
public:
  explicit Init_RobotNonrtState_flange_z_cur_pos(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_flange_a_cur_pos flange_z_cur_pos(::fairino_msgs::msg::RobotNonrtState::_flange_z_cur_pos_type arg)
  {
    msg_.flange_z_cur_pos = std::move(arg);
    return Init_RobotNonrtState_flange_a_cur_pos(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_flange_y_cur_pos
{
public:
  explicit Init_RobotNonrtState_flange_y_cur_pos(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_flange_z_cur_pos flange_y_cur_pos(::fairino_msgs::msg::RobotNonrtState::_flange_y_cur_pos_type arg)
  {
    msg_.flange_y_cur_pos = std::move(arg);
    return Init_RobotNonrtState_flange_z_cur_pos(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_flange_x_cur_pos
{
public:
  explicit Init_RobotNonrtState_flange_x_cur_pos(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_flange_y_cur_pos flange_x_cur_pos(::fairino_msgs::msg::RobotNonrtState::_flange_x_cur_pos_type arg)
  {
    msg_.flange_x_cur_pos = std::move(arg);
    return Init_RobotNonrtState_flange_y_cur_pos(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cart_c_cur_pos
{
public:
  explicit Init_RobotNonrtState_cart_c_cur_pos(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_flange_x_cur_pos cart_c_cur_pos(::fairino_msgs::msg::RobotNonrtState::_cart_c_cur_pos_type arg)
  {
    msg_.cart_c_cur_pos = std::move(arg);
    return Init_RobotNonrtState_flange_x_cur_pos(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cart_b_cur_pos
{
public:
  explicit Init_RobotNonrtState_cart_b_cur_pos(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cart_c_cur_pos cart_b_cur_pos(::fairino_msgs::msg::RobotNonrtState::_cart_b_cur_pos_type arg)
  {
    msg_.cart_b_cur_pos = std::move(arg);
    return Init_RobotNonrtState_cart_c_cur_pos(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cart_a_cur_pos
{
public:
  explicit Init_RobotNonrtState_cart_a_cur_pos(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cart_b_cur_pos cart_a_cur_pos(::fairino_msgs::msg::RobotNonrtState::_cart_a_cur_pos_type arg)
  {
    msg_.cart_a_cur_pos = std::move(arg);
    return Init_RobotNonrtState_cart_b_cur_pos(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cart_z_cur_pos
{
public:
  explicit Init_RobotNonrtState_cart_z_cur_pos(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cart_a_cur_pos cart_z_cur_pos(::fairino_msgs::msg::RobotNonrtState::_cart_z_cur_pos_type arg)
  {
    msg_.cart_z_cur_pos = std::move(arg);
    return Init_RobotNonrtState_cart_a_cur_pos(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cart_y_cur_pos
{
public:
  explicit Init_RobotNonrtState_cart_y_cur_pos(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cart_z_cur_pos cart_y_cur_pos(::fairino_msgs::msg::RobotNonrtState::_cart_y_cur_pos_type arg)
  {
    msg_.cart_y_cur_pos = std::move(arg);
    return Init_RobotNonrtState_cart_z_cur_pos(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_cart_x_cur_pos
{
public:
  explicit Init_RobotNonrtState_cart_x_cur_pos(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cart_y_cur_pos cart_x_cur_pos(::fairino_msgs::msg::RobotNonrtState::_cart_x_cur_pos_type arg)
  {
    msg_.cart_x_cur_pos = std::move(arg);
    return Init_RobotNonrtState_cart_y_cur_pos(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j6_cur_pos
{
public:
  explicit Init_RobotNonrtState_j6_cur_pos(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_cart_x_cur_pos j6_cur_pos(::fairino_msgs::msg::RobotNonrtState::_j6_cur_pos_type arg)
  {
    msg_.j6_cur_pos = std::move(arg);
    return Init_RobotNonrtState_cart_x_cur_pos(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j5_cur_pos
{
public:
  explicit Init_RobotNonrtState_j5_cur_pos(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j6_cur_pos j5_cur_pos(::fairino_msgs::msg::RobotNonrtState::_j5_cur_pos_type arg)
  {
    msg_.j5_cur_pos = std::move(arg);
    return Init_RobotNonrtState_j6_cur_pos(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j4_cur_pos
{
public:
  explicit Init_RobotNonrtState_j4_cur_pos(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j5_cur_pos j4_cur_pos(::fairino_msgs::msg::RobotNonrtState::_j4_cur_pos_type arg)
  {
    msg_.j4_cur_pos = std::move(arg);
    return Init_RobotNonrtState_j5_cur_pos(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j3_cur_pos
{
public:
  explicit Init_RobotNonrtState_j3_cur_pos(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j4_cur_pos j3_cur_pos(::fairino_msgs::msg::RobotNonrtState::_j3_cur_pos_type arg)
  {
    msg_.j3_cur_pos = std::move(arg);
    return Init_RobotNonrtState_j4_cur_pos(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j2_cur_pos
{
public:
  explicit Init_RobotNonrtState_j2_cur_pos(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j3_cur_pos j2_cur_pos(::fairino_msgs::msg::RobotNonrtState::_j2_cur_pos_type arg)
  {
    msg_.j2_cur_pos = std::move(arg);
    return Init_RobotNonrtState_j3_cur_pos(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_j1_cur_pos
{
public:
  explicit Init_RobotNonrtState_j1_cur_pos(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j2_cur_pos j1_cur_pos(::fairino_msgs::msg::RobotNonrtState::_j1_cur_pos_type arg)
  {
    msg_.j1_cur_pos = std::move(arg);
    return Init_RobotNonrtState_j2_cur_pos(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_robot_mode
{
public:
  explicit Init_RobotNonrtState_robot_mode(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_j1_cur_pos robot_mode(::fairino_msgs::msg::RobotNonrtState::_robot_mode_type arg)
  {
    msg_.robot_mode = std::move(arg);
    return Init_RobotNonrtState_j1_cur_pos(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_rbt_sub_code
{
public:
  explicit Init_RobotNonrtState_rbt_sub_code(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_robot_mode rbt_sub_code(::fairino_msgs::msg::RobotNonrtState::_rbt_sub_code_type arg)
  {
    msg_.rbt_sub_code = std::move(arg);
    return Init_RobotNonrtState_robot_mode(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_rbt_main_code
{
public:
  explicit Init_RobotNonrtState_rbt_main_code(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_rbt_sub_code rbt_main_code(::fairino_msgs::msg::RobotNonrtState::_rbt_main_code_type arg)
  {
    msg_.rbt_main_code = std::move(arg);
    return Init_RobotNonrtState_rbt_sub_code(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_rbt_state
{
public:
  explicit Init_RobotNonrtState_rbt_state(::fairino_msgs::msg::RobotNonrtState & msg)
  : msg_(msg)
  {}
  Init_RobotNonrtState_rbt_main_code rbt_state(::fairino_msgs::msg::RobotNonrtState::_rbt_state_type arg)
  {
    msg_.rbt_state = std::move(arg);
    return Init_RobotNonrtState_rbt_main_code(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

class Init_RobotNonrtState_prg_state
{
public:
  Init_RobotNonrtState_prg_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotNonrtState_rbt_state prg_state(::fairino_msgs::msg::RobotNonrtState::_prg_state_type arg)
  {
    msg_.prg_state = std::move(arg);
    return Init_RobotNonrtState_rbt_state(msg_);
  }

private:
  ::fairino_msgs::msg::RobotNonrtState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fairino_msgs::msg::RobotNonrtState>()
{
  return fairino_msgs::msg::builder::Init_RobotNonrtState_prg_state();
}

}  // namespace fairino_msgs

#endif  // FAIRINO_MSGS__MSG__DETAIL__ROBOT_NONRT_STATE__BUILDER_HPP_
