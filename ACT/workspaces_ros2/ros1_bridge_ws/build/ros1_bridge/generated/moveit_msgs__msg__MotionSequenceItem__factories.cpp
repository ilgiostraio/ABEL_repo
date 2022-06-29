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
get_factory_moveit_msgs__msg__MotionSequenceItem(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "moveit_msgs/MotionSequenceItem" ||
     ros1_type_name == "") &&
    ros2_type_name == "moveit_msgs/msg/MotionSequenceItem")
  {
    return std::make_shared<
      Factory<
        moveit_msgs::MotionSequenceItem,
        moveit_msgs::msg::MotionSequenceItem
      >
    >("moveit_msgs/MotionSequenceItem", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__msg__MotionSequenceItem(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  moveit_msgs::MotionSequenceItem,
  moveit_msgs::msg::MotionSequenceItem
>::convert_1_to_2(
  const moveit_msgs::MotionSequenceItem & ros1_msg,
  moveit_msgs::msg::MotionSequenceItem & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::MotionPlanRequest,
    moveit_msgs::msg::MotionPlanRequest
  >::convert_1_to_2(
    ros1_msg.req, ros2_msg.req);

  // convert non-array field
  // convert primitive field
  ros2_msg.blend_radius = ros1_msg.blend_radius;
}

template<>
void
Factory<
  moveit_msgs::MotionSequenceItem,
  moveit_msgs::msg::MotionSequenceItem
>::convert_2_to_1(
  const moveit_msgs::msg::MotionSequenceItem & ros2_msg,
  moveit_msgs::MotionSequenceItem & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::MotionPlanRequest,
    moveit_msgs::msg::MotionPlanRequest
  >::convert_2_to_1(
    ros2_msg.req, ros1_msg.req);

  // convert non-array field
  // convert primitive field
  ros1_msg.blend_radius = ros2_msg.blend_radius;
}
}  // namespace ros1_bridge
