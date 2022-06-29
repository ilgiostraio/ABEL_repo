// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "gazebo_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <gazebo_msgs/SetLinkProperties.h>

// include ROS 2 services
#include <gazebo_msgs/srv/set_link_properties.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__srv__SetLinkProperties(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__SetLinkProperties(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "gazebo_msgs" &&
      service_name == "SetLinkProperties"
    ) || (
      ros_id == "ros2" &&
      package_name == "gazebo_msgs" &&
      service_name == "srv/SetLinkProperties"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      gazebo_msgs::SetLinkProperties,
      gazebo_msgs::srv::SetLinkProperties
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  gazebo_msgs::SetLinkProperties,
  gazebo_msgs::srv::SetLinkProperties
>::translate_1_to_2(
  const gazebo_msgs::SetLinkProperties::Request& req1,
  gazebo_msgs::srv::SetLinkProperties::Request& req2
) {
  auto & link_name1 = req1.link_name;
  auto & link_name2 = req2.link_name;
  link_name2 = link_name1;
  auto & com1 = req1.com;
  auto & com2 = req2.com;
  Factory<geometry_msgs::Pose,geometry_msgs::msg::Pose>::convert_1_to_2(com1, com2);
  auto & gravity_mode1 = req1.gravity_mode;
  auto & gravity_mode2 = req2.gravity_mode;
  gravity_mode2 = gravity_mode1;
  auto & mass1 = req1.mass;
  auto & mass2 = req2.mass;
  mass2 = mass1;
  auto & ixx1 = req1.ixx;
  auto & ixx2 = req2.ixx;
  ixx2 = ixx1;
  auto & ixy1 = req1.ixy;
  auto & ixy2 = req2.ixy;
  ixy2 = ixy1;
  auto & ixz1 = req1.ixz;
  auto & ixz2 = req2.ixz;
  ixz2 = ixz1;
  auto & iyy1 = req1.iyy;
  auto & iyy2 = req2.iyy;
  iyy2 = iyy1;
  auto & iyz1 = req1.iyz;
  auto & iyz2 = req2.iyz;
  iyz2 = iyz1;
  auto & izz1 = req1.izz;
  auto & izz2 = req2.izz;
  izz2 = izz1;
}

template <>
void ServiceFactory<
  gazebo_msgs::SetLinkProperties,
  gazebo_msgs::srv::SetLinkProperties
>::translate_1_to_2(
  const gazebo_msgs::SetLinkProperties::Response& req1,
  gazebo_msgs::srv::SetLinkProperties::Response& req2
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
  gazebo_msgs::SetLinkProperties,
  gazebo_msgs::srv::SetLinkProperties
>::translate_2_to_1(
  const gazebo_msgs::srv::SetLinkProperties::Request& req2,
  gazebo_msgs::SetLinkProperties::Request& req1
) {
  auto & link_name1 = req1.link_name;
  auto & link_name2 = req2.link_name;
  link_name1 = link_name2;
  auto & com1 = req1.com;
  auto & com2 = req2.com;
  Factory<geometry_msgs::Pose,geometry_msgs::msg::Pose>::convert_2_to_1(com2, com1);
  auto & gravity_mode1 = req1.gravity_mode;
  auto & gravity_mode2 = req2.gravity_mode;
  gravity_mode1 = gravity_mode2;
  auto & mass1 = req1.mass;
  auto & mass2 = req2.mass;
  mass1 = mass2;
  auto & ixx1 = req1.ixx;
  auto & ixx2 = req2.ixx;
  ixx1 = ixx2;
  auto & ixy1 = req1.ixy;
  auto & ixy2 = req2.ixy;
  ixy1 = ixy2;
  auto & ixz1 = req1.ixz;
  auto & ixz2 = req2.ixz;
  ixz1 = ixz2;
  auto & iyy1 = req1.iyy;
  auto & iyy2 = req2.iyy;
  iyy1 = iyy2;
  auto & iyz1 = req1.iyz;
  auto & iyz2 = req2.iyz;
  iyz1 = iyz2;
  auto & izz1 = req1.izz;
  auto & izz2 = req2.izz;
  izz1 = izz2;
}

template <>
void ServiceFactory<
  gazebo_msgs::SetLinkProperties,
  gazebo_msgs::srv::SetLinkProperties
>::translate_2_to_1(
  const gazebo_msgs::srv::SetLinkProperties::Response& req2,
  gazebo_msgs::SetLinkProperties::Response& req1
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success1 = success2;
  auto & status_message1 = req1.status_message;
  auto & status_message2 = req2.status_message;
  status_message1 = status_message2;
}

}  // namespace ros1_bridge
