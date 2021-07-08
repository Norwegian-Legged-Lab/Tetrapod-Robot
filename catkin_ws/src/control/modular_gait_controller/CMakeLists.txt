cmake_minimum_required(VERSION 3.0.2)
project(modular_gait_controller)

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
#  DEPENDS system_lib
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
  ${EIGEN3_INCLUDE_DIR}
)

## Declare a C++ library
add_library(${PROJECT_NAME}
  src/gait_controller.cpp
  src/gaits.cpp
)

add_executable(modular_gait_controller_node
  src/gait_controller_node.cpp
  src/gait_controller.cpp
  src/gaits.cpp
)

target_link_libraries(${PROJECT_NAME}
  ${catkin_LIBRARIES}
  controller
)

target_link_libraries(modular_gait_controller_node
  ${catkin_LBRARIES}
  controller
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
