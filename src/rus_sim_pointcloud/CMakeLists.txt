cmake_minimum_required(VERSION 3.18)
project(rus_sim_pointcloud)
# 设置使用C++17标准，并启用编译命令导出
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED On)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 测试选项设置
option(ENABLE_TEST "Include test code in executable" ON)
# option(ENABLE_TEST "Include test code in executable" OFF)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(PCL REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(shape_msgs REQUIRED)
find_package(pcl_conversions REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

set(LIBIGL_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../third_party/libigl/include)  # libigl 库目录
file(GLOB SRC_FILES src/${PROJECT_NAME}/*.cpp)  # 核心源文件
file(GLOB TEST_FILES ${CMAKE_CURRENT_SOURCE_DIR}/test/src/*.cpp)  # 测试源文件

# ------------------- 核心静态库 -------------------
add_library(pointcloud_core STATIC ${SRC_FILES})

target_include_directories(pointcloud_core PUBLIC
  ${LIBIGL_INCLUDE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

ament_target_dependencies(pointcloud_core PUBLIC
  rclcpp
  sensor_msgs
  shape_msgs
  pcl_conversions
)

target_link_libraries(pointcloud_core PUBLIC
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

add_executable(rus_sim_pointcloud ${MAIN_SOURCES})

target_link_libraries(rus_sim_pointcloud PRIVATE
  pointcloud_core
)

ament_target_dependencies(rus_sim_pointcloud PUBLIC
  rclcpp
  sensor_msgs
  shape_msgs
  pcl_conversions
)

target_include_directories(rus_sim_pointcloud PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/test  # 链接测试用头文件
)

install(TARGETS rus_sim_pointcloud
  DESTINATION lib/${PROJECT_NAME}
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
