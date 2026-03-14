// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from fairino_msgs:msg/RobotNonrtState.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "fairino_msgs/msg/detail/robot_nonrt_state__struct.h"
#include "fairino_msgs/msg/detail/robot_nonrt_state__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool fairino_msgs__msg__robot_nonrt_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("fairino_msgs.msg._robot_nonrt_state.RobotNonrtState", full_classname_dest, 51) == 0);
  }
  fairino_msgs__msg__RobotNonrtState * ros_message = _ros_message;
  {  // prg_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "prg_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prg_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rbt_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "rbt_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rbt_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rbt_main_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "rbt_main_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rbt_main_code = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rbt_sub_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "rbt_sub_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rbt_sub_code = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // robot_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robot_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // j1_cur_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "j1_cur_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j1_cur_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j2_cur_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "j2_cur_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j2_cur_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j3_cur_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "j3_cur_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j3_cur_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j4_cur_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "j4_cur_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j4_cur_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j5_cur_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "j5_cur_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j5_cur_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j6_cur_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "j6_cur_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j6_cur_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cart_x_cur_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_x_cur_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_x_cur_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cart_y_cur_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_y_cur_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_y_cur_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cart_z_cur_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_z_cur_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_z_cur_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cart_a_cur_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_a_cur_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_a_cur_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cart_b_cur_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_b_cur_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_b_cur_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cart_c_cur_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_c_cur_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_c_cur_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // flange_x_cur_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "flange_x_cur_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->flange_x_cur_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // flange_y_cur_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "flange_y_cur_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->flange_y_cur_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // flange_z_cur_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "flange_z_cur_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->flange_z_cur_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // flange_a_cur_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "flange_a_cur_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->flange_a_cur_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // flange_b_cur_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "flange_b_cur_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->flange_b_cur_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // flange_c_cur_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "flange_c_cur_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->flange_c_cur_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j1_actual_qd
    PyObject * field = PyObject_GetAttrString(_pymsg, "j1_actual_qd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j1_actual_qd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j2_actual_qd
    PyObject * field = PyObject_GetAttrString(_pymsg, "j2_actual_qd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j2_actual_qd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j3_actual_qd
    PyObject * field = PyObject_GetAttrString(_pymsg, "j3_actual_qd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j3_actual_qd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j4_actual_qd
    PyObject * field = PyObject_GetAttrString(_pymsg, "j4_actual_qd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j4_actual_qd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j5_actual_qd
    PyObject * field = PyObject_GetAttrString(_pymsg, "j5_actual_qd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j5_actual_qd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j6_actual_qd
    PyObject * field = PyObject_GetAttrString(_pymsg, "j6_actual_qd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j6_actual_qd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j1_actual_qdd
    PyObject * field = PyObject_GetAttrString(_pymsg, "j1_actual_qdd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j1_actual_qdd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j2_actual_qdd
    PyObject * field = PyObject_GetAttrString(_pymsg, "j2_actual_qdd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j2_actual_qdd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j3_actual_qdd
    PyObject * field = PyObject_GetAttrString(_pymsg, "j3_actual_qdd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j3_actual_qdd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j4_actual_qdd
    PyObject * field = PyObject_GetAttrString(_pymsg, "j4_actual_qdd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j4_actual_qdd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j5_actual_qdd
    PyObject * field = PyObject_GetAttrString(_pymsg, "j5_actual_qdd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j5_actual_qdd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j6_actual_qdd
    PyObject * field = PyObject_GetAttrString(_pymsg, "j6_actual_qdd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j6_actual_qdd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cart_lin_cmd_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_lin_cmd_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_lin_cmd_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cart_rot_cmd_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_rot_cmd_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_rot_cmd_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cart_x_cmd_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_x_cmd_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_x_cmd_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cart_y_cmd_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_y_cmd_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_y_cmd_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cart_z_cmd_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_z_cmd_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_z_cmd_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cart_a_cmd_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_a_cmd_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_a_cmd_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cart_b_cmd_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_b_cmd_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_b_cmd_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cart_c_cmd_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_c_cmd_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_c_cmd_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cart_lin_cur_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_lin_cur_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_lin_cur_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cart_rot_cur_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_rot_cur_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_rot_cur_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cart_x_cur_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_x_cur_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_x_cur_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cart_y_cur_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_y_cur_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_y_cur_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cart_z_cur_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_z_cur_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_z_cur_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cart_a_cur_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_a_cur_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_a_cur_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cart_b_cur_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_b_cur_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_b_cur_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cart_c_cur_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_c_cur_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_c_cur_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j1_cur_tor
    PyObject * field = PyObject_GetAttrString(_pymsg, "j1_cur_tor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j1_cur_tor = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j2_cur_tor
    PyObject * field = PyObject_GetAttrString(_pymsg, "j2_cur_tor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j2_cur_tor = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j3_cur_tor
    PyObject * field = PyObject_GetAttrString(_pymsg, "j3_cur_tor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j3_cur_tor = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j4_cur_tor
    PyObject * field = PyObject_GetAttrString(_pymsg, "j4_cur_tor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j4_cur_tor = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j5_cur_tor
    PyObject * field = PyObject_GetAttrString(_pymsg, "j5_cur_tor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j5_cur_tor = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j6_cur_tor
    PyObject * field = PyObject_GetAttrString(_pymsg, "j6_cur_tor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j6_cur_tor = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tool_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "tool_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tool_num = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // work_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "work_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->work_num = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dgt_output_h
    PyObject * field = PyObject_GetAttrString(_pymsg, "dgt_output_h");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dgt_output_h = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dgt_output_l
    PyObject * field = PyObject_GetAttrString(_pymsg, "dgt_output_l");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dgt_output_l = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tl_dgt_output_l
    PyObject * field = PyObject_GetAttrString(_pymsg, "tl_dgt_output_l");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tl_dgt_output_l = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dgt_input_h
    PyObject * field = PyObject_GetAttrString(_pymsg, "dgt_input_h");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dgt_input_h = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dgt_input_l
    PyObject * field = PyObject_GetAttrString(_pymsg, "dgt_input_l");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dgt_input_l = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tl_dgt_input_l
    PyObject * field = PyObject_GetAttrString(_pymsg, "tl_dgt_input_l");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tl_dgt_input_l = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cl_analog_input_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "cl_analog_input_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cl_analog_input_1 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cl_analog_input_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "cl_analog_input_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cl_analog_input_2 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tl_anglog_input
    PyObject * field = PyObject_GetAttrString(_pymsg, "tl_anglog_input");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tl_anglog_input = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ft_fx_raw_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "ft_fx_raw_data");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ft_fx_raw_data = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ft_fy_raw_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "ft_fy_raw_data");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ft_fy_raw_data = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ft_fz_raw_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "ft_fz_raw_data");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ft_fz_raw_data = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ft_tx_raw_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "ft_tx_raw_data");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ft_tx_raw_data = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ft_ty_raw_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "ft_ty_raw_data");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ft_ty_raw_data = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ft_tz_raw_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "ft_tz_raw_data");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ft_tz_raw_data = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ft_fx_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "ft_fx_data");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ft_fx_data = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ft_fy_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "ft_fy_data");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ft_fy_data = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ft_fz_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "ft_fz_data");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ft_fz_data = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ft_tx_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "ft_tx_data");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ft_tx_data = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ft_ty_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "ft_ty_data");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ft_ty_data = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ft_tz_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "ft_tz_data");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ft_tz_data = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ft_actstatus
    PyObject * field = PyObject_GetAttrString(_pymsg, "ft_actstatus");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ft_actstatus = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // emg
    PyObject * field = PyObject_GetAttrString(_pymsg, "emg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->emg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // motion_done
    PyObject * field = PyObject_GetAttrString(_pymsg, "motion_done");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motion_done = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // grip_motion_done
    PyObject * field = PyObject_GetAttrString(_pymsg, "grip_motion_done");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->grip_motion_done = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mc_queue_len
    PyObject * field = PyObject_GetAttrString(_pymsg, "mc_queue_len");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mc_queue_len = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // collision_err
    PyObject * field = PyObject_GetAttrString(_pymsg, "collision_err");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->collision_err = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // trajectory_pnum
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory_pnum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trajectory_pnum = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // safety_stop1_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "safety_stop1_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->safety_stop1_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // safety_stop2_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "safety_stop2_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->safety_stop2_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gripper_fault_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "gripper_fault_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gripper_fault_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // grippererro
    PyObject * field = PyObject_GetAttrString(_pymsg, "grippererro");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->grippererro = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gripper_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "gripper_active");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gripper_active = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gripper_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "gripper_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gripper_position = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gripper_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "gripper_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gripper_speed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gripper_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "gripper_current");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gripper_current = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gripper_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "gripper_temp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gripper_temp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gripper_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "gripper_voltage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gripper_voltage = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aux_servo_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "aux_servo_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aux_servo_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aux_servo_err
    PyObject * field = PyObject_GetAttrString(_pymsg, "aux_servo_err");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aux_servo_err = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aux_servo_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "aux_servo_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aux_servo_state = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aux_servo_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "aux_servo_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aux_servo_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aux_servo_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "aux_servo_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aux_servo_vel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aux_servo_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "aux_servo_torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aux_servo_torque = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ext_di_state_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_di_state_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ext_di_state_1 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ext_di_state_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_di_state_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ext_di_state_2 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ext_di_state_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_di_state_3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ext_di_state_3 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ext_di_state_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_di_state_4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ext_di_state_4 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ext_di_state_5
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_di_state_5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ext_di_state_5 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ext_di_state_6
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_di_state_6");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ext_di_state_6 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ext_di_state_7
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_di_state_7");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ext_di_state_7 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ext_di_state_8
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_di_state_8");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ext_di_state_8 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ext_do_state_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_do_state_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ext_do_state_1 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ext_do_state_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_do_state_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ext_do_state_2 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ext_do_state_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_do_state_3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ext_do_state_3 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ext_do_state_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_do_state_4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ext_do_state_4 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ext_do_state_5
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_do_state_5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ext_do_state_5 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ext_do_state_6
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_do_state_6");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ext_do_state_6 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ext_do_state_7
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_do_state_7");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ext_do_state_7 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ext_do_state_8
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_do_state_8");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ext_do_state_8 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ext_ai_state_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_ai_state_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ext_ai_state_1 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ext_ai_state_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_ai_state_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ext_ai_state_2 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ext_ai_state_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_ai_state_3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ext_ai_state_3 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ext_ai_state_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_ai_state_4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ext_ai_state_4 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ext_ao_state_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_ao_state_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ext_ao_state_1 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ext_ao_state_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_ao_state_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ext_ao_state_2 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ext_ao_state_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_ao_state_3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ext_ao_state_3 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ext_ao_state_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_ao_state_4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ext_ao_state_4 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rbt_enable_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "rbt_enable_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rbt_enable_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // end_lua_err_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_lua_err_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->end_lua_err_code = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cl_analog_output_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "cl_analog_output_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cl_analog_output_1 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cl_analog_output_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "cl_analog_output_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cl_analog_output_2 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tl_analog_output
    PyObject * field = PyObject_GetAttrString(_pymsg, "tl_analog_output");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tl_analog_output = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gripper_rot_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "gripper_rot_num");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gripper_rot_num = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gripper_rot_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "gripper_rot_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gripper_rot_speed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gripper_rot_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "gripper_rot_torque");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gripper_rot_torque = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // weldbreakoffstate
    PyObject * field = PyObject_GetAttrString(_pymsg, "weldbreakoffstate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->weldbreakoffstate = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // weldarcstate
    PyObject * field = PyObject_GetAttrString(_pymsg, "weldarcstate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->weldarcstate = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // j1_tgt_tor
    PyObject * field = PyObject_GetAttrString(_pymsg, "j1_tgt_tor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j1_tgt_tor = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j2_tgt_tor
    PyObject * field = PyObject_GetAttrString(_pymsg, "j2_tgt_tor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j2_tgt_tor = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j3_tgt_tor
    PyObject * field = PyObject_GetAttrString(_pymsg, "j3_tgt_tor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j3_tgt_tor = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j4_tgt_tor
    PyObject * field = PyObject_GetAttrString(_pymsg, "j4_tgt_tor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j4_tgt_tor = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j5_tgt_tor
    PyObject * field = PyObject_GetAttrString(_pymsg, "j5_tgt_tor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j5_tgt_tor = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j6_tgt_tor
    PyObject * field = PyObject_GetAttrString(_pymsg, "j6_tgt_tor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j6_tgt_tor = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // jwide_voltage_ctrl_box_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "jwide_voltage_ctrl_box_temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->jwide_voltage_ctrl_box_temp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wide_voltage_ctrl_box_fan_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "wide_voltage_ctrl_box_fan_current");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wide_voltage_ctrl_box_fan_current = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tool_coord_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "tool_coord_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tool_coord_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tool_coord_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "tool_coord_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tool_coord_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tool_coord_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "tool_coord_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tool_coord_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tool_coord_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "tool_coord_a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tool_coord_a = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tool_coord_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "tool_coord_b");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tool_coord_b = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tool_coord_c
    PyObject * field = PyObject_GetAttrString(_pymsg, "tool_coord_c");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tool_coord_c = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wobj_coord_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "wobj_coord_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wobj_coord_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wobj_coord_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "wobj_coord_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wobj_coord_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wobj_coord_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "wobj_coord_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wobj_coord_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wobj_coord_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "wobj_coord_a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wobj_coord_a = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wobj_coord_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "wobj_coord_b");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wobj_coord_b = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wobj_coord_c
    PyObject * field = PyObject_GetAttrString(_pymsg, "wobj_coord_c");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wobj_coord_c = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ex_tool_coord_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "ex_tool_coord_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ex_tool_coord_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ex_tool_coord_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "ex_tool_coord_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ex_tool_coord_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ex_tool_coord_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "ex_tool_coord_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ex_tool_coord_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ex_tool_coord_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "ex_tool_coord_a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ex_tool_coord_a = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ex_tool_coord_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "ex_tool_coord_b");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ex_tool_coord_b = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ex_tool_coord_c
    PyObject * field = PyObject_GetAttrString(_pymsg, "ex_tool_coord_c");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ex_tool_coord_c = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ex_axis_coord_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "ex_axis_coord_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ex_axis_coord_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ex_axis_coord_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "ex_axis_coord_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ex_axis_coord_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ex_axis_coord_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "ex_axis_coord_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ex_axis_coord_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ex_axis_coord_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "ex_axis_coord_a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ex_axis_coord_a = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ex_axis_coord_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "ex_axis_coord_b");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ex_axis_coord_b = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ex_axis_coord_c
    PyObject * field = PyObject_GetAttrString(_pymsg, "ex_axis_coord_c");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ex_axis_coord_c = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // load
    PyObject * field = PyObject_GetAttrString(_pymsg, "load");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->load = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // load_cog_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "load_cog_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->load_cog_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // load_cog_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "load_cog_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->load_cog_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // load_cog_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "load_cog_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->load_cog_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j1_last_servoj_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "j1_last_servoj_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j1_last_servoj_target = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j2_last_servoj_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "j2_last_servoj_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j2_last_servoj_target = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j3_last_servoj_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "j3_last_servoj_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j3_last_servoj_target = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j4_last_servoj_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "j4_last_servoj_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j4_last_servoj_target = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j5_last_servoj_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "j5_last_servoj_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j5_last_servoj_target = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j6_last_servoj_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "j6_last_servoj_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j6_last_servoj_target = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // servoj_cmd_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "servoj_cmd_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->servoj_cmd_num = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fairino_msgs__msg__robot_nonrt_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotNonrtState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fairino_msgs.msg._robot_nonrt_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotNonrtState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fairino_msgs__msg__RobotNonrtState * ros_message = (fairino_msgs__msg__RobotNonrtState *)raw_ros_message;
  {  // prg_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prg_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prg_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rbt_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rbt_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rbt_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rbt_main_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rbt_main_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rbt_main_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rbt_sub_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rbt_sub_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rbt_sub_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->robot_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j1_cur_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j1_cur_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j1_cur_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j2_cur_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j2_cur_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j2_cur_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j3_cur_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j3_cur_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j3_cur_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j4_cur_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j4_cur_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j4_cur_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j5_cur_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j5_cur_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j5_cur_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j6_cur_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j6_cur_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j6_cur_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cart_x_cur_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_x_cur_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_x_cur_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cart_y_cur_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_y_cur_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_y_cur_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cart_z_cur_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_z_cur_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_z_cur_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cart_a_cur_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_a_cur_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_a_cur_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cart_b_cur_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_b_cur_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_b_cur_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cart_c_cur_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_c_cur_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_c_cur_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flange_x_cur_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->flange_x_cur_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flange_x_cur_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flange_y_cur_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->flange_y_cur_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flange_y_cur_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flange_z_cur_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->flange_z_cur_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flange_z_cur_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flange_a_cur_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->flange_a_cur_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flange_a_cur_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flange_b_cur_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->flange_b_cur_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flange_b_cur_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flange_c_cur_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->flange_c_cur_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flange_c_cur_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j1_actual_qd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j1_actual_qd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j1_actual_qd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j2_actual_qd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j2_actual_qd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j2_actual_qd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j3_actual_qd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j3_actual_qd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j3_actual_qd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j4_actual_qd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j4_actual_qd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j4_actual_qd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j5_actual_qd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j5_actual_qd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j5_actual_qd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j6_actual_qd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j6_actual_qd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j6_actual_qd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j1_actual_qdd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j1_actual_qdd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j1_actual_qdd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j2_actual_qdd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j2_actual_qdd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j2_actual_qdd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j3_actual_qdd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j3_actual_qdd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j3_actual_qdd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j4_actual_qdd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j4_actual_qdd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j4_actual_qdd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j5_actual_qdd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j5_actual_qdd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j5_actual_qdd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j6_actual_qdd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j6_actual_qdd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j6_actual_qdd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cart_lin_cmd_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_lin_cmd_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_lin_cmd_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cart_rot_cmd_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_rot_cmd_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_rot_cmd_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cart_x_cmd_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_x_cmd_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_x_cmd_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cart_y_cmd_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_y_cmd_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_y_cmd_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cart_z_cmd_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_z_cmd_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_z_cmd_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cart_a_cmd_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_a_cmd_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_a_cmd_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cart_b_cmd_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_b_cmd_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_b_cmd_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cart_c_cmd_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_c_cmd_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_c_cmd_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cart_lin_cur_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_lin_cur_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_lin_cur_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cart_rot_cur_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_rot_cur_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_rot_cur_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cart_x_cur_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_x_cur_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_x_cur_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cart_y_cur_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_y_cur_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_y_cur_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cart_z_cur_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_z_cur_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_z_cur_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cart_a_cur_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_a_cur_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_a_cur_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cart_b_cur_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_b_cur_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_b_cur_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cart_c_cur_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_c_cur_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_c_cur_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j1_cur_tor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j1_cur_tor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j1_cur_tor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j2_cur_tor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j2_cur_tor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j2_cur_tor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j3_cur_tor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j3_cur_tor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j3_cur_tor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j4_cur_tor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j4_cur_tor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j4_cur_tor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j5_cur_tor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j5_cur_tor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j5_cur_tor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j6_cur_tor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j6_cur_tor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j6_cur_tor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tool_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tool_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tool_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // work_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->work_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "work_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dgt_output_h
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dgt_output_h);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dgt_output_h", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dgt_output_l
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dgt_output_l);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dgt_output_l", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tl_dgt_output_l
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tl_dgt_output_l);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tl_dgt_output_l", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dgt_input_h
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dgt_input_h);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dgt_input_h", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dgt_input_l
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dgt_input_l);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dgt_input_l", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tl_dgt_input_l
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tl_dgt_input_l);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tl_dgt_input_l", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cl_analog_input_1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cl_analog_input_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cl_analog_input_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cl_analog_input_2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cl_analog_input_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cl_analog_input_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tl_anglog_input
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tl_anglog_input);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tl_anglog_input", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ft_fx_raw_data
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ft_fx_raw_data);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ft_fx_raw_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ft_fy_raw_data
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ft_fy_raw_data);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ft_fy_raw_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ft_fz_raw_data
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ft_fz_raw_data);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ft_fz_raw_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ft_tx_raw_data
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ft_tx_raw_data);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ft_tx_raw_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ft_ty_raw_data
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ft_ty_raw_data);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ft_ty_raw_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ft_tz_raw_data
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ft_tz_raw_data);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ft_tz_raw_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ft_fx_data
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ft_fx_data);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ft_fx_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ft_fy_data
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ft_fy_data);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ft_fy_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ft_fz_data
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ft_fz_data);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ft_fz_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ft_tx_data
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ft_tx_data);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ft_tx_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ft_ty_data
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ft_ty_data);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ft_ty_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ft_tz_data
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ft_tz_data);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ft_tz_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ft_actstatus
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ft_actstatus);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ft_actstatus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->emg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motion_done
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->motion_done);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motion_done", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // grip_motion_done
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->grip_motion_done);
    {
      int rc = PyObject_SetAttrString(_pymessage, "grip_motion_done", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mc_queue_len
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mc_queue_len);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mc_queue_len", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // collision_err
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->collision_err);
    {
      int rc = PyObject_SetAttrString(_pymessage, "collision_err", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trajectory_pnum
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->trajectory_pnum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trajectory_pnum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safety_stop1_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->safety_stop1_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safety_stop1_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safety_stop2_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->safety_stop2_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safety_stop2_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gripper_fault_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gripper_fault_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gripper_fault_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // grippererro
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->grippererro);
    {
      int rc = PyObject_SetAttrString(_pymessage, "grippererro", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gripper_active
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gripper_active);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gripper_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gripper_position
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gripper_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gripper_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gripper_speed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gripper_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gripper_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gripper_current
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gripper_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gripper_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gripper_temp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gripper_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gripper_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gripper_voltage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gripper_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gripper_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aux_servo_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aux_servo_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aux_servo_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aux_servo_err
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aux_servo_err);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aux_servo_err", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aux_servo_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aux_servo_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aux_servo_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aux_servo_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aux_servo_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aux_servo_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aux_servo_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aux_servo_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aux_servo_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aux_servo_torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aux_servo_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aux_servo_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_di_state_1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ext_di_state_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_di_state_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_di_state_2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ext_di_state_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_di_state_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_di_state_3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ext_di_state_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_di_state_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_di_state_4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ext_di_state_4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_di_state_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_di_state_5
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ext_di_state_5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_di_state_5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_di_state_6
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ext_di_state_6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_di_state_6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_di_state_7
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ext_di_state_7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_di_state_7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_di_state_8
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ext_di_state_8);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_di_state_8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_do_state_1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ext_do_state_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_do_state_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_do_state_2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ext_do_state_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_do_state_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_do_state_3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ext_do_state_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_do_state_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_do_state_4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ext_do_state_4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_do_state_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_do_state_5
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ext_do_state_5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_do_state_5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_do_state_6
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ext_do_state_6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_do_state_6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_do_state_7
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ext_do_state_7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_do_state_7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_do_state_8
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ext_do_state_8);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_do_state_8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_ai_state_1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ext_ai_state_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_ai_state_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_ai_state_2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ext_ai_state_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_ai_state_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_ai_state_3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ext_ai_state_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_ai_state_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_ai_state_4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ext_ai_state_4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_ai_state_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_ao_state_1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ext_ao_state_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_ao_state_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_ao_state_2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ext_ao_state_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_ao_state_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_ao_state_3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ext_ao_state_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_ao_state_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_ao_state_4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ext_ao_state_4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_ao_state_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rbt_enable_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rbt_enable_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rbt_enable_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_lua_err_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->end_lua_err_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_lua_err_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cl_analog_output_1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cl_analog_output_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cl_analog_output_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cl_analog_output_2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cl_analog_output_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cl_analog_output_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tl_analog_output
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tl_analog_output);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tl_analog_output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gripper_rot_num
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gripper_rot_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gripper_rot_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gripper_rot_speed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gripper_rot_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gripper_rot_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gripper_rot_torque
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gripper_rot_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gripper_rot_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // weldbreakoffstate
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->weldbreakoffstate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "weldbreakoffstate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // weldarcstate
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->weldarcstate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "weldarcstate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j1_tgt_tor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j1_tgt_tor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j1_tgt_tor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j2_tgt_tor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j2_tgt_tor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j2_tgt_tor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j3_tgt_tor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j3_tgt_tor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j3_tgt_tor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j4_tgt_tor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j4_tgt_tor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j4_tgt_tor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j5_tgt_tor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j5_tgt_tor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j5_tgt_tor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j6_tgt_tor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j6_tgt_tor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j6_tgt_tor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // jwide_voltage_ctrl_box_temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->jwide_voltage_ctrl_box_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "jwide_voltage_ctrl_box_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wide_voltage_ctrl_box_fan_current
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->wide_voltage_ctrl_box_fan_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wide_voltage_ctrl_box_fan_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tool_coord_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tool_coord_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tool_coord_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tool_coord_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tool_coord_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tool_coord_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tool_coord_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tool_coord_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tool_coord_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tool_coord_a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tool_coord_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tool_coord_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tool_coord_b
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tool_coord_b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tool_coord_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tool_coord_c
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tool_coord_c);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tool_coord_c", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wobj_coord_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wobj_coord_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wobj_coord_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wobj_coord_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wobj_coord_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wobj_coord_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wobj_coord_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wobj_coord_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wobj_coord_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wobj_coord_a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wobj_coord_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wobj_coord_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wobj_coord_b
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wobj_coord_b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wobj_coord_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wobj_coord_c
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wobj_coord_c);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wobj_coord_c", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ex_tool_coord_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ex_tool_coord_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ex_tool_coord_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ex_tool_coord_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ex_tool_coord_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ex_tool_coord_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ex_tool_coord_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ex_tool_coord_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ex_tool_coord_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ex_tool_coord_a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ex_tool_coord_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ex_tool_coord_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ex_tool_coord_b
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ex_tool_coord_b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ex_tool_coord_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ex_tool_coord_c
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ex_tool_coord_c);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ex_tool_coord_c", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ex_axis_coord_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ex_axis_coord_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ex_axis_coord_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ex_axis_coord_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ex_axis_coord_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ex_axis_coord_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ex_axis_coord_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ex_axis_coord_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ex_axis_coord_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ex_axis_coord_a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ex_axis_coord_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ex_axis_coord_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ex_axis_coord_b
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ex_axis_coord_b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ex_axis_coord_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ex_axis_coord_c
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ex_axis_coord_c);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ex_axis_coord_c", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // load
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->load);
    {
      int rc = PyObject_SetAttrString(_pymessage, "load", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // load_cog_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->load_cog_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "load_cog_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // load_cog_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->load_cog_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "load_cog_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // load_cog_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->load_cog_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "load_cog_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j1_last_servoj_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j1_last_servoj_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j1_last_servoj_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j2_last_servoj_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j2_last_servoj_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j2_last_servoj_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j3_last_servoj_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j3_last_servoj_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j3_last_servoj_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j4_last_servoj_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j4_last_servoj_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j4_last_servoj_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j5_last_servoj_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j5_last_servoj_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j5_last_servoj_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j6_last_servoj_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j6_last_servoj_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j6_last_servoj_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // servoj_cmd_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->servoj_cmd_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servoj_cmd_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
