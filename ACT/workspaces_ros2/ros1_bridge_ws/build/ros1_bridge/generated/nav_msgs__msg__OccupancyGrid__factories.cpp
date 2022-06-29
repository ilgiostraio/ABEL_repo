// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "nav_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_nav_msgs__msg__OccupancyGrid(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "nav_msgs/OccupancyGrid" ||
     ros1_type_name == "") &&
    ros2_type_name == "nav_msgs/msg/OccupancyGrid")
  {
    return std::make_shared<
      Factory<
        nav_msgs::OccupancyGrid,
        nav_msgs::msg::OccupancyGrid
      >
    >("nav_msgs/OccupancyGrid", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_nav_msgs__msg__OccupancyGrid(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  nav_msgs::OccupancyGrid,
  nav_msgs::msg::OccupancyGrid
>::convert_1_to_2(
  const nav_msgs::OccupancyGrid & ros1_msg,
  nav_msgs::msg::OccupancyGrid & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);

  // convert non-array field
  // convert sub message field
  Factory<
    nav_msgs::MapMetaData,
    nav_msgs::msg::MapMetaData
  >::convert_1_to_2(
    ros1_msg.info, ros2_msg.info);

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
  nav_msgs::OccupancyGrid,
  nav_msgs::msg::OccupancyGrid
>::convert_2_to_1(
  const nav_msgs::msg::OccupancyGrid & ros2_msg,
  nav_msgs::OccupancyGrid & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);

  // convert non-array field
  // convert sub message field
  Factory<
    nav_msgs::MapMetaData,
    nav_msgs::msg::MapMetaData
  >::convert_2_to_1(
    ros2_msg.info, ros1_msg.info);

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
