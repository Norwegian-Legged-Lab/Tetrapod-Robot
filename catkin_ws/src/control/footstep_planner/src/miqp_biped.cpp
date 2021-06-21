#include "footstep_planner/miqp_biped.h"

#include "ros/console.h"
#include<iostream>
#include<cassert>
#include<fstream>

using drake::solvers::MatrixXDecisionVariable;

DecVars add_decision_variables(drake::solvers::MathematicalProgram &prog, Terrain &terrain, int n_steps)
{
    DecVars decision_variables;

    int n_stones = terrain.getSteppingStones().rows();

    decision_variables.position_left = prog.NewContinuousVariables(n_steps + 1, 2);
    
    decision_variables.position_right = prog.NewContinuousVariables(n_steps + 1, 2);

    decision_variables.stone_left = prog.NewBinaryVariables(n_steps + 1, n_stones, "b");
    
    decision_variables.stone_right = prog.NewBinaryVariables(n_steps + 1, n_stones, "b");

    drake::solvers::MatrixDecisionVariable<1,1> first_left_M = prog.NewBinaryVariables(1, 1, "b");

    decision_variables.first_left = first_left_M(0,0); //there must be a better solution to this?

    return decision_variables;
}

void set_initial_and_goal_position(drake::solvers::MathematicalProgram &prog, Terrain &terrain, DecVars &decision_variables)
{
    MatrixXDecisionVariable &position_left = decision_variables.position_left;
    
    MatrixXDecisionVariable &position_right = decision_variables.position_right;

    Eigen::Vector2d foot_offset(0, 0.2);

    Eigen::Vector2d center(terrain.getStoneByName("initial").getCenter());

    Eigen::Vector2d initial_position_left = center;

    Eigen::Vector2d initial_position_right = center - foot_offset;

    center = terrain.getStoneByName("goal").getCenter();

    Eigen::Vector2d goal_position_left = center;

    Eigen::Vector2d goal_position_right = center - foot_offset;

    //Enforce Initial positions of the feet
    assert(position_left.cols() == initial_position_left.rows() && initial_position_left.cols() == 1);

    prog.AddLinearConstraint(position_left.row(0).transpose() == initial_position_left);

    assert(position_right.cols() == initial_position_right.rows() && initial_position_right.cols() == 1);

    prog.AddLinearConstraint(position_right.row(0).transpose() == initial_position_right);

    //Enforce Goal positions of the feet
    assert(position_left.cols() == goal_position_left.rows() && goal_position_left.cols() == 1);

    prog.AddLinearConstraint(position_left.row(position_left.rows() - 1).transpose() == goal_position_left);

    assert(position_right.cols() == goal_position_right.rows() && goal_position_right.cols() == 1);

    prog.AddLinearConstraint(position_right.row(position_right.rows() - 1).transpose() == goal_position_right);   
}

void relative_position_limits(drake::solvers::MathematicalProgram &prog, int n_steps, double step_span, DecVars &decision_variables)
{
    MatrixXDecisionVariable &position_left = decision_variables.position_left;
    
    MatrixXDecisionVariable &position_right = decision_variables.position_right;

    //Get absolute value constraint by adding two linear inequality constraints
    //Constraints for step[i] against step[i]
    for (int t = 0; t < n_steps; ++t)
    {
        prog.AddLinearConstraint(position_left.row(t + 1).transpose() - position_right.row(t).transpose() <= Eigen::Vector2d::Constant(step_span/2));

        prog.AddLinearConstraint(position_right.row(t + 1).transpose() - position_left.row(t).transpose() <= Eigen::Vector2d::Constant(step_span/2));
    }
}

void step_sequence(drake::solvers::MathematicalProgram &prog, int n_steps, double step_span, DecVars &decision_variables)
{
    MatrixXDecisionVariable &position_left = decision_variables.position_left;
    
    MatrixXDecisionVariable &position_right = decision_variables.position_right;

    drake::solvers::DecisionVariable &first_left = decision_variables.first_left;

    drake::symbolic::Expression first_right = 1 - first_left;

    Eigen::Vector2d step_limit = Eigen::Vector2d::Constant(step_span);
    
    Eigen::Matrix<drake::symbolic::Expression, 2, 1> step_left, step_right;

    Eigen::Matrix<drake::symbolic::Expression, 2, 1> limit_left, limit_right;

    for (int t = 0; t < n_steps; ++t)
    {
        step_left = position_left.row(t + 1).transpose() - position_left.row(t).transpose();

        step_right = position_right.row(t + 1).transpose() - position_right.row(t).transpose();

        if (t % 2 == 0)
        {
            limit_left << step_span*first_left, step_span*first_left;

            limit_right << step_span*first_right, step_span*first_right;
        } else
        {
            limit_left << step_span*first_right, step_span*first_right;

            limit_right << step_span*first_left, step_span*first_left;
        }

        prog.AddLinearConstraint(step_left <= limit_left);

        prog.AddLinearConstraint(step_left >= -limit_left);

        prog.AddLinearConstraint(step_right <= limit_right);

        prog.AddLinearConstraint(step_right >= -limit_right);
    }
}

