# RUS-Sim 超声机器人仿真平台后端

## 项目简介

RUS-Sim（Robotic Ultrasound Simulator）是一个面向超声扫查机械臂的数字孪生仿真平台，旨在为自动化扫查算法和AI辅助诊断模块的研发提供安全、可控的集成验证环境。

## 开发环境搭建

### 系统环境要求
- **Ubuntu** 22.04
- **CMake** 3.18+

### 安装 ROS2 Humble 
- 安装教程见 [ROS 2 Documentation](https://docs.ros.org/en/humble/index.html)

### 安装额外依赖：
- **libigl** 2.5.0 (已在项目内)
- **Eigen3** 3.4.0
- **PCL** 1.21.1
- **pcl_conversions** 2.4.5

## 项目结构
采用标准的 ROS2 工作空间布局，主要功能组织为多个功能包。
```
src
├── frcobot_ros2         # 机械臂官方sdk
├── rus_sim_bringup      # 启动文件
├── rus_sim_interfaces   # 接口文件
├── rus_sim_perception   # 感知模块，主要负责处理超声数据
├── rus_sim_planner      # 规划模块，主要负责机械臂运动规划
├── rus_sim_pointcloud   # 点云处理模块，主要负责点云数据的处理
├── rus_sim_utils        # 工具模块，提供一些通用工具函数
└── third_party          # 第三方库
```

## ROS 开发规范
- [ROS 2 开发规范](./DevelopmentGuide.md)