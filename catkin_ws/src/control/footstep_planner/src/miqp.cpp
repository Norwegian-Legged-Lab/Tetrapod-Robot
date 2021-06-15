#include "footstep_planner/miqp.h"

using drake::solvers::MatrixXDecisionVariable;

using DecVars = std::tuple<MatrixXDecisionVariable,
    MatrixXDecisionVariable,
    MatrixXDecisionVariable,
    MatrixXDecisionVariable,
    drake::solvers::MatrixDecisionVariable<1, 1>>;

DecVars add_decision_variables(drake::solvers::MathematicalProgram prog, Terrain terrain, int n_steps)
{
    int n_stones = terrain.getSteppingStones().rows();

    MatrixXDecisionVariable position_left = prog.NewContinuousVariables(n_steps + 1, 2);
    
    MatrixXDecisionVariable position_right = prog.NewContinuousVariables(n_steps + 1, 2);

    MatrixXDecisionVariable stone_left = prog.NewBinaryVariables(n_steps + 1, n_stones, "b");
    
    MatrixXDecisionVariable stone_right = prog.NewBinaryVariables(n_steps + 1, n_stones, "b");

    drake::solvers::MatrixDecisionVariable<1,1> first_left = prog.NewBinaryVariables(1, 1, "b");

    return std::make_tuple(position_left, position_right, stone_left, stone_right, first_left);
}

template<int n_steps, int n_stones>
void set_initial_and_goal_position(drake::solvers::MathematicalProgram &prog, Terrain &terrain, DecVars<n_steps, n_stones> &decision_variables)
{
    DecVar<n_steps + 1, 2> &position_left = std::get<0>(decision_variables);
    
    DecVar<n_steps + 1, 2> &position_right = std::get<1>(decision_variables);

    Eigen::Vector2d foot_offset(0, 0.2);

    Eigen::Vector2d center(terrain.getStoneByName("initial").getCenter());

    Eigen::Vector2d initial_position_left = center;

    Eigen::Vector2d initial_position_right = center - foot_offset;

    center = terrain.getStoneByName("goal").getCenter();

    Eigen::Vector2d goal_position_left = center;

    Eigen::Vector2d goal_position_right = center - foot_offset;

    //Enforce Initial positions of the feet
    prog.AddLinearConstraint(drake::symbolic::FormulaEq(position_left.row(0), initial_position_left));

    prog.AddLinearConstraint(drake::symbolic::FormulaEq(position_right.row(0), initial_position_right));

    //Enforce Goal positions of the feet
    prog.AddLinearConstraint(drake::symbolic::FormulaEq(position_left.row(position_left.rows() - 1), goal_position_left));

    prog.AddLinearConstraint(drake::symbolic::FormulaEq(position_right.row(position_right.rows() - 1), goal_position_right));   
}
