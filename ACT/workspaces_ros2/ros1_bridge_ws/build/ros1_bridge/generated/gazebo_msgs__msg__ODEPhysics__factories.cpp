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
get_factory_gazebo_msgs__msg__ODEPhysics(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "gazebo_msgs/ODEPhysics" ||
     ros1_type_name == "") &&
    ros2_type_name == "gazebo_msgs/msg/ODEPhysics")
  {
    return std::make_shared<
      Factory<
        gazebo_msgs::ODEPhysics,
        gazebo_msgs::msg::ODEPhysics
      >
    >("gazebo_msgs/ODEPhysics", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__msg__ODEPhysics(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  gazebo_msgs::ODEPhysics,
  gazebo_msgs::msg::ODEPhysics
>::convert_1_to_2(
  const gazebo_msgs::ODEPhysics & ros1_msg,
  gazebo_msgs::msg::ODEPhysics & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.auto_disable_bodies = ros1_msg.auto_disable_bodies;

  // convert non-array field
  // convert primitive field
  ros2_msg.sor_pgs_precon_iters = ros1_msg.sor_pgs_precon_iters;

  // convert non-array field
  // convert primitive field
  ros2_msg.sor_pgs_iters = ros1_msg.sor_pgs_iters;

  // convert non-array field
  // convert primitive field
  ros2_msg.sor_pgs_w = ros1_msg.sor_pgs_w;

  // convert non-array field
  // convert primitive field
  ros2_msg.sor_pgs_rms_error_tol = ros1_msg.sor_pgs_rms_error_tol;

  // convert non-array field
  // convert primitive field
  ros2_msg.contact_surface_layer = ros1_msg.contact_surface_layer;

  // convert non-array field
  // convert primitive field
  ros2_msg.contact_max_correcting_vel = ros1_msg.contact_max_correcting_vel;

  // convert non-array field
  // convert primitive field
  ros2_msg.cfm = ros1_msg.cfm;

  // convert non-array field
  // convert primitive field
  ros2_msg.erp = ros1_msg.erp;

  // convert non-array field
  // convert primitive field
  ros2_msg.max_contacts = ros1_msg.max_contacts;
}

template<>
void
Factory<
  gazebo_msgs::ODEPhysics,
  gazebo_msgs::msg::ODEPhysics
>::convert_2_to_1(
  const gazebo_msgs::msg::ODEPhysics & ros2_msg,
  gazebo_msgs::ODEPhysics & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.auto_disable_bodies = ros2_msg.auto_disable_bodies;

  // convert non-array field
  // convert primitive field
  ros1_msg.sor_pgs_precon_iters = ros2_msg.sor_pgs_precon_iters;

  // convert non-array field
  // convert primitive field
  ros1_msg.sor_pgs_iters = ros2_msg.sor_pgs_iters;

  // convert non-array field
  // convert primitive field
  ros1_msg.sor_pgs_w = ros2_msg.sor_pgs_w;

  // convert non-array field
  // convert primitive field
  ros1_msg.sor_pgs_rms_error_tol = ros2_msg.sor_pgs_rms_error_tol;

  // convert non-array field
  // convert primitive field
  ros1_msg.contact_surface_layer = ros2_msg.contact_surface_layer;

  // convert non-array field
  // convert primitive field
  ros1_msg.contact_max_correcting_vel = ros2_msg.contact_max_correcting_vel;

  // convert non-array field
  // convert primitive field
  ros1_msg.cfm = ros2_msg.cfm;

  // convert non-array field
  // convert primitive field
  ros1_msg.erp = ros2_msg.erp;

  // convert non-array field
  // convert primitive field
  ros1_msg.max_contacts = ros2_msg.max_contacts;
}
}  // namespace ros1_bridge
