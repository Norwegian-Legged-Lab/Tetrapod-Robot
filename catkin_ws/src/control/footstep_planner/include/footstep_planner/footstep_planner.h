#ifndef footstep_planner_h
#define footstep_planner_h

#include "footstep_planner/miqp.h"

#include "sensor_msgs/SetCameraInfo.h"

#include "ros/console.h"

DecVars_res footstep_planner(Terrain &terrain, int n_steps, double step_span);

#endif