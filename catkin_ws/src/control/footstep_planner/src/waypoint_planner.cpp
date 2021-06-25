#include "footstep_planner/waypoint_planner.h"

#include "drake/solvers/branch_and_bound.h"

#include "drake/solvers/osqp_solver.h"

#include <iostream>
DecVars_res waypoint_planner(Terrain &terrain, int n_points, double length_legs, double bbox_len, double wp_dist)
{
    drake::solvers::MathematicalProgram prog;
    
    Eigen::Vector2d initial_center = terrain.getStoneByName("initial").getCenter();
    
    Eigen::Vector2d goal_center = terrain.getStoneByName("goal").getCenter();
    
    ROS_INFO("adding decision variables");
    DecVars decision_variables = add_decision_variables(prog, terrain, n_points);

    ROS_INFO("setting initial and goal position");
    set_initial_and_goal_position(prog, initial_center, goal_center, decision_variables);

    ROS_INFO("setting relative position limits");
    relative_position_limits(prog, n_points, wp_dist, decision_variables);

    ROS_INFO("setting geometry limits");
    geometry_limits(prog, n_points, length_legs, bbox_len, decision_variables);

    ROS_INFO("setting theta limits");
    theta_limits(prog, n_points, decision_variables);

    ROS_INFO("one stone per foot");
    one_stone_per_foot(prog, n_points, decision_variables);

    ROS_INFO("foot in stepping stone");
    foot_in_stepping_stone(prog, terrain, n_points, decision_variables);

    ROS_INFO("minimize step length");
    minimize_step_length(prog, n_points, decision_variables);

    ROS_INFO("minimize theta change");
    minimize_theta_change(prog, n_points, decision_variables);

    ROS_INFO("bb");
    drake::solvers::MixedIntegerBranchAndBound bb(prog, drake::solvers::OsqpSolver::id());

    /*auto constr = prog.GetAllLinearConstraints();

    for (auto el: constr) {
        std::cout << el << std::endl;
    }
    std::cout << constr.size() << std::endl;*/
    ROS_INFO("solve");
    drake::solvers::SolutionResult result = bb.Solve();
    ROS_INFO("done solving");
    if (result != drake::solvers::kSolutionFound)
    {
        ROS_ERROR("Infeasible optimization problem.");
    }

    DecVars_res decision_variables_opt;

    decision_variables_opt.position_front_left = bb.GetSolution(decision_variables.position_front_left);

    decision_variables_opt.position_front_right = bb.GetSolution(decision_variables.position_front_right);

    decision_variables_opt.position_rear_left = bb.GetSolution(decision_variables.position_rear_left);

    decision_variables_opt.position_rear_right = bb.GetSolution(decision_variables.position_rear_right);

    decision_variables_opt.stone_front_left = bb.GetSolution(decision_variables.stone_front_left);

    decision_variables_opt.stone_front_right = bb.GetSolution(decision_variables.stone_front_right);

    decision_variables_opt.stone_rear_left = bb.GetSolution(decision_variables.stone_rear_left);

    decision_variables_opt.stone_rear_right = bb.GetSolution(decision_variables.stone_rear_right);

    decision_variables_opt.theta = bb.GetSolution(decision_variables.theta);

    decision_variables_opt.bin_sin = bb.GetSolution(decision_variables.bin_sin);

    decision_variables_opt.bin_cos = bb.GetSolution(decision_variables.bin_cos);

    decision_variables_opt.lin_sin = bb.GetSolution(decision_variables.lin_sin);

    decision_variables_opt.lin_cos = bb.GetSolution(decision_variables.lin_cos);

    decision_variables_opt.cost = bb.GetOptimalCost();

    return decision_variables_opt;
}