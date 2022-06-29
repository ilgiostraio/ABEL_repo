// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "gazebo_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__msg__ODEJointProperties(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "gazebo_msgs/ODEJointProperties" ||
     ros1_type_name == "") &&
    ros2_type_name == "gazebo_msgs/msg/ODEJointProperties")
  {
    return std::make_shared<
      Factory<
        gazebo_msgs::ODEJointProperties,
        gazebo_msgs::msg::ODEJointProperties
      >
    >("gazebo_msgs/ODEJointProperties", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__msg__ODEJointProperties(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  gazebo_msgs::ODEJointProperties,
  gazebo_msgs::msg::ODEJointProperties
>::convert_1_to_2(
  const gazebo_msgs::ODEJointProperties & ros1_msg,
  gazebo_msgs::msg::ODEJointProperties & ros2_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.damping.resize(ros1_msg.damping.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.damping.begin(),
    ros1_msg.damping.end(),
    ros2_msg.damping.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.hi_stop.resize(ros1_msg.hiStop.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.hiStop.begin(),
    ros1_msg.hiStop.end(),
    ros2_msg.hi_stop.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.lo_stop.resize(ros1_msg.loStop.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.loStop.begin(),
    ros1_msg.loStop.end(),
    ros2_msg.lo_stop.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.erp.resize(ros1_msg.erp.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.erp.begin(),
    ros1_msg.erp.end(),
    ros2_msg.erp.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.cfm.resize(ros1_msg.cfm.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.cfm.begin(),
    ros1_msg.cfm.end(),
    ros2_msg.cfm.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.stop_erp.resize(ros1_msg.stop_erp.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.stop_erp.begin(),
    ros1_msg.stop_erp.end(),
    ros2_msg.stop_erp.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.stop_cfm.resize(ros1_msg.stop_cfm.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.stop_cfm.begin(),
    ros1_msg.stop_cfm.end(),
    ros2_msg.stop_cfm.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.fudge_factor.resize(ros1_msg.fudge_factor.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.fudge_factor.begin(),
    ros1_msg.fudge_factor.end(),
    ros2_msg.fudge_factor.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.fmax.resize(ros1_msg.fmax.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.fmax.begin(),
    ros1_msg.fmax.end(),
    ros2_msg.fmax.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.vel.resize(ros1_msg.vel.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.vel.begin(),
    ros1_msg.vel.end(),
    ros2_msg.vel.begin());
}

template<>
void
Factory<
  gazebo_msgs::ODEJointProperties,
  gazebo_msgs::msg::ODEJointProperties
>::convert_2_to_1(
  const gazebo_msgs::msg::ODEJointProperties & ros2_msg,
  gazebo_msgs::ODEJointProperties & ros1_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.damping.resize(ros2_msg.damping.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.damping.begin(),
    ros2_msg.damping.end(),
    ros1_msg.damping.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.hiStop.resize(ros2_msg.hi_stop.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.hi_stop.begin(),
    ros2_msg.hi_stop.end(),
    ros1_msg.hiStop.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.loStop.resize(ros2_msg.lo_stop.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.lo_stop.begin(),
    ros2_msg.lo_stop.end(),
    ros1_msg.loStop.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.erp.resize(ros2_msg.erp.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.erp.begin(),
    ros2_msg.erp.end(),
    ros1_msg.erp.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.cfm.resize(ros2_msg.cfm.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.cfm.begin(),
    ros2_msg.cfm.end(),
    ros1_msg.cfm.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.stop_erp.resize(ros2_msg.stop_erp.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.stop_erp.begin(),
    ros2_msg.stop_erp.end(),
    ros1_msg.stop_erp.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.stop_cfm.resize(ros2_msg.stop_cfm.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.stop_cfm.begin(),
    ros2_msg.stop_cfm.end(),
    ros1_msg.stop_cfm.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.fudge_factor.resize(ros2_msg.fudge_factor.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.fudge_factor.begin(),
    ros2_msg.fudge_factor.end(),
    ros1_msg.fudge_factor.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.fmax.resize(ros2_msg.fmax.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.fmax.begin(),
    ros2_msg.fmax.end(),
    ros1_msg.fmax.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.vel.resize(ros2_msg.vel.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.vel.begin(),
    ros2_msg.vel.end(),
    ros1_msg.vel.begin());
}
}  // namespace ros1_bridge
