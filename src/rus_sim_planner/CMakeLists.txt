cmake_minimum_required(VERSION 3.18)
project(rus_sim_planner)
# 设置使用C++17标准，并启用编译命令导出
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED On)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 编译优化配置
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release CACHE STRING "Choose the type of build." FORCE)
endif()
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG" CACHE STRING "Flags used by the compiler during release builds." FORCE)
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g" CACHE STRING "Flags used by the compiler during debug builds." FORCE)
add_compile_options(-Wall -Wextra)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# 测试选项设置
option(ENABLE_TEST "Include test code in executable" ON)
# option(ENABLE_TEST "Include test code in executable" OFF)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(rclcpp REQUIRED)
# MoveIt核心接口包
find_package(moveit_ros_planning_interface REQUIRED)
# 可选：可视化工具，推荐引入
find_package(moveit_visual_tools REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(shape_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(PCL REQUIRED)
find_package(pcl_conversions REQUIRED)
find_package(Boost REQUIRED COMPONENTS graph)
if(Boost_FOUND)
  include_directories(${Boost_INCLUDE_DIRS})
endif()
find_package(rus_sim_interfaces REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

# 设置包含目录和源文件
set(LIBIGL_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../third_party/libigl/include)  # libigl 库目录
file(GLOB SRC_FILES src/rus_sim_planner/*.cpp)
file(GLOB TEST_FILES ${CMAKE_CURRENT_SOURCE_DIR}/test/src/*.cpp)  # 测试源文件

# ------------------- 核心静态库 -------------------
add_library(planner_core STATIC ${SRC_FILES})

target_include_directories(planner_core PUBLIC
  ${PCL_INCLUDE_DIRS}
  ${EIGEN3_INCLUDE_DIRS}
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

ament_target_dependencies(planner_core PUBLIC
  rclcpp
  moveit_ros_planning_interface
  moveit_visual_tools
  sensor_msgs
  rus_sim_interfaces
  shape_msgs
  nav_msgs
  geometry_msgs
  pcl_conversions
  visualization_msgs
  tf2_geometry_msgs
)

target_link_libraries(planner_core PUBLIC
  ${PCL_LIBRARIES}
  Eigen3::Eigen
  ${Boost_LIBRARIES}
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
add_executable(rus_sim_planner ${MAIN_SOURCES})

target_link_libraries(rus_sim_planner PRIVATE
  planner_core
)

ament_target_dependencies(rus_sim_planner PUBLIC
  rclcpp
  moveit_ros_planning_interface
  moveit_visual_tools
  sensor_msgs
  nav_msgs
  rus_sim_interfaces
  shape_msgs
  geometry_msgs
  visualization_msgs
  pcl_conversions
  tf2_geometry_msgs
)

target_include_directories(rus_sim_planner PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/test  # 链接测试用头文件
  ${LIBIGL_INCLUDE_DIR}
)

install(TARGETS rus_sim_planner
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
