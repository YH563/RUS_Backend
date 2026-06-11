#!/usr/bin/env python3
"""
rus_sim_cloud 点云预处理节点启动文件
用法: ros2 launch rus_sim_cloud cloud.launch.py
"""

import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    pkg_share = get_package_share_directory("rus_sim_cloud")
    config_path = os.path.join(pkg_share, "config", "cloud_params.yaml")

    realsense_node = Node(
        package="realsense2_camera",
        executable="realsense2_camera_node",
        name="realsense2_camera",
        output="screen",
        parameters=[{
            "serial_no": "",                    # 留空则自动选择第一个可用设备
            "enable_depth": True,               # 启用深度流
            "enable_color": True,               # 启用彩色流
            "depth_module.depth_profile": "640x480x30",   # 深度分辨率/帧率
            "rgb_camera.color_profile": "640x480x30",     # 彩色分辨率/帧率
            "align_depth.enable": True,         # 深度对齐到彩色
            "pointcloud.enable": True,          # 若需要直接点云则开启
        }],
        # 也可以从外部 yaml 文件加载参数：
        # parameters=[os.path.join(pkg_share, "config", "realsense_params.yaml")],
    )

    cloud_node = Node(
        package="rus_sim_cloud",
        executable="rus_sim_cloud",
        name="rus_sim_cloud",
        output="screen",
        parameters=[config_path],
    )

    return LaunchDescription([realsense_node, cloud_node])