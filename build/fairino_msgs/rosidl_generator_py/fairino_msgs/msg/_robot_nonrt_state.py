# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fairino_msgs:msg/RobotNonrtState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotNonrtState(type):
    """Metaclass of message 'RobotNonrtState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('fairino_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fairino_msgs.msg.RobotNonrtState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_nonrt_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_nonrt_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_nonrt_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_nonrt_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_nonrt_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotNonrtState(metaclass=Metaclass_RobotNonrtState):
    """Message class 'RobotNonrtState'."""

    __slots__ = [
        '_prg_state',
        '_rbt_state',
        '_rbt_main_code',
        '_rbt_sub_code',
        '_robot_mode',
        '_j1_cur_pos',
        '_j2_cur_pos',
        '_j3_cur_pos',
        '_j4_cur_pos',
        '_j5_cur_pos',
        '_j6_cur_pos',
        '_cart_x_cur_pos',
        '_cart_y_cur_pos',
        '_cart_z_cur_pos',
        '_cart_a_cur_pos',
        '_cart_b_cur_pos',
        '_cart_c_cur_pos',
        '_flange_x_cur_pos',
        '_flange_y_cur_pos',
        '_flange_z_cur_pos',
        '_flange_a_cur_pos',
        '_flange_b_cur_pos',
        '_flange_c_cur_pos',
        '_j1_actual_qd',
        '_j2_actual_qd',
        '_j3_actual_qd',
        '_j4_actual_qd',
        '_j5_actual_qd',
        '_j6_actual_qd',
        '_j1_actual_qdd',
        '_j2_actual_qdd',
        '_j3_actual_qdd',
        '_j4_actual_qdd',
        '_j5_actual_qdd',
        '_j6_actual_qdd',
        '_cart_lin_cmd_speed',
        '_cart_rot_cmd_speed',
        '_cart_x_cmd_speed',
        '_cart_y_cmd_speed',
        '_cart_z_cmd_speed',
        '_cart_a_cmd_speed',
        '_cart_b_cmd_speed',
        '_cart_c_cmd_speed',
        '_cart_lin_cur_speed',
        '_cart_rot_cur_speed',
        '_cart_x_cur_speed',
        '_cart_y_cur_speed',
        '_cart_z_cur_speed',
        '_cart_a_cur_speed',
        '_cart_b_cur_speed',
        '_cart_c_cur_speed',
        '_j1_cur_tor',
        '_j2_cur_tor',
        '_j3_cur_tor',
        '_j4_cur_tor',
        '_j5_cur_tor',
        '_j6_cur_tor',
        '_tool_num',
        '_work_num',
        '_dgt_output_h',
        '_dgt_output_l',
        '_tl_dgt_output_l',
        '_dgt_input_h',
        '_dgt_input_l',
        '_tl_dgt_input_l',
        '_cl_analog_input_1',
        '_cl_analog_input_2',
        '_tl_anglog_input',
        '_ft_fx_raw_data',
        '_ft_fy_raw_data',
        '_ft_fz_raw_data',
        '_ft_tx_raw_data',
        '_ft_ty_raw_data',
        '_ft_tz_raw_data',
        '_ft_fx_data',
        '_ft_fy_data',
        '_ft_fz_data',
        '_ft_tx_data',
        '_ft_ty_data',
        '_ft_tz_data',
        '_ft_actstatus',
        '_emg',
        '_motion_done',
        '_grip_motion_done',
        '_mc_queue_len',
        '_collision_err',
        '_trajectory_pnum',
        '_safety_stop1_state',
        '_safety_stop2_state',
        '_gripper_fault_id',
        '_grippererro',
        '_gripper_active',
        '_gripper_position',
        '_gripper_speed',
        '_gripper_current',
        '_gripper_temp',
        '_gripper_voltage',
        '_aux_servo_id',
        '_aux_servo_err',
        '_aux_servo_state',
        '_aux_servo_pos',
        '_aux_servo_vel',
        '_aux_servo_torque',
        '_ext_di_state_1',
        '_ext_di_state_2',
        '_ext_di_state_3',
        '_ext_di_state_4',
        '_ext_di_state_5',
        '_ext_di_state_6',
        '_ext_di_state_7',
        '_ext_di_state_8',
        '_ext_do_state_1',
        '_ext_do_state_2',
        '_ext_do_state_3',
        '_ext_do_state_4',
        '_ext_do_state_5',
        '_ext_do_state_6',
        '_ext_do_state_7',
        '_ext_do_state_8',
        '_ext_ai_state_1',
        '_ext_ai_state_2',
        '_ext_ai_state_3',
        '_ext_ai_state_4',
        '_ext_ao_state_1',
        '_ext_ao_state_2',
        '_ext_ao_state_3',
        '_ext_ao_state_4',
        '_rbt_enable_state',
        '_end_lua_err_code',
        '_cl_analog_output_1',
        '_cl_analog_output_2',
        '_tl_analog_output',
        '_gripper_rot_num',
        '_gripper_rot_speed',
        '_gripper_rot_torque',
        '_weldbreakoffstate',
        '_weldarcstate',
        '_j1_tgt_tor',
        '_j2_tgt_tor',
        '_j3_tgt_tor',
        '_j4_tgt_tor',
        '_j5_tgt_tor',
        '_j6_tgt_tor',
        '_jwide_voltage_ctrl_box_temp',
        '_wide_voltage_ctrl_box_fan_current',
        '_tool_coord_x',
        '_tool_coord_y',
        '_tool_coord_z',
        '_tool_coord_a',
        '_tool_coord_b',
        '_tool_coord_c',
        '_wobj_coord_x',
        '_wobj_coord_y',
        '_wobj_coord_z',
        '_wobj_coord_a',
        '_wobj_coord_b',
        '_wobj_coord_c',
        '_ex_tool_coord_x',
        '_ex_tool_coord_y',
        '_ex_tool_coord_z',
        '_ex_tool_coord_a',
        '_ex_tool_coord_b',
        '_ex_tool_coord_c',
        '_ex_axis_coord_x',
        '_ex_axis_coord_y',
        '_ex_axis_coord_z',
        '_ex_axis_coord_a',
        '_ex_axis_coord_b',
        '_ex_axis_coord_c',
        '_load',
        '_load_cog_x',
        '_load_cog_y',
        '_load_cog_z',
        '_j1_last_servoj_target',
        '_j2_last_servoj_target',
        '_j3_last_servoj_target',
        '_j4_last_servoj_target',
        '_j5_last_servoj_target',
        '_j6_last_servoj_target',
        '_servoj_cmd_num',
    ]

    _fields_and_field_types = {
        'prg_state': 'uint8',
        'rbt_state': 'uint8',
        'rbt_main_code': 'uint16',
        'rbt_sub_code': 'uint16',
        'robot_mode': 'uint8',
        'j1_cur_pos': 'double',
        'j2_cur_pos': 'double',
        'j3_cur_pos': 'double',
        'j4_cur_pos': 'double',
        'j5_cur_pos': 'double',
        'j6_cur_pos': 'double',
        'cart_x_cur_pos': 'double',
        'cart_y_cur_pos': 'double',
        'cart_z_cur_pos': 'double',
        'cart_a_cur_pos': 'double',
        'cart_b_cur_pos': 'double',
        'cart_c_cur_pos': 'double',
        'flange_x_cur_pos': 'double',
        'flange_y_cur_pos': 'double',
        'flange_z_cur_pos': 'double',
        'flange_a_cur_pos': 'double',
        'flange_b_cur_pos': 'double',
        'flange_c_cur_pos': 'double',
        'j1_actual_qd': 'double',
        'j2_actual_qd': 'double',
        'j3_actual_qd': 'double',
        'j4_actual_qd': 'double',
        'j5_actual_qd': 'double',
        'j6_actual_qd': 'double',
        'j1_actual_qdd': 'double',
        'j2_actual_qdd': 'double',
        'j3_actual_qdd': 'double',
        'j4_actual_qdd': 'double',
        'j5_actual_qdd': 'double',
        'j6_actual_qdd': 'double',
        'cart_lin_cmd_speed': 'double',
        'cart_rot_cmd_speed': 'double',
        'cart_x_cmd_speed': 'double',
        'cart_y_cmd_speed': 'double',
        'cart_z_cmd_speed': 'double',
        'cart_a_cmd_speed': 'double',
        'cart_b_cmd_speed': 'double',
        'cart_c_cmd_speed': 'double',
        'cart_lin_cur_speed': 'double',
        'cart_rot_cur_speed': 'double',
        'cart_x_cur_speed': 'double',
        'cart_y_cur_speed': 'double',
        'cart_z_cur_speed': 'double',
        'cart_a_cur_speed': 'double',
        'cart_b_cur_speed': 'double',
        'cart_c_cur_speed': 'double',
        'j1_cur_tor': 'double',
        'j2_cur_tor': 'double',
        'j3_cur_tor': 'double',
        'j4_cur_tor': 'double',
        'j5_cur_tor': 'double',
        'j6_cur_tor': 'double',
        'tool_num': 'uint8',
        'work_num': 'uint8',
        'dgt_output_h': 'uint8',
        'dgt_output_l': 'uint8',
        'tl_dgt_output_l': 'uint8',
        'dgt_input_h': 'uint8',
        'dgt_input_l': 'uint8',
        'tl_dgt_input_l': 'uint8',
        'cl_analog_input_1': 'uint16',
        'cl_analog_input_2': 'uint16',
        'tl_anglog_input': 'uint16',
        'ft_fx_raw_data': 'double',
        'ft_fy_raw_data': 'double',
        'ft_fz_raw_data': 'double',
        'ft_tx_raw_data': 'double',
        'ft_ty_raw_data': 'double',
        'ft_tz_raw_data': 'double',
        'ft_fx_data': 'double',
        'ft_fy_data': 'double',
        'ft_fz_data': 'double',
        'ft_tx_data': 'double',
        'ft_ty_data': 'double',
        'ft_tz_data': 'double',
        'ft_actstatus': 'uint8',
        'emg': 'uint8',
        'motion_done': 'uint8',
        'grip_motion_done': 'uint8',
        'mc_queue_len': 'uint16',
        'collision_err': 'uint8',
        'trajectory_pnum': 'uint16',
        'safety_stop1_state': 'uint8',
        'safety_stop2_state': 'uint8',
        'gripper_fault_id': 'uint8',
        'grippererro': 'uint16',
        'gripper_active': 'uint16',
        'gripper_position': 'uint8',
        'gripper_speed': 'uint8',
        'gripper_current': 'uint8',
        'gripper_temp': 'uint16',
        'gripper_voltage': 'uint16',
        'aux_servo_id': 'uint8',
        'aux_servo_err': 'uint16',
        'aux_servo_state': 'uint16',
        'aux_servo_pos': 'double',
        'aux_servo_vel': 'double',
        'aux_servo_torque': 'double',
        'ext_di_state_1': 'uint16',
        'ext_di_state_2': 'uint16',
        'ext_di_state_3': 'uint16',
        'ext_di_state_4': 'uint16',
        'ext_di_state_5': 'uint16',
        'ext_di_state_6': 'uint16',
        'ext_di_state_7': 'uint16',
        'ext_di_state_8': 'uint16',
        'ext_do_state_1': 'uint16',
        'ext_do_state_2': 'uint16',
        'ext_do_state_3': 'uint16',
        'ext_do_state_4': 'uint16',
        'ext_do_state_5': 'uint16',
        'ext_do_state_6': 'uint16',
        'ext_do_state_7': 'uint16',
        'ext_do_state_8': 'uint16',
        'ext_ai_state_1': 'uint16',
        'ext_ai_state_2': 'uint16',
        'ext_ai_state_3': 'uint16',
        'ext_ai_state_4': 'uint16',
        'ext_ao_state_1': 'uint16',
        'ext_ao_state_2': 'uint16',
        'ext_ao_state_3': 'uint16',
        'ext_ao_state_4': 'uint16',
        'rbt_enable_state': 'uint8',
        'end_lua_err_code': 'uint16',
        'cl_analog_output_1': 'uint16',
        'cl_analog_output_2': 'uint16',
        'tl_analog_output': 'uint16',
        'gripper_rot_num': 'double',
        'gripper_rot_speed': 'uint8',
        'gripper_rot_torque': 'uint8',
        'weldbreakoffstate': 'uint8',
        'weldarcstate': 'uint8',
        'j1_tgt_tor': 'double',
        'j2_tgt_tor': 'double',
        'j3_tgt_tor': 'double',
        'j4_tgt_tor': 'double',
        'j5_tgt_tor': 'double',
        'j6_tgt_tor': 'double',
        'jwide_voltage_ctrl_box_temp': 'double',
        'wide_voltage_ctrl_box_fan_current': 'uint16',
        'tool_coord_x': 'double',
        'tool_coord_y': 'double',
        'tool_coord_z': 'double',
        'tool_coord_a': 'double',
        'tool_coord_b': 'double',
        'tool_coord_c': 'double',
        'wobj_coord_x': 'double',
        'wobj_coord_y': 'double',
        'wobj_coord_z': 'double',
        'wobj_coord_a': 'double',
        'wobj_coord_b': 'double',
        'wobj_coord_c': 'double',
        'ex_tool_coord_x': 'double',
        'ex_tool_coord_y': 'double',
        'ex_tool_coord_z': 'double',
        'ex_tool_coord_a': 'double',
        'ex_tool_coord_b': 'double',
        'ex_tool_coord_c': 'double',
        'ex_axis_coord_x': 'double',
        'ex_axis_coord_y': 'double',
        'ex_axis_coord_z': 'double',
        'ex_axis_coord_a': 'double',
        'ex_axis_coord_b': 'double',
        'ex_axis_coord_c': 'double',
        'load': 'double',
        'load_cog_x': 'double',
        'load_cog_y': 'double',
        'load_cog_z': 'double',
        'j1_last_servoj_target': 'double',
        'j2_last_servoj_target': 'double',
        'j3_last_servoj_target': 'double',
        'j4_last_servoj_target': 'double',
        'j5_last_servoj_target': 'double',
        'j6_last_servoj_target': 'double',
        'servoj_cmd_num': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.prg_state = kwargs.get('prg_state', int())
        self.rbt_state = kwargs.get('rbt_state', int())
        self.rbt_main_code = kwargs.get('rbt_main_code', int())
        self.rbt_sub_code = kwargs.get('rbt_sub_code', int())
        self.robot_mode = kwargs.get('robot_mode', int())
        self.j1_cur_pos = kwargs.get('j1_cur_pos', float())
        self.j2_cur_pos = kwargs.get('j2_cur_pos', float())
        self.j3_cur_pos = kwargs.get('j3_cur_pos', float())
        self.j4_cur_pos = kwargs.get('j4_cur_pos', float())
        self.j5_cur_pos = kwargs.get('j5_cur_pos', float())
        self.j6_cur_pos = kwargs.get('j6_cur_pos', float())
        self.cart_x_cur_pos = kwargs.get('cart_x_cur_pos', float())
        self.cart_y_cur_pos = kwargs.get('cart_y_cur_pos', float())
        self.cart_z_cur_pos = kwargs.get('cart_z_cur_pos', float())
        self.cart_a_cur_pos = kwargs.get('cart_a_cur_pos', float())
        self.cart_b_cur_pos = kwargs.get('cart_b_cur_pos', float())
        self.cart_c_cur_pos = kwargs.get('cart_c_cur_pos', float())
        self.flange_x_cur_pos = kwargs.get('flange_x_cur_pos', float())
        self.flange_y_cur_pos = kwargs.get('flange_y_cur_pos', float())
        self.flange_z_cur_pos = kwargs.get('flange_z_cur_pos', float())
        self.flange_a_cur_pos = kwargs.get('flange_a_cur_pos', float())
        self.flange_b_cur_pos = kwargs.get('flange_b_cur_pos', float())
        self.flange_c_cur_pos = kwargs.get('flange_c_cur_pos', float())
        self.j1_actual_qd = kwargs.get('j1_actual_qd', float())
        self.j2_actual_qd = kwargs.get('j2_actual_qd', float())
        self.j3_actual_qd = kwargs.get('j3_actual_qd', float())
        self.j4_actual_qd = kwargs.get('j4_actual_qd', float())
        self.j5_actual_qd = kwargs.get('j5_actual_qd', float())
        self.j6_actual_qd = kwargs.get('j6_actual_qd', float())
        self.j1_actual_qdd = kwargs.get('j1_actual_qdd', float())
        self.j2_actual_qdd = kwargs.get('j2_actual_qdd', float())
        self.j3_actual_qdd = kwargs.get('j3_actual_qdd', float())
        self.j4_actual_qdd = kwargs.get('j4_actual_qdd', float())
        self.j5_actual_qdd = kwargs.get('j5_actual_qdd', float())
        self.j6_actual_qdd = kwargs.get('j6_actual_qdd', float())
        self.cart_lin_cmd_speed = kwargs.get('cart_lin_cmd_speed', float())
        self.cart_rot_cmd_speed = kwargs.get('cart_rot_cmd_speed', float())
        self.cart_x_cmd_speed = kwargs.get('cart_x_cmd_speed', float())
        self.cart_y_cmd_speed = kwargs.get('cart_y_cmd_speed', float())
        self.cart_z_cmd_speed = kwargs.get('cart_z_cmd_speed', float())
        self.cart_a_cmd_speed = kwargs.get('cart_a_cmd_speed', float())
        self.cart_b_cmd_speed = kwargs.get('cart_b_cmd_speed', float())
        self.cart_c_cmd_speed = kwargs.get('cart_c_cmd_speed', float())
        self.cart_lin_cur_speed = kwargs.get('cart_lin_cur_speed', float())
        self.cart_rot_cur_speed = kwargs.get('cart_rot_cur_speed', float())
        self.cart_x_cur_speed = kwargs.get('cart_x_cur_speed', float())
        self.cart_y_cur_speed = kwargs.get('cart_y_cur_speed', float())
        self.cart_z_cur_speed = kwargs.get('cart_z_cur_speed', float())
        self.cart_a_cur_speed = kwargs.get('cart_a_cur_speed', float())
        self.cart_b_cur_speed = kwargs.get('cart_b_cur_speed', float())
        self.cart_c_cur_speed = kwargs.get('cart_c_cur_speed', float())
        self.j1_cur_tor = kwargs.get('j1_cur_tor', float())
        self.j2_cur_tor = kwargs.get('j2_cur_tor', float())
        self.j3_cur_tor = kwargs.get('j3_cur_tor', float())
        self.j4_cur_tor = kwargs.get('j4_cur_tor', float())
        self.j5_cur_tor = kwargs.get('j5_cur_tor', float())
        self.j6_cur_tor = kwargs.get('j6_cur_tor', float())
        self.tool_num = kwargs.get('tool_num', int())
        self.work_num = kwargs.get('work_num', int())
        self.dgt_output_h = kwargs.get('dgt_output_h', int())
        self.dgt_output_l = kwargs.get('dgt_output_l', int())
        self.tl_dgt_output_l = kwargs.get('tl_dgt_output_l', int())
        self.dgt_input_h = kwargs.get('dgt_input_h', int())
        self.dgt_input_l = kwargs.get('dgt_input_l', int())
        self.tl_dgt_input_l = kwargs.get('tl_dgt_input_l', int())
        self.cl_analog_input_1 = kwargs.get('cl_analog_input_1', int())
        self.cl_analog_input_2 = kwargs.get('cl_analog_input_2', int())
        self.tl_anglog_input = kwargs.get('tl_anglog_input', int())
        self.ft_fx_raw_data = kwargs.get('ft_fx_raw_data', float())
        self.ft_fy_raw_data = kwargs.get('ft_fy_raw_data', float())
        self.ft_fz_raw_data = kwargs.get('ft_fz_raw_data', float())
        self.ft_tx_raw_data = kwargs.get('ft_tx_raw_data', float())
        self.ft_ty_raw_data = kwargs.get('ft_ty_raw_data', float())
        self.ft_tz_raw_data = kwargs.get('ft_tz_raw_data', float())
        self.ft_fx_data = kwargs.get('ft_fx_data', float())
        self.ft_fy_data = kwargs.get('ft_fy_data', float())
        self.ft_fz_data = kwargs.get('ft_fz_data', float())
        self.ft_tx_data = kwargs.get('ft_tx_data', float())
        self.ft_ty_data = kwargs.get('ft_ty_data', float())
        self.ft_tz_data = kwargs.get('ft_tz_data', float())
        self.ft_actstatus = kwargs.get('ft_actstatus', int())
        self.emg = kwargs.get('emg', int())
        self.motion_done = kwargs.get('motion_done', int())
        self.grip_motion_done = kwargs.get('grip_motion_done', int())
        self.mc_queue_len = kwargs.get('mc_queue_len', int())
        self.collision_err = kwargs.get('collision_err', int())
        self.trajectory_pnum = kwargs.get('trajectory_pnum', int())
        self.safety_stop1_state = kwargs.get('safety_stop1_state', int())
        self.safety_stop2_state = kwargs.get('safety_stop2_state', int())
        self.gripper_fault_id = kwargs.get('gripper_fault_id', int())
        self.grippererro = kwargs.get('grippererro', int())
        self.gripper_active = kwargs.get('gripper_active', int())
        self.gripper_position = kwargs.get('gripper_position', int())
        self.gripper_speed = kwargs.get('gripper_speed', int())
        self.gripper_current = kwargs.get('gripper_current', int())
        self.gripper_temp = kwargs.get('gripper_temp', int())
        self.gripper_voltage = kwargs.get('gripper_voltage', int())
        self.aux_servo_id = kwargs.get('aux_servo_id', int())
        self.aux_servo_err = kwargs.get('aux_servo_err', int())
        self.aux_servo_state = kwargs.get('aux_servo_state', int())
        self.aux_servo_pos = kwargs.get('aux_servo_pos', float())
        self.aux_servo_vel = kwargs.get('aux_servo_vel', float())
        self.aux_servo_torque = kwargs.get('aux_servo_torque', float())
        self.ext_di_state_1 = kwargs.get('ext_di_state_1', int())
        self.ext_di_state_2 = kwargs.get('ext_di_state_2', int())
        self.ext_di_state_3 = kwargs.get('ext_di_state_3', int())
        self.ext_di_state_4 = kwargs.get('ext_di_state_4', int())
        self.ext_di_state_5 = kwargs.get('ext_di_state_5', int())
        self.ext_di_state_6 = kwargs.get('ext_di_state_6', int())
        self.ext_di_state_7 = kwargs.get('ext_di_state_7', int())
        self.ext_di_state_8 = kwargs.get('ext_di_state_8', int())
        self.ext_do_state_1 = kwargs.get('ext_do_state_1', int())
        self.ext_do_state_2 = kwargs.get('ext_do_state_2', int())
        self.ext_do_state_3 = kwargs.get('ext_do_state_3', int())
        self.ext_do_state_4 = kwargs.get('ext_do_state_4', int())
        self.ext_do_state_5 = kwargs.get('ext_do_state_5', int())
        self.ext_do_state_6 = kwargs.get('ext_do_state_6', int())
        self.ext_do_state_7 = kwargs.get('ext_do_state_7', int())
        self.ext_do_state_8 = kwargs.get('ext_do_state_8', int())
        self.ext_ai_state_1 = kwargs.get('ext_ai_state_1', int())
        self.ext_ai_state_2 = kwargs.get('ext_ai_state_2', int())
        self.ext_ai_state_3 = kwargs.get('ext_ai_state_3', int())
        self.ext_ai_state_4 = kwargs.get('ext_ai_state_4', int())
        self.ext_ao_state_1 = kwargs.get('ext_ao_state_1', int())
        self.ext_ao_state_2 = kwargs.get('ext_ao_state_2', int())
        self.ext_ao_state_3 = kwargs.get('ext_ao_state_3', int())
        self.ext_ao_state_4 = kwargs.get('ext_ao_state_4', int())
        self.rbt_enable_state = kwargs.get('rbt_enable_state', int())
        self.end_lua_err_code = kwargs.get('end_lua_err_code', int())
        self.cl_analog_output_1 = kwargs.get('cl_analog_output_1', int())
        self.cl_analog_output_2 = kwargs.get('cl_analog_output_2', int())
        self.tl_analog_output = kwargs.get('tl_analog_output', int())
        self.gripper_rot_num = kwargs.get('gripper_rot_num', float())
        self.gripper_rot_speed = kwargs.get('gripper_rot_speed', int())
        self.gripper_rot_torque = kwargs.get('gripper_rot_torque', int())
        self.weldbreakoffstate = kwargs.get('weldbreakoffstate', int())
        self.weldarcstate = kwargs.get('weldarcstate', int())
        self.j1_tgt_tor = kwargs.get('j1_tgt_tor', float())
        self.j2_tgt_tor = kwargs.get('j2_tgt_tor', float())
        self.j3_tgt_tor = kwargs.get('j3_tgt_tor', float())
        self.j4_tgt_tor = kwargs.get('j4_tgt_tor', float())
        self.j5_tgt_tor = kwargs.get('j5_tgt_tor', float())
        self.j6_tgt_tor = kwargs.get('j6_tgt_tor', float())
        self.jwide_voltage_ctrl_box_temp = kwargs.get('jwide_voltage_ctrl_box_temp', float())
        self.wide_voltage_ctrl_box_fan_current = kwargs.get('wide_voltage_ctrl_box_fan_current', int())
        self.tool_coord_x = kwargs.get('tool_coord_x', float())
        self.tool_coord_y = kwargs.get('tool_coord_y', float())
        self.tool_coord_z = kwargs.get('tool_coord_z', float())
        self.tool_coord_a = kwargs.get('tool_coord_a', float())
        self.tool_coord_b = kwargs.get('tool_coord_b', float())
        self.tool_coord_c = kwargs.get('tool_coord_c', float())
        self.wobj_coord_x = kwargs.get('wobj_coord_x', float())
        self.wobj_coord_y = kwargs.get('wobj_coord_y', float())
        self.wobj_coord_z = kwargs.get('wobj_coord_z', float())
        self.wobj_coord_a = kwargs.get('wobj_coord_a', float())
        self.wobj_coord_b = kwargs.get('wobj_coord_b', float())
        self.wobj_coord_c = kwargs.get('wobj_coord_c', float())
        self.ex_tool_coord_x = kwargs.get('ex_tool_coord_x', float())
        self.ex_tool_coord_y = kwargs.get('ex_tool_coord_y', float())
        self.ex_tool_coord_z = kwargs.get('ex_tool_coord_z', float())
        self.ex_tool_coord_a = kwargs.get('ex_tool_coord_a', float())
        self.ex_tool_coord_b = kwargs.get('ex_tool_coord_b', float())
        self.ex_tool_coord_c = kwargs.get('ex_tool_coord_c', float())
        self.ex_axis_coord_x = kwargs.get('ex_axis_coord_x', float())
        self.ex_axis_coord_y = kwargs.get('ex_axis_coord_y', float())
        self.ex_axis_coord_z = kwargs.get('ex_axis_coord_z', float())
        self.ex_axis_coord_a = kwargs.get('ex_axis_coord_a', float())
        self.ex_axis_coord_b = kwargs.get('ex_axis_coord_b', float())
        self.ex_axis_coord_c = kwargs.get('ex_axis_coord_c', float())
        self.load = kwargs.get('load', float())
        self.load_cog_x = kwargs.get('load_cog_x', float())
        self.load_cog_y = kwargs.get('load_cog_y', float())
        self.load_cog_z = kwargs.get('load_cog_z', float())
        self.j1_last_servoj_target = kwargs.get('j1_last_servoj_target', float())
        self.j2_last_servoj_target = kwargs.get('j2_last_servoj_target', float())
        self.j3_last_servoj_target = kwargs.get('j3_last_servoj_target', float())
        self.j4_last_servoj_target = kwargs.get('j4_last_servoj_target', float())
        self.j5_last_servoj_target = kwargs.get('j5_last_servoj_target', float())
        self.j6_last_servoj_target = kwargs.get('j6_last_servoj_target', float())
        self.servoj_cmd_num = kwargs.get('servoj_cmd_num', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.prg_state != other.prg_state:
            return False
        if self.rbt_state != other.rbt_state:
            return False
        if self.rbt_main_code != other.rbt_main_code:
            return False
        if self.rbt_sub_code != other.rbt_sub_code:
            return False
        if self.robot_mode != other.robot_mode:
            return False
        if self.j1_cur_pos != other.j1_cur_pos:
            return False
        if self.j2_cur_pos != other.j2_cur_pos:
            return False
        if self.j3_cur_pos != other.j3_cur_pos:
            return False
        if self.j4_cur_pos != other.j4_cur_pos:
            return False
        if self.j5_cur_pos != other.j5_cur_pos:
            return False
        if self.j6_cur_pos != other.j6_cur_pos:
            return False
        if self.cart_x_cur_pos != other.cart_x_cur_pos:
            return False
        if self.cart_y_cur_pos != other.cart_y_cur_pos:
            return False
        if self.cart_z_cur_pos != other.cart_z_cur_pos:
            return False
        if self.cart_a_cur_pos != other.cart_a_cur_pos:
            return False
        if self.cart_b_cur_pos != other.cart_b_cur_pos:
            return False
        if self.cart_c_cur_pos != other.cart_c_cur_pos:
            return False
        if self.flange_x_cur_pos != other.flange_x_cur_pos:
            return False
        if self.flange_y_cur_pos != other.flange_y_cur_pos:
            return False
        if self.flange_z_cur_pos != other.flange_z_cur_pos:
            return False
        if self.flange_a_cur_pos != other.flange_a_cur_pos:
            return False
        if self.flange_b_cur_pos != other.flange_b_cur_pos:
            return False
        if self.flange_c_cur_pos != other.flange_c_cur_pos:
            return False
        if self.j1_actual_qd != other.j1_actual_qd:
            return False
        if self.j2_actual_qd != other.j2_actual_qd:
            return False
        if self.j3_actual_qd != other.j3_actual_qd:
            return False
        if self.j4_actual_qd != other.j4_actual_qd:
            return False
        if self.j5_actual_qd != other.j5_actual_qd:
            return False
        if self.j6_actual_qd != other.j6_actual_qd:
            return False
        if self.j1_actual_qdd != other.j1_actual_qdd:
            return False
        if self.j2_actual_qdd != other.j2_actual_qdd:
            return False
        if self.j3_actual_qdd != other.j3_actual_qdd:
            return False
        if self.j4_actual_qdd != other.j4_actual_qdd:
            return False
        if self.j5_actual_qdd != other.j5_actual_qdd:
            return False
        if self.j6_actual_qdd != other.j6_actual_qdd:
            return False
        if self.cart_lin_cmd_speed != other.cart_lin_cmd_speed:
            return False
        if self.cart_rot_cmd_speed != other.cart_rot_cmd_speed:
            return False
        if self.cart_x_cmd_speed != other.cart_x_cmd_speed:
            return False
        if self.cart_y_cmd_speed != other.cart_y_cmd_speed:
            return False
        if self.cart_z_cmd_speed != other.cart_z_cmd_speed:
            return False
        if self.cart_a_cmd_speed != other.cart_a_cmd_speed:
            return False
        if self.cart_b_cmd_speed != other.cart_b_cmd_speed:
            return False
        if self.cart_c_cmd_speed != other.cart_c_cmd_speed:
            return False
        if self.cart_lin_cur_speed != other.cart_lin_cur_speed:
            return False
        if self.cart_rot_cur_speed != other.cart_rot_cur_speed:
            return False
        if self.cart_x_cur_speed != other.cart_x_cur_speed:
            return False
        if self.cart_y_cur_speed != other.cart_y_cur_speed:
            return False
        if self.cart_z_cur_speed != other.cart_z_cur_speed:
            return False
        if self.cart_a_cur_speed != other.cart_a_cur_speed:
            return False
        if self.cart_b_cur_speed != other.cart_b_cur_speed:
            return False
        if self.cart_c_cur_speed != other.cart_c_cur_speed:
            return False
        if self.j1_cur_tor != other.j1_cur_tor:
            return False
        if self.j2_cur_tor != other.j2_cur_tor:
            return False
        if self.j3_cur_tor != other.j3_cur_tor:
            return False
        if self.j4_cur_tor != other.j4_cur_tor:
            return False
        if self.j5_cur_tor != other.j5_cur_tor:
            return False
        if self.j6_cur_tor != other.j6_cur_tor:
            return False
        if self.tool_num != other.tool_num:
            return False
        if self.work_num != other.work_num:
            return False
        if self.dgt_output_h != other.dgt_output_h:
            return False
        if self.dgt_output_l != other.dgt_output_l:
            return False
        if self.tl_dgt_output_l != other.tl_dgt_output_l:
            return False
        if self.dgt_input_h != other.dgt_input_h:
            return False
        if self.dgt_input_l != other.dgt_input_l:
            return False
        if self.tl_dgt_input_l != other.tl_dgt_input_l:
            return False
        if self.cl_analog_input_1 != other.cl_analog_input_1:
            return False
        if self.cl_analog_input_2 != other.cl_analog_input_2:
            return False
        if self.tl_anglog_input != other.tl_anglog_input:
            return False
        if self.ft_fx_raw_data != other.ft_fx_raw_data:
            return False
        if self.ft_fy_raw_data != other.ft_fy_raw_data:
            return False
        if self.ft_fz_raw_data != other.ft_fz_raw_data:
            return False
        if self.ft_tx_raw_data != other.ft_tx_raw_data:
            return False
        if self.ft_ty_raw_data != other.ft_ty_raw_data:
            return False
        if self.ft_tz_raw_data != other.ft_tz_raw_data:
            return False
        if self.ft_fx_data != other.ft_fx_data:
            return False
        if self.ft_fy_data != other.ft_fy_data:
            return False
        if self.ft_fz_data != other.ft_fz_data:
            return False
        if self.ft_tx_data != other.ft_tx_data:
            return False
        if self.ft_ty_data != other.ft_ty_data:
            return False
        if self.ft_tz_data != other.ft_tz_data:
            return False
        if self.ft_actstatus != other.ft_actstatus:
            return False
        if self.emg != other.emg:
            return False
        if self.motion_done != other.motion_done:
            return False
        if self.grip_motion_done != other.grip_motion_done:
            return False
        if self.mc_queue_len != other.mc_queue_len:
            return False
        if self.collision_err != other.collision_err:
            return False
        if self.trajectory_pnum != other.trajectory_pnum:
            return False
        if self.safety_stop1_state != other.safety_stop1_state:
            return False
        if self.safety_stop2_state != other.safety_stop2_state:
            return False
        if self.gripper_fault_id != other.gripper_fault_id:
            return False
        if self.grippererro != other.grippererro:
            return False
        if self.gripper_active != other.gripper_active:
            return False
        if self.gripper_position != other.gripper_position:
            return False
        if self.gripper_speed != other.gripper_speed:
            return False
        if self.gripper_current != other.gripper_current:
            return False
        if self.gripper_temp != other.gripper_temp:
            return False
        if self.gripper_voltage != other.gripper_voltage:
            return False
        if self.aux_servo_id != other.aux_servo_id:
            return False
        if self.aux_servo_err != other.aux_servo_err:
            return False
        if self.aux_servo_state != other.aux_servo_state:
            return False
        if self.aux_servo_pos != other.aux_servo_pos:
            return False
        if self.aux_servo_vel != other.aux_servo_vel:
            return False
        if self.aux_servo_torque != other.aux_servo_torque:
            return False
        if self.ext_di_state_1 != other.ext_di_state_1:
            return False
        if self.ext_di_state_2 != other.ext_di_state_2:
            return False
        if self.ext_di_state_3 != other.ext_di_state_3:
            return False
        if self.ext_di_state_4 != other.ext_di_state_4:
            return False
        if self.ext_di_state_5 != other.ext_di_state_5:
            return False
        if self.ext_di_state_6 != other.ext_di_state_6:
            return False
        if self.ext_di_state_7 != other.ext_di_state_7:
            return False
        if self.ext_di_state_8 != other.ext_di_state_8:
            return False
        if self.ext_do_state_1 != other.ext_do_state_1:
            return False
        if self.ext_do_state_2 != other.ext_do_state_2:
            return False
        if self.ext_do_state_3 != other.ext_do_state_3:
            return False
        if self.ext_do_state_4 != other.ext_do_state_4:
            return False
        if self.ext_do_state_5 != other.ext_do_state_5:
            return False
        if self.ext_do_state_6 != other.ext_do_state_6:
            return False
        if self.ext_do_state_7 != other.ext_do_state_7:
            return False
        if self.ext_do_state_8 != other.ext_do_state_8:
            return False
        if self.ext_ai_state_1 != other.ext_ai_state_1:
            return False
        if self.ext_ai_state_2 != other.ext_ai_state_2:
            return False
        if self.ext_ai_state_3 != other.ext_ai_state_3:
            return False
        if self.ext_ai_state_4 != other.ext_ai_state_4:
            return False
        if self.ext_ao_state_1 != other.ext_ao_state_1:
            return False
        if self.ext_ao_state_2 != other.ext_ao_state_2:
            return False
        if self.ext_ao_state_3 != other.ext_ao_state_3:
            return False
        if self.ext_ao_state_4 != other.ext_ao_state_4:
            return False
        if self.rbt_enable_state != other.rbt_enable_state:
            return False
        if self.end_lua_err_code != other.end_lua_err_code:
            return False
        if self.cl_analog_output_1 != other.cl_analog_output_1:
            return False
        if self.cl_analog_output_2 != other.cl_analog_output_2:
            return False
        if self.tl_analog_output != other.tl_analog_output:
            return False
        if self.gripper_rot_num != other.gripper_rot_num:
            return False
        if self.gripper_rot_speed != other.gripper_rot_speed:
            return False
        if self.gripper_rot_torque != other.gripper_rot_torque:
            return False
        if self.weldbreakoffstate != other.weldbreakoffstate:
            return False
        if self.weldarcstate != other.weldarcstate:
            return False
        if self.j1_tgt_tor != other.j1_tgt_tor:
            return False
        if self.j2_tgt_tor != other.j2_tgt_tor:
            return False
        if self.j3_tgt_tor != other.j3_tgt_tor:
            return False
        if self.j4_tgt_tor != other.j4_tgt_tor:
            return False
        if self.j5_tgt_tor != other.j5_tgt_tor:
            return False
        if self.j6_tgt_tor != other.j6_tgt_tor:
            return False
        if self.jwide_voltage_ctrl_box_temp != other.jwide_voltage_ctrl_box_temp:
            return False
        if self.wide_voltage_ctrl_box_fan_current != other.wide_voltage_ctrl_box_fan_current:
            return False
        if self.tool_coord_x != other.tool_coord_x:
            return False
        if self.tool_coord_y != other.tool_coord_y:
            return False
        if self.tool_coord_z != other.tool_coord_z:
            return False
        if self.tool_coord_a != other.tool_coord_a:
            return False
        if self.tool_coord_b != other.tool_coord_b:
            return False
        if self.tool_coord_c != other.tool_coord_c:
            return False
        if self.wobj_coord_x != other.wobj_coord_x:
            return False
        if self.wobj_coord_y != other.wobj_coord_y:
            return False
        if self.wobj_coord_z != other.wobj_coord_z:
            return False
        if self.wobj_coord_a != other.wobj_coord_a:
            return False
        if self.wobj_coord_b != other.wobj_coord_b:
            return False
        if self.wobj_coord_c != other.wobj_coord_c:
            return False
        if self.ex_tool_coord_x != other.ex_tool_coord_x:
            return False
        if self.ex_tool_coord_y != other.ex_tool_coord_y:
            return False
        if self.ex_tool_coord_z != other.ex_tool_coord_z:
            return False
        if self.ex_tool_coord_a != other.ex_tool_coord_a:
            return False
        if self.ex_tool_coord_b != other.ex_tool_coord_b:
            return False
        if self.ex_tool_coord_c != other.ex_tool_coord_c:
            return False
        if self.ex_axis_coord_x != other.ex_axis_coord_x:
            return False
        if self.ex_axis_coord_y != other.ex_axis_coord_y:
            return False
        if self.ex_axis_coord_z != other.ex_axis_coord_z:
            return False
        if self.ex_axis_coord_a != other.ex_axis_coord_a:
            return False
        if self.ex_axis_coord_b != other.ex_axis_coord_b:
            return False
        if self.ex_axis_coord_c != other.ex_axis_coord_c:
            return False
        if self.load != other.load:
            return False
        if self.load_cog_x != other.load_cog_x:
            return False
        if self.load_cog_y != other.load_cog_y:
            return False
        if self.load_cog_z != other.load_cog_z:
            return False
        if self.j1_last_servoj_target != other.j1_last_servoj_target:
            return False
        if self.j2_last_servoj_target != other.j2_last_servoj_target:
            return False
        if self.j3_last_servoj_target != other.j3_last_servoj_target:
            return False
        if self.j4_last_servoj_target != other.j4_last_servoj_target:
            return False
        if self.j5_last_servoj_target != other.j5_last_servoj_target:
            return False
        if self.j6_last_servoj_target != other.j6_last_servoj_target:
            return False
        if self.servoj_cmd_num != other.servoj_cmd_num:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def prg_state(self):
        """Message field 'prg_state'."""
        return self._prg_state

    @prg_state.setter
    def prg_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prg_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prg_state' field must be an unsigned integer in [0, 255]"
        self._prg_state = value

    @builtins.property
    def rbt_state(self):
        """Message field 'rbt_state'."""
        return self._rbt_state

    @rbt_state.setter
    def rbt_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rbt_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rbt_state' field must be an unsigned integer in [0, 255]"
        self._rbt_state = value

    @builtins.property
    def rbt_main_code(self):
        """Message field 'rbt_main_code'."""
        return self._rbt_main_code

    @rbt_main_code.setter
    def rbt_main_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rbt_main_code' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'rbt_main_code' field must be an unsigned integer in [0, 65535]"
        self._rbt_main_code = value

    @builtins.property
    def rbt_sub_code(self):
        """Message field 'rbt_sub_code'."""
        return self._rbt_sub_code

    @rbt_sub_code.setter
    def rbt_sub_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rbt_sub_code' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'rbt_sub_code' field must be an unsigned integer in [0, 65535]"
        self._rbt_sub_code = value

    @builtins.property
    def robot_mode(self):
        """Message field 'robot_mode'."""
        return self._robot_mode

    @robot_mode.setter
    def robot_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'robot_mode' field must be an unsigned integer in [0, 255]"
        self._robot_mode = value

    @builtins.property
    def j1_cur_pos(self):
        """Message field 'j1_cur_pos'."""
        return self._j1_cur_pos

    @j1_cur_pos.setter
    def j1_cur_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j1_cur_pos' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j1_cur_pos' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j1_cur_pos = value

    @builtins.property
    def j2_cur_pos(self):
        """Message field 'j2_cur_pos'."""
        return self._j2_cur_pos

    @j2_cur_pos.setter
    def j2_cur_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j2_cur_pos' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j2_cur_pos' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j2_cur_pos = value

    @builtins.property
    def j3_cur_pos(self):
        """Message field 'j3_cur_pos'."""
        return self._j3_cur_pos

    @j3_cur_pos.setter
    def j3_cur_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j3_cur_pos' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j3_cur_pos' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j3_cur_pos = value

    @builtins.property
    def j4_cur_pos(self):
        """Message field 'j4_cur_pos'."""
        return self._j4_cur_pos

    @j4_cur_pos.setter
    def j4_cur_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j4_cur_pos' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j4_cur_pos' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j4_cur_pos = value

    @builtins.property
    def j5_cur_pos(self):
        """Message field 'j5_cur_pos'."""
        return self._j5_cur_pos

    @j5_cur_pos.setter
    def j5_cur_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j5_cur_pos' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j5_cur_pos' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j5_cur_pos = value

    @builtins.property
    def j6_cur_pos(self):
        """Message field 'j6_cur_pos'."""
        return self._j6_cur_pos

    @j6_cur_pos.setter
    def j6_cur_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j6_cur_pos' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j6_cur_pos' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j6_cur_pos = value

    @builtins.property
    def cart_x_cur_pos(self):
        """Message field 'cart_x_cur_pos'."""
        return self._cart_x_cur_pos

    @cart_x_cur_pos.setter
    def cart_x_cur_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_x_cur_pos' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cart_x_cur_pos' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cart_x_cur_pos = value

    @builtins.property
    def cart_y_cur_pos(self):
        """Message field 'cart_y_cur_pos'."""
        return self._cart_y_cur_pos

    @cart_y_cur_pos.setter
    def cart_y_cur_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_y_cur_pos' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cart_y_cur_pos' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cart_y_cur_pos = value

    @builtins.property
    def cart_z_cur_pos(self):
        """Message field 'cart_z_cur_pos'."""
        return self._cart_z_cur_pos

    @cart_z_cur_pos.setter
    def cart_z_cur_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_z_cur_pos' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cart_z_cur_pos' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cart_z_cur_pos = value

    @builtins.property
    def cart_a_cur_pos(self):
        """Message field 'cart_a_cur_pos'."""
        return self._cart_a_cur_pos

    @cart_a_cur_pos.setter
    def cart_a_cur_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_a_cur_pos' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cart_a_cur_pos' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cart_a_cur_pos = value

    @builtins.property
    def cart_b_cur_pos(self):
        """Message field 'cart_b_cur_pos'."""
        return self._cart_b_cur_pos

    @cart_b_cur_pos.setter
    def cart_b_cur_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_b_cur_pos' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cart_b_cur_pos' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cart_b_cur_pos = value

    @builtins.property
    def cart_c_cur_pos(self):
        """Message field 'cart_c_cur_pos'."""
        return self._cart_c_cur_pos

    @cart_c_cur_pos.setter
    def cart_c_cur_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_c_cur_pos' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cart_c_cur_pos' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cart_c_cur_pos = value

    @builtins.property
    def flange_x_cur_pos(self):
        """Message field 'flange_x_cur_pos'."""
        return self._flange_x_cur_pos

    @flange_x_cur_pos.setter
    def flange_x_cur_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'flange_x_cur_pos' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'flange_x_cur_pos' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._flange_x_cur_pos = value

    @builtins.property
    def flange_y_cur_pos(self):
        """Message field 'flange_y_cur_pos'."""
        return self._flange_y_cur_pos

    @flange_y_cur_pos.setter
    def flange_y_cur_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'flange_y_cur_pos' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'flange_y_cur_pos' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._flange_y_cur_pos = value

    @builtins.property
    def flange_z_cur_pos(self):
        """Message field 'flange_z_cur_pos'."""
        return self._flange_z_cur_pos

    @flange_z_cur_pos.setter
    def flange_z_cur_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'flange_z_cur_pos' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'flange_z_cur_pos' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._flange_z_cur_pos = value

    @builtins.property
    def flange_a_cur_pos(self):
        """Message field 'flange_a_cur_pos'."""
        return self._flange_a_cur_pos

    @flange_a_cur_pos.setter
    def flange_a_cur_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'flange_a_cur_pos' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'flange_a_cur_pos' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._flange_a_cur_pos = value

    @builtins.property
    def flange_b_cur_pos(self):
        """Message field 'flange_b_cur_pos'."""
        return self._flange_b_cur_pos

    @flange_b_cur_pos.setter
    def flange_b_cur_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'flange_b_cur_pos' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'flange_b_cur_pos' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._flange_b_cur_pos = value

    @builtins.property
    def flange_c_cur_pos(self):
        """Message field 'flange_c_cur_pos'."""
        return self._flange_c_cur_pos

    @flange_c_cur_pos.setter
    def flange_c_cur_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'flange_c_cur_pos' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'flange_c_cur_pos' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._flange_c_cur_pos = value

    @builtins.property
    def j1_actual_qd(self):
        """Message field 'j1_actual_qd'."""
        return self._j1_actual_qd

    @j1_actual_qd.setter
    def j1_actual_qd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j1_actual_qd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j1_actual_qd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j1_actual_qd = value

    @builtins.property
    def j2_actual_qd(self):
        """Message field 'j2_actual_qd'."""
        return self._j2_actual_qd

    @j2_actual_qd.setter
    def j2_actual_qd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j2_actual_qd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j2_actual_qd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j2_actual_qd = value

    @builtins.property
    def j3_actual_qd(self):
        """Message field 'j3_actual_qd'."""
        return self._j3_actual_qd

    @j3_actual_qd.setter
    def j3_actual_qd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j3_actual_qd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j3_actual_qd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j3_actual_qd = value

    @builtins.property
    def j4_actual_qd(self):
        """Message field 'j4_actual_qd'."""
        return self._j4_actual_qd

    @j4_actual_qd.setter
    def j4_actual_qd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j4_actual_qd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j4_actual_qd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j4_actual_qd = value

    @builtins.property
    def j5_actual_qd(self):
        """Message field 'j5_actual_qd'."""
        return self._j5_actual_qd

    @j5_actual_qd.setter
    def j5_actual_qd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j5_actual_qd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j5_actual_qd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j5_actual_qd = value

    @builtins.property
    def j6_actual_qd(self):
        """Message field 'j6_actual_qd'."""
        return self._j6_actual_qd

    @j6_actual_qd.setter
    def j6_actual_qd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j6_actual_qd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j6_actual_qd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j6_actual_qd = value

    @builtins.property
    def j1_actual_qdd(self):
        """Message field 'j1_actual_qdd'."""
        return self._j1_actual_qdd

    @j1_actual_qdd.setter
    def j1_actual_qdd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j1_actual_qdd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j1_actual_qdd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j1_actual_qdd = value

    @builtins.property
    def j2_actual_qdd(self):
        """Message field 'j2_actual_qdd'."""
        return self._j2_actual_qdd

    @j2_actual_qdd.setter
    def j2_actual_qdd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j2_actual_qdd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j2_actual_qdd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j2_actual_qdd = value

    @builtins.property
    def j3_actual_qdd(self):
        """Message field 'j3_actual_qdd'."""
        return self._j3_actual_qdd

    @j3_actual_qdd.setter
    def j3_actual_qdd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j3_actual_qdd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j3_actual_qdd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j3_actual_qdd = value

    @builtins.property
    def j4_actual_qdd(self):
        """Message field 'j4_actual_qdd'."""
        return self._j4_actual_qdd

    @j4_actual_qdd.setter
    def j4_actual_qdd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j4_actual_qdd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j4_actual_qdd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j4_actual_qdd = value

    @builtins.property
    def j5_actual_qdd(self):
        """Message field 'j5_actual_qdd'."""
        return self._j5_actual_qdd

    @j5_actual_qdd.setter
    def j5_actual_qdd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j5_actual_qdd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j5_actual_qdd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j5_actual_qdd = value

    @builtins.property
    def j6_actual_qdd(self):
        """Message field 'j6_actual_qdd'."""
        return self._j6_actual_qdd

    @j6_actual_qdd.setter
    def j6_actual_qdd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j6_actual_qdd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j6_actual_qdd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j6_actual_qdd = value

    @builtins.property
    def cart_lin_cmd_speed(self):
        """Message field 'cart_lin_cmd_speed'."""
        return self._cart_lin_cmd_speed

    @cart_lin_cmd_speed.setter
    def cart_lin_cmd_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_lin_cmd_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cart_lin_cmd_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cart_lin_cmd_speed = value

    @builtins.property
    def cart_rot_cmd_speed(self):
        """Message field 'cart_rot_cmd_speed'."""
        return self._cart_rot_cmd_speed

    @cart_rot_cmd_speed.setter
    def cart_rot_cmd_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_rot_cmd_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cart_rot_cmd_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cart_rot_cmd_speed = value

    @builtins.property
    def cart_x_cmd_speed(self):
        """Message field 'cart_x_cmd_speed'."""
        return self._cart_x_cmd_speed

    @cart_x_cmd_speed.setter
    def cart_x_cmd_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_x_cmd_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cart_x_cmd_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cart_x_cmd_speed = value

    @builtins.property
    def cart_y_cmd_speed(self):
        """Message field 'cart_y_cmd_speed'."""
        return self._cart_y_cmd_speed

    @cart_y_cmd_speed.setter
    def cart_y_cmd_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_y_cmd_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cart_y_cmd_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cart_y_cmd_speed = value

    @builtins.property
    def cart_z_cmd_speed(self):
        """Message field 'cart_z_cmd_speed'."""
        return self._cart_z_cmd_speed

    @cart_z_cmd_speed.setter
    def cart_z_cmd_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_z_cmd_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cart_z_cmd_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cart_z_cmd_speed = value

    @builtins.property
    def cart_a_cmd_speed(self):
        """Message field 'cart_a_cmd_speed'."""
        return self._cart_a_cmd_speed

    @cart_a_cmd_speed.setter
    def cart_a_cmd_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_a_cmd_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cart_a_cmd_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cart_a_cmd_speed = value

    @builtins.property
    def cart_b_cmd_speed(self):
        """Message field 'cart_b_cmd_speed'."""
        return self._cart_b_cmd_speed

    @cart_b_cmd_speed.setter
    def cart_b_cmd_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_b_cmd_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cart_b_cmd_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cart_b_cmd_speed = value

    @builtins.property
    def cart_c_cmd_speed(self):
        """Message field 'cart_c_cmd_speed'."""
        return self._cart_c_cmd_speed

    @cart_c_cmd_speed.setter
    def cart_c_cmd_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_c_cmd_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cart_c_cmd_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cart_c_cmd_speed = value

    @builtins.property
    def cart_lin_cur_speed(self):
        """Message field 'cart_lin_cur_speed'."""
        return self._cart_lin_cur_speed

    @cart_lin_cur_speed.setter
    def cart_lin_cur_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_lin_cur_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cart_lin_cur_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cart_lin_cur_speed = value

    @builtins.property
    def cart_rot_cur_speed(self):
        """Message field 'cart_rot_cur_speed'."""
        return self._cart_rot_cur_speed

    @cart_rot_cur_speed.setter
    def cart_rot_cur_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_rot_cur_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cart_rot_cur_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cart_rot_cur_speed = value

    @builtins.property
    def cart_x_cur_speed(self):
        """Message field 'cart_x_cur_speed'."""
        return self._cart_x_cur_speed

    @cart_x_cur_speed.setter
    def cart_x_cur_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_x_cur_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cart_x_cur_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cart_x_cur_speed = value

    @builtins.property
    def cart_y_cur_speed(self):
        """Message field 'cart_y_cur_speed'."""
        return self._cart_y_cur_speed

    @cart_y_cur_speed.setter
    def cart_y_cur_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_y_cur_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cart_y_cur_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cart_y_cur_speed = value

    @builtins.property
    def cart_z_cur_speed(self):
        """Message field 'cart_z_cur_speed'."""
        return self._cart_z_cur_speed

    @cart_z_cur_speed.setter
    def cart_z_cur_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_z_cur_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cart_z_cur_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cart_z_cur_speed = value

    @builtins.property
    def cart_a_cur_speed(self):
        """Message field 'cart_a_cur_speed'."""
        return self._cart_a_cur_speed

    @cart_a_cur_speed.setter
    def cart_a_cur_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_a_cur_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cart_a_cur_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cart_a_cur_speed = value

    @builtins.property
    def cart_b_cur_speed(self):
        """Message field 'cart_b_cur_speed'."""
        return self._cart_b_cur_speed

    @cart_b_cur_speed.setter
    def cart_b_cur_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_b_cur_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cart_b_cur_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cart_b_cur_speed = value

    @builtins.property
    def cart_c_cur_speed(self):
        """Message field 'cart_c_cur_speed'."""
        return self._cart_c_cur_speed

    @cart_c_cur_speed.setter
    def cart_c_cur_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_c_cur_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cart_c_cur_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cart_c_cur_speed = value

    @builtins.property
    def j1_cur_tor(self):
        """Message field 'j1_cur_tor'."""
        return self._j1_cur_tor

    @j1_cur_tor.setter
    def j1_cur_tor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j1_cur_tor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j1_cur_tor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j1_cur_tor = value

    @builtins.property
    def j2_cur_tor(self):
        """Message field 'j2_cur_tor'."""
        return self._j2_cur_tor

    @j2_cur_tor.setter
    def j2_cur_tor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j2_cur_tor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j2_cur_tor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j2_cur_tor = value

    @builtins.property
    def j3_cur_tor(self):
        """Message field 'j3_cur_tor'."""
        return self._j3_cur_tor

    @j3_cur_tor.setter
    def j3_cur_tor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j3_cur_tor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j3_cur_tor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j3_cur_tor = value

    @builtins.property
    def j4_cur_tor(self):
        """Message field 'j4_cur_tor'."""
        return self._j4_cur_tor

    @j4_cur_tor.setter
    def j4_cur_tor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j4_cur_tor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j4_cur_tor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j4_cur_tor = value

    @builtins.property
    def j5_cur_tor(self):
        """Message field 'j5_cur_tor'."""
        return self._j5_cur_tor

    @j5_cur_tor.setter
    def j5_cur_tor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j5_cur_tor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j5_cur_tor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j5_cur_tor = value

    @builtins.property
    def j6_cur_tor(self):
        """Message field 'j6_cur_tor'."""
        return self._j6_cur_tor

    @j6_cur_tor.setter
    def j6_cur_tor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j6_cur_tor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j6_cur_tor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j6_cur_tor = value

    @builtins.property
    def tool_num(self):
        """Message field 'tool_num'."""
        return self._tool_num

    @tool_num.setter
    def tool_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tool_num' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tool_num' field must be an unsigned integer in [0, 255]"
        self._tool_num = value

    @builtins.property
    def work_num(self):
        """Message field 'work_num'."""
        return self._work_num

    @work_num.setter
    def work_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'work_num' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'work_num' field must be an unsigned integer in [0, 255]"
        self._work_num = value

    @builtins.property
    def dgt_output_h(self):
        """Message field 'dgt_output_h'."""
        return self._dgt_output_h

    @dgt_output_h.setter
    def dgt_output_h(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dgt_output_h' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dgt_output_h' field must be an unsigned integer in [0, 255]"
        self._dgt_output_h = value

    @builtins.property
    def dgt_output_l(self):
        """Message field 'dgt_output_l'."""
        return self._dgt_output_l

    @dgt_output_l.setter
    def dgt_output_l(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dgt_output_l' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dgt_output_l' field must be an unsigned integer in [0, 255]"
        self._dgt_output_l = value

    @builtins.property
    def tl_dgt_output_l(self):
        """Message field 'tl_dgt_output_l'."""
        return self._tl_dgt_output_l

    @tl_dgt_output_l.setter
    def tl_dgt_output_l(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tl_dgt_output_l' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tl_dgt_output_l' field must be an unsigned integer in [0, 255]"
        self._tl_dgt_output_l = value

    @builtins.property
    def dgt_input_h(self):
        """Message field 'dgt_input_h'."""
        return self._dgt_input_h

    @dgt_input_h.setter
    def dgt_input_h(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dgt_input_h' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dgt_input_h' field must be an unsigned integer in [0, 255]"
        self._dgt_input_h = value

    @builtins.property
    def dgt_input_l(self):
        """Message field 'dgt_input_l'."""
        return self._dgt_input_l

    @dgt_input_l.setter
    def dgt_input_l(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dgt_input_l' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dgt_input_l' field must be an unsigned integer in [0, 255]"
        self._dgt_input_l = value

    @builtins.property
    def tl_dgt_input_l(self):
        """Message field 'tl_dgt_input_l'."""
        return self._tl_dgt_input_l

    @tl_dgt_input_l.setter
    def tl_dgt_input_l(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tl_dgt_input_l' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tl_dgt_input_l' field must be an unsigned integer in [0, 255]"
        self._tl_dgt_input_l = value

    @builtins.property
    def cl_analog_input_1(self):
        """Message field 'cl_analog_input_1'."""
        return self._cl_analog_input_1

    @cl_analog_input_1.setter
    def cl_analog_input_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cl_analog_input_1' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'cl_analog_input_1' field must be an unsigned integer in [0, 65535]"
        self._cl_analog_input_1 = value

    @builtins.property
    def cl_analog_input_2(self):
        """Message field 'cl_analog_input_2'."""
        return self._cl_analog_input_2

    @cl_analog_input_2.setter
    def cl_analog_input_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cl_analog_input_2' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'cl_analog_input_2' field must be an unsigned integer in [0, 65535]"
        self._cl_analog_input_2 = value

    @builtins.property
    def tl_anglog_input(self):
        """Message field 'tl_anglog_input'."""
        return self._tl_anglog_input

    @tl_anglog_input.setter
    def tl_anglog_input(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tl_anglog_input' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'tl_anglog_input' field must be an unsigned integer in [0, 65535]"
        self._tl_anglog_input = value

    @builtins.property
    def ft_fx_raw_data(self):
        """Message field 'ft_fx_raw_data'."""
        return self._ft_fx_raw_data

    @ft_fx_raw_data.setter
    def ft_fx_raw_data(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ft_fx_raw_data' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ft_fx_raw_data' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ft_fx_raw_data = value

    @builtins.property
    def ft_fy_raw_data(self):
        """Message field 'ft_fy_raw_data'."""
        return self._ft_fy_raw_data

    @ft_fy_raw_data.setter
    def ft_fy_raw_data(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ft_fy_raw_data' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ft_fy_raw_data' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ft_fy_raw_data = value

    @builtins.property
    def ft_fz_raw_data(self):
        """Message field 'ft_fz_raw_data'."""
        return self._ft_fz_raw_data

    @ft_fz_raw_data.setter
    def ft_fz_raw_data(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ft_fz_raw_data' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ft_fz_raw_data' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ft_fz_raw_data = value

    @builtins.property
    def ft_tx_raw_data(self):
        """Message field 'ft_tx_raw_data'."""
        return self._ft_tx_raw_data

    @ft_tx_raw_data.setter
    def ft_tx_raw_data(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ft_tx_raw_data' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ft_tx_raw_data' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ft_tx_raw_data = value

    @builtins.property
    def ft_ty_raw_data(self):
        """Message field 'ft_ty_raw_data'."""
        return self._ft_ty_raw_data

    @ft_ty_raw_data.setter
    def ft_ty_raw_data(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ft_ty_raw_data' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ft_ty_raw_data' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ft_ty_raw_data = value

    @builtins.property
    def ft_tz_raw_data(self):
        """Message field 'ft_tz_raw_data'."""
        return self._ft_tz_raw_data

    @ft_tz_raw_data.setter
    def ft_tz_raw_data(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ft_tz_raw_data' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ft_tz_raw_data' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ft_tz_raw_data = value

    @builtins.property
    def ft_fx_data(self):
        """Message field 'ft_fx_data'."""
        return self._ft_fx_data

    @ft_fx_data.setter
    def ft_fx_data(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ft_fx_data' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ft_fx_data' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ft_fx_data = value

    @builtins.property
    def ft_fy_data(self):
        """Message field 'ft_fy_data'."""
        return self._ft_fy_data

    @ft_fy_data.setter
    def ft_fy_data(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ft_fy_data' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ft_fy_data' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ft_fy_data = value

    @builtins.property
    def ft_fz_data(self):
        """Message field 'ft_fz_data'."""
        return self._ft_fz_data

    @ft_fz_data.setter
    def ft_fz_data(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ft_fz_data' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ft_fz_data' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ft_fz_data = value

    @builtins.property
    def ft_tx_data(self):
        """Message field 'ft_tx_data'."""
        return self._ft_tx_data

    @ft_tx_data.setter
    def ft_tx_data(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ft_tx_data' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ft_tx_data' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ft_tx_data = value

    @builtins.property
    def ft_ty_data(self):
        """Message field 'ft_ty_data'."""
        return self._ft_ty_data

    @ft_ty_data.setter
    def ft_ty_data(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ft_ty_data' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ft_ty_data' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ft_ty_data = value

    @builtins.property
    def ft_tz_data(self):
        """Message field 'ft_tz_data'."""
        return self._ft_tz_data

    @ft_tz_data.setter
    def ft_tz_data(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ft_tz_data' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ft_tz_data' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ft_tz_data = value

    @builtins.property
    def ft_actstatus(self):
        """Message field 'ft_actstatus'."""
        return self._ft_actstatus

    @ft_actstatus.setter
    def ft_actstatus(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ft_actstatus' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ft_actstatus' field must be an unsigned integer in [0, 255]"
        self._ft_actstatus = value

    @builtins.property
    def emg(self):
        """Message field 'emg'."""
        return self._emg

    @emg.setter
    def emg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'emg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'emg' field must be an unsigned integer in [0, 255]"
        self._emg = value

    @builtins.property
    def motion_done(self):
        """Message field 'motion_done'."""
        return self._motion_done

    @motion_done.setter
    def motion_done(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motion_done' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motion_done' field must be an unsigned integer in [0, 255]"
        self._motion_done = value

    @builtins.property
    def grip_motion_done(self):
        """Message field 'grip_motion_done'."""
        return self._grip_motion_done

    @grip_motion_done.setter
    def grip_motion_done(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'grip_motion_done' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'grip_motion_done' field must be an unsigned integer in [0, 255]"
        self._grip_motion_done = value

    @builtins.property
    def mc_queue_len(self):
        """Message field 'mc_queue_len'."""
        return self._mc_queue_len

    @mc_queue_len.setter
    def mc_queue_len(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mc_queue_len' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'mc_queue_len' field must be an unsigned integer in [0, 65535]"
        self._mc_queue_len = value

    @builtins.property
    def collision_err(self):
        """Message field 'collision_err'."""
        return self._collision_err

    @collision_err.setter
    def collision_err(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'collision_err' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'collision_err' field must be an unsigned integer in [0, 255]"
        self._collision_err = value

    @builtins.property
    def trajectory_pnum(self):
        """Message field 'trajectory_pnum'."""
        return self._trajectory_pnum

    @trajectory_pnum.setter
    def trajectory_pnum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trajectory_pnum' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'trajectory_pnum' field must be an unsigned integer in [0, 65535]"
        self._trajectory_pnum = value

    @builtins.property
    def safety_stop1_state(self):
        """Message field 'safety_stop1_state'."""
        return self._safety_stop1_state

    @safety_stop1_state.setter
    def safety_stop1_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'safety_stop1_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'safety_stop1_state' field must be an unsigned integer in [0, 255]"
        self._safety_stop1_state = value

    @builtins.property
    def safety_stop2_state(self):
        """Message field 'safety_stop2_state'."""
        return self._safety_stop2_state

    @safety_stop2_state.setter
    def safety_stop2_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'safety_stop2_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'safety_stop2_state' field must be an unsigned integer in [0, 255]"
        self._safety_stop2_state = value

    @builtins.property
    def gripper_fault_id(self):
        """Message field 'gripper_fault_id'."""
        return self._gripper_fault_id

    @gripper_fault_id.setter
    def gripper_fault_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gripper_fault_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gripper_fault_id' field must be an unsigned integer in [0, 255]"
        self._gripper_fault_id = value

    @builtins.property
    def grippererro(self):
        """Message field 'grippererro'."""
        return self._grippererro

    @grippererro.setter
    def grippererro(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'grippererro' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'grippererro' field must be an unsigned integer in [0, 65535]"
        self._grippererro = value

    @builtins.property
    def gripper_active(self):
        """Message field 'gripper_active'."""
        return self._gripper_active

    @gripper_active.setter
    def gripper_active(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gripper_active' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'gripper_active' field must be an unsigned integer in [0, 65535]"
        self._gripper_active = value

    @builtins.property
    def gripper_position(self):
        """Message field 'gripper_position'."""
        return self._gripper_position

    @gripper_position.setter
    def gripper_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gripper_position' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gripper_position' field must be an unsigned integer in [0, 255]"
        self._gripper_position = value

    @builtins.property
    def gripper_speed(self):
        """Message field 'gripper_speed'."""
        return self._gripper_speed

    @gripper_speed.setter
    def gripper_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gripper_speed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gripper_speed' field must be an unsigned integer in [0, 255]"
        self._gripper_speed = value

    @builtins.property
    def gripper_current(self):
        """Message field 'gripper_current'."""
        return self._gripper_current

    @gripper_current.setter
    def gripper_current(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gripper_current' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gripper_current' field must be an unsigned integer in [0, 255]"
        self._gripper_current = value

    @builtins.property
    def gripper_temp(self):
        """Message field 'gripper_temp'."""
        return self._gripper_temp

    @gripper_temp.setter
    def gripper_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gripper_temp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'gripper_temp' field must be an unsigned integer in [0, 65535]"
        self._gripper_temp = value

    @builtins.property
    def gripper_voltage(self):
        """Message field 'gripper_voltage'."""
        return self._gripper_voltage

    @gripper_voltage.setter
    def gripper_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gripper_voltage' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'gripper_voltage' field must be an unsigned integer in [0, 65535]"
        self._gripper_voltage = value

    @builtins.property
    def aux_servo_id(self):
        """Message field 'aux_servo_id'."""
        return self._aux_servo_id

    @aux_servo_id.setter
    def aux_servo_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aux_servo_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aux_servo_id' field must be an unsigned integer in [0, 255]"
        self._aux_servo_id = value

    @builtins.property
    def aux_servo_err(self):
        """Message field 'aux_servo_err'."""
        return self._aux_servo_err

    @aux_servo_err.setter
    def aux_servo_err(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aux_servo_err' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'aux_servo_err' field must be an unsigned integer in [0, 65535]"
        self._aux_servo_err = value

    @builtins.property
    def aux_servo_state(self):
        """Message field 'aux_servo_state'."""
        return self._aux_servo_state

    @aux_servo_state.setter
    def aux_servo_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aux_servo_state' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'aux_servo_state' field must be an unsigned integer in [0, 65535]"
        self._aux_servo_state = value

    @builtins.property
    def aux_servo_pos(self):
        """Message field 'aux_servo_pos'."""
        return self._aux_servo_pos

    @aux_servo_pos.setter
    def aux_servo_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'aux_servo_pos' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'aux_servo_pos' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._aux_servo_pos = value

    @builtins.property
    def aux_servo_vel(self):
        """Message field 'aux_servo_vel'."""
        return self._aux_servo_vel

    @aux_servo_vel.setter
    def aux_servo_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'aux_servo_vel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'aux_servo_vel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._aux_servo_vel = value

    @builtins.property
    def aux_servo_torque(self):
        """Message field 'aux_servo_torque'."""
        return self._aux_servo_torque

    @aux_servo_torque.setter
    def aux_servo_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'aux_servo_torque' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'aux_servo_torque' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._aux_servo_torque = value

    @builtins.property
    def ext_di_state_1(self):
        """Message field 'ext_di_state_1'."""
        return self._ext_di_state_1

    @ext_di_state_1.setter
    def ext_di_state_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_di_state_1' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ext_di_state_1' field must be an unsigned integer in [0, 65535]"
        self._ext_di_state_1 = value

    @builtins.property
    def ext_di_state_2(self):
        """Message field 'ext_di_state_2'."""
        return self._ext_di_state_2

    @ext_di_state_2.setter
    def ext_di_state_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_di_state_2' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ext_di_state_2' field must be an unsigned integer in [0, 65535]"
        self._ext_di_state_2 = value

    @builtins.property
    def ext_di_state_3(self):
        """Message field 'ext_di_state_3'."""
        return self._ext_di_state_3

    @ext_di_state_3.setter
    def ext_di_state_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_di_state_3' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ext_di_state_3' field must be an unsigned integer in [0, 65535]"
        self._ext_di_state_3 = value

    @builtins.property
    def ext_di_state_4(self):
        """Message field 'ext_di_state_4'."""
        return self._ext_di_state_4

    @ext_di_state_4.setter
    def ext_di_state_4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_di_state_4' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ext_di_state_4' field must be an unsigned integer in [0, 65535]"
        self._ext_di_state_4 = value

    @builtins.property
    def ext_di_state_5(self):
        """Message field 'ext_di_state_5'."""
        return self._ext_di_state_5

    @ext_di_state_5.setter
    def ext_di_state_5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_di_state_5' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ext_di_state_5' field must be an unsigned integer in [0, 65535]"
        self._ext_di_state_5 = value

    @builtins.property
    def ext_di_state_6(self):
        """Message field 'ext_di_state_6'."""
        return self._ext_di_state_6

    @ext_di_state_6.setter
    def ext_di_state_6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_di_state_6' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ext_di_state_6' field must be an unsigned integer in [0, 65535]"
        self._ext_di_state_6 = value

    @builtins.property
    def ext_di_state_7(self):
        """Message field 'ext_di_state_7'."""
        return self._ext_di_state_7

    @ext_di_state_7.setter
    def ext_di_state_7(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_di_state_7' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ext_di_state_7' field must be an unsigned integer in [0, 65535]"
        self._ext_di_state_7 = value

    @builtins.property
    def ext_di_state_8(self):
        """Message field 'ext_di_state_8'."""
        return self._ext_di_state_8

    @ext_di_state_8.setter
    def ext_di_state_8(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_di_state_8' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ext_di_state_8' field must be an unsigned integer in [0, 65535]"
        self._ext_di_state_8 = value

    @builtins.property
    def ext_do_state_1(self):
        """Message field 'ext_do_state_1'."""
        return self._ext_do_state_1

    @ext_do_state_1.setter
    def ext_do_state_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_do_state_1' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ext_do_state_1' field must be an unsigned integer in [0, 65535]"
        self._ext_do_state_1 = value

    @builtins.property
    def ext_do_state_2(self):
        """Message field 'ext_do_state_2'."""
        return self._ext_do_state_2

    @ext_do_state_2.setter
    def ext_do_state_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_do_state_2' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ext_do_state_2' field must be an unsigned integer in [0, 65535]"
        self._ext_do_state_2 = value

    @builtins.property
    def ext_do_state_3(self):
        """Message field 'ext_do_state_3'."""
        return self._ext_do_state_3

    @ext_do_state_3.setter
    def ext_do_state_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_do_state_3' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ext_do_state_3' field must be an unsigned integer in [0, 65535]"
        self._ext_do_state_3 = value

    @builtins.property
    def ext_do_state_4(self):
        """Message field 'ext_do_state_4'."""
        return self._ext_do_state_4

    @ext_do_state_4.setter
    def ext_do_state_4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_do_state_4' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ext_do_state_4' field must be an unsigned integer in [0, 65535]"
        self._ext_do_state_4 = value

    @builtins.property
    def ext_do_state_5(self):
        """Message field 'ext_do_state_5'."""
        return self._ext_do_state_5

    @ext_do_state_5.setter
    def ext_do_state_5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_do_state_5' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ext_do_state_5' field must be an unsigned integer in [0, 65535]"
        self._ext_do_state_5 = value

    @builtins.property
    def ext_do_state_6(self):
        """Message field 'ext_do_state_6'."""
        return self._ext_do_state_6

    @ext_do_state_6.setter
    def ext_do_state_6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_do_state_6' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ext_do_state_6' field must be an unsigned integer in [0, 65535]"
        self._ext_do_state_6 = value

    @builtins.property
    def ext_do_state_7(self):
        """Message field 'ext_do_state_7'."""
        return self._ext_do_state_7

    @ext_do_state_7.setter
    def ext_do_state_7(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_do_state_7' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ext_do_state_7' field must be an unsigned integer in [0, 65535]"
        self._ext_do_state_7 = value

    @builtins.property
    def ext_do_state_8(self):
        """Message field 'ext_do_state_8'."""
        return self._ext_do_state_8

    @ext_do_state_8.setter
    def ext_do_state_8(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_do_state_8' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ext_do_state_8' field must be an unsigned integer in [0, 65535]"
        self._ext_do_state_8 = value

    @builtins.property
    def ext_ai_state_1(self):
        """Message field 'ext_ai_state_1'."""
        return self._ext_ai_state_1

    @ext_ai_state_1.setter
    def ext_ai_state_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_ai_state_1' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ext_ai_state_1' field must be an unsigned integer in [0, 65535]"
        self._ext_ai_state_1 = value

    @builtins.property
    def ext_ai_state_2(self):
        """Message field 'ext_ai_state_2'."""
        return self._ext_ai_state_2

    @ext_ai_state_2.setter
    def ext_ai_state_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_ai_state_2' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ext_ai_state_2' field must be an unsigned integer in [0, 65535]"
        self._ext_ai_state_2 = value

    @builtins.property
    def ext_ai_state_3(self):
        """Message field 'ext_ai_state_3'."""
        return self._ext_ai_state_3

    @ext_ai_state_3.setter
    def ext_ai_state_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_ai_state_3' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ext_ai_state_3' field must be an unsigned integer in [0, 65535]"
        self._ext_ai_state_3 = value

    @builtins.property
    def ext_ai_state_4(self):
        """Message field 'ext_ai_state_4'."""
        return self._ext_ai_state_4

    @ext_ai_state_4.setter
    def ext_ai_state_4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_ai_state_4' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ext_ai_state_4' field must be an unsigned integer in [0, 65535]"
        self._ext_ai_state_4 = value

    @builtins.property
    def ext_ao_state_1(self):
        """Message field 'ext_ao_state_1'."""
        return self._ext_ao_state_1

    @ext_ao_state_1.setter
    def ext_ao_state_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_ao_state_1' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ext_ao_state_1' field must be an unsigned integer in [0, 65535]"
        self._ext_ao_state_1 = value

    @builtins.property
    def ext_ao_state_2(self):
        """Message field 'ext_ao_state_2'."""
        return self._ext_ao_state_2

    @ext_ao_state_2.setter
    def ext_ao_state_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_ao_state_2' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ext_ao_state_2' field must be an unsigned integer in [0, 65535]"
        self._ext_ao_state_2 = value

    @builtins.property
    def ext_ao_state_3(self):
        """Message field 'ext_ao_state_3'."""
        return self._ext_ao_state_3

    @ext_ao_state_3.setter
    def ext_ao_state_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_ao_state_3' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ext_ao_state_3' field must be an unsigned integer in [0, 65535]"
        self._ext_ao_state_3 = value

    @builtins.property
    def ext_ao_state_4(self):
        """Message field 'ext_ao_state_4'."""
        return self._ext_ao_state_4

    @ext_ao_state_4.setter
    def ext_ao_state_4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_ao_state_4' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ext_ao_state_4' field must be an unsigned integer in [0, 65535]"
        self._ext_ao_state_4 = value

    @builtins.property
    def rbt_enable_state(self):
        """Message field 'rbt_enable_state'."""
        return self._rbt_enable_state

    @rbt_enable_state.setter
    def rbt_enable_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rbt_enable_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rbt_enable_state' field must be an unsigned integer in [0, 255]"
        self._rbt_enable_state = value

    @builtins.property
    def end_lua_err_code(self):
        """Message field 'end_lua_err_code'."""
        return self._end_lua_err_code

    @end_lua_err_code.setter
    def end_lua_err_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'end_lua_err_code' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'end_lua_err_code' field must be an unsigned integer in [0, 65535]"
        self._end_lua_err_code = value

    @builtins.property
    def cl_analog_output_1(self):
        """Message field 'cl_analog_output_1'."""
        return self._cl_analog_output_1

    @cl_analog_output_1.setter
    def cl_analog_output_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cl_analog_output_1' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'cl_analog_output_1' field must be an unsigned integer in [0, 65535]"
        self._cl_analog_output_1 = value

    @builtins.property
    def cl_analog_output_2(self):
        """Message field 'cl_analog_output_2'."""
        return self._cl_analog_output_2

    @cl_analog_output_2.setter
    def cl_analog_output_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cl_analog_output_2' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'cl_analog_output_2' field must be an unsigned integer in [0, 65535]"
        self._cl_analog_output_2 = value

    @builtins.property
    def tl_analog_output(self):
        """Message field 'tl_analog_output'."""
        return self._tl_analog_output

    @tl_analog_output.setter
    def tl_analog_output(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tl_analog_output' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'tl_analog_output' field must be an unsigned integer in [0, 65535]"
        self._tl_analog_output = value

    @builtins.property
    def gripper_rot_num(self):
        """Message field 'gripper_rot_num'."""
        return self._gripper_rot_num

    @gripper_rot_num.setter
    def gripper_rot_num(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gripper_rot_num' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gripper_rot_num' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gripper_rot_num = value

    @builtins.property
    def gripper_rot_speed(self):
        """Message field 'gripper_rot_speed'."""
        return self._gripper_rot_speed

    @gripper_rot_speed.setter
    def gripper_rot_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gripper_rot_speed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gripper_rot_speed' field must be an unsigned integer in [0, 255]"
        self._gripper_rot_speed = value

    @builtins.property
    def gripper_rot_torque(self):
        """Message field 'gripper_rot_torque'."""
        return self._gripper_rot_torque

    @gripper_rot_torque.setter
    def gripper_rot_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gripper_rot_torque' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gripper_rot_torque' field must be an unsigned integer in [0, 255]"
        self._gripper_rot_torque = value

    @builtins.property
    def weldbreakoffstate(self):
        """Message field 'weldbreakoffstate'."""
        return self._weldbreakoffstate

    @weldbreakoffstate.setter
    def weldbreakoffstate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'weldbreakoffstate' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'weldbreakoffstate' field must be an unsigned integer in [0, 255]"
        self._weldbreakoffstate = value

    @builtins.property
    def weldarcstate(self):
        """Message field 'weldarcstate'."""
        return self._weldarcstate

    @weldarcstate.setter
    def weldarcstate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'weldarcstate' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'weldarcstate' field must be an unsigned integer in [0, 255]"
        self._weldarcstate = value

    @builtins.property
    def j1_tgt_tor(self):
        """Message field 'j1_tgt_tor'."""
        return self._j1_tgt_tor

    @j1_tgt_tor.setter
    def j1_tgt_tor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j1_tgt_tor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j1_tgt_tor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j1_tgt_tor = value

    @builtins.property
    def j2_tgt_tor(self):
        """Message field 'j2_tgt_tor'."""
        return self._j2_tgt_tor

    @j2_tgt_tor.setter
    def j2_tgt_tor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j2_tgt_tor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j2_tgt_tor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j2_tgt_tor = value

    @builtins.property
    def j3_tgt_tor(self):
        """Message field 'j3_tgt_tor'."""
        return self._j3_tgt_tor

    @j3_tgt_tor.setter
    def j3_tgt_tor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j3_tgt_tor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j3_tgt_tor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j3_tgt_tor = value

    @builtins.property
    def j4_tgt_tor(self):
        """Message field 'j4_tgt_tor'."""
        return self._j4_tgt_tor

    @j4_tgt_tor.setter
    def j4_tgt_tor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j4_tgt_tor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j4_tgt_tor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j4_tgt_tor = value

    @builtins.property
    def j5_tgt_tor(self):
        """Message field 'j5_tgt_tor'."""
        return self._j5_tgt_tor

    @j5_tgt_tor.setter
    def j5_tgt_tor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j5_tgt_tor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j5_tgt_tor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j5_tgt_tor = value

    @builtins.property
    def j6_tgt_tor(self):
        """Message field 'j6_tgt_tor'."""
        return self._j6_tgt_tor

    @j6_tgt_tor.setter
    def j6_tgt_tor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j6_tgt_tor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j6_tgt_tor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j6_tgt_tor = value

    @builtins.property
    def jwide_voltage_ctrl_box_temp(self):
        """Message field 'jwide_voltage_ctrl_box_temp'."""
        return self._jwide_voltage_ctrl_box_temp

    @jwide_voltage_ctrl_box_temp.setter
    def jwide_voltage_ctrl_box_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'jwide_voltage_ctrl_box_temp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'jwide_voltage_ctrl_box_temp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._jwide_voltage_ctrl_box_temp = value

    @builtins.property
    def wide_voltage_ctrl_box_fan_current(self):
        """Message field 'wide_voltage_ctrl_box_fan_current'."""
        return self._wide_voltage_ctrl_box_fan_current

    @wide_voltage_ctrl_box_fan_current.setter
    def wide_voltage_ctrl_box_fan_current(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wide_voltage_ctrl_box_fan_current' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'wide_voltage_ctrl_box_fan_current' field must be an unsigned integer in [0, 65535]"
        self._wide_voltage_ctrl_box_fan_current = value

    @builtins.property
    def tool_coord_x(self):
        """Message field 'tool_coord_x'."""
        return self._tool_coord_x

    @tool_coord_x.setter
    def tool_coord_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tool_coord_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tool_coord_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tool_coord_x = value

    @builtins.property
    def tool_coord_y(self):
        """Message field 'tool_coord_y'."""
        return self._tool_coord_y

    @tool_coord_y.setter
    def tool_coord_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tool_coord_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tool_coord_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tool_coord_y = value

    @builtins.property
    def tool_coord_z(self):
        """Message field 'tool_coord_z'."""
        return self._tool_coord_z

    @tool_coord_z.setter
    def tool_coord_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tool_coord_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tool_coord_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tool_coord_z = value

    @builtins.property
    def tool_coord_a(self):
        """Message field 'tool_coord_a'."""
        return self._tool_coord_a

    @tool_coord_a.setter
    def tool_coord_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tool_coord_a' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tool_coord_a' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tool_coord_a = value

    @builtins.property
    def tool_coord_b(self):
        """Message field 'tool_coord_b'."""
        return self._tool_coord_b

    @tool_coord_b.setter
    def tool_coord_b(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tool_coord_b' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tool_coord_b' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tool_coord_b = value

    @builtins.property
    def tool_coord_c(self):
        """Message field 'tool_coord_c'."""
        return self._tool_coord_c

    @tool_coord_c.setter
    def tool_coord_c(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tool_coord_c' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tool_coord_c' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tool_coord_c = value

    @builtins.property
    def wobj_coord_x(self):
        """Message field 'wobj_coord_x'."""
        return self._wobj_coord_x

    @wobj_coord_x.setter
    def wobj_coord_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wobj_coord_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wobj_coord_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wobj_coord_x = value

    @builtins.property
    def wobj_coord_y(self):
        """Message field 'wobj_coord_y'."""
        return self._wobj_coord_y

    @wobj_coord_y.setter
    def wobj_coord_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wobj_coord_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wobj_coord_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wobj_coord_y = value

    @builtins.property
    def wobj_coord_z(self):
        """Message field 'wobj_coord_z'."""
        return self._wobj_coord_z

    @wobj_coord_z.setter
    def wobj_coord_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wobj_coord_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wobj_coord_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wobj_coord_z = value

    @builtins.property
    def wobj_coord_a(self):
        """Message field 'wobj_coord_a'."""
        return self._wobj_coord_a

    @wobj_coord_a.setter
    def wobj_coord_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wobj_coord_a' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wobj_coord_a' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wobj_coord_a = value

    @builtins.property
    def wobj_coord_b(self):
        """Message field 'wobj_coord_b'."""
        return self._wobj_coord_b

    @wobj_coord_b.setter
    def wobj_coord_b(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wobj_coord_b' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wobj_coord_b' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wobj_coord_b = value

    @builtins.property
    def wobj_coord_c(self):
        """Message field 'wobj_coord_c'."""
        return self._wobj_coord_c

    @wobj_coord_c.setter
    def wobj_coord_c(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wobj_coord_c' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wobj_coord_c' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wobj_coord_c = value

    @builtins.property
    def ex_tool_coord_x(self):
        """Message field 'ex_tool_coord_x'."""
        return self._ex_tool_coord_x

    @ex_tool_coord_x.setter
    def ex_tool_coord_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ex_tool_coord_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ex_tool_coord_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ex_tool_coord_x = value

    @builtins.property
    def ex_tool_coord_y(self):
        """Message field 'ex_tool_coord_y'."""
        return self._ex_tool_coord_y

    @ex_tool_coord_y.setter
    def ex_tool_coord_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ex_tool_coord_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ex_tool_coord_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ex_tool_coord_y = value

    @builtins.property
    def ex_tool_coord_z(self):
        """Message field 'ex_tool_coord_z'."""
        return self._ex_tool_coord_z

    @ex_tool_coord_z.setter
    def ex_tool_coord_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ex_tool_coord_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ex_tool_coord_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ex_tool_coord_z = value

    @builtins.property
    def ex_tool_coord_a(self):
        """Message field 'ex_tool_coord_a'."""
        return self._ex_tool_coord_a

    @ex_tool_coord_a.setter
    def ex_tool_coord_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ex_tool_coord_a' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ex_tool_coord_a' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ex_tool_coord_a = value

    @builtins.property
    def ex_tool_coord_b(self):
        """Message field 'ex_tool_coord_b'."""
        return self._ex_tool_coord_b

    @ex_tool_coord_b.setter
    def ex_tool_coord_b(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ex_tool_coord_b' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ex_tool_coord_b' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ex_tool_coord_b = value

    @builtins.property
    def ex_tool_coord_c(self):
        """Message field 'ex_tool_coord_c'."""
        return self._ex_tool_coord_c

    @ex_tool_coord_c.setter
    def ex_tool_coord_c(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ex_tool_coord_c' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ex_tool_coord_c' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ex_tool_coord_c = value

    @builtins.property
    def ex_axis_coord_x(self):
        """Message field 'ex_axis_coord_x'."""
        return self._ex_axis_coord_x

    @ex_axis_coord_x.setter
    def ex_axis_coord_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ex_axis_coord_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ex_axis_coord_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ex_axis_coord_x = value

    @builtins.property
    def ex_axis_coord_y(self):
        """Message field 'ex_axis_coord_y'."""
        return self._ex_axis_coord_y

    @ex_axis_coord_y.setter
    def ex_axis_coord_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ex_axis_coord_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ex_axis_coord_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ex_axis_coord_y = value

    @builtins.property
    def ex_axis_coord_z(self):
        """Message field 'ex_axis_coord_z'."""
        return self._ex_axis_coord_z

    @ex_axis_coord_z.setter
    def ex_axis_coord_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ex_axis_coord_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ex_axis_coord_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ex_axis_coord_z = value

    @builtins.property
    def ex_axis_coord_a(self):
        """Message field 'ex_axis_coord_a'."""
        return self._ex_axis_coord_a

    @ex_axis_coord_a.setter
    def ex_axis_coord_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ex_axis_coord_a' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ex_axis_coord_a' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ex_axis_coord_a = value

    @builtins.property
    def ex_axis_coord_b(self):
        """Message field 'ex_axis_coord_b'."""
        return self._ex_axis_coord_b

    @ex_axis_coord_b.setter
    def ex_axis_coord_b(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ex_axis_coord_b' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ex_axis_coord_b' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ex_axis_coord_b = value

    @builtins.property
    def ex_axis_coord_c(self):
        """Message field 'ex_axis_coord_c'."""
        return self._ex_axis_coord_c

    @ex_axis_coord_c.setter
    def ex_axis_coord_c(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ex_axis_coord_c' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ex_axis_coord_c' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ex_axis_coord_c = value

    @builtins.property
    def load(self):
        """Message field 'load'."""
        return self._load

    @load.setter
    def load(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'load' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'load' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._load = value

    @builtins.property
    def load_cog_x(self):
        """Message field 'load_cog_x'."""
        return self._load_cog_x

    @load_cog_x.setter
    def load_cog_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'load_cog_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'load_cog_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._load_cog_x = value

    @builtins.property
    def load_cog_y(self):
        """Message field 'load_cog_y'."""
        return self._load_cog_y

    @load_cog_y.setter
    def load_cog_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'load_cog_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'load_cog_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._load_cog_y = value

    @builtins.property
    def load_cog_z(self):
        """Message field 'load_cog_z'."""
        return self._load_cog_z

    @load_cog_z.setter
    def load_cog_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'load_cog_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'load_cog_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._load_cog_z = value

    @builtins.property
    def j1_last_servoj_target(self):
        """Message field 'j1_last_servoj_target'."""
        return self._j1_last_servoj_target

    @j1_last_servoj_target.setter
    def j1_last_servoj_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j1_last_servoj_target' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j1_last_servoj_target' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j1_last_servoj_target = value

    @builtins.property
    def j2_last_servoj_target(self):
        """Message field 'j2_last_servoj_target'."""
        return self._j2_last_servoj_target

    @j2_last_servoj_target.setter
    def j2_last_servoj_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j2_last_servoj_target' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j2_last_servoj_target' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j2_last_servoj_target = value

    @builtins.property
    def j3_last_servoj_target(self):
        """Message field 'j3_last_servoj_target'."""
        return self._j3_last_servoj_target

    @j3_last_servoj_target.setter
    def j3_last_servoj_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j3_last_servoj_target' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j3_last_servoj_target' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j3_last_servoj_target = value

    @builtins.property
    def j4_last_servoj_target(self):
        """Message field 'j4_last_servoj_target'."""
        return self._j4_last_servoj_target

    @j4_last_servoj_target.setter
    def j4_last_servoj_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j4_last_servoj_target' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j4_last_servoj_target' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j4_last_servoj_target = value

    @builtins.property
    def j5_last_servoj_target(self):
        """Message field 'j5_last_servoj_target'."""
        return self._j5_last_servoj_target

    @j5_last_servoj_target.setter
    def j5_last_servoj_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j5_last_servoj_target' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j5_last_servoj_target' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j5_last_servoj_target = value

    @builtins.property
    def j6_last_servoj_target(self):
        """Message field 'j6_last_servoj_target'."""
        return self._j6_last_servoj_target

    @j6_last_servoj_target.setter
    def j6_last_servoj_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j6_last_servoj_target' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j6_last_servoj_target' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j6_last_servoj_target = value

    @builtins.property
    def servoj_cmd_num(self):
        """Message field 'servoj_cmd_num'."""
        return self._servoj_cmd_num

    @servoj_cmd_num.setter
    def servoj_cmd_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'servoj_cmd_num' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'servoj_cmd_num' field must be an unsigned integer in [0, 65535]"
        self._servoj_cmd_num = value
