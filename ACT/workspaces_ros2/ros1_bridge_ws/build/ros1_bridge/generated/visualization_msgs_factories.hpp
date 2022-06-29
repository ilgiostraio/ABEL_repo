// generated from ros1_bridge/resource/pkg_factories.hpp.em

#include <memory>
#include <string>

#include <ros1_bridge/factory.hpp>

// include ROS 1 messages
#include <visualization_msgs/ImageMarker.h>
#include <visualization_msgs/InteractiveMarker.h>
#include <visualization_msgs/InteractiveMarkerControl.h>
#include <visualization_msgs/InteractiveMarkerFeedback.h>
#include <visualization_msgs/InteractiveMarkerInit.h>
#include <visualization_msgs/InteractiveMarkerPose.h>
#include <visualization_msgs/InteractiveMarkerUpdate.h>
#include <visualization_msgs/Marker.h>
#include <visualization_msgs/MarkerArray.h>
#include <visualization_msgs/MenuEntry.h>

// include ROS 2 messages
#include <visualization_msgs/msg/image_marker.hpp>
#include <visualization_msgs/msg/interactive_marker.hpp>
#include <visualization_msgs/msg/interactive_marker_control.hpp>
#include <visualization_msgs/msg/interactive_marker_feedback.hpp>
#include <visualization_msgs/msg/interactive_marker_init.hpp>
#include <visualization_msgs/msg/interactive_marker_pose.hpp>
#include <visualization_msgs/msg/interactive_marker_update.hpp>
#include <visualization_msgs/msg/marker.hpp>
#include <visualization_msgs/msg/marker_array.hpp>
#include <visualization_msgs/msg/menu_entry.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_visualization_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_visualization_msgs__msg__ImageMarker(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_visualization_msgs__msg__InteractiveMarker(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_visualization_msgs__msg__InteractiveMarkerControl(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_visualization_msgs__msg__InteractiveMarkerFeedback(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_visualization_msgs__msg__InteractiveMarkerInit(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_visualization_msgs__msg__InteractiveMarkerPose(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_visualization_msgs__msg__InteractiveMarkerUpdate(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_visualization_msgs__msg__Marker(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_visualization_msgs__msg__MarkerArray(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_visualization_msgs__msg__MenuEntry(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_visualization_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_visualization_msgs__srv__GetInteractiveMarkers(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

// conversion functions for available interfaces

template<>
void
Factory<
  visualization_msgs::ImageMarker,
  visualization_msgs::msg::ImageMarker
>::convert_1_to_2(
  const visualization_msgs::ImageMarker & ros1_msg,
  visualization_msgs::msg::ImageMarker & ros2_msg);

template<>
void
Factory<
  visualization_msgs::ImageMarker,
  visualization_msgs::msg::ImageMarker
>::convert_2_to_1(
  const visualization_msgs::msg::ImageMarker & ros2_msg,
  visualization_msgs::ImageMarker & ros1_msg);


template<>
void
Factory<
  visualization_msgs::InteractiveMarker,
  visualization_msgs::msg::InteractiveMarker
>::convert_1_to_2(
  const visualization_msgs::InteractiveMarker & ros1_msg,
  visualization_msgs::msg::InteractiveMarker & ros2_msg);

template<>
void
Factory<
  visualization_msgs::InteractiveMarker,
  visualization_msgs::msg::InteractiveMarker
>::convert_2_to_1(
  const visualization_msgs::msg::InteractiveMarker & ros2_msg,
  visualization_msgs::InteractiveMarker & ros1_msg);


template<>
void
Factory<
  visualization_msgs::InteractiveMarkerControl,
  visualization_msgs::msg::InteractiveMarkerControl
>::convert_1_to_2(
  const visualization_msgs::InteractiveMarkerControl & ros1_msg,
  visualization_msgs::msg::InteractiveMarkerControl & ros2_msg);

template<>
void
Factory<
  visualization_msgs::InteractiveMarkerControl,
  visualization_msgs::msg::InteractiveMarkerControl
>::convert_2_to_1(
  const visualization_msgs::msg::InteractiveMarkerControl & ros2_msg,
  visualization_msgs::InteractiveMarkerControl & ros1_msg);


template<>
void
Factory<
  visualization_msgs::InteractiveMarkerFeedback,
  visualization_msgs::msg::InteractiveMarkerFeedback
