// generated from ros1_bridge/resource/pkg_factories.cpp.em

#include "map_msgs_factories.hpp"

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_map_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  std::shared_ptr<FactoryInterface> factory;
  factory = get_factory_map_msgs__msg__OccupancyGridUpdate(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_map_msgs__msg__PointCloud2Update(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_map_msgs__msg__ProjectedMap(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_map_msgs__msg__ProjectedMapInfo(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_map_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  std::unique_ptr<ServiceFactoryInterface> factory;
  factory = get_service_factory_map_msgs__srv__GetMapROI(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_map_msgs__srv__GetPointMap(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_map_msgs__srv__GetPointMapROI(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_map_msgs__srv__ProjectedMapsInfo(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_map_msgs__srv__SaveMap(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_map_msgs__srv__SetMapProjections(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  return nullptr;
}
}  // namespace ros1_bridge
