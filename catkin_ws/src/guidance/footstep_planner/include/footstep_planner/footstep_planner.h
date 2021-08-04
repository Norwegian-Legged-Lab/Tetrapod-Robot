#ifndef footstep_planner_h
#define footstep_planner_h

#include "footstep_planner/miqp_quadruped.h"
#include "footstep_planner/utils.h"
#include "sensor_msgs/SetCameraInfo.h"

#include "ros/console.h"

using namespace miqp::quadruped;

DecVars_res footstep_planner(Terrain &terrain, Eigen::Matrix<Eigen::Vector3d, 4, 1> init_f_pos, Eigen::Matrix<Eigen::Vector3d, 4, 1> goal_f_pos, int n_steps, int n_legs, double length_legs, LegType step_sequence[], double bbox_len=0.3, double step_span=0.5, double step_height=0.2, bool enforce_goal_hard=true, bool use_gurobi=true);
#endif