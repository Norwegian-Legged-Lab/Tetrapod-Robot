cmake_minimum_required(VERSION 3.0.2)
project(robot_controller)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  sensor_msgs
  geometry_msgs
  math_utils
  debug_utils
  controller
  kinematics
  eigen_conversions
  modular_gait_controller
)

find_package(Eigen3 REQUIRED)

catkin_package(
  INCLUDE_DIRS include
    ${EIGEN3_INCLUDE_DIR}
  LIBRARIES gait_controller
  CATKIN_DEPENDS
    roscpp
    std_msgs
    sensor_msgs
    geometry_msgs
    math_utils
    debug_utils
    controller
    kinematics
    eigen_conversions
    modular_gait_controller
#  DEPENDS system_lib
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
  ${EIGEN3_INCLUDE_DIR}
)

## Declare a C++ library
add_library(${PROJECT_NAME}
  src/robot_controller.cpp
)

add_executable(robot_controller_node
  src/robot_controller_node.cpp
  src/robot_controller.cpp
)

add_executable(robot_gait_controller_node
  src/gait_controller_node.cpp
  src/robot_controller.cpp
)

add_executable(plot_spline
  src/plot_spline.cpp
)

target_link_libraries(${PROJECT_NAME}
  ${catkin_LIBRARIES}
  controller
  modular_gait_controller
)

target_link_libraries(robot_controller_node
  ${catkin_LIBRARIES}
  controller
  modular_gait_controller
)

target_link_libraries(robot_gait_controller_node
  ${catkin_LIBRARIES}
  controller
  modular_gait_controller
)

target_link_libraries(plot_spline
  ${catkin_LIBRARIES}
  modular_gait_controller
)

install(TARGETS ${PROJECT_NAME}
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_GLOBAL_BIN_DESTINATION}
)

install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
  FILES_MATCHING PATTERN "*.h"
  PATTERN ".svn" EXCLUDE
)
