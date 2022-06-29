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
get_factory_sensor_msgs__msg__BatteryState(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "sensor_msgs/BatteryState" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/msg/BatteryState")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::BatteryState,
        sensor_msgs::msg::BatteryState
      >
    >("sensor_msgs/BatteryState", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_sensor_msgs__msg__BatteryState(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  sensor_msgs::BatteryState,
  sensor_msgs::msg::BatteryState
>::convert_1_to_2(
  const sensor_msgs::BatteryState & ros1_msg,
  sensor_msgs::msg::BatteryState & ros2_msg)
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
  ros2_msg.voltage = ros1_msg.voltage;

  // convert non-array field
  // convert primitive field
  ros2_msg.temperature = ros1_msg.temperature;

  // convert non-array field
  // convert primitive field
  ros2_msg.current = ros1_msg.current;

  // convert non-array field
  // convert primitive field
  ros2_msg.charge = ros1_msg.charge;

  // convert non-array field
  // convert primitive field
  ros2_msg.capacity = ros1_msg.capacity;

  // convert non-array field
  // convert primitive field
  ros2_msg.design_capacity = ros1_msg.design_capacity;

  // convert non-array field
  // convert primitive field
  ros2_msg.percentage = ros1_msg.percentage;

  // convert non-array field
  // convert primitive field
  ros2_msg.power_supply_status = ros1_msg.power_supply_status;

  // convert non-array field
  // convert primitive field
  ros2_msg.power_supply_health = ros1_msg.power_supply_health;

  // convert non-array field
  // convert primitive field
  ros2_msg.power_supply_technology = ros1_msg.power_supply_technology;

  // convert non-array field
  // convert primitive field
  ros2_msg.present = ros1_msg.present;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.cell_voltage.resize(ros1_msg.cell_voltage.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.cell_voltage.begin(),
    ros1_msg.cell_voltage.end(),
    ros2_msg.cell_voltage.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.cell_temperature.resize(ros1_msg.cell_temperature.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.cell_temperature.begin(),
    ros1_msg.cell_temperature.end(),
    ros2_msg.cell_temperature.begin());

  // convert non-array field
  // convert primitive field
  ros2_msg.location = ros1_msg.location;

  // convert non-array field
  // convert primitive field
  ros2_msg.serial_number = ros1_msg.serial_number;
}

template<>
void
Factory<
  sensor_msgs::BatteryState,
  sensor_msgs::msg::BatteryState
>::convert_2_to_1(
  const sensor_msgs::msg::BatteryState & ros2_msg,
  sensor_msgs::BatteryState & ros1_msg)
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
  ros1_msg.voltage = ros2_msg.voltage;

  // convert non-array field
  // convert primitive field
  ros1_msg.temperature = ros2_msg.temperature;

  // convert non-array field
  // convert primitive field
  ros1_msg.current = ros2_msg.current;

  // convert non-array field
  // convert primitive field
  ros1_msg.charge = ros2_msg.charge;

  // convert non-array field
  // convert primitive field
  ros1_msg.capacity = ros2_msg.capacity;

  // convert non-array field
  // convert primitive field
  ros1_msg.design_capacity = ros2_msg.design_capacity;

  // convert non-array field
  // convert primitive field
  ros1_msg.percentage = ros2_msg.percentage;

  // convert non-array field
  // convert primitive field
  ros1_msg.power_supply_status = ros2_msg.power_supply_status;

  // convert non-array field
  // convert primitive field
  ros1_msg.power_supply_health = ros2_msg.power_supply_health;

  // convert non-array field
  // convert primitive field
  ros1_msg.power_supply_technology = ros2_msg.power_supply_technology;

  // convert non-array field
  // convert primitive field
  ros1_msg.present = ros2_msg.present;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.cell_voltage.resize(ros2_msg.cell_voltage.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.cell_voltage.begin(),
    ros2_msg.cell_voltage.end(),
    ros1_msg.cell_voltage.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.cell_temperature.resize(ros2_msg.cell_temperature.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.cell_temperature.begin(),
    ros2_msg.cell_temperature.end(),
    ros1_msg.cell_temperature.begin());

  // convert non-array field
  // convert primitive field
  ros1_msg.location = ros2_msg.location;

  // convert non-array field
  // convert primitive field
  ros1_msg.serial_number = ros2_msg.serial_number;
}
}  // namespace ros1_bridge
