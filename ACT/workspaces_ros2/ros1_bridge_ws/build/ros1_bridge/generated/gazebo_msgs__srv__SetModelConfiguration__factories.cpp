// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "gazebo_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <gazebo_msgs/SetModelConfiguration.h>

// include ROS 2 services
#include <gazebo_msgs/srv/set_model_configuration.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__srv__SetModelConfiguration(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__SetModelConfiguration(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "gazebo_msgs" &&
      service_name == "SetModelConfiguration"
    ) || (
      ros_id == "ros2" &&
      package_name == "gazebo_msgs" &&
      service_name == "srv/SetModelConfiguration"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      gazebo_msgs::SetModelConfiguration,
      gazebo_msgs::srv::SetModelConfiguration
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  gazebo_msgs::SetModelConfiguration,
  gazebo_msgs::srv::SetModelConfiguration
>::translate_1_to_2(
  const gazebo_msgs::SetModelConfiguration::Request& req1,
  gazebo_msgs::srv::SetModelConfiguration::Request& req2
) {
  auto & model_name1 = req1.model_name;
  auto & model_name2 = req2.model_name;
  model_name2 = model_name1;
  auto & urdf_param_name1 = req1.urdf_param_name;
  auto & urdf_param_name2 = req2.urdf_param_name;
  urdf_param_name2 = urdf_param_name1;
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
  req2.joint_positions.resize(req1.joint_positions.size());
  auto joint_positions1_it = req1.joint_positions.begin();
  auto joint_positions2_it = req2.joint_positions.begin();
  while (
    joint_positions1_it != req1.joint_positions.end() &&
    joint_positions2_it != req2.joint_positions.end()
  ) {
    auto & joint_positions1 = *(joint_positions1_it++);
    auto & joint_positions2 = *(joint_positions2_it++);
  joint_positions2 = joint_positions1;
  }
}

template <>
void ServiceFactory<
  gazebo_msgs::SetModelConfiguration,
  gazebo_msgs::srv::SetModelConfiguration
>::translate_1_to_2(
  const gazebo_msgs::SetModelConfiguration::Response& req1,
  gazebo_msgs::srv::SetModelConfiguration::Response& req2
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success2 = success1;
  auto & status_message1 = req1.status_message;
  auto & status_message2 = req2.status_message;
  status_message2 = status_message1;
}

template <>
void ServiceFactory<
  gazebo_msgs::SetModelConfiguration,
  gazebo_msgs::srv::SetModelConfiguration
>::translate_2_to_1(
  const gazebo_msgs::srv::SetModelConfiguration::Request& req2,
  gazebo_msgs::SetModelConfiguration::Request& req1
) {
  auto & model_name1 = req1.model_name;
  auto & model_name2 = req2.model_name;
  model_name1 = model_name2;
  auto & urdf_param_name1 = req1.urdf_param_name;
  auto & urdf_param_name2 = req2.urdf_param_name;
  urdf_param_name1 = urdf_param_name2;
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
  req1.joint_positions.resize(req2.joint_positions.size());
  auto joint_positions1_it = req1.joint_positions.begin();
  auto joint_positions2_it = req2.joint_positions.begin();
  while (
    joint_positions1_it != req1.joint_positions.end() &&
    joint_positions2_it != req2.joint_positions.end()
  ) {
    auto & joint_positions1 = *(joint_positions1_it++);
    auto & joint_positions2 = *(joint_positions2_it++);
  joint_positions1 = joint_positions2;
  }
}

template <>
void ServiceFactory<
  gazebo_msgs::SetModelConfiguration,
  gazebo_msgs::srv::SetModelConfiguration
>::translate_2_to_1(
  const gazebo_msgs::srv::SetModelConfiguration::Response& req2,
  gazebo_msgs::SetModelConfiguration::Response& req1
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success1 = success2;
  auto & status_message1 = req1.status_message;
  auto & status_message2 = req2.status_message;
  status_message1 = status_message2;
}

}  // namespace ros1_bridge
