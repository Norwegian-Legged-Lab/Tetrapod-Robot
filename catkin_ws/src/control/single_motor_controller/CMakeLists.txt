cmake_minimum_required(VERSION 3.0.2)
project(single_motor_controller)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  sensor_msgs
  kinematics
)

find_package(Eigen3 REQUIRED)

catkin_package(
  INCLUDE_DIRS include
    ${EIGEN3_INCLUDE_DIR}
  LIBRARIES single_motor_controller
  CATKIN_DEPENDS
    roscpp
    std_msgs
    kinematics
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
  ${EIGEN3_INCLUDE_DIR}
)

add_library(${PROJECT_NAME}
  src/single_motor_controller.cpp
)

add_executable(control_node
  src/control_node.cpp
  src/single_motor_controller.cpp
)

add_executable(automatic_setpoint_publisher
  src/automatic_setpoint_publisher.cpp
  src/single_motor_controller.cpp
)

target_link_libraries(${PROJECT_NAME}
  ${catkin_LIBRARIES}
)

target_link_libraries(control_node
  ${catkin_LIBRARIES}
)

target_link_libraries(automatic_setpoint_publisher
  ${catkin_LIBRARIES}
)

install(TARGETS ${PROJECT_NAME}
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_GLOBAL_NIN_DESTINATION}
)

install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
  FILES_MATCHING PATTERN "*.h"
  PATTERN ".svn" EXCLUDE
)