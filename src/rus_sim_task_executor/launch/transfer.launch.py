import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    # 参数文件路径
    params_file = os.path.join(
        get_package_share_directory('rus_sim_task_executor'),
        'config',
        'transfer_params.yaml'
    )

    transfer_node = Node(
        package='rus_sim_task_executor',
        executable='rus_sim_transfer',
        name='transfer_node',
        output='screen',
        parameters=[params_file]
    )

    return LaunchDescription([transfer_node])