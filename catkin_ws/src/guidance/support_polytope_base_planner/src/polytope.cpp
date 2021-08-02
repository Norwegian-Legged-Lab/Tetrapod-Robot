#include "support_polytope_base_planner/polytope.h"

Polytope::Polytope()
{
    A = Eigen::Matrix<double, Eigen::Dynamic, 2>();
    
    b = Eigen::Matrix<double, Eigen::Dynamic, 1>();
}

Polytope::Polytope(Eigen::Matrix<double, Eigen::Dynamic, 2> points, double epsilon)
{
    int num_points = points.rows();
    Eigen::Vector3d normal;
    
    normal << 0, 0, 1;

    Eigen::Matrix<double, Eigen::Dynamic, 3> points3d = Eigen::Matrix<double, Eigen::Dynamic, 3>::Zero(num_points, 3);

    points3d.leftCols(2) = points;

    bool is_counter_clock;

    double discriminating_product = normal.dot(((points3d.row(1) - points3d.row(0)).cross(points3d.row(2) - points3d.row(0))));

    is_counter_clock = (discriminating_product > 0);

    Eigen::Matrix<double, Eigen::Dynamic, 2> points_cc(points);

    if (!is_counter_clock)
    {
        points_cc << points.row(0), points.row(2), points.row(1);
    }

    A = Eigen::Matrix<double, Eigen::Dynamic, 2>(num_points, 2);

    b = Eigen::Matrix<double, Eigen::Dynamic, 1>(num_points, 1);

    int i_next;

    double line_norm;
    
    double x_diff;

    double y_diff;
    for (int i = 0; i < num_points; ++i)
    {
        i_next = (i + 1)%num_points;

        line_norm = (points_cc.row(i_next).transpose() - points_cc.row(i).transpose()).norm();

        x_diff = points_cc.row(i_next)(0) - points_cc.row(i)(0);

        y_diff = points_cc.row(i_next)(1) - points_cc.row(i)(1);

        A.row(i) << y_diff, -x_diff;

        b.row(i) << y_diff*points_cc.row(i)(0) - x_diff*points_cc.row(i)(1);//(epsilon/line_norm)*(-std::pow(x_diff, 2) - std::pow(y_diff, 2)) + y_diff*x_diff*points.row(i)(0) - x_diff*points.row(i)(1);
    }
}