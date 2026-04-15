cmake_minimum_required(VERSION 3.18)         
project(rus_sim_force)

set(CMAKE_CXX_STANDARD 17)                    
set(CMAKE_CXX_STANDARD_REQUIRED On)           
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)       

option(ENABLE_TEST "Include test code in executable" ON)  

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
     
file(GLOB TEST_FILES test/src/*.cpp)                    

# ─────────────────────────────────────────────────────────────
# 核心静态库
# ─────────────────────────────────────────────────────────────
add_library(rus_sim_force_core STATIC
  src/rus_sim_force/wrench_estimate.cpp   
)

target_include_directories(rus_sim_force_core PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

ament_target_dependencies(rus_sim_force_core PUBLIC     
  rclcpp
  urdf
)

target_link_libraries(rus_sim_force_core PUBLIC         
  Eigen3::Eigen
  pinocchio::pinocchio
)

# ─────────────────────────────────────────────────────────────
# 主程序
# ─────────────────────────────────────────────────────────────
set(MAIN_SOURCES
  src/main.cpp
  src/rus_sim_force/wrench_pub_node.cpp
)

if(ENABLE_TEST)                                         
  list(APPEND MAIN_SOURCES ${TEST_FILES})
  add_definitions(-DENABLE_TESTING)                     
endif()

add_executable(rus_sim_force ${MAIN_SOURCES})           

target_include_directories(rus_sim_force PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/include
  ${CMAKE_CURRENT_SOURCE_DIR}/test/test_include
)

target_link_libraries(rus_sim_force PRIVATE
  rus_sim_force_core                                    
)

ament_target_dependencies(rus_sim_force PUBLIC
  rclcpp
  sensor_msgs
  geometry_msgs
)

# ─────────────────────────────────────────────────────────────
# 安装
# ─────────────────────────────────────────────────────────────
install(TARGETS rus_sim_force
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY include/
  DESTINATION include
)

install(DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)

ament_package()