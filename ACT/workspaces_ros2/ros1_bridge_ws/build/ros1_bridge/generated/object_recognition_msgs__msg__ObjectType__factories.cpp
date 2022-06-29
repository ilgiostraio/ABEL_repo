// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "object_recognition_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_object_recognition_msgs__msg__ObjectType(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "object_recognition_msgs/ObjectType" ||
     ros1_type_name == "") &&
    ros2_type_name == "object_recognition_msgs/msg/ObjectType")
  {
    return std::make_shared<
      Factory<
        object_recognition_msgs::ObjectType,
        object_recognition_msgs::msg::ObjectType
      >
    >("object_recognition_msgs/ObjectType", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_object_recognition_msgs__msg__ObjectType(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  (void)ros_id;
  (void)package_name;
  (void)service_name;
  return nullptr;
}
// conversion functions for available interfaces

template<>
void
Factory<
  object_recognition_msgs::ObjectType,
  object_recognition_msgs::msg::ObjectType
>::convert_1_to_2(
  const object_recognition_msgs::ObjectType & ros1_msg,
  object_recognition_msgs::msg::ObjectType & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.key = ros1_msg.key;

  // convert non-array field
  // convert primitive field
  ros2_msg.db = ros1_msg.db;
}

template<>
void
Factory<
  object_recognition_msgs::ObjectType,
  object_recognition_msgs::msg::ObjectType
>::convert_2_to_1(
  const object_recognition_msgs::msg::ObjectType & ros2_msg,
  object_recognition_msgs::ObjectType & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.key = ros2_msg.key;

  // convert non-array field
  // convert primitive field
  ros1_msg.db = ros2_msg.db;
}
}  // namespace ros1_bridge
