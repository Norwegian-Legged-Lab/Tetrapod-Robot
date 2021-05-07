cmake_minimum_required(VERSION 3.0.2)
project(static_gait_controller)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  sensor_msgs
  angle_utils
  debug_utils
  filter_utils
  kinematics
  eigen_conversions
)

find_package(Eigen3 REQUIRED)

catkin_package(
  INCLUDE_DIRS include
    ${EIGEN3_INCLUDE_DIR}
  LIBRARIES static_gait_controller
  CATKIN_DEPENDS
    roscpp
    std_msgs
    sensor_msgs
    angle_utils
    debug_utils
    filter_utils
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
  src/static_gait_controller.cpp
)

add_executable(static_gait_node
  src/static_gait_node.cpp
  src/static_gait_controller.cpp
)

target_link_libraries(${PROJECT_NAME}
  ${catkin_LIBRARIES}
)

target_link_libraries(static_gait_node
  ${catkin_LIBRARIES}
)

add_executable(static_gait_turning_node
  src/static_gait_turning_node.cpp
  src/static_gait_controller.cpp
)

target_link_libraries(${PROJECT_NAME}
  ${catkin_LIBRARIES}
)

target_link_libraries(static_gait_turning_node
  ${catkin_LIBRARIES}
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
