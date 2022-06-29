// generated from ros1_bridge/resource/pkg_factories.cpp.em

#include "composition_interfaces_factories.hpp"

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_composition_interfaces(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_composition_interfaces(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  std::unique_ptr<ServiceFactoryInterface> factory;
  factory = get_service_factory_composition_interfaces__srv__ListNodes(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_composition_interfaces__srv__LoadNode(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_composition_interfaces__srv__UnloadNode(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  return nullptr;
}
}  // namespace ros1_bridge
