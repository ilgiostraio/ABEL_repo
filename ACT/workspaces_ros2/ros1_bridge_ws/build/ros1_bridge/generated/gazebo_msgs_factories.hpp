// generated from ros1_bridge/resource/pkg_factories.hpp.em

#include <memory>
#include <string>

#include <ros1_bridge/factory.hpp>

// include ROS 1 messages
#include <gazebo_msgs/LinkStates.h>
#include <gazebo_msgs/ModelStates.h>
#include <gazebo_msgs/ODEJointProperties.h>
#include <gazebo_msgs/ODEPhysics.h>
#include <gazebo_msgs/LinkState.h>
#include <gazebo_msgs/ModelState.h>
#include <gazebo_msgs/ContactState.h>
#include <gazebo_msgs/ContactsState.h>
#include <gazebo_msgs/WorldState.h>

// include ROS 2 messages
#include <gazebo_msgs/msg/link_states.hpp>
#include <gazebo_msgs/msg/model_states.hpp>
#include <gazebo_msgs/msg/ode_joint_properties.hpp>
#include <gazebo_msgs/msg/ode_physics.hpp>
#include <gazebo_msgs/msg/link_state.hpp>
#include <gazebo_msgs/msg/model_state.hpp>
#include <gazebo_msgs/msg/contact_state.hpp>
#include <gazebo_msgs/msg/contacts_state.hpp>
#include <gazebo_msgs/msg/world_state.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__msg__ContactState(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__msg__ContactsState(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__msg__EntityState(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__msg__LinkState(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__msg__LinkStates(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__msg__ModelState(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__msg__ModelStates(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__msg__ODEJointProperties(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__msg__ODEPhysics(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__msg__WorldState(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__ApplyBodyWrench(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__ApplyJointEffort(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__ApplyLinkWrench(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__BodyRequest(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__DeleteEntity(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__DeleteLight(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__DeleteModel(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__GetEntityState(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__GetJointProperties(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__GetLightProperties(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__GetLinkProperties(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__GetLinkState(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__GetModelList(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__GetModelProperties(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__GetModelState(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__GetPhysicsProperties(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__GetWorldProperties(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__JointRequest(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__LinkRequest(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__SetEntityState(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__SetJointProperties(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__SetJointTrajectory(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__SetLightProperties(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__SetLinkProperties(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__SetLinkState(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__SetModelConfiguration(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__SetModelState(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__SetPhysicsProperties(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__SpawnEntity(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__SpawnModel(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

// conversion functions for available interfaces

template<>
void
Factory<
  gazebo_msgs::LinkStates,
  gazebo_msgs::msg::LinkStates
>::convert_1_to_2(
  const gazebo_msgs::LinkStates & ros1_msg,
  gazebo_msgs::msg::LinkStates & ros2_msg);

template<>
void
Factory<
  gazebo_msgs::LinkStates,
  gazebo_msgs::msg::LinkStates
>::convert_2_to_1(
  const gazebo_msgs::msg::LinkStates & ros2_msg,
  gazebo_msgs::LinkStates & ros1_msg);


template<>
void
Factory<
  gazebo_msgs::ModelStates,
  gazebo_msgs::msg::ModelStates
>::convert_1_to_2(
  const gazebo_msgs::ModelStates & ros1_msg,
  gazebo_msgs::msg::ModelStates & ros2_msg);

template<>
void
Factory<
  gazebo_msgs::ModelStates,
  gazebo_msgs::msg::ModelStates
>::convert_2_to_1(
  const gazebo_msgs::msg::ModelStates & ros2_msg,
  gazebo_msgs::ModelStates & ros1_msg);


template<>
void
Factory<
  gazebo_msgs::ODEJointProperties,
  gazebo_msgs::msg::ODEJointProperties
>::convert_1_to_2(
  const gazebo_msgs::ODEJointProperties & ros1_msg,
  gazebo_msgs::msg::ODEJointProperties & ros2_msg);

template<>
void
Factory<
  gazebo_msgs::ODEJointProperties,
  gazebo_msgs::msg::ODEJointProperties
>::convert_2_to_1(
  const gazebo_msgs::msg::ODEJointProperties & ros2_msg,
  gazebo_msgs::ODEJointProperties & ros1_msg);


template<>
void
Factory<
  gazebo_msgs::ODEPhysics,
  gazebo_msgs::msg::ODEPhysics
>::convert_1_to_2(
  const gazebo_msgs::ODEPhysics & ros1_msg,
  gazebo_msgs::msg::ODEPhysics & ros2_msg);

template<>
void
Factory<
  gazebo_msgs::ODEPhysics,
  gazebo_msgs::msg::ODEPhysics
>::convert_2_to_1(
  const gazebo_msgs::msg::ODEPhysics & ros2_msg,
  gazebo_msgs::ODEPhysics & ros1_msg);


template<>
void
Factory<
  gazebo_msgs::LinkState,
  gazebo_msgs::msg::LinkState
>::convert_1_to_2(
  const gazebo_msgs::LinkState & ros1_msg,
  gazebo_msgs::msg::LinkState & ros2_msg);

template<>
void
Factory<
  gazebo_msgs::LinkState,
  gazebo_msgs::msg::LinkState
>::convert_2_to_1(
  const gazebo_msgs::msg::LinkState & ros2_msg,
  gazebo_msgs::LinkState & ros1_msg);


template<>
void
Factory<
  gazebo_msgs::ModelState,
  gazebo_msgs::msg::ModelState
>::convert_1_to_2(
  const gazebo_msgs::ModelState & ros1_msg,
  gazebo_msgs::msg::ModelState & ros2_msg);

template<>
void
Factory<
  gazebo_msgs::ModelState,
  gazebo_msgs::msg::ModelState
>::convert_2_to_1(
  const gazebo_msgs::msg::ModelState & ros2_msg,
  gazebo_msgs::ModelState & ros1_msg);


template<>
void
Factory<
  gazebo_msgs::ContactState,
  gazebo_msgs::msg::ContactState
>::convert_1_to_2(
  const gazebo_msgs::ContactState & ros1_msg,
  gazebo_msgs::msg::ContactState & ros2_msg);

template<>
void
Factory<
  gazebo_msgs::ContactState,
  gazebo_msgs::msg::ContactState
>::convert_2_to_1(
  const gazebo_msgs::msg::ContactState & ros2_msg,
  gazebo_msgs::ContactState & ros1_msg);


template<>
void
Factory<
  gazebo_msgs::ContactsState,
  gazebo_msgs::msg::ContactsState
>::convert_1_to_2(
  const gazebo_msgs::ContactsState & ros1_msg,
  gazebo_msgs::msg::ContactsState & ros2_msg);

template<>
void
Factory<
  gazebo_msgs::ContactsState,
  gazebo_msgs::msg::ContactsState
>::convert_2_to_1(
  const gazebo_msgs::msg::ContactsState & ros2_msg,
  gazebo_msgs::ContactsState & ros1_msg);


template<>
void
Factory<
  gazebo_msgs::WorldState,
  gazebo_msgs::msg::WorldState
>::convert_1_to_2(
  const gazebo_msgs::WorldState & ros1_msg,
  gazebo_msgs::msg::WorldState & ros2_msg);

template<>
void
Factory<
  gazebo_msgs::WorldState,
  gazebo_msgs::msg::WorldState
>::convert_2_to_1(
  const gazebo_msgs::msg::WorldState & ros2_msg,
  gazebo_msgs::WorldState & ros1_msg);

}  // namespace ros1_bridge
