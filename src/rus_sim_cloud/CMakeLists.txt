cmake_minimum_required(VERSION 3.18)
project(rus_sim_cloud)
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

# 测试选项设置
option(ENABLE_TEST "Include test code in executable" ON)
# option(ENABLE_TEST "Include test code in executable" OFF)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
# ROS2 包
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(shape_msgs REQUIRED)
find_package(fairino_msgs REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(tf2_eigen REQUIRED)
find_package(std_msgs REQUIRED)
# 第三方包
find_package(PCL REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(pcl_conversions REQUIRED)
# 自定义包
find_package(rus_sim_interfaces REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

set(LIBIGL_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../third_party/libigl/include)  # libigl 库目录
file(GLOB SRC_FILES src/${PROJECT_NAME}/*.cpp)  # 核心源文件
file(GLOB TEST_FILES ${CMAKE_CURRENT_SOURCE_DIR}/test/src/*.cpp)  # 测试源文件

# ------------------- 核心静态库 -------------------
add_library(cloud_core STATIC ${SRC_FILES})

target_include_directories(cloud_core PUBLIC
  ${LIBIGL_INCLUDE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

ament_target_dependencies(cloud_core PUBLIC
  rclcpp
  sensor_msgs
  shape_msgs
  pcl_conversions
  rus_sim_interfaces
  tf2_ros
  tf2_eigen
  tf2_geometry_msgs
  fairino_msgs
  std_msgs
)

target_link_libraries(cloud_core PUBLIC
  Eigen3::Eigen
  ${PCL_LIBRARIES}
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

add_executable(rus_sim_cloud ${MAIN_SOURCES})

target_link_libraries(rus_sim_cloud PRIVATE
  cloud_core
)

ament_target_dependencies(rus_sim_cloud PUBLIC
  rclcpp
  sensor_msgs
  shape_msgs
  pcl_conversions
  tf2_geometry_msgs
  tf2_ros
  tf2_eigen
  rus_sim_interfaces
  fairino_msgs
  std_msgs
)

target_include_directories(rus_sim_cloud PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/test  # 链接测试用头文件
)

install(TARGETS rus_sim_cloud
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY config/
  DESTINATION share/${PROJECT_NAME}/config
)

install(DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)

# if(BUILD_TESTING)
#   find_package(ament_lint_auto REQUIRED)
#   # the following line skips the linter which checks for copyrights
#   # comment the line when a copyright and license is added to all source files
#   set(ament_cmake_copyright_FOUND TRUE)
#   # the following line skips cpplint (only works in a git repo)
#   # comment the line when this package is in a git repo and when
#   # a copyright and license is added to all source files
#   set(ament_cmake_cpplint_FOUND TRUE)
#   ament_lint_auto_find_test_dependencies()
# endif()

ament_package()
