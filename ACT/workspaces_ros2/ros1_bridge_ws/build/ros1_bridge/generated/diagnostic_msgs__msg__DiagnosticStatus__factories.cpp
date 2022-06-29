// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "diagnostic_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_diagnostic_msgs__msg__DiagnosticStatus(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "diagnostic_msgs/DiagnosticStatus" ||
     ros1_type_name == "") &&
    ros2_type_name == "diagnostic_msgs/msg/DiagnosticStatus")
  {
    return std::make_shared<
      Factory<
        diagnostic_msgs::DiagnosticStatus,
        diagnostic_msgs::msg::DiagnosticStatus
      >
    >("diagnostic_msgs/DiagnosticStatus", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_diagnostic_msgs__msg__DiagnosticStatus(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  diagnostic_msgs::DiagnosticStatus,
  diagnostic_msgs::msg::DiagnosticStatus
>::convert_1_to_2(
  const diagnostic_msgs::DiagnosticStatus & ros1_msg,
  diagnostic_msgs::msg::DiagnosticStatus & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.level = ros1_msg.level;

  // convert non-array field
  // convert primitive field
  ros2_msg.name = ros1_msg.name;

  // convert non-array field
  // convert primitive field
  ros2_msg.message = ros1_msg.message;

  // convert non-array field
  // convert primitive field
  ros2_msg.hardware_id = ros1_msg.hardware_id;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.values.resize(ros1_msg.values.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.values.cbegin();
    auto ros2_it = ros2_msg.values.begin();
    for (
      ;
      ros1_it != ros1_msg.values.cend() &&
      ros2_it != ros2_msg.values.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        diagnostic_msgs::KeyValue,
        diagnostic_msgs::msg::KeyValue
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  diagnostic_msgs::DiagnosticStatus,
  diagnostic_msgs::msg::DiagnosticStatus
>::convert_2_to_1(
  const diagnostic_msgs::msg::DiagnosticStatus & ros2_msg,
  diagnostic_msgs::DiagnosticStatus & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.level = ros2_msg.level;

  // convert non-array field
  // convert primitive field
  ros1_msg.name = ros2_msg.name;

  // convert non-array field
  // convert primitive field
  ros1_msg.message = ros2_msg.message;

  // convert non-array field
  // convert primitive field
  ros1_msg.hardware_id = ros2_msg.hardware_id;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.values.resize(ros2_msg.values.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.values.cbegin();
    auto ros1_it = ros1_msg.values.begin();
    for (
      ;
      ros2_it != ros2_msg.values.cend() &&
      ros1_it != ros1_msg.values.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        diagnostic_msgs::KeyValue,
        diagnostic_msgs::msg::KeyValue
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}
}  // namespace ros1_bridge
