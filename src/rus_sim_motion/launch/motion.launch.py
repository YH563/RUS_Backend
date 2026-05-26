#!/usr/bin/env python3
"""
rus_sim_motion 点云预处理节点启动文件
用法: ros2 launch rus_sim_motion motion.launch.py
"""

import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    pkg_share = get_package_share_directory("rus_sim_motion")
    config_path = os.path.join(pkg_share, "config", "motion_params.yaml")

    motion_node = Node(
        package="rus_sim_motion",
        executable="rus_sim_motion",
        name="rus_sim_motion",
        output="screen",
        parameters=[config_path],
    )

    return LaunchDescription([motion_node])