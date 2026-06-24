import launch_ros
import launch
from launch.substitutions import Command
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch_param_builder import ParameterBuilder
from moveit_configs_utils import MoveItConfigsBuilder
import os
import yaml


def generate_launch_description():
    moveit_config = (
        MoveItConfigsBuilder(
            robot_name="fairino3_v6_robot",
            package_name="fairino3_v6_moveit2_config"
        )
        .robot_description(file_path="config/fairino3_v6_robot.urdf.xacro")
        .joint_limits(file_path="config/joint_limits.yaml")
        .robot_description_kinematics()
        .to_moveit_configs()
    )

    servo_params = {
        "moveit_servo": ParameterBuilder("rus_sim_motion")
        .yaml("config/servo_params.yaml")
        .to_dict()
    }

    custom_params = os.path.join(
        get_package_share_directory("rus_sim_motion"),
        "config",
        "motion_params.yaml",
    )

    servo_node = launch_ros.actions.Node(
        package="moveit_servo",
        executable="servo_node_main",
        parameters=[
            servo_params,
            moveit_config.robot_description,
            moveit_config.robot_description_semantic,
            moveit_config.robot_description_kinematics,
            moveit_config.joint_limits,
        ],
        output="screen",
    )

    custom_motion_node = Node(
        package="rus_sim_motion",
        executable="rus_sim_motion",
        name="rus_sim_motion",
        output="screen",
        parameters=[
            custom_params,
            moveit_config.robot_description,
            moveit_config.robot_description_semantic,
            moveit_config.robot_description_kinematics,
            moveit_config.joint_limits,
        ],
    )
    
    return launch.LaunchDescription([
        custom_motion_node,
        servo_node,
    ])