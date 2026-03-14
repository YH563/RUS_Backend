// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fairino_msgs:msg/RobotNonrtState.idl
// generated code does not contain a copyright notice
#include "fairino_msgs/msg/detail/robot_nonrt_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
fairino_msgs__msg__RobotNonrtState__init(fairino_msgs__msg__RobotNonrtState * msg)
{
  if (!msg) {
    return false;
  }
  // prg_state
  // rbt_state
  // rbt_main_code
  // rbt_sub_code
  // robot_mode
  // j1_cur_pos
  // j2_cur_pos
  // j3_cur_pos
  // j4_cur_pos
  // j5_cur_pos
  // j6_cur_pos
  // cart_x_cur_pos
  // cart_y_cur_pos
  // cart_z_cur_pos
  // cart_a_cur_pos
  // cart_b_cur_pos
  // cart_c_cur_pos
  // flange_x_cur_pos
  // flange_y_cur_pos
  // flange_z_cur_pos
  // flange_a_cur_pos
  // flange_b_cur_pos
  // flange_c_cur_pos
  // j1_actual_qd
  // j2_actual_qd
  // j3_actual_qd
  // j4_actual_qd
  // j5_actual_qd
  // j6_actual_qd
  // j1_actual_qdd
  // j2_actual_qdd
  // j3_actual_qdd
  // j4_actual_qdd
  // j5_actual_qdd
  // j6_actual_qdd
  // cart_lin_cmd_speed
  // cart_rot_cmd_speed
  // cart_x_cmd_speed
  // cart_y_cmd_speed
  // cart_z_cmd_speed
  // cart_a_cmd_speed
  // cart_b_cmd_speed
  // cart_c_cmd_speed
  // cart_lin_cur_speed
  // cart_rot_cur_speed
  // cart_x_cur_speed
  // cart_y_cur_speed
  // cart_z_cur_speed
  // cart_a_cur_speed
  // cart_b_cur_speed
  // cart_c_cur_speed
  // j1_cur_tor
  // j2_cur_tor
  // j3_cur_tor
  // j4_cur_tor
  // j5_cur_tor
  // j6_cur_tor
  // tool_num
  // work_num
  // dgt_output_h
  // dgt_output_l
  // tl_dgt_output_l
  // dgt_input_h
  // dgt_input_l
  // tl_dgt_input_l
  // cl_analog_input_1
  // cl_analog_input_2
  // tl_anglog_input
  // ft_fx_raw_data
  // ft_fy_raw_data
  // ft_fz_raw_data
  // ft_tx_raw_data
  // ft_ty_raw_data
  // ft_tz_raw_data
  // ft_fx_data
  // ft_fy_data
  // ft_fz_data
  // ft_tx_data
  // ft_ty_data
  // ft_tz_data
  // ft_actstatus
  // emg
  // motion_done
  // grip_motion_done
  // mc_queue_len
  // collision_err
  // trajectory_pnum
  // safety_stop1_state
  // safety_stop2_state
  // gripper_fault_id
  // grippererro
  // gripper_active
  // gripper_position
  // gripper_speed
  // gripper_current
  // gripper_temp
  // gripper_voltage
  // aux_servo_id
  // aux_servo_err
  // aux_servo_state
  // aux_servo_pos
  // aux_servo_vel
  // aux_servo_torque
  // ext_di_state_1
  // ext_di_state_2
  // ext_di_state_3
  // ext_di_state_4
  // ext_di_state_5
  // ext_di_state_6
  // ext_di_state_7
  // ext_di_state_8
  // ext_do_state_1
  // ext_do_state_2
  // ext_do_state_3
  // ext_do_state_4
  // ext_do_state_5
  // ext_do_state_6
  // ext_do_state_7
  // ext_do_state_8
  // ext_ai_state_1
  // ext_ai_state_2
  // ext_ai_state_3
  // ext_ai_state_4
  // ext_ao_state_1
  // ext_ao_state_2
  // ext_ao_state_3
  // ext_ao_state_4
  // rbt_enable_state
  // end_lua_err_code
  // cl_analog_output_1
  // cl_analog_output_2
  // tl_analog_output
  // gripper_rot_num
  // gripper_rot_speed
  // gripper_rot_torque
  // weldbreakoffstate
  // weldarcstate
  // j1_tgt_tor
  // j2_tgt_tor
  // j3_tgt_tor
  // j4_tgt_tor
  // j5_tgt_tor
  // j6_tgt_tor
  // jwide_voltage_ctrl_box_temp
  // wide_voltage_ctrl_box_fan_current
  // tool_coord_x
  // tool_coord_y
  // tool_coord_z
  // tool_coord_a
  // tool_coord_b
  // tool_coord_c
  // wobj_coord_x
  // wobj_coord_y
  // wobj_coord_z
  // wobj_coord_a
  // wobj_coord_b
  // wobj_coord_c
  // ex_tool_coord_x
  // ex_tool_coord_y
  // ex_tool_coord_z
  // ex_tool_coord_a
  // ex_tool_coord_b
  // ex_tool_coord_c
  // ex_axis_coord_x
  // ex_axis_coord_y
  // ex_axis_coord_z
  // ex_axis_coord_a
  // ex_axis_coord_b
  // ex_axis_coord_c
  // load
  // load_cog_x
  // load_cog_y
  // load_cog_z
  // j1_last_servoj_target
  // j2_last_servoj_target
  // j3_last_servoj_target
  // j4_last_servoj_target
  // j5_last_servoj_target
  // j6_last_servoj_target
  // servoj_cmd_num
  return true;
}

