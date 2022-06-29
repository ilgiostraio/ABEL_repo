// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "cartographer_ros_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <cartographer_ros_msgs/FinishTrajectory.h>

// include ROS 2 services
#include <cartographer_ros_msgs/srv/finish_trajectory.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_cartographer_ros_msgs__srv__FinishTrajectory(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_cartographer_ros_msgs__srv__FinishTrajectory(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "cartographer_ros_msgs" &&
      service_name == "FinishTrajectory"
    ) || (
      ros_id == "ros2" &&
      package_name == "cartographer_ros_msgs" &&
      service_name == "srv/FinishTrajectory"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      cartographer_ros_msgs::FinishTrajectory,
      cartographer_ros_msgs::srv::FinishTrajectory
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  cartographer_ros_msgs::FinishTrajectory,
  cartographer_ros_msgs::srv::FinishTrajectory
>::translate_1_to_2(
  const cartographer_ros_msgs::FinishTrajectory::Request& req1,
  cartographer_ros_msgs::srv::FinishTrajectory::Request& req2
) {
  auto & trajectory_id1 = req1.trajectory_id;
  auto & trajectory_id2 = req2.trajectory_id;
  trajectory_id2 = trajectory_id1;
}

template <>
void ServiceFactory<
  cartographer_ros_msgs::FinishTrajectory,
  cartographer_ros_msgs::srv::FinishTrajectory
>::translate_1_to_2(
  const cartographer_ros_msgs::FinishTrajectory::Response& req1,
  cartographer_ros_msgs::srv::FinishTrajectory::Response& req2
) {
  auto & status1 = req1.status;
  auto & status2 = req2.status;
  Factory<cartographer_ros_msgs::StatusResponse,cartographer_ros_msgs::msg::StatusResponse>::convert_1_to_2(status1, status2);
}

template <>
void ServiceFactory<
  cartographer_ros_msgs::FinishTrajectory,
  cartographer_ros_msgs::srv::FinishTrajectory
>::translate_2_to_1(
  const cartographer_ros_msgs::srv::FinishTrajectory::Request& req2,
  cartographer_ros_msgs::FinishTrajectory::Request& req1
) {
  auto & trajectory_id1 = req1.trajectory_id;
  auto & trajectory_id2 = req2.trajectory_id;
  trajectory_id1 = trajectory_id2;
}

template <>
void ServiceFactory<
  cartographer_ros_msgs::FinishTrajectory,
  cartographer_ros_msgs::srv::FinishTrajectory
>::translate_2_to_1(
  const cartographer_ros_msgs::srv::FinishTrajectory::Response& req2,
  cartographer_ros_msgs::FinishTrajectory::Response& req1
) {
  auto & status1 = req1.status;
  auto & status2 = req2.status;
  Factory<cartographer_ros_msgs::StatusResponse,cartographer_ros_msgs::msg::StatusResponse>::convert_2_to_1(status2, status1);
}

}  // namespace ros1_bridge
