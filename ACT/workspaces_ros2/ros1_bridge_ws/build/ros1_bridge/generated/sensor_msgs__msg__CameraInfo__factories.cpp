// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "sensor_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__CameraInfo(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "sensor_msgs/CameraInfo" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/msg/CameraInfo")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::CameraInfo,
        sensor_msgs::msg::CameraInfo
      >
    >("sensor_msgs/CameraInfo", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_sensor_msgs__msg__CameraInfo(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  sensor_msgs::CameraInfo,
  sensor_msgs::msg::CameraInfo
>::convert_1_to_2(
  const sensor_msgs::CameraInfo & ros1_msg,
  sensor_msgs::msg::CameraInfo & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);

  // convert non-array field
  // convert primitive field
  ros2_msg.height = ros1_msg.height;

  // convert non-array field
  // convert primitive field
  ros2_msg.width = ros1_msg.width;

  // convert non-array field
  // convert primitive field
  ros2_msg.distortion_model = ros1_msg.distortion_model;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.d.resize(ros1_msg.D.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.D.begin(),
    ros1_msg.D.end(),
    ros2_msg.d.begin());

  // convert array or sequence field
  // statically sized array
  static_assert(
    (ros2_msg.k.size()) >= (ros1_msg.K.size()),
    "destination array not large enough for source array"
  );
  // convert primitive array elements
  std::copy(
    ros1_msg.K.begin(),
    ros1_msg.K.end(),
    ros2_msg.k.begin());

  // convert array or sequence field
  // statically sized array
  static_assert(
    (ros2_msg.r.size()) >= (ros1_msg.R.size()),
    "destination array not large enough for source array"
  );
  // convert primitive array elements
  std::copy(
    ros1_msg.R.begin(),
    ros1_msg.R.end(),
    ros2_msg.r.begin());

  // convert array or sequence field
  // statically sized array
  static_assert(
    (ros2_msg.p.size()) >= (ros1_msg.P.size()),
    "destination array not large enough for source array"
  );
  // convert primitive array elements
  std::copy(
    ros1_msg.P.begin(),
    ros1_msg.P.end(),
    ros2_msg.p.begin());

  // convert non-array field
  // convert primitive field
  ros2_msg.binning_x = ros1_msg.binning_x;

  // convert non-array field
  // convert primitive field
  ros2_msg.binning_y = ros1_msg.binning_y;

  // convert non-array field
  // convert sub message field
  Factory<
    sensor_msgs::RegionOfInterest,
    sensor_msgs::msg::RegionOfInterest
  >::convert_1_to_2(
    ros1_msg.roi, ros2_msg.roi);
}

template<>
void
Factory<
  sensor_msgs::CameraInfo,
  sensor_msgs::msg::CameraInfo
>::convert_2_to_1(
  const sensor_msgs::msg::CameraInfo & ros2_msg,
  sensor_msgs::CameraInfo & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);

  // convert non-array field
  // convert primitive field
  ros1_msg.height = ros2_msg.height;

  // convert non-array field
  // convert primitive field
  ros1_msg.width = ros2_msg.width;

  // convert non-array field
  // convert primitive field
  ros1_msg.distortion_model = ros2_msg.distortion_model;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.D.resize(ros2_msg.d.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.d.begin(),
    ros2_msg.d.end(),
    ros1_msg.D.begin());

  // convert array or sequence field
  // statically sized array
  static_assert(
    (ros1_msg.K.size()) >= (ros2_msg.k.size()),
    "destination array not large enough for source array"
  );
  // convert primitive array elements
  std::copy(
    ros2_msg.k.begin(),
    ros2_msg.k.end(),
    ros1_msg.K.begin());

  // convert array or sequence field
  // statically sized array
  static_assert(
    (ros1_msg.R.size()) >= (ros2_msg.r.size()),
    "destination array not large enough for source array"
  );
  // convert primitive array elements
  std::copy(
    ros2_msg.r.begin(),
    ros2_msg.r.end(),
    ros1_msg.R.begin());

  // convert array or sequence field
  // statically sized array
  static_assert(
    (ros1_msg.P.size()) >= (ros2_msg.p.size()),
    "destination array not large enough for source array"
  );
  // convert primitive array elements
  std::copy(
    ros2_msg.p.begin(),
    ros2_msg.p.end(),
    ros1_msg.P.begin());

  // convert non-array field
  // convert primitive field
  ros1_msg.binning_x = ros2_msg.binning_x;

  // convert non-array field
  // convert primitive field
  ros1_msg.binning_y = ros2_msg.binning_y;

  // convert non-array field
  // convert sub message field
  Factory<
    sensor_msgs::RegionOfInterest,
    sensor_msgs::msg::RegionOfInterest
  >::convert_2_to_1(
    ros2_msg.roi, ros1_msg.roi);
}
}  // namespace ros1_bridge
