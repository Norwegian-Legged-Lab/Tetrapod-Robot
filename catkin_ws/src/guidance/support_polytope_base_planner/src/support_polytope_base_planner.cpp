#include "support_polytope_base_planner/support_polytope_base_planner.h"

#include "ros/console.h"

#include<iostream>


namespace support_polytope_base_planner{

drake::solvers::MatrixXDecisionVariable AddDecisionVariables(drake::solvers::MathematicalProgram &prog, int n_steps)
{
    return prog.NewContinuousVariables(n_steps + 1, 2, "position");
}

void InitialPositionConstraints(drake::solvers::MathematicalProgram &prog, drake::solvers::MatrixXDecisionVariable &pos, Eigen::Vector2d init)
{
    prog.AddConstraint(pos.row(0).transpose() == init);
}

void BaseWithinSupportPolytopeConstraints(drake::solvers::MathematicalProgram &prog, drake::solvers::MatrixXDecisionVariable &pos, Polytopes &polytopes)
{
    int num_polytopes = polytopes.GetPolytopes().rows();

    Eigen::Matrix<double, Eigen::Dynamic, 2> A;

    Eigen::Matrix<double, Eigen::Dynamic, 1> b;
    for (int i = 0; i < num_polytopes; ++i)
    {
        A = polytopes.GetPolytopes()(i).GetA();

        b = polytopes.GetPolytopes()(i).GetB();

        auto constr = prog.AddConstraint(A*pos.row(i + 1).transpose() <= b);

        std::cout << constr << std::endl << std::endl;
    }
}

void TravelMinimization(drake::solvers::MathematicalProgram &prog, drake::solvers::MatrixXDecisionVariable &pos)
{
    int num_dists = pos.rows() - 1;

    for (int i = 0; i < num_dists; ++i)
    {
        Eigen::Matrix<drake::symbolic::Expression, 2, 1> err = pos.row(i + 1).transpose() - pos.row(i).transpose();

        prog.AddQuadraticCost(err.transpose()*err);
    }
}

void LegStretchMinimization(drake::solvers::MathematicalProgram &prog, drake::solvers::MatrixXDecisionVariable &pos, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &steps)
{
    int num_dists = pos.rows() - 1;

    for (int i = 0; i < num_dists; ++i)
    {
        Eigen::Matrix<drake::symbolic::Expression, 2, 1> err = pos.row(i + 1).transpose() - steps.block(i + 4, 0, 1, 2).transpose();
        
        prog.AddQuadraticCost(err.transpose()*err);
    }
}

Eigen::Matrix<double, Eigen::Dynamic, 2> PlanSequence(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &steps, Eigen::Vector2d init, double epsilon, bool use_gurobi)
{
    Eigen::Matrix<double, Eigen::Dynamic, 2> steps_2d(steps.leftCols(2));

    Polytopes polytopes(steps_2d, epsilon, true);

    int n_steps = polytopes.GetPolytopes().rows();

    drake::solvers::MathematicalProgram prog;

    ROS_INFO("Support Polytope Base Planner: Adding decision variables");

    drake::solvers::MatrixXDecisionVariable pos_var = AddDecisionVariables(prog, n_steps);

    ROS_INFO("Support Polytope Base Planner: Adding constraints");

    InitialPositionConstraints(prog, pos_var, init);

    BaseWithinSupportPolytopeConstraints(prog, pos_var, polytopes);

    ROS_INFO("Support Polytope Base Planner: Adding costs");

    LegStretchMinimization(prog, pos_var, steps);

    Eigen::Matrix<double, Eigen::Dynamic, 2> pos_var_opt;

    ROS_INFO("Support Polytope Base Planner: Starting to solve...");
    
    bool success;
    if (use_gurobi)
    {
        ROS_INFO("Support Polytope Base Planner: Using Gurobi solver.");
        drake::solvers::GurobiSolver solver;
        
        drake::solvers::MathematicalProgramResult result = solver.Solve(prog);
        
        pos_var_opt = result.GetSolution(pos_var);

        if (!result.is_success())
        {
            ROS_ERROR("Support Polytope Base Planner: Infeasible optimization problem.");
            success = false;
        }
        else
        {
            success = true;
            ROS_INFO("Support Polytope Base Planner: Optimization problem solved.");
        }
    }
    else
    {
        ROS_INFO("Support Polytope Base Planner: Using OSQP solver");
        drake::solvers::OsqpSolver solver;

        drake::solvers::MathematicalProgramResult result = solver.Solve(prog);

        pos_var_opt = result.GetSolution(pos_var);

        if (!result.is_success())
        {
            ROS_ERROR("Support Polytope Base Planner: Infeasible optimization problem.");
            success = false;
        }
        else
        {
            success = true;
            ROS_INFO("Support Polytope Base Planner: Optimization problem solved.");
        }
    }

    polytopes.WritePolytopesTofile("/home/melyso/Documents/csv_files/polytopes");
    WriteMatToFile(pos_var_opt, "/home/melyso/Documents/csv_files/base_positions.csv");
    return pos_var_opt;
}

} //namespace support_polytope_base_planner