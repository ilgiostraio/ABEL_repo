// generated from ros1_bridge/resource/pkg_factories.cpp.em

#include "rcl_interfaces_factories.hpp"

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_rcl_interfaces(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  std::shared_ptr<FactoryInterface> factory;
  factory = get_factory_rcl_interfaces__msg__FloatingPointRange(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_rcl_interfaces__msg__IntegerRange(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_rcl_interfaces__msg__ListParametersResult(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_rcl_interfaces__msg__Log(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_rcl_interfaces__msg__Parameter(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_rcl_interfaces__msg__ParameterDescriptor(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_rcl_interfaces__msg__ParameterEvent(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_rcl_interfaces__msg__ParameterEventDescriptors(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_rcl_interfaces__msg__ParameterType(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_rcl_interfaces__msg__ParameterValue(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_rcl_interfaces__msg__SetParametersResult(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_rcl_interfaces(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  std::unique_ptr<ServiceFactoryInterface> factory;
  factory = get_service_factory_rcl_interfaces__srv__DescribeParameters(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_rcl_interfaces__srv__GetParameterTypes(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_rcl_interfaces__srv__GetParameters(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_rcl_interfaces__srv__ListParameters(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_rcl_interfaces__srv__SetParameters(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_rcl_interfaces__srv__SetParametersAtomically(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  return nullptr;
}
}  // namespace ros1_bridge