>::convert_1_to_2(
  const visualization_msgs::InteractiveMarkerFeedback & ros1_msg,
  visualization_msgs::msg::InteractiveMarkerFeedback & ros2_msg);

template<>
void
Factory<
  visualization_msgs::InteractiveMarkerFeedback,
  visualization_msgs::msg::InteractiveMarkerFeedback
>::convert_2_to_1(
  const visualization_msgs::msg::InteractiveMarkerFeedback & ros2_msg,
  visualization_msgs::InteractiveMarkerFeedback & ros1_msg);


template<>
void
Factory<
  visualization_msgs::InteractiveMarkerInit,
  visualization_msgs::msg::InteractiveMarkerInit
>::convert_1_to_2(
  const visualization_msgs::InteractiveMarkerInit & ros1_msg,
  visualization_msgs::msg::InteractiveMarkerInit & ros2_msg);

template<>
void
Factory<
  visualization_msgs::InteractiveMarkerInit,
  visualization_msgs::msg::InteractiveMarkerInit
>::convert_2_to_1(
  const visualization_msgs::msg::InteractiveMarkerInit & ros2_msg,
  visualization_msgs::InteractiveMarkerInit & ros1_msg);


template<>
void
Factory<
  visualization_msgs::InteractiveMarkerPose,
  visualization_msgs::msg::InteractiveMarkerPose
>::convert_1_to_2(
  const visualization_msgs::InteractiveMarkerPose & ros1_msg,
  visualization_msgs::msg::InteractiveMarkerPose & ros2_msg);

template<>
void
Factory<
  visualization_msgs::InteractiveMarkerPose,
  visualization_msgs::msg::InteractiveMarkerPose
>::convert_2_to_1(
  const visualization_msgs::msg::InteractiveMarkerPose & ros2_msg,
  visualization_msgs::InteractiveMarkerPose & ros1_msg);


template<>
void
Factory<
  visualization_msgs::InteractiveMarkerUpdate,
  visualization_msgs::msg::InteractiveMarkerUpdate
>::convert_1_to_2(
  const visualization_msgs::InteractiveMarkerUpdate & ros1_msg,
  visualization_msgs::msg::InteractiveMarkerUpdate & ros2_msg);

template<>
void
Factory<
  visualization_msgs::InteractiveMarkerUpdate,
  visualization_msgs::msg::InteractiveMarkerUpdate
>::convert_2_to_1(
  const visualization_msgs::msg::InteractiveMarkerUpdate & ros2_msg,
  visualization_msgs::InteractiveMarkerUpdate & ros1_msg);


template<>
void
Factory<
  visualization_msgs::Marker,
  visualization_msgs::msg::Marker
>::convert_1_to_2(
  const visualization_msgs::Marker & ros1_msg,
  visualization_msgs::msg::Marker & ros2_msg);

template<>
void
Factory<
  visualization_msgs::Marker,
  visualization_msgs::msg::Marker
>::convert_2_to_1(
  const visualization_msgs::msg::Marker & ros2_msg,
  visualization_msgs::Marker & ros1_msg);


template<>
void
Factory<
  visualization_msgs::MarkerArray,
  visualization_msgs::msg::MarkerArray
>::convert_1_to_2(
  const visualization_msgs::MarkerArray & ros1_msg,
  visualization_msgs::msg::MarkerArray & ros2_msg);

template<>
void
Factory<
  visualization_msgs::MarkerArray,
  visualization_msgs::msg::MarkerArray
>::convert_2_to_1(
  const visualization_msgs::msg::MarkerArray & ros2_msg,
  visualization_msgs::MarkerArray & ros1_msg);


template<>
void
Factory<
  visualization_msgs::MenuEntry,
  visualization_msgs::msg::MenuEntry
>::convert_1_to_2(
  const visualization_msgs::MenuEntry & ros1_msg,
  visualization_msgs::msg::MenuEntry & ros2_msg);

template<>
void
Factory<
  visualization_msgs::MenuEntry,
  visualization_msgs::msg::MenuEntry
>::convert_2_to_1(
  const visualization_msgs::msg::MenuEntry & ros2_msg,
  visualization_msgs::MenuEntry & ros1_msg);

}  // namespace ros1_bridge
