cmake_minimum_required(VERSION 3.8)
project(rus_sim_force)

option(ENABLE_TESTING "Include test code in executable" ON)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# ─────────────────────────────────────────────────────────────
# 依赖
# ─────────────────────────────────────────────────────────────
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(urdf REQUIRED)
find_package(pinocchio REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)

# ─────────────────────────────────────────────────────────────
# 核心库：算法实现
# 你的真实路径在 src/rus_sim_force/
# ─────────────────────────────────────────────────────────────
add_library(wrench_estimate STATIC
  src/rus_sim_force/wrench_estimate.cpp
)

target_include_directories(wrench_estimate PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

target_link_libraries(wrench_estimate
  Eigen3::Eigen
  pinocchio::pinocchio
)

ament_target_dependencies(wrench_estimate
  rclcpp
  urdf
)

# ─────────────────────────────────────────────────────────────
# 主程序：main + ROS2 节点
# 节点实现也在 src/rus_sim_force/
# ─────────────────────────────────────────────────────────────
set(MAIN_SOURCES
  src/main.cpp
  src/rus_sim_force/wrench_pub_node.cpp
)

if(ENABLE_TESTING)
  file(GLOB TEST_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/test/src/*.cpp
  )
  list(APPEND MAIN_SOURCES ${TEST_SOURCES})
endif()

add_executable(wrench_estimate_node
  ${MAIN_SOURCES}
)

target_include_directories(wrench_estimate_node PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/include
  ${CMAKE_CURRENT_SOURCE_DIR}/test/test_include
)

target_link_libraries(wrench_estimate_node
  wrench_estimate
)

ament_target_dependencies(wrench_estimate_node
  rclcpp
  sensor_msgs
  geometry_msgs
)

if(ENABLE_TESTING)
  target_compile_definitions(wrench_estimate_node PRIVATE ENABLE_TESTING)
endif()

# ─────────────────────────────────────────────────────────────
# 安装
# ─────────────────────────────────────────────────────────────
install(TARGETS
  wrench_estimate
  wrench_estimate_node
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY include/
  DESTINATION include
)

install(DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)

ament_package()