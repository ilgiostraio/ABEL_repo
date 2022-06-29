// generated from ros1_bridge/resource/pkg_factories.cpp.em

#include "pendulum_msgs_factories.hpp"

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_pendulum_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  std::shared_ptr<FactoryInterface> factory;
  factory = get_factory_pendulum_msgs__msg__JointCommand(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_pendulum_msgs__msg__JointState(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_pendulum_msgs__msg__RttestResults(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_pendulum_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  (void)ros_id;
  (void)package_name;
  (void)service_name;
  return nullptr;
}
}  // namespace ros1_bridge
