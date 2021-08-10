#ifndef miqp_quadruped_h
#define miqp_quadruped_h

#include<Eigen/Core>

#include "footstep_planner/terrain.h"

#include "drake/solvers/mathematical_program.h"

#include "drake/solvers/osqp_solver.h"

#include "drake/solvers/branch_and_bound.h"

#include "drake/common/symbolic.h"

#include<iostream>

#include<fstream>

namespace footstep_planner{

using drake::solvers::MatrixXDecisionVariable;


enum LegType {front_left=1, front_right=2, rear_left=3, rear_right=4, NONE};

struct DecVars
{
    MatrixXDecisionVariable position;

    MatrixXDecisionVariable theta;

    MatrixXDecisionVariable stone;

    MatrixXDecisionVariable bin_sin;

    MatrixXDecisionVariable bin_cos;

    MatrixXDecisionVariable lin_sin;
    
    MatrixXDecisionVariable lin_cos;
};

struct DecVarsResRaw
{
    Eigen::MatrixXd position;

    Eigen::MatrixXd theta;

    Eigen::MatrixXd stone;

    Eigen::MatrixXd bin_sin;

    Eigen::MatrixXd bin_cos;

    Eigen::MatrixXd lin_sin;

    Eigen::MatrixXd lin_cos;

    double cost;

    bool success = false;
};

struct DecVarsRes
{
    Eigen::MatrixXd position_front_left;

    Eigen::MatrixXd position_front_right;

    Eigen::MatrixXd position_rear_left;
    
    Eigen::MatrixXd position_rear_right;
    
    Eigen::MatrixXd stone_front_left;
    
    Eigen::MatrixXd stone_front_right;
    
    Eigen::MatrixXd stone_rear_left;
    
    Eigen::MatrixXd stone_rear_right;

    Eigen::MatrixXd position_ts;

    Eigen::MatrixXd theta;

    bool first_left;

    bool first_front;

    double cost;
    