void
fairino_msgs__msg__RobotNonrtState__fini(fairino_msgs__msg__RobotNonrtState * msg)
{
  if (!msg) {
    return;
  }
  // prg_state
  // rbt_state
  // rbt_main_code
  // rbt_sub_code
  // robot_mode
  // j1_cur_pos
  // j2_cur_pos
  // j3_cur_pos
  // j4_cur_pos
  // j5_cur_pos
  // j6_cur_pos
  // cart_x_cur_pos
  // cart_y_cur_pos
  // cart_z_cur_pos
  // cart_a_cur_pos
  // cart_b_cur_pos
  // cart_c_cur_pos
  // flange_x_cur_pos
  // flange_y_cur_pos
  // flange_z_cur_pos
  // flange_a_cur_pos
  // flange_b_cur_pos
  // flange_c_cur_pos
  // j1_actual_qd
  // j2_actual_qd
  // j3_actual_qd
  // j4_actual_qd
  // j5_actual_qd
  // j6_actual_qd
  // j1_actual_qdd
  // j2_actual_qdd
  // j3_actual_qdd
  // j4_actual_qdd
  // j5_actual_qdd
  // j6_actual_qdd
  // cart_lin_cmd_speed
  // cart_rot_cmd_speed
  // cart_x_cmd_speed
  // cart_y_cmd_speed
  // cart_z_cmd_speed
  // cart_a_cmd_speed
  // cart_b_cmd_speed
  // cart_c_cmd_speed
  // cart_lin_cur_speed
  // cart_rot_cur_speed
  // cart_x_cur_speed
  // cart_y_cur_speed
  // cart_z_cur_speed
  // cart_a_cur_speed
  // cart_b_cur_speed
  // cart_c_cur_speed
  // j1_cur_tor
  // j2_cur_tor
  // j3_cur_tor
  // j4_cur_tor
  // j5_cur_tor
  // j6_cur_tor
  // tool_num
  // work_num
  // dgt_output_h
  // dgt_output_l
  // tl_dgt_output_l
  // dgt_input_h
  // dgt_input_l
  // tl_dgt_input_l
  // cl_analog_input_1
  // cl_analog_input_2
  // tl_anglog_input
  // ft_fx_raw_data
  // ft_fy_raw_data
  // ft_fz_raw_data
  // ft_tx_raw_data
  // ft_ty_raw_data
  // ft_tz_raw_data
  // ft_fx_data
  // ft_fy_data
  // ft_fz_data
  // ft_tx_data
  // ft_ty_data
  // ft_tz_data
  // ft_actstatus
  // emg
  // motion_done
  // grip_motion_done
  // mc_queue_len
  // collision_err
  // trajectory_pnum
  // safety_stop1_state
  // safety_stop2_state
  // gripper_fault_id
  // grippererro
  // gripper_active
  // gripper_position
  // gripper_speed
  // gripper_current
  // gripper_temp
  // gripper_voltage
  // aux_servo_id
  // aux_servo_err
  // aux_servo_state
  // aux_servo_pos
  // aux_servo_vel
  // aux_servo_torque
  // ext_di_state_1
  // ext_di_state_2
  // ext_di_state_3
  // ext_di_state_4
  // ext_di_state_5
  // ext_di_state_6
  // ext_di_state_7
  // ext_di_state_8
  // ext_do_state_1
  // ext_do_state_2
  // ext_do_state_3
  // ext_do_state_4
  // ext_do_state_5
  // ext_do_state_6
  // ext_do_state_7
  // ext_do_state_8
  // ext_ai_state_1
  // ext_ai_state_2
  // ext_ai_state_3
  // ext_ai_state_4
  // ext_ao_state_1
  // ext_ao_state_2
  // ext_ao_state_3
  // ext_ao_state_4
  // rbt_enable_state
  // end_lua_err_code
  // cl_analog_output_1
  // cl_analog_output_2
  // tl_analog_output
  // gripper_rot_num
  // gripper_rot_speed
  // gripper_rot_torque
  // weldbreakoffstate
  // weldarcstate
  // j1_tgt_tor
  // j2_tgt_tor
  // j3_tgt_tor
  // j4_tgt_tor
  // j5_tgt_tor
  // j6_tgt_tor
  // jwide_voltage_ctrl_box_temp
  // wide_voltage_ctrl_box_fan_current
  // tool_coord_x
  // tool_coord_y
  // tool_coord_z
  // tool_coord_a
  // tool_coord_b
  // tool_coord_c
  // wobj_coord_x
  // wobj_coord_y
  // wobj_coord_z
  // wobj_coord_a
  // wobj_coord_b
  // wobj_coord_c
  // ex_tool_coord_x
  // ex_tool_coord_y
  // ex_tool_coord_z
  // ex_tool_coord_a
  // ex_tool_coord_b
  // ex_tool_coord_c
  // ex_axis_coord_x
  // ex_axis_coord_y
  // ex_axis_coord_z
  // ex_axis_coord_a
  // ex_axis_coord_b
  // ex_axis_coord_c
  // load
  // load_cog_x
  // load_cog_y
  // load_cog_z
  // j1_last_servoj_target
  // j2_last_servoj_target
  // j3_last_servoj_target
  // j4_last_servoj_target
  // j5_last_servoj_target
  // j6_last_servoj_target
  // servoj_cmd_num
}

