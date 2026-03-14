// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fairino_msgs:msg/RobotNonrtState.idl
// generated code does not contain a copyright notice

#ifndef FAIRINO_MSGS__MSG__DETAIL__ROBOT_NONRT_STATE__STRUCT_HPP_
#define FAIRINO_MSGS__MSG__DETAIL__ROBOT_NONRT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__fairino_msgs__msg__RobotNonrtState __attribute__((deprecated))
#else
# define DEPRECATED__fairino_msgs__msg__RobotNonrtState __declspec(deprecated)
#endif

namespace fairino_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotNonrtState_
{
  using Type = RobotNonrtState_<ContainerAllocator>;

  explicit RobotNonrtState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prg_state = 0;
      this->rbt_state = 0;
      this->rbt_main_code = 0;
      this->rbt_sub_code = 0;
      this->robot_mode = 0;
      this->j1_cur_pos = 0.0;
      this->j2_cur_pos = 0.0;
      this->j3_cur_pos = 0.0;
      this->j4_cur_pos = 0.0;
      this->j5_cur_pos = 0.0;
      this->j6_cur_pos = 0.0;
      this->cart_x_cur_pos = 0.0;
      this->cart_y_cur_pos = 0.0;
      this->cart_z_cur_pos = 0.0;
      this->cart_a_cur_pos = 0.0;
      this->cart_b_cur_pos = 0.0;
      this->cart_c_cur_pos = 0.0;
      this->flange_x_cur_pos = 0.0;
      this->flange_y_cur_pos = 0.0;
      this->flange_z_cur_pos = 0.0;
      this->flange_a_cur_pos = 0.0;
      this->flange_b_cur_pos = 0.0;
      this->flange_c_cur_pos = 0.0;
      this->j1_actual_qd = 0.0;
      this->j2_actual_qd = 0.0;
      this->j3_actual_qd = 0.0;
      this->j4_actual_qd = 0.0;
      this->j5_actual_qd = 0.0;
      this->j6_actual_qd = 0.0;
      this->j1_actual_qdd = 0.0;
      this->j2_actual_qdd = 0.0;
      this->j3_actual_qdd = 0.0;
      this->j4_actual_qdd = 0.0;
      this->j5_actual_qdd = 0.0;
      this->j6_actual_qdd = 0.0;
      this->cart_lin_cmd_speed = 0.0;
      this->cart_rot_cmd_speed = 0.0;
      this->cart_x_cmd_speed = 0.0;
      this->cart_y_cmd_speed = 0.0;
      this->cart_z_cmd_speed = 0.0;
      this->cart_a_cmd_speed = 0.0;
      this->cart_b_cmd_speed = 0.0;
      this->cart_c_cmd_speed = 0.0;
      this->cart_lin_cur_speed = 0.0;
      this->cart_rot_cur_speed = 0.0;
      this->cart_x_cur_speed = 0.0;
      this->cart_y_cur_speed = 0.0;
      this->cart_z_cur_speed = 0.0;
      this->cart_a_cur_speed = 0.0;
      this->cart_b_cur_speed = 0.0;
      this->cart_c_cur_speed = 0.0;
      this->j1_cur_tor = 0.0;
      this->j2_cur_tor = 0.0;
      this->j3_cur_tor = 0.0;
      this->j4_cur_tor = 0.0;
      this->j5_cur_tor = 0.0;
      this->j6_cur_tor = 0.0;
      this->tool_num = 0;
      this->work_num = 0;
      this->dgt_output_h = 0;
      this->dgt_output_l = 0;
      this->tl_dgt_output_l = 0;
      this->dgt_input_h = 0;
      this->dgt_input_l = 0;
      this->tl_dgt_input_l = 0;
      this->cl_analog_input_1 = 0;
      this->cl_analog_input_2 = 0;
      this->tl_anglog_input = 0;
      this->ft_fx_raw_data = 0.0;
      this->ft_fy_raw_data = 0.0;
      this->ft_fz_raw_data = 0.0;
      this->ft_tx_raw_data = 0.0;
      this->ft_ty_raw_data = 0.0;
      this->ft_tz_raw_data = 0.0;
      this->ft_fx_data = 0.0;
      this->ft_fy_data = 0.0;
      this->ft_fz_data = 0.0;
      this->ft_tx_data = 0.0;
      this->ft_ty_data = 0.0;
      this->ft_tz_data = 0.0;
      this->ft_actstatus = 0;
      this->emg = 0;
      this->motion_done = 0;
      this->grip_motion_done = 0;
      this->mc_queue_len = 0;
      this->collision_err = 0;
      this->trajectory_pnum = 0;
      this->safety_stop1_state = 0;
      this->safety_stop2_state = 0;
      this->gripper_fault_id = 0;
      this->grippererro = 0;
      this->gripper_active = 0;
      this->gripper_position = 0;
      this->gripper_speed = 0;
      this->gripper_current = 0;
      this->gripper_temp = 0;
      this->gripper_voltage = 0;
      this->aux_servo_id = 0;
      this->aux_servo_err = 0;
      this->aux_servo_state = 0;
      this->aux_servo_pos = 0.0;
      this->aux_servo_vel = 0.0;
      this->aux_servo_torque = 0.0;
      this->ext_di_state_1 = 0;
      this->ext_di_state_2 = 0;
      this->ext_di_state_3 = 0;
      this->ext_di_state_4 = 0;
      this->ext_di_state_5 = 0;
      this->ext_di_state_6 = 0;
      this->ext_di_state_7 = 0;
      this->ext_di_state_8 = 0;
      this->ext_do_state_1 = 0;
      this->ext_do_state_2 = 0;
      this->ext_do_state_3 = 0;
      this->ext_do_state_4 = 0;
      this->ext_do_state_5 = 0;
      this->ext_do_state_6 = 0;
      this->ext_do_state_7 = 0;
      this->ext_do_state_8 = 0;
      this->ext_ai_state_1 = 0;
      this->ext_ai_state_2 = 0;
      this->ext_ai_state_3 = 0;
      this->ext_ai_state_4 = 0;
      this->ext_ao_state_1 = 0;
      this->ext_ao_state_2 = 0;
      this->ext_ao_state_3 = 0;
      this->ext_ao_state_4 = 0;
      this->rbt_enable_state = 0;
      this->end_lua_err_code = 0;
      this->cl_analog_output_1 = 0;
      this->cl_analog_output_2 = 0;
      this->tl_analog_output = 0;
      this->gripper_rot_num = 0.0;
      this->gripper_rot_speed = 0;
      this->gripper_rot_torque = 0;
      this->weldbreakoffstate = 0;
      this->weldarcstate = 0;
      this->j1_tgt_tor = 0.0;
      this->j2_tgt_tor = 0.0;
      this->j3_tgt_tor = 0.0;
      this->j4_tgt_tor = 0.0;
      this->j5_tgt_tor = 0.0;
      this->j6_tgt_tor = 0.0;
      this->jwide_voltage_ctrl_box_temp = 0.0;
      this->wide_voltage_ctrl_box_fan_current = 0;
      this->tool_coord_x = 0.0;
      this->tool_coord_y = 0.0;
      this->tool_coord_z = 0.0;
      this->tool_coord_a = 0.0;
      this->tool_coord_b = 0.0;
      this->tool_coord_c = 0.0;
      this->wobj_coord_x = 0.0;
      this->wobj_coord_y = 0.0;
      this->wobj_coord_z = 0.0;
      this->wobj_coord_a = 0.0;
      this->wobj_coord_b = 0.0;
      this->wobj_coord_c = 0.0;
      this->ex_tool_coord_x = 0.0;
      this->ex_tool_coord_y = 0.0;
      this->ex_tool_coord_z = 0.0;
      this->ex_tool_coord_a = 0.0;
      this->ex_tool_coord_b = 0.0;
      this->ex_tool_coord_c = 0.0;
      this->ex_axis_coord_x = 0.0;
      this->ex_axis_coord_y = 0.0;
      this->ex_axis_coord_z = 0.0;
      this->ex_axis_coord_a = 0.0;
      this->ex_axis_coord_b = 0.0;
      this->ex_axis_coord_c = 0.0;
      this->load = 0.0;
      this->load_cog_x = 0.0;
      this->load_cog_y = 0.0;
      this->load_cog_z = 0.0;
      this->j1_last_servoj_target = 0.0;
      this->j2_last_servoj_target = 0.0;
      this->j3_last_servoj_target = 0.0;
      this->j4_last_servoj_target = 0.0;
      this->j5_last_servoj_target = 0.0;
      this->j6_last_servoj_target = 0.0;
      this->servoj_cmd_num = 0;
    }
  }

  explicit RobotNonrtState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prg_state = 0;
      this->rbt_state = 0;
      this->rbt_main_code = 0;
      this->rbt_sub_code = 0;
      this->robot_mode = 0;
      this->j1_cur_pos = 0.0;
      this->j2_cur_pos = 0.0;
      this->j3_cur_pos = 0.0;
      this->j4_cur_pos = 0.0;
      this->j5_cur_pos = 0.0;
      this->j6_cur_pos = 0.0;
      this->cart_x_cur_pos = 0.0;
      this->cart_y_cur_pos = 0.0;
      this->cart_z_cur_pos = 0.0;
      this->cart_a_cur_pos = 0.0;
      this->cart_b_cur_pos = 0.0;
      this->cart_c_cur_pos = 0.0;
      this->flange_x_cur_pos = 0.0;
      this->flange_y_cur_pos = 0.0;
      this->flange_z_cur_pos = 0.0;
      this->flange_a_cur_pos = 0.0;
      this->flange_b_cur_pos = 0.0;
      this->flange_c_cur_pos = 0.0;
      this->j1_actual_qd = 0.0;
      this->j2_actual_qd = 0.0;
      this->j3_actual_qd = 0.0;
      this->j4_actual_qd = 0.0;
      this->j5_actual_qd = 0.0;
      this->j6_actual_qd = 0.0;
      this->j1_actual_qdd = 0.0;
      this->j2_actual_qdd = 0.0;
      this->j3_actual_qdd = 0.0;
      this->j4_actual_qdd = 0.0;
      this->j5_actual_qdd = 0.0;
      this->j6_actual_qdd = 0.0;
      this->cart_lin_cmd_speed = 0.0;
      this->cart_rot_cmd_speed = 0.0;
      this->cart_x_cmd_speed = 0.0;
      this->cart_y_cmd_speed = 0.0;
      this->cart_z_cmd_speed = 0.0;
      this->cart_a_cmd_speed = 0.0;
      this->cart_b_cmd_speed = 0.0;
      this->cart_c_cmd_speed = 0.0;
      this->cart_lin_cur_speed = 0.0;
      this->cart_rot_cur_speed = 0.0;
      this->cart_x_cur_speed = 0.0;
      this->cart_y_cur_speed = 0.0;
      this->cart_z_cur_speed = 0.0;
      this->cart_a_cur_speed = 0.0;
      this->cart_b_cur_speed = 0.0;
      this->cart_c_cur_speed = 0.0;
      this->j1_cur_tor = 0.0;
      this->j2_cur_tor = 0.0;
      this->j3_cur_tor = 0.0;
      this->j4_cur_tor = 0.0;
      this->j5_cur_tor = 0.0;
      this->j6_cur_tor = 0.0;
      this->tool_num = 0;
      this->work_num = 0;
      this->dgt_output_h = 0;
      this->dgt_output_l = 0;
      this->tl_dgt_output_l = 0;
      this->dgt_input_h = 0;
      this->dgt_input_l = 0;
      this->tl_dgt_input_l = 0;
      this->cl_analog_input_1 = 0;
      this->cl_analog_input_2 = 0;
      this->tl_anglog_input = 0;
      this->ft_fx_raw_data = 0.0;
      this->ft_fy_raw_data = 0.0;
      this->ft_fz_raw_data = 0.0;
      this->ft_tx_raw_data = 0.0;
      this->ft_ty_raw_data = 0.0;
      this->ft_tz_raw_data = 0.0;
      this->ft_fx_data = 0.0;
      this->ft_fy_data = 0.0;
      this->ft_fz_data = 0.0;
      this->ft_tx_data = 0.0;
      this->ft_ty_data = 0.0;
      this->ft_tz_data = 0.0;
      this->ft_actstatus = 0;
      this->emg = 0;
      this->motion_done = 0;
      this->grip_motion_done = 0;
      this->mc_queue_len = 0;
      this->collision_err = 0;
      this->trajectory_pnum = 0;
      this->safety_stop1_state = 0;
      this->safety_stop2_state = 0;
      this->gripper_fault_id = 0;
      this->grippererro = 0;
      this->gripper_active = 0;
      this->gripper_position = 0;
      this->gripper_speed = 0;
      this->gripper_current = 0;
      this->gripper_temp = 0;
      this->gripper_voltage = 0;
      this->aux_servo_id = 0;
      this->aux_servo_err = 0;
      this->aux_servo_state = 0;
      this->aux_servo_pos = 0.0;
      this->aux_servo_vel = 0.0;
      this->aux_servo_torque = 0.0;
      this->ext_di_state_1 = 0;
      this->ext_di_state_2 = 0;
      this->ext_di_state_3 = 0;
      this->ext_di_state_4 = 0;
      this->ext_di_state_5 = 0;
      this->ext_di_state_6 = 0;
      this->ext_di_state_7 = 0;
      this->ext_di_state_8 = 0;
      this->ext_do_state_1 = 0;
      this->ext_do_state_2 = 0;
      this->ext_do_state_3 = 0;
      this->ext_do_state_4 = 0;
      this->ext_do_state_5 = 0;
      this->ext_do_state_6 = 0;
      this->ext_do_state_7 = 0;
      this->ext_do_state_8 = 0;
      this->ext_ai_state_1 = 0;
      this->ext_ai_state_2 = 0;
      this->ext_ai_state_3 = 0;
      this->ext_ai_state_4 = 0;
      this->ext_ao_state_1 = 0;
      this->ext_ao_state_2 = 0;
      this->ext_ao_state_3 = 0;
      this->ext_ao_state_4 = 0;
      this->rbt_enable_state = 0;
      this->end_lua_err_code = 0;
      this->cl_analog_output_1 = 0;
      this->cl_analog_output_2 = 0;
      this->tl_analog_output = 0;
      this->gripper_rot_num = 0.0;
      this->gripper_rot_speed = 0;
      this->gripper_rot_torque = 0;
      this->weldbreakoffstate = 0;
      this->weldarcstate = 0;
      this->j1_tgt_tor = 0.0;
      this->j2_tgt_tor = 0.0;
      this->j3_tgt_tor = 0.0;
      this->j4_tgt_tor = 0.0;
      this->j5_tgt_tor = 0.0;
      this->j6_tgt_tor = 0.0;
      this->jwide_voltage_ctrl_box_temp = 0.0;
      this->wide_voltage_ctrl_box_fan_current = 0;
      this->tool_coord_x = 0.0;
      this->tool_coord_y = 0.0;
      this->tool_coord_z = 0.0;
      this->tool_coord_a = 0.0;
      this->tool_coord_b = 0.0;
      this->tool_coord_c = 0.0;
      this->wobj_coord_x = 0.0;
      this->wobj_coord_y = 0.0;
      this->wobj_coord_z = 0.0;
      this->wobj_coord_a = 0.0;
      this->wobj_coord_b = 0.0;
      this->wobj_coord_c = 0.0;
      this->ex_tool_coord_x = 0.0;
      this->ex_tool_coord_y = 0.0;
      this->ex_tool_coord_z = 0.0;
      this->ex_tool_coord_a = 0.0;
      this->ex_tool_coord_b = 0.0;
      this->ex_tool_coord_c = 0.0;
      this->ex_axis_coord_x = 0.0;
      this->ex_axis_coord_y = 0.0;
      this->ex_axis_coord_z = 0.0;
      this->ex_axis_coord_a = 0.0;
      this->ex_axis_coord_b = 0.0;
      this->ex_axis_coord_c = 0.0;
      this->load = 0.0;
      this->load_cog_x = 0.0;
      this->load_cog_y = 0.0;
      this->load_cog_z = 0.0;
      this->j1_last_servoj_target = 0.0;
      this->j2_last_servoj_target = 0.0;
      this->j3_last_servoj_target = 0.0;
      this->j4_last_servoj_target = 0.0;
      this->j5_last_servoj_target = 0.0;
      this->j6_last_servoj_target = 0.0;
      this->servoj_cmd_num = 0;
    }
  }

  // field types and members
  using _prg_state_type =
    uint8_t;
  _prg_state_type prg_state;
  using _rbt_state_type =
    uint8_t;
  _rbt_state_type rbt_state;
  using _rbt_main_code_type =
    uint16_t;
  _rbt_main_code_type rbt_main_code;
  using _rbt_sub_code_type =
    uint16_t;
  _rbt_sub_code_type rbt_sub_code;
  using _robot_mode_type =
    uint8_t;
  _robot_mode_type robot_mode;
  using _j1_cur_pos_type =
    double;
  _j1_cur_pos_type j1_cur_pos;
  using _j2_cur_pos_type =
    double;
  _j2_cur_pos_type j2_cur_pos;
  using _j3_cur_pos_type =
    double;
  _j3_cur_pos_type j3_cur_pos;
  using _j4_cur_pos_type =
    double;
  _j4_cur_pos_type j4_cur_pos;
  using _j5_cur_pos_type =
    double;
  _j5_cur_pos_type j5_cur_pos;
  using _j6_cur_pos_type =
    double;
  _j6_cur_pos_type j6_cur_pos;
  using _cart_x_cur_pos_type =
    double;
  _cart_x_cur_pos_type cart_x_cur_pos;
  using _cart_y_cur_pos_type =
    double;
  _cart_y_cur_pos_type cart_y_cur_pos;
  using _cart_z_cur_pos_type =
    double;
  _cart_z_cur_pos_type cart_z_cur_pos;
  using _cart_a_cur_pos_type =
    double;
  _cart_a_cur_pos_type cart_a_cur_pos;
  using _cart_b_cur_pos_type =
    double;
  _cart_b_cur_pos_type cart_b_cur_pos;
  using _cart_c_cur_pos_type =
    double;
  _cart_c_cur_pos_type cart_c_cur_pos;
  using _flange_x_cur_pos_type =
    double;
  _flange_x_cur_pos_type flange_x_cur_pos;
  using _flange_y_cur_pos_type =
    double;
  _flange_y_cur_pos_type flange_y_cur_pos;
  using _flange_z_cur_pos_type =
    double;
  _flange_z_cur_pos_type flange_z_cur_pos;
  using _flange_a_cur_pos_type =
    double;
  _flange_a_cur_pos_type flange_a_cur_pos;
  using _flange_b_cur_pos_type =
    double;
  _flange_b_cur_pos_type flange_b_cur_pos;
  using _flange_c_cur_pos_type =
    double;
  _flange_c_cur_pos_type flange_c_cur_pos;
  using _j1_actual_qd_type =
    double;
  _j1_actual_qd_type j1_actual_qd;
  using _j2_actual_qd_type =
    double;
  _j2_actual_qd_type j2_actual_qd;
  using _j3_actual_qd_type =
    double;
  _j3_actual_qd_type j3_actual_qd;
  using _j4_actual_qd_type =
    double;
  _j4_actual_qd_type j4_actual_qd;
  using _j5_actual_qd_type =
    double;
  _j5_actual_qd_type j5_actual_qd;
  using _j6_actual_qd_type =
    double;
  _j6_actual_qd_type j6_actual_qd;
  using _j1_actual_qdd_type =
    double;
  _j1_actual_qdd_type j1_actual_qdd;
  using _j2_actual_qdd_type =
    double;
  _j2_actual_qdd_type j2_actual_qdd;
  using _j3_actual_qdd_type =
    double;
  _j3_actual_qdd_type j3_actual_qdd;
  using _j4_actual_qdd_type =
    double;
  _j4_actual_qdd_type j4_actual_qdd;
  using _j5_actual_qdd_type =
    double;
  _j5_actual_qdd_type j5_actual_qdd;
  using _j6_actual_qdd_type =
    double;
  _j6_actual_qdd_type j6_actual_qdd;
  using _cart_lin_cmd_speed_type =
    double;
  _cart_lin_cmd_speed_type cart_lin_cmd_speed;
  using _cart_rot_cmd_speed_type =
    double;
  _cart_rot_cmd_speed_type cart_rot_cmd_speed;
  using _cart_x_cmd_speed_type =
    double;
  _cart_x_cmd_speed_type cart_x_cmd_speed;
  using _cart_y_cmd_speed_type =
    double;
  _cart_y_cmd_speed_type cart_y_cmd_speed;
  using _cart_z_cmd_speed_type =
    double;
  _cart_z_cmd_speed_type cart_z_cmd_speed;
  using _cart_a_cmd_speed_type =
    double;
  _cart_a_cmd_speed_type cart_a_cmd_speed;
  using _cart_b_cmd_speed_type =
    double;
  _cart_b_cmd_speed_type cart_b_cmd_speed;
  using _cart_c_cmd_speed_type =
    double;
  _cart_c_cmd_speed_type cart_c_cmd_speed;
  using _cart_lin_cur_speed_type =
    double;
  _cart_lin_cur_speed_type cart_lin_cur_speed;
  using _cart_rot_cur_speed_type =
    double;
  _cart_rot_cur_speed_type cart_rot_cur_speed;
  using _cart_x_cur_speed_type =
    double;
  _cart_x_cur_speed_type cart_x_cur_speed;
  using _cart_y_cur_speed_type =
    double;
  _cart_y_cur_speed_type cart_y_cur_speed;
  using _cart_z_cur_speed_type =
    double;
  _cart_z_cur_speed_type cart_z_cur_speed;
  using _cart_a_cur_speed_type =
    double;
  _cart_a_cur_speed_type cart_a_cur_speed;
  using _cart_b_cur_speed_type =
    double;
  _cart_b_cur_speed_type cart_b_cur_speed;
  using _cart_c_cur_speed_type =
    double;
  _cart_c_cur_speed_type cart_c_cur_speed;
  using _j1_cur_tor_type =
    double;
  _j1_cur_tor_type j1_cur_tor;
  using _j2_cur_tor_type =
    double;
  _j2_cur_tor_type j2_cur_tor;
  using _j3_cur_tor_type =
    double;
  _j3_cur_tor_type j3_cur_tor;
  using _j4_cur_tor_type =
    double;
  _j4_cur_tor_type j4_cur_tor;
  using _j5_cur_tor_type =
    double;
  _j5_cur_tor_type j5_cur_tor;
  using _j6_cur_tor_type =
    double;
  _j6_cur_tor_type j6_cur_tor;
  using _tool_num_type =
    uint8_t;
  _tool_num_type tool_num;
  using _work_num_type =
    uint8_t;
  _work_num_type work_num;
  using _dgt_output_h_type =
    uint8_t;
  _dgt_output_h_type dgt_output_h;
  using _dgt_output_l_type =
    uint8_t;
  _dgt_output_l_type dgt_output_l;
  using _tl_dgt_output_l_type =
    uint8_t;
  _tl_dgt_output_l_type tl_dgt_output_l;
  using _dgt_input_h_type =
    uint8_t;
  _dgt_input_h_type dgt_input_h;
  using _dgt_input_l_type =
    uint8_t;
  _dgt_input_l_type dgt_input_l;
  using _tl_dgt_input_l_type =
    uint8_t;
  _tl_dgt_input_l_type tl_dgt_input_l;
  using _cl_analog_input_1_type =
    uint16_t;
  _cl_analog_input_1_type cl_analog_input_1;
  using _cl_analog_input_2_type =
    uint16_t;
  _cl_analog_input_2_type cl_analog_input_2;
  using _tl_anglog_input_type =
    uint16_t;
  _tl_anglog_input_type tl_anglog_input;
  using _ft_fx_raw_data_type =
    double;
  _ft_fx_raw_data_type ft_fx_raw_data;
  using _ft_fy_raw_data_type =
    double;
  _ft_fy_raw_data_type ft_fy_raw_data;
  using _ft_fz_raw_data_type =
    double;
  _ft_fz_raw_data_type ft_fz_raw_data;
  using _ft_tx_raw_data_type =
    double;
  _ft_tx_raw_data_type ft_tx_raw_data;
  using _ft_ty_raw_data_type =
    double;
  _ft_ty_raw_data_type ft_ty_raw_data;
  using _ft_tz_raw_data_type =
    double;
  _ft_tz_raw_data_type ft_tz_raw_data;
  using _ft_fx_data_type =
    double;
  _ft_fx_data_type ft_fx_data;
  using _ft_fy_data_type =
    double;
  _ft_fy_data_type ft_fy_data;
  using _ft_fz_data_type =
    double;
  _ft_fz_data_type ft_fz_data;
  using _ft_tx_data_type =
    double;
  _ft_tx_data_type ft_tx_data;
  using _ft_ty_data_type =
    double;
  _ft_ty_data_type ft_ty_data;
  using _ft_tz_data_type =
    double;
  _ft_tz_data_type ft_tz_data;
  using _ft_actstatus_type =
    uint8_t;
  _ft_actstatus_type ft_actstatus;
  using _emg_type =
    uint8_t;
  _emg_type emg;
  using _motion_done_type =
    uint8_t;
  _motion_done_type motion_done;
  using _grip_motion_done_type =
    uint8_t;
  _grip_motion_done_type grip_motion_done;
  using _mc_queue_len_type =
    uint16_t;
  _mc_queue_len_type mc_queue_len;
  using _collision_err_type =
    uint8_t;
  _collision_err_type collision_err;
  using _trajectory_pnum_type =
    uint16_t;
  _trajectory_pnum_type trajectory_pnum;
  using _safety_stop1_state_type =
    uint8_t;
  _safety_stop1_state_type safety_stop1_state;
  using _safety_stop2_state_type =
    uint8_t;
  _safety_stop2_state_type safety_stop2_state;
  using _gripper_fault_id_type =
    uint8_t;
  _gripper_fault_id_type gripper_fault_id;
  using _grippererro_type =
    uint16_t;
  _grippererro_type grippererro;
  using _gripper_active_type =
    uint16_t;
  _gripper_active_type gripper_active;
  using _gripper_position_type =
    uint8_t;
  _gripper_position_type gripper_position;
  using _gripper_speed_type =
    uint8_t;
  _gripper_speed_type gripper_speed;
  using _gripper_current_type =
    uint8_t;
  _gripper_current_type gripper_current;
  using _gripper_temp_type =
    uint16_t;
  _gripper_temp_type gripper_temp;
  using _gripper_voltage_type =
    uint16_t;
  _gripper_voltage_type gripper_voltage;
  using _aux_servo_id_type =
    uint8_t;
  _aux_servo_id_type aux_servo_id;
  using _aux_servo_err_type =
    uint16_t;
  _aux_servo_err_type aux_servo_err;
  using _aux_servo_state_type =
    uint16_t;
  _aux_servo_state_type aux_servo_state;
  using _aux_servo_pos_type =
    double;
  _aux_servo_pos_type aux_servo_pos;
  using _aux_servo_vel_type =
    double;
  _aux_servo_vel_type aux_servo_vel;
  using _aux_servo_torque_type =
    double;
  _aux_servo_torque_type aux_servo_torque;
  using _ext_di_state_1_type =
    uint16_t;
  _ext_di_state_1_type ext_di_state_1;
  using _ext_di_state_2_type =
    uint16_t;
  _ext_di_state_2_type ext_di_state_2;
  using _ext_di_state_3_type =
    uint16_t;
  _ext_di_state_3_type ext_di_state_3;
  using _ext_di_state_4_type =
    uint16_t;
  _ext_di_state_4_type ext_di_state_4;
  using _ext_di_state_5_type =
    uint16_t;
  _ext_di_state_5_type ext_di_state_5;
  using _ext_di_state_6_type =
    uint16_t;
  _ext_di_state_6_type ext_di_state_6;
  using _ext_di_state_7_type =
    uint16_t;
  _ext_di_state_7_type ext_di_state_7;
  using _ext_di_state_8_type =
    uint16_t;
  _ext_di_state_8_type ext_di_state_8;
  using _ext_do_state_1_type =
    uint16_t;
  _ext_do_state_1_type ext_do_state_1;
  using _ext_do_state_2_type =
    uint16_t;
  _ext_do_state_2_type ext_do_state_2;
  using _ext_do_state_3_type =
    uint16_t;
  _ext_do_state_3_type ext_do_state_3;
  using _ext_do_state_4_type =
    uint16_t;
  _ext_do_state_4_type ext_do_state_4;
  using _ext_do_state_5_type =
    uint16_t;
  _ext_do_state_5_type ext_do_state_5;
  using _ext_do_state_6_type =
    uint16_t;
  _ext_do_state_6_type ext_do_state_6;
  using _ext_do_state_7_type =
    uint16_t;
  _ext_do_state_7_type ext_do_state_7;
  using _ext_do_state_8_type =
    uint16_t;
  _ext_do_state_8_type ext_do_state_8;
  using _ext_ai_state_1_type =
    uint16_t;
  _ext_ai_state_1_type ext_ai_state_1;
  using _ext_ai_state_2_type =
    uint16_t;
  _ext_ai_state_2_type ext_ai_state_2;
  using _ext_ai_state_3_type =
    uint16_t;
  _ext_ai_state_3_type ext_ai_state_3;
  using _ext_ai_state_4_type =
    uint16_t;
  _ext_ai_state_4_type ext_ai_state_4;
  using _ext_ao_state_1_type =
    uint16_t;
  _ext_ao_state_1_type ext_ao_state_1;
  using _ext_ao_state_2_type =
    uint16_t;
  _ext_ao_state_2_type ext_ao_state_2;
  using _ext_ao_state_3_type =
    uint16_t;
  _ext_ao_state_3_type ext_ao_state_3;
  using _ext_ao_state_4_type =
    uint16_t;
  _ext_ao_state_4_type ext_ao_state_4;
  using _rbt_enable_state_type =
    uint8_t;
  _rbt_enable_state_type rbt_enable_state;
  using _end_lua_err_code_type =
    uint16_t;
  _end_lua_err_code_type end_lua_err_code;
  using _cl_analog_output_1_type =
    uint16_t;
  _cl_analog_output_1_type cl_analog_output_1;
  using _cl_analog_output_2_type =
    uint16_t;
  _cl_analog_output_2_type cl_analog_output_2;
  using _tl_analog_output_type =
    uint16_t;
  _tl_analog_output_type tl_analog_output;
  using _gripper_rot_num_type =
    double;
  _gripper_rot_num_type gripper_rot_num;
  using _gripper_rot_speed_type =
    uint8_t;
  _gripper_rot_speed_type gripper_rot_speed;
  using _gripper_rot_torque_type =
    uint8_t;
  _gripper_rot_torque_type gripper_rot_torque;
  using _weldbreakoffstate_type =
    uint8_t;
  _weldbreakoffstate_type weldbreakoffstate;
  using _weldarcstate_type =
    uint8_t;
  _weldarcstate_type weldarcstate;
  using _j1_tgt_tor_type =
    double;
  _j1_tgt_tor_type j1_tgt_tor;
  using _j2_tgt_tor_type =
    double;
  _j2_tgt_tor_type j2_tgt_tor;
  using _j3_tgt_tor_type =
    double;
  _j3_tgt_tor_type j3_tgt_tor;
  using _j4_tgt_tor_type =
    double;
  _j4_tgt_tor_type j4_tgt_tor;
  using _j5_tgt_tor_type =
    double;
  _j5_tgt_tor_type j5_tgt_tor;
  using _j6_tgt_tor_type =
    double;
  _j6_tgt_tor_type j6_tgt_tor;
  using _jwide_voltage_ctrl_box_temp_type =
    double;
  _jwide_voltage_ctrl_box_temp_type jwide_voltage_ctrl_box_temp;
  using _wide_voltage_ctrl_box_fan_current_type =
    uint16_t;
  _wide_voltage_ctrl_box_fan_current_type wide_voltage_ctrl_box_fan_current;
  using _tool_coord_x_type =
    double;
  _tool_coord_x_type tool_coord_x;
  using _tool_coord_y_type =
    double;
  _tool_coord_y_type tool_coord_y;
  using _tool_coord_z_type =
    double;
  _tool_coord_z_type tool_coord_z;
  using _tool_coord_a_type =
    double;
  _tool_coord_a_type tool_coord_a;
  using _tool_coord_b_type =
    double;
  _tool_coord_b_type tool_coord_b;
  using _tool_coord_c_type =
    double;
  _tool_coord_c_type tool_coord_c;
  using _wobj_coord_x_type =
    double;
  _wobj_coord_x_type wobj_coord_x;
  using _wobj_coord_y_type =
    double;
  _wobj_coord_y_type wobj_coord_y;
  using _wobj_coord_z_type =
    double;
  _wobj_coord_z_type wobj_coord_z;
  using _wobj_coord_a_type =
    double;
  _wobj_coord_a_type wobj_coord_a;
  using _wobj_coord_b_type =
    double;
  _wobj_coord_b_type wobj_coord_b;
  using _wobj_coord_c_type =
    double;
  _wobj_coord_c_type wobj_coord_c;
  using _ex_tool_coord_x_type =
    double;
  _ex_tool_coord_x_type ex_tool_coord_x;
  using _ex_tool_coord_y_type =
    double;
  _ex_tool_coord_y_type ex_tool_coord_y;
  using _ex_tool_coord_z_type =
    double;
  _ex_tool_coord_z_type ex_tool_coord_z;
  using _ex_tool_coord_a_type =
    double;
  _ex_tool_coord_a_type ex_tool_coord_a;
  using _ex_tool_coord_b_type =
    double;
  _ex_tool_coord_b_type ex_tool_coord_b;
  using _ex_tool_coord_c_type =
    double;
  _ex_tool_coord_c_type ex_tool_coord_c;
  using _ex_axis_coord_x_type =
    double;
  _ex_axis_coord_x_type ex_axis_coord_x;
  using _ex_axis_coord_y_type =
    double;
  _ex_axis_coord_y_type ex_axis_coord_y;
  using _ex_axis_coord_z_type =
    double;
  _ex_axis_coord_z_type ex_axis_coord_z;
  using _ex_axis_coord_a_type =
    double;
  _ex_axis_coord_a_type ex_axis_coord_a;
  using _ex_axis_coord_b_type =
    double;
  _ex_axis_coord_b_type ex_axis_coord_b;
  using _ex_axis_coord_c_type =
    double;
  _ex_axis_coord_c_type ex_axis_coord_c;
  using _load_type =
    double;
  _load_type load;
  using _load_cog_x_type =
    double;
  _load_cog_x_type load_cog_x;
  using _load_cog_y_type =
    double;
  _load_cog_y_type load_cog_y;
  using _load_cog_z_type =
    double;
  _load_cog_z_type load_cog_z;
  using _j1_last_servoj_target_type =
    double;
  _j1_last_servoj_target_type j1_last_servoj_target;
  using _j2_last_servoj_target_type =
    double;
  _j2_last_servoj_target_type j2_last_servoj_target;
  using _j3_last_servoj_target_type =
    double;
  _j3_last_servoj_target_type j3_last_servoj_target;
  using _j4_last_servoj_target_type =
    double;
  _j4_last_servoj_target_type j4_last_servoj_target;
  using _j5_last_servoj_target_type =
    double;
  _j5_last_servoj_target_type j5_last_servoj_target;
  using _j6_last_servoj_target_type =
    double;
  _j6_last_servoj_target_type j6_last_servoj_target;
  using _servoj_cmd_num_type =
    uint16_t;
  _servoj_cmd_num_type servoj_cmd_num;

  // setters for named parameter idiom
  Type & set__prg_state(
    const uint8_t & _arg)
  {
    this->prg_state = _arg;
    return *this;
  }
  Type & set__rbt_state(
    const uint8_t & _arg)
  {
    this->rbt_state = _arg;
    return *this;
  }
  Type & set__rbt_main_code(
    const uint16_t & _arg)
  {
    this->rbt_main_code = _arg;
    return *this;
  }
  Type & set__rbt_sub_code(
    const uint16_t & _arg)
  {
    this->rbt_sub_code = _arg;
    return *this;
  }
  Type & set__robot_mode(
    const uint8_t & _arg)
  {
    this->robot_mode = _arg;
    return *this;
  }
  Type & set__j1_cur_pos(
    const double & _arg)
  {
    this->j1_cur_pos = _arg;
    return *this;
  }
  Type & set__j2_cur_pos(
    const double & _arg)
  {
    this->j2_cur_pos = _arg;
    return *this;
  }
  Type & set__j3_cur_pos(
    const double & _arg)
  {
    this->j3_cur_pos = _arg;
    return *this;
  }
  Type & set__j4_cur_pos(
    const double & _arg)
  {
    this->j4_cur_pos = _arg;
    return *this;
  }
  Type & set__j5_cur_pos(
    const double & _arg)
  {
    this->j5_cur_pos = _arg;
    return *this;
  }
  Type & set__j6_cur_pos(
    const double & _arg)
  {
    this->j6_cur_pos = _arg;
    return *this;
  }
  Type & set__cart_x_cur_pos(
    const double & _arg)
  {
    this->cart_x_cur_pos = _arg;
    return *this;
  }
  Type & set__cart_y_cur_pos(
    const double & _arg)
  {
    this->cart_y_cur_pos = _arg;
    return *this;
  }
  Type & set__cart_z_cur_pos(
    const double & _arg)
  {
    this->cart_z_cur_pos = _arg;
    return *this;
  }
  Type & set__cart_a_cur_pos(
    const double & _arg)
  {
    this->cart_a_cur_pos = _arg;
    return *this;
  }
  Type & set__cart_b_cur_pos(
    const double & _arg)
  {
    this->cart_b_cur_pos = _arg;
    return *this;
  }
  Type & set__cart_c_cur_pos(
    const double & _arg)
  {
    this->cart_c_cur_pos = _arg;
    return *this;
  }
  Type & set__flange_x_cur_pos(
    const double & _arg)
  {
    this->flange_x_cur_pos = _arg;
    return *this;
  }
  Type & set__flange_y_cur_pos(
    const double & _arg)
  {
    this->flange_y_cur_pos = _arg;
    return *this;
  }
  Type & set__flange_z_cur_pos(
    const double & _arg)
  {
    this->flange_z_cur_pos = _arg;
    return *this;
  }
  Type & set__flange_a_cur_pos(
    const double & _arg)
  {
    this->flange_a_cur_pos = _arg;
    return *this;
  }
  Type & set__flange_b_cur_pos(
    const double & _arg)
  {
    this->flange_b_cur_pos = _arg;
    return *this;
  }
  Type & set__flange_c_cur_pos(
    const double & _arg)
  {
    this->flange_c_cur_pos = _arg;
    return *this;
  }
  Type & set__j1_actual_qd(
    const double & _arg)
  {
    this->j1_actual_qd = _arg;
    return *this;
  }
  Type & set__j2_actual_qd(
    const double & _arg)
  {
    this->j2_actual_qd = _arg;
    return *this;
  }
  Type & set__j3_actual_qd(
    const double & _arg)
  {
    this->j3_actual_qd = _arg;
    return *this;
  }
  Type & set__j4_actual_qd(
    const double & _arg)
  {
    this->j4_actual_qd = _arg;
    return *this;
  }
  Type & set__j5_actual_qd(
    const double & _arg)
  {
    this->j5_actual_qd = _arg;
    return *this;
  }
  Type & set__j6_actual_qd(
    const double & _arg)
  {
    this->j6_actual_qd = _arg;
    return *this;
  }
  Type & set__j1_actual_qdd(
    const double & _arg)
  {
    this->j1_actual_qdd = _arg;
    return *this;
  }
  Type & set__j2_actual_qdd(
    const double & _arg)
  {
    this->j2_actual_qdd = _arg;
    return *this;
  }
  Type & set__j3_actual_qdd(
    const double & _arg)
  {
    this->j3_actual_qdd = _arg;
    return *this;
  }
  Type & set__j4_actual_qdd(
    const double & _arg)
  {
    this->j4_actual_qdd = _arg;
    return *this;
  }
  Type & set__j5_actual_qdd(
    const double & _arg)
  {
    this->j5_actual_qdd = _arg;
    return *this;
  }
  Type & set__j6_actual_qdd(
    const double & _arg)
  {
    this->j6_actual_qdd = _arg;
    return *this;
  }
  Type & set__cart_lin_cmd_speed(
    const double & _arg)
  {
    this->cart_lin_cmd_speed = _arg;
    return *this;
  }
  Type & set__cart_rot_cmd_speed(
    const double & _arg)
  {
    this->cart_rot_cmd_speed = _arg;
    return *this;
  }
  Type & set__cart_x_cmd_speed(
    const double & _arg)
  {
    this->cart_x_cmd_speed = _arg;
    return *this;
  }
  Type & set__cart_y_cmd_speed(
    const double & _arg)
  {
    this->cart_y_cmd_speed = _arg;
    return *this;
  }
  Type & set__cart_z_cmd_speed(
    const double & _arg)
  {
    this->cart_z_cmd_speed = _arg;
    return *this;
  }
  Type & set__cart_a_cmd_speed(
    const double & _arg)
  {
    this->cart_a_cmd_speed = _arg;
    return *this;
  }
  Type & set__cart_b_cmd_speed(
    const double & _arg)
  {
    this->cart_b_cmd_speed = _arg;
    return *this;
  }
  Type & set__cart_c_cmd_speed(
    const double & _arg)
  {
    this->cart_c_cmd_speed = _arg;
    return *this;
  }
  Type & set__cart_lin_cur_speed(
    const double & _arg)
  {
    this->cart_lin_cur_speed = _arg;
    return *this;
  }
  Type & set__cart_rot_cur_speed(
    const double & _arg)
  {
    this->cart_rot_cur_speed = _arg;
    return *this;
  }
  Type & set__cart_x_cur_speed(
    const double & _arg)
  {
    this->cart_x_cur_speed = _arg;
    return *this;
  }
  Type & set__cart_y_cur_speed(
    const double & _arg)
  {
    this->cart_y_cur_speed = _arg;
    return *this;
  }
  Type & set__cart_z_cur_speed(
    const double & _arg)
  {
    this->cart_z_cur_speed = _arg;
    return *this;
  }
  Type & set__cart_a_cur_speed(
    const double & _arg)
  {
    this->cart_a_cur_speed = _arg;
    return *this;
  }
  Type & set__cart_b_cur_speed(
    const double & _arg)
  {
    this->cart_b_cur_speed = _arg;
    return *this;
  }
  Type & set__cart_c_cur_speed(
    const double & _arg)
  {
    this->cart_c_cur_speed = _arg;
    return *this;
  }
  Type & set__j1_cur_tor(
    const double & _arg)
  {
    this->j1_cur_tor = _arg;
    return *this;
  }
  Type & set__j2_cur_tor(
    const double & _arg)
  {
    this->j2_cur_tor = _arg;
    return *this;
  }
  Type & set__j3_cur_tor(
    const double & _arg)
  {
    this->j3_cur_tor = _arg;
    return *this;
  }
  Type & set__j4_cur_tor(
    const double & _arg)
  {
    this->j4_cur_tor = _arg;
    return *this;
  }
  Type & set__j5_cur_tor(
    const double & _arg)
  {
    this->j5_cur_tor = _arg;
    return *this;
  }
  Type & set__j6_cur_tor(
    const double & _arg)
  {
    this->j6_cur_tor = _arg;
    return *this;
  }
  Type & set__tool_num(
    const uint8_t & _arg)
  {
    this->tool_num = _arg;
    return *this;
  }
  Type & set__work_num(
    const uint8_t & _arg)
  {
    this->work_num = _arg;
    return *this;
  }
  Type & set__dgt_output_h(
    const uint8_t & _arg)
  {
    this->dgt_output_h = _arg;
    return *this;
  }
  Type & set__dgt_output_l(
    const uint8_t & _arg)
  {
    this->dgt_output_l = _arg;
    return *this;
  }
  Type & set__tl_dgt_output_l(
    const uint8_t & _arg)
  {
    this->tl_dgt_output_l = _arg;
    return *this;
  }
  Type & set__dgt_input_h(
    const uint8_t & _arg)
  {
    this->dgt_input_h = _arg;
    return *this;
  }
  Type & set__dgt_input_l(
    const uint8_t & _arg)
  {
    this->dgt_input_l = _arg;
    return *this;
  }
  Type & set__tl_dgt_input_l(
    const uint8_t & _arg)
  {
    this->tl_dgt_input_l = _arg;
    return *this;
  }
  Type & set__cl_analog_input_1(
    const uint16_t & _arg)
  {
    this->cl_analog_input_1 = _arg;
    return *this;
  }
  Type & set__cl_analog_input_2(
    const uint16_t & _arg)
  {
    this->cl_analog_input_2 = _arg;
    return *this;
  }
  Type & set__tl_anglog_input(
    const uint16_t & _arg)
  {
    this->tl_anglog_input = _arg;
    return *this;
  }
  Type & set__ft_fx_raw_data(
    const double & _arg)
  {
    this->ft_fx_raw_data = _arg;
    return *this;
  }
  Type & set__ft_fy_raw_data(
    const double & _arg)
  {
    this->ft_fy_raw_data = _arg;
    return *this;
  }
  Type & set__ft_fz_raw_data(
    const double & _arg)
  {
    this->ft_fz_raw_data = _arg;
    return *this;
  }
  Type & set__ft_tx_raw_data(
    const double & _arg)
  {
    this->ft_tx_raw_data = _arg;
    return *this;
  }
  Type & set__ft_ty_raw_data(
    const double & _arg)
  {
    this->ft_ty_raw_data = _arg;
    return *this;
  }
  Type & set__ft_tz_raw_data(
    const double & _arg)
  {
    this->ft_tz_raw_data = _arg;
    return *this;
  }
  Type & set__ft_fx_data(
    const double & _arg)
  {
    this->ft_fx_data = _arg;
    return *this;
  }
  Type & set__ft_fy_data(
    const double & _arg)
  {
    this->ft_fy_data = _arg;
    return *this;
  }
  Type & set__ft_fz_data(
    const double & _arg)
  {
    this->ft_fz_data = _arg;
    return *this;
  }
  Type & set__ft_tx_data(
    const double & _arg)
  {
    this->ft_tx_data = _arg;
    return *this;
  }
  Type & set__ft_ty_data(
    const double & _arg)
  {
    this->ft_ty_data = _arg;
    return *this;
  }
  Type & set__ft_tz_data(
    const double & _arg)
  {
    this->ft_tz_data = _arg;
    return *this;
  }
  Type & set__ft_actstatus(
    const uint8_t & _arg)
  {
    this->ft_actstatus = _arg;
    return *this;
  }
  Type & set__emg(
    const uint8_t & _arg)
  {
    this->emg = _arg;
    return *this;
  }
  Type & set__motion_done(
    const uint8_t & _arg)
  {
    this->motion_done = _arg;
    return *this;
  }
  Type & set__grip_motion_done(
    const uint8_t & _arg)
  {
    this->grip_motion_done = _arg;
    return *this;
  }
  Type & set__mc_queue_len(
    const uint16_t & _arg)
  {
    this->mc_queue_len = _arg;
    return *this;
  }
  Type & set__collision_err(
    const uint8_t & _arg)
  {
    this->collision_err = _arg;
    return *this;
  }
  Type & set__trajectory_pnum(
    const uint16_t & _arg)
  {
    this->trajectory_pnum = _arg;
    return *this;
  }
  Type & set__safety_stop1_state(
    const uint8_t & _arg)
  {
    this->safety_stop1_state = _arg;
    return *this;
  }
  Type & set__safety_stop2_state(
    const uint8_t & _arg)
  {
    this->safety_stop2_state = _arg;
    return *this;
  }
  Type & set__gripper_fault_id(
    const uint8_t & _arg)
  {
    this->gripper_fault_id = _arg;
    return *this;
  }
  Type & set__grippererro(
    const uint16_t & _arg)
  {
    this->grippererro = _arg;
    return *this;
  }
  Type & set__gripper_active(
    const uint16_t & _arg)
  {
    this->gripper_active = _arg;
    return *this;
  }
  Type & set__gripper_position(
    const uint8_t & _arg)
  {
    this->gripper_position = _arg;
    return *this;
  }
  Type & set__gripper_speed(
    const uint8_t & _arg)
  {
    this->gripper_speed = _arg;
    return *this;
  }
  Type & set__gripper_current(
    const uint8_t & _arg)
  {
    this->gripper_current = _arg;
    return *this;
  }
  Type & set__gripper_temp(
    const uint16_t & _arg)
  {
    this->gripper_temp = _arg;
    return *this;
  }
  Type & set__gripper_voltage(
    const uint16_t & _arg)
  {
    this->gripper_voltage = _arg;
    return *this;
  }
  Type & set__aux_servo_id(
    const uint8_t & _arg)
  {
    this->aux_servo_id = _arg;
    return *this;
  }
  Type & set__aux_servo_err(
    const uint16_t & _arg)
  {
    this->aux_servo_err = _arg;
    return *this;
  }
  Type & set__aux_servo_state(
    const uint16_t & _arg)
  {
    this->aux_servo_state = _arg;
    return *this;
  }
  Type & set__aux_servo_pos(
    const double & _arg)
  {
    this->aux_servo_pos = _arg;
    return *this;
  }
  Type & set__aux_servo_vel(
    const double & _arg)
  {
    this->aux_servo_vel = _arg;
    return *this;
  }
  Type & set__aux_servo_torque(
    const double & _arg)
  {
    this->aux_servo_torque = _arg;
    return *this;
  }
  Type & set__ext_di_state_1(
    const uint16_t & _arg)
  {
    this->ext_di_state_1 = _arg;
    return *this;
  }
  Type & set__ext_di_state_2(
    const uint16_t & _arg)
  {
    this->ext_di_state_2 = _arg;
    return *this;
  }
  Type & set__ext_di_state_3(
    const uint16_t & _arg)
  {
    this->ext_di_state_3 = _arg;
    return *this;
  }
  Type & set__ext_di_state_4(
    const uint16_t & _arg)
  {
    this->ext_di_state_4 = _arg;
    return *this;
  }
  Type & set__ext_di_state_5(
    const uint16_t & _arg)
  {
    this->ext_di_state_5 = _arg;
    return *this;
  }
  Type & set__ext_di_state_6(
    const uint16_t & _arg)
  {
    this->ext_di_state_6 = _arg;
    return *this;
  }
  Type & set__ext_di_state_7(
    const uint16_t & _arg)
  {
    this->ext_di_state_7 = _arg;
    return *this;
  }
  Type & set__ext_di_state_8(
    const uint16_t & _arg)
  {
    this->ext_di_state_8 = _arg;
    return *this;
  }
  Type & set__ext_do_state_1(
    const uint16_t & _arg)
  {
    this->ext_do_state_1 = _arg;
    return *this;
  }
  Type & set__ext_do_state_2(
    const uint16_t & _arg)
  {
    this->ext_do_state_2 = _arg;
    return *this;
  }
  Type & set__ext_do_state_3(
    const uint16_t & _arg)
  {
    this->ext_do_state_3 = _arg;
    return *this;
  }
  Type & set__ext_do_state_4(
    const uint16_t & _arg)
  {
    this->ext_do_state_4 = _arg;
    return *this;
  }
  Type & set__ext_do_state_5(
    const uint16_t & _arg)
  {
    this->ext_do_state_5 = _arg;
    return *this;
  }
  Type & set__ext_do_state_6(
    const uint16_t & _arg)
  {
    this->ext_do_state_6 = _arg;
    return *this;
  }
  Type & set__ext_do_state_7(
    const uint16_t & _arg)
  {
    this->ext_do_state_7 = _arg;
    return *this;
  }
  Type & set__ext_do_state_8(
    const uint16_t & _arg)
  {
    this->ext_do_state_8 = _arg;
    return *this;
  }
  Type & set__ext_ai_state_1(
    const uint16_t & _arg)
  {
    this->ext_ai_state_1 = _arg;
    return *this;
  }
  Type & set__ext_ai_state_2(
    const uint16_t & _arg)
  {
    this->ext_ai_state_2 = _arg;
    return *this;
  }
  Type & set__ext_ai_state_3(
    const uint16_t & _arg)
  {
    this->ext_ai_state_3 = _arg;
    return *this;
  }
  Type & set__ext_ai_state_4(
    const uint16_t & _arg)
  {
    this->ext_ai_state_4 = _arg;
    return *this;
  }
  Type & set__ext_ao_state_1(
    const uint16_t & _arg)
  {
    this->ext_ao_state_1 = _arg;
    return *this;
  }
  Type & set__ext_ao_state_2(
    const uint16_t & _arg)
  {
    this->ext_ao_state_2 = _arg;
    return *this;
  }
  Type & set__ext_ao_state_3(
    const uint16_t & _arg)
  {
    this->ext_ao_state_3 = _arg;
    return *this;
  }
  Type & set__ext_ao_state_4(
    const uint16_t & _arg)
  {
    this->ext_ao_state_4 = _arg;
    return *this;
  }
  Type & set__rbt_enable_state(
    const uint8_t & _arg)
  {
    this->rbt_enable_state = _arg;
    return *this;
  }
  Type & set__end_lua_err_code(
    const uint16_t & _arg)
  {
    this->end_lua_err_code = _arg;
    return *this;
  }
  Type & set__cl_analog_output_1(
    const uint16_t & _arg)
  {
    this->cl_analog_output_1 = _arg;
    return *this;
  }
  Type & set__cl_analog_output_2(
    const uint16_t & _arg)
  {
    this->cl_analog_output_2 = _arg;
    return *this;
  }
  Type & set__tl_analog_output(
    const uint16_t & _arg)
  {
    this->tl_analog_output = _arg;
    return *this;
  }
  Type & set__gripper_rot_num(
    const double & _arg)
  {
    this->gripper_rot_num = _arg;
    return *this;
  }
  Type & set__gripper_rot_speed(
    const uint8_t & _arg)
  {
    this->gripper_rot_speed = _arg;
    return *this;
  }
  Type & set__gripper_rot_torque(
    const uint8_t & _arg)
  {
    this->gripper_rot_torque = _arg;
    return *this;
  }
  Type & set__weldbreakoffstate(
    const uint8_t & _arg)
  {
    this->weldbreakoffstate = _arg;
    return *this;
  }
  Type & set__weldarcstate(
    const uint8_t & _arg)
  {
    this->weldarcstate = _arg;
    return *this;
  }
  Type & set__j1_tgt_tor(
    const double & _arg)
  {
    this->j1_tgt_tor = _arg;
    return *this;
  }
  Type & set__j2_tgt_tor(
    const double & _arg)
  {
    this->j2_tgt_tor = _arg;
    return *this;
  }
  Type & set__j3_tgt_tor(
    const double & _arg)
  {
    this->j3_tgt_tor = _arg;
    return *this;
  }
  Type & set__j4_tgt_tor(
    const double & _arg)
  {
    this->j4_tgt_tor = _arg;
    return *this;
  }
  Type & set__j5_tgt_tor(
    const double & _arg)
  {
    this->j5_tgt_tor = _arg;
    return *this;
  }
  Type & set__j6_tgt_tor(
    const double & _arg)
  {
    this->j6_tgt_tor = _arg;
    return *this;
  }
  Type & set__jwide_voltage_ctrl_box_temp(
    const double & _arg)
  {
    this->jwide_voltage_ctrl_box_temp = _arg;
    return *this;
  }
  Type & set__wide_voltage_ctrl_box_fan_current(
    const uint16_t & _arg)
  {
    this->wide_voltage_ctrl_box_fan_current = _arg;
    return *this;
  }
  Type & set__tool_coord_x(
    const double & _arg)
  {
    this->tool_coord_x = _arg;
    return *this;
  }
  Type & set__tool_coord_y(
    const double & _arg)
  {
    this->tool_coord_y = _arg;
    return *this;
  }
  Type & set__tool_coord_z(
    const double & _arg)
  {
    this->tool_coord_z = _arg;
    return *this;
  }
  Type & set__tool_coord_a(
    const double & _arg)
  {
    this->tool_coord_a = _arg;
    return *this;
  }
  Type & set__tool_coord_b(
    const double & _arg)
  {
    this->tool_coord_b = _arg;
    return *this;
  }
  Type & set__tool_coord_c(
    const double & _arg)
  {
    this->tool_coord_c = _arg;
    return *this;
  }
  Type & set__wobj_coord_x(
    const double & _arg)
  {
    this->wobj_coord_x = _arg;
    return *this;
  }
  Type & set__wobj_coord_y(
    const double & _arg)
  {
    this->wobj_coord_y = _arg;
    return *this;
  }
  Type & set__wobj_coord_z(
    const double & _arg)
  {
    this->wobj_coord_z = _arg;
    return *this;
  }
  Type & set__wobj_coord_a(
    const double & _arg)
  {
    this->wobj_coord_a = _arg;
    return *this;
  }
  Type & set__wobj_coord_b(
    const double & _arg)
  {
    this->wobj_coord_b = _arg;
    return *this;
  }
  Type & set__wobj_coord_c(
    const double & _arg)
  {
    this->wobj_coord_c = _arg;
    return *this;
  }
  Type & set__ex_tool_coord_x(
    const double & _arg)
  {
    this->ex_tool_coord_x = _arg;
    return *this;
  }
  Type & set__ex_tool_coord_y(
    const double & _arg)
  {
    this->ex_tool_coord_y = _arg;
    return *this;
  }
  Type & set__ex_tool_coord_z(
    const double & _arg)
  {
    this->ex_tool_coord_z = _arg;
    return *this;
  }
  Type & set__ex_tool_coord_a(
    const double & _arg)
  {
    this->ex_tool_coord_a = _arg;
    return *this;
  }
  Type & set__ex_tool_coord_b(
    const double & _arg)
  {
    this->ex_tool_coord_b = _arg;
    return *this;
  }
  Type & set__ex_tool_coord_c(
    const double & _arg)
  {
    this->ex_tool_coord_c = _arg;
    return *this;
  }
  Type & set__ex_axis_coord_x(
    const double & _arg)
  {
    this->ex_axis_coord_x = _arg;
    return *this;
  }
  Type & set__ex_axis_coord_y(
    const double & _arg)
  {
    this->ex_axis_coord_y = _arg;
    return *this;
  }
  Type & set__ex_axis_coord_z(
    const double & _arg)
  {
    this->ex_axis_coord_z = _arg;
    return *this;
  }
  Type & set__ex_axis_coord_a(
    const double & _arg)
  {
    this->ex_axis_coord_a = _arg;
    return *this;
  }
  Type & set__ex_axis_coord_b(
    const double & _arg)
  {
    this->ex_axis_coord_b = _arg;
    return *this;
  }
  Type & set__ex_axis_coord_c(
    const double & _arg)
  {
    this->ex_axis_coord_c = _arg;
    return *this;
  }
  Type & set__load(
    const double & _arg)
  {
    this->load = _arg;
    return *this;
  }
  Type & set__load_cog_x(
    const double & _arg)
  {
    this->load_cog_x = _arg;
    return *this;
  }
  Type & set__load_cog_y(
    const double & _arg)
  {
    this->load_cog_y = _arg;
    return *this;
  }
  Type & set__load_cog_z(
    const double & _arg)
  {
    this->load_cog_z = _arg;
    return *this;
  }
  Type & set__j1_last_servoj_target(
    const double & _arg)
  {
    this->j1_last_servoj_target = _arg;
    return *this;
  }
  Type & set__j2_last_servoj_target(
    const double & _arg)
  {
    this->j2_last_servoj_target = _arg;
    return *this;
  }
  Type & set__j3_last_servoj_target(
    const double & _arg)
  {
    this->j3_last_servoj_target = _arg;
    return *this;
  }
  Type & set__j4_last_servoj_target(
    const double & _arg)
  {
    this->j4_last_servoj_target = _arg;
    return *this;
  }
  Type & set__j5_last_servoj_target(
    const double & _arg)
  {
    this->j5_last_servoj_target = _arg;
    return *this;
  }
  Type & set__j6_last_servoj_target(
    const double & _arg)
  {
    this->j6_last_servoj_target = _arg;
    return *this;
  }
  Type & set__servoj_cmd_num(
    const uint16_t & _arg)
  {
    this->servoj_cmd_num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fairino_msgs::msg::RobotNonrtState_<ContainerAllocator> *;
  using ConstRawPtr =
    const fairino_msgs::msg::RobotNonrtState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fairino_msgs::msg::RobotNonrtState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fairino_msgs::msg::RobotNonrtState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fairino_msgs::msg::RobotNonrtState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fairino_msgs::msg::RobotNonrtState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fairino_msgs::msg::RobotNonrtState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fairino_msgs::msg::RobotNonrtState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fairino_msgs::msg::RobotNonrtState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fairino_msgs::msg::RobotNonrtState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fairino_msgs__msg__RobotNonrtState
    std::shared_ptr<fairino_msgs::msg::RobotNonrtState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fairino_msgs__msg__RobotNonrtState
    std::shared_ptr<fairino_msgs::msg::RobotNonrtState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotNonrtState_ & other) const
  {
    if (this->prg_state != other.prg_state) {
      return false;
    }
    if (this->rbt_state != other.rbt_state) {
      return false;
    }
    if (this->rbt_main_code != other.rbt_main_code) {
      return false;
    }
    if (this->rbt_sub_code != other.rbt_sub_code) {
      return false;
    }
    if (this->robot_mode != other.robot_mode) {
      return false;
    }
    if (this->j1_cur_pos != other.j1_cur_pos) {
      return false;
    }
    if (this->j2_cur_pos != other.j2_cur_pos) {
      return false;
    }
    if (this->j3_cur_pos != other.j3_cur_pos) {
      return false;
    }
    if (this->j4_cur_pos != other.j4_cur_pos) {
      return false;
    }
    if (this->j5_cur_pos != other.j5_cur_pos) {
      return false;
    }
    if (this->j6_cur_pos != other.j6_cur_pos) {
      return false;
    }
    if (this->cart_x_cur_pos != other.cart_x_cur_pos) {
      return false;
    }
    if (this->cart_y_cur_pos != other.cart_y_cur_pos) {
      return false;
    }
    if (this->cart_z_cur_pos != other.cart_z_cur_pos) {
      return false;
    }
    if (this->cart_a_cur_pos != other.cart_a_cur_pos) {
      return false;
    }
    if (this->cart_b_cur_pos != other.cart_b_cur_pos) {
      return false;
    }
    if (this->cart_c_cur_pos != other.cart_c_cur_pos) {
      return false;
    }
    if (this->flange_x_cur_pos != other.flange_x_cur_pos) {
      return false;
    }
    if (this->flange_y_cur_pos != other.flange_y_cur_pos) {
      return false;
    }
    if (this->flange_z_cur_pos != other.flange_z_cur_pos) {
      return false;
    }
    if (this->flange_a_cur_pos != other.flange_a_cur_pos) {
      return false;
    }
    if (this->flange_b_cur_pos != other.flange_b_cur_pos) {
      return false;
    }
    if (this->flange_c_cur_pos != other.flange_c_cur_pos) {
      return false;
    }
    if (this->j1_actual_qd != other.j1_actual_qd) {
      return false;
    }
    if (this->j2_actual_qd != other.j2_actual_qd) {
      return false;
    }
    if (this->j3_actual_qd != other.j3_actual_qd) {
      return false;
    }
    if (this->j4_actual_qd != other.j4_actual_qd) {
      return false;
    }
    if (this->j5_actual_qd != other.j5_actual_qd) {
      return false;
    }
    if (this->j6_actual_qd != other.j6_actual_qd) {
      return false;
    }
    if (this->j1_actual_qdd != other.j1_actual_qdd) {
      return false;
    }
    if (this->j2_actual_qdd != other.j2_actual_qdd) {
      return false;
    }
    if (this->j3_actual_qdd != other.j3_actual_qdd) {
      return false;
    }
    if (this->j4_actual_qdd != other.j4_actual_qdd) {
      return false;
    }
    if (this->j5_actual_qdd != other.j5_actual_qdd) {
      return false;
    }
    if (this->j6_actual_qdd != other.j6_actual_qdd) {
      return false;
    }
    if (this->cart_lin_cmd_speed != other.cart_lin_cmd_speed) {
      return false;
    }
    if (this->cart_rot_cmd_speed != other.cart_rot_cmd_speed) {
      return false;
    }
    if (this->cart_x_cmd_speed != other.cart_x_cmd_speed) {
      return false;
    }
    if (this->cart_y_cmd_speed != other.cart_y_cmd_speed) {
      return false;
    }
    if (this->cart_z_cmd_speed != other.cart_z_cmd_speed) {
      return false;
    }
    if (this->cart_a_cmd_speed != other.cart_a_cmd_speed) {
      return false;
    }
    if (this->cart_b_cmd_speed != other.cart_b_cmd_speed) {
      return false;
    }
    if (this->cart_c_cmd_speed != other.cart_c_cmd_speed) {
      return false;
    }
    if (this->cart_lin_cur_speed != other.cart_lin_cur_speed) {
      return false;
    }
    if (this->cart_rot_cur_speed != other.cart_rot_cur_speed) {
      return false;
    }
    if (this->cart_x_cur_speed != other.cart_x_cur_speed) {
      return false;
    }
    if (this->cart_y_cur_speed != other.cart_y_cur_speed) {
      return false;
    }
    if (this->cart_z_cur_speed != other.cart_z_cur_speed) {
      return false;
    }
    if (this->cart_a_cur_speed != other.cart_a_cur_speed) {
      return false;
    }
    if (this->cart_b_cur_speed != other.cart_b_cur_speed) {
      return false;
    }
    if (this->cart_c_cur_speed != other.cart_c_cur_speed) {
      return false;
    }
    if (this->j1_cur_tor != other.j1_cur_tor) {
      return false;
    }
    if (this->j2_cur_tor != other.j2_cur_tor) {
      return false;
    }
    if (this->j3_cur_tor != other.j3_cur_tor) {
      return false;
    }
    if (this->j4_cur_tor != other.j4_cur_tor) {
      return false;
    }
    if (this->j5_cur_tor != other.j5_cur_tor) {
      return false;
    }
    if (this->j6_cur_tor != other.j6_cur_tor) {
      return false;
    }
    if (this->tool_num != other.tool_num) {
      return false;
    }
    if (this->work_num != other.work_num) {
      return false;
    }
    if (this->dgt_output_h != other.dgt_output_h) {
      return false;
    }
    if (this->dgt_output_l != other.dgt_output_l) {
      return false;
    }
    if (this->tl_dgt_output_l != other.tl_dgt_output_l) {
      return false;
    }
    if (this->dgt_input_h != other.dgt_input_h) {
      return false;
    }
    if (this->dgt_input_l != other.dgt_input_l) {
      return false;
    }
    if (this->tl_dgt_input_l != other.tl_dgt_input_l) {
      return false;
    }
    if (this->cl_analog_input_1 != other.cl_analog_input_1) {
      return false;
    }
    if (this->cl_analog_input_2 != other.cl_analog_input_2) {
      return false;
    }
    if (this->tl_anglog_input != other.tl_anglog_input) {
      return false;
    }
    if (this->ft_fx_raw_data != other.ft_fx_raw_data) {
      return false;
    }
    if (this->ft_fy_raw_data != other.ft_fy_raw_data) {
      return false;
    }
    if (this->ft_fz_raw_data != other.ft_fz_raw_data) {
      return false;
    }
    if (this->ft_tx_raw_data != other.ft_tx_raw_data) {
      return false;
    }
    if (this->ft_ty_raw_data != other.ft_ty_raw_data) {
      return false;
    }
    if (this->ft_tz_raw_data != other.ft_tz_raw_data) {
      return false;
    }
    if (this->ft_fx_data != other.ft_fx_data) {
      return false;
    }
    if (this->ft_fy_data != other.ft_fy_data) {
      return false;
    }
    if (this->ft_fz_data != other.ft_fz_data) {
      return false;
    }
    if (this->ft_tx_data != other.ft_tx_data) {
      return false;
    }
    if (this->ft_ty_data != other.ft_ty_data) {
      return false;
    }
    if (this->ft_tz_data != other.ft_tz_data) {
      return false;
    }
    if (this->ft_actstatus != other.ft_actstatus) {
      return false;
    }
    if (this->emg != other.emg) {
      return false;
    }
    if (this->motion_done != other.motion_done) {
      return false;
    }
    if (this->grip_motion_done != other.grip_motion_done) {
      return false;
    }
    if (this->mc_queue_len != other.mc_queue_len) {
      return false;
    }
    if (this->collision_err != other.collision_err) {
      return false;
    }
    if (this->trajectory_pnum != other.trajectory_pnum) {
      return false;
    }
    if (this->safety_stop1_state != other.safety_stop1_state) {
      return false;
    }
    if (this->safety_stop2_state != other.safety_stop2_state) {
      return false;
    }
    if (this->gripper_fault_id != other.gripper_fault_id) {
      return false;
    }
    if (this->grippererro != other.grippererro) {
      return false;
    }
    if (this->gripper_active != other.gripper_active) {
      return false;
    }
    if (this->gripper_position != other.gripper_position) {
      return false;
    }
    if (this->gripper_speed != other.gripper_speed) {
      return false;
    }
    if (this->gripper_current != other.gripper_current) {
      return false;
    }
    if (this->gripper_temp != other.gripper_temp) {
      return false;
    }
    if (this->gripper_voltage != other.gripper_voltage) {
      return false;
    }
    if (this->aux_servo_id != other.aux_servo_id) {
      return false;
    }
    if (this->aux_servo_err != other.aux_servo_err) {
      return false;
    }
    if (this->aux_servo_state != other.aux_servo_state) {
      return false;
    }
    if (this->aux_servo_pos != other.aux_servo_pos) {
      return false;
    }
    if (this->aux_servo_vel != other.aux_servo_vel) {
      return false;
    }
    if (this->aux_servo_torque != other.aux_servo_torque) {
      return false;
    }
    if (this->ext_di_state_1 != other.ext_di_state_1) {
      return false;
    }
    if (this->ext_di_state_2 != other.ext_di_state_2) {
      return false;
    }
    if (this->ext_di_state_3 != other.ext_di_state_3) {
      return false;
    }
    if (this->ext_di_state_4 != other.ext_di_state_4) {
      return false;
    }
    if (this->ext_di_state_5 != other.ext_di_state_5) {
      return false;
    }
    if (this->ext_di_state_6 != other.ext_di_state_6) {
      return false;
    }
    if (this->ext_di_state_7 != other.ext_di_state_7) {
      return false;
    }
    if (this->ext_di_state_8 != other.ext_di_state_8) {
      return false;
    }
    if (this->ext_do_state_1 != other.ext_do_state_1) {
      return false;
    }
    if (this->ext_do_state_2 != other.ext_do_state_2) {
      return false;
    }
    if (this->ext_do_state_3 != other.ext_do_state_3) {
      return false;
    }
    if (this->ext_do_state_4 != other.ext_do_state_4) {
      return false;
    }
    if (this->ext_do_state_5 != other.ext_do_state_5) {
      return false;
    }
    if (this->ext_do_state_6 != other.ext_do_state_6) {
      return false;
    }
    if (this->ext_do_state_7 != other.ext_do_state_7) {
      return false;
    }
    if (this->ext_do_state_8 != other.ext_do_state_8) {
      return false;
    }
    if (this->ext_ai_state_1 != other.ext_ai_state_1) {
      return false;
    }
    if (this->ext_ai_state_2 != other.ext_ai_state_2) {
      return false;
    }
    if (this->ext_ai_state_3 != other.ext_ai_state_3) {
      return false;
    }
    if (this->ext_ai_state_4 != other.ext_ai_state_4) {
      return false;
    }
    if (this->ext_ao_state_1 != other.ext_ao_state_1) {
      return false;
    }
    if (this->ext_ao_state_2 != other.ext_ao_state_2) {
      return false;
    }
    if (this->ext_ao_state_3 != other.ext_ao_state_3) {
      return false;
    }
    if (this->ext_ao_state_4 != other.ext_ao_state_4) {
      return false;
    }
    if (this->rbt_enable_state != other.rbt_enable_state) {
      return false;
    }
    if (this->end_lua_err_code != other.end_lua_err_code) {
      return false;
    }
    if (this->cl_analog_output_1 != other.cl_analog_output_1) {
      return false;
    }
    if (this->cl_analog_output_2 != other.cl_analog_output_2) {
      return false;
    }
    if (this->tl_analog_output != other.tl_analog_output) {
      return false;
    }
    if (this->gripper_rot_num != other.gripper_rot_num) {
      return false;
    }
    if (this->gripper_rot_speed != other.gripper_rot_speed) {
      return false;
    }
    if (this->gripper_rot_torque != other.gripper_rot_torque) {
      return false;
    }
    if (this->weldbreakoffstate != other.weldbreakoffstate) {
      return false;
    }
    if (this->weldarcstate != other.weldarcstate) {
      return false;
    }
    if (this->j1_tgt_tor != other.j1_tgt_tor) {
      return false;
    }
    if (this->j2_tgt_tor != other.j2_tgt_tor) {
      return false;
    }
    if (this->j3_tgt_tor != other.j3_tgt_tor) {
      return false;
    }
    if (this->j4_tgt_tor != other.j4_tgt_tor) {
      return false;
    }
    if (this->j5_tgt_tor != other.j5_tgt_tor) {
      return false;
    }
    if (this->j6_tgt_tor != other.j6_tgt_tor) {
      return false;
    }
    if (this->jwide_voltage_ctrl_box_temp != other.jwide_voltage_ctrl_box_temp) {
      return false;
    }
    if (this->wide_voltage_ctrl_box_fan_current != other.wide_voltage_ctrl_box_fan_current) {
      return false;
    }
    if (this->tool_coord_x != other.tool_coord_x) {
      return false;
    }
    if (this->tool_coord_y != other.tool_coord_y) {
      return false;
    }
    if (this->tool_coord_z != other.tool_coord_z) {
      return false;
    }
    if (this->tool_coord_a != other.tool_coord_a) {
      return false;
    }
    if (this->tool_coord_b != other.tool_coord_b) {
      return false;
    }
    if (this->tool_coord_c != other.tool_coord_c) {
      return false;
    }
    if (this->wobj_coord_x != other.wobj_coord_x) {
      return false;
    }
    if (this->wobj_coord_y != other.wobj_coord_y) {
      return false;
    }
    if (this->wobj_coord_z != other.wobj_coord_z) {
      return false;
    }
    if (this->wobj_coord_a != other.wobj_coord_a) {
      return false;
    }
    if (this->wobj_coord_b != other.wobj_coord_b) {
      return false;
    }
    if (this->wobj_coord_c != other.wobj_coord_c) {
      return false;
    }
    if (this->ex_tool_coord_x != other.ex_tool_coord_x) {
      return false;
    }
    if (this->ex_tool_coord_y != other.ex_tool_coord_y) {
      return false;
    }
    if (this->ex_tool_coord_z != other.ex_tool_coord_z) {
      return false;
    }
    if (this->ex_tool_coord_a != other.ex_tool_coord_a) {
      return false;
    }
    if (this->ex_tool_coord_b != other.ex_tool_coord_b) {
      return false;
    }
    if (this->ex_tool_coord_c != other.ex_tool_coord_c) {
      return false;
    }
    if (this->ex_axis_coord_x != other.ex_axis_coord_x) {
      return false;
    }
    if (this->ex_axis_coord_y != other.ex_axis_coord_y) {
      return false;
    }
    if (this->ex_axis_coord_z != other.ex_axis_coord_z) {
      return false;
    }
    if (this->ex_axis_coord_a != other.ex_axis_coord_a) {
      return false;
    }
    if (this->ex_axis_coord_b != other.ex_axis_coord_b) {
      return false;
    }
    if (this->ex_axis_coord_c != other.ex_axis_coord_c) {
      return false;
    }
    if (this->load != other.load) {
      return false;
    }
    if (this->load_cog_x != other.load_cog_x) {
      return false;
    }
    if (this->load_cog_y != other.load_cog_y) {
      return false;
    }
    if (this->load_cog_z != other.load_cog_z) {
      return false;
    }
    if (this->j1_last_servoj_target != other.j1_last_servoj_target) {
      return false;
    }
    if (this->j2_last_servoj_target != other.j2_last_servoj_target) {
      return false;
    }
    if (this->j3_last_servoj_target != other.j3_last_servoj_target) {
      return false;
    }
    if (this->j4_last_servoj_target != other.j4_last_servoj_target) {
      return false;
    }
    if (this->j5_last_servoj_target != other.j5_last_servoj_target) {
      return false;
    }
    if (this->j6_last_servoj_target != other.j6_last_servoj_target) {
      return false;
    }
    if (this->servoj_cmd_num != other.servoj_cmd_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotNonrtState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotNonrtState_

// alias to use template instance with default allocator
using RobotNonrtState =
  fairino_msgs::msg::RobotNonrtState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fairino_msgs

#endif  // FAIRINO_MSGS__MSG__DETAIL__ROBOT_NONRT_STATE__STRUCT_HPP_
