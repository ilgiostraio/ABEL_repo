// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "pcl_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <pcl_msgs/UpdateFilename.h>

// include ROS 2 services
#include <pcl_msgs/srv/update_filename.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_pcl_msgs__srv__UpdateFilename(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_pcl_msgs__srv__UpdateFilename(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "pcl_msgs" &&
      service_name == "UpdateFilename"
    ) || (
      ros_id == "ros2" &&
      package_name == "pcl_msgs" &&
      service_name == "srv/UpdateFilename"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      pcl_msgs::UpdateFilename,
      pcl_msgs::srv::UpdateFilename
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  pcl_msgs::UpdateFilename,
  pcl_msgs::srv::UpdateFilename
>::translate_1_to_2(
  const pcl_msgs::UpdateFilename::Request& req1,
  pcl_msgs::srv::UpdateFilename::Request& req2
) {
  auto & filename1 = req1.filename;
  auto & filename2 = req2.filename;
  filename2 = filename1;
}

template <>
void ServiceFactory<
  pcl_msgs::UpdateFilename,
  pcl_msgs::srv::UpdateFilename
>::translate_1_to_2(
  const pcl_msgs::UpdateFilename::Response& req1,
  pcl_msgs::srv::UpdateFilename::Response& req2
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success2 = success1;
}

template <>
void ServiceFactory<
  pcl_msgs::UpdateFilename,
  pcl_msgs::srv::UpdateFilename
>::translate_2_to_1(
  const pcl_msgs::srv::UpdateFilename::Request& req2,
  pcl_msgs::UpdateFilename::Request& req1
) {
  auto & filename1 = req1.filename;
  auto & filename2 = req2.filename;
  filename1 = filename2;
}

template <>
void ServiceFactory<
  pcl_msgs::UpdateFilename,
  pcl_msgs::srv::UpdateFilename
>::translate_2_to_1(
  const pcl_msgs::srv::UpdateFilename::Response& req2,
  pcl_msgs::UpdateFilename::Response& req1
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success1 = success2;
}

}  // namespace ros1_bridge
