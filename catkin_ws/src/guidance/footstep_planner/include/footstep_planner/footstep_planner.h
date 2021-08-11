#ifndef footstep_planner_h
#define footstep_planner_h

#include "footstep_planner/miqp_quadruped.h"
#include "footstep_planner/utils.h"
#include "sensor_msgs/SetCameraInfo.h"

#include "ros/console.h"

/// \brief A namespace containing functionality for the footstep planning algorithm.
namespace footstep_planner{

/// \brief the PlanSequence function finds the optimal sequence of footholds to get from a given initial position to or as close as possible to
/// a given goal position. This is done using a mixed-integer quadratic formulation to yield a convex problem in the face of non-convex or non-connected permissible stepping areas.
/// \param[in] terrain Terrain describing the set of permissible areas in which to place a foothold.
/// \param[in] init_f_pos Initial position of feet, given in the order in which they are to move.
/// \param[in] goal_f_pos Goal position of feet, given in the order in which they are to move.
/// \param[in] n_steps Number of steps in total, including both initial positions and goal positions.
/// \param[in] length_legs Length from the center of the robot to the nominal position of each foot in the XY-plane.
/// \param[in] step_sequence Sequence defining the order in which the legs are to move.
/// \param[in] bbox_len Side length of bounding box around nominal leg position in which a foot is allowed to be placed.
/// \param[in] step_span Side length of bounding box around leg position limiting the area to which it may move.
/// \param[in] step_height Maximum allowed height difference between a given leg before and after moving.
/// \param[in] ledge_margin Margin to edge of each permissible area which each foothold must be within.
/// \param[in] enforce_goal_hard Parameter for toggling whether the final position is imposed as an equality constraint, or if the distance from the last foot position to the goal is imposed as a cost.
// The first will yield an exact solution, but may make the optimization problem infeasible if the goal is too far away or difficult to reach in the permitted number of steps.
/// \param[in] use_gurobi Parameter for toggling whether to use the Gurobi proprietary solver or the branch-and-bound solver freely available with Drake.
/// The Gurobi solver is in practice necessary for even a moderate number of steps, but requires a license and building drake from source. Academic/Non-commercial license is freely available.
/// \return Returns a struct containing the solution to the optimization problem if such a solution is found, as well as a boolean indicating whether a solution was found.
DecVarsRes PlanSequence(Terrain &terrain, Eigen::Matrix<Eigen::Vector3d, 4, 1> init_f_pos, Eigen::Matrix<Eigen::Vector3d, 4, 1> goal_f_pos, int n_steps, int n_legs, double length_legs, LegType step_sequence[], double bbox_len=0.3, double step_span=0.5, double step_height=0.2, double ledge_margin=0, bool enforce_goal_hard=true, bool use_gurobi=true);

DecVarsRes PlanSequenceRecursive(Terrain &terrain, Eigen::Matrix<Eigen::Vector3d, 4, 1> init_f_pos, Eigen::Matrix<Eigen::Vector3d, 4, 1> goal_f_pos, int n_steps, int n_legs, double length_legs, LegType step_sequence[], double bbox_len=0.3, double step_span=0.5, double step_height=0.2, double ledge_margin=0, bool use_gurobi=true);
} //namespace footstep_planner

#endif