// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from fairino_msgs:msg/RobotNonrtState.idl
// generated code does not contain a copyright notice
#include "fairino_msgs/msg/detail/robot_nonrt_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "fairino_msgs/msg/detail/robot_nonrt_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace fairino_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fairino_msgs
cdr_serialize(
  const fairino_msgs::msg::RobotNonrtState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: prg_state
  cdr << ros_message.prg_state;
  // Member: rbt_state
  cdr << ros_message.rbt_state;
  // Member: rbt_main_code
  cdr << ros_message.rbt_main_code;
  // Member: rbt_sub_code
  cdr << ros_message.rbt_sub_code;
  // Member: robot_mode
  cdr << ros_message.robot_mode;
  // Member: j1_cur_pos
  cdr << ros_message.j1_cur_pos;
  // Member: j2_cur_pos
  cdr << ros_message.j2_cur_pos;
  // Member: j3_cur_pos
  cdr << ros_message.j3_cur_pos;
  // Member: j4_cur_pos
  cdr << ros_message.j4_cur_pos;
  // Member: j5_cur_pos
  cdr << ros_message.j5_cur_pos;
  // Member: j6_cur_pos
  cdr << ros_message.j6_cur_pos;
  // Member: cart_x_cur_pos
  cdr << ros_message.cart_x_cur_pos;
  // Member: cart_y_cur_pos
  cdr << ros_message.cart_y_cur_pos;
  // Member: cart_z_cur_pos
  cdr << ros_message.cart_z_cur_pos;
  // Member: cart_a_cur_pos
  cdr << ros_message.cart_a_cur_pos;
  // Member: cart_b_cur_pos
  cdr << ros_message.cart_b_cur_pos;
  // Member: cart_c_cur_pos
  cdr << ros_message.cart_c_cur_pos;
  // Member: flange_x_cur_pos
  cdr << ros_message.flange_x_cur_pos;
  // Member: flange_y_cur_pos
  cdr << ros_message.flange_y_cur_pos;
  // Member: flange_z_cur_pos
  cdr << ros_message.flange_z_cur_pos;
  // Member: flange_a_cur_pos
  cdr << ros_message.flange_a_cur_pos;
  // Member: flange_b_cur_pos
  cdr << ros_message.flange_b_cur_pos;
  // Member: flange_c_cur_pos
  cdr << ros_message.flange_c_cur_pos;
  // Member: j1_actual_qd
  cdr << ros_message.j1_actual_qd;
  // Member: j2_actual_qd
  cdr << ros_message.j2_actual_qd;
  // Member: j3_actual_qd
  cdr << ros_message.j3_actual_qd;
  // Member: j4_actual_qd
  cdr << ros_message.j4_actual_qd;
  // Member: j5_actual_qd
  cdr << ros_message.j5_actual_qd;
  // Member: j6_actual_qd
  cdr << ros_message.j6_actual_qd;
  // Member: j1_actual_qdd
  cdr << ros_message.j1_actual_qdd;
  // Member: j2_actual_qdd
  cdr << ros_message.j2_actual_qdd;
  // Member: j3_actual_qdd
  cdr << ros_message.j3_actual_qdd;
  // Member: j4_actual_qdd
  cdr << ros_message.j4_actual_qdd;
  // Member: j5_actual_qdd
  cdr << ros_message.j5_actual_qdd;
  // Member: j6_actual_qdd
  cdr << ros_message.j6_actual_qdd;
  // Member: cart_lin_cmd_speed
  cdr << ros_message.cart_lin_cmd_speed;
  // Member: cart_rot_cmd_speed
  cdr << ros_message.cart_rot_cmd_speed;
  // Member: cart_x_cmd_speed
  cdr << ros_message.cart_x_cmd_speed;
  // Member: cart_y_cmd_speed
  cdr << ros_message.cart_y_cmd_speed;
  // Member: cart_z_cmd_speed
  cdr << ros_message.cart_z_cmd_speed;
  // Member: cart_a_cmd_speed
  cdr << ros_message.cart_a_cmd_speed;
  // Member: cart_b_cmd_speed
  cdr << ros_message.cart_b_cmd_speed;
  // Member: cart_c_cmd_speed
  cdr << ros_message.cart_c_cmd_speed;
  // Member: cart_lin_cur_speed
  cdr << ros_message.cart_lin_cur_speed;
  // Member: cart_rot_cur_speed
  cdr << ros_message.cart_rot_cur_speed;
  // Member: cart_x_cur_speed
  cdr << ros_message.cart_x_cur_speed;
  // Member: cart_y_cur_speed
  cdr << ros_message.cart_y_cur_speed;
  // Member: cart_z_cur_speed
  cdr << ros_message.cart_z_cur_speed;
  // Member: cart_a_cur_speed
  cdr << ros_message.cart_a_cur_speed;
  // Member: cart_b_cur_speed
  cdr << ros_message.cart_b_cur_speed;
  // Member: cart_c_cur_speed
  cdr << ros_message.cart_c_cur_speed;
  // Member: j1_cur_tor
  cdr << ros_message.j1_cur_tor;
  // Member: j2_cur_tor
  cdr << ros_message.j2_cur_tor;
  // Member: j3_cur_tor
  cdr << ros_message.j3_cur_tor;
  // Member: j4_cur_tor
  cdr << ros_message.j4_cur_tor;
  // Member: j5_cur_tor
  cdr << ros_message.j5_cur_tor;
  // Member: j6_cur_tor
  cdr << ros_message.j6_cur_tor;
  // Member: tool_num
  cdr << ros_message.tool_num;
  // Member: work_num
  cdr << ros_message.work_num;
  // Member: dgt_output_h
  cdr << ros_message.dgt_output_h;
  // Member: dgt_output_l
  cdr << ros_message.dgt_output_l;
  // Member: tl_dgt_output_l
  cdr << ros_message.tl_dgt_output_l;
  // Member: dgt_input_h
  cdr << ros_message.dgt_input_h;
  // Member: dgt_input_l
  cdr << ros_message.dgt_input_l;
  // Member: tl_dgt_input_l
  cdr << ros_message.tl_dgt_input_l;
  // Member: cl_analog_input_1
  cdr << ros_message.cl_analog_input_1;
  // Member: cl_analog_input_2
  cdr << ros_message.cl_analog_input_2;
  // Member: tl_anglog_input
  cdr << ros_message.tl_anglog_input;
  // Member: ft_fx_raw_data
  cdr << ros_message.ft_fx_raw_data;
  // Member: ft_fy_raw_data
  cdr << ros_message.ft_fy_raw_data;
  // Member: ft_fz_raw_data
  cdr << ros_message.ft_fz_raw_data;
  // Member: ft_tx_raw_data
  cdr << ros_message.ft_tx_raw_data;
  // Member: ft_ty_raw_data
  cdr << ros_message.ft_ty_raw_data;
  // Member: ft_tz_raw_data
  cdr << ros_message.ft_tz_raw_data;
  // Member: ft_fx_data
  cdr << ros_message.ft_fx_data;
  // Member: ft_fy_data
  cdr << ros_message.ft_fy_data;
  // Member: ft_fz_data
  cdr << ros_message.ft_fz_data;
  // Member: ft_tx_data
  cdr << ros_message.ft_tx_data;
  // Member: ft_ty_data
  cdr << ros_message.ft_ty_data;
  // Member: ft_tz_data
  cdr << ros_message.ft_tz_data;
  // Member: ft_actstatus
  cdr << ros_message.ft_actstatus;
  // Member: emg
  cdr << ros_message.emg;
  // Member: motion_done
  cdr << ros_message.motion_done;
  // Member: grip_motion_done
  cdr << ros_message.grip_motion_done;
  // Member: mc_queue_len
  cdr << ros_message.mc_queue_len;
  // Member: collision_err
  cdr << ros_message.collision_err;
  // Member: trajectory_pnum
  cdr << ros_message.trajectory_pnum;
  // Member: safety_stop1_state
  cdr << ros_message.safety_stop1_state;
  // Member: safety_stop2_state
  cdr << ros_message.safety_stop2_state;
  // Member: gripper_fault_id
  cdr << ros_message.gripper_fault_id;
  // Member: grippererro
  cdr << ros_message.grippererro;
  // Member: gripper_active
  cdr << ros_message.gripper_active;
  // Member: gripper_position
  cdr << ros_message.gripper_position;
  // Member: gripper_speed
  cdr << ros_message.gripper_speed;
  // Member: gripper_current
  cdr << ros_message.gripper_current;
  // Member: gripper_temp
  cdr << ros_message.gripper_temp;
  // Member: gripper_voltage
  cdr << ros_message.gripper_voltage;
  // Member: aux_servo_id
  cdr << ros_message.aux_servo_id;
  // Member: aux_servo_err
  cdr << ros_message.aux_servo_err;
  // Member: aux_servo_state
  cdr << ros_message.aux_servo_state;
  // Member: aux_servo_pos
  cdr << ros_message.aux_servo_pos;
  // Member: aux_servo_vel
  cdr << ros_message.aux_servo_vel;
  // Member: aux_servo_torque
  cdr << ros_message.aux_servo_torque;
  // Member: ext_di_state_1
  cdr << ros_message.ext_di_state_1;
  // Member: ext_di_state_2
  cdr << ros_message.ext_di_state_2;
  // Member: ext_di_state_3
  cdr << ros_message.ext_di_state_3;
  // Member: ext_di_state_4
  cdr << ros_message.ext_di_state_4;
  // Member: ext_di_state_5
  cdr << ros_message.ext_di_state_5;
  // Member: ext_di_state_6
  cdr << ros_message.ext_di_state_6;
  // Member: ext_di_state_7
  cdr << ros_message.ext_di_state_7;
  // Member: ext_di_state_8
  cdr << ros_message.ext_di_state_8;
  // Member: ext_do_state_1
  cdr << ros_message.ext_do_state_1;
  // Member: ext_do_state_2
  cdr << ros_message.ext_do_state_2;
  // Member: ext_do_state_3
  cdr << ros_message.ext_do_state_3;
  // Member: ext_do_state_4
  cdr << ros_message.ext_do_state_4;
  // Member: ext_do_state_5
  cdr << ros_message.ext_do_state_5;
  // Member: ext_do_state_6
  cdr << ros_message.ext_do_state_6;
  // Member: ext_do_state_7
  cdr << ros_message.ext_do_state_7;
  // Member: ext_do_state_8
  cdr << ros_message.ext_do_state_8;
  // Member: ext_ai_state_1
  cdr << ros_message.ext_ai_state_1;
  // Member: ext_ai_state_2
  cdr << ros_message.ext_ai_state_2;
  // Member: ext_ai_state_3
  cdr << ros_message.ext_ai_state_3;
  // Member: ext_ai_state_4
  cdr << ros_message.ext_ai_state_4;
  // Member: ext_ao_state_1
  cdr << ros_message.ext_ao_state_1;
  // Member: ext_ao_state_2
  cdr << ros_message.ext_ao_state_2;
  // Member: ext_ao_state_3
  cdr << ros_message.ext_ao_state_3;
  // Member: ext_ao_state_4
  cdr << ros_message.ext_ao_state_4;
  // Member: rbt_enable_state
  cdr << ros_message.rbt_enable_state;
  // Member: end_lua_err_code
  cdr << ros_message.end_lua_err_code;
  // Member: cl_analog_output_1
  cdr << ros_message.cl_analog_output_1;
  // Member: cl_analog_output_2
  cdr << ros_message.cl_analog_output_2;
  // Member: tl_analog_output
  cdr << ros_message.tl_analog_output;
  // Member: gripper_rot_num
  cdr << ros_message.gripper_rot_num;
  // Member: gripper_rot_speed
  cdr << ros_message.gripper_rot_speed;
  // Member: gripper_rot_torque
  cdr << ros_message.gripper_rot_torque;
  // Member: weldbreakoffstate
  cdr << ros_message.weldbreakoffstate;
  // Member: weldarcstate
  cdr << ros_message.weldarcstate;
  // Member: j1_tgt_tor
  cdr << ros_message.j1_tgt_tor;
  // Member: j2_tgt_tor
  cdr << ros_message.j2_tgt_tor;
  // Member: j3_tgt_tor
  cdr << ros_message.j3_tgt_tor;
  // Member: j4_tgt_tor
  cdr << ros_message.j4_tgt_tor;
  // Member: j5_tgt_tor
  cdr << ros_message.j5_tgt_tor;
  // Member: j6_tgt_tor
  cdr << ros_message.j6_tgt_tor;
  // Member: jwide_voltage_ctrl_box_temp
  cdr << ros_message.jwide_voltage_ctrl_box_temp;
  // Member: wide_voltage_ctrl_box_fan_current
  cdr << ros_message.wide_voltage_ctrl_box_fan_current;
  // Member: tool_coord_x
  cdr << ros_message.tool_coord_x;
  // Member: tool_coord_y
  cdr << ros_message.tool_coord_y;
  // Member: tool_coord_z
  cdr << ros_message.tool_coord_z;
  // Member: tool_coord_a
  cdr << ros_message.tool_coord_a;
  // Member: tool_coord_b
  cdr << ros_message.tool_coord_b;
  // Member: tool_coord_c
  cdr << ros_message.tool_coord_c;
  // Member: wobj_coord_x
  cdr << ros_message.wobj_coord_x;
  // Member: wobj_coord_y
  cdr << ros_message.wobj_coord_y;
  // Member: wobj_coord_z
  cdr << ros_message.wobj_coord_z;
  // Member: wobj_coord_a
  cdr << ros_message.wobj_coord_a;
  // Member: wobj_coord_b
  cdr << ros_message.wobj_coord_b;
  // Member: wobj_coord_c
  cdr << ros_message.wobj_coord_c;
  // Member: ex_tool_coord_x
  cdr << ros_message.ex_tool_coord_x;
  // Member: ex_tool_coord_y
  cdr << ros_message.ex_tool_coord_y;
  // Member: ex_tool_coord_z
  cdr << ros_message.ex_tool_coord_z;
  // Member: ex_tool_coord_a
  cdr << ros_message.ex_tool_coord_a;
  // Member: ex_tool_coord_b
  cdr << ros_message.ex_tool_coord_b;
  // Member: ex_tool_coord_c
  cdr << ros_message.ex_tool_coord_c;
  // Member: ex_axis_coord_x
  cdr << ros_message.ex_axis_coord_x;
  // Member: ex_axis_coord_y
  cdr << ros_message.ex_axis_coord_y;
  // Member: ex_axis_coord_z
  cdr << ros_message.ex_axis_coord_z;
  // Member: ex_axis_coord_a
  cdr << ros_message.ex_axis_coord_a;
  // Member: ex_axis_coord_b
  cdr << ros_message.ex_axis_coord_b;
  // Member: ex_axis_coord_c
  cdr << ros_message.ex_axis_coord_c;
  // Member: load
  cdr << ros_message.load;
  // Member: load_cog_x
  cdr << ros_message.load_cog_x;
  // Member: load_cog_y
  cdr << ros_message.load_cog_y;
  // Member: load_cog_z
  cdr << ros_message.load_cog_z;
  // Member: j1_last_servoj_target
  cdr << ros_message.j1_last_servoj_target;
  // Member: j2_last_servoj_target
  cdr << ros_message.j2_last_servoj_target;
  // Member: j3_last_servoj_target
  cdr << ros_message.j3_last_servoj_target;
  // Member: j4_last_servoj_target
  cdr << ros_message.j4_last_servoj_target;
  // Member: j5_last_servoj_target
  cdr << ros_message.j5_last_servoj_target;
  // Member: j6_last_servoj_target
  cdr << ros_message.j6_last_servoj_target;
  // Member: servoj_cmd_num
  cdr << ros_message.servoj_cmd_num;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fairino_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fairino_msgs::msg::RobotNonrtState & ros_message)
{
  // Member: prg_state
  cdr >> ros_message.prg_state;

  // Member: rbt_state
  cdr >> ros_message.rbt_state;

  // Member: rbt_main_code
  cdr >> ros_message.rbt_main_code;

  // Member: rbt_sub_code
  cdr >> ros_message.rbt_sub_code;

  // Member: robot_mode
  cdr >> ros_message.robot_mode;

  // Member: j1_cur_pos
  cdr >> ros_message.j1_cur_pos;

  // Member: j2_cur_pos
  cdr >> ros_message.j2_cur_pos;

  // Member: j3_cur_pos
  cdr >> ros_message.j3_cur_pos;

  // Member: j4_cur_pos
  cdr >> ros_message.j4_cur_pos;

  // Member: j5_cur_pos
  cdr >> ros_message.j5_cur_pos;

  // Member: j6_cur_pos
  cdr >> ros_message.j6_cur_pos;

  // Member: cart_x_cur_pos
  cdr >> ros_message.cart_x_cur_pos;

  // Member: cart_y_cur_pos
  cdr >> ros_message.cart_y_cur_pos;

  // Member: cart_z_cur_pos
  cdr >> ros_message.cart_z_cur_pos;

  // Member: cart_a_cur_pos
  cdr >> ros_message.cart_a_cur_pos;

  // Member: cart_b_cur_pos
  cdr >> ros_message.cart_b_cur_pos;

  // Member: cart_c_cur_pos
  cdr >> ros_message.cart_c_cur_pos;

  // Member: flange_x_cur_pos
  cdr >> ros_message.flange_x_cur_pos;

  // Member: flange_y_cur_pos
  cdr >> ros_message.flange_y_cur_pos;

  // Member: flange_z_cur_pos
  cdr >> ros_message.flange_z_cur_pos;

  // Member: flange_a_cur_pos
  cdr >> ros_message.flange_a_cur_pos;

  // Member: flange_b_cur_pos
  cdr >> ros_message.flange_b_cur_pos;

  // Member: flange_c_cur_pos
  cdr >> ros_message.flange_c_cur_pos;

  // Member: j1_actual_qd
  cdr >> ros_message.j1_actual_qd;

  // Member: j2_actual_qd
  cdr >> ros_message.j2_actual_qd;

  // Member: j3_actual_qd
  cdr >> ros_message.j3_actual_qd;

  // Member: j4_actual_qd
  cdr >> ros_message.j4_actual_qd;

  // Member: j5_actual_qd
  cdr >> ros_message.j5_actual_qd;

  // Member: j6_actual_qd
  cdr >> ros_message.j6_actual_qd;

  // Member: j1_actual_qdd
  cdr >> ros_message.j1_actual_qdd;

  // Member: j2_actual_qdd
  cdr >> ros_message.j2_actual_qdd;

  // Member: j3_actual_qdd
  cdr >> ros_message.j3_actual_qdd;

  // Member: j4_actual_qdd
  cdr >> ros_message.j4_actual_qdd;

  // Member: j5_actual_qdd
  cdr >> ros_message.j5_actual_qdd;

  // Member: j6_actual_qdd
  cdr >> ros_message.j6_actual_qdd;

  // Member: cart_lin_cmd_speed
  cdr >> ros_message.cart_lin_cmd_speed;

  // Member: cart_rot_cmd_speed
  cdr >> ros_message.cart_rot_cmd_speed;

  // Member: cart_x_cmd_speed
  cdr >> ros_message.cart_x_cmd_speed;

  // Member: cart_y_cmd_speed
  cdr >> ros_message.cart_y_cmd_speed;

  // Member: cart_z_cmd_speed
  cdr >> ros_message.cart_z_cmd_speed;

  // Member: cart_a_cmd_speed
  cdr >> ros_message.cart_a_cmd_speed;

  // Member: cart_b_cmd_speed
  cdr >> ros_message.cart_b_cmd_speed;

  // Member: cart_c_cmd_speed
  cdr >> ros_message.cart_c_cmd_speed;

  // Member: cart_lin_cur_speed
  cdr >> ros_message.cart_lin_cur_speed;

  // Member: cart_rot_cur_speed
  cdr >> ros_message.cart_rot_cur_speed;

  // Member: cart_x_cur_speed
  cdr >> ros_message.cart_x_cur_speed;

  // Member: cart_y_cur_speed
  cdr >> ros_message.cart_y_cur_speed;

  // Member: cart_z_cur_speed
  cdr >> ros_message.cart_z_cur_speed;

  // Member: cart_a_cur_speed
  cdr >> ros_message.cart_a_cur_speed;

  // Member: cart_b_cur_speed
  cdr >> ros_message.cart_b_cur_speed;

  // Member: cart_c_cur_speed
  cdr >> ros_message.cart_c_cur_speed;

  // Member: j1_cur_tor
  cdr >> ros_message.j1_cur_tor;

  // Member: j2_cur_tor
  cdr >> ros_message.j2_cur_tor;

  // Member: j3_cur_tor
  cdr >> ros_message.j3_cur_tor;

  // Member: j4_cur_tor
  cdr >> ros_message.j4_cur_tor;

  // Member: j5_cur_tor
  cdr >> ros_message.j5_cur_tor;

  // Member: j6_cur_tor
  cdr >> ros_message.j6_cur_tor;

  // Member: tool_num
  cdr >> ros_message.tool_num;

  // Member: work_num
  cdr >> ros_message.work_num;

  // Member: dgt_output_h
  cdr >> ros_message.dgt_output_h;

  // Member: dgt_output_l
  cdr >> ros_message.dgt_output_l;

  // Member: tl_dgt_output_l
  cdr >> ros_message.tl_dgt_output_l;

  // Member: dgt_input_h
  cdr >> ros_message.dgt_input_h;

  // Member: dgt_input_l
  cdr >> ros_message.dgt_input_l;

  // Member: tl_dgt_input_l
  cdr >> ros_message.tl_dgt_input_l;

  // Member: cl_analog_input_1
  cdr >> ros_message.cl_analog_input_1;

  // Member: cl_analog_input_2
  cdr >> ros_message.cl_analog_input_2;

  // Member: tl_anglog_input
  cdr >> ros_message.tl_anglog_input;

  // Member: ft_fx_raw_data
  cdr >> ros_message.ft_fx_raw_data;

  // Member: ft_fy_raw_data
  cdr >> ros_message.ft_fy_raw_data;

  // Member: ft_fz_raw_data
  cdr >> ros_message.ft_fz_raw_data;

  // Member: ft_tx_raw_data
  cdr >> ros_message.ft_tx_raw_data;

  // Member: ft_ty_raw_data
  cdr >> ros_message.ft_ty_raw_data;

  // Member: ft_tz_raw_data
  cdr >> ros_message.ft_tz_raw_data;

  // Member: ft_fx_data
  cdr >> ros_message.ft_fx_data;

  // Member: ft_fy_data
  cdr >> ros_message.ft_fy_data;

  // Member: ft_fz_data
  cdr >> ros_message.ft_fz_data;

  // Member: ft_tx_data
  cdr >> ros_message.ft_tx_data;

  // Member: ft_ty_data
  cdr >> ros_message.ft_ty_data;

  // Member: ft_tz_data
  cdr >> ros_message.ft_tz_data;

  // Member: ft_actstatus
  cdr >> ros_message.ft_actstatus;

  // Member: emg
  cdr >> ros_message.emg;

  // Member: motion_done
  cdr >> ros_message.motion_done;

  // Member: grip_motion_done
  cdr >> ros_message.grip_motion_done;

  // Member: mc_queue_len
  cdr >> ros_message.mc_queue_len;

  // Member: collision_err
  cdr >> ros_message.collision_err;

  // Member: trajectory_pnum
  cdr >> ros_message.trajectory_pnum;

  // Member: safety_stop1_state
  cdr >> ros_message.safety_stop1_state;

  // Member: safety_stop2_state
  cdr >> ros_message.safety_stop2_state;

  // Member: gripper_fault_id
  cdr >> ros_message.gripper_fault_id;

  // Member: grippererro
  cdr >> ros_message.grippererro;

  // Member: gripper_active
  cdr >> ros_message.gripper_active;

  // Member: gripper_position
  cdr >> ros_message.gripper_position;

  // Member: gripper_speed
  cdr >> ros_message.gripper_speed;

  // Member: gripper_current
  cdr >> ros_message.gripper_current;

  // Member: gripper_temp
  cdr >> ros_message.gripper_temp;

  // Member: gripper_voltage
  cdr >> ros_message.gripper_voltage;

  // Member: aux_servo_id
  cdr >> ros_message.aux_servo_id;

  // Member: aux_servo_err
  cdr >> ros_message.aux_servo_err;

  // Member: aux_servo_state
  cdr >> ros_message.aux_servo_state;

  // Member: aux_servo_pos
  cdr >> ros_message.aux_servo_pos;

  // Member: aux_servo_vel
  cdr >> ros_message.aux_servo_vel;

  // Member: aux_servo_torque
  cdr >> ros_message.aux_servo_torque;

  // Member: ext_di_state_1
  cdr >> ros_message.ext_di_state_1;

  // Member: ext_di_state_2
  cdr >> ros_message.ext_di_state_2;

  // Member: ext_di_state_3
  cdr >> ros_message.ext_di_state_3;

  // Member: ext_di_state_4
  cdr >> ros_message.ext_di_state_4;

  // Member: ext_di_state_5
  cdr >> ros_message.ext_di_state_5;

  // Member: ext_di_state_6
  cdr >> ros_message.ext_di_state_6;

  // Member: ext_di_state_7
  cdr >> ros_message.ext_di_state_7;

  // Member: ext_di_state_8
  cdr >> ros_message.ext_di_state_8;

  // Member: ext_do_state_1
  cdr >> ros_message.ext_do_state_1;

  // Member: ext_do_state_2
  cdr >> ros_message.ext_do_state_2;

  // Member: ext_do_state_3
  cdr >> ros_message.ext_do_state_3;

  // Member: ext_do_state_4
  cdr >> ros_message.ext_do_state_4;

  // Member: ext_do_state_5
  cdr >> ros_message.ext_do_state_5;

  // Member: ext_do_state_6
  cdr >> ros_message.ext_do_state_6;

  // Member: ext_do_state_7
  cdr >> ros_message.ext_do_state_7;

  // Member: ext_do_state_8
  cdr >> ros_message.ext_do_state_8;

  // Member: ext_ai_state_1
  cdr >> ros_message.ext_ai_state_1;

  // Member: ext_ai_state_2
  cdr >> ros_message.ext_ai_state_2;

  // Member: ext_ai_state_3
  cdr >> ros_message.ext_ai_state_3;

  // Member: ext_ai_state_4
  cdr >> ros_message.ext_ai_state_4;

  // Member: ext_ao_state_1
  cdr >> ros_message.ext_ao_state_1;

  // Member: ext_ao_state_2
  cdr >> ros_message.ext_ao_state_2;

  // Member: ext_ao_state_3
  cdr >> ros_message.ext_ao_state_3;

  // Member: ext_ao_state_4
  cdr >> ros_message.ext_ao_state_4;

  // Member: rbt_enable_state
  cdr >> ros_message.rbt_enable_state;

  // Member: end_lua_err_code
  cdr >> ros_message.end_lua_err_code;

  // Member: cl_analog_output_1
  cdr >> ros_message.cl_analog_output_1;

  // Member: cl_analog_output_2
  cdr >> ros_message.cl_analog_output_2;

  // Member: tl_analog_output
  cdr >> ros_message.tl_analog_output;

  // Member: gripper_rot_num
  cdr >> ros_message.gripper_rot_num;

  // Member: gripper_rot_speed
  cdr >> ros_message.gripper_rot_speed;

  // Member: gripper_rot_torque
  cdr >> ros_message.gripper_rot_torque;

  // Member: weldbreakoffstate
  cdr >> ros_message.weldbreakoffstate;

  // Member: weldarcstate
  cdr >> ros_message.weldarcstate;

  // Member: j1_tgt_tor
  cdr >> ros_message.j1_tgt_tor;

  // Member: j2_tgt_tor
  cdr >> ros_message.j2_tgt_tor;

  // Member: j3_tgt_tor
  cdr >> ros_message.j3_tgt_tor;

  // Member: j4_tgt_tor
  cdr >> ros_message.j4_tgt_tor;

  // Member: j5_tgt_tor
  cdr >> ros_message.j5_tgt_tor;

  // Member: j6_tgt_tor
  cdr >> ros_message.j6_tgt_tor;

  // Member: jwide_voltage_ctrl_box_temp
  cdr >> ros_message.jwide_voltage_ctrl_box_temp;

  // Member: wide_voltage_ctrl_box_fan_current
  cdr >> ros_message.wide_voltage_ctrl_box_fan_current;

  // Member: tool_coord_x
  cdr >> ros_message.tool_coord_x;

  // Member: tool_coord_y
  cdr >> ros_message.tool_coord_y;

  // Member: tool_coord_z
  cdr >> ros_message.tool_coord_z;

  // Member: tool_coord_a
  cdr >> ros_message.tool_coord_a;

  // Member: tool_coord_b
  cdr >> ros_message.tool_coord_b;

  // Member: tool_coord_c
  cdr >> ros_message.tool_coord_c;

  // Member: wobj_coord_x
  cdr >> ros_message.wobj_coord_x;

  // Member: wobj_coord_y
  cdr >> ros_message.wobj_coord_y;

  // Member: wobj_coord_z
  cdr >> ros_message.wobj_coord_z;

  // Member: wobj_coord_a
  cdr >> ros_message.wobj_coord_a;

  // Member: wobj_coord_b
  cdr >> ros_message.wobj_coord_b;

  // Member: wobj_coord_c
  cdr >> ros_message.wobj_coord_c;

  // Member: ex_tool_coord_x
  cdr >> ros_message.ex_tool_coord_x;

  // Member: ex_tool_coord_y
  cdr >> ros_message.ex_tool_coord_y;

  // Member: ex_tool_coord_z
  cdr >> ros_message.ex_tool_coord_z;

  // Member: ex_tool_coord_a
  cdr >> ros_message.ex_tool_coord_a;

  // Member: ex_tool_coord_b
  cdr >> ros_message.ex_tool_coord_b;

  // Member: ex_tool_coord_c
  cdr >> ros_message.ex_tool_coord_c;

  // Member: ex_axis_coord_x
  cdr >> ros_message.ex_axis_coord_x;

  // Member: ex_axis_coord_y
  cdr >> ros_message.ex_axis_coord_y;

  // Member: ex_axis_coord_z
  cdr >> ros_message.ex_axis_coord_z;

  // Member: ex_axis_coord_a
  cdr >> ros_message.ex_axis_coord_a;

  // Member: ex_axis_coord_b
  cdr >> ros_message.ex_axis_coord_b;

  // Member: ex_axis_coord_c
  cdr >> ros_message.ex_axis_coord_c;

  // Member: load
  cdr >> ros_message.load;

  // Member: load_cog_x
  cdr >> ros_message.load_cog_x;

  // Member: load_cog_y
  cdr >> ros_message.load_cog_y;

  // Member: load_cog_z
  cdr >> ros_message.load_cog_z;

  // Member: j1_last_servoj_target
  cdr >> ros_message.j1_last_servoj_target;

  // Member: j2_last_servoj_target
  cdr >> ros_message.j2_last_servoj_target;

  // Member: j3_last_servoj_target
  cdr >> ros_message.j3_last_servoj_target;

  // Member: j4_last_servoj_target
  cdr >> ros_message.j4_last_servoj_target;

  // Member: j5_last_servoj_target
  cdr >> ros_message.j5_last_servoj_target;

  // Member: j6_last_servoj_target
  cdr >> ros_message.j6_last_servoj_target;

  // Member: servoj_cmd_num
  cdr >> ros_message.servoj_cmd_num;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fairino_msgs
get_serialized_size(
  const fairino_msgs::msg::RobotNonrtState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: prg_state
  {
    size_t item_size = sizeof(ros_message.prg_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rbt_state
  {
    size_t item_size = sizeof(ros_message.rbt_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rbt_main_code
  {
    size_t item_size = sizeof(ros_message.rbt_main_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rbt_sub_code
  {
    size_t item_size = sizeof(ros_message.rbt_sub_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robot_mode
  {
    size_t item_size = sizeof(ros_message.robot_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j1_cur_pos
  {
    size_t item_size = sizeof(ros_message.j1_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j2_cur_pos
  {
    size_t item_size = sizeof(ros_message.j2_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j3_cur_pos
  {
    size_t item_size = sizeof(ros_message.j3_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j4_cur_pos
  {
    size_t item_size = sizeof(ros_message.j4_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j5_cur_pos
  {
    size_t item_size = sizeof(ros_message.j5_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j6_cur_pos
  {
    size_t item_size = sizeof(ros_message.j6_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_x_cur_pos
  {
    size_t item_size = sizeof(ros_message.cart_x_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_y_cur_pos
  {
    size_t item_size = sizeof(ros_message.cart_y_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_z_cur_pos
  {
    size_t item_size = sizeof(ros_message.cart_z_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_a_cur_pos
  {
    size_t item_size = sizeof(ros_message.cart_a_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_b_cur_pos
  {
    size_t item_size = sizeof(ros_message.cart_b_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_c_cur_pos
  {
    size_t item_size = sizeof(ros_message.cart_c_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flange_x_cur_pos
  {
    size_t item_size = sizeof(ros_message.flange_x_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flange_y_cur_pos
  {
    size_t item_size = sizeof(ros_message.flange_y_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flange_z_cur_pos
  {
    size_t item_size = sizeof(ros_message.flange_z_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flange_a_cur_pos
  {
    size_t item_size = sizeof(ros_message.flange_a_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flange_b_cur_pos
  {
    size_t item_size = sizeof(ros_message.flange_b_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flange_c_cur_pos
  {
    size_t item_size = sizeof(ros_message.flange_c_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j1_actual_qd
  {
    size_t item_size = sizeof(ros_message.j1_actual_qd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j2_actual_qd
  {
    size_t item_size = sizeof(ros_message.j2_actual_qd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j3_actual_qd
  {
    size_t item_size = sizeof(ros_message.j3_actual_qd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j4_actual_qd
  {
    size_t item_size = sizeof(ros_message.j4_actual_qd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j5_actual_qd
  {
    size_t item_size = sizeof(ros_message.j5_actual_qd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j6_actual_qd
  {
    size_t item_size = sizeof(ros_message.j6_actual_qd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j1_actual_qdd
  {
    size_t item_size = sizeof(ros_message.j1_actual_qdd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j2_actual_qdd
  {
    size_t item_size = sizeof(ros_message.j2_actual_qdd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j3_actual_qdd
  {
    size_t item_size = sizeof(ros_message.j3_actual_qdd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j4_actual_qdd
  {
    size_t item_size = sizeof(ros_message.j4_actual_qdd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j5_actual_qdd
  {
    size_t item_size = sizeof(ros_message.j5_actual_qdd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j6_actual_qdd
  {
    size_t item_size = sizeof(ros_message.j6_actual_qdd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_lin_cmd_speed
  {
    size_t item_size = sizeof(ros_message.cart_lin_cmd_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_rot_cmd_speed
  {
    size_t item_size = sizeof(ros_message.cart_rot_cmd_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_x_cmd_speed
  {
    size_t item_size = sizeof(ros_message.cart_x_cmd_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_y_cmd_speed
  {
    size_t item_size = sizeof(ros_message.cart_y_cmd_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_z_cmd_speed
  {
    size_t item_size = sizeof(ros_message.cart_z_cmd_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_a_cmd_speed
  {
    size_t item_size = sizeof(ros_message.cart_a_cmd_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_b_cmd_speed
  {
    size_t item_size = sizeof(ros_message.cart_b_cmd_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_c_cmd_speed
  {
    size_t item_size = sizeof(ros_message.cart_c_cmd_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_lin_cur_speed
  {
    size_t item_size = sizeof(ros_message.cart_lin_cur_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_rot_cur_speed
  {
    size_t item_size = sizeof(ros_message.cart_rot_cur_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_x_cur_speed
  {
    size_t item_size = sizeof(ros_message.cart_x_cur_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_y_cur_speed
  {
    size_t item_size = sizeof(ros_message.cart_y_cur_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_z_cur_speed
  {
    size_t item_size = sizeof(ros_message.cart_z_cur_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_a_cur_speed
  {
    size_t item_size = sizeof(ros_message.cart_a_cur_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_b_cur_speed
  {
    size_t item_size = sizeof(ros_message.cart_b_cur_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_c_cur_speed
  {
    size_t item_size = sizeof(ros_message.cart_c_cur_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j1_cur_tor
  {
    size_t item_size = sizeof(ros_message.j1_cur_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j2_cur_tor
  {
    size_t item_size = sizeof(ros_message.j2_cur_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j3_cur_tor
  {
    size_t item_size = sizeof(ros_message.j3_cur_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j4_cur_tor
  {
    size_t item_size = sizeof(ros_message.j4_cur_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j5_cur_tor
  {
    size_t item_size = sizeof(ros_message.j5_cur_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j6_cur_tor
  {
    size_t item_size = sizeof(ros_message.j6_cur_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tool_num
  {
    size_t item_size = sizeof(ros_message.tool_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: work_num
  {
    size_t item_size = sizeof(ros_message.work_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dgt_output_h
  {
    size_t item_size = sizeof(ros_message.dgt_output_h);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dgt_output_l
  {
    size_t item_size = sizeof(ros_message.dgt_output_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tl_dgt_output_l
  {
    size_t item_size = sizeof(ros_message.tl_dgt_output_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dgt_input_h
  {
    size_t item_size = sizeof(ros_message.dgt_input_h);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dgt_input_l
  {
    size_t item_size = sizeof(ros_message.dgt_input_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tl_dgt_input_l
  {
    size_t item_size = sizeof(ros_message.tl_dgt_input_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cl_analog_input_1
  {
    size_t item_size = sizeof(ros_message.cl_analog_input_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cl_analog_input_2
  {
    size_t item_size = sizeof(ros_message.cl_analog_input_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tl_anglog_input
  {
    size_t item_size = sizeof(ros_message.tl_anglog_input);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ft_fx_raw_data
  {
    size_t item_size = sizeof(ros_message.ft_fx_raw_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ft_fy_raw_data
  {
    size_t item_size = sizeof(ros_message.ft_fy_raw_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ft_fz_raw_data
  {
    size_t item_size = sizeof(ros_message.ft_fz_raw_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ft_tx_raw_data
  {
    size_t item_size = sizeof(ros_message.ft_tx_raw_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ft_ty_raw_data
  {
    size_t item_size = sizeof(ros_message.ft_ty_raw_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ft_tz_raw_data
  {
    size_t item_size = sizeof(ros_message.ft_tz_raw_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ft_fx_data
  {
    size_t item_size = sizeof(ros_message.ft_fx_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ft_fy_data
  {
    size_t item_size = sizeof(ros_message.ft_fy_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ft_fz_data
  {
    size_t item_size = sizeof(ros_message.ft_fz_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ft_tx_data
  {
    size_t item_size = sizeof(ros_message.ft_tx_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ft_ty_data
  {
    size_t item_size = sizeof(ros_message.ft_ty_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ft_tz_data
  {
    size_t item_size = sizeof(ros_message.ft_tz_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ft_actstatus
  {
    size_t item_size = sizeof(ros_message.ft_actstatus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: emg
  {
    size_t item_size = sizeof(ros_message.emg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motion_done
  {
    size_t item_size = sizeof(ros_message.motion_done);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: grip_motion_done
  {
    size_t item_size = sizeof(ros_message.grip_motion_done);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mc_queue_len
  {
    size_t item_size = sizeof(ros_message.mc_queue_len);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: collision_err
  {
    size_t item_size = sizeof(ros_message.collision_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trajectory_pnum
  {
    size_t item_size = sizeof(ros_message.trajectory_pnum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: safety_stop1_state
  {
    size_t item_size = sizeof(ros_message.safety_stop1_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: safety_stop2_state
  {
    size_t item_size = sizeof(ros_message.safety_stop2_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gripper_fault_id
  {
    size_t item_size = sizeof(ros_message.gripper_fault_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: grippererro
  {
    size_t item_size = sizeof(ros_message.grippererro);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gripper_active
  {
    size_t item_size = sizeof(ros_message.gripper_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gripper_position
  {
    size_t item_size = sizeof(ros_message.gripper_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gripper_speed
  {
    size_t item_size = sizeof(ros_message.gripper_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gripper_current
  {
    size_t item_size = sizeof(ros_message.gripper_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gripper_temp
  {
    size_t item_size = sizeof(ros_message.gripper_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gripper_voltage
  {
    size_t item_size = sizeof(ros_message.gripper_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux_servo_id
  {
    size_t item_size = sizeof(ros_message.aux_servo_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux_servo_err
  {
    size_t item_size = sizeof(ros_message.aux_servo_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux_servo_state
  {
    size_t item_size = sizeof(ros_message.aux_servo_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux_servo_pos
  {
    size_t item_size = sizeof(ros_message.aux_servo_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux_servo_vel
  {
    size_t item_size = sizeof(ros_message.aux_servo_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux_servo_torque
  {
    size_t item_size = sizeof(ros_message.aux_servo_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_di_state_1
  {
    size_t item_size = sizeof(ros_message.ext_di_state_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_di_state_2
  {
    size_t item_size = sizeof(ros_message.ext_di_state_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_di_state_3
  {
    size_t item_size = sizeof(ros_message.ext_di_state_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_di_state_4
  {
    size_t item_size = sizeof(ros_message.ext_di_state_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_di_state_5
  {
    size_t item_size = sizeof(ros_message.ext_di_state_5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_di_state_6
  {
    size_t item_size = sizeof(ros_message.ext_di_state_6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_di_state_7
  {
    size_t item_size = sizeof(ros_message.ext_di_state_7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_di_state_8
  {
    size_t item_size = sizeof(ros_message.ext_di_state_8);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_do_state_1
  {
    size_t item_size = sizeof(ros_message.ext_do_state_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_do_state_2
  {
    size_t item_size = sizeof(ros_message.ext_do_state_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_do_state_3
  {
    size_t item_size = sizeof(ros_message.ext_do_state_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_do_state_4
  {
    size_t item_size = sizeof(ros_message.ext_do_state_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_do_state_5
  {
    size_t item_size = sizeof(ros_message.ext_do_state_5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_do_state_6
  {
    size_t item_size = sizeof(ros_message.ext_do_state_6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_do_state_7
  {
    size_t item_size = sizeof(ros_message.ext_do_state_7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_do_state_8
  {
    size_t item_size = sizeof(ros_message.ext_do_state_8);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_ai_state_1
  {
    size_t item_size = sizeof(ros_message.ext_ai_state_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_ai_state_2
  {
    size_t item_size = sizeof(ros_message.ext_ai_state_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_ai_state_3
  {
    size_t item_size = sizeof(ros_message.ext_ai_state_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_ai_state_4
  {
    size_t item_size = sizeof(ros_message.ext_ai_state_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_ao_state_1
  {
    size_t item_size = sizeof(ros_message.ext_ao_state_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_ao_state_2
  {
    size_t item_size = sizeof(ros_message.ext_ao_state_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_ao_state_3
  {
    size_t item_size = sizeof(ros_message.ext_ao_state_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_ao_state_4
  {
    size_t item_size = sizeof(ros_message.ext_ao_state_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rbt_enable_state
  {
    size_t item_size = sizeof(ros_message.rbt_enable_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: end_lua_err_code
  {
    size_t item_size = sizeof(ros_message.end_lua_err_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cl_analog_output_1
  {
    size_t item_size = sizeof(ros_message.cl_analog_output_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cl_analog_output_2
  {
    size_t item_size = sizeof(ros_message.cl_analog_output_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tl_analog_output
  {
    size_t item_size = sizeof(ros_message.tl_analog_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gripper_rot_num
  {
    size_t item_size = sizeof(ros_message.gripper_rot_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gripper_rot_speed
  {
    size_t item_size = sizeof(ros_message.gripper_rot_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gripper_rot_torque
  {
    size_t item_size = sizeof(ros_message.gripper_rot_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: weldbreakoffstate
  {
    size_t item_size = sizeof(ros_message.weldbreakoffstate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: weldarcstate
  {
    size_t item_size = sizeof(ros_message.weldarcstate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j1_tgt_tor
  {
    size_t item_size = sizeof(ros_message.j1_tgt_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j2_tgt_tor
  {
    size_t item_size = sizeof(ros_message.j2_tgt_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j3_tgt_tor
  {
    size_t item_size = sizeof(ros_message.j3_tgt_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j4_tgt_tor
  {
    size_t item_size = sizeof(ros_message.j4_tgt_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j5_tgt_tor
  {
    size_t item_size = sizeof(ros_message.j5_tgt_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j6_tgt_tor
  {
    size_t item_size = sizeof(ros_message.j6_tgt_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: jwide_voltage_ctrl_box_temp
  {
    size_t item_size = sizeof(ros_message.jwide_voltage_ctrl_box_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wide_voltage_ctrl_box_fan_current
  {
    size_t item_size = sizeof(ros_message.wide_voltage_ctrl_box_fan_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tool_coord_x
  {
    size_t item_size = sizeof(ros_message.tool_coord_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tool_coord_y
  {
    size_t item_size = sizeof(ros_message.tool_coord_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tool_coord_z
  {
    size_t item_size = sizeof(ros_message.tool_coord_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tool_coord_a
  {
    size_t item_size = sizeof(ros_message.tool_coord_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tool_coord_b
  {
    size_t item_size = sizeof(ros_message.tool_coord_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tool_coord_c
  {
    size_t item_size = sizeof(ros_message.tool_coord_c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wobj_coord_x
  {
    size_t item_size = sizeof(ros_message.wobj_coord_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wobj_coord_y
  {
    size_t item_size = sizeof(ros_message.wobj_coord_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wobj_coord_z
  {
    size_t item_size = sizeof(ros_message.wobj_coord_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wobj_coord_a
  {
    size_t item_size = sizeof(ros_message.wobj_coord_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wobj_coord_b
  {
    size_t item_size = sizeof(ros_message.wobj_coord_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wobj_coord_c
  {
    size_t item_size = sizeof(ros_message.wobj_coord_c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ex_tool_coord_x
  {
    size_t item_size = sizeof(ros_message.ex_tool_coord_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ex_tool_coord_y
  {
    size_t item_size = sizeof(ros_message.ex_tool_coord_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ex_tool_coord_z
  {
    size_t item_size = sizeof(ros_message.ex_tool_coord_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ex_tool_coord_a
  {
    size_t item_size = sizeof(ros_message.ex_tool_coord_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ex_tool_coord_b
  {
    size_t item_size = sizeof(ros_message.ex_tool_coord_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ex_tool_coord_c
  {
    size_t item_size = sizeof(ros_message.ex_tool_coord_c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ex_axis_coord_x
  {
    size_t item_size = sizeof(ros_message.ex_axis_coord_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ex_axis_coord_y
  {
    size_t item_size = sizeof(ros_message.ex_axis_coord_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ex_axis_coord_z
  {
    size_t item_size = sizeof(ros_message.ex_axis_coord_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ex_axis_coord_a
  {
    size_t item_size = sizeof(ros_message.ex_axis_coord_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ex_axis_coord_b
  {
    size_t item_size = sizeof(ros_message.ex_axis_coord_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ex_axis_coord_c
  {
    size_t item_size = sizeof(ros_message.ex_axis_coord_c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: load
  {
    size_t item_size = sizeof(ros_message.load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: load_cog_x
  {
    size_t item_size = sizeof(ros_message.load_cog_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: load_cog_y
  {
    size_t item_size = sizeof(ros_message.load_cog_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: load_cog_z
  {
    size_t item_size = sizeof(ros_message.load_cog_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j1_last_servoj_target
  {
    size_t item_size = sizeof(ros_message.j1_last_servoj_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j2_last_servoj_target
  {
    size_t item_size = sizeof(ros_message.j2_last_servoj_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j3_last_servoj_target
  {
    size_t item_size = sizeof(ros_message.j3_last_servoj_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j4_last_servoj_target
  {
    size_t item_size = sizeof(ros_message.j4_last_servoj_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j5_last_servoj_target
  {
    size_t item_size = sizeof(ros_message.j5_last_servoj_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j6_last_servoj_target
  {
    size_t item_size = sizeof(ros_message.j6_last_servoj_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: servoj_cmd_num
  {
    size_t item_size = sizeof(ros_message.servoj_cmd_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fairino_msgs
max_serialized_size_RobotNonrtState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: prg_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rbt_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rbt_main_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: rbt_sub_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: robot_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: j1_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j2_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j3_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j4_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j5_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j6_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_x_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_y_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_z_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_a_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_b_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_c_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: flange_x_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: flange_y_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: flange_z_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: flange_a_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: flange_b_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: flange_c_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j1_actual_qd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j2_actual_qd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j3_actual_qd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j4_actual_qd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j5_actual_qd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j6_actual_qd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j1_actual_qdd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j2_actual_qdd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j3_actual_qdd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j4_actual_qdd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j5_actual_qdd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j6_actual_qdd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_lin_cmd_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_rot_cmd_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_x_cmd_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_y_cmd_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_z_cmd_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_a_cmd_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_b_cmd_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_c_cmd_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_lin_cur_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_rot_cur_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_x_cur_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_y_cur_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_z_cur_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_a_cur_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_b_cur_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_c_cur_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j1_cur_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j2_cur_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j3_cur_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j4_cur_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j5_cur_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j6_cur_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tool_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: work_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dgt_output_h
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dgt_output_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tl_dgt_output_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dgt_input_h
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dgt_input_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tl_dgt_input_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cl_analog_input_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: cl_analog_input_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: tl_anglog_input
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ft_fx_raw_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ft_fy_raw_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ft_fz_raw_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ft_tx_raw_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ft_ty_raw_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ft_tz_raw_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ft_fx_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ft_fy_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ft_fz_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ft_tx_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ft_ty_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ft_tz_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ft_actstatus
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: emg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motion_done
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: grip_motion_done
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mc_queue_len
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: collision_err
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: trajectory_pnum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: safety_stop1_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: safety_stop2_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gripper_fault_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: grippererro
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: gripper_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: gripper_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gripper_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gripper_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gripper_temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: gripper_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: aux_servo_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aux_servo_err
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: aux_servo_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: aux_servo_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: aux_servo_vel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: aux_servo_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ext_di_state_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ext_di_state_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ext_di_state_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ext_di_state_4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ext_di_state_5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ext_di_state_6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ext_di_state_7
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ext_di_state_8
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ext_do_state_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ext_do_state_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ext_do_state_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ext_do_state_4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ext_do_state_5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ext_do_state_6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ext_do_state_7
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ext_do_state_8
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ext_ai_state_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ext_ai_state_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ext_ai_state_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ext_ai_state_4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ext_ao_state_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ext_ao_state_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ext_ao_state_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ext_ao_state_4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: rbt_enable_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: end_lua_err_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: cl_analog_output_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: cl_analog_output_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: tl_analog_output
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: gripper_rot_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gripper_rot_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gripper_rot_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: weldbreakoffstate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: weldarcstate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: j1_tgt_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j2_tgt_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j3_tgt_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j4_tgt_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j5_tgt_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j6_tgt_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: jwide_voltage_ctrl_box_temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wide_voltage_ctrl_box_fan_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: tool_coord_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tool_coord_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tool_coord_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tool_coord_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tool_coord_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tool_coord_c
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wobj_coord_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wobj_coord_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wobj_coord_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wobj_coord_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wobj_coord_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wobj_coord_c
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ex_tool_coord_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ex_tool_coord_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ex_tool_coord_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ex_tool_coord_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ex_tool_coord_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ex_tool_coord_c
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ex_axis_coord_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ex_axis_coord_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ex_axis_coord_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ex_axis_coord_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ex_axis_coord_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ex_axis_coord_c
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: load
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: load_cog_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: load_cog_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: load_cog_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j1_last_servoj_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j2_last_servoj_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j3_last_servoj_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j4_last_servoj_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j5_last_servoj_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j6_last_servoj_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: servoj_cmd_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = fairino_msgs::msg::RobotNonrtState;
    is_plain =
      (
      offsetof(DataType, servoj_cmd_num) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RobotNonrtState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const fairino_msgs::msg::RobotNonrtState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotNonrtState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<fairino_msgs::msg::RobotNonrtState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotNonrtState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const fairino_msgs::msg::RobotNonrtState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotNonrtState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RobotNonrtState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RobotNonrtState__callbacks = {
  "fairino_msgs::msg",
  "RobotNonrtState",
  _RobotNonrtState__cdr_serialize,
  _RobotNonrtState__cdr_deserialize,
  _RobotNonrtState__get_serialized_size,
  _RobotNonrtState__max_serialized_size
};

static rosidl_message_type_support_t _RobotNonrtState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotNonrtState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace fairino_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_fairino_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<fairino_msgs::msg::RobotNonrtState>()
{
  return &fairino_msgs::msg::typesupport_fastrtps_cpp::_RobotNonrtState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fairino_msgs, msg, RobotNonrtState)() {
  return &fairino_msgs::msg::typesupport_fastrtps_cpp::_RobotNonrtState__handle;
}

#ifdef __cplusplus
}
#endif
