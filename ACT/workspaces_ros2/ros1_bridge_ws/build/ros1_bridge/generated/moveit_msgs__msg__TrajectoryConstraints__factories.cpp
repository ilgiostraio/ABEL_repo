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
get_factory_moveit_msgs__msg__TrajectoryConstraints(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "moveit_msgs/TrajectoryConstraints" ||
     ros1_type_name == "") &&
    ros2_type_name == "moveit_msgs/msg/TrajectoryConstraints")
  {
    return std::make_shared<
      Factory<
        moveit_msgs::TrajectoryConstraints,
        moveit_msgs::msg::TrajectoryConstraints
      >
    >("moveit_msgs/TrajectoryConstraints", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__msg__TrajectoryConstraints(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  moveit_msgs::TrajectoryConstraints,
  moveit_msgs::msg::TrajectoryConstraints
>::convert_1_to_2(
  const moveit_msgs::TrajectoryConstraints & ros1_msg,
  moveit_msgs::msg::TrajectoryConstraints & ros2_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.constraints.resize(ros1_msg.constraints.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.constraints.cbegin();
    auto ros2_it = ros2_msg.constraints.begin();
    for (
      ;
      ros1_it != ros1_msg.constraints.cend() &&
      ros2_it != ros2_msg.constraints.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::Constraints,
        moveit_msgs::msg::Constraints
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  moveit_msgs::TrajectoryConstraints,
  moveit_msgs::msg::TrajectoryConstraints
>::convert_2_to_1(
  const moveit_msgs::msg::TrajectoryConstraints & ros2_msg,
  moveit_msgs::TrajectoryConstraints & ros1_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.constraints.resize(ros2_msg.constraints.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.constraints.cbegin();
    auto ros1_it = ros1_msg.constraints.begin();
    for (
      ;
      ros2_it != ros2_msg.constraints.cend() &&
      ros1_it != ros1_msg.constraints.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::Constraints,
        moveit_msgs::msg::Constraints
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}
}  // namespace ros1_bridge
