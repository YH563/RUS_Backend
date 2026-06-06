#pragma once

#include <vector>
#include <string>
#include <memory>

#include <rclcpp/node.hpp>
#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose.hpp>

#include "rus_sim_interfaces/srv/cmd.hpp"
#include "rus_sim_interfaces/srv/generate_trajectory.hpp"
#include "rus_sim_utils/command_definitions.hpp"

namespace RusTransfer
{
    using Pose = geometry_msgs::msg::Pose;

    
}
