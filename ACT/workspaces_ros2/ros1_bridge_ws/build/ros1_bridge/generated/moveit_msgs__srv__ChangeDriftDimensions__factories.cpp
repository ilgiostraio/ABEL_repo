// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <moveit_msgs/ChangeDriftDimensions.h>

// include ROS 2 services
#include <moveit_msgs/srv/change_drift_dimensions.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__srv__ChangeDriftDimensions(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__ChangeDriftDimensions(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "moveit_msgs" &&
      service_name == "ChangeDriftDimensions"
    ) || (
      ros_id == "ros2" &&
      package_name == "moveit_msgs" &&
      service_name == "srv/ChangeDriftDimensions"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      moveit_msgs::ChangeDriftDimensions,
      moveit_msgs::srv::ChangeDriftDimensions
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  moveit_msgs::ChangeDriftDimensions,
  moveit_msgs::srv::ChangeDriftDimensions
>::translate_1_to_2(
  const moveit_msgs::ChangeDriftDimensions::Request& req1,
  moveit_msgs::srv::ChangeDriftDimensions::Request& req2
) {
  auto & drift_x_translation1 = req1.drift_x_translation;
  auto & drift_x_translation2 = req2.drift_x_translation;
  drift_x_translation2 = drift_x_translation1;
  auto & drift_y_translation1 = req1.drift_y_translation;
  auto & drift_y_translation2 = req2.drift_y_translation;
  drift_y_translation2 = drift_y_translation1;
  auto & drift_z_translation1 = req1.drift_z_translation;
  auto & drift_z_translation2 = req2.drift_z_translation;
  drift_z_translation2 = drift_z_translation1;
  auto & drift_x_rotation1 = req1.drift_x_rotation;
  auto & drift_x_rotation2 = req2.drift_x_rotation;
  drift_x_rotation2 = drift_x_rotation1;
  auto & drift_y_rotation1 = req1.drift_y_rotation;
  auto & drift_y_rotation2 = req2.drift_y_rotation;
  drift_y_rotation2 = drift_y_rotation1;
  auto & drift_z_rotation1 = req1.drift_z_rotation;
  auto & drift_z_rotation2 = req2.drift_z_rotation;
  drift_z_rotation2 = drift_z_rotation1;
  auto & transform_jog_frame_to_drift_frame1 = req1.transform_jog_frame_to_drift_frame;
  auto & transform_jog_frame_to_drift_frame2 = req2.transform_jog_frame_to_drift_frame;
  Factory<geometry_msgs::Transform,geometry_msgs::msg::Transform>::convert_1_to_2(transform_jog_frame_to_drift_frame1, transform_jog_frame_to_drift_frame2);
}

template <>
void ServiceFactory<
  moveit_msgs::ChangeDriftDimensions,
  moveit_msgs::srv::ChangeDriftDimensions
>::translate_1_to_2(
  const moveit_msgs::ChangeDriftDimensions::Response& req1,
  moveit_msgs::srv::ChangeDriftDimensions::Response& req2
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success2 = success1;
}

template <>
void ServiceFactory<
  moveit_msgs::ChangeDriftDimensions,
  moveit_msgs::srv::ChangeDriftDimensions
>::translate_2_to_1(
  const moveit_msgs::srv::ChangeDriftDimensions::Request& req2,
  moveit_msgs::ChangeDriftDimensions::Request& req1
) {
  auto & drift_x_translation1 = req1.drift_x_translation;
  auto & drift_x_translation2 = req2.drift_x_translation;
  drift_x_translation1 = drift_x_translation2;
  auto & drift_y_translation1 = req1.drift_y_translation;
  auto & drift_y_translation2 = req2.drift_y_translation;
  drift_y_translation1 = drift_y_translation2;
  auto & drift_z_translation1 = req1.drift_z_translation;
  auto & drift_z_translation2 = req2.drift_z_translation;
  drift_z_translation1 = drift_z_translation2;
  auto & drift_x_rotation1 = req1.drift_x_rotation;
  auto & drift_x_rotation2 = req2.drift_x_rotation;
  drift_x_rotation1 = drift_x_rotation2;
  auto & drift_y_rotation1 = req1.drift_y_rotation;
  auto & drift_y_rotation2 = req2.drift_y_rotation;
  drift_y_rotation1 = drift_y_rotation2;
  auto & drift_z_rotation1 = req1.drift_z_rotation;
  auto & drift_z_rotation2 = req2.drift_z_rotation;
  drift_z_rotation1 = drift_z_rotation2;
  auto & transform_jog_frame_to_drift_frame1 = req1.transform_jog_frame_to_drift_frame;
  auto & transform_jog_frame_to_drift_frame2 = req2.transform_jog_frame_to_drift_frame;
  Factory<geometry_msgs::Transform,geometry_msgs::msg::Transform>::convert_2_to_1(transform_jog_frame_to_drift_frame2, transform_jog_frame_to_drift_frame1);
}

template <>
void ServiceFactory<
  moveit_msgs::ChangeDriftDimensions,
  moveit_msgs::srv::ChangeDriftDimensions
>::translate_2_to_1(
  const moveit_msgs::srv::ChangeDriftDimensions::Response& req2,
  moveit_msgs::ChangeDriftDimensions::Response& req1
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success1 = success2;
}

}  // namespace ros1_bridge
