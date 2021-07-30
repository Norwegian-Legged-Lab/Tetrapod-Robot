#ifndef miqp_waypoint_h
#define miqp_waypoint_h

#include "footstep_planner/terrain.h"

#include "drake/solvers/mathematical_program.h"

#include "drake/solvers/osqp_solver.h"

#include "drake/solvers/branch_and_bound.h"

#include "drake/common/symbolic.h"

#include<iostream>

#include<fstream>

namespace miqp{
namespace waypoint{

using drake::solvers::MatrixXDecisionVariable;

enum Leg {front_left, front_right, rear_left, rear_right};

struct DecVars {
    MatrixXDecisionVariable position_center;

    MatrixXDecisionVariable position_front_left;
    
    MatrixXDecisionVariable position_front_right;
    
    MatrixXDecisionVariable position_rear_left;
    
    MatrixXDecisionVariable position_rear_right;

    MatrixXDecisionVariable stone_front_left;
    
    MatrixXDecisionVariable stone_front_right;
    
    MatrixXDecisionVariable stone_rear_left;
    
    MatrixXDecisionVariable stone_rear_right;

    MatrixXDecisionVariable theta;

    MatrixXDecisionVariable bin_sin;

    MatrixXDecisionVariable bin_cos;

    MatrixXDecisionVariable lin_sin;
    
    MatrixXDecisionVariable lin_cos;
};

struct DecVars_res {
    Eigen::MatrixXd position_center;

    Eigen::MatrixXd position_front_left;
    
    Eigen::MatrixXd position_front_right;
    
    Eigen::MatrixXd position_rear_left;
    
    Eigen::MatrixXd position_rear_right;

    Eigen::MatrixXd stone_front_left;
    
    Eigen::MatrixXd stone_front_right;
    
    Eigen::MatrixXd stone_rear_left;
    
    Eigen::MatrixXd stone_rear_right;

    Eigen::MatrixXd theta;

    Eigen::MatrixXd bin_sin;

    Eigen::MatrixXd bin_cos;

    Eigen::MatrixXd lin_sin;
    
    Eigen::MatrixXd lin_cos;

    double cost;
};

DecVars add_decision_variables(drake::solvers::MathematicalProgram &prog, Terrain &terrain, int n_points);

void set_initial_and_goal_position(drake::solvers::MathematicalProgram &prog, Eigen::Vector2d &initial_center, Eigen::Vector2d &goal_center, DecVars &decision_variables);

void relative_position_limits(drake::solvers::MathematicalProgram &prog, int n_points, double wp_dist, DecVars &decision_variables);

void geometry_limits(drake::solvers::MathematicalProgram &prog, int n_points, double length_legs, double bbox_len, DecVars &decision_variables);

void theta_limits(drake::solvers::MathematicalProgram &prog, int n_points, DecVars &decision_variables);

void one_stone_per_foot(drake::solvers::MathematicalProgram &prog, int n_points, DecVars &decision_variables);

void writeMatToFile(Eigen::MatrixXd &mat, std::string filename);

void writeDecVarsToFile(DecVars_res &decision_variables, std::string base_name);

Eigen::Vector4d get_big_M(Terrain terrain);

void foot_in_stepping_stone(drake::solvers::MathematicalProgram &prog, Terrain &terrain, int n_points, DecVars &decision_variables);

void minimize_step_length(drake::solvers::MathematicalProgram &prog, int n_points, DecVars &decision_variables);

void minimize_theta_change(drake::solvers::MathematicalProgram &prog, int n_points, DecVars &decision_variables);
}
}

#endif