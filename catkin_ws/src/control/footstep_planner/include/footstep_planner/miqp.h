#ifndef miqp_h
#define miqp_h

#include<Eigen/Core>

#include<tuple>

#include "footstep_planner/terrain.h"

#include "drake/solvers/mathematical_program.h"

#include "drake/solvers/osqp_solver.h"

#include "drake/solvers/branch_and_bound.h"

#include "drake/common/symbolic.h"

using drake::solvers::MatrixXDecisionVariable;

struct DecVars
{
    MatrixXDecisionVariable position_left;

    MatrixXDecisionVariable position_right;

    MatrixXDecisionVariable stone_left;

    MatrixXDecisionVariable stone_right;

    drake::solvers::DecisionVariable first_left;
};

struct DecVars_res
{
    Eigen::MatrixXd position_left;

    Eigen::MatrixXd position_right;

    Eigen::MatrixXd stone_left;

    Eigen::MatrixXd stone_right;

    bool first_left;

    double cost;
};

DecVars add_decision_variables(drake::solvers::MathematicalProgram &prog, Terrain &terrain, int n_steps);

void set_initial_and_goal_position(drake::solvers::MathematicalProgram &prog, Terrain &terrain, DecVars &decision_variables);

void relative_position_limits(drake::solvers::MathematicalProgram &prog, int n_steps, double step_span, DecVars &decision_variables);

void step_sequence(drake::solvers::MathematicalProgram &prog, int n_steps, double step_span, DecVars &decision_variables);

void one_stone_per_foot(drake::solvers::MathematicalProgram &prog, int n_steps, DecVars &decision_variables);

Eigen::Vector4d get_big_M(Terrain terrain);

void foot_in_stepping_stone(drake::solvers::MathematicalProgram &prog, Terrain &terrain, int n_steps, DecVars &decision_variables);

void minimize_step_length(drake::solvers::MathematicalProgram &prog, int n_steps, DecVars &decision_variables);
#endif

void writeMatToFile(Eigen::MatrixXd &mat, std::string filename);

void writeDecVarsToFile(DecVars_res &decision_variables, std::string base_name="footstep_planner");