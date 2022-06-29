// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "sensor_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__JointState(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "sensor_msgs/JointState" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/msg/JointState")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::JointState,
        sensor_msgs::msg::JointState
      >
    >("sensor_msgs/JointState", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_sensor_msgs__msg__JointState(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  sensor_msgs::JointState,
  sensor_msgs::msg::JointState
>::convert_1_to_2(
  const sensor_msgs::JointState & ros1_msg,
  sensor_msgs::msg::JointState & ros2_msg)
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
  ros2_msg.name.resize(ros1_msg.name.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.name.begin(),
    ros1_msg.name.end(),
    ros2_msg.name.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.position.resize(ros1_msg.position.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.position.begin(),
    ros1_msg.position.end(),
    ros2_msg.position.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.velocity.resize(ros1_msg.velocity.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.velocity.begin(),
    ros1_msg.velocity.end(),
    ros2_msg.velocity.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.effort.resize(ros1_msg.effort.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.effort.begin(),
    ros1_msg.effort.end(),
    ros2_msg.effort.begin());
}

template<>
void
Factory<
  sensor_msgs::JointState,
  sensor_msgs::msg::JointState
>::convert_2_to_1(
  const sensor_msgs::msg::JointState & ros2_msg,
  sensor_msgs::JointState & ros1_msg)
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
  ros1_msg.name.resize(ros2_msg.name.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.name.begin(),
    ros2_msg.name.end(),
    ros1_msg.name.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.position.resize(ros2_msg.position.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.position.begin(),
    ros2_msg.position.end(),
    ros1_msg.position.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.velocity.resize(ros2_msg.velocity.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.velocity.begin(),
    ros2_msg.velocity.end(),
    ros1_msg.velocity.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.effort.resize(ros2_msg.effort.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.effort.begin(),
    ros2_msg.effort.end(),
    ros1_msg.effort.begin());
}
}  // namespace ros1_bridge
