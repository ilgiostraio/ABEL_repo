// generated from ros1_bridge/resource/pkg_factories.cpp.em

#include "turtlebot3_msgs_factories.hpp"

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_turtlebot3_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  std::shared_ptr<FactoryInterface> factory;
  factory = get_factory_turtlebot3_msgs__msg__SensorState(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_turtlebot3_msgs__msg__Sound(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_turtlebot3_msgs__msg__VersionInfo(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_turtlebot3_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  std::unique_ptr<ServiceFactoryInterface> factory;
  factory = get_service_factory_turtlebot3_msgs__srv__Dqn(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_turtlebot3_msgs__srv__Sound(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  return nullptr;
}
}  // namespace ros1_bridge
