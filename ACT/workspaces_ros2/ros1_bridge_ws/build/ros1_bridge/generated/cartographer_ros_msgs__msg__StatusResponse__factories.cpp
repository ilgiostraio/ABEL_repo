// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "cartographer_ros_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_cartographer_ros_msgs__msg__StatusResponse(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "cartographer_ros_msgs/StatusResponse" ||
     ros1_type_name == "") &&
    ros2_type_name == "cartographer_ros_msgs/msg/StatusResponse")
  {
    return std::make_shared<
      Factory<
        cartographer_ros_msgs::StatusResponse,
        cartographer_ros_msgs::msg::StatusResponse
      >
    >("cartographer_ros_msgs/StatusResponse", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_cartographer_ros_msgs__msg__StatusResponse(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  cartographer_ros_msgs::StatusResponse,
  cartographer_ros_msgs::msg::StatusResponse
>::convert_1_to_2(
  const cartographer_ros_msgs::StatusResponse & ros1_msg,
  cartographer_ros_msgs::msg::StatusResponse & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.code = ros1_msg.code;

  // convert non-array field
  // convert primitive field
  ros2_msg.message = ros1_msg.message;
}

template<>
void
Factory<
  cartographer_ros_msgs::StatusResponse,
  cartographer_ros_msgs::msg::StatusResponse
>::convert_2_to_1(
  const cartographer_ros_msgs::msg::StatusResponse & ros2_msg,
  cartographer_ros_msgs::StatusResponse & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.code = ros2_msg.code;

  // convert non-array field
  // convert primitive field
  ros1_msg.message = ros2_msg.message;
}
}  // namespace ros1_bridge
