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

namespace miqp{
namespace quadruped{

using drake::solvers::MatrixXDecisionVariable;


enum LegType {front_left=1, front_right=2, rear_left=3, rear_right=4, NONE};

// Trying slightly different representation of step sequence: More compact, less unnecessary copy of states and equality constraints

struct DecVars
{
    MatrixXDecisionVariable position;

    MatrixXDecisionVariable theta;

    MatrixXDecisionVariable stone;

    //MatrixXDecisionVariable sequence_offset;

    MatrixXDecisionVariable bin_sin;

    MatrixXDecisionVariable bin_cos;

    MatrixXDecisionVariable lin_sin;
    
    MatrixXDecisionVariable lin_cos;
};

struct DecVars_res_raw
{
    Eigen::MatrixXd position;

    Eigen::MatrixXd theta;

    Eigen::MatrixXd stone;

    Eigen::MatrixXd sequence_offset;

    Eigen::MatrixXd bin_sin;

    Eigen::MatrixXd bin_cos;

    Eigen::MatrixXd lin_sin;

    Eigen::MatrixXd lin_cos;

    double cost;

    bool success;
};

struct DecVars_res
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
    
    bool success;
};

DecVars add_decision_variables(drake::solvers::MathematicalProgram &prog, Terrain &terrain, int n_steps, int n_legs);

void set_initial_and_goal_position(drake::solvers::MathematicalProgram &prog, Eigen::Matrix<Eigen::Vector3d, 4, 1> init_f_pos, Eigen::Matrix<Eigen::Vector3d, 4, 1> goal_f_pos, int n_steps, double length_legs, LegType step_sequence[], Terrain &terrain, DecVars &decision_variables, bool enforce_goal_hard=true);

void geometry_limits(drake::solvers::MathematicalProgram &prog, int n_steps, int n_legs, double length_legs, LegType step_sequence[], Terrain &terrain, double bbox_len, DecVars &decision_variables);

void theta_limits(drake::solvers::MathematicalProgram &prog, int n_steps, int n_legs, DecVars &decision_variables);

void relative_position_limits(drake::solvers::MathematicalProgram &prog, int n_steps, int n_legs, double step_span, double step_height, DecVars &decision_variables);

void one_stone_per_foot(drake::solvers::MathematicalProgram &prog, int n_steps, DecVars &decision_variables);

Eigen::Vector4d get_big_M(Terrain terrain);

void foot_in_stepping_stone(drake::solvers::MathematicalProgram &prog, Terrain &terrain, int n_steps, DecVars &decision_variables, double ledge_margin=0);

void minimize_step_length(drake::solvers::MathematicalProgram &prog, int n_steps, int n_legs, DecVars &decision_variables);

void minimize_remaining_length(drake::solvers::MathematicalProgram &prog, Terrain &terrain, int n_steps, int n_legs, DecVars &decision_variables);

Eigen::Array<Eigen::MatrixXd, Eigen::Dynamic, 1> get_uncompressed_arrays(Eigen::MatrixXd &arr, Eigen::MatrixXd &sequence_offset, int n_steps, int n_legs, LegType step_sequence[]);

DecVars_res get_decvars_res(DecVars_res_raw &decision_variables_raw, int n_steps, int n_legs, LegType step_sequence[]);

void writeDecVarsToFile(DecVars_res &decision_variables, std::string base_name="footstep_planner");
}
}
#endif