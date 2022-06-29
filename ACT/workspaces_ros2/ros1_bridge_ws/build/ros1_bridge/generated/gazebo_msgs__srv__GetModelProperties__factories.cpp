// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "gazebo_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <gazebo_msgs/GetModelProperties.h>

// include ROS 2 services
#include <gazebo_msgs/srv/get_model_properties.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__srv__GetModelProperties(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__GetModelProperties(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "gazebo_msgs" &&
      service_name == "GetModelProperties"
    ) || (
      ros_id == "ros2" &&
      package_name == "gazebo_msgs" &&
      service_name == "srv/GetModelProperties"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      gazebo_msgs::GetModelProperties,
      gazebo_msgs::srv::GetModelProperties
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  gazebo_msgs::GetModelProperties,
  gazebo_msgs::srv::GetModelProperties
>::translate_1_to_2(
  const gazebo_msgs::GetModelProperties::Request& req1,
  gazebo_msgs::srv::GetModelProperties::Request& req2
) {
  auto & model_name1 = req1.model_name;
  auto & model_name2 = req2.model_name;
  model_name2 = model_name1;
}

template <>
void ServiceFactory<
  gazebo_msgs::GetModelProperties,
  gazebo_msgs::srv::GetModelProperties
>::translate_1_to_2(
  const gazebo_msgs::GetModelProperties::Response& req1,
  gazebo_msgs::srv::GetModelProperties::Response& req2
) {
  auto & parent_model_name1 = req1.parent_model_name;
  auto & parent_model_name2 = req2.parent_model_name;
  parent_model_name2 = parent_model_name1;
  auto & canonical_body_name1 = req1.canonical_body_name;
  auto & canonical_body_name2 = req2.canonical_body_name;
  canonical_body_name2 = canonical_body_name1;
  req2.body_names.resize(req1.body_names.size());
  auto body_names1_it = req1.body_names.begin();
  auto body_names2_it = req2.body_names.begin();
  while (
    body_names1_it != req1.body_names.end() &&
    body_names2_it != req2.body_names.end()
  ) {
    auto & body_names1 = *(body_names1_it++);
    auto & body_names2 = *(body_names2_it++);
  body_names2 = body_names1;
  }
  req2.geom_names.resize(req1.geom_names.size());
  auto geom_names1_it = req1.geom_names.begin();
  auto geom_names2_it = req2.geom_names.begin();
  while (
    geom_names1_it != req1.geom_names.end() &&
    geom_names2_it != req2.geom_names.end()
  ) {
    auto & geom_names1 = *(geom_names1_it++);
    auto & geom_names2 = *(geom_names2_it++);
  geom_names2 = geom_names1;
  }
  req2.joint_names.resize(req1.joint_names.size());
  auto joint_names1_it = req1.joint_names.begin();
  auto joint_names2_it = req2.joint_names.begin();
  while (
    joint_names1_it != req1.joint_names.end() &&
    joint_names2_it != req2.joint_names.end()
  ) {
    auto & joint_names1 = *(joint_names1_it++);
    auto & joint_names2 = *(joint_names2_it++);
  joint_names2 = joint_names1;
  }
  req2.child_model_names.resize(req1.child_model_names.size());
  auto child_model_names1_it = req1.child_model_names.begin();
  auto child_model_names2_it = req2.child_model_names.begin();
  while (
    child_model_names1_it != req1.child_model_names.end() &&
    child_model_names2_it != req2.child_model_names.end()
  ) {
    auto & child_model_names1 = *(child_model_names1_it++);
    auto & child_model_names2 = *(child_model_names2_it++);
  child_model_names2 = child_model_names1;
  }
  auto & is_static1 = req1.is_static;
  auto & is_static2 = req2.is_static;
  is_static2 = is_static1;
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success2 = success1;
  auto & status_message1 = req1.status_message;
  auto & status_message2 = req2.status_message;
  status_message2 = status_message1;
}

template <>
void ServiceFactory<
  gazebo_msgs::GetModelProperties,
  gazebo_msgs::srv::GetModelProperties
>::translate_2_to_1(
  const gazebo_msgs::srv::GetModelProperties::Request& req2,
  gazebo_msgs::GetModelProperties::Request& req1
) {
  auto & model_name1 = req1.model_name;
  auto & model_name2 = req2.model_name;
  model_name1 = model_name2;
}

template <>
void ServiceFactory<
  gazebo_msgs::GetModelProperties,
  gazebo_msgs::srv::GetModelProperties
>::translate_2_to_1(
  const gazebo_msgs::srv::GetModelProperties::Response& req2,
  gazebo_msgs::GetModelProperties::Response& req1
) {
  auto & parent_model_name1 = req1.parent_model_name;
  auto & parent_model_name2 = req2.parent_model_name;
  parent_model_name1 = parent_model_name2;
  auto & canonical_body_name1 = req1.canonical_body_name;
  auto & canonical_body_name2 = req2.canonical_body_name;
  canonical_body_name1 = canonical_body_name2;
  req1.body_names.resize(req2.body_names.size());
  auto body_names1_it = req1.body_names.begin();
  auto body_names2_it = req2.body_names.begin();
  while (
    body_names1_it != req1.body_names.end() &&
    body_names2_it != req2.body_names.end()
  ) {
    auto & body_names1 = *(body_names1_it++);
    auto & body_names2 = *(body_names2_it++);
  body_names1 = body_names2;
  }
  req1.geom_names.resize(req2.geom_names.size());
  auto geom_names1_it = req1.geom_names.begin();
  auto geom_names2_it = req2.geom_names.begin();
  while (
    geom_names1_it != req1.geom_names.end() &&
    geom_names2_it != req2.geom_names.end()
  ) {
    auto & geom_names1 = *(geom_names1_it++);
    auto & geom_names2 = *(geom_names2_it++);
  geom_names1 = geom_names2;
  }
  req1.joint_names.resize(req2.joint_names.size());
  auto joint_names1_it = req1.joint_names.begin();
  auto joint_names2_it = req2.joint_names.begin();
  while (
    joint_names1_it != req1.joint_names.end() &&
    joint_names2_it != req2.joint_names.end()
  ) {
    auto & joint_names1 = *(joint_names1_it++);
    auto & joint_names2 = *(joint_names2_it++);
  joint_names1 = joint_names2;
  }
  req1.child_model_names.resize(req2.child_model_names.size());
  auto child_model_names1_it = req1.child_model_names.begin();
  auto child_model_names2_it = req2.child_model_names.begin();
  while (
    child_model_names1_it != req1.child_model_names.end() &&
    child_model_names2_it != req2.child_model_names.end()
  ) {
    auto & child_model_names1 = *(child_model_names1_it++);
    auto & child_model_names2 = *(child_model_names2_it++);
  child_model_names1 = child_model_names2;
  }
  auto & is_static1 = req1.is_static;
  auto & is_static2 = req2.is_static;
  is_static1 = is_static2;
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success1 = success2;
  auto & status_message1 = req1.status_message;
  auto & status_message2 = req2.status_message;
  status_message1 = status_message2;
}

}  // namespace ros1_bridge
