// generated from ros1_bridge/resource/pkg_factories.cpp.em

#include "nav2_msgs_factories.hpp"

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_nav2_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  std::shared_ptr<FactoryInterface> factory;
  factory = get_factory_nav2_msgs__msg__BehaviorTreeLog(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_nav2_msgs__msg__BehaviorTreeStatusChange(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_nav2_msgs__msg__Costmap(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_nav2_msgs__msg__CostmapMetaData(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_nav2_msgs__msg__Particle(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_nav2_msgs__msg__ParticleCloud(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_nav2_msgs__msg__VoxelGrid(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_nav2_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  std::unique_ptr<ServiceFactoryInterface> factory;
  factory = get_service_factory_nav2_msgs__srv__ClearCostmapAroundRobot(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_nav2_msgs__srv__ClearCostmapExceptRegion(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_nav2_msgs__srv__ClearEntireCostmap(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_nav2_msgs__srv__GetCostmap(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_nav2_msgs__srv__LoadMap(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_nav2_msgs__srv__ManageLifecycleNodes(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_nav2_msgs__srv__SaveMap(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  return nullptr;
}
}  // namespace ros1_bridge
