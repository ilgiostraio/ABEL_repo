// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "octomap_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_octomap_msgs__msg__Octomap(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "octomap_msgs/Octomap" ||
     ros1_type_name == "") &&
    ros2_type_name == "octomap_msgs/msg/Octomap")
  {
    return std::make_shared<
      Factory<
        octomap_msgs::Octomap,
        octomap_msgs::msg::Octomap
      >
    >("octomap_msgs/Octomap", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_octomap_msgs__msg__Octomap(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  octomap_msgs::Octomap,
  octomap_msgs::msg::Octomap
>::convert_1_to_2(
  const octomap_msgs::Octomap & ros1_msg,
  octomap_msgs::msg::Octomap & ros2_msg)
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
  ros2_msg.binary = ros1_msg.binary;

  // convert non-array field
  // convert primitive field
  ros2_msg.id = ros1_msg.id;

  // convert non-array field
  // convert primitive field
  ros2_msg.resolution = ros1_msg.resolution;

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
  octomap_msgs::Octomap,
  octomap_msgs::msg::Octomap
>::convert_2_to_1(
  const octomap_msgs::msg::Octomap & ros2_msg,
  octomap_msgs::Octomap & ros1_msg)
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
  ros1_msg.binary = ros2_msg.binary;

  // convert non-array field
  // convert primitive field
  ros1_msg.id = ros2_msg.id;

  // convert non-array field
  // convert primitive field
  ros1_msg.resolution = ros2_msg.resolution;

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
