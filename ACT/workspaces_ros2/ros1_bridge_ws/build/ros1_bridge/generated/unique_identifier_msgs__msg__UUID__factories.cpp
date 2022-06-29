// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "unique_identifier_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_unique_identifier_msgs__msg__UUID(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "uuid_msgs/UniqueID" ||
     ros1_type_name == "") &&
    ros2_type_name == "unique_identifier_msgs/msg/UUID")
  {
    return std::make_shared<
      Factory<
        uuid_msgs::UniqueID,
        unique_identifier_msgs::msg::UUID
      >
    >("uuid_msgs/UniqueID", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_unique_identifier_msgs__msg__UUID(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  uuid_msgs::UniqueID,
  unique_identifier_msgs::msg::UUID
>::convert_1_to_2(
  const uuid_msgs::UniqueID & ros1_msg,
  unique_identifier_msgs::msg::UUID & ros2_msg)
{

  // convert array or sequence field
  // statically sized array
  static_assert(
    (ros2_msg.uuid.size()) >= (ros1_msg.uuid.size()),
    "destination array not large enough for source array"
  );
  // convert primitive array elements
  std::copy(
    ros1_msg.uuid.begin(),
    ros1_msg.uuid.end(),
    ros2_msg.uuid.begin());
}

template<>
void
Factory<
  uuid_msgs::UniqueID,
  unique_identifier_msgs::msg::UUID
>::convert_2_to_1(
  const unique_identifier_msgs::msg::UUID & ros2_msg,
  uuid_msgs::UniqueID & ros1_msg)
{

  // convert array or sequence field
  // statically sized array
  static_assert(
    (ros1_msg.uuid.size()) >= (ros2_msg.uuid.size()),
    "destination array not large enough for source array"
  );
  // convert primitive array elements
  std::copy(
    ros2_msg.uuid.begin(),
    ros2_msg.uuid.end(),
    ros1_msg.uuid.begin());
}
}  // namespace ros1_bridge
