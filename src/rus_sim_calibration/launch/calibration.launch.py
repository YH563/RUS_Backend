"""手眼标定 launch 文件

启动:
  1. 标定节点 (C++)

用法:
  ros2 launch rus_sim_calibration calibration.launch.py
  ros2 launch rus_sim_calibration calibration.launch.py config_file:=./config/calibration_params.yaml
"""

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    package_name = "rus_sim_calibration"

    # ------------------------------------------------------------------
    #  命令行参数
    # ------------------------------------------------------------------
    config_file_arg = DeclareLaunchArgument(
        "config_file",
        default_value=os.path.join(
            get_package_share_directory(package_name), "config", "calibration_params.yaml"
        ),
        description="标定节点参数文件路径",
    )

    # ------------------------------------------------------------------
    #  节点: 标定节点 (C++)
    # ------------------------------------------------------------------
    calibration_node = Node(
        package=package_name,
        executable="rus_sim_calibration",
        name="calibration_node",
        output="screen",
        parameters=[LaunchConfiguration("config_file")],
        # 若参数文件不存在，不阻塞启动
        emulate_tty=True,
    )

    return LaunchDescription([
        config_file_arg,
        calibration_node,
    ])
