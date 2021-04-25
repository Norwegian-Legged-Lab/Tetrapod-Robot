cmake_minimum_required(VERSION 3.0.2)
project(single_leg_controller_test)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  sensor_msgs
  filter_utils
  kinematics
)

find_package(Eigen3 REQUIRED)

catkin_package(
  INCLUDE_DIRS include
    ${EIGEN3_INCLUDE_DIR}
  LIBRARIES single_leg_controller_test
  CATKIN_DEPENDS 
    roscpp 
    std_msgs
    sensor_msgs
    filter_utils
    kinematics
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
  ${EIGEN3_INCLUDE_DIR}
)

add_library(${PROJECT_NAME}
   src/single_leg_controller_test.cpp
)

target_link_libraries(${PROJECT_NAME}
   ${catkin_LIBRARIES}
 )

#add_executable(speed_test_node src/speed_test_node.cpp)
#target_link_libraries(speed_test_node ${catkin_LIBRARIES})
#add_dependencies(speed_test_node single_leg_controller_test)

## Mark libraries for installation
## See http://docs.ros.org/melodic/api/catkin/html/howto/format1/building_libraries.html
install(TARGETS ${PROJECT_NAME}
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_GLOBAL_BIN_DESTINATION}
)

## Mark cpp header files for installation
install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
  FILES_MATCHING PATTERN "*.h"
  PATTERN ".svn" EXCLUDE
)