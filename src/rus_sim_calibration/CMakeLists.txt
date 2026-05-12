cmake_minimum_required(VERSION 3.18)
project(rus_sim_calibration)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED On)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(image_transport REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(OpenCV REQUIRED)

file(GLOB SRC_FILES src/${PROJECT_NAME}/*.cpp)

add_library(calibration_core STATIC ${SRC_FILES})

target_include_directories(calibration_core PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

ament_target_dependencies(calibration_core PUBLIC
  rclcpp
  sensor_msgs
  cv_bridge
  image_transport
  geometry_msgs
)

target_link_libraries(calibration_core PUBLIC
  Eigen3::Eigen
  ${OpenCV_LIBS}
)

add_executable(rus_sim_calibration src/main.cpp)

target_link_libraries(rus_sim_calibration PRIVATE
  calibration_core
)

ament_target_dependencies(rus_sim_calibration PUBLIC
  rclcpp
  sensor_msgs
  cv_bridge
  image_transport
  geometry_msgs
)

install(TARGETS rus_sim_calibration
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY config/
  DESTINATION share/${PROJECT_NAME}/config
)

install(DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)

ament_package()
