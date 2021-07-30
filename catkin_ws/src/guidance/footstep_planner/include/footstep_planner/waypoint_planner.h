#ifndef waypoint_planner_h
#define waypoint_planner_h

#include "footstep_planner/miqp_waypoint.h"

#include "sensor_msgs/SetCameraInfo.h"

#include "ros/console.h"

using namespace miqp::waypoint;

DecVars_res waypoint_planner(Terrain &terrain, int n_points, double length_legs, double bbox_len, double wp_dist);

#endif