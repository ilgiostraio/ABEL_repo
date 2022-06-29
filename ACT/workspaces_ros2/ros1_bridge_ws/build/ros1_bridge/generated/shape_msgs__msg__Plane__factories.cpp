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
get_factory_shape_msgs__msg__Plane(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "shape_msgs/Plane" ||
     ros1_type_name == "") &&
    ros2_type_name == "shape_msgs/msg/Plane")
  {
    return std::make_shared<
      Factory<
        shape_msgs::Plane,
        shape_msgs::msg::Plane
      >
    >("shape_msgs/Plane", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_shape_msgs__msg__Plane(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  shape_msgs::Plane,
  shape_msgs::msg::Plane
>::convert_1_to_2(
  const shape_msgs::Plane & ros1_msg,
  shape_msgs::msg::Plane & ros2_msg)
{

  // convert array or sequence field
  // statically sized array
  static_assert(
    (ros2_msg.coef.size()) >= (ros1_msg.coef.size()),
    "destination array not large enough for source array"
  );
  // convert primitive array elements
  std::copy(
    ros1_msg.coef.begin(),
    ros1_msg.coef.end(),
    ros2_msg.coef.begin());
}

template<>
void
Factory<
  shape_msgs::Plane,
  shape_msgs::msg::Plane
>::convert_2_to_1(
  const shape_msgs::msg::Plane & ros2_msg,
  shape_msgs::Plane & ros1_msg)
{

  // convert array or sequence field
  // statically sized array
  static_assert(
    (ros1_msg.coef.size()) >= (ros2_msg.coef.size()),
    "destination array not large enough for source array"
  );
  // convert primitive array elements
  std::copy(
    ros2_msg.coef.begin(),
    ros2_msg.coef.end(),
    ros1_msg.coef.begin());
}
}  // namespace ros1_bridge
