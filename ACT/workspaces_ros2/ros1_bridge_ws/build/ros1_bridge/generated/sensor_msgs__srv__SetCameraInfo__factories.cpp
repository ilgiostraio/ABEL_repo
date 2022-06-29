// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "sensor_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <sensor_msgs/SetCameraInfo.h>

// include ROS 2 services
#include <sensor_msgs/srv/set_camera_info.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__srv__SetCameraInfo(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_sensor_msgs__srv__SetCameraInfo(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "sensor_msgs" &&
      service_name == "SetCameraInfo"
    ) || (
      ros_id == "ros2" &&
      package_name == "sensor_msgs" &&
      service_name == "srv/SetCameraInfo"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      sensor_msgs::SetCameraInfo,
      sensor_msgs::srv::SetCameraInfo
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  sensor_msgs::SetCameraInfo,
  sensor_msgs::srv::SetCameraInfo
>::translate_1_to_2(
  const sensor_msgs::SetCameraInfo::Request& req1,
  sensor_msgs::srv::SetCameraInfo::Request& req2
) {
  auto & camera_info1 = req1.camera_info;
  auto & camera_info2 = req2.camera_info;
  Factory<sensor_msgs::CameraInfo,sensor_msgs::msg::CameraInfo>::convert_1_to_2(camera_info1, camera_info2);
}

template <>
void ServiceFactory<
  sensor_msgs::SetCameraInfo,
  sensor_msgs::srv::SetCameraInfo
>::translate_1_to_2(
  const sensor_msgs::SetCameraInfo::Response& req1,
  sensor_msgs::srv::SetCameraInfo::Response& req2
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
  sensor_msgs::SetCameraInfo,
  sensor_msgs::srv::SetCameraInfo
>::translate_2_to_1(
  const sensor_msgs::srv::SetCameraInfo::Request& req2,
  sensor_msgs::SetCameraInfo::Request& req1
) {
  auto & camera_info1 = req1.camera_info;
  auto & camera_info2 = req2.camera_info;
  Factory<sensor_msgs::CameraInfo,sensor_msgs::msg::CameraInfo>::convert_2_to_1(camera_info2, camera_info1);
}

template <>
void ServiceFactory<
  sensor_msgs::SetCameraInfo,
  sensor_msgs::srv::SetCameraInfo
>::translate_2_to_1(
  const sensor_msgs::srv::SetCameraInfo::Response& req2,
  sensor_msgs::SetCameraInfo::Response& req1
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success1 = success2;
  auto & status_message1 = req1.status_message;
  auto & status_message2 = req2.status_message;
  status_message1 = status_message2;
}

}  // namespace ros1_bridge
