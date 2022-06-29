// generated from ros1_bridge/resource/pkg_factories.hpp.em

#include <memory>
#include <string>

#include <ros1_bridge/factory.hpp>

// include ROS 1 messages
#include <uuid_msgs/UniqueID.h>

// include ROS 2 messages
#include <unique_identifier_msgs/msg/uuid.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_unique_identifier_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_unique_identifier_msgs__msg__UUID(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_unique_identifier_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

// conversion functions for available interfaces

template<>
void
Factory<
  uuid_msgs::UniqueID,
  unique_identifier_msgs::msg::UUID
>::convert_1_to_2(
  const uuid_msgs::UniqueID & ros1_msg,
  unique_identifier_msgs::msg::UUID & ros2_msg);

template<>
void
Factory<
  uuid_msgs::UniqueID,
  unique_identifier_msgs::msg::UUID
>::convert_2_to_1(
  const unique_identifier_msgs::msg::UUID & ros2_msg,
  uuid_msgs::UniqueID & ros1_msg);

}  // namespace ros1_bridge
