// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "control_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_control_msgs__msg__JointJog(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "control_msgs/JointJog" ||
     ros1_type_name == "") &&
    ros2_type_name == "control_msgs/msg/JointJog")
  {
    return std::make_shared<
      Factory<
        control_msgs::JointJog,
        control_msgs::msg::JointJog
      >
    >("control_msgs/JointJog", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_control_msgs__msg__JointJog(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  control_msgs::JointJog,
  control_msgs::msg::JointJog
>::convert_1_to_2(
  const control_msgs::JointJog & ros1_msg,
  control_msgs::msg::JointJog & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.joint_names.resize(ros1_msg.joint_names.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.joint_names.begin(),
    ros1_msg.joint_names.end(),
    ros2_msg.joint_names.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.displacements.resize(ros1_msg.displacements.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.displacements.begin(),
    ros1_msg.displacements.end(),
    ros2_msg.displacements.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.velocities.resize(ros1_msg.velocities.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.velocities.begin(),
    ros1_msg.velocities.end(),
    ros2_msg.velocities.begin());

  // convert non-array field
  // convert primitive field
  ros2_msg.duration = ros1_msg.duration;
}

template<>
void
Factory<
  control_msgs::JointJog,
  control_msgs::msg::JointJog
>::convert_2_to_1(
  const control_msgs::msg::JointJog & ros2_msg,
  control_msgs::JointJog & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.joint_names.resize(ros2_msg.joint_names.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.joint_names.begin(),
    ros2_msg.joint_names.end(),
    ros1_msg.joint_names.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.displacements.resize(ros2_msg.displacements.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.displacements.begin(),
    ros2_msg.displacements.end(),
    ros1_msg.displacements.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.velocities.resize(ros2_msg.velocities.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.velocities.begin(),
    ros2_msg.velocities.end(),
    ros1_msg.velocities.begin());

  // convert non-array field
  // convert primitive field
  ros1_msg.duration = ros2_msg.duration;
}
}  // namespace ros1_bridge
