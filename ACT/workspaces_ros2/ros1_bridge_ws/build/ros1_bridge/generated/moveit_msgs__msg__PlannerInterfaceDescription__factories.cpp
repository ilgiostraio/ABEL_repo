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
get_factory_moveit_msgs__msg__PlannerInterfaceDescription(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "moveit_msgs/PlannerInterfaceDescription" ||
     ros1_type_name == "") &&
    ros2_type_name == "moveit_msgs/msg/PlannerInterfaceDescription")
  {
    return std::make_shared<
      Factory<
        moveit_msgs::PlannerInterfaceDescription,
        moveit_msgs::msg::PlannerInterfaceDescription
      >
    >("moveit_msgs/PlannerInterfaceDescription", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__msg__PlannerInterfaceDescription(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  moveit_msgs::PlannerInterfaceDescription,
  moveit_msgs::msg::PlannerInterfaceDescription
>::convert_1_to_2(
  const moveit_msgs::PlannerInterfaceDescription & ros1_msg,
  moveit_msgs::msg::PlannerInterfaceDescription & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.name = ros1_msg.name;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.planner_ids.resize(ros1_msg.planner_ids.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.planner_ids.begin(),
    ros1_msg.planner_ids.end(),
    ros2_msg.planner_ids.begin());
}

template<>
void
Factory<
  moveit_msgs::PlannerInterfaceDescription,
  moveit_msgs::msg::PlannerInterfaceDescription
>::convert_2_to_1(
  const moveit_msgs::msg::PlannerInterfaceDescription & ros2_msg,
  moveit_msgs::PlannerInterfaceDescription & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.name = ros2_msg.name;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.planner_ids.resize(ros2_msg.planner_ids.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.planner_ids.begin(),
    ros2_msg.planner_ids.end(),
    ros1_msg.planner_ids.begin());
}
}  // namespace ros1_bridge
