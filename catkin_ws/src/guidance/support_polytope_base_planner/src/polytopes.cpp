#include "support_polytope_base_planner/polytopes.h"

polytopes::polytopes(Eigen::Matrix<Eigen::Vector2d, Eigen::Dynamic, 1> points, double epsilon = 0, bool skip_first = false)
{
    int num_polytopes = skip_first ? points.rows() - 3:points.rows() - 2;

    polytope_list = Eigen::Matrix<polytope, Eigen::Dynamic, 1>(num_polytopes);

    int offset = skip_first ? 1:0;

    for (int i = 0; i < num_polytopes; ++i)
    {
        polytope_list(i) = polytope(points.segment(i + offset, 3), epsilon);
    }


}