bool
fairino_msgs__msg__RobotNonrtState__are_equal(const fairino_msgs__msg__RobotNonrtState * lhs, const fairino_msgs__msg__RobotNonrtState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // prg_state
  if (lhs->prg_state != rhs->prg_state) {
    return false;
  }
  // rbt_state
  if (lhs->rbt_state != rhs->rbt_state) {
    return false;
  }
  // rbt_main_code
  if (lhs->rbt_main_code != rhs->rbt_main_code) {
    return false;
  }
  // rbt_sub_code
  if (lhs->rbt_sub_code != rhs->rbt_sub_code) {
    return false;
  }
  // robot_mode
  if (lhs->robot_mode != rhs->robot_mode) {
    return false;
  }
  // j1_cur_pos
  if (lhs->j1_cur_pos != rhs->j1_cur_pos) {
    return false;
  }
  // j2_cur_pos
  if (lhs->j2_cur_pos != rhs->j2_cur_pos) {
    return false;
  }
  // j3_cur_pos
  if (lhs->j3_cur_pos != rhs->j3_cur_pos) {
    return false;
  }
  // j4_cur_pos
  if (lhs->j4_cur_pos != rhs->j4_cur_pos) {
    return false;
  }
  // j5_cur_pos
  if (lhs->j5_cur_pos != rhs->j5_cur_pos) {
    return false;
  }
  // j6_cur_pos
  if (lhs->j6_cur_pos != rhs->j6_cur_pos) {
    return false;
  }
  // cart_x_cur_pos
  if (lhs->cart_x_cur_pos != rhs->cart_x_cur_pos) {
    return false;
  }
  // cart_y_cur_pos
  if (lhs->cart_y_cur_pos != rhs->cart_y_cur_pos) {
    return false;
  }
  // cart_z_cur_pos
  if (lhs->cart_z_cur_pos != rhs->cart_z_cur_pos) {
    return false;
  }
  // cart_a_cur_pos
  if (lhs->cart_a_cur_pos != rhs->cart_a_cur_pos) {
    return false;
  }
  // cart_b_cur_pos
  if (lhs->cart_b_cur_pos != rhs->cart_b_cur_pos) {
    return false;
  }
  // cart_c_cur_pos
  if (lhs->cart_c_cur_pos != rhs->cart_c_cur_pos) {
    return false;
  }
  // flange_x_cur_pos
  if (lhs->flange_x_cur_pos != rhs->flange_x_cur_pos) {
    return false;
  }
  // flange_y_cur_pos
  if (lhs->flange_y_cur_pos != rhs->flange_y_cur_pos) {
    return false;
  }
  // flange_z_cur_pos
  if (lhs->flange_z_cur_pos != rhs->flange_z_cur_pos) {
    return false;
  }
  // flange_a_cur_pos
  if (lhs->flange_a_cur_pos != rhs->flange_a_cur_pos) {
    return false;
  }
  // flange_b_cur_pos
  if (lhs->flange_b_cur_pos != rhs->flange_b_cur_pos) {
    return false;
  }
  // flange_c_cur_pos
  if (lhs->flange_c_cur_pos != rhs->flange_c_cur_pos) {
    return false;
  }
  // j1_actual_qd
  if (lhs->j1_actual_qd != rhs->j1_actual_qd) {
    return false;
  }
  // j2_actual_qd
  if (lhs->j2_actual_qd != rhs->j2_actual_qd) {
    return false;
  }
  // j3_actual_qd
  if (lhs->j3_actual_qd != rhs->j3_actual_qd) {
    return false;
  }
  // j4_actual_qd
  if (lhs->j4_actual_qd != rhs->j4_actual_qd) {
    return false;
  }
  // j5_actual_qd
  if (lhs->j5_actual_qd != rhs->j5_actual_qd) {
    return false;
  }
  // j6_actual_qd
  if (lhs->j6_actual_qd != rhs->j6_actual_qd) {
    return false;
  }
  // j1_actual_qdd
  if (lhs->j1_actual_qdd != rhs->j1_actual_qdd) {
    return false;
  }
  // j2_actual_qdd
  if (lhs->j2_actual_qdd != rhs->j2_actual_qdd) {
    return false;
  }
  // j3_actual_qdd
  if (lhs->j3_actual_qdd != rhs->j3_actual_qdd) {
    return false;
  }
  // j4_actual_qdd
  if (lhs->j4_actual_qdd != rhs->j4_actual_qdd) {
    return false;
  }
  // j5_actual_qdd
  if (lhs->j5_actual_qdd != rhs->j5_actual_qdd) {
    return false;
  }
  // j6_actual_qdd
  if (lhs->j6_actual_qdd != rhs->j6_actual_qdd) {
    return false;
  }
  // cart_lin_cmd_speed
  if (lhs->cart_lin_cmd_speed != rhs->cart_lin_cmd_speed) {
    return false;
  }
  // cart_rot_cmd_speed
  if (lhs->cart_rot_cmd_speed != rhs->cart_rot_cmd_speed) {
    return false;
  }
  // cart_x_cmd_speed
  if (lhs->cart_x_cmd_speed != rhs->cart_x_cmd_speed) {
    return false;
  }
  // cart_y_cmd_speed
  if (lhs->cart_y_cmd_speed != rhs->cart_y_cmd_speed) {
    return false;
  }
  // cart_z_cmd_speed
  if (lhs->cart_z_cmd_speed != rhs->cart_z_cmd_speed) {
    return false;
  }
  // cart_a_cmd_speed
  if (lhs->cart_a_cmd_speed != rhs->cart_a_cmd_speed) {
    return false;
  }
  // cart_b_cmd_speed
  if (lhs->cart_b_cmd_speed != rhs->cart_b_cmd_speed) {
    return false;
  }
  // cart_c_cmd_speed
  if (lhs->cart_c_cmd_speed != rhs->cart_c_cmd_speed) {
    return false;
  }
  // cart_lin_cur_speed
  if (lhs->cart_lin_cur_speed != rhs->cart_lin_cur_speed) {
    return false;
  }
  // cart_rot_cur_speed
  if (lhs->cart_rot_cur_speed != rhs->cart_rot_cur_speed) {
    return false;
  }
  // cart_x_cur_speed
  if (lhs->cart_x_cur_speed != rhs->cart_x_cur_speed) {
    return false;
  }
  // cart_y_cur_speed
  if (lhs->cart_y_cur_speed != rhs->cart_y_cur_speed) {
    return false;
  }
  // cart_z_cur_speed
  if (lhs->cart_z_cur_speed != rhs->cart_z_cur_speed) {
    return false;
  }
  // cart_a_cur_speed
  if (lhs->cart_a_cur_speed != rhs->cart_a_cur_speed) {
    return false;
  }
  // cart_b_cur_speed
  if (lhs->cart_b_cur_speed != rhs->cart_b_cur_speed) {
    return false;
  }
  // cart_c_cur_speed
  if (lhs->cart_c_cur_speed != rhs->cart_c_cur_speed) {
    return false;
  }
  // j1_cur_tor
  if (lhs->j1_cur_tor != rhs->j1_cur_tor) {
    return false;
  }
  // j2_cur_tor
  if (lhs->j2_cur_tor != rhs->j2_cur_tor) {
    return false;
  }
  // j3_cur_tor
  if (lhs->j3_cur_tor != rhs->j3_cur_tor) {
    return false;
  }
  // j4_cur_tor
  if (lhs->j4_cur_tor != rhs->j4_cur_tor) {
    return false;
  }
  // j5_cur_tor
  if (lhs->j5_cur_tor != rhs->j5_cur_tor) {
    return false;
  }
  // j6_cur_tor
  if (lhs->j6_cur_tor != rhs->j6_cur_tor) {
    return false;
  }
  // tool_num
  if (lhs->tool_num != rhs->tool_num) {
    return false;
  }
  // work_num
  if (lhs->work_num != rhs->work_num) {
    return false;
  }
  // dgt_output_h
  if (lhs->dgt_output_h != rhs->dgt_output_h) {
    return false;
  }
  // dgt_output_l
  if (lhs->dgt_output_l != rhs->dgt_output_l) {
    return false;
  }
  // tl_dgt_output_l
  if (lhs->tl_dgt_output_l != rhs->tl_dgt_output_l) {
    return false;
  }
  // dgt_input_h
  if (lhs->dgt_input_h != rhs->dgt_input_h) {
    return false;
  }
  // dgt_input_l
  if (lhs->dgt_input_l != rhs->dgt_input_l) {
    return false;
  }
  // tl_dgt_input_l
  if (lhs->tl_dgt_input_l != rhs->tl_dgt_input_l) {
    return false;
  }
  // cl_analog_input_1
  if (lhs->cl_analog_input_1 != rhs->cl_analog_input_1) {
    return false;
  }
  // cl_analog_input_2
  if (lhs->cl_analog_input_2 != rhs->cl_analog_input_2) {
    return false;
  }
  // tl_anglog_input
  if (lhs->tl_anglog_input != rhs->tl_anglog_input) {
    return false;
  }
  // ft_fx_raw_data
  if (lhs->ft_fx_raw_data != rhs->ft_fx_raw_data) {
    return false;
  }
  // ft_fy_raw_data
  if (lhs->ft_fy_raw_data != rhs->ft_fy_raw_data) {
    return false;
  }
  // ft_fz_raw_data
  if (lhs->ft_fz_raw_data != rhs->ft_fz_raw_data) {
    return false;
  }
  // ft_tx_raw_data
  if (lhs->ft_tx_raw_data != rhs->ft_tx_raw_data) {
    return false;
  }
  // ft_ty_raw_data
  if (lhs->ft_ty_raw_data != rhs->ft_ty_raw_data) {
    return false;
  }
  // ft_tz_raw_data
  if (lhs->ft_tz_raw_data != rhs->ft_tz_raw_data) {
    return false;
  }
  // ft_fx_data
  if (lhs->ft_fx_data != rhs->ft_fx_data) {
    return false;
  }
  // ft_fy_data
  if (lhs->ft_fy_data != rhs->ft_fy_data) {
    return false;
  }
  // ft_fz_data
  if (lhs->ft_fz_data != rhs->ft_fz_data) {
    return false;
  }
  // ft_tx_data
  if (lhs->ft_tx_data != rhs->ft_tx_data) {
    return false;
  }
  // ft_ty_data
  if (lhs->ft_ty_data != rhs->ft_ty_data) {
    return false;
  }
  // ft_tz_data
  if (lhs->ft_tz_data != rhs->ft_tz_data) {
    return false;
  }
  // ft_actstatus
  if (lhs->ft_actstatus != rhs->ft_actstatus) {
    return false;
  }
  // emg
  if (lhs->emg != rhs->emg) {
    return false;
  }
  // motion_done
  if (lhs->motion_done != rhs->motion_done) {
    return false;
  }
  // grip_motion_done
  if (lhs->grip_motion_done != rhs->grip_motion_done) {
    return false;
  }
  // mc_queue_len
  if (lhs->mc_queue_len != rhs->mc_queue_len) {
    return false;
  }
  // collision_err
  if (lhs->collision_err != rhs->collision_err) {
    return false;
  }
  // trajectory_pnum
  if (lhs->trajectory_pnum != rhs->trajectory_pnum) {
    return false;
  }
  // safety_stop1_state
  if (lhs->safety_stop1_state != rhs->safety_stop1_state) {
    return false;
  }
  // safety_stop2_state
  if (lhs->safety_stop2_state != rhs->safety_stop2_state) {
    return false;
  }
  // gripper_fault_id
  if (lhs->gripper_fault_id != rhs->gripper_fault_id) {
    return false;
  }
  // grippererro
  if (lhs->grippererro != rhs->grippererro) {
    return false;
  }
  // gripper_active
  if (lhs->gripper_active != rhs->gripper_active) {
    return false;
  }
  // gripper_position
  if (lhs->gripper_position != rhs->gripper_position) {
    return false;
  }
  // gripper_speed
  if (lhs->gripper_speed != rhs->gripper_speed) {
    return false;
  }
  // gripper_current
  if (lhs->gripper_current != rhs->gripper_current) {
    return false;
  }
  // gripper_temp
  if (lhs->gripper_temp != rhs->gripper_temp) {
    return false;
  }
  // gripper_voltage
  if (lhs->gripper_voltage != rhs->gripper_voltage) {
    return false;
  }
  // aux_servo_id
  if (lhs->aux_servo_id != rhs->aux_servo_id) {
    return false;
  }
  // aux_servo_err
  if (lhs->aux_servo_err != rhs->aux_servo_err) {
    return false;
  }
  // aux_servo_state
  if (lhs->aux_servo_state != rhs->aux_servo_state) {
    return false;
  }
  // aux_servo_pos
  if (lhs->aux_servo_pos != rhs->aux_servo_pos) {
    return false;
  }
  // aux_servo_vel
  if (lhs->aux_servo_vel != rhs->aux_servo_vel) {
    return false;
  }
  // aux_servo_torque
  if (lhs->aux_servo_torque != rhs->aux_servo_torque) {
    return false;
  }
  // ext_di_state_1
  if (lhs->ext_di_state_1 != rhs->ext_di_state_1) {
    return false;
  }
  // ext_di_state_2
  if (lhs->ext_di_state_2 != rhs->ext_di_state_2) {
    return false;
  }
  // ext_di_state_3
  if (lhs->ext_di_state_3 != rhs->ext_di_state_3) {
    return false;
  }
  // ext_di_state_4
  if (lhs->ext_di_state_4 != rhs->ext_di_state_4) {
    return false;
  }
  // ext_di_state_5
  if (lhs->ext_di_state_5 != rhs->ext_di_state_5) {
    return false;
  }
  // ext_di_state_6
  if (lhs->ext_di_state_6 != rhs->ext_di_state_6) {
    return false;
  }
  // ext_di_state_7
  if (lhs->ext_di_state_7 != rhs->ext_di_state_7) {
    return false;
  }
  // ext_di_state_8
  if (lhs->ext_di_state_8 != rhs->ext_di_state_8) {
    return false;
  }
  // ext_do_state_1
  if (lhs->ext_do_state_1 != rhs->ext_do_state_1) {
    return false;
  }
  // ext_do_state_2
  if (lhs->ext_do_state_2 != rhs->ext_do_state_2) {
    return false;
  }
  // ext_do_state_3
  if (lhs->ext_do_state_3 != rhs->ext_do_state_3) {
    return false;
  }
  // ext_do_state_4
  if (lhs->ext_do_state_4 != rhs->ext_do_state_4) {
    return false;
  }
  // ext_do_state_5
  if (lhs->ext_do_state_5 != rhs->ext_do_state_5) {
    return false;
  }
  // ext_do_state_6
  if (lhs->ext_do_state_6 != rhs->ext_do_state_6) {
    return false;
  }
  // ext_do_state_7
  if (lhs->ext_do_state_7 != rhs->ext_do_state_7) {
    return false;
  }
  // ext_do_state_8
  if (lhs->ext_do_state_8 != rhs->ext_do_state_8) {
    return false;
  }
  // ext_ai_state_1
  if (lhs->ext_ai_state_1 != rhs->ext_ai_state_1) {
    return false;
  }
  // ext_ai_state_2
  if (lhs->ext_ai_state_2 != rhs->ext_ai_state_2) {
    return false;
  }
  // ext_ai_state_3
  if (lhs->ext_ai_state_3 != rhs->ext_ai_state_3) {
    return false;
  }
  // ext_ai_state_4
  if (lhs->ext_ai_state_4 != rhs->ext_ai_state_4) {
    return false;
  }
  // ext_ao_state_1
  if (lhs->ext_ao_state_1 != rhs->ext_ao_state_1) {
    return false;
  }
  // ext_ao_state_2
  if (lhs->ext_ao_state_2 != rhs->ext_ao_state_2) {
    return false;
  }
  // ext_ao_state_3
  if (lhs->ext_ao_state_3 != rhs->ext_ao_state_3) {
    return false;
  }
  // ext_ao_state_4
  if (lhs->ext_ao_state_4 != rhs->ext_ao_state_4) {
    return false;
  }
  // rbt_enable_state
  if (lhs->rbt_enable_state != rhs->rbt_enable_state) {
    return false;
  }
  // end_lua_err_code
  if (lhs->end_lua_err_code != rhs->end_lua_err_code) {
    return false;
  }
  // cl_analog_output_1
  if (lhs->cl_analog_output_1 != rhs->cl_analog_output_1) {
    return false;
  }
  // cl_analog_output_2
  if (lhs->cl_analog_output_2 != rhs->cl_analog_output_2) {
    return false;
  }
  // tl_analog_output
  if (lhs->tl_analog_output != rhs->tl_analog_output) {
    return false;
  }
  // gripper_rot_num
  if (lhs->gripper_rot_num != rhs->gripper_rot_num) {
    return false;
  }
  // gripper_rot_speed
  if (lhs->gripper_rot_speed != rhs->gripper_rot_speed) {
    return false;
  }
  // gripper_rot_torque
  if (lhs->gripper_rot_torque != rhs->gripper_rot_torque) {
    return false;
  }
  // weldbreakoffstate
  if (lhs->weldbreakoffstate != rhs->weldbreakoffstate) {
    return false;
  }
  // weldarcstate
  if (lhs->weldarcstate != rhs->weldarcstate) {
    return false;
  }
  // j1_tgt_tor
  if (lhs->j1_tgt_tor != rhs->j1_tgt_tor) {
    return false;
  }
  // j2_tgt_tor
  if (lhs->j2_tgt_tor != rhs->j2_tgt_tor) {
    return false;
  }
  // j3_tgt_tor
  if (lhs->j3_tgt_tor != rhs->j3_tgt_tor) {
    return false;
  }
  // j4_tgt_tor
  if (lhs->j4_tgt_tor != rhs->j4_tgt_tor) {
    return false;
  }
  // j5_tgt_tor
  if (lhs->j5_tgt_tor != rhs->j5_tgt_tor) {
    return false;
  }
  // j6_tgt_tor
  if (lhs->j6_tgt_tor != rhs->j6_tgt_tor) {
    return false;
  }
  // jwide_voltage_ctrl_box_temp
  if (lhs->jwide_voltage_ctrl_box_temp != rhs->jwide_voltage_ctrl_box_temp) {
    return false;
  }
  // wide_voltage_ctrl_box_fan_current
  if (lhs->wide_voltage_ctrl_box_fan_current != rhs->wide_voltage_ctrl_box_fan_current) {
    return false;
  }
  // tool_coord_x
  if (lhs->tool_coord_x != rhs->tool_coord_x) {
    return false;
  }
  // tool_coord_y
  if (lhs->tool_coord_y != rhs->tool_coord_y) {
    return false;
  }
  // tool_coord_z
  if (lhs->tool_coord_z != rhs->tool_coord_z) {
    return false;
  }
  // tool_coord_a
  if (lhs->tool_coord_a != rhs->tool_coord_a) {
    return false;
  }
  // tool_coord_b
  if (lhs->tool_coord_b != rhs->tool_coord_b) {
    return false;
  }
  // tool_coord_c
  if (lhs->tool_coord_c != rhs->tool_coord_c) {
    return false;
  }
  // wobj_coord_x
  if (lhs->wobj_coord_x != rhs->wobj_coord_x) {
    return false;
  }
  // wobj_coord_y
  if (lhs->wobj_coord_y != rhs->wobj_coord_y) {
    return false;
  }
  // wobj_coord_z
  if (lhs->wobj_coord_z != rhs->wobj_coord_z) {
    return false;
  }
  // wobj_coord_a
  if (lhs->wobj_coord_a != rhs->wobj_coord_a) {
    return false;
  }
  // wobj_coord_b
  if (lhs->wobj_coord_b != rhs->wobj_coord_b) {
    return false;
  }
  // wobj_coord_c
  if (lhs->wobj_coord_c != rhs->wobj_coord_c) {
    return false;
  }
  // ex_tool_coord_x
  if (lhs->ex_tool_coord_x != rhs->ex_tool_coord_x) {
    return false;
  }
  // ex_tool_coord_y
  if (lhs->ex_tool_coord_y != rhs->ex_tool_coord_y) {
    return false;
  }
  // ex_tool_coord_z
  if (lhs->ex_tool_coord_z != rhs->ex_tool_coord_z) {
    return false;
  }
  // ex_tool_coord_a
  if (lhs->ex_tool_coord_a != rhs->ex_tool_coord_a) {
    return false;
  }
  // ex_tool_coord_b
  if (lhs->ex_tool_coord_b != rhs->ex_tool_coord_b) {
    return false;
  }
  // ex_tool_coord_c
  if (lhs->ex_tool_coord_c != rhs->ex_tool_coord_c) {
    return false;
  }
  // ex_axis_coord_x
  if (lhs->ex_axis_coord_x != rhs->ex_axis_coord_x) {
    return false;
  }
  // ex_axis_coord_y
  if (lhs->ex_axis_coord_y != rhs->ex_axis_coord_y) {
    return false;
  }
  // ex_axis_coord_z
  if (lhs->ex_axis_coord_z != rhs->ex_axis_coord_z) {
    return false;
  }
  // ex_axis_coord_a
  if (lhs->ex_axis_coord_a != rhs->ex_axis_coord_a) {
    return false;
  }
  // ex_axis_coord_b
  if (lhs->ex_axis_coord_b != rhs->ex_axis_coord_b) {
    return false;
  }
  // ex_axis_coord_c
  if (lhs->ex_axis_coord_c != rhs->ex_axis_coord_c) {
    return false;
  }
  // load
  if (lhs->load != rhs->load) {
    return false;
  }
  // load_cog_x
  if (lhs->load_cog_x != rhs->load_cog_x) {
    return false;
  }
  // load_cog_y
  if (lhs->load_cog_y != rhs->load_cog_y) {
    return false;
  }
  // load_cog_z
  if (lhs->load_cog_z != rhs->load_cog_z) {
    return false;
  }
  // j1_last_servoj_target
  if (lhs->j1_last_servoj_target != rhs->j1_last_servoj_target) {
    return false;
  }
  // j2_last_servoj_target
  if (lhs->j2_last_servoj_target != rhs->j2_last_servoj_target) {
    return false;
  }
  // j3_last_servoj_target
  if (lhs->j3_last_servoj_target != rhs->j3_last_servoj_target) {
    return false;
  }
  // j4_last_servoj_target
  if (lhs->j4_last_servoj_target != rhs->j4_last_servoj_target) {
    return false;
  }
  // j5_last_servoj_target
  if (lhs->j5_last_servoj_target != rhs->j5_last_servoj_target) {
    return false;
  }
  // j6_last_servoj_target
  if (lhs->j6_last_servoj_target != rhs->j6_last_servoj_target) {
    return false;
  }
  // servoj_cmd_num
  if (lhs->servoj_cmd_num != rhs->servoj_cmd_num) {
    return false;
  }
  return true;
}

