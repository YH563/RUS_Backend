# 封装一帧超声图像及其对应的探头位姿和扫查参数

# 超声图像
sensor_msgs/Image image

# 探头位姿
geometry_msgs/Pose pose

# 扫查参数
float32 depth        # 成像深度（mm）
float32 gain         # 增益（dB）
float32 frequency    # 探头频率（MHz）

# 时间戳（用于同步和记录）
builtin_interfaces/Time timestamp