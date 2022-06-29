// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "gazebo_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__msg__ModelState(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "gazebo_msgs/ModelState" ||
     ros1_type_name == "") &&
    ros2_type_name == "gazebo_msgs/msg/ModelState")
  {
    return std::make_shared<
      Factory<
        gazebo_msgs::ModelState,
        gazebo_msgs::msg::ModelState
      >
    >("gazebo_msgs/ModelState", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__msg__ModelState(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  gazebo_msgs::ModelState,
  gazebo_msgs::msg::ModelState
>::convert_1_to_2(
  const gazebo_msgs::ModelState & ros1_msg,
  gazebo_msgs::msg::ModelState & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.model_name = ros1_msg.model_name;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Pose,
    geometry_msgs::msg::Pose
  >::convert_1_to_2(
    ros1_msg.pose, ros2_msg.pose);

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Twist,
    geometry_msgs::msg::Twist
  >::convert_1_to_2(
    ros1_msg.twist, ros2_msg.twist);

  // convert non-array field
  // convert primitive field
  ros2_msg.reference_frame = ros1_msg.reference_frame;
}

template<>
void
Factory<
  gazebo_msgs::ModelState,
  gazebo_msgs::msg::ModelState
>::convert_2_to_1(
  const gazebo_msgs::msg::ModelState & ros2_msg,
  gazebo_msgs::ModelState & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.model_name = ros2_msg.model_name;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Pose,
    geometry_msgs::msg::Pose
  >::convert_2_to_1(
    ros2_msg.pose, ros1_msg.pose);

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Twist,
    geometry_msgs::msg::Twist
  >::convert_2_to_1(
    ros2_msg.twist, ros1_msg.twist);

  // convert non-array field
  // convert primitive field
  ros1_msg.reference_frame = ros2_msg.reference_frame;
}
}  // namespace ros1_bridge
