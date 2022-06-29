// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "gazebo_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <gazebo_msgs/GetWorldProperties.h>

// include ROS 2 services
#include <gazebo_msgs/srv/get_world_properties.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__srv__GetWorldProperties(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__GetWorldProperties(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "gazebo_msgs" &&
      service_name == "GetWorldProperties"
    ) || (
      ros_id == "ros2" &&
      package_name == "gazebo_msgs" &&
      service_name == "srv/GetWorldProperties"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      gazebo_msgs::GetWorldProperties,
      gazebo_msgs::srv::GetWorldProperties
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  gazebo_msgs::GetWorldProperties,
  gazebo_msgs::srv::GetWorldProperties
>::translate_1_to_2(
  const gazebo_msgs::GetWorldProperties::Request& req1,
  gazebo_msgs::srv::GetWorldProperties::Request& req2
) {
}

template <>
void ServiceFactory<
  gazebo_msgs::GetWorldProperties,
  gazebo_msgs::srv::GetWorldProperties
>::translate_1_to_2(
  const gazebo_msgs::GetWorldProperties::Response& req1,
  gazebo_msgs::srv::GetWorldProperties::Response& req2
) {
  auto & sim_time1 = req1.sim_time;
  auto & sim_time2 = req2.sim_time;
  sim_time2 = sim_time1;
  req2.model_names.resize(req1.model_names.size());
  auto model_names1_it = req1.model_names.begin();
  auto model_names2_it = req2.model_names.begin();
  while (
    model_names1_it != req1.model_names.end() &&
    model_names2_it != req2.model_names.end()
  ) {
    auto & model_names1 = *(model_names1_it++);
    auto & model_names2 = *(model_names2_it++);
  model_names2 = model_names1;
  }
  auto & rendering_enabled1 = req1.rendering_enabled;
  auto & rendering_enabled2 = req2.rendering_enabled;
  rendering_enabled2 = rendering_enabled1;
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success2 = success1;
  auto & status_message1 = req1.status_message;
  auto & status_message2 = req2.status_message;
  status_message2 = status_message1;
}

template <>
void ServiceFactory<
  gazebo_msgs::GetWorldProperties,
  gazebo_msgs::srv::GetWorldProperties
>::translate_2_to_1(
  const gazebo_msgs::srv::GetWorldProperties::Request& req2,
  gazebo_msgs::GetWorldProperties::Request& req1
) {
}

template <>
void ServiceFactory<
  gazebo_msgs::GetWorldProperties,
  gazebo_msgs::srv::GetWorldProperties
>::translate_2_to_1(
  const gazebo_msgs::srv::GetWorldProperties::Response& req2,
  gazebo_msgs::GetWorldProperties::Response& req1
) {
  auto & sim_time1 = req1.sim_time;
  auto & sim_time2 = req2.sim_time;
  sim_time1 = sim_time2;
  req1.model_names.resize(req2.model_names.size());
  auto model_names1_it = req1.model_names.begin();
  auto model_names2_it = req2.model_names.begin();
  while (
    model_names1_it != req1.model_names.end() &&
    model_names2_it != req2.model_names.end()
  ) {
    auto & model_names1 = *(model_names1_it++);
    auto & model_names2 = *(model_names2_it++);
  model_names1 = model_names2;
  }
  auto & rendering_enabled1 = req1.rendering_enabled;
  auto & rendering_enabled2 = req2.rendering_enabled;
  rendering_enabled1 = rendering_enabled2;
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success1 = success2;
  auto & status_message1 = req1.status_message;
  auto & status_message2 = req2.status_message;
  status_message1 = status_message2;
}

}  // namespace ros1_bridge
