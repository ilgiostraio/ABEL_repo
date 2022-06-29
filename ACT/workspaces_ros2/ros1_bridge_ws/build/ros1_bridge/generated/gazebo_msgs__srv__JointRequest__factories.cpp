// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "gazebo_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <gazebo_msgs/JointRequest.h>

// include ROS 2 services
#include <gazebo_msgs/srv/joint_request.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__srv__JointRequest(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__JointRequest(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "gazebo_msgs" &&
      service_name == "JointRequest"
    ) || (
      ros_id == "ros2" &&
      package_name == "gazebo_msgs" &&
      service_name == "srv/JointRequest"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      gazebo_msgs::JointRequest,
      gazebo_msgs::srv::JointRequest
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  gazebo_msgs::JointRequest,
  gazebo_msgs::srv::JointRequest
>::translate_1_to_2(
  const gazebo_msgs::JointRequest::Request& req1,
  gazebo_msgs::srv::JointRequest::Request& req2
) {
  auto & joint_name1 = req1.joint_name;
  auto & joint_name2 = req2.joint_name;
  joint_name2 = joint_name1;
}

template <>
void ServiceFactory<
  gazebo_msgs::JointRequest,
  gazebo_msgs::srv::JointRequest
>::translate_1_to_2(
  const gazebo_msgs::JointRequest::Response& req1,
  gazebo_msgs::srv::JointRequest::Response& req2
) {
}

template <>
void ServiceFactory<
  gazebo_msgs::JointRequest,
  gazebo_msgs::srv::JointRequest
>::translate_2_to_1(
  const gazebo_msgs::srv::JointRequest::Request& req2,
  gazebo_msgs::JointRequest::Request& req1
) {
  auto & joint_name1 = req1.joint_name;
  auto & joint_name2 = req2.joint_name;
  joint_name1 = joint_name2;
}

template <>
void ServiceFactory<
  gazebo_msgs::JointRequest,
  gazebo_msgs::srv::JointRequest
>::translate_2_to_1(
  const gazebo_msgs::srv::JointRequest::Response& req2,
  gazebo_msgs::JointRequest::Response& req1
) {
}

}  // namespace ros1_bridge
