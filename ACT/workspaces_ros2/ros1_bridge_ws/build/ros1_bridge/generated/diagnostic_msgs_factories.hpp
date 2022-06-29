// generated from ros1_bridge/resource/pkg_factories.hpp.em

#include <memory>
#include <string>

#include <ros1_bridge/factory.hpp>

// include ROS 1 messages
#include <diagnostic_msgs/DiagnosticStatus.h>
#include <diagnostic_msgs/KeyValue.h>
#include <diagnostic_msgs/DiagnosticArray.h>

// include ROS 2 messages
#include <diagnostic_msgs/msg/diagnostic_status.hpp>
#include <diagnostic_msgs/msg/key_value.hpp>
#include <diagnostic_msgs/msg/diagnostic_array.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_diagnostic_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_diagnostic_msgs__msg__DiagnosticArray(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_diagnostic_msgs__msg__DiagnosticStatus(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_diagnostic_msgs__msg__KeyValue(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_diagnostic_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_diagnostic_msgs__srv__AddDiagnostics(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_diagnostic_msgs__srv__SelfTest(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

// conversion functions for available interfaces

template<>
void
Factory<
  diagnostic_msgs::DiagnosticStatus,
  diagnostic_msgs::msg::DiagnosticStatus
>::convert_1_to_2(
  const diagnostic_msgs::DiagnosticStatus & ros1_msg,
  diagnostic_msgs::msg::DiagnosticStatus & ros2_msg);

template<>
void
Factory<
  diagnostic_msgs::DiagnosticStatus,
  diagnostic_msgs::msg::DiagnosticStatus
>::convert_2_to_1(
  const diagnostic_msgs::msg::DiagnosticStatus & ros2_msg,
  diagnostic_msgs::DiagnosticStatus & ros1_msg);


template<>
void
Factory<
  diagnostic_msgs::KeyValue,
  diagnostic_msgs::msg::KeyValue
>::convert_1_to_2(
  const diagnostic_msgs::KeyValue & ros1_msg,
  diagnostic_msgs::msg::KeyValue & ros2_msg);

template<>
void
Factory<
  diagnostic_msgs::KeyValue,
  diagnostic_msgs::msg::KeyValue
>::convert_2_to_1(
  const diagnostic_msgs::msg::KeyValue & ros2_msg,
  diagnostic_msgs::KeyValue & ros1_msg);


template<>
void
Factory<
  diagnostic_msgs::DiagnosticArray,
  diagnostic_msgs::msg::DiagnosticArray
>::convert_1_to_2(
  const diagnostic_msgs::DiagnosticArray & ros1_msg,
  diagnostic_msgs::msg::DiagnosticArray & ros2_msg);

template<>
void
Factory<
  diagnostic_msgs::DiagnosticArray,
  diagnostic_msgs::msg::DiagnosticArray
>::convert_2_to_1(
  const diagnostic_msgs::msg::DiagnosticArray & ros2_msg,
  diagnostic_msgs::DiagnosticArray & ros1_msg);

}  // namespace ros1_bridge
