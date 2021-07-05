#include "footstep_planner/miqp_quadruped.h"

#include "ros/console.h"

#include<cmath>

#include "footstep_planner/utils.h"

#define _USE_MATH_DEFINES

namespace miqp{
namespace quadruped{

using drake::solvers::MatrixXDecisionVariable;

using drake::symbolic::sin;

using drake::symbolic::cos;

using Eigen::atan2;

DecVars add_decision_variables(drake::solvers::MathematicalProgram &prog, Terrain &terrain, int n_steps, int n_legs)
{
    DecVars decision_variables;

    int n_stones = terrain.getSteppingStones().rows();

    decision_variables.position = prog.NewContinuousVariables(n_steps, 2, "position");

    decision_variables.theta = prog.NewContinuousVariables(n_steps/n_legs + 1, 1, "theta");

    decision_variables.lin_sin = prog.NewContinuousVariables(n_steps/n_legs + 1, 1, "sin_theta");

    decision_variables.lin_cos = prog.NewContinuousVariables(n_steps/n_legs + 1, 1, "cos_theta");

    decision_variables.bin_sin = prog.NewBinaryVariables(n_steps/n_legs + 1, 5, "sin_selection");

    decision_variables.bin_cos = prog.NewBinaryVariables(n_steps/n_legs + 1, 5, "cos_selection");

    decision_variables.stone = prog.NewBinaryVariables(n_steps, n_stones, "stone");

    //decision_variables.sequence_offset = prog.NewBinaryVariables(4, 1, "sequence offset");

    return decision_variables;
}

void set_initial_and_goal_position(drake::solvers::MathematicalProgram &prog, int n_steps, double length_legs, Leg step_sequence[], Terrain &terrain, DecVars &decision_variables, bool enforce_goal_hard)
{
    MatrixXDecisionVariable &position = decision_variables.position;

    MatrixXDecisionVariable &theta = decision_variables.theta;

    //MatrixXDecisionVariable &sequence_offset = decision_variables.sequence_offset;
    Eigen::Vector4d sequence_offset(1, 0, 0, 0);

    int n_legs = 4;

    double angle_divided = 2*M_PI/n_legs;

    double phis[] = {0.5*angle_divided, -0.5*angle_divided, 1.5*angle_divided, -1.5*angle_divided};

    double theta_0 = 0;

    Eigen::Vector2d center(terrain.getStoneByName("initial").getCenter());
    
    double angle_front_left = theta_0 + phis[front_left];

    double angle_front_right = theta_0 + phis[front_right];

    double angle_rear_left = theta_0 + phis[rear_left];

    double angle_rear_right = theta_0 + phis[rear_right];

    Eigen::Vector2d initial_position_front_left = center + length_legs*Eigen::Vector2d(std::cos(angle_front_left), std::sin(angle_front_left));

    Eigen::Vector2d initial_position_rear_left = center + length_legs*Eigen::Vector2d(std::cos(angle_rear_left), std::sin(angle_rear_left));

    Eigen::Vector2d initial_position_front_right = center + length_legs*Eigen::Vector2d(std::cos(angle_front_right), std::sin(angle_front_right));

    Eigen::Vector2d initial_position_rear_right = center + length_legs*Eigen::Vector2d(std::cos(angle_rear_right), std::sin(angle_rear_right));

    center = terrain.getStoneByName("goal").getCenter();

    //Enforce initial positions and goal positions
    Eigen::Vector2d goal_position_front_left = center + length_legs*Eigen::Vector2d(std::cos(angle_front_left), std::sin(angle_front_left));

    Eigen::Vector2d goal_position_rear_left = center + length_legs*Eigen::Vector2d(std::cos(angle_rear_left), std::sin(angle_rear_left));

    Eigen::Vector2d goal_position_front_right = center + length_legs*Eigen::Vector2d(std::cos(angle_front_right), std::sin(angle_front_right));

    Eigen::Vector2d goal_position_rear_right = center + length_legs*Eigen::Vector2d(std::cos(angle_rear_right), std::sin(angle_rear_right));
    
    Eigen::Vector2d initial_positions[] = {initial_position_front_left, initial_position_front_right, initial_position_rear_left, initial_position_rear_right};

    Eigen::Vector2d goal_positions[] = {goal_position_front_left, goal_position_front_right, goal_position_rear_left, goal_position_rear_right};

    Eigen::Matrix<drake::symbolic::Expression, 2, 1> init_pos_i;

    Eigen::Matrix<drake::symbolic::Expression, 2, 1> goal_pos_i;

    for (int i = 0; i < n_legs; ++i)
    {
        init_pos_i = sequence_offset(0)*initial_positions[step_sequence[i]]
        + sequence_offset(1)*initial_positions[step_sequence[(i + 1) % n_legs]]
        + sequence_offset(2)*initial_positions[step_sequence[(i + 2) % n_legs]]
        + sequence_offset(3)*initial_positions[(i + 3) % n_legs];

        auto constr_init = prog.AddLinearConstraint(position.row(i).transpose() == init_pos_i);

        if (enforce_goal_hard)
        {
            goal_pos_i = sequence_offset(0)*goal_positions[step_sequence[(n_steps + i) % n_legs]]
            + sequence_offset(1)*goal_positions[step_sequence[(n_steps + i + 1) % n_legs]]
            + sequence_offset(2)*goal_positions[step_sequence[(n_steps + i + 2) % n_legs]]
            + sequence_offset(3)*goal_positions[(n_steps + i + 3) % n_legs];

            auto constr_goal = prog.AddLinearConstraint(position.row(n_steps - n_legs + i).transpose() == goal_pos_i);
        }
    }

    //Enforce initial and goal orientations

    prog.AddLinearConstraint(theta(0) == theta_0);

    prog.AddLinearConstraint(theta(theta.rows()-1) == theta_0);

    //Enforce exactly one offset variable is 1

    //prog.AddLinearConstraint((Eigen::Vector4d::Ones().transpose()*sequence_offset)(0) == 1);
}

void theta_limits(drake::solvers::MathematicalProgram &prog, int n_steps, int n_legs, DecVars &decision_variables)
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


