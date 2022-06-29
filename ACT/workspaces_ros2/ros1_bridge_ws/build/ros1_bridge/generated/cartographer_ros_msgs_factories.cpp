// generated from ros1_bridge/resource/pkg_factories.cpp.em

#include "cartographer_ros_msgs_factories.hpp"

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_cartographer_ros_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  std::shared_ptr<FactoryInterface> factory;
  factory = get_factory_cartographer_ros_msgs__msg__LandmarkEntry(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_cartographer_ros_msgs__msg__LandmarkList(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_cartographer_ros_msgs__msg__SensorTopics(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_cartographer_ros_msgs__msg__StatusCode(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_cartographer_ros_msgs__msg__StatusResponse(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_cartographer_ros_msgs__msg__SubmapEntry(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_cartographer_ros_msgs__msg__SubmapList(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_cartographer_ros_msgs__msg__SubmapTexture(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_cartographer_ros_msgs__msg__TrajectoryOptions(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_cartographer_ros_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  std::unique_ptr<ServiceFactoryInterface> factory;
  factory = get_service_factory_cartographer_ros_msgs__srv__FinishTrajectory(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_cartographer_ros_msgs__srv__StartTrajectory(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_cartographer_ros_msgs__srv__SubmapQuery(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_cartographer_ros_msgs__srv__WriteState(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  return nullptr;
}
}  // namespace ros1_bridge
