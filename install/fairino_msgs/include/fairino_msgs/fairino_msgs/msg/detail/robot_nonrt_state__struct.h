// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fairino_msgs:msg/RobotNonrtState.idl
// generated code does not contain a copyright notice

#ifndef FAIRINO_MSGS__MSG__DETAIL__ROBOT_NONRT_STATE__STRUCT_H_
#define FAIRINO_MSGS__MSG__DETAIL__ROBOT_NONRT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RobotNonrtState in the package fairino_msgs.
typedef struct fairino_msgs__msg__RobotNonrtState
{
  uint8_t prg_state;
  uint8_t rbt_state;
  uint16_t rbt_main_code;
  uint16_t rbt_sub_code;
  uint8_t robot_mode;
  double j1_cur_pos;
  double j2_cur_pos;
  double j3_cur_pos;
  double j4_cur_pos;
  double j5_cur_pos;
  double j6_cur_pos;
  double cart_x_cur_pos;
  double cart_y_cur_pos;
  double cart_z_cur_pos;
  double cart_a_cur_pos;
  double cart_b_cur_pos;
  double cart_c_cur_pos;
  double flange_x_cur_pos;
  double flange_y_cur_pos;
  double flange_z_cur_pos;
  double flange_a_cur_pos;
  double flange_b_cur_pos;
  double flange_c_cur_pos;
  double j1_actual_qd;
  double j2_actual_qd;
  double j3_actual_qd;
  double j4_actual_qd;
  double j5_actual_qd;
  double j6_actual_qd;
  double j1_actual_qdd;
  double j2_actual_qdd;
  double j3_actual_qdd;
  double j4_actual_qdd;
  double j5_actual_qdd;
  double j6_actual_qdd;
  double cart_lin_cmd_speed;
  double cart_rot_cmd_speed;
  double cart_x_cmd_speed;
  double cart_y_cmd_speed;
  double cart_z_cmd_speed;
  double cart_a_cmd_speed;
  double cart_b_cmd_speed;
  double cart_c_cmd_speed;
  double cart_lin_cur_speed;
  double cart_rot_cur_speed;
  double cart_x_cur_speed;
  double cart_y_cur_speed;
  double cart_z_cur_speed;
  double cart_a_cur_speed;
  double cart_b_cur_speed;
  double cart_c_cur_speed;
  double j1_cur_tor;
  double j2_cur_tor;
  double j3_cur_tor;
  double j4_cur_tor;
  double j5_cur_tor;
  double j6_cur_tor;
  uint8_t tool_num;
  uint8_t work_num;
  uint8_t dgt_output_h;
  uint8_t dgt_output_l;
  uint8_t tl_dgt_output_l;
  uint8_t dgt_input_h;
  uint8_t dgt_input_l;
  uint8_t tl_dgt_input_l;
  uint16_t cl_analog_input_1;
  uint16_t cl_analog_input_2;
  uint16_t tl_anglog_input;
  double ft_fx_raw_data;
  double ft_fy_raw_data;
  double ft_fz_raw_data;
  double ft_tx_raw_data;
  double ft_ty_raw_data;
  double ft_tz_raw_data;
  double ft_fx_data;
  double ft_fy_data;
  double ft_fz_data;
  double ft_tx_data;
  double ft_ty_data;
  double ft_tz_data;
  uint8_t ft_actstatus;
  uint8_t emg;
  uint8_t motion_done;
  uint8_t grip_motion_done;
  uint16_t mc_queue_len;
  uint8_t collision_err;
  uint16_t trajectory_pnum;
  uint8_t safety_stop1_state;
  uint8_t safety_stop2_state;
  uint8_t gripper_fault_id;
  uint16_t grippererro;
  uint16_t gripper_active;
  uint8_t gripper_position;
  uint8_t gripper_speed;
  uint8_t gripper_current;
  uint16_t gripper_temp;
  uint16_t gripper_voltage;
  uint8_t aux_servo_id;
  uint16_t aux_servo_err;
  uint16_t aux_servo_state;
  double aux_servo_pos;
  double aux_servo_vel;
  double aux_servo_torque;
  uint16_t ext_di_state_1;
  uint16_t ext_di_state_2;
  uint16_t ext_di_state_3;
  uint16_t ext_di_state_4;
  uint16_t ext_di_state_5;
  uint16_t ext_di_state_6;
  uint16_t ext_di_state_7;
  uint16_t ext_di_state_8;
  uint16_t ext_do_state_1;
  uint16_t ext_do_state_2;
  uint16_t ext_do_state_3;
  uint16_t ext_do_state_4;
  uint16_t ext_do_state_5;
  uint16_t ext_do_state_6;
  uint16_t ext_do_state_7;
  uint16_t ext_do_state_8;
  uint16_t ext_ai_state_1;
  uint16_t ext_ai_state_2;
  uint16_t ext_ai_state_3;
  uint16_t ext_ai_state_4;
  uint16_t ext_ao_state_1;
  uint16_t ext_ao_state_2;
  uint16_t ext_ao_state_3;
  uint16_t ext_ao_state_4;
  uint8_t rbt_enable_state;
  uint16_t end_lua_err_code;
  uint16_t cl_analog_output_1;
  uint16_t cl_analog_output_2;
  uint16_t tl_analog_output;
  double gripper_rot_num;
  uint8_t gripper_rot_speed;
  uint8_t gripper_rot_torque;
  uint8_t weldbreakoffstate;
  uint8_t weldarcstate;
  double j1_tgt_tor;
  double j2_tgt_tor;
  double j3_tgt_tor;
  double j4_tgt_tor;
  double j5_tgt_tor;
  double j6_tgt_tor;
  double jwide_voltage_ctrl_box_temp;
  uint16_t wide_voltage_ctrl_box_fan_current;
  double tool_coord_x;
  double tool_coord_y;
  double tool_coord_z;
  double tool_coord_a;
  double tool_coord_b;
  double tool_coord_c;
  double wobj_coord_x;
  double wobj_coord_y;
  double wobj_coord_z;
  double wobj_coord_a;
  double wobj_coord_b;
  double wobj_coord_c;
  double ex_tool_coord_x;
  double ex_tool_coord_y;
  double ex_tool_coord_z;
  double ex_tool_coord_a;
  double ex_tool_coord_b;
  double ex_tool_coord_c;
  double ex_axis_coord_x;
  double ex_axis_coord_y;
  double ex_axis_coord_z;
  double ex_axis_coord_a;
  double ex_axis_coord_b;
  double ex_axis_coord_c;
  double load;
  double load_cog_x;
  double load_cog_y;
  double load_cog_z;
  double j1_last_servoj_target;
  double j2_last_servoj_target;
  double j3_last_servoj_target;
  double j4_last_servoj_target;
  double j5_last_servoj_target;
  double j6_last_servoj_target;
  uint16_t servoj_cmd_num;
} fairino_msgs__msg__RobotNonrtState;

// Struct for a sequence of fairino_msgs__msg__RobotNonrtState.
typedef struct fairino_msgs__msg__RobotNonrtState__Sequence
{
  fairino_msgs__msg__RobotNonrtState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fairino_msgs__msg__RobotNonrtState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FAIRINO_MSGS__MSG__DETAIL__ROBOT_NONRT_STATE__STRUCT_H_
