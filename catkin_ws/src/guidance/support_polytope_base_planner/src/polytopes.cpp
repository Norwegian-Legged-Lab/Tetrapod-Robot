#include "support_polytope_base_planner/polytopes.h"

Polytopes::Polytopes(Eigen::Matrix<double, Eigen::Dynamic, 2> points, double epsilon, bool skip_first)
{
    int num_polytopes = skip_first ? points.rows() - 3:points.rows() - 2;

    polytope_list = Eigen::Matrix<Polytope, Eigen::Dynamic, 1>(num_polytopes);

    int offset = skip_first ? 1:0;

    for (int i = 0; i < num_polytopes; ++i)
    {
        polytope_list(i) = Polytope(points.block(i + offset, 0, 3, 2), epsilon);
    }


}