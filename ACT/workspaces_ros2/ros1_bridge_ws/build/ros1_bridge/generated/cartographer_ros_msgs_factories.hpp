// generated from ros1_bridge/resource/pkg_factories.hpp.em

#include <memory>
#include <string>

#include <ros1_bridge/factory.hpp>

// include ROS 1 messages
#include <cartographer_ros_msgs/StatusCode.h>
#include <cartographer_ros_msgs/StatusResponse.h>
#include <cartographer_ros_msgs/LandmarkEntry.h>
#include <cartographer_ros_msgs/SubmapEntry.h>
#include <cartographer_ros_msgs/SubmapTexture.h>
#include <cartographer_ros_msgs/SubmapList.h>

// include ROS 2 messages
#include <cartographer_ros_msgs/msg/status_code.hpp>
#include <cartographer_ros_msgs/msg/status_response.hpp>
#include <cartographer_ros_msgs/msg/landmark_entry.hpp>
#include <cartographer_ros_msgs/msg/submap_entry.hpp>
#include <cartographer_ros_msgs/msg/submap_texture.hpp>
#include <cartographer_ros_msgs/msg/submap_list.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_cartographer_ros_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_cartographer_ros_msgs__msg__LandmarkEntry(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_cartographer_ros_msgs__msg__LandmarkList(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_cartographer_ros_msgs__msg__SensorTopics(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_cartographer_ros_msgs__msg__StatusCode(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_cartographer_ros_msgs__msg__StatusResponse(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_cartographer_ros_msgs__msg__SubmapEntry(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_cartographer_ros_msgs__msg__SubmapList(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_cartographer_ros_msgs__msg__SubmapTexture(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_cartographer_ros_msgs__msg__TrajectoryOptions(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_cartographer_ros_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_cartographer_ros_msgs__srv__FinishTrajectory(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_cartographer_ros_msgs__srv__StartTrajectory(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_cartographer_ros_msgs__srv__SubmapQuery(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_cartographer_ros_msgs__srv__WriteState(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

// conversion functions for available interfaces

template<>
void
Factory<
  cartographer_ros_msgs::StatusCode,
  cartographer_ros_msgs::msg::StatusCode
>::convert_1_to_2(
  const cartographer_ros_msgs::StatusCode & ros1_msg,
  cartographer_ros_msgs::msg::StatusCode & ros2_msg);

template<>
void
Factory<
  cartographer_ros_msgs::StatusCode,
  cartographer_ros_msgs::msg::StatusCode
>::convert_2_to_1(
  const cartographer_ros_msgs::msg::StatusCode & ros2_msg,
  cartographer_ros_msgs::StatusCode & ros1_msg);


template<>
void
Factory<
  cartographer_ros_msgs::StatusResponse,
  cartographer_ros_msgs::msg::StatusResponse
>::convert_1_to_2(
  const cartographer_ros_msgs::StatusResponse & ros1_msg,
  cartographer_ros_msgs::msg::StatusResponse & ros2_msg);

template<>
void
Factory<
  cartographer_ros_msgs::StatusResponse,
  cartographer_ros_msgs::msg::StatusResponse
>::convert_2_to_1(
  const cartographer_ros_msgs::msg::StatusResponse & ros2_msg,
  cartographer_ros_msgs::StatusResponse & ros1_msg);


template<>
void
Factory<
  cartographer_ros_msgs::LandmarkEntry,
  cartographer_ros_msgs::msg::LandmarkEntry
>::convert_1_to_2(
  const cartographer_ros_msgs::LandmarkEntry & ros1_msg,
  cartographer_ros_msgs::msg::LandmarkEntry & ros2_msg);

template<>
void
Factory<
  cartographer_ros_msgs::LandmarkEntry,
  cartographer_ros_msgs::msg::LandmarkEntry
>::convert_2_to_1(
  const cartographer_ros_msgs::msg::LandmarkEntry & ros2_msg,
  cartographer_ros_msgs::LandmarkEntry & ros1_msg);


template<>
void
Factory<
  cartographer_ros_msgs::SubmapEntry,
  cartographer_ros_msgs::msg::SubmapEntry
>::convert_1_to_2(
  const cartographer_ros_msgs::SubmapEntry & ros1_msg,
  cartographer_ros_msgs::msg::SubmapEntry & ros2_msg);

template<>
void
Factory<
  cartographer_ros_msgs::SubmapEntry,
  cartographer_ros_msgs::msg::SubmapEntry
>::convert_2_to_1(
  const cartographer_ros_msgs::msg::SubmapEntry & ros2_msg,
  cartographer_ros_msgs::SubmapEntry & ros1_msg);


template<>
void
Factory<
  cartographer_ros_msgs::SubmapTexture,
  cartographer_ros_msgs::msg::SubmapTexture
>::convert_1_to_2(
  const cartographer_ros_msgs::SubmapTexture & ros1_msg,
  cartographer_ros_msgs::msg::SubmapTexture & ros2_msg);

template<>
void
Factory<
  cartographer_ros_msgs::SubmapTexture,
  cartographer_ros_msgs::msg::SubmapTexture
>::convert_2_to_1(
  const cartographer_ros_msgs::msg::SubmapTexture & ros2_msg,
  cartographer_ros_msgs::SubmapTexture & ros1_msg);


template<>
void
Factory<
  cartographer_ros_msgs::SubmapList,
  cartographer_ros_msgs::msg::SubmapList
>::convert_1_to_2(
  const cartographer_ros_msgs::SubmapList & ros1_msg,
  cartographer_ros_msgs::msg::SubmapList & ros2_msg);

template<>
void
Factory<
  cartographer_ros_msgs::SubmapList,
  cartographer_ros_msgs::msg::SubmapList
>::convert_2_to_1(
  const cartographer_ros_msgs::msg::SubmapList & ros2_msg,
  cartographer_ros_msgs::SubmapList & ros1_msg);

}  // namespace ros1_bridge
