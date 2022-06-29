// generated from ros1_bridge/resource/pkg_factories.hpp.em

#include <memory>
#include <string>

#include <ros1_bridge/factory.hpp>

// include ROS 1 messages
#include <tf2_msgs/TF2Error.h>
#include <tf2_msgs/TFMessage.h>
#include <tf/tfMessage.h>

// include ROS 2 messages
#include <tf2_msgs/msg/tf2_error.hpp>
#include <tf2_msgs/msg/tf_message.hpp>
#include <tf2_msgs/msg/tf_message.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_tf2_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_tf2_msgs__msg__TF2Error(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_tf2_msgs__msg__TFMessage(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_tf2_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_tf2_msgs__srv__FrameGraph(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

// conversion functions for available interfaces

template<>
void
Factory<
  tf2_msgs::TF2Error,
  tf2_msgs::msg::TF2Error
>::convert_1_to_2(
  const tf2_msgs::TF2Error & ros1_msg,
  tf2_msgs::msg::TF2Error & ros2_msg);

template<>
void
Factory<
  tf2_msgs::TF2Error,
  tf2_msgs::msg::TF2Error
>::convert_2_to_1(
  const tf2_msgs::msg::TF2Error & ros2_msg,
  tf2_msgs::TF2Error & ros1_msg);


template<>
void
Factory<
  tf2_msgs::TFMessage,
  tf2_msgs::msg::TFMessage
>::convert_1_to_2(
  const tf2_msgs::TFMessage & ros1_msg,
  tf2_msgs::msg::TFMessage & ros2_msg);

template<>
void
Factory<
  tf2_msgs::TFMessage,
  tf2_msgs::msg::TFMessage
>::convert_2_to_1(
  const tf2_msgs::msg::TFMessage & ros2_msg,
  tf2_msgs::TFMessage & ros1_msg);


template<>
void
Factory<
  tf::tfMessage,
  tf2_msgs::msg::TFMessage
>::convert_1_to_2(
  const tf::tfMessage & ros1_msg,
  tf2_msgs::msg::TFMessage & ros2_msg);

template<>
void
Factory<
  tf::tfMessage,
  tf2_msgs::msg::TFMessage
>::convert_2_to_1(
  const tf2_msgs::msg::TFMessage & ros2_msg,
  tf::tfMessage & ros1_msg);

}  // namespace ros1_bridge
