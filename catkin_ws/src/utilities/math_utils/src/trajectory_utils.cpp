#include "math_utils/trajectory_utils.h"

Eigen::Vector3d parabolic_step(double s, double h, const Eigen::Vector3d &start, const Eigen::Vector3d &end)
{
    double x = (end(0) - start(0))*s + start(0);

    double y = (end(1) - start(1))*s + start(1);

    double z = h*(1 - std::pow(2*s - 1, 2)) + (end(2) - start(2))*s + start(2);

    return Eigen::Vector3d(x, y, z);
}

Eigen::Vector3d parabolic_step_velocity(double s, double h, const Eigen::Vector3d &start, const Eigen::Vector3d &end)
{
    double x = (end(0) - start(0));

    double y = (end(1) - start(1));

    double z = -2*h*(2*s - 1)*2;

    return Eigen::Vector3d(x, y, z);
}

Eigen::Vector3d parabolic_step_acceleration(double s, double h, const Eigen::Vector3d &start, const Eigen::Vector3d &end)
{
    double x = 0;

    double y = 0;

    double z = -8*h;

    return Eigen::Vector3d(x, y, z);
}