void one_stone_per_foot(drake::solvers::MathematicalProgram &prog, int n_steps, DecVars &decision_variables)
{
    MatrixXDecisionVariable stone_left = decision_variables.stone_left;

    MatrixXDecisionVariable stone_right = decision_variables.stone_right;
    
    Eigen::VectorXi one_vec = Eigen::VectorXi::Ones(stone_left.rows());

    prog.AddLinearConstraint(stone_left*Eigen::VectorXd::Ones(stone_left.cols()) == Eigen::VectorXd::Ones(stone_left.rows()));

    prog.AddLinearConstraint(stone_right*Eigen::VectorXd::Ones(stone_right.cols()) == Eigen::VectorXd::Ones(stone_right.rows()));
}

Eigen::Vector4d get_big_M(Terrain terrain)
{
    SteppingStone initial = terrain.getStoneByName("initial");

    SteppingStone goal = terrain.getStoneByName("goal");

    SteppingStone lateral = terrain.getStoneByName("lateral");

    Eigen::Vector2d M(goal.getCenter()(0) - initial.getCenter()(0), lateral.getTopRight()(1) - initial.getCenter()(1));

    Eigen::Vector4d res;

    res << M, M;

    return res;
}

void foot_in_stepping_stone(drake::solvers::MathematicalProgram &prog, Terrain &terrain, int n_steps, DecVars &decision_variables)
{
    MatrixXDecisionVariable &position_left = decision_variables.position_left;
    
    MatrixXDecisionVariable &position_right = decision_variables.position_right;
    
    MatrixXDecisionVariable &stone_left = decision_variables.stone_left;
    
    MatrixXDecisionVariable &stone_right = decision_variables.stone_right;

    Eigen::Vector4d M = get_big_M(terrain);

    int n_stones = terrain.getSteppingStones().rows();

    Eigen::MatrixXd A, b;

    drake::solvers::DecisionVariable d_l, d_r;

    for (int t = 0; t < n_steps; ++t)
    {
        for (int i = 0; i < n_stones; ++i)
        {
            A = terrain.getSteppingStones()(i).getA();

            b = terrain.getSteppingStones()(i).getB();

            d_l = stone_left(t,i);

            d_r = stone_right(t,i);

            prog.AddLinearConstraint(A*position_left.row(t).transpose() <= b + (1 - d_l)*M);

            prog.AddLinearConstraint(A*position_right.row(t).transpose() <= b + (1 - d_r)*M);
        }
    }

}

void minimize_step_length(drake::solvers::MathematicalProgram &prog, int n_steps, DecVars &decision_variables)
{
    MatrixXDecisionVariable &position_left = decision_variables.position_left;

    MatrixXDecisionVariable &position_right = decision_variables.position_right;

    Eigen::Matrix<drake::symbolic::Expression, 2, 1> dist_l;

    Eigen::Matrix<drake::symbolic::Expression, 2, 1> dist_r;
    
    drake::symbolic::Expression res;

    for (int t = 0; t < n_steps; ++t)
    {
        dist_l = position_left.row(t + 1).transpose() - position_left.row(t).transpose();

        dist_r = position_right.row(t + 1).transpose() - position_right.row(t).transpose();

        res = (dist_l.transpose()*dist_l + dist_r.transpose()*dist_r).eval()(0);

        prog.AddQuadraticCost(res);
    }
}

void writeMatToFile(Eigen::MatrixXd &mat, std::string filename)
{
    std::ofstream file(filename);

    if (file.is_open())
    {
        file.clear();

        file << mat;

        ROS_INFO("writeMatToFile: Successfully wrote to file");
    } else
    {
        ROS_ERROR("could not open file");

        throw "could not open file " + filename;
    }
    
    file.close();
}

void writeDecVarsToFile(DecVars_res &decision_variables, std::string base_name)
{
    std::string fend = ".csv";

    writeMatToFile(decision_variables.position_left, base_name + "_position_left" + fend);

    writeMatToFile(decision_variables.position_right, base_name + "_position_right" + fend);
    
    writeMatToFile(decision_variables.stone_left, base_name + "_stone_left" + fend);
    
    writeMatToFile(decision_variables.stone_right, base_name + "_stone_right" + fend);
}