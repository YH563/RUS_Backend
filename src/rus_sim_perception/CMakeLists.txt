cmake_minimum_required(VERSION 3.18)
project(rus_sim_perception)

# C++17 标准（ROS2 要求）
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED On)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 测试开关
option(ENABLE_TESTING "Include test code" ON)

# 编译警告
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# 必需依赖（无第三方，仅 ROS2 标准）
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(image_transport REQUIRED)
find_package(OpenCV REQUIRED)

# 自动扫描核心代码
file(GLOB SRC_FILES src/${PROJECT_NAME}/*.cpp)
file(GLOB TEST_FILES test/src/*.cpp)

# 核心静态库
add_library(perception_core STATIC ${SRC_FILES})

target_include_directories(perception_core PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

ament_target_dependencies(perception_core PUBLIC
  rclcpp
  sensor_msgs
  cv_bridge
  image_transport
)

target_link_libraries(perception_core PUBLIC ${OpenCV_LIBRARIES})

# 主程序
set(MAIN_SOURCES src/main.cpp)

if(ENABLE_TESTING)
  list(APPEND MAIN_SOURCES ${TEST_FILES})
  add_definitions(-DENABLE_TESTING)
endif()

add_executable(rus_sim_perception ${MAIN_SOURCES})
target_link_libraries(rus_sim_perception PRIVATE perception_core)

target_include_directories(rus_sim_perception PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/test
)

# 安装
install(TARGETS rus_sim_perception
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
