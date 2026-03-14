// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from fairino_msgs:msg/RobotNonrtState.idl
// generated code does not contain a copyright notice
#include "fairino_msgs/msg/detail/robot_nonrt_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "fairino_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fairino_msgs/msg/detail/robot_nonrt_state__struct.h"
#include "fairino_msgs/msg/detail/robot_nonrt_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RobotNonrtState__ros_msg_type = fairino_msgs__msg__RobotNonrtState;

static bool _RobotNonrtState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotNonrtState__ros_msg_type * ros_message = static_cast<const _RobotNonrtState__ros_msg_type *>(untyped_ros_message);
  // Field name: prg_state
  {
    cdr << ros_message->prg_state;
  }

  // Field name: rbt_state
  {
    cdr << ros_message->rbt_state;
  }

  // Field name: rbt_main_code
  {
    cdr << ros_message->rbt_main_code;
  }

  // Field name: rbt_sub_code
  {
    cdr << ros_message->rbt_sub_code;
  }

  // Field name: robot_mode
  {
    cdr << ros_message->robot_mode;
  }

  // Field name: j1_cur_pos
  {
    cdr << ros_message->j1_cur_pos;
  }

  // Field name: j2_cur_pos
  {
    cdr << ros_message->j2_cur_pos;
  }

  // Field name: j3_cur_pos
  {
    cdr << ros_message->j3_cur_pos;
  }

  // Field name: j4_cur_pos
  {
    cdr << ros_message->j4_cur_pos;
  }

  // Field name: j5_cur_pos
  {
    cdr << ros_message->j5_cur_pos;
  }

  // Field name: j6_cur_pos
  {
    cdr << ros_message->j6_cur_pos;
  }

  // Field name: cart_x_cur_pos
  {
    cdr << ros_message->cart_x_cur_pos;
  }

  // Field name: cart_y_cur_pos
  {
    cdr << ros_message->cart_y_cur_pos;
  }

  // Field name: cart_z_cur_pos
  {
    cdr << ros_message->cart_z_cur_pos;
  }

  // Field name: cart_a_cur_pos
  {
    cdr << ros_message->cart_a_cur_pos;
  }

  // Field name: cart_b_cur_pos
  {
    cdr << ros_message->cart_b_cur_pos;
  }

  // Field name: cart_c_cur_pos
  {
    cdr << ros_message->cart_c_cur_pos;
  }

  // Field name: flange_x_cur_pos
  {
    cdr << ros_message->flange_x_cur_pos;
  }

  // Field name: flange_y_cur_pos
  {
    cdr << ros_message->flange_y_cur_pos;
  }

  // Field name: flange_z_cur_pos
  {
    cdr << ros_message->flange_z_cur_pos;
  }

  // Field name: flange_a_cur_pos
  {
    cdr << ros_message->flange_a_cur_pos;
  }

  // Field name: flange_b_cur_pos
  {
    cdr << ros_message->flange_b_cur_pos;
  }

  // Field name: flange_c_cur_pos
  {
    cdr << ros_message->flange_c_cur_pos;
  }

  // Field name: j1_actual_qd
  {
    cdr << ros_message->j1_actual_qd;
  }

  // Field name: j2_actual_qd
  {
    cdr << ros_message->j2_actual_qd;
  }

  // Field name: j3_actual_qd
  {
    cdr << ros_message->j3_actual_qd;
  }

  // Field name: j4_actual_qd
  {
    cdr << ros_message->j4_actual_qd;
  }

  // Field name: j5_actual_qd
  {
    cdr << ros_message->j5_actual_qd;
  }

  // Field name: j6_actual_qd
  {
    cdr << ros_message->j6_actual_qd;
  }

  // Field name: j1_actual_qdd
  {
    cdr << ros_message->j1_actual_qdd;
  }

  // Field name: j2_actual_qdd
  {
    cdr << ros_message->j2_actual_qdd;
  }

  // Field name: j3_actual_qdd
  {
    cdr << ros_message->j3_actual_qdd;
  }

  // Field name: j4_actual_qdd
  {
    cdr << ros_message->j4_actual_qdd;
  }

  // Field name: j5_actual_qdd
  {
    cdr << ros_message->j5_actual_qdd;
  }

  // Field name: j6_actual_qdd
  {
    cdr << ros_message->j6_actual_qdd;
  }

  // Field name: cart_lin_cmd_speed
  {
    cdr << ros_message->cart_lin_cmd_speed;
  }

  // Field name: cart_rot_cmd_speed
  {
    cdr << ros_message->cart_rot_cmd_speed;
  }

  // Field name: cart_x_cmd_speed
  {
    cdr << ros_message->cart_x_cmd_speed;
  }

  // Field name: cart_y_cmd_speed
  {
    cdr << ros_message->cart_y_cmd_speed;
  }

  // Field name: cart_z_cmd_speed
  {
    cdr << ros_message->cart_z_cmd_speed;
  }

  // Field name: cart_a_cmd_speed
  {
    cdr << ros_message->cart_a_cmd_speed;
  }

  // Field name: cart_b_cmd_speed
  {
    cdr << ros_message->cart_b_cmd_speed;
  }

  // Field name: cart_c_cmd_speed
  {
    cdr << ros_message->cart_c_cmd_speed;
  }

  // Field name: cart_lin_cur_speed
  {
    cdr << ros_message->cart_lin_cur_speed;
  }

  // Field name: cart_rot_cur_speed
  {
    cdr << ros_message->cart_rot_cur_speed;
  }

  // Field name: cart_x_cur_speed
  {
    cdr << ros_message->cart_x_cur_speed;
  }

  // Field name: cart_y_cur_speed
  {
    cdr << ros_message->cart_y_cur_speed;
  }

  // Field name: cart_z_cur_speed
  {
    cdr << ros_message->cart_z_cur_speed;
  }

  // Field name: cart_a_cur_speed
  {
    cdr << ros_message->cart_a_cur_speed;
  }

  // Field name: cart_b_cur_speed
  {
    cdr << ros_message->cart_b_cur_speed;
  }

  // Field name: cart_c_cur_speed
  {
    cdr << ros_message->cart_c_cur_speed;
  }

  // Field name: j1_cur_tor
  {
    cdr << ros_message->j1_cur_tor;
  }

  // Field name: j2_cur_tor
  {
    cdr << ros_message->j2_cur_tor;
  }

  // Field name: j3_cur_tor
  {
    cdr << ros_message->j3_cur_tor;
  }

  // Field name: j4_cur_tor
  {
    cdr << ros_message->j4_cur_tor;
  }

  // Field name: j5_cur_tor
  {
    cdr << ros_message->j5_cur_tor;
  }

  // Field name: j6_cur_tor
  {
    cdr << ros_message->j6_cur_tor;
  }

  // Field name: tool_num
  {
    cdr << ros_message->tool_num;
  }

  // Field name: work_num
  {
    cdr << ros_message->work_num;
  }

  // Field name: dgt_output_h
  {
    cdr << ros_message->dgt_output_h;
  }

  // Field name: dgt_output_l
  {
    cdr << ros_message->dgt_output_l;
  }

  // Field name: tl_dgt_output_l
  {
    cdr << ros_message->tl_dgt_output_l;
  }

  // Field name: dgt_input_h
  {
    cdr << ros_message->dgt_input_h;
  }

  // Field name: dgt_input_l
  {
    cdr << ros_message->dgt_input_l;
  }

  // Field name: tl_dgt_input_l
  {
    cdr << ros_message->tl_dgt_input_l;
  }

  // Field name: cl_analog_input_1
  {
    cdr << ros_message->cl_analog_input_1;
  }

  // Field name: cl_analog_input_2
  {
    cdr << ros_message->cl_analog_input_2;
  }

  // Field name: tl_anglog_input
  {
    cdr << ros_message->tl_anglog_input;
  }

  // Field name: ft_fx_raw_data
  {
    cdr << ros_message->ft_fx_raw_data;
  }

  // Field name: ft_fy_raw_data
  {
    cdr << ros_message->ft_fy_raw_data;
  }

  // Field name: ft_fz_raw_data
  {
    cdr << ros_message->ft_fz_raw_data;
  }

  // Field name: ft_tx_raw_data
  {
    cdr << ros_message->ft_tx_raw_data;
  }

  // Field name: ft_ty_raw_data
  {
    cdr << ros_message->ft_ty_raw_data;
  }

  // Field name: ft_tz_raw_data
  {
    cdr << ros_message->ft_tz_raw_data;
  }

  // Field name: ft_fx_data
  {
    cdr << ros_message->ft_fx_data;
  }

  // Field name: ft_fy_data
  {
    cdr << ros_message->ft_fy_data;
  }

  // Field name: ft_fz_data
  {
    cdr << ros_message->ft_fz_data;
  }

  // Field name: ft_tx_data
  {
    cdr << ros_message->ft_tx_data;
  }

  // Field name: ft_ty_data
  {
    cdr << ros_message->ft_ty_data;
  }

  // Field name: ft_tz_data
  {
    cdr << ros_message->ft_tz_data;
  }

  // Field name: ft_actstatus
  {
    cdr << ros_message->ft_actstatus;
  }

  // Field name: emg
  {
    cdr << ros_message->emg;
  }

  // Field name: motion_done
  {
    cdr << ros_message->motion_done;
  }

  // Field name: grip_motion_done
  {
    cdr << ros_message->grip_motion_done;
  }

  // Field name: mc_queue_len
  {
    cdr << ros_message->mc_queue_len;
  }

  // Field name: collision_err
  {
    cdr << ros_message->collision_err;
  }

  // Field name: trajectory_pnum
  {
    cdr << ros_message->trajectory_pnum;
  }

  // Field name: safety_stop1_state
  {
    cdr << ros_message->safety_stop1_state;
  }

  // Field name: safety_stop2_state
  {
    cdr << ros_message->safety_stop2_state;
  }

  // Field name: gripper_fault_id
  {
    cdr << ros_message->gripper_fault_id;
  }

  // Field name: grippererro
  {
    cdr << ros_message->grippererro;
  }

  // Field name: gripper_active
  {
    cdr << ros_message->gripper_active;
  }

  // Field name: gripper_position
  {
    cdr << ros_message->gripper_position;
  }

  // Field name: gripper_speed
  {
    cdr << ros_message->gripper_speed;
  }

  // Field name: gripper_current
  {
    cdr << ros_message->gripper_current;
  }

  // Field name: gripper_temp
  {
    cdr << ros_message->gripper_temp;
  }

  // Field name: gripper_voltage
  {
    cdr << ros_message->gripper_voltage;
  }

  // Field name: aux_servo_id
  {
    cdr << ros_message->aux_servo_id;
  }

  // Field name: aux_servo_err
  {
    cdr << ros_message->aux_servo_err;
  }

  // Field name: aux_servo_state
  {
    cdr << ros_message->aux_servo_state;
  }

  // Field name: aux_servo_pos
  {
    cdr << ros_message->aux_servo_pos;
  }

  // Field name: aux_servo_vel
  {
    cdr << ros_message->aux_servo_vel;
  }

  // Field name: aux_servo_torque
  {
    cdr << ros_message->aux_servo_torque;
  }

  // Field name: ext_di_state_1
  {
    cdr << ros_message->ext_di_state_1;
  }

  // Field name: ext_di_state_2
  {
    cdr << ros_message->ext_di_state_2;
  }

  // Field name: ext_di_state_3
  {
    cdr << ros_message->ext_di_state_3;
  }

  // Field name: ext_di_state_4
  {
    cdr << ros_message->ext_di_state_4;
  }

  // Field name: ext_di_state_5
  {
    cdr << ros_message->ext_di_state_5;
  }

  // Field name: ext_di_state_6
  {
    cdr << ros_message->ext_di_state_6;
  }

  // Field name: ext_di_state_7
  {
    cdr << ros_message->ext_di_state_7;
  }

  // Field name: ext_di_state_8
  {
    cdr << ros_message->ext_di_state_8;
  }

  // Field name: ext_do_state_1
  {
    cdr << ros_message->ext_do_state_1;
  }

  // Field name: ext_do_state_2
  {
    cdr << ros_message->ext_do_state_2;
  }

  // Field name: ext_do_state_3
  {
    cdr << ros_message->ext_do_state_3;
  }

  // Field name: ext_do_state_4
  {
    cdr << ros_message->ext_do_state_4;
  }

  // Field name: ext_do_state_5
  {
    cdr << ros_message->ext_do_state_5;
  }

  // Field name: ext_do_state_6
  {
    cdr << ros_message->ext_do_state_6;
  }

  // Field name: ext_do_state_7
  {
    cdr << ros_message->ext_do_state_7;
  }

  // Field name: ext_do_state_8
  {
    cdr << ros_message->ext_do_state_8;
  }

  // Field name: ext_ai_state_1
  {
    cdr << ros_message->ext_ai_state_1;
  }

  // Field name: ext_ai_state_2
  {
    cdr << ros_message->ext_ai_state_2;
  }

  // Field name: ext_ai_state_3
  {
    cdr << ros_message->ext_ai_state_3;
  }

  // Field name: ext_ai_state_4
  {
    cdr << ros_message->ext_ai_state_4;
  }

  // Field name: ext_ao_state_1
  {
    cdr << ros_message->ext_ao_state_1;
  }

  // Field name: ext_ao_state_2
  {
    cdr << ros_message->ext_ao_state_2;
  }

  // Field name: ext_ao_state_3
  {
    cdr << ros_message->ext_ao_state_3;
  }

  // Field name: ext_ao_state_4
  {
    cdr << ros_message->ext_ao_state_4;
  }

  // Field name: rbt_enable_state
  {
    cdr << ros_message->rbt_enable_state;
  }

  // Field name: end_lua_err_code
  {
    cdr << ros_message->end_lua_err_code;
  }

  // Field name: cl_analog_output_1
  {
    cdr << ros_message->cl_analog_output_1;
  }

  // Field name: cl_analog_output_2
  {
    cdr << ros_message->cl_analog_output_2;
  }

  // Field name: tl_analog_output
  {
    cdr << ros_message->tl_analog_output;
  }

  // Field name: gripper_rot_num
  {
    cdr << ros_message->gripper_rot_num;
  }

  // Field name: gripper_rot_speed
  {
    cdr << ros_message->gripper_rot_speed;
  }

  // Field name: gripper_rot_torque
  {
    cdr << ros_message->gripper_rot_torque;
  }

  // Field name: weldbreakoffstate
  {
    cdr << ros_message->weldbreakoffstate;
  }

  // Field name: weldarcstate
  {
    cdr << ros_message->weldarcstate;
  }

  // Field name: j1_tgt_tor
  {
    cdr << ros_message->j1_tgt_tor;
  }

  // Field name: j2_tgt_tor
  {
    cdr << ros_message->j2_tgt_tor;
  }

  // Field name: j3_tgt_tor
  {
    cdr << ros_message->j3_tgt_tor;
  }

  // Field name: j4_tgt_tor
  {
    cdr << ros_message->j4_tgt_tor;
  }

  // Field name: j5_tgt_tor
  {
    cdr << ros_message->j5_tgt_tor;
  }

  // Field name: j6_tgt_tor
  {
    cdr << ros_message->j6_tgt_tor;
  }

  // Field name: jwide_voltage_ctrl_box_temp
  {
    cdr << ros_message->jwide_voltage_ctrl_box_temp;
  }

  // Field name: wide_voltage_ctrl_box_fan_current
  {
    cdr << ros_message->wide_voltage_ctrl_box_fan_current;
  }

  // Field name: tool_coord_x
  {
    cdr << ros_message->tool_coord_x;
  }

  // Field name: tool_coord_y
  {
    cdr << ros_message->tool_coord_y;
  }

  // Field name: tool_coord_z
  {
    cdr << ros_message->tool_coord_z;
  }

  // Field name: tool_coord_a
  {
    cdr << ros_message->tool_coord_a;
  }

  // Field name: tool_coord_b
  {
    cdr << ros_message->tool_coord_b;
  }

  // Field name: tool_coord_c
  {
    cdr << ros_message->tool_coord_c;
  }

  // Field name: wobj_coord_x
  {
    cdr << ros_message->wobj_coord_x;
  }

  // Field name: wobj_coord_y
  {
    cdr << ros_message->wobj_coord_y;
  }

  // Field name: wobj_coord_z
  {
    cdr << ros_message->wobj_coord_z;
  }

  // Field name: wobj_coord_a
  {
    cdr << ros_message->wobj_coord_a;
  }

  // Field name: wobj_coord_b
  {
    cdr << ros_message->wobj_coord_b;
  }

  // Field name: wobj_coord_c
  {
    cdr << ros_message->wobj_coord_c;
  }

  // Field name: ex_tool_coord_x
  {
    cdr << ros_message->ex_tool_coord_x;
  }

  // Field name: ex_tool_coord_y
  {
    cdr << ros_message->ex_tool_coord_y;
  }

  // Field name: ex_tool_coord_z
  {
    cdr << ros_message->ex_tool_coord_z;
  }

  // Field name: ex_tool_coord_a
  {
    cdr << ros_message->ex_tool_coord_a;
  }

  // Field name: ex_tool_coord_b
  {
    cdr << ros_message->ex_tool_coord_b;
  }

  // Field name: ex_tool_coord_c
  {
    cdr << ros_message->ex_tool_coord_c;
  }

  // Field name: ex_axis_coord_x
  {
    cdr << ros_message->ex_axis_coord_x;
  }

  // Field name: ex_axis_coord_y
  {
    cdr << ros_message->ex_axis_coord_y;
  }

  // Field name: ex_axis_coord_z
  {
    cdr << ros_message->ex_axis_coord_z;
  }

  // Field name: ex_axis_coord_a
  {
    cdr << ros_message->ex_axis_coord_a;
  }

  // Field name: ex_axis_coord_b
  {
    cdr << ros_message->ex_axis_coord_b;
  }

  // Field name: ex_axis_coord_c
  {
    cdr << ros_message->ex_axis_coord_c;
  }

  // Field name: load
  {
    cdr << ros_message->load;
  }

  // Field name: load_cog_x
  {
    cdr << ros_message->load_cog_x;
  }

  // Field name: load_cog_y
  {
    cdr << ros_message->load_cog_y;
  }

  // Field name: load_cog_z
  {
    cdr << ros_message->load_cog_z;
  }

  // Field name: j1_last_servoj_target
  {
    cdr << ros_message->j1_last_servoj_target;
  }

  // Field name: j2_last_servoj_target
  {
    cdr << ros_message->j2_last_servoj_target;
  }

  // Field name: j3_last_servoj_target
  {
    cdr << ros_message->j3_last_servoj_target;
  }

  // Field name: j4_last_servoj_target
  {
    cdr << ros_message->j4_last_servoj_target;
  }

  // Field name: j5_last_servoj_target
  {
    cdr << ros_message->j5_last_servoj_target;
  }

  // Field name: j6_last_servoj_target
  {
    cdr << ros_message->j6_last_servoj_target;
  }

  // Field name: servoj_cmd_num
  {
    cdr << ros_message->servoj_cmd_num;
  }

  return true;
}

