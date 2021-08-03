#include "support_polytope_base_planner/polytope.h"

Polytope::Polytope()
{
    A = Eigen::Matrix<double, Eigen::Dynamic, 2>();
    
    b = Eigen::Matrix<double, Eigen::Dynamic, 1>();
}

Polytope::Polytope(Eigen::Matrix<double, Eigen::Dynamic, 2> points, double epsilon)
{
    int num_points = points.rows();
    std::cout << "num_points: " << num_points << std::endl;
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
        points_cc.row(0) = points.row(2);
        points_cc.row(1) = points.row(1);
        points_cc.row(2) = points.row(0);
        std::cout << std::endl << std::endl << "new polygon" << std::endl;
        std::cout << points << std::endl;
        std::cout << points_cc << std::endl;
    }

    A = Eigen::Matrix<double, Eigen::Dynamic, 2>::Zero(num_points, 2);
    
    b = Eigen::Matrix<double, Eigen::Dynamic, 1>::Zero(num_points, 1);

    int i_next;

    double line_norm;
    
    double x;
    double y;
    double x_n;
    double y_n;
    double x_ortho;
    double y_ortho;
    double x_diff;

    double y_diff;

    for (int i = 0; i < num_points; ++i)
    {
        i_next = (i + 1)%num_points;
        x = points_cc.row(i)(0);
        y = points_cc.row(i)(1);
        x_n = points_cc.row(i_next)(0);
        y_n = points_cc.row(i_next)(1);

        x_diff = x_n - x;

        y_diff = y_n - y;

        line_norm = std::sqrt(std::pow(x_diff, 2) + std::pow(y_diff, 2));

        x_ortho = y_diff/line_norm;

        y_ortho = -x_diff/line_norm;

        A.row(i)(0) = y_diff;
        A.row(i)(1) = -x_diff;
        b.row(i)(0) = (x - epsilon*x_ortho)*y_diff - (y - epsilon*y_ortho)*x_diff;
        std::cout << "idiot test: " << A.row(i)*points_cc.row(i_next).transpose() - b.row(i)(0) << std::endl;
    }
}