// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "gazebo_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <gazebo_msgs/SetPhysicsProperties.h>

// include ROS 2 services
#include <gazebo_msgs/srv/set_physics_properties.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__srv__SetPhysicsProperties(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__SetPhysicsProperties(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "gazebo_msgs" &&
      service_name == "SetPhysicsProperties"
    ) || (
      ros_id == "ros2" &&
      package_name == "gazebo_msgs" &&
      service_name == "srv/SetPhysicsProperties"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      gazebo_msgs::SetPhysicsProperties,
      gazebo_msgs::srv::SetPhysicsProperties
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  gazebo_msgs::SetPhysicsProperties,
  gazebo_msgs::srv::SetPhysicsProperties
>::translate_1_to_2(
  const gazebo_msgs::SetPhysicsProperties::Request& req1,
  gazebo_msgs::srv::SetPhysicsProperties::Request& req2
) {
  auto & time_step1 = req1.time_step;
  auto & time_step2 = req2.time_step;
  time_step2 = time_step1;
  auto & max_update_rate1 = req1.max_update_rate;
  auto & max_update_rate2 = req2.max_update_rate;
  max_update_rate2 = max_update_rate1;
  auto & gravity1 = req1.gravity;
  auto & gravity2 = req2.gravity;
  Factory<geometry_msgs::Vector3,geometry_msgs::msg::Vector3>::convert_1_to_2(gravity1, gravity2);
  auto & ode_config1 = req1.ode_config;
  auto & ode_config2 = req2.ode_config;
  Factory<gazebo_msgs::ODEPhysics,gazebo_msgs::msg::ODEPhysics>::convert_1_to_2(ode_config1, ode_config2);
}

template <>
void ServiceFactory<
  gazebo_msgs::SetPhysicsProperties,
  gazebo_msgs::srv::SetPhysicsProperties
>::translate_1_to_2(
  const gazebo_msgs::SetPhysicsProperties::Response& req1,
  gazebo_msgs::srv::SetPhysicsProperties::Response& req2
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
  gazebo_msgs::SetPhysicsProperties,
  gazebo_msgs::srv::SetPhysicsProperties
>::translate_2_to_1(
  const gazebo_msgs::srv::SetPhysicsProperties::Request& req2,
  gazebo_msgs::SetPhysicsProperties::Request& req1
) {
  auto & time_step1 = req1.time_step;
  auto & time_step2 = req2.time_step;
  time_step1 = time_step2;
  auto & max_update_rate1 = req1.max_update_rate;
  auto & max_update_rate2 = req2.max_update_rate;
  max_update_rate1 = max_update_rate2;
  auto & gravity1 = req1.gravity;
  auto & gravity2 = req2.gravity;
  Factory<geometry_msgs::Vector3,geometry_msgs::msg::Vector3>::convert_2_to_1(gravity2, gravity1);
  auto & ode_config1 = req1.ode_config;
  auto & ode_config2 = req2.ode_config;
  Factory<gazebo_msgs::ODEPhysics,gazebo_msgs::msg::ODEPhysics>::convert_2_to_1(ode_config2, ode_config1);
}

template <>
void ServiceFactory<
  gazebo_msgs::SetPhysicsProperties,
  gazebo_msgs::srv::SetPhysicsProperties
>::translate_2_to_1(
  const gazebo_msgs::srv::SetPhysicsProperties::Response& req2,
  gazebo_msgs::SetPhysicsProperties::Response& req1
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success1 = success2;
  auto & status_message1 = req1.status_message;
  auto & status_message2 = req2.status_message;
  status_message1 = status_message2;
}

}  // namespace ros1_bridge