static bool _RobotNonrtState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotNonrtState__ros_msg_type * ros_message = static_cast<_RobotNonrtState__ros_msg_type *>(untyped_ros_message);
  // Field name: prg_state
  {
    cdr >> ros_message->prg_state;
  }

  // Field name: rbt_state
  {
    cdr >> ros_message->rbt_state;
  }

  // Field name: rbt_main_code
  {
    cdr >> ros_message->rbt_main_code;
  }

  // Field name: rbt_sub_code
  {
    cdr >> ros_message->rbt_sub_code;
  }

  // Field name: robot_mode
  {
    cdr >> ros_message->robot_mode;
  }

  // Field name: j1_cur_pos
  {
    cdr >> ros_message->j1_cur_pos;
  }

  // Field name: j2_cur_pos
  {
    cdr >> ros_message->j2_cur_pos;
  }

  // Field name: j3_cur_pos
  {
    cdr >> ros_message->j3_cur_pos;
  }

  // Field name: j4_cur_pos
  {
    cdr >> ros_message->j4_cur_pos;
  }

  // Field name: j5_cur_pos
  {
    cdr >> ros_message->j5_cur_pos;
  }

  // Field name: j6_cur_pos
  {
    cdr >> ros_message->j6_cur_pos;
  }

  // Field name: cart_x_cur_pos
  {
    cdr >> ros_message->cart_x_cur_pos;
  }

  // Field name: cart_y_cur_pos
  {
    cdr >> ros_message->cart_y_cur_pos;
  }

  // Field name: cart_z_cur_pos
  {
    cdr >> ros_message->cart_z_cur_pos;
  }

  // Field name: cart_a_cur_pos
  {
    cdr >> ros_message->cart_a_cur_pos;
  }

  // Field name: cart_b_cur_pos
  {
    cdr >> ros_message->cart_b_cur_pos;
  }

  // Field name: cart_c_cur_pos
  {
    cdr >> ros_message->cart_c_cur_pos;
  }

  // Field name: flange_x_cur_pos
  {
    cdr >> ros_message->flange_x_cur_pos;
  }

  // Field name: flange_y_cur_pos
  {
    cdr >> ros_message->flange_y_cur_pos;
  }

  // Field name: flange_z_cur_pos
  {
    cdr >> ros_message->flange_z_cur_pos;
  }

  // Field name: flange_a_cur_pos
  {
    cdr >> ros_message->flange_a_cur_pos;
  }

  // Field name: flange_b_cur_pos
  {
    cdr >> ros_message->flange_b_cur_pos;
  }

  // Field name: flange_c_cur_pos
  {
    cdr >> ros_message->flange_c_cur_pos;
  }

  // Field name: j1_actual_qd
  {
    cdr >> ros_message->j1_actual_qd;
  }

  // Field name: j2_actual_qd
  {
    cdr >> ros_message->j2_actual_qd;
  }

  // Field name: j3_actual_qd
  {
    cdr >> ros_message->j3_actual_qd;
  }

  // Field name: j4_actual_qd
  {
    cdr >> ros_message->j4_actual_qd;
  }

  // Field name: j5_actual_qd
  {
    cdr >> ros_message->j5_actual_qd;
  }

  // Field name: j6_actual_qd
  {
    cdr >> ros_message->j6_actual_qd;
  }

  // Field name: j1_actual_qdd
  {
    cdr >> ros_message->j1_actual_qdd;
  }

  // Field name: j2_actual_qdd
  {
    cdr >> ros_message->j2_actual_qdd;
  }

  // Field name: j3_actual_qdd
  {
    cdr >> ros_message->j3_actual_qdd;
  }

  // Field name: j4_actual_qdd
  {
    cdr >> ros_message->j4_actual_qdd;
  }

  // Field name: j5_actual_qdd
  {
    cdr >> ros_message->j5_actual_qdd;
  }

  // Field name: j6_actual_qdd
  {
    cdr >> ros_message->j6_actual_qdd;
  }

  // Field name: cart_lin_cmd_speed
  {
    cdr >> ros_message->cart_lin_cmd_speed;
  }

  // Field name: cart_rot_cmd_speed
  {
    cdr >> ros_message->cart_rot_cmd_speed;
  }

  // Field name: cart_x_cmd_speed
  {
    cdr >> ros_message->cart_x_cmd_speed;
  }

  // Field name: cart_y_cmd_speed
  {
    cdr >> ros_message->cart_y_cmd_speed;
  }

  // Field name: cart_z_cmd_speed
  {
    cdr >> ros_message->cart_z_cmd_speed;
  }

  // Field name: cart_a_cmd_speed
  {
    cdr >> ros_message->cart_a_cmd_speed;
  }

  // Field name: cart_b_cmd_speed
  {
    cdr >> ros_message->cart_b_cmd_speed;
  }

  // Field name: cart_c_cmd_speed
  {
    cdr >> ros_message->cart_c_cmd_speed;
  }

  // Field name: cart_lin_cur_speed
  {
    cdr >> ros_message->cart_lin_cur_speed;
  }

  // Field name: cart_rot_cur_speed
  {
    cdr >> ros_message->cart_rot_cur_speed;
  }

  // Field name: cart_x_cur_speed
  {
    cdr >> ros_message->cart_x_cur_speed;
  }

  // Field name: cart_y_cur_speed
  {
    cdr >> ros_message->cart_y_cur_speed;
  }

  // Field name: cart_z_cur_speed
  {
    cdr >> ros_message->cart_z_cur_speed;
  }

  // Field name: cart_a_cur_speed
  {
    cdr >> ros_message->cart_a_cur_speed;
  }

  // Field name: cart_b_cur_speed
  {
    cdr >> ros_message->cart_b_cur_speed;
  }

  // Field name: cart_c_cur_speed
  {
    cdr >> ros_message->cart_c_cur_speed;
  }

  // Field name: j1_cur_tor
  {
    cdr >> ros_message->j1_cur_tor;
  }

  // Field name: j2_cur_tor
  {
    cdr >> ros_message->j2_cur_tor;
  }

  // Field name: j3_cur_tor
  {
    cdr >> ros_message->j3_cur_tor;
  }

  // Field name: j4_cur_tor
  {
    cdr >> ros_message->j4_cur_tor;
  }

  // Field name: j5_cur_tor
  {
    cdr >> ros_message->j5_cur_tor;
  }

  // Field name: j6_cur_tor
  {
    cdr >> ros_message->j6_cur_tor;
  }

  // Field name: tool_num
  {
    cdr >> ros_message->tool_num;
  }

  // Field name: work_num
  {
    cdr >> ros_message->work_num;
  }

  // Field name: dgt_output_h
  {
    cdr >> ros_message->dgt_output_h;
  }

  // Field name: dgt_output_l
  {
    cdr >> ros_message->dgt_output_l;
  }

  // Field name: tl_dgt_output_l
  {
    cdr >> ros_message->tl_dgt_output_l;
  }

  // Field name: dgt_input_h
  {
    cdr >> ros_message->dgt_input_h;
  }

  // Field name: dgt_input_l
  {
    cdr >> ros_message->dgt_input_l;
  }

  // Field name: tl_dgt_input_l
  {
    cdr >> ros_message->tl_dgt_input_l;
  }

  // Field name: cl_analog_input_1
  {
    cdr >> ros_message->cl_analog_input_1;
  }

  // Field name: cl_analog_input_2
  {
    cdr >> ros_message->cl_analog_input_2;
  }

  // Field name: tl_anglog_input
  {
    cdr >> ros_message->tl_anglog_input;
  }

  // Field name: ft_fx_raw_data
  {
    cdr >> ros_message->ft_fx_raw_data;
  }

  // Field name: ft_fy_raw_data
  {
    cdr >> ros_message->ft_fy_raw_data;
  }

  // Field name: ft_fz_raw_data
  {
    cdr >> ros_message->ft_fz_raw_data;
  }

  // Field name: ft_tx_raw_data
  {
    cdr >> ros_message->ft_tx_raw_data;
  }

  // Field name: ft_ty_raw_data
  {
    cdr >> ros_message->ft_ty_raw_data;
  }

  // Field name: ft_tz_raw_data
  {
    cdr >> ros_message->ft_tz_raw_data;
  }

  // Field name: ft_fx_data
  {
    cdr >> ros_message->ft_fx_data;
  }

  // Field name: ft_fy_data
  {
    cdr >> ros_message->ft_fy_data;
  }

  // Field name: ft_fz_data
  {
    cdr >> ros_message->ft_fz_data;
  }

  // Field name: ft_tx_data
  {
    cdr >> ros_message->ft_tx_data;
  }

  // Field name: ft_ty_data
  {
    cdr >> ros_message->ft_ty_data;
  }

  // Field name: ft_tz_data
  {
    cdr >> ros_message->ft_tz_data;
  }

  // Field name: ft_actstatus
  {
    cdr >> ros_message->ft_actstatus;
  }

  // Field name: emg
  {
    cdr >> ros_message->emg;
  }

  // Field name: motion_done
  {
    cdr >> ros_message->motion_done;
  }

  // Field name: grip_motion_done
  {
    cdr >> ros_message->grip_motion_done;
  }

  // Field name: mc_queue_len
  {
    cdr >> ros_message->mc_queue_len;
  }

  // Field name: collision_err
  {
    cdr >> ros_message->collision_err;
  }

  // Field name: trajectory_pnum
  {
    cdr >> ros_message->trajectory_pnum;
  }

  // Field name: safety_stop1_state
  {
    cdr >> ros_message->safety_stop1_state;
  }

  // Field name: safety_stop2_state
  {
    cdr >> ros_message->safety_stop2_state;
  }

  // Field name: gripper_fault_id
  {
    cdr >> ros_message->gripper_fault_id;
  }

  // Field name: grippererro
  {
    cdr >> ros_message->grippererro;
  }

  // Field name: gripper_active
  {
    cdr >> ros_message->gripper_active;
  }

  // Field name: gripper_position
  {
    cdr >> ros_message->gripper_position;
  }

  // Field name: gripper_speed
  {
    cdr >> ros_message->gripper_speed;
  }

  // Field name: gripper_current
  {
    cdr >> ros_message->gripper_current;
  }

  // Field name: gripper_temp
  {
    cdr >> ros_message->gripper_temp;
  }

  // Field name: gripper_voltage
  {
    cdr >> ros_message->gripper_voltage;
  }

  // Field name: aux_servo_id
  {
    cdr >> ros_message->aux_servo_id;
  }

  // Field name: aux_servo_err
  {
    cdr >> ros_message->aux_servo_err;
  }

  // Field name: aux_servo_state
  {
    cdr >> ros_message->aux_servo_state;
  }

  // Field name: aux_servo_pos
  {
    cdr >> ros_message->aux_servo_pos;
  }

  // Field name: aux_servo_vel
  {
    cdr >> ros_message->aux_servo_vel;
  }

  // Field name: aux_servo_torque
  {
    cdr >> ros_message->aux_servo_torque;
  }

  // Field name: ext_di_state_1
  {
    cdr >> ros_message->ext_di_state_1;
  }

  // Field name: ext_di_state_2
  {
    cdr >> ros_message->ext_di_state_2;
  }

  // Field name: ext_di_state_3
  {
    cdr >> ros_message->ext_di_state_3;
  }

  // Field name: ext_di_state_4
  {
    cdr >> ros_message->ext_di_state_4;
  }

  // Field name: ext_di_state_5
  {
    cdr >> ros_message->ext_di_state_5;
  }

  // Field name: ext_di_state_6
  {
    cdr >> ros_message->ext_di_state_6;
  }

  // Field name: ext_di_state_7
  {
    cdr >> ros_message->ext_di_state_7;
  }

  // Field name: ext_di_state_8
  {
    cdr >> ros_message->ext_di_state_8;
  }

  // Field name: ext_do_state_1
  {
    cdr >> ros_message->ext_do_state_1;
  }

  // Field name: ext_do_state_2
  {
    cdr >> ros_message->ext_do_state_2;
  }

  // Field name: ext_do_state_3
  {
    cdr >> ros_message->ext_do_state_3;
  }

  // Field name: ext_do_state_4
  {
    cdr >> ros_message->ext_do_state_4;
  }

  // Field name: ext_do_state_5
  {
    cdr >> ros_message->ext_do_state_5;
  }

  // Field name: ext_do_state_6
  {
    cdr >> ros_message->ext_do_state_6;
  }

  // Field name: ext_do_state_7
  {
    cdr >> ros_message->ext_do_state_7;
  }

  // Field name: ext_do_state_8
  {
    cdr >> ros_message->ext_do_state_8;
  }

  // Field name: ext_ai_state_1
  {
    cdr >> ros_message->ext_ai_state_1;
  }

  // Field name: ext_ai_state_2
  {
    cdr >> ros_message->ext_ai_state_2;
  }

  // Field name: ext_ai_state_3
  {
    cdr >> ros_message->ext_ai_state_3;
  }

  // Field name: ext_ai_state_4
  {
    cdr >> ros_message->ext_ai_state_4;
  }

  // Field name: ext_ao_state_1
  {
    cdr >> ros_message->ext_ao_state_1;
  }

  // Field name: ext_ao_state_2
  {
    cdr >> ros_message->ext_ao_state_2;
  }

  // Field name: ext_ao_state_3
  {
    cdr >> ros_message->ext_ao_state_3;
  }

  // Field name: ext_ao_state_4
  {
    cdr >> ros_message->ext_ao_state_4;
  }

  // Field name: rbt_enable_state
  {
    cdr >> ros_message->rbt_enable_state;
  }

  // Field name: end_lua_err_code
  {
    cdr >> ros_message->end_lua_err_code;
  }

  // Field name: cl_analog_output_1
  {
    cdr >> ros_message->cl_analog_output_1;
  }

  // Field name: cl_analog_output_2
  {
    cdr >> ros_message->cl_analog_output_2;
  }

  // Field name: tl_analog_output
  {
    cdr >> ros_message->tl_analog_output;
  }

  // Field name: gripper_rot_num
  {
    cdr >> ros_message->gripper_rot_num;
  }

  // Field name: gripper_rot_speed
  {
    cdr >> ros_message->gripper_rot_speed;
  }

  // Field name: gripper_rot_torque
  {
    cdr >> ros_message->gripper_rot_torque;
  }

  // Field name: weldbreakoffstate
  {
    cdr >> ros_message->weldbreakoffstate;
  }

  // Field name: weldarcstate
  {
    cdr >> ros_message->weldarcstate;
  }

  // Field name: j1_tgt_tor
  {
    cdr >> ros_message->j1_tgt_tor;
  }

  // Field name: j2_tgt_tor
  {
    cdr >> ros_message->j2_tgt_tor;
  }

  // Field name: j3_tgt_tor
  {
    cdr >> ros_message->j3_tgt_tor;
  }

  // Field name: j4_tgt_tor
  {
    cdr >> ros_message->j4_tgt_tor;
  }

  // Field name: j5_tgt_tor
  {
    cdr >> ros_message->j5_tgt_tor;
  }

  // Field name: j6_tgt_tor
  {
    cdr >> ros_message->j6_tgt_tor;
  }

  // Field name: jwide_voltage_ctrl_box_temp
  {
    cdr >> ros_message->jwide_voltage_ctrl_box_temp;
  }

  // Field name: wide_voltage_ctrl_box_fan_current
  {
    cdr >> ros_message->wide_voltage_ctrl_box_fan_current;
  }

  // Field name: tool_coord_x
  {
    cdr >> ros_message->tool_coord_x;
  }

  // Field name: tool_coord_y
  {
    cdr >> ros_message->tool_coord_y;
  }

  // Field name: tool_coord_z
  {
    cdr >> ros_message->tool_coord_z;
  }

  // Field name: tool_coord_a
  {
    cdr >> ros_message->tool_coord_a;
  }

  // Field name: tool_coord_b
  {
    cdr >> ros_message->tool_coord_b;
  }

  // Field name: tool_coord_c
  {
    cdr >> ros_message->tool_coord_c;
  }

  // Field name: wobj_coord_x
  {
    cdr >> ros_message->wobj_coord_x;
  }

  // Field name: wobj_coord_y
  {
    cdr >> ros_message->wobj_coord_y;
  }

  // Field name: wobj_coord_z
  {
    cdr >> ros_message->wobj_coord_z;
  }

  // Field name: wobj_coord_a
  {
    cdr >> ros_message->wobj_coord_a;
  }

  // Field name: wobj_coord_b
  {
    cdr >> ros_message->wobj_coord_b;
  }

  // Field name: wobj_coord_c
  {
    cdr >> ros_message->wobj_coord_c;
  }

  // Field name: ex_tool_coord_x
  {
    cdr >> ros_message->ex_tool_coord_x;
  }

  // Field name: ex_tool_coord_y
  {
    cdr >> ros_message->ex_tool_coord_y;
  }

  // Field name: ex_tool_coord_z
  {
    cdr >> ros_message->ex_tool_coord_z;
  }

  // Field name: ex_tool_coord_a
  {
    cdr >> ros_message->ex_tool_coord_a;
  }

  // Field name: ex_tool_coord_b
  {
    cdr >> ros_message->ex_tool_coord_b;
  }

  // Field name: ex_tool_coord_c
  {
    cdr >> ros_message->ex_tool_coord_c;
  }

  // Field name: ex_axis_coord_x
  {
    cdr >> ros_message->ex_axis_coord_x;
  }

  // Field name: ex_axis_coord_y
  {
    cdr >> ros_message->ex_axis_coord_y;
  }

  // Field name: ex_axis_coord_z
  {
    cdr >> ros_message->ex_axis_coord_z;
  }

  // Field name: ex_axis_coord_a
  {
    cdr >> ros_message->ex_axis_coord_a;
  }

  // Field name: ex_axis_coord_b
  {
    cdr >> ros_message->ex_axis_coord_b;
  }

  // Field name: ex_axis_coord_c
  {
    cdr >> ros_message->ex_axis_coord_c;
  }

  // Field name: load
  {
    cdr >> ros_message->load;
  }

  // Field name: load_cog_x
  {
    cdr >> ros_message->load_cog_x;
  }

  // Field name: load_cog_y
  {
    cdr >> ros_message->load_cog_y;
  }

  // Field name: load_cog_z
  {
    cdr >> ros_message->load_cog_z;
  }

  // Field name: j1_last_servoj_target
  {
    cdr >> ros_message->j1_last_servoj_target;
  }

  // Field name: j2_last_servoj_target
  {
    cdr >> ros_message->j2_last_servoj_target;
  }

  // Field name: j3_last_servoj_target
  {
    cdr >> ros_message->j3_last_servoj_target;
  }

  // Field name: j4_last_servoj_target
  {
    cdr >> ros_message->j4_last_servoj_target;
  }

  // Field name: j5_last_servoj_target
  {
    cdr >> ros_message->j5_last_servoj_target;
  }

  // Field name: j6_last_servoj_target
  {
    cdr >> ros_message->j6_last_servoj_target;
  }

  // Field name: servoj_cmd_num
  {
    cdr >> ros_message->servoj_cmd_num;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fairino_msgs
size_t get_serialized_size_fairino_msgs__msg__RobotNonrtState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotNonrtState__ros_msg_type * ros_message = static_cast<const _RobotNonrtState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name prg_state
  {
    size_t item_size = sizeof(ros_message->prg_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rbt_state
  {
    size_t item_size = sizeof(ros_message->rbt_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rbt_main_code
  {
    size_t item_size = sizeof(ros_message->rbt_main_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rbt_sub_code
  {
    size_t item_size = sizeof(ros_message->rbt_sub_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_mode
  {
    size_t item_size = sizeof(ros_message->robot_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j1_cur_pos
  {
    size_t item_size = sizeof(ros_message->j1_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j2_cur_pos
  {
    size_t item_size = sizeof(ros_message->j2_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j3_cur_pos
  {
    size_t item_size = sizeof(ros_message->j3_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j4_cur_pos
  {
    size_t item_size = sizeof(ros_message->j4_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j5_cur_pos
  {
    size_t item_size = sizeof(ros_message->j5_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j6_cur_pos
  {
    size_t item_size = sizeof(ros_message->j6_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_x_cur_pos
  {
    size_t item_size = sizeof(ros_message->cart_x_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_y_cur_pos
  {
    size_t item_size = sizeof(ros_message->cart_y_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_z_cur_pos
  {
    size_t item_size = sizeof(ros_message->cart_z_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_a_cur_pos
  {
    size_t item_size = sizeof(ros_message->cart_a_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_b_cur_pos
  {
    size_t item_size = sizeof(ros_message->cart_b_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_c_cur_pos
  {
    size_t item_size = sizeof(ros_message->cart_c_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flange_x_cur_pos
  {
    size_t item_size = sizeof(ros_message->flange_x_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flange_y_cur_pos
  {
    size_t item_size = sizeof(ros_message->flange_y_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flange_z_cur_pos
  {
    size_t item_size = sizeof(ros_message->flange_z_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flange_a_cur_pos
  {
    size_t item_size = sizeof(ros_message->flange_a_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flange_b_cur_pos
  {
    size_t item_size = sizeof(ros_message->flange_b_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flange_c_cur_pos
  {
    size_t item_size = sizeof(ros_message->flange_c_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j1_actual_qd
  {
    size_t item_size = sizeof(ros_message->j1_actual_qd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j2_actual_qd
  {
    size_t item_size = sizeof(ros_message->j2_actual_qd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j3_actual_qd
  {
    size_t item_size = sizeof(ros_message->j3_actual_qd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j4_actual_qd
  {
    size_t item_size = sizeof(ros_message->j4_actual_qd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j5_actual_qd
  {
    size_t item_size = sizeof(ros_message->j5_actual_qd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j6_actual_qd
  {
    size_t item_size = sizeof(ros_message->j6_actual_qd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j1_actual_qdd
  {
    size_t item_size = sizeof(ros_message->j1_actual_qdd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j2_actual_qdd
  {
    size_t item_size = sizeof(ros_message->j2_actual_qdd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j3_actual_qdd
  {
    size_t item_size = sizeof(ros_message->j3_actual_qdd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j4_actual_qdd
  {
    size_t item_size = sizeof(ros_message->j4_actual_qdd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j5_actual_qdd
  {
    size_t item_size = sizeof(ros_message->j5_actual_qdd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j6_actual_qdd
  {
    size_t item_size = sizeof(ros_message->j6_actual_qdd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_lin_cmd_speed
  {
    size_t item_size = sizeof(ros_message->cart_lin_cmd_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_rot_cmd_speed
  {
    size_t item_size = sizeof(ros_message->cart_rot_cmd_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_x_cmd_speed
  {
    size_t item_size = sizeof(ros_message->cart_x_cmd_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_y_cmd_speed
  {
    size_t item_size = sizeof(ros_message->cart_y_cmd_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_z_cmd_speed
  {
    size_t item_size = sizeof(ros_message->cart_z_cmd_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_a_cmd_speed
  {
    size_t item_size = sizeof(ros_message->cart_a_cmd_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_b_cmd_speed
  {
    size_t item_size = sizeof(ros_message->cart_b_cmd_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_c_cmd_speed
  {
    size_t item_size = sizeof(ros_message->cart_c_cmd_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_lin_cur_speed
  {
    size_t item_size = sizeof(ros_message->cart_lin_cur_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_rot_cur_speed
  {
    size_t item_size = sizeof(ros_message->cart_rot_cur_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_x_cur_speed
  {
    size_t item_size = sizeof(ros_message->cart_x_cur_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_y_cur_speed
  {
    size_t item_size = sizeof(ros_message->cart_y_cur_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_z_cur_speed
  {
    size_t item_size = sizeof(ros_message->cart_z_cur_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_a_cur_speed
  {
    size_t item_size = sizeof(ros_message->cart_a_cur_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_b_cur_speed
  {
    size_t item_size = sizeof(ros_message->cart_b_cur_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_c_cur_speed
  {
    size_t item_size = sizeof(ros_message->cart_c_cur_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j1_cur_tor
  {
    size_t item_size = sizeof(ros_message->j1_cur_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j2_cur_tor
  {
    size_t item_size = sizeof(ros_message->j2_cur_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j3_cur_tor
  {
    size_t item_size = sizeof(ros_message->j3_cur_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j4_cur_tor
  {
    size_t item_size = sizeof(ros_message->j4_cur_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j5_cur_tor
  {
    size_t item_size = sizeof(ros_message->j5_cur_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j6_cur_tor
  {
    size_t item_size = sizeof(ros_message->j6_cur_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tool_num
  {
    size_t item_size = sizeof(ros_message->tool_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name work_num
  {
    size_t item_size = sizeof(ros_message->work_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dgt_output_h
  {
    size_t item_size = sizeof(ros_message->dgt_output_h);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dgt_output_l
  {
    size_t item_size = sizeof(ros_message->dgt_output_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tl_dgt_output_l
  {
    size_t item_size = sizeof(ros_message->tl_dgt_output_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dgt_input_h
  {
    size_t item_size = sizeof(ros_message->dgt_input_h);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dgt_input_l
  {
    size_t item_size = sizeof(ros_message->dgt_input_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tl_dgt_input_l
  {
    size_t item_size = sizeof(ros_message->tl_dgt_input_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cl_analog_input_1
  {
    size_t item_size = sizeof(ros_message->cl_analog_input_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cl_analog_input_2
  {
    size_t item_size = sizeof(ros_message->cl_analog_input_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tl_anglog_input
  {
    size_t item_size = sizeof(ros_message->tl_anglog_input);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ft_fx_raw_data
  {
    size_t item_size = sizeof(ros_message->ft_fx_raw_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ft_fy_raw_data
  {
    size_t item_size = sizeof(ros_message->ft_fy_raw_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ft_fz_raw_data
  {
    size_t item_size = sizeof(ros_message->ft_fz_raw_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ft_tx_raw_data
  {
    size_t item_size = sizeof(ros_message->ft_tx_raw_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ft_ty_raw_data
  {
    size_t item_size = sizeof(ros_message->ft_ty_raw_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ft_tz_raw_data
  {
    size_t item_size = sizeof(ros_message->ft_tz_raw_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ft_fx_data
  {
    size_t item_size = sizeof(ros_message->ft_fx_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ft_fy_data
  {
    size_t item_size = sizeof(ros_message->ft_fy_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ft_fz_data
  {
    size_t item_size = sizeof(ros_message->ft_fz_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ft_tx_data
  {
    size_t item_size = sizeof(ros_message->ft_tx_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ft_ty_data
  {
    size_t item_size = sizeof(ros_message->ft_ty_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ft_tz_data
  {
    size_t item_size = sizeof(ros_message->ft_tz_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ft_actstatus
  {
    size_t item_size = sizeof(ros_message->ft_actstatus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name emg
  {
    size_t item_size = sizeof(ros_message->emg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motion_done
  {
    size_t item_size = sizeof(ros_message->motion_done);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name grip_motion_done
  {
    size_t item_size = sizeof(ros_message->grip_motion_done);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mc_queue_len
  {
    size_t item_size = sizeof(ros_message->mc_queue_len);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name collision_err
  {
    size_t item_size = sizeof(ros_message->collision_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trajectory_pnum
  {
    size_t item_size = sizeof(ros_message->trajectory_pnum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name safety_stop1_state
  {
    size_t item_size = sizeof(ros_message->safety_stop1_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name safety_stop2_state
  {
    size_t item_size = sizeof(ros_message->safety_stop2_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gripper_fault_id
  {
    size_t item_size = sizeof(ros_message->gripper_fault_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name grippererro
  {
    size_t item_size = sizeof(ros_message->grippererro);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gripper_active
  {
    size_t item_size = sizeof(ros_message->gripper_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gripper_position
  {
    size_t item_size = sizeof(ros_message->gripper_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gripper_speed
  {
    size_t item_size = sizeof(ros_message->gripper_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gripper_current
  {
    size_t item_size = sizeof(ros_message->gripper_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gripper_temp
  {
    size_t item_size = sizeof(ros_message->gripper_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gripper_voltage
  {
    size_t item_size = sizeof(ros_message->gripper_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux_servo_id
  {
    size_t item_size = sizeof(ros_message->aux_servo_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux_servo_err
  {
    size_t item_size = sizeof(ros_message->aux_servo_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux_servo_state
  {
    size_t item_size = sizeof(ros_message->aux_servo_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux_servo_pos
  {
    size_t item_size = sizeof(ros_message->aux_servo_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux_servo_vel
  {
    size_t item_size = sizeof(ros_message->aux_servo_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux_servo_torque
  {
    size_t item_size = sizeof(ros_message->aux_servo_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_di_state_1
  {
    size_t item_size = sizeof(ros_message->ext_di_state_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_di_state_2
  {
    size_t item_size = sizeof(ros_message->ext_di_state_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_di_state_3
  {
    size_t item_size = sizeof(ros_message->ext_di_state_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_di_state_4
  {
    size_t item_size = sizeof(ros_message->ext_di_state_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_di_state_5
  {
    size_t item_size = sizeof(ros_message->ext_di_state_5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_di_state_6
  {
    size_t item_size = sizeof(ros_message->ext_di_state_6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_di_state_7
  {
    size_t item_size = sizeof(ros_message->ext_di_state_7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_di_state_8
  {
    size_t item_size = sizeof(ros_message->ext_di_state_8);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_do_state_1
  {
    size_t item_size = sizeof(ros_message->ext_do_state_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_do_state_2
  {
    size_t item_size = sizeof(ros_message->ext_do_state_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_do_state_3
  {
    size_t item_size = sizeof(ros_message->ext_do_state_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_do_state_4
  {
    size_t item_size = sizeof(ros_message->ext_do_state_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_do_state_5
  {
    size_t item_size = sizeof(ros_message->ext_do_state_5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_do_state_6
  {
    size_t item_size = sizeof(ros_message->ext_do_state_6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_do_state_7
  {
    size_t item_size = sizeof(ros_message->ext_do_state_7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_do_state_8
  {
    size_t item_size = sizeof(ros_message->ext_do_state_8);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_ai_state_1
  {
    size_t item_size = sizeof(ros_message->ext_ai_state_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_ai_state_2
  {
    size_t item_size = sizeof(ros_message->ext_ai_state_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_ai_state_3
  {
    size_t item_size = sizeof(ros_message->ext_ai_state_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_ai_state_4
  {
    size_t item_size = sizeof(ros_message->ext_ai_state_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_ao_state_1
  {
    size_t item_size = sizeof(ros_message->ext_ao_state_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_ao_state_2
  {
    size_t item_size = sizeof(ros_message->ext_ao_state_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_ao_state_3
  {
    size_t item_size = sizeof(ros_message->ext_ao_state_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_ao_state_4
  {
    size_t item_size = sizeof(ros_message->ext_ao_state_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rbt_enable_state
  {
    size_t item_size = sizeof(ros_message->rbt_enable_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_lua_err_code
  {
    size_t item_size = sizeof(ros_message->end_lua_err_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cl_analog_output_1
  {
    size_t item_size = sizeof(ros_message->cl_analog_output_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cl_analog_output_2
  {
    size_t item_size = sizeof(ros_message->cl_analog_output_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tl_analog_output
  {
    size_t item_size = sizeof(ros_message->tl_analog_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gripper_rot_num
  {
    size_t item_size = sizeof(ros_message->gripper_rot_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gripper_rot_speed
  {
    size_t item_size = sizeof(ros_message->gripper_rot_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gripper_rot_torque
  {
    size_t item_size = sizeof(ros_message->gripper_rot_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name weldbreakoffstate
  {
    size_t item_size = sizeof(ros_message->weldbreakoffstate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name weldarcstate
  {
    size_t item_size = sizeof(ros_message->weldarcstate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j1_tgt_tor
  {
    size_t item_size = sizeof(ros_message->j1_tgt_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j2_tgt_tor
  {
    size_t item_size = sizeof(ros_message->j2_tgt_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j3_tgt_tor
  {
    size_t item_size = sizeof(ros_message->j3_tgt_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j4_tgt_tor
  {
    size_t item_size = sizeof(ros_message->j4_tgt_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j5_tgt_tor
  {
    size_t item_size = sizeof(ros_message->j5_tgt_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j6_tgt_tor
  {
    size_t item_size = sizeof(ros_message->j6_tgt_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name jwide_voltage_ctrl_box_temp
  {
    size_t item_size = sizeof(ros_message->jwide_voltage_ctrl_box_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wide_voltage_ctrl_box_fan_current
  {
    size_t item_size = sizeof(ros_message->wide_voltage_ctrl_box_fan_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tool_coord_x
  {
    size_t item_size = sizeof(ros_message->tool_coord_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tool_coord_y
  {
    size_t item_size = sizeof(ros_message->tool_coord_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tool_coord_z
  {
    size_t item_size = sizeof(ros_message->tool_coord_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tool_coord_a
  {
    size_t item_size = sizeof(ros_message->tool_coord_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tool_coord_b
  {
    size_t item_size = sizeof(ros_message->tool_coord_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tool_coord_c
  {
    size_t item_size = sizeof(ros_message->tool_coord_c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wobj_coord_x
  {
    size_t item_size = sizeof(ros_message->wobj_coord_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wobj_coord_y
  {
    size_t item_size = sizeof(ros_message->wobj_coord_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wobj_coord_z
  {
    size_t item_size = sizeof(ros_message->wobj_coord_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wobj_coord_a
  {
    size_t item_size = sizeof(ros_message->wobj_coord_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wobj_coord_b
  {
    size_t item_size = sizeof(ros_message->wobj_coord_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wobj_coord_c
  {
    size_t item_size = sizeof(ros_message->wobj_coord_c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ex_tool_coord_x
  {
    size_t item_size = sizeof(ros_message->ex_tool_coord_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ex_tool_coord_y
  {
    size_t item_size = sizeof(ros_message->ex_tool_coord_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ex_tool_coord_z
  {
    size_t item_size = sizeof(ros_message->ex_tool_coord_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ex_tool_coord_a
  {
    size_t item_size = sizeof(ros_message->ex_tool_coord_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ex_tool_coord_b
  {
    size_t item_size = sizeof(ros_message->ex_tool_coord_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ex_tool_coord_c
  {
    size_t item_size = sizeof(ros_message->ex_tool_coord_c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ex_axis_coord_x
  {
    size_t item_size = sizeof(ros_message->ex_axis_coord_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ex_axis_coord_y
  {
    size_t item_size = sizeof(ros_message->ex_axis_coord_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ex_axis_coord_z
  {
    size_t item_size = sizeof(ros_message->ex_axis_coord_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ex_axis_coord_a
  {
    size_t item_size = sizeof(ros_message->ex_axis_coord_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ex_axis_coord_b
  {
    size_t item_size = sizeof(ros_message->ex_axis_coord_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ex_axis_coord_c
  {
    size_t item_size = sizeof(ros_message->ex_axis_coord_c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name load
  {
    size_t item_size = sizeof(ros_message->load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name load_cog_x
  {
    size_t item_size = sizeof(ros_message->load_cog_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name load_cog_y
  {
    size_t item_size = sizeof(ros_message->load_cog_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name load_cog_z
  {
    size_t item_size = sizeof(ros_message->load_cog_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j1_last_servoj_target
  {
    size_t item_size = sizeof(ros_message->j1_last_servoj_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j2_last_servoj_target
  {
    size_t item_size = sizeof(ros_message->j2_last_servoj_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j3_last_servoj_target
  {
    size_t item_size = sizeof(ros_message->j3_last_servoj_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j4_last_servoj_target
  {
    size_t item_size = sizeof(ros_message->j4_last_servoj_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j5_last_servoj_target
  {
    size_t item_size = sizeof(ros_message->j5_last_servoj_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j6_last_servoj_target
  {
    size_t item_size = sizeof(ros_message->j6_last_servoj_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name servoj_cmd_num
  {
    size_t item_size = sizeof(ros_message->servoj_cmd_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RobotNonrtState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_fairino_msgs__msg__RobotNonrtState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fairino_msgs
size_t max_serialized_size_fairino_msgs__msg__RobotNonrtState(
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

  // member: prg_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rbt_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rbt_main_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: rbt_sub_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: robot_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: j1_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j2_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j3_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j4_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j5_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j6_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_x_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_y_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_z_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_a_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_b_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_c_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: flange_x_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: flange_y_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: flange_z_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: flange_a_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: flange_b_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: flange_c_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j1_actual_qd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j2_actual_qd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j3_actual_qd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j4_actual_qd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j5_actual_qd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j6_actual_qd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j1_actual_qdd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j2_actual_qdd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j3_actual_qdd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j4_actual_qdd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j5_actual_qdd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j6_actual_qdd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_lin_cmd_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_rot_cmd_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_x_cmd_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_y_cmd_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_z_cmd_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_a_cmd_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_b_cmd_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_c_cmd_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_lin_cur_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_rot_cur_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_x_cur_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_y_cur_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_z_cur_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_a_cur_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_b_cur_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_c_cur_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j1_cur_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j2_cur_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j3_cur_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j4_cur_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j5_cur_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j6_cur_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tool_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: work_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dgt_output_h
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dgt_output_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tl_dgt_output_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dgt_input_h
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dgt_input_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tl_dgt_input_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cl_analog_input_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: cl_analog_input_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: tl_anglog_input
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ft_fx_raw_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ft_fy_raw_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ft_fz_raw_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ft_tx_raw_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ft_ty_raw_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ft_tz_raw_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ft_fx_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ft_fy_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ft_fz_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ft_tx_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ft_ty_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ft_tz_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ft_actstatus
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: emg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: motion_done
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: grip_motion_done
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mc_queue_len
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: collision_err
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trajectory_pnum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: safety_stop1_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: safety_stop2_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gripper_fault_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: grippererro
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: gripper_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: gripper_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gripper_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gripper_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gripper_temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: gripper_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: aux_servo_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aux_servo_err
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: aux_servo_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: aux_servo_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: aux_servo_vel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: aux_servo_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ext_di_state_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ext_di_state_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ext_di_state_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ext_di_state_4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ext_di_state_5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ext_di_state_6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ext_di_state_7
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ext_di_state_8
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ext_do_state_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ext_do_state_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ext_do_state_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ext_do_state_4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ext_do_state_5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ext_do_state_6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ext_do_state_7
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ext_do_state_8
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ext_ai_state_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ext_ai_state_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ext_ai_state_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ext_ai_state_4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ext_ao_state_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ext_ao_state_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ext_ao_state_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ext_ao_state_4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: rbt_enable_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: end_lua_err_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: cl_analog_output_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: cl_analog_output_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: tl_analog_output
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: gripper_rot_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gripper_rot_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gripper_rot_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: weldbreakoffstate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: weldarcstate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: j1_tgt_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j2_tgt_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j3_tgt_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j4_tgt_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j5_tgt_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j6_tgt_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: jwide_voltage_ctrl_box_temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wide_voltage_ctrl_box_fan_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: tool_coord_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tool_coord_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tool_coord_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tool_coord_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tool_coord_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tool_coord_c
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wobj_coord_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wobj_coord_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wobj_coord_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wobj_coord_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wobj_coord_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wobj_coord_c
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ex_tool_coord_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ex_tool_coord_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ex_tool_coord_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ex_tool_coord_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ex_tool_coord_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ex_tool_coord_c
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ex_axis_coord_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ex_axis_coord_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ex_axis_coord_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ex_axis_coord_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ex_axis_coord_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ex_axis_coord_c
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: load
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: load_cog_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: load_cog_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: load_cog_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j1_last_servoj_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j2_last_servoj_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j3_last_servoj_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j4_last_servoj_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j5_last_servoj_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j6_last_servoj_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: servoj_cmd_num
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
    using DataType = fairino_msgs__msg__RobotNonrtState;
    is_plain =
      (
      offsetof(DataType, servoj_cmd_num) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RobotNonrtState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_fairino_msgs__msg__RobotNonrtState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobotNonrtState = {
  "fairino_msgs::msg",
  "RobotNonrtState",
  _RobotNonrtState__cdr_serialize,
  _RobotNonrtState__cdr_deserialize,
  _RobotNonrtState__get_serialized_size,
  _RobotNonrtState__max_serialized_size
};

static rosidl_message_type_support_t _RobotNonrtState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotNonrtState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fairino_msgs, msg, RobotNonrtState)() {
  return &_RobotNonrtState__type_support;
}

#if defined(__cplusplus)
}
#endif
