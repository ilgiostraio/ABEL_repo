// generated from ros1_bridge/resource/pkg_factories.cpp.em

#include "dwb_msgs_factories.hpp"

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_dwb_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  std::shared_ptr<FactoryInterface> factory;
  factory = get_factory_dwb_msgs__msg__CriticScore(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_dwb_msgs__msg__LocalPlanEvaluation(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_dwb_msgs__msg__Trajectory2D(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_dwb_msgs__msg__TrajectoryScore(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_dwb_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  std::unique_ptr<ServiceFactoryInterface> factory;
  factory = get_service_factory_dwb_msgs__srv__DebugLocalPlan(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_dwb_msgs__srv__GenerateTrajectory(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_dwb_msgs__srv__GenerateTwists(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_dwb_msgs__srv__GetCriticScore(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_dwb_msgs__srv__ScoreTrajectory(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  return nullptr;
}
}  // namespace ros1_bridge
