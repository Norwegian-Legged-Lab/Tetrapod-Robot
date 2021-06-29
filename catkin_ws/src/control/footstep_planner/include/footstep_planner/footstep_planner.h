#ifndef footstep_planner_h
#define footstep_planner_h

#include "footstep_planner/miqp_quadruped.h"

#include "sensor_msgs/SetCameraInfo.h"

#include "ros/console.h"

using namespace miqp::quadruped;

DecVars_res footstep_planner(Terrain &terrain, int n_steps, int n_legs, double length_legs, Leg step_sequence[], double bbox_len, double step_span,  bool use_gurobi=true);
#endif