    bool success = false;
};

/// \brief The AddDecisionVariables function adds decision variables to a mathematical program.
/// \param[in,out] prog The mathematical program object to which decision variables are added.
/// \param[in] terrain The terrain for which a sequence of footsteps is made.
/// \param[in] n_steps Number of footsteps the plan consists of.
/// \param[in] n_legs Number of legs the robot posesses.
/// \return Returns a struct containing the decision variables of the mathematical program.
DecVars AddDecisionVariables(drake::solvers::MathematicalProgram &prog, Terrain &terrain, int n_steps, int n_legs);

/// \brief The InitialAndGoalPositionConstraints function adds equality constraints for initial and goal positions to a mathematical program.
/// \param[in,out] prog The mathematical program object to which equality constraints are added.
/// \param[in] init_f_pos Initial position of feet, given in the order in which they are to move.
/// \param[in] goal_f_pos Goal position of feet, given in the order in which they are to move.
/// \param[in] n_steps Number of steps in total, including both initial positions and goal positions.
/// \param[in] length_legs Length from the center of the robot to the nominal position of each foot in the XY-plane.
/// \param[in] step_sequence Sequence defining the order in which the legs are to move.
/// \param[in] decision_variables A struct containing the decision variables of the mathematical program.
/// \param[in] enforce_goal_hard Parameter for toggling whether the final position is imposed as an equality constraint, or if the distance from the last foot position to the goal is imposed as a cost.
// The first will yield an exact solution, but may make the optimization problem infeasible if the goal is too far away or difficult to reach in the permitted number of steps.
void InitialAndGoalPositionConstraints(drake::solvers::MathematicalProgram &prog, Eigen::Matrix<Eigen::Vector3d, 4, 1> init_f_pos, Eigen::Matrix<Eigen::Vector3d, 4, 1> goal_f_pos, int n_steps, double length_legs, LegType step_sequence[], DecVars &decision_variables, bool enforce_goal_hard=true);

/// \brief The GeometryConstraints function adds inequality constraints for keeping the leg configuration in the vicinity of a nominal configuration.
/// \param[in,out] prog The mathematical program object to which inequality constraints are added.
/// \param[in] n_steps Number of steps in total, including both initial positions and goal positions.
/// \param[in] n_legs Number of legs the robot posesses.
/// \param[in] length_legs Length from the center of the robot to the nominal position of each foot in the XY-plane.
/// \param[in] step_sequence Sequence defining the order in which the legs are to move.
/// \param[in] terrain Terrain describing the set of permissible areas in which to place a foothold.
/// \param[in] bbox_len Side length of bounding box around nominal leg position in which a foot is allowed to be placed.
/// \param[in] decision_variables A struct containing the decision variables of the mathematical program.
void GeometryConstraints(drake::solvers::MathematicalProgram &prog, int n_steps, int n_legs, double length_legs, LegType step_sequence[], Terrain &terrain, double bbox_len, DecVars &decision_variables);

/// \brief the ThetaConstraints function adds constraints related to the linearized trigonometric functions used in the problem.
/// These are used to approximate the nominal position of each leg given an angle theta.
/// \param[in,out] prog The mathematical program object to which constraints are added.
/// \param[in] n_steps Number of steps in total, including both initial positions and goal positions.
/// \param[in] n_legs Number of legs the robot posesses.
/// \param[in] decision_variables A struct containing the decision variables of the mathematical program.
void ThetaConstraints(drake::solvers::MathematicalProgram &prog, int n_steps, int n_legs, DecVars &decision_variables);

/// \brief the RelativePositionConstraints function adds inequality constraints to enforce the maximum length a step can have.
/// \param[in,out] prog The mathematical program object to which constraints are added.
/// \param[in] n_steps Number of steps in total, including both initial positions and goal positions.
/// \param[in] n_legs Number of legs the robot posesses.
/// \param[in] step_span Side length of bounding box around leg position limiting the area to which it may move.
/// \param[in] step_height Maximum allowed height difference between a given leg before and after moving.
/// \param[in] decision_variables A struct containing the decision variables of the mathematical program.
void RelativePositionConstraints(drake::solvers::MathematicalProgram &prog, int n_steps, int n_legs, double step_span, double step_height, DecVars &decision_variables);

/// \brief the OneStonePerFootConstraints function adds equality constraints to ensure a footstep to be in only one permissible area.
/// \param[in,out] prog The mathematical program object to which constraints are added.
/// \param[in] n_steps Number of steps in total, including both initial positions and goal positions.
/// \param[in] decision_variables A struct containing the decision variables of the mathematical program.
void OneStonePerFootConstraints(drake::solvers::MathematicalProgram &prog, int n_steps, DecVars &decision_variables);

/// \brief the GetBigM function is returns a suitable M for the big-M-method given a set of permissible areas.
/// \param[in] terrain Terrain describing the set of permissible areas in which to place a foothold.
/// \return Returns a vector of the offsets to be used in the big-M-method.
Eigen::Vector4d GetBigM(Terrain terrain);

/// \brief the FootInSteppingStoneConstraints function adds inequality constraints to ensure that a footstep is within the bounds of the permissible area the corresponding binary variables
/// determines it is in.
/// \param[in,out] prog The mathematical program object to which constraints are added.
/// \param[in] terrain Terrain describing the set of permissible areas in which to place a foothold.
/// \param[in] n_steps Number of steps in total, including both initial positions and goal positions.
/// \param[in] decision_variables A struct containing the decision variables of the mathematical program.
/// \param[in] ledge_margin Margin to edge of each permissible area which each foothold must be within.
void FootInSteppingStoneConstraints(drake::solvers::MathematicalProgram &prog, Terrain &terrain, int n_steps, DecVars &decision_variables, double ledge_margin=0);

/// \brief the StepLengthMinimization function adds a quadratic cost for the length of each step, to incentivize shorter steps.
/// \param[in,out] prog The mathematical program object to which constraints are added.
/// \param[in] n_steps Number of steps in total, including both initial positions and goal positions.
/// \param[in] n_legs Number of legs the robot posesses.
/// \param[in] decision_variables A struct containing the decision variables of the mathematical program.
void StepLengthMinimization(drake::solvers::MathematicalProgram &prog, int n_steps, int n_legs, DecVars &decision_variables);

/// \brief the RemainingLengthMinimization function adds a quadratic cost for the length from the last position of each foot to its corresponding goal position.
/// This might be used as an alternative to a hard equality constraint, in order to avoid an infeasible problem.
/// \param[in,out] prog The mathematical program object to which constraints are added.
/// \param[in] terrain Terrain describing the set of permissible areas in which to place a foothold.
/// \param[in] n_steps Number of steps in total, including both initial positions and goal positions.
/// \param[in] n_legs Number of legs the robot posesses.
/// \param[in] decision_variables A struct containing the decision variables of the mathematical program.
void RemainingLengthMinimization(drake::solvers::MathematicalProgram &prog, Terrain &terrain, int n_steps, int n_legs, DecVars &decision_variables);

/// \brief the GetUncompressedArrays function converts an array containing only the new position of the moving foot, into a timeseries for each foot.
/// \param[in] arr The array containing the new position of a moving foot
/// \param[in] n_steps Number of steps in total, including both initial positions and goal positions.
/// \param[in] n_legs Number of legs the robot posesses.
/// \param[in] step_sequence Sequence defining the order in which the legs are to move.
/// \return Returns an array of timeseries, one for each foot.
Eigen::Array<Eigen::MatrixXd, Eigen::Dynamic, 1> GetUncompressedArrays(Eigen::MatrixXd &arr, int n_steps, int n_legs, LegType step_sequence[]);

/// \brief the GetDecVarsRes function converts a struct containing the solution from the program, into a solution for each leg.
/// \param[in] decision_variables_raw The struct containing the solution from the program.
/// \param[in] n_steps Number of steps in total, including both initial positions and goal positions.
/// \param[in] n_legs Number of legs the robot posesses.
/// \param[in] step_sequence Sequence defining the order in which the legs are to move.
DecVarsRes GetDecVarsRes(DecVarsResRaw &decision_variables_raw, int n_steps, int n_legs, LegType step_sequence[]);

/// \brief the WriteDecVarsToFile function writes the matrices containing the solutions for each leg to csv-files at a specified path.
/// \param[in] decision_variables The struct containing the solutions.
/// \param[in] base_name The path to and beginning of filename of each csv-file.
void WriteDecVarsToFile(DecVarsRes &decision_variables, std::string base_name="footstep_planner");

} //namespace footstep_planner

#endif