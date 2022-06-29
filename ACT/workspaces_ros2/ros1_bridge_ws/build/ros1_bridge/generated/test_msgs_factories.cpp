// generated from ros1_bridge/resource/pkg_factories.cpp.em

#include "test_msgs_factories.hpp"

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_test_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  std::shared_ptr<FactoryInterface> factory;
  factory = get_factory_test_msgs__msg__Arrays(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_test_msgs__msg__BasicTypes(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_test_msgs__msg__BoundedSequences(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_test_msgs__msg__Builtins(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_test_msgs__msg__Constants(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_test_msgs__msg__Defaults(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_test_msgs__msg__Empty(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_test_msgs__msg__MultiNested(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_test_msgs__msg__Nested(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_test_msgs__msg__Strings(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_test_msgs__msg__UnboundedSequences(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_test_msgs__msg__WStrings(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_test_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  std::unique_ptr<ServiceFactoryInterface> factory;
  factory = get_service_factory_test_msgs__srv__Arrays(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_test_msgs__srv__BasicTypes(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_test_msgs__srv__Empty(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  return nullptr;
}
}  // namespace ros1_bridge