    for (int i = 0; i < n_steps/n_legs + 1; ++i)
    {
        // enforce theta to be within first cycle
        prog.AddLinearConstraint(theta(i) >= 0);

        prog.AddLinearConstraint(theta(i) <= 2*M_PI);

        // enforce relation between theta and binary variables
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

void geometry_limits(drake::solvers::MathematicalProgram &prog, int n_steps, int n_legs, double length_legs, Leg step_sequence[], Terrain &terrain, double bbox_len, DecVars &decision_variables)
{
    MatrixXDecisionVariable &position = decision_variables.position;

    MatrixXDecisionVariable &lin_sin = decision_variables.lin_sin;

    MatrixXDecisionVariable &lin_cos = decision_variables.lin_cos;

    //MatrixXDecisionVariable &sequence_offset = decision_variables.sequence_offset;

    Eigen::Vector4d sequence_offset(1, 0, 0, 0);

    double angle_divided = 2*M_PI/n_legs;

    double phis[] = {0.5*angle_divided, -0.5*angle_divided, 1.5*angle_divided, -1.5*angle_divided};

    double phis_ordered[] = {phis[step_sequence[0]], phis[step_sequence[1]], phis[step_sequence[2]], phis[step_sequence[3]]};

    Eigen::Matrix<drake::symbolic::Expression, 2, 1> p_i;

    Eigen::Matrix<drake::symbolic::Expression, 2, 1> leg_offset;

    Eigen::Vector4d M = get_big_M(terrain);

    //Eigen::Matrix<drake::symbolic::Expression, 2, 1> M_conditional;

    for (int i = n_legs; i < n_steps; ++i)
    {
        p_i = (Eigen::VectorXd::Ones(n_legs).transpose()*position.block(i - n_legs, 0, n_legs, 2)/n_legs).transpose();

        leg_offset << length_legs*(lin_cos(i/n_legs)*cos(phis_ordered[i % n_legs]) - lin_sin(i/n_legs)*sin(phis_ordered[i % n_legs])),

        length_legs*(lin_sin(i/n_legs)*cos(phis_ordered[i % n_legs]) + lin_cos(i/n_legs)*sin(phis_ordered[i % n_legs]));

        prog.AddLinearConstraint(position.row(i).transpose() - (p_i + leg_offset) <= Eigen::Vector2d::Constant(bbox_len/2));

        prog.AddLinearConstraint(position.row(i).transpose() - (p_i + leg_offset) >= Eigen::Vector2d::Constant(-bbox_len/2));
    }
}

void relative_position_limits(drake::solvers::MathematicalProgram &prog, int n_steps, int n_legs, double step_span, DecVars &decision_variables)
{
    MatrixXDecisionVariable &position = decision_variables.position;

    for (int i = n_legs; i < n_steps; ++i)
    {
        prog.AddLinearConstraint(position(i, 0) - position(i - n_legs, 0) <= step_span/2);

        prog.AddLinearConstraint(position(i, 0) - position(i - n_legs, 0) >= -step_span/2);

        prog.AddLinearConstraint(position(i, 1) - position(i - n_legs, 1) <= step_span/2);

        prog.AddLinearConstraint(position(i, 1) - position(i - n_legs, 1) >= -step_span/2);
    }
}

void one_stone_per_foot(drake::solvers::MathematicalProgram &prog, int n_steps, DecVars &decision_variables)
{
    MatrixXDecisionVariable &stone = decision_variables.stone;

    auto stone_const = prog.AddLinearConstraint(stone*Eigen::VectorXd::Ones(stone.cols()) == Eigen::VectorXd::Ones(stone.rows()));
}

Eigen::Vector4d get_big_M(Terrain terrain)
{
    SteppingStone initial = terrain.getStoneByName("initial");

    SteppingStone goal = terrain.getStoneByName("goal");

    SteppingStone lateral = terrain.getStoneByName("lateral");

    Eigen::Vector2d M(goal.getCenter()(0) - initial.getCenter()(0), lateral.getTopRight()(1) - initial.getCenter()(1));

    Eigen::Vector4d res;

    res << 5, 5, 5, 5;
    
    return res;
}

void foot_in_stepping_stone(drake::solvers::MathematicalProgram &prog, Terrain &terrain, int n_steps, DecVars &decision_variables)
{
    MatrixXDecisionVariable &position = decision_variables.position;

    MatrixXDecisionVariable &stone = decision_variables.stone;

    Eigen::Vector4d M = get_big_M(terrain);

    int n_stones = terrain.getSteppingStones().rows();

    Eigen::MatrixXd A, b;
    for (int i = 0; i < n_steps; ++i)
    {
        for (int l = 0; l < n_stones ; ++l)
        {
            A = terrain.getSteppingStones()(l).getA();

            b = terrain.getSteppingStones()(l).getB();

            auto constr = prog.AddLinearConstraint(A*position.row(i).transpose() <= b + (1 - stone(i, l))*M);
        }
    }
}

void minimize_step_length(drake::solvers::MathematicalProgram &prog, int n_steps, int n_legs, DecVars &decision_variables)
{
    MatrixXDecisionVariable &position = decision_variables.position;

    Eigen::Matrix<drake::symbolic::Expression, 2, 1> dist;

    for (int i = n_legs; i < n_steps; ++i)
    {
        dist = (position.row(i) - position.row(i - n_legs)).transpose();

        prog.AddQuadraticCost((dist.transpose()*dist)(0));
    }
}

void minimize_remaining_length(drake::solvers::MathematicalProgram &prog, Terrain &terrain, int n_steps, int n_legs, DecVars &decision_variables)
{
    MatrixXDecisionVariable &position = decision_variables.position;

    Eigen::Matrix<drake::symbolic::Expression, 2, 1> center;

    Eigen::Matrix<drake::symbolic::Expression, 2, 1> dist;

    center = position.block(n_steps - n_legs, 0, n_legs, 2).transpose()*Eigen::Vector4d::Ones()/n_legs;

    dist = terrain.getStoneByName("goal").getCenter() - center;

    prog.AddQuadraticCost(10*(dist.transpose()*dist)(0));
}

Eigen::Array<Eigen::MatrixXd, Eigen::Dynamic, 1> get_uncompressed_arrays(Eigen::MatrixXd &arr, Eigen::MatrixXd &sequence_offset, int n_steps, int n_legs, Leg step_sequence[])
{
    int offset;

    for (int l = 0; l < n_legs; ++l)
    {
        if (bool(std::round(sequence_offset(l))))
        {
            offset = l;

            break;
        }
    }

    Eigen::Array<Eigen::MatrixXd, Eigen::Dynamic, 1> res;
    
    res.conservativeResize(n_legs);
    
    int ind;

    for (int l = 0; l < n_legs; ++l)
    {
        ind = step_sequence[(l + offset) % n_legs];

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

DecVars_res get_decvars_res(DecVars_res_raw &decision_variables_raw, int n_steps, int n_legs, Leg step_sequence[])
{
    Eigen::Array<Eigen::MatrixXd, Eigen::Dynamic, 1> positions = get_uncompressed_arrays(decision_variables_raw.position, decision_variables_raw.sequence_offset, n_steps, n_legs, step_sequence);

    Eigen::Array<Eigen::MatrixXd, Eigen::Dynamic, 1> stones = get_uncompressed_arrays(decision_variables_raw.stone, decision_variables_raw.sequence_offset, n_steps, n_legs, step_sequence);

    DecVars_res res;

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

    return res;
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

    writeMatToFile(decision_variables.position_ts, base_name + "_position_ts" + fend);
}

}
}