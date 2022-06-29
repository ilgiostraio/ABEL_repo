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
get_factory_moveit_msgs__msg__PlannerParams(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "moveit_msgs/PlannerParams" ||
     ros1_type_name == "") &&
    ros2_type_name == "moveit_msgs/msg/PlannerParams")
  {
    return std::make_shared<
      Factory<
        moveit_msgs::PlannerParams,
        moveit_msgs::msg::PlannerParams
      >
    >("moveit_msgs/PlannerParams", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__msg__PlannerParams(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  moveit_msgs::PlannerParams,
  moveit_msgs::msg::PlannerParams
>::convert_1_to_2(
  const moveit_msgs::PlannerParams & ros1_msg,
  moveit_msgs::msg::PlannerParams & ros2_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.keys.resize(ros1_msg.keys.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.keys.begin(),
    ros1_msg.keys.end(),
    ros2_msg.keys.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.values.resize(ros1_msg.values.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.values.begin(),
    ros1_msg.values.end(),
    ros2_msg.values.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.descriptions.resize(ros1_msg.descriptions.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.descriptions.begin(),
    ros1_msg.descriptions.end(),
    ros2_msg.descriptions.begin());
}

template<>
void
Factory<
  moveit_msgs::PlannerParams,
  moveit_msgs::msg::PlannerParams
>::convert_2_to_1(
  const moveit_msgs::msg::PlannerParams & ros2_msg,
  moveit_msgs::PlannerParams & ros1_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.keys.resize(ros2_msg.keys.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.keys.begin(),
    ros2_msg.keys.end(),
    ros1_msg.keys.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.values.resize(ros2_msg.values.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.values.begin(),
    ros2_msg.values.end(),
    ros1_msg.values.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.descriptions.resize(ros2_msg.descriptions.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.descriptions.begin(),
    ros2_msg.descriptions.end(),
    ros1_msg.descriptions.begin());
}
}  // namespace ros1_bridge