bool
fairino_msgs__msg__RobotNonrtState__copy(
  const fairino_msgs__msg__RobotNonrtState * input,
  fairino_msgs__msg__RobotNonrtState * output)
{
  if (!input || !output) {
    return false;
  }
  // prg_state
  output->prg_state = input->prg_state;
  // rbt_state
  output->rbt_state = input->rbt_state;
  // rbt_main_code
  output->rbt_main_code = input->rbt_main_code;
  // rbt_sub_code
  output->rbt_sub_code = input->rbt_sub_code;
  // robot_mode
  output->robot_mode = input->robot_mode;
  // j1_cur_pos
  output->j1_cur_pos = input->j1_cur_pos;
  // j2_cur_pos
  output->j2_cur_pos = input->j2_cur_pos;
  // j3_cur_pos
  output->j3_cur_pos = input->j3_cur_pos;
  // j4_cur_pos
  output->j4_cur_pos = input->j4_cur_pos;
  // j5_cur_pos
  output->j5_cur_pos = input->j5_cur_pos;
  // j6_cur_pos
  output->j6_cur_pos = input->j6_cur_pos;
  // cart_x_cur_pos
  output->cart_x_cur_pos = input->cart_x_cur_pos;
  // cart_y_cur_pos
  output->cart_y_cur_pos = input->cart_y_cur_pos;
  // cart_z_cur_pos
  output->cart_z_cur_pos = input->cart_z_cur_pos;
  // cart_a_cur_pos
  output->cart_a_cur_pos = input->cart_a_cur_pos;
  // cart_b_cur_pos
  output->cart_b_cur_pos = input->cart_b_cur_pos;
  // cart_c_cur_pos
  output->cart_c_cur_pos = input->cart_c_cur_pos;
  // flange_x_cur_pos
  output->flange_x_cur_pos = input->flange_x_cur_pos;
  // flange_y_cur_pos
  output->flange_y_cur_pos = input->flange_y_cur_pos;
  // flange_z_cur_pos
  output->flange_z_cur_pos = input->flange_z_cur_pos;
  // flange_a_cur_pos
  output->flange_a_cur_pos = input->flange_a_cur_pos;
  // flange_b_cur_pos
  output->flange_b_cur_pos = input->flange_b_cur_pos;
  // flange_c_cur_pos
  output->flange_c_cur_pos = input->flange_c_cur_pos;
  // j1_actual_qd
  output->j1_actual_qd = input->j1_actual_qd;
  // j2_actual_qd
  output->j2_actual_qd = input->j2_actual_qd;
  // j3_actual_qd
  output->j3_actual_qd = input->j3_actual_qd;
  // j4_actual_qd
  output->j4_actual_qd = input->j4_actual_qd;
  // j5_actual_qd
  output->j5_actual_qd = input->j5_actual_qd;
  // j6_actual_qd
  output->j6_actual_qd = input->j6_actual_qd;
  // j1_actual_qdd
  output->j1_actual_qdd = input->j1_actual_qdd;
  // j2_actual_qdd
  output->j2_actual_qdd = input->j2_actual_qdd;
  // j3_actual_qdd
  output->j3_actual_qdd = input->j3_actual_qdd;
  // j4_actual_qdd
  output->j4_actual_qdd = input->j4_actual_qdd;
  // j5_actual_qdd
  output->j5_actual_qdd = input->j5_actual_qdd;
  // j6_actual_qdd
  output->j6_actual_qdd = input->j6_actual_qdd;
  // cart_lin_cmd_speed
  output->cart_lin_cmd_speed = input->cart_lin_cmd_speed;
  // cart_rot_cmd_speed
  output->cart_rot_cmd_speed = input->cart_rot_cmd_speed;
  // cart_x_cmd_speed
  output->cart_x_cmd_speed = input->cart_x_cmd_speed;
  // cart_y_cmd_speed
  output->cart_y_cmd_speed = input->cart_y_cmd_speed;
  // cart_z_cmd_speed
  output->cart_z_cmd_speed = input->cart_z_cmd_speed;
  // cart_a_cmd_speed
  output->cart_a_cmd_speed = input->cart_a_cmd_speed;
  // cart_b_cmd_speed
  output->cart_b_cmd_speed = input->cart_b_cmd_speed;
  // cart_c_cmd_speed
  output->cart_c_cmd_speed = input->cart_c_cmd_speed;
  // cart_lin_cur_speed
  output->cart_lin_cur_speed = input->cart_lin_cur_speed;
  // cart_rot_cur_speed
  output->cart_rot_cur_speed = input->cart_rot_cur_speed;
  // cart_x_cur_speed
  output->cart_x_cur_speed = input->cart_x_cur_speed;
  // cart_y_cur_speed
  output->cart_y_cur_speed = input->cart_y_cur_speed;
  // cart_z_cur_speed
  output->cart_z_cur_speed = input->cart_z_cur_speed;
  // cart_a_cur_speed
  output->cart_a_cur_speed = input->cart_a_cur_speed;
  // cart_b_cur_speed
  output->cart_b_cur_speed = input->cart_b_cur_speed;
  // cart_c_cur_speed
  output->cart_c_cur_speed = input->cart_c_cur_speed;
  // j1_cur_tor
  output->j1_cur_tor = input->j1_cur_tor;
  // j2_cur_tor
  output->j2_cur_tor = input->j2_cur_tor;
  // j3_cur_tor
  output->j3_cur_tor = input->j3_cur_tor;
  // j4_cur_tor
  output->j4_cur_tor = input->j4_cur_tor;
  // j5_cur_tor
  output->j5_cur_tor = input->j5_cur_tor;
  // j6_cur_tor
  output->j6_cur_tor = input->j6_cur_tor;
  // tool_num
  output->tool_num = input->tool_num;
  // work_num
  output->work_num = input->work_num;
  // dgt_output_h
  output->dgt_output_h = input->dgt_output_h;
  // dgt_output_l
  output->dgt_output_l = input->dgt_output_l;
  // tl_dgt_output_l
  output->tl_dgt_output_l = input->tl_dgt_output_l;
  // dgt_input_h
  output->dgt_input_h = input->dgt_input_h;
  // dgt_input_l
  output->dgt_input_l = input->dgt_input_l;
  // tl_dgt_input_l
  output->tl_dgt_input_l = input->tl_dgt_input_l;
  // cl_analog_input_1
  output->cl_analog_input_1 = input->cl_analog_input_1;
  // cl_analog_input_2
  output->cl_analog_input_2 = input->cl_analog_input_2;
  // tl_anglog_input
  output->tl_anglog_input = input->tl_anglog_input;
  // ft_fx_raw_data
  output->ft_fx_raw_data = input->ft_fx_raw_data;
  // ft_fy_raw_data
  output->ft_fy_raw_data = input->ft_fy_raw_data;
  // ft_fz_raw_data
  output->ft_fz_raw_data = input->ft_fz_raw_data;
  // ft_tx_raw_data
  output->ft_tx_raw_data = input->ft_tx_raw_data;
  // ft_ty_raw_data
  output->ft_ty_raw_data = input->ft_ty_raw_data;
  // ft_tz_raw_data
  output->ft_tz_raw_data = input->ft_tz_raw_data;
  // ft_fx_data
  output->ft_fx_data = input->ft_fx_data;
  // ft_fy_data
  output->ft_fy_data = input->ft_fy_data;
  // ft_fz_data
  output->ft_fz_data = input->ft_fz_data;
  // ft_tx_data
  output->ft_tx_data = input->ft_tx_data;
  // ft_ty_data
  output->ft_ty_data = input->ft_ty_data;
  // ft_tz_data
  output->ft_tz_data = input->ft_tz_data;
  // ft_actstatus
  output->ft_actstatus = input->ft_actstatus;
  // emg
  output->emg = input->emg;
  // motion_done
  output->motion_done = input->motion_done;
  // grip_motion_done
  output->grip_motion_done = input->grip_motion_done;
  // mc_queue_len
  output->mc_queue_len = input->mc_queue_len;
  // collision_err
  output->collision_err = input->collision_err;
  // trajectory_pnum
  output->trajectory_pnum = input->trajectory_pnum;
  // safety_stop1_state
  output->safety_stop1_state = input->safety_stop1_state;
  // safety_stop2_state
  output->safety_stop2_state = input->safety_stop2_state;
  // gripper_fault_id
  output->gripper_fault_id = input->gripper_fault_id;
  // grippererro
  output->grippererro = input->grippererro;
  // gripper_active
  output->gripper_active = input->gripper_active;
  // gripper_position
  output->gripper_position = input->gripper_position;
  // gripper_speed
  output->gripper_speed = input->gripper_speed;
  // gripper_current
  output->gripper_current = input->gripper_current;
  // gripper_temp
  output->gripper_temp = input->gripper_temp;
  // gripper_voltage
  output->gripper_voltage = input->gripper_voltage;
  // aux_servo_id
  output->aux_servo_id = input->aux_servo_id;
  // aux_servo_err
  output->aux_servo_err = input->aux_servo_err;
  // aux_servo_state
  output->aux_servo_state = input->aux_servo_state;
  // aux_servo_pos
  output->aux_servo_pos = input->aux_servo_pos;
  // aux_servo_vel
  output->aux_servo_vel = input->aux_servo_vel;
  // aux_servo_torque
  output->aux_servo_torque = input->aux_servo_torque;
  // ext_di_state_1
  output->ext_di_state_1 = input->ext_di_state_1;
  // ext_di_state_2
  output->ext_di_state_2 = input->ext_di_state_2;
  // ext_di_state_3
  output->ext_di_state_3 = input->ext_di_state_3;
  // ext_di_state_4
  output->ext_di_state_4 = input->ext_di_state_4;
  // ext_di_state_5
  output->ext_di_state_5 = input->ext_di_state_5;
  // ext_di_state_6
  output->ext_di_state_6 = input->ext_di_state_6;
  // ext_di_state_7
  output->ext_di_state_7 = input->ext_di_state_7;
  // ext_di_state_8
  output->ext_di_state_8 = input->ext_di_state_8;
  // ext_do_state_1
  output->ext_do_state_1 = input->ext_do_state_1;
  // ext_do_state_2
  output->ext_do_state_2 = input->ext_do_state_2;
  // ext_do_state_3
  output->ext_do_state_3 = input->ext_do_state_3;
  // ext_do_state_4
  output->ext_do_state_4 = input->ext_do_state_4;
  // ext_do_state_5
  output->ext_do_state_5 = input->ext_do_state_5;
  // ext_do_state_6
  output->ext_do_state_6 = input->ext_do_state_6;
  // ext_do_state_7
  output->ext_do_state_7 = input->ext_do_state_7;
  // ext_do_state_8
  output->ext_do_state_8 = input->ext_do_state_8;
  // ext_ai_state_1
  output->ext_ai_state_1 = input->ext_ai_state_1;
  // ext_ai_state_2
  output->ext_ai_state_2 = input->ext_ai_state_2;
  // ext_ai_state_3
  output->ext_ai_state_3 = input->ext_ai_state_3;
  // ext_ai_state_4
  output->ext_ai_state_4 = input->ext_ai_state_4;
  // ext_ao_state_1
  output->ext_ao_state_1 = input->ext_ao_state_1;
  // ext_ao_state_2
  output->ext_ao_state_2 = input->ext_ao_state_2;
  // ext_ao_state_3
  output->ext_ao_state_3 = input->ext_ao_state_3;
  // ext_ao_state_4
  output->ext_ao_state_4 = input->ext_ao_state_4;
  // rbt_enable_state
  output->rbt_enable_state = input->rbt_enable_state;
  // end_lua_err_code
  output->end_lua_err_code = input->end_lua_err_code;
  // cl_analog_output_1
  output->cl_analog_output_1 = input->cl_analog_output_1;
  // cl_analog_output_2
  output->cl_analog_output_2 = input->cl_analog_output_2;
  // tl_analog_output
  output->tl_analog_output = input->tl_analog_output;
  // gripper_rot_num
  output->gripper_rot_num = input->gripper_rot_num;
  // gripper_rot_speed
  output->gripper_rot_speed = input->gripper_rot_speed;
  // gripper_rot_torque
  output->gripper_rot_torque = input->gripper_rot_torque;
  // weldbreakoffstate
  output->weldbreakoffstate = input->weldbreakoffstate;
  // weldarcstate
  output->weldarcstate = input->weldarcstate;
  // j1_tgt_tor
  output->j1_tgt_tor = input->j1_tgt_tor;
  // j2_tgt_tor
  output->j2_tgt_tor = input->j2_tgt_tor;
  // j3_tgt_tor
  output->j3_tgt_tor = input->j3_tgt_tor;
  // j4_tgt_tor
  output->j4_tgt_tor = input->j4_tgt_tor;
  // j5_tgt_tor
  output->j5_tgt_tor = input->j5_tgt_tor;
  // j6_tgt_tor
  output->j6_tgt_tor = input->j6_tgt_tor;
  // jwide_voltage_ctrl_box_temp
  output->jwide_voltage_ctrl_box_temp = input->jwide_voltage_ctrl_box_temp;
  // wide_voltage_ctrl_box_fan_current
  output->wide_voltage_ctrl_box_fan_current = input->wide_voltage_ctrl_box_fan_current;
  // tool_coord_x
  output->tool_coord_x = input->tool_coord_x;
  // tool_coord_y
  output->tool_coord_y = input->tool_coord_y;
  // tool_coord_z
  output->tool_coord_z = input->tool_coord_z;
  // tool_coord_a
  output->tool_coord_a = input->tool_coord_a;
  // tool_coord_b
  output->tool_coord_b = input->tool_coord_b;
  // tool_coord_c
  output->tool_coord_c = input->tool_coord_c;
  // wobj_coord_x
  output->wobj_coord_x = input->wobj_coord_x;
  // wobj_coord_y
  output->wobj_coord_y = input->wobj_coord_y;
  // wobj_coord_z
  output->wobj_coord_z = input->wobj_coord_z;
  // wobj_coord_a
  output->wobj_coord_a = input->wobj_coord_a;
  // wobj_coord_b
  output->wobj_coord_b = input->wobj_coord_b;
  // wobj_coord_c
  output->wobj_coord_c = input->wobj_coord_c;
  // ex_tool_coord_x
  output->ex_tool_coord_x = input->ex_tool_coord_x;
  // ex_tool_coord_y
  output->ex_tool_coord_y = input->ex_tool_coord_y;
  // ex_tool_coord_z
  output->ex_tool_coord_z = input->ex_tool_coord_z;
  // ex_tool_coord_a
  output->ex_tool_coord_a = input->ex_tool_coord_a;
  // ex_tool_coord_b
  output->ex_tool_coord_b = input->ex_tool_coord_b;
  // ex_tool_coord_c
  output->ex_tool_coord_c = input->ex_tool_coord_c;
  // ex_axis_coord_x
  output->ex_axis_coord_x = input->ex_axis_coord_x;
  // ex_axis_coord_y
  output->ex_axis_coord_y = input->ex_axis_coord_y;
  // ex_axis_coord_z
  output->ex_axis_coord_z = input->ex_axis_coord_z;
  // ex_axis_coord_a
  output->ex_axis_coord_a = input->ex_axis_coord_a;
  // ex_axis_coord_b
  output->ex_axis_coord_b = input->ex_axis_coord_b;
  // ex_axis_coord_c
  output->ex_axis_coord_c = input->ex_axis_coord_c;
  // load
  output->load = input->load;
  // load_cog_x
  output->load_cog_x = input->load_cog_x;
  // load_cog_y
  output->load_cog_y = input->load_cog_y;
  // load_cog_z
  output->load_cog_z = input->load_cog_z;
  // j1_last_servoj_target
  output->j1_last_servoj_target = input->j1_last_servoj_target;
  // j2_last_servoj_target
  output->j2_last_servoj_target = input->j2_last_servoj_target;
  // j3_last_servoj_target
  output->j3_last_servoj_target = input->j3_last_servoj_target;
  // j4_last_servoj_target
  output->j4_last_servoj_target = input->j4_last_servoj_target;
  // j5_last_servoj_target
  output->j5_last_servoj_target = input->j5_last_servoj_target;
  // j6_last_servoj_target
  output->j6_last_servoj_target = input->j6_last_servoj_target;
  // servoj_cmd_num
  output->servoj_cmd_num = input->servoj_cmd_num;
  return true;
}

