// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "gazebo_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <gazebo_msgs/GetLightProperties.h>

// include ROS 2 services
#include <gazebo_msgs/srv/get_light_properties.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__srv__GetLightProperties(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__GetLightProperties(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "gazebo_msgs" &&
      service_name == "GetLightProperties"
    ) || (
      ros_id == "ros2" &&
      package_name == "gazebo_msgs" &&
      service_name == "srv/GetLightProperties"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      gazebo_msgs::GetLightProperties,
      gazebo_msgs::srv::GetLightProperties
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  gazebo_msgs::GetLightProperties,
  gazebo_msgs::srv::GetLightProperties
>::translate_1_to_2(
  const gazebo_msgs::GetLightProperties::Request& req1,
  gazebo_msgs::srv::GetLightProperties::Request& req2
) {
  auto & light_name1 = req1.light_name;
  auto & light_name2 = req2.light_name;
  light_name2 = light_name1;
}

template <>
void ServiceFactory<
  gazebo_msgs::GetLightProperties,
  gazebo_msgs::srv::GetLightProperties
>::translate_1_to_2(
  const gazebo_msgs::GetLightProperties::Response& req1,
  gazebo_msgs::srv::GetLightProperties::Response& req2
) {
  auto & diffuse1 = req1.diffuse;
  auto & diffuse2 = req2.diffuse;
  Factory<std_msgs::ColorRGBA,std_msgs::msg::ColorRGBA>::convert_1_to_2(diffuse1, diffuse2);
  auto & attenuation_constant1 = req1.attenuation_constant;
  auto & attenuation_constant2 = req2.attenuation_constant;
  attenuation_constant2 = attenuation_constant1;
  auto & attenuation_linear1 = req1.attenuation_linear;
  auto & attenuation_linear2 = req2.attenuation_linear;
  attenuation_linear2 = attenuation_linear1;
  auto & attenuation_quadratic1 = req1.attenuation_quadratic;
  auto & attenuation_quadratic2 = req2.attenuation_quadratic;
  attenuation_quadratic2 = attenuation_quadratic1;
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success2 = success1;
  auto & status_message1 = req1.status_message;
  auto & status_message2 = req2.status_message;
  status_message2 = status_message1;
}

template <>
void ServiceFactory<
  gazebo_msgs::GetLightProperties,
  gazebo_msgs::srv::GetLightProperties
>::translate_2_to_1(
  const gazebo_msgs::srv::GetLightProperties::Request& req2,
  gazebo_msgs::GetLightProperties::Request& req1
) {
  auto & light_name1 = req1.light_name;
  auto & light_name2 = req2.light_name;
  light_name1 = light_name2;
}

template <>
void ServiceFactory<
  gazebo_msgs::GetLightProperties,
  gazebo_msgs::srv::GetLightProperties
>::translate_2_to_1(
  const gazebo_msgs::srv::GetLightProperties::Response& req2,
  gazebo_msgs::GetLightProperties::Response& req1
) {
  auto & diffuse1 = req1.diffuse;
  auto & diffuse2 = req2.diffuse;
  Factory<std_msgs::ColorRGBA,std_msgs::msg::ColorRGBA>::convert_2_to_1(diffuse2, diffuse1);
  auto & attenuation_constant1 = req1.attenuation_constant;
  auto & attenuation_constant2 = req2.attenuation_constant;
  attenuation_constant1 = attenuation_constant2;
  auto & attenuation_linear1 = req1.attenuation_linear;
  auto & attenuation_linear2 = req2.attenuation_linear;
  attenuation_linear1 = attenuation_linear2;
  auto & attenuation_quadratic1 = req1.attenuation_quadratic;
  auto & attenuation_quadratic2 = req2.attenuation_quadratic;
  attenuation_quadratic1 = attenuation_quadratic2;
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success1 = success2;
  auto & status_message1 = req1.status_message;
  auto & status_message2 = req2.status_message;
  status_message1 = status_message2;
}

}  // namespace ros1_bridge
