#include "modular_gait_controller/gait_controller.h"
#include "modular_gait_controller/gaits.h"
#include <list>

Eigen::Vector3d mirrorOffset(Eigen::Vector3d offset, Kinematics::LegType leg)
{
    Eigen::Vector3d res(offset);

    switch (leg)
    {
    case Kinematics::frontRight:
        res(1) = -res(1);
        break;
    case Kinematics::rearLeft:
        res(0) = -res(0);
        break;
    case Kinematics::rearRight:
        res(0) = -res(0);
        res(1) = -res(1);
    default:
        break;
    }

    return res;
}

Eigen::Vector3d classicGait(double t, Kinematics::LegType leg)
{
    Eigen::Vector3d offset(-0.15, 0.1, -0.25);

    double full_stance = 0.4;

    double t0;

    double radius = 0.15;

    double max_height = 0.05;

    offset = mirrorOffset(offset, leg);

    if (leg == Kinematics::frontRight || leg == Kinematics::rearLeft)
    {
        t = std::fmod(t + 0.5, 1);
    }
    if (t <= full_stance/2)
    {
        return offset + Eigen::Vector3d(radius, 0, 0);
    }
    else if (t <= 0.5)
    {
        t0 = full_stance/2;
        double x = radius - (t - t0)*(2*radius/(0.5 - t0));

        return offset + Eigen::Vector3d(x, 0, 0);
    }
    else if (t <= 0.5 + full_stance/2)
    {        
        return offset + Eigen::Vector3d(-radius, 0, 0);
    }
    else
    {
        t0 = 0.5 + full_stance/2;

        double x = -radius + (t - t0)*(2*radius/(0.5 - t0));

        double z = max_height*(1 - std::pow(x/radius, 2));

        return offset + Eigen::Vector3d(x, 0, z);
    }
}

double smallestPositiveRoot(Eigen::Matrix<double, Eigen::Dynamic, 1> coeffs)
{
    Eigen::PolynomialSolver<double, Eigen::Dynamic> solver;
    
    solver.compute(coeffs);

    std::list<double> real_roots;

    solver.realRoots(real_roots);

    real_roots.sort();

    for (auto it = real_roots.begin(); it != real_roots.end(); ++it)
    {
        if ( *it >= 0)
        {
            return *it;
            break;
        }
    }
    return INFINITY;
}

double polynomialSpine(double t, double t_tot, double d_tot, double a_max, double v_rob)
{
    Eigen::Vector3d tr_coeffs(-d_tot - t_tot*v_rob, (2.0/3)*a_max*t_tot, (-4.0/3) + (8.0/9 - 4.0/15)*a_max);

    double t_r = smallestPositiveRoot(tr_coeffs);

    Eigen::PolynomialSolver<double, Eigen::Dynamic> solver;

    double a = -(2.0/3)*a_max/std::pow(t_r, 3);

    double b = (4.0/3)*a_max/t_r;

    double c = -v_rob;

    Eigen::Matrix<double, 5, 1> coeffs;

    coeffs << c , 0, b, 0, a;

    if (t <= t_r)
    {
        return Eigen::poly_eval(coeffs, t);
    }
    else if (t <= t_tot - t_r)
    {
        return Eigen::poly_eval(coeffs, t_r);
    }
    else
    {
        return Eigen::poly_eval(coeffs, t_tot - t);
    }
}