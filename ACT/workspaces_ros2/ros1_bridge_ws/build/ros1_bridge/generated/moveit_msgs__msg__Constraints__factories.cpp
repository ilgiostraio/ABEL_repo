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
get_factory_moveit_msgs__msg__Constraints(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "moveit_msgs/Constraints" ||
     ros1_type_name == "") &&
    ros2_type_name == "moveit_msgs/msg/Constraints")
  {
    return std::make_shared<
      Factory<
        moveit_msgs::Constraints,
        moveit_msgs::msg::Constraints
      >
    >("moveit_msgs/Constraints", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__msg__Constraints(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  moveit_msgs::Constraints,
  moveit_msgs::msg::Constraints
>::convert_1_to_2(
  const moveit_msgs::Constraints & ros1_msg,
  moveit_msgs::msg::Constraints & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.name = ros1_msg.name;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.joint_constraints.resize(ros1_msg.joint_constraints.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.joint_constraints.cbegin();
    auto ros2_it = ros2_msg.joint_constraints.begin();
    for (
      ;
      ros1_it != ros1_msg.joint_constraints.cend() &&
      ros2_it != ros2_msg.joint_constraints.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::JointConstraint,
        moveit_msgs::msg::JointConstraint
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.position_constraints.resize(ros1_msg.position_constraints.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.position_constraints.cbegin();
    auto ros2_it = ros2_msg.position_constraints.begin();
    for (
      ;
      ros1_it != ros1_msg.position_constraints.cend() &&
      ros2_it != ros2_msg.position_constraints.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::PositionConstraint,
        moveit_msgs::msg::PositionConstraint
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.orientation_constraints.resize(ros1_msg.orientation_constraints.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.orientation_constraints.cbegin();
    auto ros2_it = ros2_msg.orientation_constraints.begin();
    for (
      ;
      ros1_it != ros1_msg.orientation_constraints.cend() &&
      ros2_it != ros2_msg.orientation_constraints.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::OrientationConstraint,
        moveit_msgs::msg::OrientationConstraint
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.visibility_constraints.resize(ros1_msg.visibility_constraints.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.visibility_constraints.cbegin();
    auto ros2_it = ros2_msg.visibility_constraints.begin();
    for (
      ;
      ros1_it != ros1_msg.visibility_constraints.cend() &&
      ros2_it != ros2_msg.visibility_constraints.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::VisibilityConstraint,
        moveit_msgs::msg::VisibilityConstraint
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  moveit_msgs::Constraints,
  moveit_msgs::msg::Constraints
>::convert_2_to_1(
  const moveit_msgs::msg::Constraints & ros2_msg,
  moveit_msgs::Constraints & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.name = ros2_msg.name;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.joint_constraints.resize(ros2_msg.joint_constraints.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.joint_constraints.cbegin();
    auto ros1_it = ros1_msg.joint_constraints.begin();
    for (
      ;
      ros2_it != ros2_msg.joint_constraints.cend() &&
      ros1_it != ros1_msg.joint_constraints.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::JointConstraint,
        moveit_msgs::msg::JointConstraint
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.position_constraints.resize(ros2_msg.position_constraints.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.position_constraints.cbegin();
    auto ros1_it = ros1_msg.position_constraints.begin();
    for (
      ;
      ros2_it != ros2_msg.position_constraints.cend() &&
      ros1_it != ros1_msg.position_constraints.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::PositionConstraint,
        moveit_msgs::msg::PositionConstraint
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.orientation_constraints.resize(ros2_msg.orientation_constraints.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.orientation_constraints.cbegin();
    auto ros1_it = ros1_msg.orientation_constraints.begin();
    for (
      ;
      ros2_it != ros2_msg.orientation_constraints.cend() &&
      ros1_it != ros1_msg.orientation_constraints.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::OrientationConstraint,
        moveit_msgs::msg::OrientationConstraint
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.visibility_constraints.resize(ros2_msg.visibility_constraints.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.visibility_constraints.cbegin();
    auto ros1_it = ros1_msg.visibility_constraints.begin();
    for (
      ;
      ros2_it != ros2_msg.visibility_constraints.cend() &&
      ros1_it != ros1_msg.visibility_constraints.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::VisibilityConstraint,
        moveit_msgs::msg::VisibilityConstraint
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}
}  // namespace ros1_bridge
