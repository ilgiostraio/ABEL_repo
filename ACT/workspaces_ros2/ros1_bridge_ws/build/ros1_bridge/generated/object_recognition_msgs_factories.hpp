// generated from ros1_bridge/resource/pkg_factories.hpp.em

#include <memory>
#include <string>

#include <ros1_bridge/factory.hpp>

// include ROS 1 messages
#include <object_recognition_msgs/ObjectType.h>
#include <object_recognition_msgs/RecognizedObject.h>
#include <object_recognition_msgs/RecognizedObjectArray.h>
#include <object_recognition_msgs/Table.h>
#include <object_recognition_msgs/TableArray.h>
#include <object_recognition_msgs/ObjectInformation.h>

// include ROS 2 messages
#include <object_recognition_msgs/msg/object_type.hpp>
#include <object_recognition_msgs/msg/recognized_object.hpp>
#include <object_recognition_msgs/msg/recognized_object_array.hpp>
#include <object_recognition_msgs/msg/table.hpp>
#include <object_recognition_msgs/msg/table_array.hpp>
#include <object_recognition_msgs/msg/object_information.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_object_recognition_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_object_recognition_msgs__msg__ObjectInformation(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_object_recognition_msgs__msg__ObjectType(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_object_recognition_msgs__msg__RecognizedObject(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_object_recognition_msgs__msg__RecognizedObjectArray(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_object_recognition_msgs__msg__Table(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_object_recognition_msgs__msg__TableArray(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_object_recognition_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_object_recognition_msgs__srv__GetObjectInformation(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

// conversion functions for available interfaces

template<>
void
Factory<
  object_recognition_msgs::ObjectType,
  object_recognition_msgs::msg::ObjectType
>::convert_1_to_2(
  const object_recognition_msgs::ObjectType & ros1_msg,
  object_recognition_msgs::msg::ObjectType & ros2_msg);

template<>
void
Factory<
  object_recognition_msgs::ObjectType,
  object_recognition_msgs::msg::ObjectType
>::convert_2_to_1(
  const object_recognition_msgs::msg::ObjectType & ros2_msg,
  object_recognition_msgs::ObjectType & ros1_msg);


template<>
void
Factory<
  object_recognition_msgs::RecognizedObject,
  object_recognition_msgs::msg::RecognizedObject
>::convert_1_to_2(
  const object_recognition_msgs::RecognizedObject & ros1_msg,
  object_recognition_msgs::msg::RecognizedObject & ros2_msg);

template<>
void
Factory<
  object_recognition_msgs::RecognizedObject,
  object_recognition_msgs::msg::RecognizedObject
>::convert_2_to_1(
  const object_recognition_msgs::msg::RecognizedObject & ros2_msg,
  object_recognition_msgs::RecognizedObject & ros1_msg);


template<>
void
Factory<
  object_recognition_msgs::RecognizedObjectArray,
  object_recognition_msgs::msg::RecognizedObjectArray
>::convert_1_to_2(
  const object_recognition_msgs::RecognizedObjectArray & ros1_msg,
  object_recognition_msgs::msg::RecognizedObjectArray & ros2_msg);

template<>
void
Factory<
  object_recognition_msgs::RecognizedObjectArray,
  object_recognition_msgs::msg::RecognizedObjectArray
>::convert_2_to_1(
  const object_recognition_msgs::msg::RecognizedObjectArray & ros2_msg,
  object_recognition_msgs::RecognizedObjectArray & ros1_msg);


template<>
void
Factory<
  object_recognition_msgs::Table,
  object_recognition_msgs::msg::Table
>::convert_1_to_2(
  const object_recognition_msgs::Table & ros1_msg,
  object_recognition_msgs::msg::Table & ros2_msg);

template<>
void
Factory<
  object_recognition_msgs::Table,
  object_recognition_msgs::msg::Table
>::convert_2_to_1(
  const object_recognition_msgs::msg::Table & ros2_msg,
  object_recognition_msgs::Table & ros1_msg);


template<>
void
Factory<
  object_recognition_msgs::TableArray,
  object_recognition_msgs::msg::TableArray
>::convert_1_to_2(
  const object_recognition_msgs::TableArray & ros1_msg,
  object_recognition_msgs::msg::TableArray & ros2_msg);

template<>
void
Factory<
  object_recognition_msgs::TableArray,
  object_recognition_msgs::msg::TableArray
>::convert_2_to_1(
  const object_recognition_msgs::msg::TableArray & ros2_msg,
  object_recognition_msgs::TableArray & ros1_msg);


template<>
void
Factory<
  object_recognition_msgs::ObjectInformation,
  object_recognition_msgs::msg::ObjectInformation
>::convert_1_to_2(
  const object_recognition_msgs::ObjectInformation & ros1_msg,
  object_recognition_msgs::msg::ObjectInformation & ros2_msg);

template<>
void
Factory<
  object_recognition_msgs::ObjectInformation,
  object_recognition_msgs::msg::ObjectInformation
>::convert_2_to_1(
  const object_recognition_msgs::msg::ObjectInformation & ros2_msg,
  object_recognition_msgs::ObjectInformation & ros1_msg);

}  // namespace ros1_bridge
