cmake_minimum_required(VERSION 3.18)
project(rus_sim_motion)
# 设置使用C++17标准，并启用编译命令导出
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED On)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
# MoveIt核心接口包
find_package(moveit_ros_planning_interface REQUIRED)
# 可选：可视化工具，推荐引入
find_package(moveit_visual_tools REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)

find_package(rus_sim_utils REQUIRED)
find_package(rus_sim_interfaces REQUIRED)
find_package(fairino_msgs REQUIRED)

file(GLOB SRC_FILES src/${PROJECT_NAME}/*.cpp)
file(GLOB TEST_FILES ${CMAKE_CURRENT_SOURCE_DIR}/test/src/*.cpp)  # 测试源文件

# ------------------- 核心静态库 -------------------
add_library(motion_core STATIC ${SRC_FILES})

target_include_directories(motion_core PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

ament_target_dependencies(motion_core PUBLIC
  rclcpp
  moveit_ros_planning_interface
  moveit_visual_tools
  std_msgs
  geometry_msgs
  rus_sim_interfaces
  fairino_msgs
  rus_sim_utils
)

# ------------------- 主程序 -------------------
set(MAIN_SOURCES src/main.cpp)

# 如果启用测试，将测试源文件加入主程序
if(ENABLE_TEST)
  # 将测试源文件加入主程序
  list(APPEND MAIN_SOURCES ${TEST_FILES})
  # 定义宏，让代码知道测试模式已启用
  add_definitions(-DENABLE_TESTING)
endif()

# 创建可执行文件
add_executable(${PROJECT_NAME} ${MAIN_SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE
  motion_core
)

ament_target_dependencies(${PROJECT_NAME} PUBLIC
  rclcpp
  moveit_ros_planning_interface
  moveit_visual_tools
  std_msgs
  geometry_msgs
  rus_sim_interfaces
  fairino_msgs
  rus_sim_utils
)

target_include_directories(${PROJECT_NAME} PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/test  # 链接测试用头文件
)

install(TARGETS ${PROJECT_NAME}
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY config/
  DESTINATION share/${PROJECT_NAME}/config
)

install(DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
