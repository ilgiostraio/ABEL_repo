// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "gazebo_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <gazebo_msgs/DeleteModel.h>

// include ROS 2 services
#include <gazebo_msgs/srv/delete_model.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__srv__DeleteModel(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__DeleteModel(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "gazebo_msgs" &&
      service_name == "DeleteModel"
    ) || (
      ros_id == "ros2" &&
      package_name == "gazebo_msgs" &&
      service_name == "srv/DeleteModel"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      gazebo_msgs::DeleteModel,
      gazebo_msgs::srv::DeleteModel
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  gazebo_msgs::DeleteModel,
  gazebo_msgs::srv::DeleteModel
>::translate_1_to_2(
  const gazebo_msgs::DeleteModel::Request& req1,
  gazebo_msgs::srv::DeleteModel::Request& req2
) {
  auto & model_name1 = req1.model_name;
  auto & model_name2 = req2.model_name;
  model_name2 = model_name1;
}

template <>
void ServiceFactory<
  gazebo_msgs::DeleteModel,
  gazebo_msgs::srv::DeleteModel
>::translate_1_to_2(
  const gazebo_msgs::DeleteModel::Response& req1,
  gazebo_msgs::srv::DeleteModel::Response& req2
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
  gazebo_msgs::DeleteModel,
  gazebo_msgs::srv::DeleteModel
>::translate_2_to_1(
  const gazebo_msgs::srv::DeleteModel::Request& req2,
  gazebo_msgs::DeleteModel::Request& req1
) {
  auto & model_name1 = req1.model_name;
  auto & model_name2 = req2.model_name;
  model_name1 = model_name2;
}

template <>
void ServiceFactory<
  gazebo_msgs::DeleteModel,
  gazebo_msgs::srv::DeleteModel
>::translate_2_to_1(
  const gazebo_msgs::srv::DeleteModel::Response& req2,
  gazebo_msgs::DeleteModel::Response& req1
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success1 = success2;
  auto & status_message1 = req1.status_message;
  auto & status_message2 = req2.status_message;
  status_message1 = status_message2;
}

}  // namespace ros1_bridge
