#include <filter_utils/filter_utils.h>

ThirdOrderFilter::ThirdOrderFilter(double _dt, double _x_current, double _x_goal, double _frequency, double _damping)
{
    dt = _dt;
    
    X = Eigen::Matrix<double, 3, 1>::Zero();
    X(0) = _x_current;

    x_goal = _x_goal;

    A_d = Eigen::Matrix<double, 3, 3>::Zero();
    A_d(0, 1) = 1.0;
    A_d(1, 2) = 1.0;
    A_d(2, 0) = -_frequency*_frequency*_frequency;
    A_d(2, 1) = -(2*_damping + 1.0)*_frequency*_frequency;
    A_d(2, 2) = -(2*_damping + 1.0)*_frequency;

    B_d = Eigen::Matrix<double, 3, 1>::Zero();
    B_d(2) = _frequency*_frequency*_frequency;
}

void ThirdOrderFilter::updateFilter()
{
    Eigen::Matrix<double, 3, 1> X_dot = A_d*X + B_d*x_goal;
    X += X_dot*dt;
}

void ThirdOrderFilter::setParameters(double _frequency, double _damping)
{
    A_d = Eigen::Matrix<double, 3, 3>::Zero();
    A_d(0, 1) = 1.0;
    A_d(1, 2) = 1.0;
    A_d(2, 0) = -_frequency*_frequency*_frequency;
    A_d(2, 1) = -(2*_damping + 1.0)*_frequency*_frequency;
    A_d(2, 2) = -(2*_damping + 1.0)*_frequency;

    B_d = Eigen::Matrix<double, 3, 1>::Zero();
    B_d(2) = _frequency*_frequency*_frequency;
}