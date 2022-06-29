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
get_factory_moveit_msgs__msg__AttachedCollisionObject(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "moveit_msgs/AttachedCollisionObject" ||
     ros1_type_name == "") &&
    ros2_type_name == "moveit_msgs/msg/AttachedCollisionObject")
  {
    return std::make_shared<
      Factory<
        moveit_msgs::AttachedCollisionObject,
        moveit_msgs::msg::AttachedCollisionObject
      >
    >("moveit_msgs/AttachedCollisionObject", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__msg__AttachedCollisionObject(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  moveit_msgs::AttachedCollisionObject,
  moveit_msgs::msg::AttachedCollisionObject
>::convert_1_to_2(
  const moveit_msgs::AttachedCollisionObject & ros1_msg,
  moveit_msgs::msg::AttachedCollisionObject & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.link_name = ros1_msg.link_name;

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::CollisionObject,
    moveit_msgs::msg::CollisionObject
  >::convert_1_to_2(
    ros1_msg.object, ros2_msg.object);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.touch_links.resize(ros1_msg.touch_links.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.touch_links.begin(),
    ros1_msg.touch_links.end(),
    ros2_msg.touch_links.begin());

  // convert non-array field
  // convert sub message field
  Factory<
    trajectory_msgs::JointTrajectory,
    trajectory_msgs::msg::JointTrajectory
  >::convert_1_to_2(
    ros1_msg.detach_posture, ros2_msg.detach_posture);

  // convert non-array field
  // convert primitive field
  ros2_msg.weight = ros1_msg.weight;
}

template<>
void
Factory<
  moveit_msgs::AttachedCollisionObject,
  moveit_msgs::msg::AttachedCollisionObject
>::convert_2_to_1(
  const moveit_msgs::msg::AttachedCollisionObject & ros2_msg,
  moveit_msgs::AttachedCollisionObject & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.link_name = ros2_msg.link_name;

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::CollisionObject,
    moveit_msgs::msg::CollisionObject
  >::convert_2_to_1(
    ros2_msg.object, ros1_msg.object);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.touch_links.resize(ros2_msg.touch_links.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.touch_links.begin(),
    ros2_msg.touch_links.end(),
    ros1_msg.touch_links.begin());

  // convert non-array field
  // convert sub message field
  Factory<
    trajectory_msgs::JointTrajectory,
    trajectory_msgs::msg::JointTrajectory
  >::convert_2_to_1(
    ros2_msg.detach_posture, ros1_msg.detach_posture);

  // convert non-array field
  // convert primitive field
  ros1_msg.weight = ros2_msg.weight;
}
}  // namespace ros1_bridge
