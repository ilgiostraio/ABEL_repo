// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "map_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_map_msgs__msg__OccupancyGridUpdate(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "map_msgs/OccupancyGridUpdate" ||
     ros1_type_name == "") &&
    ros2_type_name == "map_msgs/msg/OccupancyGridUpdate")
  {
    return std::make_shared<
      Factory<
        map_msgs::OccupancyGridUpdate,
        map_msgs::msg::OccupancyGridUpdate
      >
    >("map_msgs/OccupancyGridUpdate", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_map_msgs__msg__OccupancyGridUpdate(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  (void)ros_id;
  (void)package_name;
  (void)service_name;
  return nullptr;
}
// conversion functions for available interfaces

template<>
void
Factory<
  map_msgs::OccupancyGridUpdate,
  map_msgs::msg::OccupancyGridUpdate
>::convert_1_to_2(
  const map_msgs::OccupancyGridUpdate & ros1_msg,
  map_msgs::msg::OccupancyGridUpdate & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);

  // convert non-array field
  // convert primitive field
  ros2_msg.x = ros1_msg.x;

  // convert non-array field
  // convert primitive field
  ros2_msg.y = ros1_msg.y;

  // convert non-array field
  // convert primitive field
  ros2_msg.width = ros1_msg.width;

  // convert non-array field
  // convert primitive field
  ros2_msg.height = ros1_msg.height;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.data.resize(ros1_msg.data.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.data.begin(),
    ros1_msg.data.end(),
    ros2_msg.data.begin());
}

template<>
void
Factory<
  map_msgs::OccupancyGridUpdate,
  map_msgs::msg::OccupancyGridUpdate
>::convert_2_to_1(
  const map_msgs::msg::OccupancyGridUpdate & ros2_msg,
  map_msgs::OccupancyGridUpdate & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);

  // convert non-array field
  // convert primitive field
  ros1_msg.x = ros2_msg.x;

  // convert non-array field
  // convert primitive field
  ros1_msg.y = ros2_msg.y;

  // convert non-array field
  // convert primitive field
  ros1_msg.width = ros2_msg.width;

  // convert non-array field
  // convert primitive field
  ros1_msg.height = ros2_msg.height;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.data.resize(ros2_msg.data.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.data.begin(),
    ros2_msg.data.end(),
    ros1_msg.data.begin());
}
}  // namespace ros1_bridge
