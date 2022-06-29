// generated from ros1_bridge/resource/pkg_factories.cpp.em

#include "std_msgs_factories.hpp"

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_std_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  std::shared_ptr<FactoryInterface> factory;
  factory = get_factory_std_msgs__msg__Bool(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__Byte(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__ByteMultiArray(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__Char(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__ColorRGBA(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__Empty(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__Float32(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__Float32MultiArray(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__Float64(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__Float64MultiArray(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__Header(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__Int16(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__Int16MultiArray(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__Int32(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__Int32MultiArray(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__Int64(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__Int64MultiArray(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__Int8(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__Int8MultiArray(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__MultiArrayDimension(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__MultiArrayLayout(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__String(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__UInt16(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__UInt16MultiArray(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__UInt32(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__UInt32MultiArray(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__UInt64(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__UInt64MultiArray(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__UInt8(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs__msg__UInt8MultiArray(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_std_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  (void)ros_id;
  (void)package_name;
  (void)service_name;
  return nullptr;
}
}  // namespace ros1_bridge
