// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "object_recognition_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <object_recognition_msgs/GetObjectInformation.h>

// include ROS 2 services
#include <object_recognition_msgs/srv/get_object_information.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_object_recognition_msgs__srv__GetObjectInformation(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_object_recognition_msgs__srv__GetObjectInformation(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "object_recognition_msgs" &&
      service_name == "GetObjectInformation"
    ) || (
      ros_id == "ros2" &&
      package_name == "object_recognition_msgs" &&
      service_name == "srv/GetObjectInformation"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      object_recognition_msgs::GetObjectInformation,
      object_recognition_msgs::srv::GetObjectInformation
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  object_recognition_msgs::GetObjectInformation,
  object_recognition_msgs::srv::GetObjectInformation
>::translate_1_to_2(
  const object_recognition_msgs::GetObjectInformation::Request& req1,
  object_recognition_msgs::srv::GetObjectInformation::Request& req2
) {
  auto & type1 = req1.type;
  auto & type2 = req2.type;
  Factory<object_recognition_msgs::ObjectType,object_recognition_msgs::msg::ObjectType>::convert_1_to_2(type1, type2);
}

template <>
void ServiceFactory<
  object_recognition_msgs::GetObjectInformation,
  object_recognition_msgs::srv::GetObjectInformation
>::translate_1_to_2(
  const object_recognition_msgs::GetObjectInformation::Response& req1,
  object_recognition_msgs::srv::GetObjectInformation::Response& req2
) {
  auto & information1 = req1.information;
  auto & information2 = req2.information;
  Factory<object_recognition_msgs::ObjectInformation,object_recognition_msgs::msg::ObjectInformation>::convert_1_to_2(information1, information2);
}

template <>
void ServiceFactory<
  object_recognition_msgs::GetObjectInformation,
  object_recognition_msgs::srv::GetObjectInformation
>::translate_2_to_1(
  const object_recognition_msgs::srv::GetObjectInformation::Request& req2,
  object_recognition_msgs::GetObjectInformation::Request& req1
) {
  auto & type1 = req1.type;
  auto & type2 = req2.type;
  Factory<object_recognition_msgs::ObjectType,object_recognition_msgs::msg::ObjectType>::convert_2_to_1(type2, type1);
}

template <>
void ServiceFactory<
  object_recognition_msgs::GetObjectInformation,
  object_recognition_msgs::srv::GetObjectInformation
>::translate_2_to_1(
  const object_recognition_msgs::srv::GetObjectInformation::Response& req2,
  object_recognition_msgs::GetObjectInformation::Response& req1
) {
  auto & information1 = req1.information;
  auto & information2 = req2.information;
  Factory<object_recognition_msgs::ObjectInformation,object_recognition_msgs::msg::ObjectInformation>::convert_2_to_1(information2, information1);
}

}  // namespace ros1_bridge
