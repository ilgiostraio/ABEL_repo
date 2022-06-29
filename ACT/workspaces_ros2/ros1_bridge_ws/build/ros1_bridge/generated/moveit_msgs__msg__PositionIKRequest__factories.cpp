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
get_factory_moveit_msgs__msg__PositionIKRequest(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "moveit_msgs/PositionIKRequest" ||
     ros1_type_name == "") &&
    ros2_type_name == "moveit_msgs/msg/PositionIKRequest")
  {
    return std::make_shared<
      Factory<
        moveit_msgs::PositionIKRequest,
        moveit_msgs::msg::PositionIKRequest
      >
    >("moveit_msgs/PositionIKRequest", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__msg__PositionIKRequest(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  moveit_msgs::PositionIKRequest,
  moveit_msgs::msg::PositionIKRequest
>::convert_1_to_2(
  const moveit_msgs::PositionIKRequest & ros1_msg,
  moveit_msgs::msg::PositionIKRequest & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.group_name = ros1_msg.group_name;

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::RobotState,
    moveit_msgs::msg::RobotState
  >::convert_1_to_2(
    ros1_msg.robot_state, ros2_msg.robot_state);

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::Constraints,
    moveit_msgs::msg::Constraints
  >::convert_1_to_2(
    ros1_msg.constraints, ros2_msg.constraints);

  // convert non-array field
  // convert primitive field
  ros2_msg.avoid_collisions = ros1_msg.avoid_collisions;

  // convert non-array field
  // convert primitive field
  ros2_msg.ik_link_name = ros1_msg.ik_link_name;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::PoseStamped,
    geometry_msgs::msg::PoseStamped
  >::convert_1_to_2(
    ros1_msg.pose_stamped, ros2_msg.pose_stamped);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.ik_link_names.resize(ros1_msg.ik_link_names.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.ik_link_names.begin(),
    ros1_msg.ik_link_names.end(),
    ros2_msg.ik_link_names.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.pose_stamped_vector.resize(ros1_msg.pose_stamped_vector.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.pose_stamped_vector.cbegin();
    auto ros2_it = ros2_msg.pose_stamped_vector.begin();
    for (
      ;
      ros1_it != ros1_msg.pose_stamped_vector.cend() &&
      ros2_it != ros2_msg.pose_stamped_vector.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::PoseStamped,
        geometry_msgs::msg::PoseStamped
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert non-array field
  // convert builtin field
  ros1_bridge::convert_1_to_2(ros1_msg.timeout, ros2_msg.timeout);
}

template<>
void
Factory<
  moveit_msgs::PositionIKRequest,
  moveit_msgs::msg::PositionIKRequest
>::convert_2_to_1(
  const moveit_msgs::msg::PositionIKRequest & ros2_msg,
  moveit_msgs::PositionIKRequest & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.group_name = ros2_msg.group_name;

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::RobotState,
    moveit_msgs::msg::RobotState
  >::convert_2_to_1(
    ros2_msg.robot_state, ros1_msg.robot_state);

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::Constraints,
    moveit_msgs::msg::Constraints
  >::convert_2_to_1(
    ros2_msg.constraints, ros1_msg.constraints);

  // convert non-array field
  // convert primitive field
  ros1_msg.avoid_collisions = ros2_msg.avoid_collisions;

  // convert non-array field
  // convert primitive field
  ros1_msg.ik_link_name = ros2_msg.ik_link_name;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::PoseStamped,
    geometry_msgs::msg::PoseStamped
  >::convert_2_to_1(
    ros2_msg.pose_stamped, ros1_msg.pose_stamped);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.ik_link_names.resize(ros2_msg.ik_link_names.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.ik_link_names.begin(),
    ros2_msg.ik_link_names.end(),
    ros1_msg.ik_link_names.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.pose_stamped_vector.resize(ros2_msg.pose_stamped_vector.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.pose_stamped_vector.cbegin();
    auto ros1_it = ros1_msg.pose_stamped_vector.begin();
    for (
      ;
      ros2_it != ros2_msg.pose_stamped_vector.cend() &&
      ros1_it != ros1_msg.pose_stamped_vector.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::PoseStamped,
        geometry_msgs::msg::PoseStamped
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert non-array field
  // convert builtin field
  ros1_bridge::convert_2_to_1(ros2_msg.timeout, ros1_msg.timeout);
}
}  // namespace ros1_bridge
