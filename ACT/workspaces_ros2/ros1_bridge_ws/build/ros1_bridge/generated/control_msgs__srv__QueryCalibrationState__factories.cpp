// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "control_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <control_msgs/QueryCalibrationState.h>

// include ROS 2 services
#include <control_msgs/srv/query_calibration_state.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_control_msgs__srv__QueryCalibrationState(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_control_msgs__srv__QueryCalibrationState(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "control_msgs" &&
      service_name == "QueryCalibrationState"
    ) || (
      ros_id == "ros2" &&
      package_name == "control_msgs" &&
      service_name == "srv/QueryCalibrationState"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      control_msgs::QueryCalibrationState,
      control_msgs::srv::QueryCalibrationState
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  control_msgs::QueryCalibrationState,
  control_msgs::srv::QueryCalibrationState
>::translate_1_to_2(
  const control_msgs::QueryCalibrationState::Request& req1,
  control_msgs::srv::QueryCalibrationState::Request& req2
) {
}

template <>
void ServiceFactory<
  control_msgs::QueryCalibrationState,
  control_msgs::srv::QueryCalibrationState
>::translate_1_to_2(
  const control_msgs::QueryCalibrationState::Response& req1,
  control_msgs::srv::QueryCalibrationState::Response& req2
) {
  auto & is_calibrated1 = req1.is_calibrated;
  auto & is_calibrated2 = req2.is_calibrated;
  is_calibrated2 = is_calibrated1;
}

template <>
void ServiceFactory<
  control_msgs::QueryCalibrationState,
  control_msgs::srv::QueryCalibrationState
>::translate_2_to_1(
  const control_msgs::srv::QueryCalibrationState::Request& req2,
  control_msgs::QueryCalibrationState::Request& req1
) {
}

template <>
void ServiceFactory<
  control_msgs::QueryCalibrationState,
  control_msgs::srv::QueryCalibrationState
>::translate_2_to_1(
  const control_msgs::srv::QueryCalibrationState::Response& req2,
  control_msgs::QueryCalibrationState::Response& req1
) {
  auto & is_calibrated1 = req1.is_calibrated;
  auto & is_calibrated2 = req2.is_calibrated;
  is_calibrated1 = is_calibrated2;
}

}  // namespace ros1_bridge
