// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <moveit_msgs/ChangeControlDimensions.h>

// include ROS 2 services
#include <moveit_msgs/srv/change_control_dimensions.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__srv__ChangeControlDimensions(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__ChangeControlDimensions(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "moveit_msgs" &&
      service_name == "ChangeControlDimensions"
    ) || (
      ros_id == "ros2" &&
      package_name == "moveit_msgs" &&
      service_name == "srv/ChangeControlDimensions"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      moveit_msgs::ChangeControlDimensions,
      moveit_msgs::srv::ChangeControlDimensions
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  moveit_msgs::ChangeControlDimensions,
  moveit_msgs::srv::ChangeControlDimensions
>::translate_1_to_2(
  const moveit_msgs::ChangeControlDimensions::Request& req1,
  moveit_msgs::srv::ChangeControlDimensions::Request& req2
) {
  auto & control_x_translation1 = req1.control_x_translation;
  auto & control_x_translation2 = req2.control_x_translation;
  control_x_translation2 = control_x_translation1;
  auto & control_y_translation1 = req1.control_y_translation;
  auto & control_y_translation2 = req2.control_y_translation;
  control_y_translation2 = control_y_translation1;
  auto & control_z_translation1 = req1.control_z_translation;
  auto & control_z_translation2 = req2.control_z_translation;
  control_z_translation2 = control_z_translation1;
  auto & control_x_rotation1 = req1.control_x_rotation;
  auto & control_x_rotation2 = req2.control_x_rotation;
  control_x_rotation2 = control_x_rotation1;
  auto & control_y_rotation1 = req1.control_y_rotation;
  auto & control_y_rotation2 = req2.control_y_rotation;
  control_y_rotation2 = control_y_rotation1;
  auto & control_z_rotation1 = req1.control_z_rotation;
  auto & control_z_rotation2 = req2.control_z_rotation;
  control_z_rotation2 = control_z_rotation1;
}

template <>
void ServiceFactory<
  moveit_msgs::ChangeControlDimensions,
  moveit_msgs::srv::ChangeControlDimensions
>::translate_1_to_2(
  const moveit_msgs::ChangeControlDimensions::Response& req1,
  moveit_msgs::srv::ChangeControlDimensions::Response& req2
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success2 = success1;
}

template <>
void ServiceFactory<
  moveit_msgs::ChangeControlDimensions,
  moveit_msgs::srv::ChangeControlDimensions
>::translate_2_to_1(
  const moveit_msgs::srv::ChangeControlDimensions::Request& req2,
  moveit_msgs::ChangeControlDimensions::Request& req1
) {
  auto & control_x_translation1 = req1.control_x_translation;
  auto & control_x_translation2 = req2.control_x_translation;
  control_x_translation1 = control_x_translation2;
  auto & control_y_translation1 = req1.control_y_translation;
  auto & control_y_translation2 = req2.control_y_translation;
  control_y_translation1 = control_y_translation2;
  auto & control_z_translation1 = req1.control_z_translation;
  auto & control_z_translation2 = req2.control_z_translation;
  control_z_translation1 = control_z_translation2;
  auto & control_x_rotation1 = req1.control_x_rotation;
  auto & control_x_rotation2 = req2.control_x_rotation;
  control_x_rotation1 = control_x_rotation2;
  auto & control_y_rotation1 = req1.control_y_rotation;
  auto & control_y_rotation2 = req2.control_y_rotation;
  control_y_rotation1 = control_y_rotation2;
  auto & control_z_rotation1 = req1.control_z_rotation;
  auto & control_z_rotation2 = req2.control_z_rotation;
  control_z_rotation1 = control_z_rotation2;
}

template <>
void ServiceFactory<
  moveit_msgs::ChangeControlDimensions,
  moveit_msgs::srv::ChangeControlDimensions
>::translate_2_to_1(
  const moveit_msgs::srv::ChangeControlDimensions::Response& req2,
  moveit_msgs::ChangeControlDimensions::Response& req1
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success1 = success2;
}

}  // namespace ros1_bridge
