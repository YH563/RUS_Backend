# rus_sim_force

> 基于雅可比转置法的机械臂末端六维力旋量估算节点。

## 功能概述

- ✅ 功能点1：从 URDF 自动解析运动学与惯性参数
- ✅ 功能点2：基于逆动力学的关节力矩补偿（Pinocchio RNEA）
- ✅ 功能点3：雅可比转置法估算 wrist3 处六维力旋量
- ✅ 功能点4：力旋量坐标变换至法兰原点
- ✅ 功能点5：奇异位形检测（条件数阈值 + 阻尼最小二乘）
- ✅ 功能点6：工具负载补偿（附加质量 + 质心偏置）
- ✅ 功能点7：仿真模式（`SetSimForce` 自动构造 tau_meas）
- ✅ 功能点8：ROS2 话题实时发布估算结果（`/flange_wrench`）
- 📝 功能点9：三维仿真进一步验证
- 📝 功能点10：基座力算法完善

> 状态标记：✅ 已完成  🚧 进行中  📝 待办  ❌ 废弃

## 第三方依赖

| 依赖 | 说明 | 状态 |
|------|------|------|
| Eigen3 | 线性代数，雅可比与逆动力学计算 | ✅ |
| urdf | URDF 解析，加载运动学与惯性参数 | ✅ |
| pinocchio | 高效运动学与逆动力学 RNEA | ✅ |
| rclcpp | ROS2 C++ 客户端 | ✅ |
| sensor_msgs | JointState 订阅 | ✅ |
| geometry_msgs | WrenchStamped 发布 | ✅ |

## 节点说明

### rus_sim_force

| 话题名 | 订阅/发布 | 消息类型 | 说明 | 状态 |
|--------|-----------|----------|------|------|
| `/joint_states` | 订阅 | `sensor_msgs/msg/JointState` | 机械臂关节状态，位置速度力矩 | ✅ |
| `/flange_wrench` | 发布 | `geometry_msgs/msg/WrenchStamped` | 法兰末端六维力旋量 | ✅ |

**参数**（`config/wrench_params.yaml`）

| 参数名 | 类型 | 默认值 | 说明 | 状态 |
|--------|------|--------|------|------|
| `urdf_path` | string | `""` | URDF 文件路径，必填 | ✅ |
| `joint_state_topic` | string | `/joint_states` | 输入关节状态话题 | ✅ |
| `wrench_topic` | string | `/flange_wrench` | 输出力旋量话题 | ✅ |
| `wrench_frame_id` | string | `flange` | WrenchStamped 的 frame_id | ✅ |
| `publish_rate_hz` | double | `100.0` | 发布频率，单位 Hz | ✅ |
| `publish_in_flange` | bool | `true` | true 输出法兰系，false 输出 base 系 | ✅ |
| `qdd_alpha` | double | `0.2` | 加速度低通滤波系数，越小越平滑 | ✅ |
| `lambda` | double | `0.001` | 阻尼最小二乘系数 | ✅ |
| `singularity_threshold` | double | `200.0` | 条件数奇异检测阈值 | ✅ |

**启动方式**

```bash
ros2 run rus_sim_force rus_sim_force --test --urdf src/frcobot_ros2/fairino_description/urdf/fairino3_v6.urdf              # 验证测试
```

```bash
ros2 run rus_sim_force rus_sim_force --ros-args -p urdf_path:=src/frcobot_ros2/fairino_description/urdf/fairino3_v6.urdf   # 正常运行

ros2 topic pub /joint_states sensor_msgs/msg/JointState \
  "{header: {stamp: {sec: 0, nanosec: 0}, frame_id: ''},
    name: ['joint1','joint2','joint3','joint4','joint5','joint6'],
    position: [0.0, -0.5236, 1.0472, -0.5236, 1.5708, 0.0],
    velocity: [0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
    effort:   [0.0, 0.0, 0.0, 0.0, 0.0, 0.0]}" \
  --rate 100

ros2 topic echo /flange_wrench
```
## 核心接口

**配置接口**

| 方法 | 说明 | 状态 |
|------|------|------|
| `SetConfig(λ, threshold)` | 设置阻尼系数与奇异阈值 | ✅ |
| `SetToolPayload(m, com)` | 工具质量与质心偏置，仅可调用一次 | ✅ |
| `SetSimForce(w)` / `ClearSimForce()` | 注入或清除仿真外力，格式 nx ny nz fx fy fz | ✅ |

**估算接口**

| 方法 | 返回 | 说明 | 状态 |
|------|------|------|------|
| `Estimate(q,qd,qdd,tau)` | `ForceResult` | wrist3 处力旋量，base 系 | ✅ |
| `EstimateAtFlange(q,qd,qdd,tau)` | `EndEffectorWrench` | 变换至法兰，有实测力矩 | ✅ |
| `EstimateAtFlange(q,qd,qdd)` | `EndEffectorWrench` | 仿真模式，无需 tau_meas | ✅ |
| `BuildSimTauMeas(q,qd,qdd)` | `VectorXd` | 正向构造仿真关节力矩 | ✅ |

## 测试说明

| 测试文件 | 类型 | 内容 |
|----------|------|------|
| `test_wrench_estimate_smoke.cpp` | Smoke | 接口可调用、不崩溃 |
| `test_wrench_estimate_val.cpp` | 数值验证 | 多组case，全位形全轴力旋量回路验证 |
| `test_wrench_estimate_pinocchio.cpp` | 集成测试 | Pinocchio RNEA + 闭环力恢复验证 |