#pragma once

#include <Eigen/Core>

#include "drake/solvers/mathematical_program.h"

#include "drake/solvers/osqp_solver.h"

#include "drake/solvers/branch_and_bound.h"

#include "drake/common/symbolic.h"

drake::solvers::MatrixXDecisionVariable add_decision_variables(int n_steps);

void set_initial_position(drake::solvers::MathematicalProgram &prog, drake::solvers::MatrixXDecisionVariable &pos);