#include "footstep_planner/miqp_waypoint.h"

#include "ros/console.h"

#include<cmath>

#include "footstep_planner/utils.h"

#define _USE_MATH_DEFINES

namespace miqp{
namespace waypoint{

using drake::solvers::MatrixXDecisionVariable;

using drake::symbolic::sin;

using drake::symbolic::cos;

DecVars add_decision_variables(drake::solvers::MathematicalProgram &prog, Terrain &terrain, int n_points){
    int n_stones = terrain.getSteppingStones().rows();

    DecVars decision_variables;

    decision_variables.position_center = prog.NewContinuousVariables(n_points, 2, "position_center");

    decision_variables.position_front_left = prog.NewContinuousVariables(n_points, 2, "position_front_left");
    
    decision_variables.position_front_right = prog.NewContinuousVariables(n_points, 2, "position_front_right");

    decision_variables.position_rear_left = prog.NewContinuousVariables(n_points, 2, "position_rear_left");
    
    decision_variables.position_rear_right = prog.NewContinuousVariables(n_points, 2, "position_rear_right");

    decision_variables.stone_front_left = prog.NewBinaryVariables(n_points, n_stones, "stone_front_left");
    
    decision_variables.stone_front_right = prog.NewBinaryVariables(n_points, n_stones, "stone_front_right");

    decision_variables.stone_rear_left = prog.NewBinaryVariables(n_points, n_stones, "stone_rear_left");
    
    decision_variables.stone_rear_right = prog.NewBinaryVariables(n_points, n_stones, "stone_rear_right");

    decision_variables.theta = prog.NewContinuousVariables(n_points, 1, "theta");

    decision_variables.lin_sin = prog.NewContinuousVariables(n_points, 1, "sin_theta");
    
    decision_variables.lin_cos = prog.NewContinuousVariables(n_points, 1, "cos_theta");

    decision_variables.bin_sin = prog.NewBinaryVariables(n_points, 5, "sin_selection");
    
    decision_variables.bin_cos = prog.NewBinaryVariables(n_points, 5, "cos_selection");

    return decision_variables;
}

void set_initial_and_goal_position(drake::solvers::MathematicalProgram &prog, Eigen::Vector2d &initial_center, Eigen::Vector2d &goal_center, DecVars &decision_variables)
{
    MatrixXDecisionVariable &position_center = decision_variables.position_center;

    MatrixXDecisionVariable &theta = decision_variables.theta;

    prog.AddLinearConstraint(position_center.row(0).transpose() == initial_center);

    prog.AddLinearConstraint(position_center.row(position_center.rows() - 1).transpose() == goal_center);

    prog.AddLinearConstraint(theta(0) == 0);

    prog.AddLinearConstraint(theta(theta.rows() - 1) == 0);
}

void relative_position_limits(drake::solvers::MathematicalProgram &prog, int n_points, double wp_dist, DecVars &decision_variables)
{
    MatrixXDecisionVariable &position_center = decision_variables.position_center;

    for (int i = 0; i < n_points - 1; ++i)
    {
        prog.AddLinearConstraint(position_center.row(i + 1).transpose() - position_center.row(i).transpose() <= Eigen::Vector2d::Constant(wp_dist));

        prog.AddLinearConstraint(position_center.row(i + 1).transpose() - position_center.row(i).transpose() >= Eigen::Vector2d::Constant(-wp_dist));
    }
}

void geometry_limits(drake::solvers::MathematicalProgram &prog, int n_points, double length_legs, double bbox_len, DecVars &decision_variables)
{
    MatrixXDecisionVariable &position_center = decision_variables.position_center;
    
    MatrixXDecisionVariable &position_front_left = decision_variables.position_front_left;

    MatrixXDecisionVariable &position_front_right = decision_variables.position_front_right;

    MatrixXDecisionVariable &position_rear_left = decision_variables.position_rear_left;

    MatrixXDecisionVariable &position_rear_right = decision_variables.position_rear_right;

    MatrixXDecisionVariable &lin_sin = decision_variables.lin_sin;

    MatrixXDecisionVariable &lin_cos = decision_variables.lin_cos;

    //MatrixXDecisionVariable &sequence_offset = decision_variables.sequence_offset;
    int n_legs = 4;

    double angle_divided = 2*M_PI/n_legs;

    double phis[] = {0.5*angle_divided, -0.5*angle_divided, 1.5*angle_divided, -1.5*angle_divided};

    Eigen::Matrix<drake::symbolic::Expression, 2, 1> leg_offset;

    for (int i = 0; i < n_points; ++i)
    {
        leg_offset << length_legs*(lin_cos(i)*cos(phis[front_left]) - lin_sin(i)*sin(phis[front_left])),

        length_legs*(lin_sin(i)*cos(phis[front_left]) + lin_cos(i)*sin(phis[front_left]));

        prog.AddLinearConstraint(position_front_left.row(i).transpose() - (position_center.row(i).transpose() + leg_offset) <= Eigen::Vector2d::Constant(bbox_len/2));

        prog.AddLinearConstraint(position_front_left.row(i).transpose() - (position_center.row(i).transpose() + leg_offset) >= Eigen::Vector2d::Constant(-bbox_len/2));

        leg_offset << length_legs*(lin_cos(i)*cos(phis[front_right]) - lin_sin(i)*sin(phis[front_right])),

        length_legs*(lin_sin(i)*cos(phis[front_right]) + lin_cos(i)*sin(phis[front_right]));

        prog.AddLinearConstraint(position_front_right.row(i).transpose() - (position_center.row(i).transpose() + leg_offset) <= Eigen::Vector2d::Constant(bbox_len/2));

        prog.AddLinearConstraint(position_front_right.row(i).transpose() - (position_center.row(i).transpose() + leg_offset) >= Eigen::Vector2d::Constant(-bbox_len/2));

        leg_offset << length_legs*(lin_cos(i)*cos(phis[rear_left]) - lin_sin(i)*sin(phis[rear_left])),

        length_legs*(lin_sin(i)*cos(phis[rear_left]) + lin_cos(i)*sin(phis[rear_left]));

        prog.AddLinearConstraint(position_rear_left.row(i).transpose() - (position_center.row(i).transpose() + leg_offset) <= Eigen::Vector2d::Constant(bbox_len/2));

        prog.AddLinearConstraint(position_rear_left.row(i).transpose() - (position_center.row(i).transpose() + leg_offset) >= Eigen::Vector2d::Constant(-bbox_len/2));

        leg_offset << length_legs*(lin_cos(i)*cos(phis[rear_right]) - lin_sin(i)*sin(phis[rear_right])),

        length_legs*(lin_sin(i)*cos(phis[rear_right]) + lin_cos(i)*sin(phis[rear_right]));

        prog.AddLinearConstraint(position_rear_right.row(i).transpose() - (position_center.row(i).transpose() + leg_offset) <= Eigen::Vector2d::Constant(bbox_len/2));

        prog.AddLinearConstraint(position_rear_right.row(i).transpose() - (position_center.row(i).transpose() + leg_offset) >= Eigen::Vector2d::Constant(-bbox_len/2));
    }
}

void theta_limits(drake::solvers::MathematicalProgram &prog, int n_points, DecVars &decision_variables)
{
    MatrixXDecisionVariable &theta = decision_variables.theta;

    MatrixXDecisionVariable &lin_sin = decision_variables.lin_sin;

    MatrixXDecisionVariable &lin_cos = decision_variables.lin_cos;

    MatrixXDecisionVariable &bin_sin = decision_variables.bin_sin;

    MatrixXDecisionVariable &bin_cos = decision_variables.bin_cos;
    
    double big_M = 2*M_PI;

    double sin_dividers[] = {0, 1, M_PI - 1, M_PI + 1, 2*M_PI - 1, 2*M_PI};

    double cos_dividers[] = {0, M_PI/2 - 1, M_PI/2 + 1, 3*M_PI/2 - 1, 3*M_PI/2 + 1, 2*M_PI};

    Eigen::Matrix<double, 5, 2> sin_coeffs = get_sin_coeffs();

    Eigen::Matrix<double, 5, 2> cos_coeffs = get_cos_coeffs();

    ROS_INFO("Right before loop");
    for (int i = 0; i < n_points; ++i)
    {
        // enforce theta to be within first cycle
        prog.AddLinearConstraint(theta(i) >= 0);

        prog.AddLinearConstraint(theta(i) <= 2*M_PI);

        // enforce relation between theta and binary variables
        ROS_INFO("About to add relation between theta and bin constr");
        for (int l = 0; l < 5; ++l)
        {
            prog.AddLinearConstraint(theta(i) >= sin_dividers[l] - (1 - bin_sin(i, l))*big_M);

            prog.AddLinearConstraint(theta(i) <= sin_dividers[l + 1] + (1 - bin_sin(i, l))*big_M);
            
            prog.AddLinearConstraint(theta(i) >= cos_dividers[l] - (1 - bin_cos(i, l))*big_M);

            prog.AddLinearConstraint(theta(i) <= cos_dividers[l + 1] + (1 - bin_cos(i, l))*big_M);
        }
        ROS_INFO("About to enforce exactly one line segment");
        // enforce that exactly one line segment must be active at a time
        auto sin_const = prog.AddLinearConstraint((bin_sin.row(i)*Eigen::VectorXd::Ones(5))(0) == 1);
        
        auto cos_const = prog.AddLinearConstraint((bin_cos.row(i)*Eigen::VectorXd::Ones(5))(0) == 1);

        // enforce linearized sin_theta according to which binary selection variable is active
        ROS_INFO("About to enforce linearized sin_theta/cos_theta");
        auto sin_upper = prog.AddLinearConstraint(lin_sin(i) - (sin_coeffs.col(0) + sin_coeffs.col(1)*theta(i))(0) <= big_M);
        
        auto sin_lower = prog.AddLinearConstraint(lin_sin(i) - (sin_coeffs.col(0) + sin_coeffs.col(1)*theta(i))(0) >= -big_M);

        auto cos_upper = prog.AddLinearConstraint(lin_cos(i) - (cos_coeffs.col(0) + cos_coeffs.col(1)*theta(i))(0) <= big_M);
        
        auto cos_lower = prog.AddLinearConstraint(lin_cos(i) - (cos_coeffs.col(0) + cos_coeffs.col(1)*theta(i))(0) >= -big_M);

        std::cout << sin_upper << std::endl << sin_lower << std::endl << cos_upper << std::endl << cos_lower << std::endl;
    }
}

void one_stone_per_foot(drake::solvers::MathematicalProgram &prog, int n_points, DecVars &decision_variables)
{
    MatrixXDecisionVariable &stone_front_left = decision_variables.stone_front_left;

    MatrixXDecisionVariable &stone_front_right = decision_variables.stone_front_right;

    MatrixXDecisionVariable &stone_rear_left = decision_variables.stone_rear_left;

    MatrixXDecisionVariable &stone_rear_right = decision_variables.stone_rear_right;

    prog.AddLinearConstraint(stone_front_left*Eigen::VectorXd::Ones(stone_front_left.cols()) == Eigen::VectorXd::Ones(stone_front_left.rows()));
    
    prog.AddLinearConstraint(stone_front_right*Eigen::VectorXd::Ones(stone_front_right.cols()) == Eigen::VectorXd::Ones(stone_front_right.rows()));
    
    prog.AddLinearConstraint(stone_rear_left*Eigen::VectorXd::Ones(stone_rear_left.cols()) == Eigen::VectorXd::Ones(stone_rear_left.rows()));
    
    prog.AddLinearConstraint(stone_rear_right*Eigen::VectorXd::Ones(stone_rear_right.cols()) == Eigen::VectorXd::Ones(stone_rear_right.rows()));
    
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

void foot_in_stepping_stone(drake::solvers::MathematicalProgram &prog, Terrain &terrain, int n_points, DecVars &decision_variables)
{
    MatrixXDecisionVariable &position_front_left = decision_variables.position_front_left;

    MatrixXDecisionVariable &position_front_right = decision_variables.position_front_right;

    MatrixXDecisionVariable &position_rear_left = decision_variables.position_rear_left;

    MatrixXDecisionVariable &position_rear_right = decision_variables.position_rear_right;

    MatrixXDecisionVariable &stone_front_left = decision_variables.stone_front_left;

    MatrixXDecisionVariable &stone_front_right = decision_variables.stone_front_right;

    MatrixXDecisionVariable &stone_rear_left = decision_variables.stone_rear_left;

    MatrixXDecisionVariable &stone_rear_right = decision_variables.stone_rear_right;

    Eigen::Vector4d M = get_big_M(terrain);

    int n_stones = terrain.getSteppingStones().rows();

    Eigen::MatrixXd A, b;
    for (int i = 0; i < n_points; ++i)
    {
        for (int l = 0; l < n_stones ; ++l)
        {
            A = terrain.getSteppingStones()(l).getA();

            b = terrain.getSteppingStones()(l).getB();

            prog.AddLinearConstraint(A*position_front_left.row(i).transpose() <= b + (1 - stone_front_left(i, l))*M);

            prog.AddLinearConstraint(A*position_front_right.row(i).transpose() <= b + (1 - stone_front_right(i, l))*M);

            prog.AddLinearConstraint(A*position_rear_left.row(i).transpose() <= b + (1 - stone_rear_left(i, l))*M);

            prog.AddLinearConstraint(A*position_rear_right.row(i).transpose() <= b + (1 - stone_rear_right(i, l))*M);

        }
    }
}

void minimize_step_length(drake::solvers::MathematicalProgram &prog, int n_points, DecVars &decision_variables)
{
    MatrixXDecisionVariable &position_center = decision_variables.position_center;

    Eigen::Matrix<drake::symbolic::Expression, 2, 1> dist;

    for (int i = 0; i < n_points - 1; ++i)
    {
        dist = (position_center.row(i + 1) - position_center.row(i)).transpose();

        prog.AddQuadraticCost((dist.transpose()*dist)(0));
    }
}

void minimize_theta_change(drake::solvers::MathematicalProgram &prog, int n_points, DecVars &decision_variables)
{
    //Trying to use square of difference in trig functions to avoid challenges related to wrapping discontinuities

    MatrixXDecisionVariable &lin_sin = decision_variables.lin_sin;

    MatrixXDecisionVariable &lin_cos = decision_variables.lin_cos;

    drake::symbolic::Expression sin_dist;

    drake::symbolic::Expression cos_dist;

    for (int i = 0; i < n_points - 1; ++i)
    {
        sin_dist = lin_sin(i + 1) - lin_sin(i);

        cos_dist = lin_cos(i + 1) - lin_cos(i);

        prog.AddQuadraticCost(sin_dist*sin_dist);

        prog.AddQuadraticCost(cos_dist*cos_dist);
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

    writeMatToFile(decision_variables.position_front_left, base_name + "_position_front_left" + fend);

    writeMatToFile(decision_variables.position_front_right, base_name + "_position_front_right" + fend);
    
    writeMatToFile(decision_variables.position_rear_left, base_name + "_position_rear_left" + fend);

    writeMatToFile(decision_variables.position_rear_right, base_name + "_position_rear_right" + fend);

    writeMatToFile(decision_variables.stone_front_left, base_name + "_stone_front_left" + fend);

    writeMatToFile(decision_variables.stone_front_right, base_name + "_stone_front_right" + fend);
    
    writeMatToFile(decision_variables.stone_rear_left, base_name + "_stone_rear_left" + fend);

    writeMatToFile(decision_variables.stone_rear_right, base_name + "_stone_rear_right" + fend);
}

}
}
