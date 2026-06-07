from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import Command
from ament_index_python.packages import get_package_share_directory
import os
import yaml


def load_yaml(package_name, file_path):
    """读取指定包内 YAML 文件，返回字典"""
    package_path = get_package_share_directory(package_name)
    full_path = os.path.join(package_path, file_path)
    with open(full_path, "r") as f:
        return yaml.safe_load(f)


def generate_launch_description():
    # ============================================================
    # 1. 配置包路径
    # ============================================================
    moveit_config_pkg = "fairino3_v6_moveit2_config"
    moveit_config_path = get_package_share_directory(moveit_config_pkg)

    # ============================================================
    # 2. robot_description（xacro → URDF）
    # ============================================================
    xacro_file = os.path.join(
        moveit_config_path, "config", "fairino3_v6_robot.urdf.xacro"
    )
    robot_description_content = Command(["xacro ", xacro_file])

    # ============================================================
    # 3. robot_description_semantic（SRDF 文本）
    # ============================================================
    srdf_file = os.path.join(
        moveit_config_path, "config", "fairino3_v6_robot.srdf"
    )
    with open(srdf_file, "r") as f:
        robot_description_semantic_content = f.read()

    # ============================================================
    # 4. kinematics 参数
    # ============================================================
    kinematics_params = load_yaml(
        moveit_config_pkg, "config/kinematics.yaml"
    )

    # ============================================================
    # 5. servo 参数（直接读，文件本身不要有顶层 moveit_servo 键）
    # ============================================================
    servo_yaml = load_yaml(
        "rus_sim_motion", "config/servo_params.yaml"
    )
    servo_params = {"moveit_servo": servo_yaml}

    # ============================================================
    # 6. 自定义 motion 参数文件
    # ============================================================
    custom_params = os.path.join(
        get_package_share_directory("rus_sim_motion"),
        "config",
        "motion_params.yaml",
    )

    # ============================================================
    # 7. 创建 Node
    # ============================================================
    servo_node = Node(
        package="rus_sim_motion",
        executable="rus_sim_motion",
        name="rus_sim_motion",
        output="screen",
        parameters=[
            custom_params,
            servo_params,
            {"robot_description": robot_description_content},
            {"robot_description_semantic": robot_description_semantic_content},
            kinematics_params,
        ],
    )

    return LaunchDescription([servo_node])