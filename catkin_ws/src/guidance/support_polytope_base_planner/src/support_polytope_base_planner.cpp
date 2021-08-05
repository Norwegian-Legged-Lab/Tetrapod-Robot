#include "support_polytope_base_planner/support_polytope_base_planner.h"

#include "ros/console.h"

#include<iostream>

drake::solvers::MatrixXDecisionVariable add_decision_variables(drake::solvers::MathematicalProgram &prog, int n_steps)
{
    return prog.NewContinuousVariables(n_steps + 1, 2, "position");
}

void set_initial_position(drake::solvers::MathematicalProgram &prog, drake::solvers::MatrixXDecisionVariable &pos, Eigen::Vector2d init)
{
    prog.AddConstraint(pos.row(0).transpose() == init);
}

void base_within_support_polytope(drake::solvers::MathematicalProgram &prog, drake::solvers::MatrixXDecisionVariable &pos, Polytopes &polytopes)
{
    int num_polytopes = polytopes.getPolytopes().rows();

    Eigen::Matrix<double, Eigen::Dynamic, 2> A;

    Eigen::Matrix<double, Eigen::Dynamic, 1> b;
    for (int i = 0; i < num_polytopes; ++i)
    {
        A = polytopes.getPolytopes()(i).getA();

        b = polytopes.getPolytopes()(i).getB();

        auto constr = prog.AddConstraint(A*pos.row(i + 1).transpose() <= b);

        std::cout << constr << std::endl << std::endl;
    }
}

void add_quadratic_cost_reduce_travel(drake::solvers::MathematicalProgram &prog, drake::solvers::MatrixXDecisionVariable &pos)
{
    int num_dists = pos.rows() - 1;

    for (int i = 0; i < num_dists; ++i)
    {
        Eigen::Matrix<drake::symbolic::Expression, 2, 1> err = pos.row(i + 1).transpose() - pos.row(i).transpose();

        prog.AddQuadraticCost(err.transpose()*err);
    }
}

void add_quadratic_cost_reduce_stretch(drake::solvers::MathematicalProgram &prog, drake::solvers::MatrixXDecisionVariable &pos, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &steps)
{
    int num_dists = pos.rows() - 1;

    for (int i = 0; i < num_dists; ++i)
    {
        Eigen::Matrix<drake::symbolic::Expression, 2, 1> err = pos.row(i + 1).transpose() - steps.block(i + 1, 0, 1, 2).transpose();
        
        prog.AddQuadraticCost(err.transpose()*err);

        err = pos.row(i + 1).transpose() - steps.block(i + 2, 0, 1, 2).transpose();
        
        prog.AddQuadraticCost(err.transpose()*err);

        err = pos.row(i + 1).transpose() - steps.block(i + 3, 0, 1, 2).transpose();
        
        prog.AddQuadraticCost(err.transpose()*err);

        err = pos.row(i + 1).transpose() - steps.block(i + 4, 0, 1, 2).transpose();

        prog.AddQuadraticCost(3*err.transpose()*err);
    }
}

Eigen::Matrix<double, Eigen::Dynamic, 2> support_polytope_base_planner(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &steps, Eigen::Vector2d init, bool use_gurobi)
{
    Eigen::Matrix<double, Eigen::Dynamic, 2> steps_2d(steps.leftCols(2));

    double epsilon = 0.05;

    Polytopes polytopes(steps_2d, epsilon, true);

    int n_steps = polytopes.getPolytopes().rows();

    ROS_INFO("About to create program");

    drake::solvers::MathematicalProgram prog;

    ROS_INFO("About to create variables");

    drake::solvers::MatrixXDecisionVariable pos_var = add_decision_variables(prog, n_steps);

    ROS_INFO("About to set initial position");

    set_initial_position(prog, pos_var, init);

    ROS_INFO("About to set support polytope constraints");

    base_within_support_polytope(prog, pos_var, polytopes);

    ROS_INFO("About to set quadratic cost");

    add_quadratic_cost_reduce_stretch(prog, pos_var, steps);

    Eigen::Matrix<double, Eigen::Dynamic, 2> pos_var_opt;
    
    bool success;
    std::cout << "number of footsteps: " << steps.rows() << std::endl;
    std::cout << "number of body positions: " << pos_var.rows() << std::endl;
    std::cout << "number of polytopes: " << polytopes.getPolytopes().rows() << std::endl;
    if (use_gurobi)
    {
        ROS_INFO("Using Gurobi solver");
        drake::solvers::GurobiSolver solver;
        
        drake::solvers::MathematicalProgramResult result = solver.Solve(prog);
        
        pos_var_opt = result.GetSolution(pos_var);

        if (!result.is_success())
        {
            ROS_ERROR("Infeasible optimization problem.");
            success = false;
        }
        else
        {
            success = true;
        }
    }
    else
    {
        ROS_INFO("Using naive branch-and-bound solver");
        drake::solvers::MixedIntegerBranchAndBound solver(prog, drake::solvers::OsqpSolver::id());

        ROS_INFO("solve");
        drake::solvers::SolutionResult result = solver.Solve();
        ROS_INFO("done solving");

        pos_var_opt = solver.GetSolution(pos_var);

        if (result != drake::solvers::kSolutionFound)
        {
            ROS_ERROR("Infeasible optimization problem.");
            success = false;
        }
        else
        {
            success = true;
        }
    }

    polytopes.writePolytopesTofile("/home/melyso/Documents/csv_files/polytopes");
    writeMatToFile(pos_var_opt, "/home/melyso/Documents/csv_files/base_positions.csv");
    return pos_var_opt;
}

