#include "support_polytope_base_planner/support_polytope_base_planner.h"

drake::solvers::MatrixXDecisionVariable add_decision_variables(int n_steps)
{
    return drake::solvers::MatrixXDecisionVariable(n_steps + 1, 2, "position");
}

void set_initial_position(drake::solvers::MathematicalProgram &prog, drake::solvers::MatrixXDecisionVariable &pos, Eigen::Vector2d init)
{
    prog.AddConstraint(pos.row(0).transpose() == init);
}

void 