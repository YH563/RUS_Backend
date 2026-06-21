cmake_minimum_required(VERSION 3.8)
project(fairino_hardware)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic -fPIC -g -ggdb3)
endif()

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_STANDARD 17)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(hardware_interface REQUIRED)
find_package(pluginlib REQUIRED)
find_package(rclcpp_lifecycle REQUIRED)
find_package(fairino_msgs REQUIRED)

# 直接指定 Fairino SDK 库的完整路径（使用实际存在的版本文件）
set(FAIRINO_LIB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/libfairino/lib)
set(FAIRINO_LIB ${FAIRINO_LIB_DIR}/libfairino.so.2.1.4)
if(NOT EXISTS ${FAIRINO_LIB})
    message(FATAL_ERROR "libfairino.so.2.1.4 not found in ${FAIRINO_LIB_DIR}. Please check the directory contents.")
endif()
message(STATUS "Found Fairino SDK: ${FAIRINO_LIB}")

# 源文件
set(COMMAND_SERVER_SRC
    ./src/command_server.cpp
    ./src/command_server_node.cpp
)
set(FAIRINO_HARDWARE_SRC
    ./src/fairino_hardware_interface.cpp
)

# 可执行文件：ros2_cmd_server
add_executable(ros2_cmd_server ${COMMAND_SERVER_SRC})
target_include_directories(ros2_cmd_server PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}
)
target_link_libraries(ros2_cmd_server ${FAIRINO_LIB})
ament_target_dependencies(ros2_cmd_server rclcpp fairino_msgs)

# 可执行文件：测试客户端（如果有源文件）
set(TEST_CLIENT_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/examples/src)
if(EXISTS ${TEST_CLIENT_SRC_DIR})
    file(GLOB TEST_CLIENT_SRC ${TEST_CLIENT_SRC_DIR}/*.cpp)
    if(TEST_CLIENT_SRC)
        add_executable(srv_test_client ${TEST_CLIENT_SRC})
        target_include_directories(srv_test_client PUBLIC
            ${CMAKE_CURRENT_SOURCE_DIR}/examples/include
        )
        target_link_libraries(srv_test_client ${FAIRINO_LIB})
        ament_target_dependencies(srv_test_client rclcpp fairino_msgs)
        install(TARGETS srv_test_client
            DESTINATION lib/${PROJECT_NAME}
        )
    else()
        message(STATUS "No source files found in ${TEST_CLIENT_SRC_DIR}, skipping srv_test_client")
    endif()
else()
    message(STATUS "Directory ${TEST_CLIENT_SRC_DIR} does not exist, skipping srv_test_client")
endif()

# 硬件接口库
add_library(fairino_hardware SHARED ${FAIRINO_HARDWARE_SRC})
target_include_directories(fairino_hardware PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include/fairino_hardware>
)
target_link_libraries(fairino_hardware ${FAIRINO_LIB})
ament_target_dependencies(fairino_hardware
    hardware_interface
    pluginlib
    rclcpp
    fairino_msgs
    rclcpp_lifecycle
)

# 导出插件描述
pluginlib_export_plugin_description_file(hardware_interface fairino_hardware.xml)

# 安装目标
install(TARGETS ros2_cmd_server
    DESTINATION lib/${PROJECT_NAME}
)
install(TARGETS fairino_hardware
    EXPORT fairino_hardware
    ARCHIVE DESTINATION lib/${PROJECT_NAME}
    LIBRARY DESTINATION lib/${PROJECT_NAME}
    RUNTIME DESTINATION lib/${PROJECT_NAME}
)

# 安装 Fairino SDK 库（复制并创建符号链接）
install(FILES ${FAIRINO_LIB_DIR}/libfairino.so.2.1.4
        DESTINATION lib/${PROJECT_NAME}
        RENAME libfairino.so.2.1.4
)
install(CODE "
    set(DEST_DIR \"\${CMAKE_INSTALL_PREFIX}/lib/${PROJECT_NAME}\")
    execute_process(COMMAND \${CMAKE_COMMAND} -E create_symlink
        libfairino.so.2.1.4
        \${DEST_DIR}/libfairino.so.2)
    execute_process(COMMAND \${CMAKE_COMMAND} -E create_symlink
        libfairino.so.2
        \${DEST_DIR}/libfairino.so)
")

# 安装头文件（若有）
install(DIRECTORY include/
    DESTINATION include/fairino_hardware
)

if(BUILD_TESTING)
    find_package(ament_lint_auto REQUIRED)
    find_package(ament_cmake_gmock REQUIRED)
    set(ament_cmake_copyright_FOUND TRUE)
    set(ament_cmake_cpplint_FOUND TRUE)
    ament_lint_auto_find_test_dependencies()
endif()

ament_export_targets(fairino_hardware HAS_LIBRARY_TARGET)
ament_export_dependencies(
    ament_cmake
    rclcpp
    hardware_interface
    pluginlib
    rclcpp_lifecycle
)

ament_package()