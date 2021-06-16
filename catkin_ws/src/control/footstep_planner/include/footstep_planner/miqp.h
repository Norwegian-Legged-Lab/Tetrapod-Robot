#ifndef miqp_h
#define miqp_h

#include<Eigen/Core>

#include<tuple>

#include "footstep_planner/terrain.h"

#include "drake/solvers/mathematical_program.h"

#include "drake/solvers/osqp_solver.h"

#include "drake/solvers/branch_and_bound.h"

#include "drake/common/symbolic.h"

DecVars add_decision_variables(drake::solvers::MathematicalProgram prog, Terrain terrain, int n_steps);

void set_initial_and_goal_position(drake::solvers::MathematicalProgram prog, Terrain terrain, DecVars decision_variables);
#endif