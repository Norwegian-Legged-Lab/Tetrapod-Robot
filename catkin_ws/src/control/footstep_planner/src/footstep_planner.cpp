#include "footstep_planner/footstep_planner.h"

#include "drake/solvers/branch_and_bound.h"

#include "drake/solvers/osqp_solver.h"

DecVars_res footstep_planner(Terrain &terrain, int n_steps, double step_span)
{
    drake::solvers::MathematicalProgram prog;

    ROS_INFO("adding decision variables");
    DecVars decision_variables = add_decision_variables(prog, terrain, n_steps);

    ROS_INFO("setting initial and goal position");
    set_initial_and_goal_position(prog, terrain, decision_variables);

    ROS_INFO("setting relative position limits");
    relative_position_limits(prog, n_steps, step_span, decision_variables);

    ROS_INFO("step sequence");
    step_sequence(prog, n_steps, step_span, decision_variables);

    ROS_INFO("one stone per foot");
    one_stone_per_foot(prog, n_steps, decision_variables);

    ROS_INFO("foot in stepping stone");
    foot_in_stepping_stone(prog, terrain, n_steps, decision_variables);

    ROS_INFO("minimize step length");
    minimize_step_length(prog, n_steps, decision_variables);

    ROS_INFO("bb");
    drake::solvers::MixedIntegerBranchAndBound bb(prog, drake::solvers::OsqpSolver().id());

    ROS_INFO("solve");
    drake::solvers::SolutionResult result = bb.Solve();
    ROS_INFO("done solving");
    if (result != drake::solvers::kSolutionFound)
    {
        ROS_ERROR("Infeasible optimization problem.");
    }

    DecVars_res decision_variables_opt;

    decision_variables_opt.position_left = bb.GetSolution(decision_variables.position_left);

    decision_variables_opt.position_right = bb.GetSolution(decision_variables.position_right);
    
    decision_variables_opt.stone_left = bb.GetSolution(decision_variables.stone_left);
    
    decision_variables_opt.stone_right = bb.GetSolution(decision_variables.stone_right);
    
    decision_variables_opt.first_left = bb.GetSolution(decision_variables.first_left);

    double objective_opt = bb.GetOptimalCost();

    return decision_variables_opt;
}