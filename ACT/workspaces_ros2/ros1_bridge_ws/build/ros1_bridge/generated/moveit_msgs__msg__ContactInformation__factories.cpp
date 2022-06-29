// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__ContactInformation(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "moveit_msgs/ContactInformation" ||
     ros1_type_name == "") &&
    ros2_type_name == "moveit_msgs/msg/ContactInformation")
  {
    return std::make_shared<
      Factory<
        moveit_msgs::ContactInformation,
        moveit_msgs::msg::ContactInformation
      >
    >("moveit_msgs/ContactInformation", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__msg__ContactInformation(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  moveit_msgs::ContactInformation,
  moveit_msgs::msg::ContactInformation
>::convert_1_to_2(
  const moveit_msgs::ContactInformation & ros1_msg,
  moveit_msgs::msg::ContactInformation & ros2_msg)
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
    geometry_msgs::Point,
    geometry_msgs::msg::Point
  >::convert_1_to_2(
    ros1_msg.position, ros2_msg.position);

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_1_to_2(
    ros1_msg.normal, ros2_msg.normal);

  // convert non-array field
  // convert primitive field
  ros2_msg.depth = ros1_msg.depth;

  // convert non-array field
  // convert primitive field
  ros2_msg.contact_body_1 = ros1_msg.contact_body_1;

  // convert non-array field
  // convert primitive field
  ros2_msg.body_type_1 = ros1_msg.body_type_1;

  // convert non-array field
  // convert primitive field
  ros2_msg.contact_body_2 = ros1_msg.contact_body_2;

  // convert non-array field
  // convert primitive field
  ros2_msg.body_type_2 = ros1_msg.body_type_2;
}

template<>
void
Factory<
  moveit_msgs::ContactInformation,
  moveit_msgs::msg::ContactInformation
>::convert_2_to_1(
  const moveit_msgs::msg::ContactInformation & ros2_msg,
  moveit_msgs::ContactInformation & ros1_msg)
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
    geometry_msgs::Point,
    geometry_msgs::msg::Point
  >::convert_2_to_1(
    ros2_msg.position, ros1_msg.position);

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_2_to_1(
    ros2_msg.normal, ros1_msg.normal);

  // convert non-array field
  // convert primitive field
  ros1_msg.depth = ros2_msg.depth;

  // convert non-array field
  // convert primitive field
  ros1_msg.contact_body_1 = ros2_msg.contact_body_1;

  // convert non-array field
  // convert primitive field
  ros1_msg.body_type_1 = ros2_msg.body_type_1;

  // convert non-array field
  // convert primitive field
  ros1_msg.contact_body_2 = ros2_msg.contact_body_2;

  // convert non-array field
  // convert primitive field
  ros1_msg.body_type_2 = ros2_msg.body_type_2;
}
}  // namespace ros1_bridge
