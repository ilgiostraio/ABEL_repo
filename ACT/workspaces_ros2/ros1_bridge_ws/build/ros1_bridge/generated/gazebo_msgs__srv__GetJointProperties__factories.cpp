// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "gazebo_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <gazebo_msgs/GetJointProperties.h>

// include ROS 2 services
#include <gazebo_msgs/srv/get_joint_properties.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__srv__GetJointProperties(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__GetJointProperties(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "gazebo_msgs" &&
      service_name == "GetJointProperties"
    ) || (
      ros_id == "ros2" &&
      package_name == "gazebo_msgs" &&
      service_name == "srv/GetJointProperties"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      gazebo_msgs::GetJointProperties,
      gazebo_msgs::srv::GetJointProperties
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  gazebo_msgs::GetJointProperties,
  gazebo_msgs::srv::GetJointProperties
>::translate_1_to_2(
  const gazebo_msgs::GetJointProperties::Request& req1,
  gazebo_msgs::srv::GetJointProperties::Request& req2
) {
  auto & joint_name1 = req1.joint_name;
  auto & joint_name2 = req2.joint_name;
  joint_name2 = joint_name1;
}

template <>
void ServiceFactory<
  gazebo_msgs::GetJointProperties,
  gazebo_msgs::srv::GetJointProperties
>::translate_1_to_2(
  const gazebo_msgs::GetJointProperties::Response& req1,
  gazebo_msgs::srv::GetJointProperties::Response& req2
) {
  auto & type1 = req1.type;
  auto & type2 = req2.type;
  type2 = type1;
  req2.damping.resize(req1.damping.size());
  auto damping1_it = req1.damping.begin();
  auto damping2_it = req2.damping.begin();
  while (
    damping1_it != req1.damping.end() &&
    damping2_it != req2.damping.end()
  ) {
    auto & damping1 = *(damping1_it++);
    auto & damping2 = *(damping2_it++);
  damping2 = damping1;
  }
  req2.position.resize(req1.position.size());
  auto position1_it = req1.position.begin();
  auto position2_it = req2.position.begin();
  while (
    position1_it != req1.position.end() &&
    position2_it != req2.position.end()
  ) {
    auto & position1 = *(position1_it++);
    auto & position2 = *(position2_it++);
  position2 = position1;
  }
  req2.rate.resize(req1.rate.size());
  auto rate1_it = req1.rate.begin();
  auto rate2_it = req2.rate.begin();
  while (
    rate1_it != req1.rate.end() &&
    rate2_it != req2.rate.end()
  ) {
    auto & rate1 = *(rate1_it++);
    auto & rate2 = *(rate2_it++);
  rate2 = rate1;
  }
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success2 = success1;
  auto & status_message1 = req1.status_message;
  auto & status_message2 = req2.status_message;
  status_message2 = status_message1;
}

template <>
void ServiceFactory<
  gazebo_msgs::GetJointProperties,
  gazebo_msgs::srv::GetJointProperties
>::translate_2_to_1(
  const gazebo_msgs::srv::GetJointProperties::Request& req2,
  gazebo_msgs::GetJointProperties::Request& req1
) {
  auto & joint_name1 = req1.joint_name;
  auto & joint_name2 = req2.joint_name;
  joint_name1 = joint_name2;
}

template <>
void ServiceFactory<
  gazebo_msgs::GetJointProperties,
  gazebo_msgs::srv::GetJointProperties
>::translate_2_to_1(
  const gazebo_msgs::srv::GetJointProperties::Response& req2,
  gazebo_msgs::GetJointProperties::Response& req1
) {
  auto & type1 = req1.type;
  auto & type2 = req2.type;
  type1 = type2;
  req1.damping.resize(req2.damping.size());
  auto damping1_it = req1.damping.begin();
  auto damping2_it = req2.damping.begin();
  while (
    damping1_it != req1.damping.end() &&
    damping2_it != req2.damping.end()
  ) {
    auto & damping1 = *(damping1_it++);
    auto & damping2 = *(damping2_it++);
  damping1 = damping2;
  }
  req1.position.resize(req2.position.size());
  auto position1_it = req1.position.begin();
  auto position2_it = req2.position.begin();
  while (
    position1_it != req1.position.end() &&
    position2_it != req2.position.end()
  ) {
    auto & position1 = *(position1_it++);
    auto & position2 = *(position2_it++);
  position1 = position2;
  }
  req1.rate.resize(req2.rate.size());
  auto rate1_it = req1.rate.begin();
  auto rate2_it = req2.rate.begin();
  while (
    rate1_it != req1.rate.end() &&
    rate2_it != req2.rate.end()
  ) {
    auto & rate1 = *(rate1_it++);
    auto & rate2 = *(rate2_it++);
  rate1 = rate2;
  }
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success1 = success2;
  auto & status_message1 = req1.status_message;
  auto & status_message2 = req2.status_message;
  status_message1 = status_message2;
}

}  // namespace ros1_bridge
