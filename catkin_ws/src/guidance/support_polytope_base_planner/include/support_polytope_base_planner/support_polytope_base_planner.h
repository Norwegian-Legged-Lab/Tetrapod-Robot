#pragma once

#include <Eigen/Core>

#include "drake/solvers/osqp_solver.h"

#include "drake/solvers/branch_and_bound.h"

#include "drake/solvers/gurobi_solver.h"

#include "drake/common/symbolic.h"

#include "support_polytope_base_planner/polytopes.h"

drake::solvers::MatrixXDecisionVariable add_decision_variables(drake::solvers::MathematicalProgram &prog, int n_steps);

void set_initial_position(drake::solvers::MathematicalProgram &prog, drake::solvers::MatrixXDecisionVariable &pos, Eigen::Vector2d init);

void base_within_support_polytope(drake::solvers::MathematicalProgram &prog, drake::solvers::MatrixXDecisionVariable &pos, Polytopes &polytopes);

void add_quadratic_cost(drake::solvers::MathematicalProgram &prog, drake::solvers::MatrixXDecisionVariable &pos);

Eigen::Matrix<double, Eigen::Dynamic, 2> get_solution(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &steps, Eigen::Vector2d init, bool use_gurobi=false);