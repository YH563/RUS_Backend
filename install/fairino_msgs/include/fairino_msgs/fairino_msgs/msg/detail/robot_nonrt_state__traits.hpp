// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fairino_msgs:msg/RobotNonrtState.idl
// generated code does not contain a copyright notice

#ifndef FAIRINO_MSGS__MSG__DETAIL__ROBOT_NONRT_STATE__TRAITS_HPP_
#define FAIRINO_MSGS__MSG__DETAIL__ROBOT_NONRT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fairino_msgs/msg/detail/robot_nonrt_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace fairino_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotNonrtState & msg,
  std::ostream & out)
{
  out << "{";
  // member: prg_state
  {
    out << "prg_state: ";
    rosidl_generator_traits::value_to_yaml(msg.prg_state, out);
    out << ", ";
  }

  // member: rbt_state
  {
    out << "rbt_state: ";
    rosidl_generator_traits::value_to_yaml(msg.rbt_state, out);
    out << ", ";
  }

  // member: rbt_main_code
  {
    out << "rbt_main_code: ";
    rosidl_generator_traits::value_to_yaml(msg.rbt_main_code, out);
    out << ", ";
  }

  // member: rbt_sub_code
  {
    out << "rbt_sub_code: ";
    rosidl_generator_traits::value_to_yaml(msg.rbt_sub_code, out);
    out << ", ";
  }

  // member: robot_mode
  {
    out << "robot_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_mode, out);
    out << ", ";
  }

  // member: j1_cur_pos
  {
    out << "j1_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.j1_cur_pos, out);
    out << ", ";
  }

  // member: j2_cur_pos
  {
    out << "j2_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.j2_cur_pos, out);
    out << ", ";
  }

  // member: j3_cur_pos
  {
    out << "j3_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.j3_cur_pos, out);
    out << ", ";
  }

  // member: j4_cur_pos
  {
    out << "j4_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.j4_cur_pos, out);
    out << ", ";
  }

  // member: j5_cur_pos
  {
    out << "j5_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.j5_cur_pos, out);
    out << ", ";
  }

  // member: j6_cur_pos
  {
    out << "j6_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.j6_cur_pos, out);
    out << ", ";
  }

  // member: cart_x_cur_pos
  {
    out << "cart_x_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_x_cur_pos, out);
    out << ", ";
  }

  // member: cart_y_cur_pos
  {
    out << "cart_y_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_y_cur_pos, out);
    out << ", ";
  }

  // member: cart_z_cur_pos
  {
    out << "cart_z_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_z_cur_pos, out);
    out << ", ";
  }

  // member: cart_a_cur_pos
  {
    out << "cart_a_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_a_cur_pos, out);
    out << ", ";
  }

  // member: cart_b_cur_pos
  {
    out << "cart_b_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_b_cur_pos, out);
    out << ", ";
  }

  // member: cart_c_cur_pos
  {
    out << "cart_c_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_c_cur_pos, out);
    out << ", ";
  }

  // member: flange_x_cur_pos
  {
    out << "flange_x_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.flange_x_cur_pos, out);
    out << ", ";
  }

  // member: flange_y_cur_pos
  {
    out << "flange_y_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.flange_y_cur_pos, out);
    out << ", ";
  }

  // member: flange_z_cur_pos
  {
    out << "flange_z_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.flange_z_cur_pos, out);
    out << ", ";
  }

  // member: flange_a_cur_pos
  {
    out << "flange_a_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.flange_a_cur_pos, out);
    out << ", ";
  }

  // member: flange_b_cur_pos
  {
    out << "flange_b_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.flange_b_cur_pos, out);
    out << ", ";
  }

  // member: flange_c_cur_pos
  {
    out << "flange_c_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.flange_c_cur_pos, out);
    out << ", ";
  }

  // member: j1_actual_qd
  {
    out << "j1_actual_qd: ";
    rosidl_generator_traits::value_to_yaml(msg.j1_actual_qd, out);
    out << ", ";
  }

  // member: j2_actual_qd
  {
    out << "j2_actual_qd: ";
    rosidl_generator_traits::value_to_yaml(msg.j2_actual_qd, out);
    out << ", ";
  }

  // member: j3_actual_qd
  {
    out << "j3_actual_qd: ";
    rosidl_generator_traits::value_to_yaml(msg.j3_actual_qd, out);
    out << ", ";
  }

  // member: j4_actual_qd
  {
    out << "j4_actual_qd: ";
    rosidl_generator_traits::value_to_yaml(msg.j4_actual_qd, out);
    out << ", ";
  }

  // member: j5_actual_qd
  {
    out << "j5_actual_qd: ";
    rosidl_generator_traits::value_to_yaml(msg.j5_actual_qd, out);
    out << ", ";
  }

  // member: j6_actual_qd
  {
    out << "j6_actual_qd: ";
    rosidl_generator_traits::value_to_yaml(msg.j6_actual_qd, out);
    out << ", ";
  }

  // member: j1_actual_qdd
  {
    out << "j1_actual_qdd: ";
    rosidl_generator_traits::value_to_yaml(msg.j1_actual_qdd, out);
    out << ", ";
  }

  // member: j2_actual_qdd
  {
    out << "j2_actual_qdd: ";
    rosidl_generator_traits::value_to_yaml(msg.j2_actual_qdd, out);
    out << ", ";
  }

  // member: j3_actual_qdd
  {
    out << "j3_actual_qdd: ";
    rosidl_generator_traits::value_to_yaml(msg.j3_actual_qdd, out);
    out << ", ";
  }

  // member: j4_actual_qdd
  {
    out << "j4_actual_qdd: ";
    rosidl_generator_traits::value_to_yaml(msg.j4_actual_qdd, out);
    out << ", ";
  }

  // member: j5_actual_qdd
  {
    out << "j5_actual_qdd: ";
    rosidl_generator_traits::value_to_yaml(msg.j5_actual_qdd, out);
    out << ", ";
  }

  // member: j6_actual_qdd
  {
    out << "j6_actual_qdd: ";
    rosidl_generator_traits::value_to_yaml(msg.j6_actual_qdd, out);
    out << ", ";
  }

  // member: cart_lin_cmd_speed
  {
    out << "cart_lin_cmd_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_lin_cmd_speed, out);
    out << ", ";
  }

  // member: cart_rot_cmd_speed
  {
    out << "cart_rot_cmd_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_rot_cmd_speed, out);
    out << ", ";
  }

  // member: cart_x_cmd_speed
  {
    out << "cart_x_cmd_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_x_cmd_speed, out);
    out << ", ";
  }

  // member: cart_y_cmd_speed
  {
    out << "cart_y_cmd_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_y_cmd_speed, out);
    out << ", ";
  }

  // member: cart_z_cmd_speed
  {
    out << "cart_z_cmd_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_z_cmd_speed, out);
    out << ", ";
  }

  // member: cart_a_cmd_speed
  {
    out << "cart_a_cmd_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_a_cmd_speed, out);
    out << ", ";
  }

  // member: cart_b_cmd_speed
  {
    out << "cart_b_cmd_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_b_cmd_speed, out);
    out << ", ";
  }

  // member: cart_c_cmd_speed
  {
    out << "cart_c_cmd_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_c_cmd_speed, out);
    out << ", ";
  }

  // member: cart_lin_cur_speed
  {
    out << "cart_lin_cur_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_lin_cur_speed, out);
    out << ", ";
  }

  // member: cart_rot_cur_speed
  {
    out << "cart_rot_cur_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_rot_cur_speed, out);
    out << ", ";
  }

  // member: cart_x_cur_speed
  {
    out << "cart_x_cur_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_x_cur_speed, out);
    out << ", ";
  }

  // member: cart_y_cur_speed
  {
    out << "cart_y_cur_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_y_cur_speed, out);
    out << ", ";
  }

  // member: cart_z_cur_speed
  {
    out << "cart_z_cur_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_z_cur_speed, out);
    out << ", ";
  }

  // member: cart_a_cur_speed
  {
    out << "cart_a_cur_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_a_cur_speed, out);
    out << ", ";
  }

  // member: cart_b_cur_speed
  {
    out << "cart_b_cur_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_b_cur_speed, out);
    out << ", ";
  }

  // member: cart_c_cur_speed
  {
    out << "cart_c_cur_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_c_cur_speed, out);
    out << ", ";
  }

  // member: j1_cur_tor
  {
    out << "j1_cur_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.j1_cur_tor, out);
    out << ", ";
  }

  // member: j2_cur_tor
  {
    out << "j2_cur_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.j2_cur_tor, out);
    out << ", ";
  }

  // member: j3_cur_tor
  {
    out << "j3_cur_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.j3_cur_tor, out);
    out << ", ";
  }

  // member: j4_cur_tor
  {
    out << "j4_cur_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.j4_cur_tor, out);
    out << ", ";
  }

  // member: j5_cur_tor
  {
    out << "j5_cur_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.j5_cur_tor, out);
    out << ", ";
  }

  // member: j6_cur_tor
  {
    out << "j6_cur_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.j6_cur_tor, out);
    out << ", ";
  }

  // member: tool_num
  {
    out << "tool_num: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_num, out);
    out << ", ";
  }

  // member: work_num
  {
    out << "work_num: ";
    rosidl_generator_traits::value_to_yaml(msg.work_num, out);
    out << ", ";
  }

  // member: dgt_output_h
  {
    out << "dgt_output_h: ";
    rosidl_generator_traits::value_to_yaml(msg.dgt_output_h, out);
    out << ", ";
  }

  // member: dgt_output_l
  {
    out << "dgt_output_l: ";
    rosidl_generator_traits::value_to_yaml(msg.dgt_output_l, out);
    out << ", ";
  }

  // member: tl_dgt_output_l
  {
    out << "tl_dgt_output_l: ";
    rosidl_generator_traits::value_to_yaml(msg.tl_dgt_output_l, out);
    out << ", ";
  }

  // member: dgt_input_h
  {
    out << "dgt_input_h: ";
    rosidl_generator_traits::value_to_yaml(msg.dgt_input_h, out);
    out << ", ";
  }

  // member: dgt_input_l
  {
    out << "dgt_input_l: ";
    rosidl_generator_traits::value_to_yaml(msg.dgt_input_l, out);
    out << ", ";
  }

  // member: tl_dgt_input_l
  {
    out << "tl_dgt_input_l: ";
    rosidl_generator_traits::value_to_yaml(msg.tl_dgt_input_l, out);
    out << ", ";
  }

  // member: cl_analog_input_1
  {
    out << "cl_analog_input_1: ";
    rosidl_generator_traits::value_to_yaml(msg.cl_analog_input_1, out);
    out << ", ";
  }

  // member: cl_analog_input_2
  {
    out << "cl_analog_input_2: ";
    rosidl_generator_traits::value_to_yaml(msg.cl_analog_input_2, out);
    out << ", ";
  }

  // member: tl_anglog_input
  {
    out << "tl_anglog_input: ";
    rosidl_generator_traits::value_to_yaml(msg.tl_anglog_input, out);
    out << ", ";
  }

  // member: ft_fx_raw_data
  {
    out << "ft_fx_raw_data: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_fx_raw_data, out);
    out << ", ";
  }

  // member: ft_fy_raw_data
  {
    out << "ft_fy_raw_data: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_fy_raw_data, out);
    out << ", ";
  }

  // member: ft_fz_raw_data
  {
    out << "ft_fz_raw_data: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_fz_raw_data, out);
    out << ", ";
  }

  // member: ft_tx_raw_data
  {
    out << "ft_tx_raw_data: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_tx_raw_data, out);
    out << ", ";
  }

  // member: ft_ty_raw_data
  {
    out << "ft_ty_raw_data: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_ty_raw_data, out);
    out << ", ";
  }

  // member: ft_tz_raw_data
  {
    out << "ft_tz_raw_data: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_tz_raw_data, out);
    out << ", ";
  }

  // member: ft_fx_data
  {
    out << "ft_fx_data: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_fx_data, out);
    out << ", ";
  }

  // member: ft_fy_data
  {
    out << "ft_fy_data: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_fy_data, out);
    out << ", ";
  }

  // member: ft_fz_data
  {
    out << "ft_fz_data: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_fz_data, out);
    out << ", ";
  }

  // member: ft_tx_data
  {
    out << "ft_tx_data: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_tx_data, out);
    out << ", ";
  }

  // member: ft_ty_data
  {
    out << "ft_ty_data: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_ty_data, out);
    out << ", ";
  }

  // member: ft_tz_data
  {
    out << "ft_tz_data: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_tz_data, out);
    out << ", ";
  }

  // member: ft_actstatus
  {
    out << "ft_actstatus: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_actstatus, out);
    out << ", ";
  }

  // member: emg
  {
    out << "emg: ";
    rosidl_generator_traits::value_to_yaml(msg.emg, out);
    out << ", ";
  }

  // member: motion_done
  {
    out << "motion_done: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_done, out);
    out << ", ";
  }

  // member: grip_motion_done
  {
    out << "grip_motion_done: ";
    rosidl_generator_traits::value_to_yaml(msg.grip_motion_done, out);
    out << ", ";
  }

  // member: mc_queue_len
  {
    out << "mc_queue_len: ";
    rosidl_generator_traits::value_to_yaml(msg.mc_queue_len, out);
    out << ", ";
  }

  // member: collision_err
  {
    out << "collision_err: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_err, out);
    out << ", ";
  }

  // member: trajectory_pnum
  {
    out << "trajectory_pnum: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_pnum, out);
    out << ", ";
  }

  // member: safety_stop1_state
  {
    out << "safety_stop1_state: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_stop1_state, out);
    out << ", ";
  }

  // member: safety_stop2_state
  {
    out << "safety_stop2_state: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_stop2_state, out);
    out << ", ";
  }

  // member: gripper_fault_id
  {
    out << "gripper_fault_id: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_fault_id, out);
    out << ", ";
  }

  // member: grippererro
  {
    out << "grippererro: ";
    rosidl_generator_traits::value_to_yaml(msg.grippererro, out);
    out << ", ";
  }

  // member: gripper_active
  {
    out << "gripper_active: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_active, out);
    out << ", ";
  }

  // member: gripper_position
  {
    out << "gripper_position: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_position, out);
    out << ", ";
  }

  // member: gripper_speed
  {
    out << "gripper_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_speed, out);
    out << ", ";
  }

  // member: gripper_current
  {
    out << "gripper_current: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_current, out);
    out << ", ";
  }

  // member: gripper_temp
  {
    out << "gripper_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_temp, out);
    out << ", ";
  }

  // member: gripper_voltage
  {
    out << "gripper_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_voltage, out);
    out << ", ";
  }

  // member: aux_servo_id
  {
    out << "aux_servo_id: ";
    rosidl_generator_traits::value_to_yaml(msg.aux_servo_id, out);
    out << ", ";
  }

  // member: aux_servo_err
  {
    out << "aux_servo_err: ";
    rosidl_generator_traits::value_to_yaml(msg.aux_servo_err, out);
    out << ", ";
  }

  // member: aux_servo_state
  {
    out << "aux_servo_state: ";
    rosidl_generator_traits::value_to_yaml(msg.aux_servo_state, out);
    out << ", ";
  }

  // member: aux_servo_pos
  {
    out << "aux_servo_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.aux_servo_pos, out);
    out << ", ";
  }

  // member: aux_servo_vel
  {
    out << "aux_servo_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.aux_servo_vel, out);
    out << ", ";
  }

  // member: aux_servo_torque
  {
    out << "aux_servo_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.aux_servo_torque, out);
    out << ", ";
  }

  // member: ext_di_state_1
  {
    out << "ext_di_state_1: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_di_state_1, out);
    out << ", ";
  }

  // member: ext_di_state_2
  {
    out << "ext_di_state_2: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_di_state_2, out);
    out << ", ";
  }

  // member: ext_di_state_3
  {
    out << "ext_di_state_3: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_di_state_3, out);
    out << ", ";
  }

  // member: ext_di_state_4
  {
    out << "ext_di_state_4: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_di_state_4, out);
    out << ", ";
  }

  // member: ext_di_state_5
  {
    out << "ext_di_state_5: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_di_state_5, out);
    out << ", ";
  }

  // member: ext_di_state_6
  {
    out << "ext_di_state_6: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_di_state_6, out);
    out << ", ";
  }

  // member: ext_di_state_7
  {
    out << "ext_di_state_7: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_di_state_7, out);
    out << ", ";
  }

  // member: ext_di_state_8
  {
    out << "ext_di_state_8: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_di_state_8, out);
    out << ", ";
  }

  // member: ext_do_state_1
  {
    out << "ext_do_state_1: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_do_state_1, out);
    out << ", ";
  }

  // member: ext_do_state_2
  {
    out << "ext_do_state_2: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_do_state_2, out);
    out << ", ";
  }

  // member: ext_do_state_3
  {
    out << "ext_do_state_3: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_do_state_3, out);
    out << ", ";
  }

  // member: ext_do_state_4
  {
    out << "ext_do_state_4: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_do_state_4, out);
    out << ", ";
  }

  // member: ext_do_state_5
  {
    out << "ext_do_state_5: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_do_state_5, out);
    out << ", ";
  }

  // member: ext_do_state_6
  {
    out << "ext_do_state_6: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_do_state_6, out);
    out << ", ";
  }

  // member: ext_do_state_7
  {
    out << "ext_do_state_7: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_do_state_7, out);
    out << ", ";
  }

  // member: ext_do_state_8
  {
    out << "ext_do_state_8: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_do_state_8, out);
    out << ", ";
  }

  // member: ext_ai_state_1
  {
    out << "ext_ai_state_1: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_ai_state_1, out);
    out << ", ";
  }

  // member: ext_ai_state_2
  {
    out << "ext_ai_state_2: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_ai_state_2, out);
    out << ", ";
  }

  // member: ext_ai_state_3
  {
    out << "ext_ai_state_3: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_ai_state_3, out);
    out << ", ";
  }

  // member: ext_ai_state_4
  {
    out << "ext_ai_state_4: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_ai_state_4, out);
    out << ", ";
  }

  // member: ext_ao_state_1
  {
    out << "ext_ao_state_1: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_ao_state_1, out);
    out << ", ";
  }

  // member: ext_ao_state_2
  {
    out << "ext_ao_state_2: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_ao_state_2, out);
    out << ", ";
  }

  // member: ext_ao_state_3
  {
    out << "ext_ao_state_3: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_ao_state_3, out);
    out << ", ";
  }

  // member: ext_ao_state_4
  {
    out << "ext_ao_state_4: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_ao_state_4, out);
    out << ", ";
  }

  // member: rbt_enable_state
  {
    out << "rbt_enable_state: ";
    rosidl_generator_traits::value_to_yaml(msg.rbt_enable_state, out);
    out << ", ";
  }

  // member: end_lua_err_code
  {
    out << "end_lua_err_code: ";
    rosidl_generator_traits::value_to_yaml(msg.end_lua_err_code, out);
    out << ", ";
  }

  // member: cl_analog_output_1
  {
    out << "cl_analog_output_1: ";
    rosidl_generator_traits::value_to_yaml(msg.cl_analog_output_1, out);
    out << ", ";
  }

  // member: cl_analog_output_2
  {
    out << "cl_analog_output_2: ";
    rosidl_generator_traits::value_to_yaml(msg.cl_analog_output_2, out);
    out << ", ";
  }

  // member: tl_analog_output
  {
    out << "tl_analog_output: ";
    rosidl_generator_traits::value_to_yaml(msg.tl_analog_output, out);
    out << ", ";
  }

  // member: gripper_rot_num
  {
    out << "gripper_rot_num: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_rot_num, out);
    out << ", ";
  }

  // member: gripper_rot_speed
  {
    out << "gripper_rot_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_rot_speed, out);
    out << ", ";
  }

  // member: gripper_rot_torque
  {
    out << "gripper_rot_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_rot_torque, out);
    out << ", ";
  }

  // member: weldbreakoffstate
  {
    out << "weldbreakoffstate: ";
    rosidl_generator_traits::value_to_yaml(msg.weldbreakoffstate, out);
    out << ", ";
  }

  // member: weldarcstate
  {
    out << "weldarcstate: ";
    rosidl_generator_traits::value_to_yaml(msg.weldarcstate, out);
    out << ", ";
  }

  // member: j1_tgt_tor
  {
    out << "j1_tgt_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.j1_tgt_tor, out);
    out << ", ";
  }

  // member: j2_tgt_tor
  {
    out << "j2_tgt_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.j2_tgt_tor, out);
    out << ", ";
  }

  // member: j3_tgt_tor
  {
    out << "j3_tgt_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.j3_tgt_tor, out);
    out << ", ";
  }

  // member: j4_tgt_tor
  {
    out << "j4_tgt_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.j4_tgt_tor, out);
    out << ", ";
  }

  // member: j5_tgt_tor
  {
    out << "j5_tgt_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.j5_tgt_tor, out);
    out << ", ";
  }

  // member: j6_tgt_tor
  {
    out << "j6_tgt_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.j6_tgt_tor, out);
    out << ", ";
  }

  // member: jwide_voltage_ctrl_box_temp
  {
    out << "jwide_voltage_ctrl_box_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.jwide_voltage_ctrl_box_temp, out);
    out << ", ";
  }

  // member: wide_voltage_ctrl_box_fan_current
  {
    out << "wide_voltage_ctrl_box_fan_current: ";
    rosidl_generator_traits::value_to_yaml(msg.wide_voltage_ctrl_box_fan_current, out);
    out << ", ";
  }

  // member: tool_coord_x
  {
    out << "tool_coord_x: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_coord_x, out);
    out << ", ";
  }

  // member: tool_coord_y
  {
    out << "tool_coord_y: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_coord_y, out);
    out << ", ";
  }

  // member: tool_coord_z
  {
    out << "tool_coord_z: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_coord_z, out);
    out << ", ";
  }

  // member: tool_coord_a
  {
    out << "tool_coord_a: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_coord_a, out);
    out << ", ";
  }

  // member: tool_coord_b
  {
    out << "tool_coord_b: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_coord_b, out);
    out << ", ";
  }

  // member: tool_coord_c
  {
    out << "tool_coord_c: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_coord_c, out);
    out << ", ";
  }

  // member: wobj_coord_x
  {
    out << "wobj_coord_x: ";
    rosidl_generator_traits::value_to_yaml(msg.wobj_coord_x, out);
    out << ", ";
  }

  // member: wobj_coord_y
  {
    out << "wobj_coord_y: ";
    rosidl_generator_traits::value_to_yaml(msg.wobj_coord_y, out);
    out << ", ";
  }

  // member: wobj_coord_z
  {
    out << "wobj_coord_z: ";
    rosidl_generator_traits::value_to_yaml(msg.wobj_coord_z, out);
    out << ", ";
  }

  // member: wobj_coord_a
  {
    out << "wobj_coord_a: ";
    rosidl_generator_traits::value_to_yaml(msg.wobj_coord_a, out);
    out << ", ";
  }

  // member: wobj_coord_b
  {
    out << "wobj_coord_b: ";
    rosidl_generator_traits::value_to_yaml(msg.wobj_coord_b, out);
    out << ", ";
  }

  // member: wobj_coord_c
  {
    out << "wobj_coord_c: ";
    rosidl_generator_traits::value_to_yaml(msg.wobj_coord_c, out);
    out << ", ";
  }

  // member: ex_tool_coord_x
  {
    out << "ex_tool_coord_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ex_tool_coord_x, out);
    out << ", ";
  }

  // member: ex_tool_coord_y
  {
    out << "ex_tool_coord_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ex_tool_coord_y, out);
    out << ", ";
  }

  // member: ex_tool_coord_z
  {
    out << "ex_tool_coord_z: ";
    rosidl_generator_traits::value_to_yaml(msg.ex_tool_coord_z, out);
    out << ", ";
  }

  // member: ex_tool_coord_a
  {
    out << "ex_tool_coord_a: ";
    rosidl_generator_traits::value_to_yaml(msg.ex_tool_coord_a, out);
    out << ", ";
  }

  // member: ex_tool_coord_b
  {
    out << "ex_tool_coord_b: ";
    rosidl_generator_traits::value_to_yaml(msg.ex_tool_coord_b, out);
    out << ", ";
  }

  // member: ex_tool_coord_c
  {
    out << "ex_tool_coord_c: ";
    rosidl_generator_traits::value_to_yaml(msg.ex_tool_coord_c, out);
    out << ", ";
  }

  // member: ex_axis_coord_x
  {
    out << "ex_axis_coord_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ex_axis_coord_x, out);
    out << ", ";
  }

  // member: ex_axis_coord_y
  {
    out << "ex_axis_coord_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ex_axis_coord_y, out);
    out << ", ";
  }

  // member: ex_axis_coord_z
  {
    out << "ex_axis_coord_z: ";
    rosidl_generator_traits::value_to_yaml(msg.ex_axis_coord_z, out);
    out << ", ";
  }

  // member: ex_axis_coord_a
  {
    out << "ex_axis_coord_a: ";
    rosidl_generator_traits::value_to_yaml(msg.ex_axis_coord_a, out);
    out << ", ";
  }

  // member: ex_axis_coord_b
  {
    out << "ex_axis_coord_b: ";
    rosidl_generator_traits::value_to_yaml(msg.ex_axis_coord_b, out);
    out << ", ";
  }

  // member: ex_axis_coord_c
  {
    out << "ex_axis_coord_c: ";
    rosidl_generator_traits::value_to_yaml(msg.ex_axis_coord_c, out);
    out << ", ";
  }

  // member: load
  {
    out << "load: ";
    rosidl_generator_traits::value_to_yaml(msg.load, out);
    out << ", ";
  }

  // member: load_cog_x
  {
    out << "load_cog_x: ";
    rosidl_generator_traits::value_to_yaml(msg.load_cog_x, out);
    out << ", ";
  }

  // member: load_cog_y
  {
    out << "load_cog_y: ";
    rosidl_generator_traits::value_to_yaml(msg.load_cog_y, out);
    out << ", ";
  }

  // member: load_cog_z
  {
    out << "load_cog_z: ";
    rosidl_generator_traits::value_to_yaml(msg.load_cog_z, out);
    out << ", ";
  }

  // member: j1_last_servoj_target
  {
    out << "j1_last_servoj_target: ";
    rosidl_generator_traits::value_to_yaml(msg.j1_last_servoj_target, out);
    out << ", ";
  }

  // member: j2_last_servoj_target
  {
    out << "j2_last_servoj_target: ";
    rosidl_generator_traits::value_to_yaml(msg.j2_last_servoj_target, out);
    out << ", ";
  }

  // member: j3_last_servoj_target
  {
    out << "j3_last_servoj_target: ";
    rosidl_generator_traits::value_to_yaml(msg.j3_last_servoj_target, out);
    out << ", ";
  }

  // member: j4_last_servoj_target
  {
    out << "j4_last_servoj_target: ";
    rosidl_generator_traits::value_to_yaml(msg.j4_last_servoj_target, out);
    out << ", ";
  }

  // member: j5_last_servoj_target
  {
    out << "j5_last_servoj_target: ";
    rosidl_generator_traits::value_to_yaml(msg.j5_last_servoj_target, out);
    out << ", ";
  }

  // member: j6_last_servoj_target
  {
    out << "j6_last_servoj_target: ";
    rosidl_generator_traits::value_to_yaml(msg.j6_last_servoj_target, out);
    out << ", ";
  }

  // member: servoj_cmd_num
  {
    out << "servoj_cmd_num: ";
    rosidl_generator_traits::value_to_yaml(msg.servoj_cmd_num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotNonrtState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: prg_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prg_state: ";
    rosidl_generator_traits::value_to_yaml(msg.prg_state, out);
    out << "\n";
  }

  // member: rbt_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rbt_state: ";
    rosidl_generator_traits::value_to_yaml(msg.rbt_state, out);
    out << "\n";
  }

  // member: rbt_main_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rbt_main_code: ";
    rosidl_generator_traits::value_to_yaml(msg.rbt_main_code, out);
    out << "\n";
  }

  // member: rbt_sub_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rbt_sub_code: ";
    rosidl_generator_traits::value_to_yaml(msg.rbt_sub_code, out);
    out << "\n";
  }

  // member: robot_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_mode, out);
    out << "\n";
  }

  // member: j1_cur_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j1_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.j1_cur_pos, out);
    out << "\n";
  }

  // member: j2_cur_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j2_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.j2_cur_pos, out);
    out << "\n";
  }

  // member: j3_cur_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j3_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.j3_cur_pos, out);
    out << "\n";
  }

  // member: j4_cur_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j4_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.j4_cur_pos, out);
    out << "\n";
  }

  // member: j5_cur_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j5_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.j5_cur_pos, out);
    out << "\n";
  }

  // member: j6_cur_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j6_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.j6_cur_pos, out);
    out << "\n";
  }

  // member: cart_x_cur_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cart_x_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_x_cur_pos, out);
    out << "\n";
  }

  // member: cart_y_cur_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cart_y_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_y_cur_pos, out);
    out << "\n";
  }

  // member: cart_z_cur_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cart_z_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_z_cur_pos, out);
    out << "\n";
  }

  // member: cart_a_cur_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cart_a_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_a_cur_pos, out);
    out << "\n";
  }

  // member: cart_b_cur_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cart_b_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_b_cur_pos, out);
    out << "\n";
  }

  // member: cart_c_cur_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cart_c_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_c_cur_pos, out);
    out << "\n";
  }

  // member: flange_x_cur_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flange_x_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.flange_x_cur_pos, out);
    out << "\n";
  }

  // member: flange_y_cur_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flange_y_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.flange_y_cur_pos, out);
    out << "\n";
  }

  // member: flange_z_cur_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flange_z_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.flange_z_cur_pos, out);
    out << "\n";
  }

  // member: flange_a_cur_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flange_a_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.flange_a_cur_pos, out);
    out << "\n";
  }

  // member: flange_b_cur_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flange_b_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.flange_b_cur_pos, out);
    out << "\n";
  }

  // member: flange_c_cur_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flange_c_cur_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.flange_c_cur_pos, out);
    out << "\n";
  }

  // member: j1_actual_qd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j1_actual_qd: ";
    rosidl_generator_traits::value_to_yaml(msg.j1_actual_qd, out);
    out << "\n";
  }

  // member: j2_actual_qd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j2_actual_qd: ";
    rosidl_generator_traits::value_to_yaml(msg.j2_actual_qd, out);
    out << "\n";
  }

  // member: j3_actual_qd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j3_actual_qd: ";
    rosidl_generator_traits::value_to_yaml(msg.j3_actual_qd, out);
    out << "\n";
  }

  // member: j4_actual_qd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j4_actual_qd: ";
    rosidl_generator_traits::value_to_yaml(msg.j4_actual_qd, out);
    out << "\n";
  }

  // member: j5_actual_qd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j5_actual_qd: ";
    rosidl_generator_traits::value_to_yaml(msg.j5_actual_qd, out);
    out << "\n";
  }

  // member: j6_actual_qd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j6_actual_qd: ";
    rosidl_generator_traits::value_to_yaml(msg.j6_actual_qd, out);
    out << "\n";
  }

  // member: j1_actual_qdd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j1_actual_qdd: ";
    rosidl_generator_traits::value_to_yaml(msg.j1_actual_qdd, out);
    out << "\n";
  }

  // member: j2_actual_qdd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j2_actual_qdd: ";
    rosidl_generator_traits::value_to_yaml(msg.j2_actual_qdd, out);
    out << "\n";
  }

  // member: j3_actual_qdd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j3_actual_qdd: ";
    rosidl_generator_traits::value_to_yaml(msg.j3_actual_qdd, out);
    out << "\n";
  }

  // member: j4_actual_qdd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j4_actual_qdd: ";
    rosidl_generator_traits::value_to_yaml(msg.j4_actual_qdd, out);
    out << "\n";
  }

  // member: j5_actual_qdd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j5_actual_qdd: ";
    rosidl_generator_traits::value_to_yaml(msg.j5_actual_qdd, out);
    out << "\n";
  }

  // member: j6_actual_qdd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j6_actual_qdd: ";
    rosidl_generator_traits::value_to_yaml(msg.j6_actual_qdd, out);
    out << "\n";
  }

  // member: cart_lin_cmd_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cart_lin_cmd_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_lin_cmd_speed, out);
    out << "\n";
  }

  // member: cart_rot_cmd_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cart_rot_cmd_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_rot_cmd_speed, out);
    out << "\n";
  }

  // member: cart_x_cmd_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cart_x_cmd_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_x_cmd_speed, out);
    out << "\n";
  }

  // member: cart_y_cmd_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cart_y_cmd_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_y_cmd_speed, out);
    out << "\n";
  }

  // member: cart_z_cmd_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cart_z_cmd_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_z_cmd_speed, out);
    out << "\n";
  }

  // member: cart_a_cmd_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cart_a_cmd_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_a_cmd_speed, out);
    out << "\n";
  }

  // member: cart_b_cmd_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cart_b_cmd_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_b_cmd_speed, out);
    out << "\n";
  }

  // member: cart_c_cmd_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cart_c_cmd_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_c_cmd_speed, out);
    out << "\n";
  }

  // member: cart_lin_cur_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cart_lin_cur_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_lin_cur_speed, out);
    out << "\n";
  }

  // member: cart_rot_cur_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cart_rot_cur_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_rot_cur_speed, out);
    out << "\n";
  }

  // member: cart_x_cur_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cart_x_cur_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_x_cur_speed, out);
    out << "\n";
  }

  // member: cart_y_cur_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cart_y_cur_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_y_cur_speed, out);
    out << "\n";
  }

  // member: cart_z_cur_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cart_z_cur_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_z_cur_speed, out);
    out << "\n";
  }

  // member: cart_a_cur_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cart_a_cur_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_a_cur_speed, out);
    out << "\n";
  }

  // member: cart_b_cur_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cart_b_cur_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_b_cur_speed, out);
    out << "\n";
  }

  // member: cart_c_cur_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cart_c_cur_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_c_cur_speed, out);
    out << "\n";
  }

  // member: j1_cur_tor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j1_cur_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.j1_cur_tor, out);
    out << "\n";
  }

  // member: j2_cur_tor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j2_cur_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.j2_cur_tor, out);
    out << "\n";
  }

  // member: j3_cur_tor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j3_cur_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.j3_cur_tor, out);
    out << "\n";
  }

  // member: j4_cur_tor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j4_cur_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.j4_cur_tor, out);
    out << "\n";
  }

  // member: j5_cur_tor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j5_cur_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.j5_cur_tor, out);
    out << "\n";
  }

  // member: j6_cur_tor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j6_cur_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.j6_cur_tor, out);
    out << "\n";
  }

  // member: tool_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tool_num: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_num, out);
    out << "\n";
  }

  // member: work_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "work_num: ";
    rosidl_generator_traits::value_to_yaml(msg.work_num, out);
    out << "\n";
  }

  // member: dgt_output_h
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dgt_output_h: ";
    rosidl_generator_traits::value_to_yaml(msg.dgt_output_h, out);
    out << "\n";
  }

  // member: dgt_output_l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dgt_output_l: ";
    rosidl_generator_traits::value_to_yaml(msg.dgt_output_l, out);
    out << "\n";
  }

  // member: tl_dgt_output_l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tl_dgt_output_l: ";
    rosidl_generator_traits::value_to_yaml(msg.tl_dgt_output_l, out);
    out << "\n";
  }

  // member: dgt_input_h
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dgt_input_h: ";
    rosidl_generator_traits::value_to_yaml(msg.dgt_input_h, out);
    out << "\n";
  }

  // member: dgt_input_l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dgt_input_l: ";
    rosidl_generator_traits::value_to_yaml(msg.dgt_input_l, out);
    out << "\n";
  }

  // member: tl_dgt_input_l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tl_dgt_input_l: ";
    rosidl_generator_traits::value_to_yaml(msg.tl_dgt_input_l, out);
    out << "\n";
  }

  // member: cl_analog_input_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cl_analog_input_1: ";
    rosidl_generator_traits::value_to_yaml(msg.cl_analog_input_1, out);
    out << "\n";
  }

  // member: cl_analog_input_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cl_analog_input_2: ";
    rosidl_generator_traits::value_to_yaml(msg.cl_analog_input_2, out);
    out << "\n";
  }

  // member: tl_anglog_input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tl_anglog_input: ";
    rosidl_generator_traits::value_to_yaml(msg.tl_anglog_input, out);
    out << "\n";
  }

  // member: ft_fx_raw_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ft_fx_raw_data: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_fx_raw_data, out);
    out << "\n";
  }

  // member: ft_fy_raw_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ft_fy_raw_data: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_fy_raw_data, out);
    out << "\n";
  }

  // member: ft_fz_raw_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ft_fz_raw_data: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_fz_raw_data, out);
    out << "\n";
  }

  // member: ft_tx_raw_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ft_tx_raw_data: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_tx_raw_data, out);
    out << "\n";
  }

  // member: ft_ty_raw_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ft_ty_raw_data: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_ty_raw_data, out);
    out << "\n";
  }

  // member: ft_tz_raw_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ft_tz_raw_data: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_tz_raw_data, out);
    out << "\n";
  }

  // member: ft_fx_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ft_fx_data: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_fx_data, out);
    out << "\n";
  }

  // member: ft_fy_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ft_fy_data: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_fy_data, out);
    out << "\n";
  }

  // member: ft_fz_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ft_fz_data: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_fz_data, out);
    out << "\n";
  }

  // member: ft_tx_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ft_tx_data: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_tx_data, out);
    out << "\n";
  }

  // member: ft_ty_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ft_ty_data: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_ty_data, out);
    out << "\n";
  }

  // member: ft_tz_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ft_tz_data: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_tz_data, out);
    out << "\n";
  }

  // member: ft_actstatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ft_actstatus: ";
    rosidl_generator_traits::value_to_yaml(msg.ft_actstatus, out);
    out << "\n";
  }

  // member: emg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emg: ";
    rosidl_generator_traits::value_to_yaml(msg.emg, out);
    out << "\n";
  }

  // member: motion_done
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_done: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_done, out);
    out << "\n";
  }

  // member: grip_motion_done
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grip_motion_done: ";
    rosidl_generator_traits::value_to_yaml(msg.grip_motion_done, out);
    out << "\n";
  }

  // member: mc_queue_len
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mc_queue_len: ";
    rosidl_generator_traits::value_to_yaml(msg.mc_queue_len, out);
    out << "\n";
  }

  // member: collision_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_err: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_err, out);
    out << "\n";
  }

  // member: trajectory_pnum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_pnum: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_pnum, out);
    out << "\n";
  }

  // member: safety_stop1_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_stop1_state: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_stop1_state, out);
    out << "\n";
  }

  // member: safety_stop2_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_stop2_state: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_stop2_state, out);
    out << "\n";
  }

  // member: gripper_fault_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_fault_id: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_fault_id, out);
    out << "\n";
  }

  // member: grippererro
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grippererro: ";
    rosidl_generator_traits::value_to_yaml(msg.grippererro, out);
    out << "\n";
  }

  // member: gripper_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_active: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_active, out);
    out << "\n";
  }

  // member: gripper_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_position: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_position, out);
    out << "\n";
  }

  // member: gripper_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_speed, out);
    out << "\n";
  }

  // member: gripper_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_current: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_current, out);
    out << "\n";
  }

  // member: gripper_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_temp, out);
    out << "\n";
  }

  // member: gripper_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_voltage, out);
    out << "\n";
  }

  // member: aux_servo_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux_servo_id: ";
    rosidl_generator_traits::value_to_yaml(msg.aux_servo_id, out);
    out << "\n";
  }

  // member: aux_servo_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux_servo_err: ";
    rosidl_generator_traits::value_to_yaml(msg.aux_servo_err, out);
    out << "\n";
  }

  // member: aux_servo_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux_servo_state: ";
    rosidl_generator_traits::value_to_yaml(msg.aux_servo_state, out);
    out << "\n";
  }

  // member: aux_servo_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux_servo_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.aux_servo_pos, out);
    out << "\n";
  }

  // member: aux_servo_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux_servo_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.aux_servo_vel, out);
    out << "\n";
  }

  // member: aux_servo_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux_servo_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.aux_servo_torque, out);
    out << "\n";
  }

  // member: ext_di_state_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_di_state_1: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_di_state_1, out);
    out << "\n";
  }

  // member: ext_di_state_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_di_state_2: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_di_state_2, out);
    out << "\n";
  }

  // member: ext_di_state_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_di_state_3: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_di_state_3, out);
    out << "\n";
  }

  // member: ext_di_state_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_di_state_4: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_di_state_4, out);
    out << "\n";
  }

  // member: ext_di_state_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_di_state_5: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_di_state_5, out);
    out << "\n";
  }

  // member: ext_di_state_6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_di_state_6: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_di_state_6, out);
    out << "\n";
  }

  // member: ext_di_state_7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_di_state_7: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_di_state_7, out);
    out << "\n";
  }

  // member: ext_di_state_8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_di_state_8: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_di_state_8, out);
    out << "\n";
  }

  // member: ext_do_state_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_do_state_1: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_do_state_1, out);
    out << "\n";
  }

  // member: ext_do_state_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_do_state_2: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_do_state_2, out);
    out << "\n";
  }

  // member: ext_do_state_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_do_state_3: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_do_state_3, out);
    out << "\n";
  }

  // member: ext_do_state_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_do_state_4: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_do_state_4, out);
    out << "\n";
  }

  // member: ext_do_state_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_do_state_5: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_do_state_5, out);
    out << "\n";
  }

  // member: ext_do_state_6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_do_state_6: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_do_state_6, out);
    out << "\n";
  }

  // member: ext_do_state_7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_do_state_7: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_do_state_7, out);
    out << "\n";
  }

  // member: ext_do_state_8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_do_state_8: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_do_state_8, out);
    out << "\n";
  }

  // member: ext_ai_state_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_ai_state_1: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_ai_state_1, out);
    out << "\n";
  }

  // member: ext_ai_state_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_ai_state_2: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_ai_state_2, out);
    out << "\n";
  }

  // member: ext_ai_state_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_ai_state_3: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_ai_state_3, out);
    out << "\n";
  }

  // member: ext_ai_state_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_ai_state_4: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_ai_state_4, out);
    out << "\n";
  }

  // member: ext_ao_state_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_ao_state_1: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_ao_state_1, out);
    out << "\n";
  }

  // member: ext_ao_state_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_ao_state_2: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_ao_state_2, out);
    out << "\n";
  }

  // member: ext_ao_state_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_ao_state_3: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_ao_state_3, out);
    out << "\n";
  }

  // member: ext_ao_state_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_ao_state_4: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_ao_state_4, out);
    out << "\n";
  }

  // member: rbt_enable_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rbt_enable_state: ";
    rosidl_generator_traits::value_to_yaml(msg.rbt_enable_state, out);
    out << "\n";
  }

  // member: end_lua_err_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_lua_err_code: ";
    rosidl_generator_traits::value_to_yaml(msg.end_lua_err_code, out);
    out << "\n";
  }

  // member: cl_analog_output_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cl_analog_output_1: ";
    rosidl_generator_traits::value_to_yaml(msg.cl_analog_output_1, out);
    out << "\n";
  }

  // member: cl_analog_output_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cl_analog_output_2: ";
    rosidl_generator_traits::value_to_yaml(msg.cl_analog_output_2, out);
    out << "\n";
  }

  // member: tl_analog_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tl_analog_output: ";
    rosidl_generator_traits::value_to_yaml(msg.tl_analog_output, out);
    out << "\n";
  }

  // member: gripper_rot_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_rot_num: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_rot_num, out);
    out << "\n";
  }

  // member: gripper_rot_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_rot_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_rot_speed, out);
    out << "\n";
  }

  // member: gripper_rot_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_rot_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_rot_torque, out);
    out << "\n";
  }

  // member: weldbreakoffstate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "weldbreakoffstate: ";
    rosidl_generator_traits::value_to_yaml(msg.weldbreakoffstate, out);
    out << "\n";
  }

  // member: weldarcstate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "weldarcstate: ";
    rosidl_generator_traits::value_to_yaml(msg.weldarcstate, out);
    out << "\n";
  }

  // member: j1_tgt_tor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j1_tgt_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.j1_tgt_tor, out);
    out << "\n";
  }

  // member: j2_tgt_tor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j2_tgt_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.j2_tgt_tor, out);
    out << "\n";
  }

  // member: j3_tgt_tor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j3_tgt_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.j3_tgt_tor, out);
    out << "\n";
  }

  // member: j4_tgt_tor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j4_tgt_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.j4_tgt_tor, out);
    out << "\n";
  }

  // member: j5_tgt_tor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j5_tgt_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.j5_tgt_tor, out);
    out << "\n";
  }

  // member: j6_tgt_tor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j6_tgt_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.j6_tgt_tor, out);
    out << "\n";
  }

  // member: jwide_voltage_ctrl_box_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "jwide_voltage_ctrl_box_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.jwide_voltage_ctrl_box_temp, out);
    out << "\n";
  }

  // member: wide_voltage_ctrl_box_fan_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wide_voltage_ctrl_box_fan_current: ";
    rosidl_generator_traits::value_to_yaml(msg.wide_voltage_ctrl_box_fan_current, out);
    out << "\n";
  }

  // member: tool_coord_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tool_coord_x: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_coord_x, out);
    out << "\n";
  }

  // member: tool_coord_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tool_coord_y: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_coord_y, out);
    out << "\n";
  }

  // member: tool_coord_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tool_coord_z: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_coord_z, out);
    out << "\n";
  }

  // member: tool_coord_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tool_coord_a: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_coord_a, out);
    out << "\n";
  }

  // member: tool_coord_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tool_coord_b: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_coord_b, out);
    out << "\n";
  }

  // member: tool_coord_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tool_coord_c: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_coord_c, out);
    out << "\n";
  }

  // member: wobj_coord_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wobj_coord_x: ";
    rosidl_generator_traits::value_to_yaml(msg.wobj_coord_x, out);
    out << "\n";
  }

  // member: wobj_coord_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wobj_coord_y: ";
    rosidl_generator_traits::value_to_yaml(msg.wobj_coord_y, out);
    out << "\n";
  }

  // member: wobj_coord_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wobj_coord_z: ";
    rosidl_generator_traits::value_to_yaml(msg.wobj_coord_z, out);
    out << "\n";
  }

  // member: wobj_coord_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wobj_coord_a: ";
    rosidl_generator_traits::value_to_yaml(msg.wobj_coord_a, out);
    out << "\n";
  }

  // member: wobj_coord_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wobj_coord_b: ";
    rosidl_generator_traits::value_to_yaml(msg.wobj_coord_b, out);
    out << "\n";
  }

  // member: wobj_coord_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wobj_coord_c: ";
    rosidl_generator_traits::value_to_yaml(msg.wobj_coord_c, out);
    out << "\n";
  }

  // member: ex_tool_coord_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ex_tool_coord_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ex_tool_coord_x, out);
    out << "\n";
  }

  // member: ex_tool_coord_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ex_tool_coord_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ex_tool_coord_y, out);
    out << "\n";
  }

  // member: ex_tool_coord_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ex_tool_coord_z: ";
    rosidl_generator_traits::value_to_yaml(msg.ex_tool_coord_z, out);
    out << "\n";
  }

  // member: ex_tool_coord_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ex_tool_coord_a: ";
    rosidl_generator_traits::value_to_yaml(msg.ex_tool_coord_a, out);
    out << "\n";
  }

  // member: ex_tool_coord_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ex_tool_coord_b: ";
    rosidl_generator_traits::value_to_yaml(msg.ex_tool_coord_b, out);
    out << "\n";
  }

  // member: ex_tool_coord_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ex_tool_coord_c: ";
    rosidl_generator_traits::value_to_yaml(msg.ex_tool_coord_c, out);
    out << "\n";
  }

  // member: ex_axis_coord_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ex_axis_coord_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ex_axis_coord_x, out);
    out << "\n";
  }

  // member: ex_axis_coord_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ex_axis_coord_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ex_axis_coord_y, out);
    out << "\n";
  }

  // member: ex_axis_coord_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ex_axis_coord_z: ";
    rosidl_generator_traits::value_to_yaml(msg.ex_axis_coord_z, out);
    out << "\n";
  }

  // member: ex_axis_coord_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ex_axis_coord_a: ";
    rosidl_generator_traits::value_to_yaml(msg.ex_axis_coord_a, out);
    out << "\n";
  }

  // member: ex_axis_coord_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ex_axis_coord_b: ";
    rosidl_generator_traits::value_to_yaml(msg.ex_axis_coord_b, out);
    out << "\n";
  }

  // member: ex_axis_coord_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ex_axis_coord_c: ";
    rosidl_generator_traits::value_to_yaml(msg.ex_axis_coord_c, out);
    out << "\n";
  }

  // member: load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load: ";
    rosidl_generator_traits::value_to_yaml(msg.load, out);
    out << "\n";
  }

  // member: load_cog_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_cog_x: ";
    rosidl_generator_traits::value_to_yaml(msg.load_cog_x, out);
    out << "\n";
  }

  // member: load_cog_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_cog_y: ";
    rosidl_generator_traits::value_to_yaml(msg.load_cog_y, out);
    out << "\n";
  }

  // member: load_cog_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_cog_z: ";
    rosidl_generator_traits::value_to_yaml(msg.load_cog_z, out);
    out << "\n";
  }

  // member: j1_last_servoj_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j1_last_servoj_target: ";
    rosidl_generator_traits::value_to_yaml(msg.j1_last_servoj_target, out);
    out << "\n";
  }

  // member: j2_last_servoj_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j2_last_servoj_target: ";
    rosidl_generator_traits::value_to_yaml(msg.j2_last_servoj_target, out);
    out << "\n";
  }

  // member: j3_last_servoj_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j3_last_servoj_target: ";
    rosidl_generator_traits::value_to_yaml(msg.j3_last_servoj_target, out);
    out << "\n";
  }

  // member: j4_last_servoj_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j4_last_servoj_target: ";
    rosidl_generator_traits::value_to_yaml(msg.j4_last_servoj_target, out);
    out << "\n";
  }

  // member: j5_last_servoj_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j5_last_servoj_target: ";
    rosidl_generator_traits::value_to_yaml(msg.j5_last_servoj_target, out);
    out << "\n";
  }

  // member: j6_last_servoj_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j6_last_servoj_target: ";
    rosidl_generator_traits::value_to_yaml(msg.j6_last_servoj_target, out);
    out << "\n";
  }

  // member: servoj_cmd_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servoj_cmd_num: ";
    rosidl_generator_traits::value_to_yaml(msg.servoj_cmd_num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotNonrtState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace fairino_msgs

namespace rosidl_generator_traits
{

[[deprecated("use fairino_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fairino_msgs::msg::RobotNonrtState & msg,
  std::ostream & out, size_t indentation = 0)
{
  fairino_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fairino_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fairino_msgs::msg::RobotNonrtState & msg)
{
  return fairino_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fairino_msgs::msg::RobotNonrtState>()
{
  return "fairino_msgs::msg::RobotNonrtState";
}

template<>
inline const char * name<fairino_msgs::msg::RobotNonrtState>()
{
  return "fairino_msgs/msg/RobotNonrtState";
}

template<>
struct has_fixed_size<fairino_msgs::msg::RobotNonrtState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fairino_msgs::msg::RobotNonrtState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fairino_msgs::msg::RobotNonrtState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FAIRINO_MSGS__MSG__DETAIL__ROBOT_NONRT_STATE__TRAITS_HPP_
