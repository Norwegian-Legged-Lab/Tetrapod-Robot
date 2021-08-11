#include "footstep_planner/miqp_quadruped.h"

#include "ros/console.h"

#include<cmath>

#include "footstep_planner/utils.h"

#define _USE_MATH_DEFINES

namespace footstep_planner{

using drake::solvers::MatrixXDecisionVariable;

DecVars AddDecisionVariables(drake::solvers::MathematicalProgram &prog, Terrain &terrain, int n_steps, int n_legs)
{
    DecVars decision_variables;

    int n_stones = terrain.GetSteppingStones().rows();

    decision_variables.position = prog.NewContinuousVariables(n_steps, 3, "position");

    decision_variables.theta = prog.NewContinuousVariables(n_steps/n_legs + 1, 1, "theta");

    decision_variables.lin_sin = prog.NewContinuousVariables(n_steps/n_legs + 1, 1, "sin_theta");

    decision_variables.lin_cos = prog.NewContinuousVariables(n_steps/n_legs + 1, 1, "cos_theta");

    decision_variables.bin_sin = prog.NewBinaryVariables(n_steps/n_legs + 1, 5, "sin_selection");

    decision_variables.bin_cos = prog.NewBinaryVariables(n_steps/n_legs + 1, 5, "cos_selection");

    decision_variables.stone = prog.NewBinaryVariables(n_steps, n_stones, "stone");

    return decision_variables;
}

void InitialAndGoalPositionConstraints(drake::solvers::MathematicalProgram &prog, Eigen::Matrix<Eigen::Vector3d, 4, 1> init_f_pos, Eigen::Matrix<Eigen::Vector3d, 4, 1> goal_f_pos, int n_steps, double length_legs, LegType step_sequence[], DecVars &decision_variables, bool enforce_goal_hard)
{
    MatrixXDecisionVariable &position = decision_variables.position;

    MatrixXDecisionVariable &theta = decision_variables.theta;

    int n_legs = 4;

    double angle_divided = 2*M_PI/n_legs;

    double phis[] = {0.5*angle_divided, -0.5*angle_divided, 1.5*angle_divided, -1.5*angle_divided};

    //TODO: Remove arbitrary intial theta, check if program still works
    double theta_0 = 0;

    double angle_front_left = theta_0 + phis[front_left - 1];

    double angle_front_right = theta_0 + phis[front_right - 1];

    double angle_rear_left = theta_0 + phis[rear_left - 1];

    double angle_rear_right = theta_0 + phis[rear_right - 1];

    for (int i = 0; i < n_legs; ++i)
    {
        prog.AddLinearConstraint(position.row(i).transpose() == init_f_pos(step_sequence[i] - 1));

        if (enforce_goal_hard)
        {
            prog.AddLinearConstraint(position.row(n_steps - n_legs + i).transpose() == goal_f_pos(step_sequence[(n_steps + i) % n_legs] - 1));
        }
    }

    //TODO: Remove
    //Enforce initial and goal orientations
    prog.AddLinearConstraint(theta(0) == theta_0);

    prog.AddLinearConstraint(theta(theta.rows()-1) == theta_0);
}

void ThetaConstraints(drake::solvers::MathematicalProgram &prog, int n_steps, int n_legs, DecVars &decision_variables)
{
    MatrixXDecisionVariable &theta = decision_variables.theta;

    MatrixXDecisionVariable &lin_sin = decision_variables.lin_sin;

    MatrixXDecisionVariable &lin_cos = decision_variables.lin_cos;

    MatrixXDecisionVariable &bin_sin = decision_variables.bin_sin;

    MatrixXDecisionVariable &bin_cos = decision_variables.bin_cos;
    
    double big_M = 2*M_PI;

    double sin_dividers[] = {0, 1, M_PI - 1, M_PI + 1, 2*M_PI - 1, 2*M_PI};

    double cos_dividers[] = {0, M_PI/2 - 1, M_PI/2 + 1, 3*M_PI/2 - 1, 3*M_PI/2 + 1, 2*M_PI};

    Eigen::Matrix<double, 5, 2> sin_coeffs = GetSinCoeffs();

    Eigen::Matrix<double, 5, 2> cos_coeffs = GetCosCoeffs();


    for (int i = 0; i < n_steps/n_legs + 1; ++i)
    {
        // Enforce theta to be within first cycle
        prog.AddLinearConstraint(theta(i) >= 0);

        prog.AddLinearConstraint(theta(i) <= 2*M_PI);

        // Enforce relation between theta and binary variables
        for (int l = 0; l < 5; ++l)
        {
            prog.AddLinearConstraint(theta(i) >= sin_dividers[l] - (1 - bin_sin(i, l))*big_M);

            prog.AddLinearConstraint(theta(i) <= sin_dividers[l + 1] + (1 - bin_sin(i, l))*big_M);
            
            prog.AddLinearConstraint(theta(i) >= cos_dividers[l] - (1 - bin_cos(i, l))*big_M);

            prog.AddLinearConstraint(theta(i) <= cos_dividers[l + 1] + (1 - bin_cos(i, l))*big_M);
        }
        // enforce that exactly one line segment must be active at a time
        auto sin_const = prog.AddLinearConstraint((bin_sin.row(i)*Eigen::VectorXd::Ones(5))(0) == 1);
        
        auto cos_const = prog.AddLinearConstraint((bin_cos.row(i)*Eigen::VectorXd::Ones(5))(0) == 1);

        // enforce linearized sin_theta according to which binary selection variable is active
        
        auto sin_upper = prog.AddLinearConstraint(lin_sin(i)*Eigen::VectorXd::Ones(5) - (sin_coeffs.col(0) + sin_coeffs.col(1)*theta(i)) <= (Eigen::VectorXd::Ones(5) - bin_sin.row(i).transpose())*big_M);        

        auto sin_lower = prog.AddLinearConstraint(lin_sin(i)*Eigen::VectorXd::Ones(5) - (sin_coeffs.col(0) + sin_coeffs.col(1)*theta(i)) >= -(Eigen::VectorXd::Ones(5) - bin_sin.row(i).transpose())*big_M);        

        auto cos_upper = prog.AddLinearConstraint(lin_cos(i)*Eigen::VectorXd::Ones(5) - (cos_coeffs.col(0) + cos_coeffs.col(1)*theta(i)) <= (Eigen::VectorXd::Ones(5) - bin_cos.row(i).transpose())*big_M);        

        auto cos_lower = prog.AddLinearConstraint(lin_cos(i)*Eigen::VectorXd::Ones(5) - (cos_coeffs.col(0) + cos_coeffs.col(1)*theta(i)) >= -(Eigen::VectorXd::Ones(5) - bin_cos.row(i).transpose())*big_M);        
    }
}

void GeometryConstraints(drake::solvers::MathematicalProgram &prog, int n_steps, int n_legs, double length_legs, LegType step_sequence[], Terrain &terrain, double bbox_len, DecVars &decision_variables)
{
    MatrixXDecisionVariable &position = decision_variables.position;

    MatrixXDecisionVariable &lin_sin = decision_variables.lin_sin;

    MatrixXDecisionVariable &lin_cos = decision_variables.lin_cos;

    Eigen::Vector4d sequence_offset(1, 0, 0, 0);

    double angle_divided = 2*M_PI/n_legs;

    double phis[] = {0.5*angle_divided, -0.5*angle_divided, 1.5*angle_divided, -1.5*angle_divided};

    double phis_ordered[] = {phis[step_sequence[0] - 1], phis[step_sequence[1] - 1], phis[step_sequence[2] - 1], phis[step_sequence[3] - 1]};

    Eigen::Matrix<drake::symbolic::Expression, 2, 1> p_i;

    Eigen::Matrix<drake::symbolic::Expression, 2, 1> leg_offset;

    Eigen::Vector4d M = GetBigM(terrain);

    for (int i = n_legs; i < n_steps; ++i)
    {
        p_i = (Eigen::VectorXd::Ones(n_legs).transpose()*position.block(i - n_legs, 0, n_legs, 2)/n_legs).transpose();

        leg_offset << length_legs*(lin_cos(i/n_legs)*drake::symbolic::cos(phis_ordered[i % n_legs]) - lin_sin(i/n_legs)*drake::symbolic::sin(phis_ordered[i % n_legs])),

        length_legs*(lin_sin(i/n_legs)*drake::symbolic::cos(phis_ordered[i % n_legs]) + lin_cos(i/n_legs)*drake::symbolic::sin(phis_ordered[i % n_legs]));

        prog.AddLinearConstraint(position.block(i, 0, 1, 2).transpose() - (p_i + leg_offset) <= Eigen::Vector2d::Constant(bbox_len/2));

        prog.AddLinearConstraint(position.block(i, 0, 1, 2).transpose() - (p_i + leg_offset) >= Eigen::Vector2d::Constant(-bbox_len/2));
    }
}

void RelativePositionConstraints(drake::solvers::MathematicalProgram &prog, int n_steps, int n_legs, double step_span, double step_height, DecVars &decision_variables)
{
    MatrixXDecisionVariable &position = decision_variables.position;

    for (int i = n_legs; i < n_steps; ++i)
    {
        prog.AddLinearConstraint(position(i, 0) - position(i - n_legs, 0) <= step_span/2);

        prog.AddLinearConstraint(position(i, 0) - position(i - n_legs, 0) >= -step_span/2);

        prog.AddLinearConstraint(position(i, 1) - position(i - n_legs, 1) <= step_span/2);

        prog.AddLinearConstraint(position(i, 1) - position(i - n_legs, 1) >= -step_span/2);

        prog.AddLinearConstraint(position(i, 2) - position(i - n_legs, 2) <= step_height);

        prog.AddLinearConstraint(position(i, 2) - position(i - n_legs, 2) >= -step_height);
    }
}

void OneStonePerFootConstraints(drake::solvers::MathematicalProgram &prog, int n_steps, DecVars &decision_variables)
{
    MatrixXDecisionVariable &stone = decision_variables.stone;

    auto stone_const = prog.AddLinearConstraint(stone*Eigen::VectorXd::Ones(stone.cols()) == Eigen::VectorXd::Ones(stone.rows()));
}

Eigen::Vector4d GetBigM(Terrain terrain)
{
    SteppingStone initial = terrain.GetStoneByName("initial");

    SteppingStone goal = terrain.GetStoneByName("goal");

    SteppingStone lateral = terrain.GetStoneByName("lateral");

    Eigen::Vector2d M(goal.GetCenter()(0) - initial.GetCenter()(0), lateral.GetTopRight()(1) - initial.GetCenter()(1));

    Eigen::Vector4d res;

    res << 5, 5, 5, 5;
    
    return res;
}

void FootInSteppingStoneConstraints(drake::solvers::MathematicalProgram &prog, Terrain &terrain, int n_steps, DecVars &decision_variables, double ledge_margin)
{
    MatrixXDecisionVariable &position = decision_variables.position;

    MatrixXDecisionVariable &stone = decision_variables.stone;

    Eigen::Vector4d M = GetBigM(terrain);

    Eigen::Matrix<double, 1, 1> M_height = Eigen::Matrix<double, 1, 1>::Constant(10);

    int n_stones = terrain.GetSteppingStones().rows();

    Eigen::MatrixXd A_ineq, b_ineq, A_eq, b_eq;
    for (int i = 4; i < n_steps; ++i)
    {
        for (int l = 0; l < n_stones ; ++l)
        {
            A_ineq = terrain.GetSteppingStones()(l).GetAIneq();

            b_ineq = terrain.GetSteppingStones()(l).GetBIneq() - Eigen::Vector4d::Constant(ledge_margin);

            A_eq = terrain.GetSteppingStones()(l).GetAEq();

            b_eq = terrain.GetSteppingStones()(l).GetBEq();

            prog.AddLinearConstraint(A_ineq*position.row(i).transpose() <= b_ineq + (1 - stone(i, l))*M);

            prog.AddLinearConstraint(A_eq*position.row(i).transpose() <= b_eq + (1 - stone(i, l))*M_height);

            prog.AddLinearConstraint(A_eq*position.row(i).transpose() >= b_eq - (1 - stone(i, l))*M_height);
        }
    }
}

void StepLengthMinimization(drake::solvers::MathematicalProgram &prog, int n_steps, int n_legs, DecVars &decision_variables)
{
    MatrixXDecisionVariable &position = decision_variables.position;

    Eigen::Matrix<drake::symbolic::Expression, 2, 1> dist;

    for (int i = n_legs; i < n_steps; ++i)
    {
        dist = (position.row(i) - position.row(i - n_legs)).transpose();

        prog.AddQuadraticCost((dist.transpose()*dist)(0));
    }
}

void RemainingLengthMinimization(drake::solvers::MathematicalProgram &prog, Terrain &terrain, int n_steps, int n_legs, DecVars &decision_variables)
{
    MatrixXDecisionVariable &position = decision_variables.position;

    Eigen::Matrix<drake::symbolic::Expression, 3, 1> center;

    Eigen::Matrix<drake::symbolic::Expression, 3, 1> dist;

    center = position.block(n_steps - n_legs, 0, n_legs, 3).transpose()*Eigen::Vector4d::Ones()/n_legs;

    dist = terrain.GetStoneByName("goal").GetCenter() - center;

    prog.AddQuadraticCost(10*n_legs*(dist.transpose()*dist)(0));
}

Eigen::Array<Eigen::MatrixXd, Eigen::Dynamic, 1> GetUncompressedArrays(Eigen::MatrixXd &arr, int n_steps, int n_legs, LegType step_sequence[])
{
    Eigen::Array<Eigen::MatrixXd, Eigen::Dynamic, 1> res;
    
    res.conservativeResize(n_legs);
    
    int ind;

    for (int l = 0; l < n_legs; ++l)
    {
        ind = step_sequence[(l) % n_legs] - 1;

        res(ind) = Eigen::MatrixXd();
        
        res(ind).conservativeResize(n_steps - n_legs + 1, arr.cols());

        res(ind).row(0) << arr.row(l);

        for (int i = 1; i < res(ind).rows(); ++i)
        {
            if (((i + l - 1) % n_legs) == 0) //if the current step is being taken by this leg
            {
                res(ind).row(i) << arr.row(n_legs + i - 1);
            }
            else
            {
                res(ind).row(i) << res(ind).row(i - 1);
            }
        }
    }
    return res;
}

DecVarsRes GetDecVarsRes(DecVarsResRaw &decision_variables_raw, int n_steps, int n_legs, LegType step_sequence[])
{
    Eigen::Array<Eigen::MatrixXd, Eigen::Dynamic, 1> positions = GetUncompressedArrays(decision_variables_raw.position, n_steps, n_legs, step_sequence);

    Eigen::Array<Eigen::MatrixXd, Eigen::Dynamic, 1> stones = GetUncompressedArrays(decision_variables_raw.stone, n_steps, n_legs, step_sequence);

    DecVarsRes res;

    res.position_front_left = positions(0);

    res.position_front_right = positions(1);

    res.position_rear_left = positions(2);

    res.position_rear_right = positions(3);

    res.stone_front_left = stones(0);

    res.stone_front_right = stones(1);

    res.stone_rear_left = stones(2);

    res.stone_rear_right = stones(3);

    res.cost = decision_variables_raw.cost;

    res.position_ts = decision_variables_raw.position;

    res.success = decision_variables_raw.success;

    res.theta = decision_variables_raw.theta;

    return res;
}

void WriteDecVarsToFile(DecVarsRes &decision_variables, std::string base_name)
{
    std::string fend = ".csv";

    WriteMatToFile(decision_variables.position_front_left, base_name + "_position_front_left" + fend);

    WriteMatToFile(decision_variables.position_front_right, base_name + "_position_front_right" + fend);
    
    WriteMatToFile(decision_variables.position_rear_left, base_name + "_position_rear_left" + fend);

    WriteMatToFile(decision_variables.position_rear_right, base_name + "_position_rear_right" + fend);

    WriteMatToFile(decision_variables.stone_front_left, base_name + "_stone_front_left" + fend);

    WriteMatToFile(decision_variables.stone_front_right, base_name + "_stone_front_right" + fend);
    
    WriteMatToFile(decision_variables.stone_rear_left, base_name + "_stone_rear_left" + fend);

    WriteMatToFile(decision_variables.stone_rear_right, base_name + "_stone_rear_right" + fend);

    WriteMatToFile(decision_variables.position_ts, base_name + "_position_ts" + fend);

    WriteMatToFile(decision_variables.theta, base_name + "_theta" + fend);
}

} //namespace footstep_planner