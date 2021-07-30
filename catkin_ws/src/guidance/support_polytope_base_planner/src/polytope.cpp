#include "support_polytope_base_planner/polytope.h"

polytope::polytope(Eigen::Matrix<Eigen::Vector2d, Eigen::Dynamic, 1> points, double epsilon = 0)
{
    int num_points = points.rows();

    A = Eigen::Matrix<double, Eigen::Dynamic, 2>(num_points);

    b = Eigen::Matrix<double, Eigen::Dynamic, 1>(num_points);

    int i_next;

    double line_norm;
    
    double x_diff;

    double y_diff;
    for (int i = 0; i < num_points; ++i)
    {
        i_next = (i + 1)%num_points;

        line_norm = (points(i_next) - points(i)).norm();

        x_diff = points(i_next)(0) - points(i)(0);

        y_diff = points(i_next)(1) - points(i)(1);

        A.row(i) << (y_diff)/(x_diff), -1;

        b.row(i) << (epsilon/line_norm)*(-x_diff - std::pow(y_diff, 2)/(x_diff)) + (y_diff)*points(i)(0) - points(i)(1);
    }
}