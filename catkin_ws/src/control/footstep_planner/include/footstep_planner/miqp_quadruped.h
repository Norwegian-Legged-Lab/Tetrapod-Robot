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


enum Leg {front_left, front_right, rear_left, rear_right};

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

    bool first_left;

    bool first_front;

    double cost;
};

DecVars add_decision_variables(drake::solvers::MathematicalProgram &prog, Terrain &terrain, int n_steps, int n_legs);

void set_initial_and_goal_position(drake::solvers::MathematicalProgram &prog, int n_steps, double length_legs, Leg step_sequence[], Terrain &terrain, DecVars &decision_variables);

void geometry_limits(drake::solvers::MathematicalProgram &prog, int n_steps, int n_legs, double length_legs, Leg step_sequence[], Terrain &terrain, double bbox_len, DecVars &decision_variables);

void theta_limits(drake::solvers::MathematicalProgram &prog, int n_steps, int n_legs, DecVars &decision_variables);

void relative_position_limits(drake::solvers::MathematicalProgram &prog, int n_steps, int n_legs, double step_span, DecVars &decision_variables);

void one_stone_per_foot(drake::solvers::MathematicalProgram &prog, int n_steps, DecVars &decision_variables);

Eigen::Vector4d get_big_M(Terrain terrain);

void foot_in_stepping_stone(drake::solvers::MathematicalProgram &prog, Terrain &terrain, int n_steps, DecVars &decision_variables);

void minimize_step_length(drake::solvers::MathematicalProgram &prog, int n_steps, int n_legs, DecVars &decision_variables);

void minimize_remaining_length(drake::solvers::MathematicalProgram &prog, Terrain &terrain, int n_steps, int n_legs, DecVars &decision_variables);

Eigen::Array<Eigen::MatrixXd, Eigen::Dynamic, 1> get_uncompressed_arrays(Eigen::MatrixXd &arr, Eigen::MatrixXd &sequence_offset, int n_steps, int n_legs, Leg step_sequence[]);

DecVars_res get_decvars_res(DecVars_res_raw &decision_variables_raw, int n_steps, int n_legs, Leg step_sequence[]);

void writeDecVarsToFile(DecVars_res &decision_variables, std::string base_name="footstep_planner");

void writeMatToFile(Eigen::MatrixXd &mat, std::string filename);
}
}
#endif