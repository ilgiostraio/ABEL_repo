// generated from ros1_bridge/resource/pkg_factories.cpp.em

#include "gazebo_msgs_factories.hpp"

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  std::shared_ptr<FactoryInterface> factory;
  factory = get_factory_gazebo_msgs__msg__ContactState(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_gazebo_msgs__msg__ContactsState(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_gazebo_msgs__msg__EntityState(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_gazebo_msgs__msg__LinkState(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_gazebo_msgs__msg__LinkStates(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_gazebo_msgs__msg__ModelState(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_gazebo_msgs__msg__ModelStates(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_gazebo_msgs__msg__ODEJointProperties(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_gazebo_msgs__msg__ODEPhysics(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_gazebo_msgs__msg__WorldState(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  std::unique_ptr<ServiceFactoryInterface> factory;
  factory = get_service_factory_gazebo_msgs__srv__ApplyBodyWrench(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__ApplyJointEffort(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__ApplyLinkWrench(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__BodyRequest(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__DeleteEntity(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__DeleteLight(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__DeleteModel(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__GetEntityState(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__GetJointProperties(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__GetLightProperties(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__GetLinkProperties(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__GetLinkState(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__GetModelList(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__GetModelProperties(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__GetModelState(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__GetPhysicsProperties(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__GetWorldProperties(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__JointRequest(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__LinkRequest(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__SetEntityState(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__SetJointProperties(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__SetJointTrajectory(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__SetLightProperties(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__SetLinkProperties(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__SetLinkState(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__SetModelConfiguration(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__SetModelState(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__SetPhysicsProperties(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__SpawnEntity(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs__srv__SpawnModel(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  return nullptr;
}
}  // namespace ros1_bridge
