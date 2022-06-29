// generated from ros1_bridge/resource/pkg_factories.cpp.em

#include "turtlesim_factories.hpp"

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_turtlesim(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  std::shared_ptr<FactoryInterface> factory;
  factory = get_factory_turtlesim__msg__Color(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_turtlesim__msg__Pose(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_turtlesim(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  std::unique_ptr<ServiceFactoryInterface> factory;
  factory = get_service_factory_turtlesim__srv__Kill(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_turtlesim__srv__SetPen(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_turtlesim__srv__Spawn(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_turtlesim__srv__TeleportAbsolute(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_turtlesim__srv__TeleportRelative(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  return nullptr;
}
}  // namespace ros1_bridge
