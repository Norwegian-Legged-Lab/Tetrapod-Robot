cmake_minimum_required(VERSION 3.0.2)
project(support_polytope_base_planner)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  sensor_msgs
  geometry_msgs
  math_utils
  debug_utils
  kinematics
  eigen_conversions
  footstep_planner
)

find_package(Eigen3 REQUIRED)
find_package(drake REQUIRED PATHS /opt/drake)

catkin_package(
  INCLUDE_DIRS include
    ${EIGEN3_INCLUDE_DIR}
  LIBRARIES ${PROJECT_NAME}
    visualization_utils
    footstep_planner
  CATKIN_DEPENDS
    roscpp
    std_msgs
    sensor_msgs
    geometry_msgs
    math_utils
    debug_utils
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
  src/support_polytope_base_planner.cpp
  src/polytope.cpp
  src/polytopes.cpp
)

add_executable(${PROJECT_NAME}_node
  src/main.cpp
  src/support_polytope_base_planner.cpp
  src/polytope.cpp
  src/polytopes.cpp
)

target_link_libraries(${PROJECT_NAME}_node
  ${catkin_LIBRARIES}
  drake::drake
  footstep_planner
)

target_link_libraries(${PROJECT_NAME}
  ${catkin_LIBRARIES}
  drake::drake
  footstep_planner
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
