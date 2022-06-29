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
get_factory_moveit_msgs__msg__Grasp(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "moveit_msgs/Grasp" ||
     ros1_type_name == "") &&
    ros2_type_name == "moveit_msgs/msg/Grasp")
  {
    return std::make_shared<
      Factory<
        moveit_msgs::Grasp,
        moveit_msgs::msg::Grasp
      >
    >("moveit_msgs/Grasp", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__msg__Grasp(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  moveit_msgs::Grasp,
  moveit_msgs::msg::Grasp
>::convert_1_to_2(
  const moveit_msgs::Grasp & ros1_msg,
  moveit_msgs::msg::Grasp & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.id = ros1_msg.id;

  // convert non-array field
  // convert sub message field
  Factory<
    trajectory_msgs::JointTrajectory,
    trajectory_msgs::msg::JointTrajectory
  >::convert_1_to_2(
    ros1_msg.pre_grasp_posture, ros2_msg.pre_grasp_posture);

  // convert non-array field
  // convert sub message field
  Factory<
    trajectory_msgs::JointTrajectory,
    trajectory_msgs::msg::JointTrajectory
  >::convert_1_to_2(
    ros1_msg.grasp_posture, ros2_msg.grasp_posture);

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::PoseStamped,
    geometry_msgs::msg::PoseStamped
  >::convert_1_to_2(
    ros1_msg.grasp_pose, ros2_msg.grasp_pose);

  // convert non-array field
  // convert primitive field
  ros2_msg.grasp_quality = ros1_msg.grasp_quality;

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::GripperTranslation,
    moveit_msgs::msg::GripperTranslation
  >::convert_1_to_2(
    ros1_msg.pre_grasp_approach, ros2_msg.pre_grasp_approach);

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::GripperTranslation,
    moveit_msgs::msg::GripperTranslation
  >::convert_1_to_2(
    ros1_msg.post_grasp_retreat, ros2_msg.post_grasp_retreat);

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::GripperTranslation,
    moveit_msgs::msg::GripperTranslation
  >::convert_1_to_2(
    ros1_msg.post_place_retreat, ros2_msg.post_place_retreat);

  // convert non-array field
  // convert primitive field
  ros2_msg.max_contact_force = ros1_msg.max_contact_force;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.allowed_touch_objects.resize(ros1_msg.allowed_touch_objects.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.allowed_touch_objects.begin(),
    ros1_msg.allowed_touch_objects.end(),
    ros2_msg.allowed_touch_objects.begin());
}

template<>
void
Factory<
  moveit_msgs::Grasp,
  moveit_msgs::msg::Grasp
>::convert_2_to_1(
  const moveit_msgs::msg::Grasp & ros2_msg,
  moveit_msgs::Grasp & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.id = ros2_msg.id;

  // convert non-array field
  // convert sub message field
  Factory<
    trajectory_msgs::JointTrajectory,
    trajectory_msgs::msg::JointTrajectory
  >::convert_2_to_1(
    ros2_msg.pre_grasp_posture, ros1_msg.pre_grasp_posture);

  // convert non-array field
  // convert sub message field
  Factory<
    trajectory_msgs::JointTrajectory,
    trajectory_msgs::msg::JointTrajectory
  >::convert_2_to_1(
    ros2_msg.grasp_posture, ros1_msg.grasp_posture);

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::PoseStamped,
    geometry_msgs::msg::PoseStamped
  >::convert_2_to_1(
    ros2_msg.grasp_pose, ros1_msg.grasp_pose);

  // convert non-array field
  // convert primitive field
  ros1_msg.grasp_quality = ros2_msg.grasp_quality;

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::GripperTranslation,
    moveit_msgs::msg::GripperTranslation
  >::convert_2_to_1(
    ros2_msg.pre_grasp_approach, ros1_msg.pre_grasp_approach);

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::GripperTranslation,
    moveit_msgs::msg::GripperTranslation
  >::convert_2_to_1(
    ros2_msg.post_grasp_retreat, ros1_msg.post_grasp_retreat);

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::GripperTranslation,
    moveit_msgs::msg::GripperTranslation
  >::convert_2_to_1(
    ros2_msg.post_place_retreat, ros1_msg.post_place_retreat);

  // convert non-array field
  // convert primitive field
  ros1_msg.max_contact_force = ros2_msg.max_contact_force;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.allowed_touch_objects.resize(ros2_msg.allowed_touch_objects.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.allowed_touch_objects.begin(),
    ros2_msg.allowed_touch_objects.end(),
    ros1_msg.allowed_touch_objects.begin());
}
}  // namespace ros1_bridge
