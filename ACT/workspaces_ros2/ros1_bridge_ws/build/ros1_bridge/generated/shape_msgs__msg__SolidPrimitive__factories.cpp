// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "shape_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_shape_msgs__msg__SolidPrimitive(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "shape_msgs/SolidPrimitive" ||
     ros1_type_name == "") &&
    ros2_type_name == "shape_msgs/msg/SolidPrimitive")
  {
    return std::make_shared<
      Factory<
        shape_msgs::SolidPrimitive,
        shape_msgs::msg::SolidPrimitive
      >
    >("shape_msgs/SolidPrimitive", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_shape_msgs__msg__SolidPrimitive(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  shape_msgs::SolidPrimitive,
  shape_msgs::msg::SolidPrimitive
>::convert_1_to_2(
  const shape_msgs::SolidPrimitive & ros1_msg,
  shape_msgs::msg::SolidPrimitive & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.type = ros1_msg.type;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // bounded size sequence, check that the ros 1 vector size is not larger than the upper bound for the target
  assert(ros1_msg.dimensions.size() <= 3);
  // resize ros2 field to match the ros1 field
  ros2_msg.dimensions.resize(ros1_msg.dimensions.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.dimensions.begin(),
    ros1_msg.dimensions.end(),
    ros2_msg.dimensions.begin());
}

template<>
void
Factory<
  shape_msgs::SolidPrimitive,
  shape_msgs::msg::SolidPrimitive
>::convert_2_to_1(
  const shape_msgs::msg::SolidPrimitive & ros2_msg,
  shape_msgs::SolidPrimitive & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.type = ros2_msg.type;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.dimensions.resize(ros2_msg.dimensions.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.dimensions.begin(),
    ros2_msg.dimensions.end(),
    ros1_msg.dimensions.begin());
}
}  // namespace ros1_bridge
