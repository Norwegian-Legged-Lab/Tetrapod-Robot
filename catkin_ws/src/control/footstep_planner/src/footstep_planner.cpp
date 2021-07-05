#include "footstep_planner/footstep_planner.h"

#include "drake/solvers/branch_and_bound.h"

#include "drake/solvers/osqp_solver.h"
#include "drake/solvers/gurobi_solver.h"
#include <iostream>
DecVars_res footstep_planner(Terrain &terrain, int n_steps, int n_legs, double length_legs, Leg step_sequence[], double bbox_len, double step_span, bool use_gurobi)
{
    drake::solvers::MathematicalProgram prog;
    std::cout << "is gurobi solver available?: " << drake::solvers::GurobiSolver::is_available() << "is it enabled?: " << drake::solvers::GurobiSolver::is_enabled() << "is the license valid? " << drake::solvers::GurobiSolver::AcquireLicense() << std::endl;
    ROS_INFO("adding decision variables");
    DecVars decision_variables = add_decision_variables(prog, terrain, n_steps, n_legs);
    bool enforce_goal_hard = true;
    ROS_INFO("setting initial and goal position");
    set_initial_and_goal_position(prog, n_steps, length_legs, step_sequence, terrain, decision_variables, enforce_goal_hard);

    ROS_INFO("setting theta limits");
    theta_limits(prog, n_steps, n_legs, decision_variables);

    ROS_INFO("setting geometry limits");
    geometry_limits(prog, n_steps, n_legs, length_legs, step_sequence, terrain, bbox_len, decision_variables);

    ROS_INFO("setting relative position limits");
    relative_position_limits(prog, n_steps, n_legs, step_span, decision_variables);

    ROS_INFO("one stone per foot");
    one_stone_per_foot(prog, n_steps, decision_variables);

    ROS_INFO("foot in stepping stone");
    foot_in_stepping_stone(prog, terrain, n_steps, decision_variables);

    ROS_INFO("minimize step length");
    minimize_step_length(prog, n_steps, n_legs, decision_variables);
    ROS_INFO("minimize remaining length");

    if (!enforce_goal_hard)
    {
        minimize_remaining_length(prog, terrain, n_steps, n_legs, decision_variables);
    }
    ROS_INFO("bb");

    DecVars_res_raw decision_variables_opt;

    if (use_gurobi)
    {
        ROS_INFO("Using Gurobi solver");
        drake::solvers::GurobiSolver solver;
        
        drake::solvers::MathematicalProgramResult result = solver.Solve(prog);

        decision_variables_opt.position = result.GetSolution(decision_variables.position);

        decision_variables_opt.theta = result.GetSolution(decision_variables.theta);

        decision_variables_opt.sequence_offset = Eigen::Vector4d(1, 0, 0, 0);//result.GetSolution(decision_variables.sequence_offset);

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

        decision_variables_opt.sequence_offset = Eigen::Vector4d(1, 0, 0, 0);//solver.GetSolution(decision_variables.sequence_offset);

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
            decision_variables_opt.success = true;
        }
    }

    

    return get_decvars_res(decision_variables_opt, n_steps, n_legs, step_sequence);
}