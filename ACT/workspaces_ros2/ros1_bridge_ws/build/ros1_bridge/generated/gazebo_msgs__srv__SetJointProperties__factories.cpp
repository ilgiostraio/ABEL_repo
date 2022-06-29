// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "gazebo_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <gazebo_msgs/SetJointProperties.h>

// include ROS 2 services
#include <gazebo_msgs/srv/set_joint_properties.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__srv__SetJointProperties(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__SetJointProperties(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "gazebo_msgs" &&
      service_name == "SetJointProperties"
    ) || (
      ros_id == "ros2" &&
      package_name == "gazebo_msgs" &&
      service_name == "srv/SetJointProperties"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      gazebo_msgs::SetJointProperties,
      gazebo_msgs::srv::SetJointProperties
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  gazebo_msgs::SetJointProperties,
  gazebo_msgs::srv::SetJointProperties
>::translate_1_to_2(
  const gazebo_msgs::SetJointProperties::Request& req1,
  gazebo_msgs::srv::SetJointProperties::Request& req2
) {
  auto & joint_name1 = req1.joint_name;
  auto & joint_name2 = req2.joint_name;
  joint_name2 = joint_name1;
  auto & ode_joint_config1 = req1.ode_joint_config;
  auto & ode_joint_config2 = req2.ode_joint_config;
  Factory<gazebo_msgs::ODEJointProperties,gazebo_msgs::msg::ODEJointProperties>::convert_1_to_2(ode_joint_config1, ode_joint_config2);
}

template <>
void ServiceFactory<
  gazebo_msgs::SetJointProperties,
  gazebo_msgs::srv::SetJointProperties
>::translate_1_to_2(
  const gazebo_msgs::SetJointProperties::Response& req1,
  gazebo_msgs::srv::SetJointProperties::Response& req2
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
  gazebo_msgs::SetJointProperties,
  gazebo_msgs::srv::SetJointProperties
>::translate_2_to_1(
  const gazebo_msgs::srv::SetJointProperties::Request& req2,
  gazebo_msgs::SetJointProperties::Request& req1
) {
  auto & joint_name1 = req1.joint_name;
  auto & joint_name2 = req2.joint_name;
  joint_name1 = joint_name2;
  auto & ode_joint_config1 = req1.ode_joint_config;
  auto & ode_joint_config2 = req2.ode_joint_config;
  Factory<gazebo_msgs::ODEJointProperties,gazebo_msgs::msg::ODEJointProperties>::convert_2_to_1(ode_joint_config2, ode_joint_config1);
}

template <>
void ServiceFactory<
  gazebo_msgs::SetJointProperties,
  gazebo_msgs::srv::SetJointProperties
>::translate_2_to_1(
  const gazebo_msgs::srv::SetJointProperties::Response& req2,
  gazebo_msgs::SetJointProperties::Response& req1
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success1 = success2;
  auto & status_message1 = req1.status_message;
  auto & status_message2 = req2.status_message;
  status_message1 = status_message2;
}

}  // namespace ros1_bridge
