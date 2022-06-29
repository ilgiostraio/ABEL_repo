// generated from ros1_bridge/resource/pkg_factories.hpp.em

#include <memory>
#include <string>

#include <ros1_bridge/factory.hpp>

// include ROS 1 messages
#include <rosgraph_msgs/Log.h>

// include ROS 2 messages
#include <rcl_interfaces/msg/log.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_rcl_interfaces(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_rcl_interfaces__msg__FloatingPointRange(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_rcl_interfaces__msg__IntegerRange(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_rcl_interfaces__msg__ListParametersResult(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_rcl_interfaces__msg__Log(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_rcl_interfaces__msg__Parameter(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_rcl_interfaces__msg__ParameterDescriptor(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_rcl_interfaces__msg__ParameterEvent(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_rcl_interfaces__msg__ParameterEventDescriptors(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_rcl_interfaces__msg__ParameterType(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_rcl_interfaces__msg__ParameterValue(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_rcl_interfaces__msg__SetParametersResult(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_rcl_interfaces(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_rcl_interfaces__srv__DescribeParameters(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_rcl_interfaces__srv__GetParameterTypes(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_rcl_interfaces__srv__GetParameters(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_rcl_interfaces__srv__ListParameters(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_rcl_interfaces__srv__SetParameters(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_rcl_interfaces__srv__SetParametersAtomically(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

// conversion functions for available interfaces

template<>
void
Factory<
  rosgraph_msgs::Log,
  rcl_interfaces::msg::Log
>::convert_1_to_2(
  const rosgraph_msgs::Log & ros1_msg,
  rcl_interfaces::msg::Log & ros2_msg);

template<>
void
Factory<
  rosgraph_msgs::Log,
  rcl_interfaces::msg::Log
>::convert_2_to_1(
  const rcl_interfaces::msg::Log & ros2_msg,
  rosgraph_msgs::Log & ros1_msg);

}  // namespace ros1_bridge
