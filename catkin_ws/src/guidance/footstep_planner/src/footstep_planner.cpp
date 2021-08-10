#include "footstep_planner/footstep_planner.h"

#include "drake/solvers/branch_and_bound.h"

#include "drake/solvers/osqp_solver.h"
#include "drake/solvers/gurobi_solver.h"
#include <iostream>

namespace footstep_planner{

DecVarsRes PlanSequence(Terrain &terrain, Eigen::Matrix<Eigen::Vector3d, 4, 1> init_f_pos, Eigen::Matrix<Eigen::Vector3d, 4, 1> goal_f_pos, int n_steps, int n_legs, double length_legs, LegType step_sequence[], double bbox_len, double step_span, double step_height, double ledge_margin, bool enforce_goal_hard, bool use_gurobi)
{
    drake::solvers::MathematicalProgram prog;

    ROS_INFO("Footstep Planner: Adding decision variables");

    DecVars decision_variables = AddDecisionVariables(prog, terrain, n_steps, n_legs);


    ROS_INFO("Footstep Planner: Adding constraints");

    InitialAndGoalPositionConstraints(prog, init_f_pos, goal_f_pos, n_steps, length_legs, step_sequence, decision_variables, enforce_goal_hard);

    ThetaConstraints(prog, n_steps, n_legs, decision_variables);

    GeometryConstraints(prog, n_steps, n_legs, length_legs, step_sequence, terrain, bbox_len, decision_variables);

    RelativePositionConstraints(prog, n_steps, n_legs, step_span, step_height, decision_variables);

    OneStonePerFootConstraints(prog, n_steps, decision_variables);

    FootInSteppingStoneConstraints(prog, terrain, n_steps, decision_variables, ledge_margin);


    ROS_INFO("Footstep Planner: Adding costs");

    StepLengthMinimization(prog, n_steps, n_legs, decision_variables);

    if (!enforce_goal_hard)
    {
        RemainingLengthMinimization(prog, terrain, n_steps, n_legs, decision_variables);
    }

    DecVarsResRaw decision_variables_opt;

    ROS_INFO("Footstep Planner: Starting to solve...");
    if (use_gurobi)
    {
        ROS_INFO("Using Gurobi solver");
        drake::solvers::GurobiSolver solver;
        
        drake::solvers::MathematicalProgramResult result = solver.Solve(prog);

        decision_variables_opt.position = result.GetSolution(decision_variables.position);

        decision_variables_opt.theta = result.GetSolution(decision_variables.theta);

        decision_variables_opt.bin_sin = result.GetSolution(decision_variables.bin_sin);

        decision_variables_opt.bin_cos = result.GetSolution(decision_variables.bin_cos);

        decision_variables_opt.lin_sin = result.GetSolution(decision_variables.lin_sin);

        decision_variables_opt.lin_cos = result.GetSolution(decision_variables.lin_cos);

        decision_variables_opt.stone = result.GetSolution(decision_variables.stone);

        decision_variables_opt.cost = result.get_optimal_cost();

        if (!result.is_success())
        {
            ROS_ERROR("Infeasible optimization problem.");
            decision_variables_opt.success = false;
        }
        else
        {
            ROS_INFO("Support Polytope Base Planner: Optimization problem solved");
            decision_variables_opt.success = true;
        }
    }
    else{
        ROS_INFO("Using naive branch-and-bound solver");
        drake::solvers::MixedIntegerBranchAndBound solver(prog, drake::solvers::OsqpSolver::id());

        
        /*auto constr = prog.GetAllLinearConstraints();

        for (auto el: constr) {
            std::cout << el << std::endl;
        }
        std::cout << constr.size() << std::endl;*/
        ROS_INFO("solve");
        drake::solvers::SolutionResult result = solver.Solve();
        ROS_INFO("done solving");

        decision_variables_opt.position = solver.GetSolution(decision_variables.position);

        decision_variables_opt.theta = solver.GetSolution(decision_variables.theta);

        decision_variables_opt.bin_sin = solver.GetSolution(decision_variables.bin_sin);

        decision_variables_opt.bin_cos = solver.GetSolution(decision_variables.bin_cos);

        decision_variables_opt.lin_sin = solver.GetSolution(decision_variables.lin_sin);

        decision_variables_opt.lin_cos = solver.GetSolution(decision_variables.lin_cos);

        decision_variables_opt.stone = solver.GetSolution(decision_variables.stone);

        decision_variables_opt.cost = solver.GetOptimalCost();

        if (result != drake::solvers::kSolutionFound)
        {
            ROS_ERROR("Infeasible optimization problem.");
            decision_variables_opt.success = false;
        }
        else
        {
            ROS_INFO("Support Polytope Base Planner: Optimization problem solved");
            decision_variables_opt.success = true;
        }
    }

    

    return GetDecVarsRes(decision_variables_opt, n_steps, n_legs, step_sequence);
}

} //namespace footstep_planner