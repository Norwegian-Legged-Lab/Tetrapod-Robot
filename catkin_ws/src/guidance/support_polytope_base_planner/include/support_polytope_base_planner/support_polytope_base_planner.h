#pragma once

#include <Eigen/Core>

#include "drake/solvers/osqp_solver.h"

#include "drake/solvers/branch_and_bound.h"

#include "drake/solvers/gurobi_solver.h"

#include "drake/common/symbolic.h"

#include "support_polytope_base_planner/polytopes.h"

/// \brief A namespace containing functionality for the support-polytope based base position planning algorithm.
namespace support_polytope_base_planner{

/// \brief The AddDecisionVariables function adds decision variables to a mathematical program.
/// \param[in,out] prog The mathematical program object to which decision variables are added.
/// \param[in] n_steps Number of footsteps the footstep plan consists of.
drake::solvers::MatrixXDecisionVariable AddDecisionVariables(drake::solvers::MathematicalProgram &prog, int n_steps);

/// \brief The InitialPositionConstraints function adds equality constraints for the initial position of the base.
/// \param[in,out] prog The mathematical program object to which equality constraints are added.
/// \param[in] pos The decision variables for the position of the base.
/// \param[in] init The initial position of the base.
void InitialPositionConstraints(drake::solvers::MathematicalProgram &prog, drake::solvers::MatrixXDecisionVariable &pos, Eigen::Vector2d init);

/// \brief The BaseWithingSupportPolytopeConstraints function adds inequality to ensure that the base position is within the current support polytope at all timesteps.
/// \param[in,out] prog The mathematical program object to which equality constraints are added.
/// \param[in] pos The decision variables for the position of the base.
/// \param[in] polytopes The support polytopes; one for each timestep.
void BaseWithinSupportPolytopeConstraints(drake::solvers::MathematicalProgram &prog, drake::solvers::MatrixXDecisionVariable &pos, Polytopes &polytopes);

/// \brief The TravelMinimization function adds a quadratic cost for the distance between each base position, incentivizing a shorter total travel path
void TravelMinimization(drake::solvers::MathematicalProgram &prog, drake::solvers::MatrixXDecisionVariable &pos);
/// \param[in,out] prog The mathematical program object to which equality constraints are added.
/// \param[in] pos The decision variables for the position of the base.

/// \brief The LegStretchMinimization function adds a quadratic cost for the distance between the base position and current foot positions,
/// incentivizing a shorter distance between each foot and the base at each timestep.
/// \param[in,out] prog The mathematical program object to which equality constraints are added.
/// \param[in] pos The decision variables for the position of the base.
/// \param[in] steps A matrix containing the position of each step in the footstep plan.
void LegStretchMinimization(drake::solvers::MathematicalProgram &prog, drake::solvers::MatrixXDecisionVariable &pos, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &steps);

/// \brief The PlanSequence function finds an optimal sequence of stabilizable base positions given a sequence of footsteps to take.
/// \param[in] steps A matrix containing the position of each step in the footstep plan.
/// \param[in] init The initial position of the base.
/// \param[in] use_gurobi Parameter for toggling whether to use the Gurobi proprietary solver or the branch-and-bound solver freely available with Drake.
/// The Gurobi solver is in practice necessary for even a moderate number of steps, but requires a license and building drake from source. Academic/Non-commercial license is freely available.
/// \return Returns a matrix containing the solution to the optimization problem.
Eigen::Matrix<double, Eigen::Dynamic, 2> PlanSequence(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &steps, Eigen::Vector2d init, bool use_gurobi=false);

} //namespace support_polytope_base_planner