fairino_msgs__msg__RobotNonrtState *
fairino_msgs__msg__RobotNonrtState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fairino_msgs__msg__RobotNonrtState * msg = (fairino_msgs__msg__RobotNonrtState *)allocator.allocate(sizeof(fairino_msgs__msg__RobotNonrtState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fairino_msgs__msg__RobotNonrtState));
  bool success = fairino_msgs__msg__RobotNonrtState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fairino_msgs__msg__RobotNonrtState__destroy(fairino_msgs__msg__RobotNonrtState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fairino_msgs__msg__RobotNonrtState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fairino_msgs__msg__RobotNonrtState__Sequence__init(fairino_msgs__msg__RobotNonrtState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fairino_msgs__msg__RobotNonrtState * data = NULL;

  if (size) {
    data = (fairino_msgs__msg__RobotNonrtState *)allocator.zero_allocate(size, sizeof(fairino_msgs__msg__RobotNonrtState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fairino_msgs__msg__RobotNonrtState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fairino_msgs__msg__RobotNonrtState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
fairino_msgs__msg__RobotNonrtState__Sequence__fini(fairino_msgs__msg__RobotNonrtState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      fairino_msgs__msg__RobotNonrtState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

fairino_msgs__msg__RobotNonrtState__Sequence *
fairino_msgs__msg__RobotNonrtState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fairino_msgs__msg__RobotNonrtState__Sequence * array = (fairino_msgs__msg__RobotNonrtState__Sequence *)allocator.allocate(sizeof(fairino_msgs__msg__RobotNonrtState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fairino_msgs__msg__RobotNonrtState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fairino_msgs__msg__RobotNonrtState__Sequence__destroy(fairino_msgs__msg__RobotNonrtState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fairino_msgs__msg__RobotNonrtState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fairino_msgs__msg__RobotNonrtState__Sequence__are_equal(const fairino_msgs__msg__RobotNonrtState__Sequence * lhs, const fairino_msgs__msg__RobotNonrtState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fairino_msgs__msg__RobotNonrtState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fairino_msgs__msg__RobotNonrtState__Sequence__copy(
  const fairino_msgs__msg__RobotNonrtState__Sequence * input,
  fairino_msgs__msg__RobotNonrtState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fairino_msgs__msg__RobotNonrtState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fairino_msgs__msg__RobotNonrtState * data =
      (fairino_msgs__msg__RobotNonrtState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fairino_msgs__msg__RobotNonrtState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fairino_msgs__msg__RobotNonrtState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fairino_msgs__msg__RobotNonrtState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
