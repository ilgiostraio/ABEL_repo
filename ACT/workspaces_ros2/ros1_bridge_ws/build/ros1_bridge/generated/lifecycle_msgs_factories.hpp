// generated from ros1_bridge/resource/pkg_factories.hpp.em

#include <memory>
#include <string>

#include <ros1_bridge/factory.hpp>

// include ROS 1 messages

// include ROS 2 messages

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_lifecycle_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_lifecycle_msgs__msg__State(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_lifecycle_msgs__msg__Transition(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_lifecycle_msgs__msg__TransitionDescription(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_lifecycle_msgs__msg__TransitionEvent(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_lifecycle_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_lifecycle_msgs__srv__ChangeState(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_lifecycle_msgs__srv__GetAvailableStates(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_lifecycle_msgs__srv__GetAvailableTransitions(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_lifecycle_msgs__srv__GetState(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

// conversion functions for available interfaces
}  // namespace ros1_bridge
