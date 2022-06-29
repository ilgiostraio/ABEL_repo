// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "example_interfaces_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <roscpp_tutorials/TwoInts.h>
#include <rospy_tutorials/AddTwoInts.h>

// include ROS 2 services
#include <example_interfaces/srv/add_two_ints.hpp>
#include <example_interfaces/srv/add_two_ints.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_example_interfaces__srv__AddTwoInts(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_example_interfaces__srv__AddTwoInts(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "roscpp_tutorials" &&
      service_name == "TwoInts"
    ) || (
      ros_id == "ros2" &&
      package_name == "example_interfaces" &&
      service_name == "srv/AddTwoInts"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      roscpp_tutorials::TwoInts,
      example_interfaces::srv::AddTwoInts
    >);
  }
  if (
    (
      ros_id == "ros1" &&
      package_name == "rospy_tutorials" &&
      service_name == "AddTwoInts"
    ) || (
      ros_id == "ros2" &&
      package_name == "example_interfaces" &&
      service_name == "srv/AddTwoInts"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      rospy_tutorials::AddTwoInts,
      example_interfaces::srv::AddTwoInts
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  roscpp_tutorials::TwoInts,
  example_interfaces::srv::AddTwoInts
>::translate_1_to_2(
  const roscpp_tutorials::TwoInts::Request& req1,
  example_interfaces::srv::AddTwoInts::Request& req2
) {
  auto & a1 = req1.a;
  auto & a2 = req2.a;
  a2 = a1;
  auto & b1 = req1.b;
  auto & b2 = req2.b;
  b2 = b1;
}

template <>
void ServiceFactory<
  roscpp_tutorials::TwoInts,
  example_interfaces::srv::AddTwoInts
>::translate_1_to_2(
  const roscpp_tutorials::TwoInts::Response& req1,
  example_interfaces::srv::AddTwoInts::Response& req2
) {
  auto & sum1 = req1.sum;
  auto & sum2 = req2.sum;
  sum2 = sum1;
}

template <>
void ServiceFactory<
  roscpp_tutorials::TwoInts,
  example_interfaces::srv::AddTwoInts
>::translate_2_to_1(
  const example_interfaces::srv::AddTwoInts::Request& req2,
  roscpp_tutorials::TwoInts::Request& req1
) {
  auto & a1 = req1.a;
  auto & a2 = req2.a;
  a1 = a2;
  auto & b1 = req1.b;
  auto & b2 = req2.b;
  b1 = b2;
}

template <>
void ServiceFactory<
  roscpp_tutorials::TwoInts,
  example_interfaces::srv::AddTwoInts
>::translate_2_to_1(
  const example_interfaces::srv::AddTwoInts::Response& req2,
  roscpp_tutorials::TwoInts::Response& req1
) {
  auto & sum1 = req1.sum;
  auto & sum2 = req2.sum;
  sum1 = sum2;
}


template <>
void ServiceFactory<
  rospy_tutorials::AddTwoInts,
  example_interfaces::srv::AddTwoInts
>::translate_1_to_2(
  const rospy_tutorials::AddTwoInts::Request& req1,
  example_interfaces::srv::AddTwoInts::Request& req2
) {
  auto & a1 = req1.a;
  auto & a2 = req2.a;
  a2 = a1;
  auto & b1 = req1.b;
  auto & b2 = req2.b;
  b2 = b1;
}

template <>
void ServiceFactory<
  rospy_tutorials::AddTwoInts,
  example_interfaces::srv::AddTwoInts
>::translate_1_to_2(
  const rospy_tutorials::AddTwoInts::Response& req1,
  example_interfaces::srv::AddTwoInts::Response& req2
) {
  auto & sum1 = req1.sum;
  auto & sum2 = req2.sum;
  sum2 = sum1;
}

template <>
void ServiceFactory<
  rospy_tutorials::AddTwoInts,
  example_interfaces::srv::AddTwoInts
>::translate_2_to_1(
  const example_interfaces::srv::AddTwoInts::Request& req2,
  rospy_tutorials::AddTwoInts::Request& req1
) {
  auto & a1 = req1.a;
  auto & a2 = req2.a;
  a1 = a2;
  auto & b1 = req1.b;
  auto & b2 = req2.b;
  b1 = b2;
}

template <>
void ServiceFactory<
  rospy_tutorials::AddTwoInts,
  example_interfaces::srv::AddTwoInts
>::translate_2_to_1(
  const example_interfaces::srv::AddTwoInts::Response& req2,
  rospy_tutorials::AddTwoInts::Response& req1
) {
  auto & sum1 = req1.sum;
  auto & sum2 = req2.sum;
  sum1 = sum2;
}

}  // namespace ros1_bridge
