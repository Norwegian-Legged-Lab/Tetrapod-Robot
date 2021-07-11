#include "modular_gait_controller/gait_controller.h"
#include "modular_gait_controller/gaits.h"
#include <list>
#include<iostream>
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

    std::cout << "t_tot: " << t_tot << " t_r: " <<t_r << std::endl;
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

/*
bool CalculatePolynomialTrajectory(double t, double T_end, double distance, double acc_max, double vel_cmd, double &_pos, double &_vel, double &_acc, double &_jerk)
{
    Eigen::Vector3d T_rise_coeffs(- distance - T_end * vel_cmd, (2.0/3) * acc_max*T_end, (-4.0/3) + (8.0/9 - 4.0/15) * acc_max);

    double T_rise = smallestPositiveRoot(T_rise_coeffs);

    Eigen::PolynomialSolver<double, Eigen::Dynamic> solver; 

    double a = -(2.0/3.0) * acc_max / std::pow(T_rise, 3);

    double b = (4.0/3.0) * acc_max/T_rise;

    double c = - vel_cmd;

    ROS_INFO("a: %f, b: %f, c: %f", a, b, c);

    Eigen::Matrix<double, 6, 1> pos_coefficients;

    Eigen::Matrix<double, 5, 1> vel_coefficients;

    Eigen::Matrix<double, 4, 1> acc_coefficients;

    Eigen::Matrix<double, 3, 1> jerk_coefficients;

    pos_coefficients << 0, c, 0, b/3.0, 0, a/5.0;

    vel_coefficients << c, 0, b, 0, a;

    acc_coefficients << 0, 2*b, 0, 4*a;

    jerk_coefficients << 2*b, 0, 12*a;

    if(T_rise > T_end/2.0)
    {
        ROS_WARN("CalculatePolynomialTrajectory: Invalid set of input parameters");

        return false;
    }
    else
    {
        if(t <= T_rise)
        {
            _pos = Eigen::poly_eval(pos_coefficients, t);
            _vel = Eigen::poly_eval(vel_coefficients, t);
            _acc = Eigen::poly_eval(acc_coefficients, t);
            _jerk = Eigen::poly_eval(jerk_coefficients, t);
        }
        else if (t <= T_end - T_rise)
        {
            _pos = Eigen::poly_eval(pos_coefficients, T_rise) + Eigen::poly_eval(vel_coefficients, T_rise) * (t - T_rise);
            _vel = Eigen::poly_eval(vel_coefficients, T_rise);
            _acc = Eigen::poly_eval(acc_coefficients, T_rise); // Should be zero
            _jerk = Eigen::poly_eval(jerk_coefficients, T_rise); 
        }
        else
        {
            _pos = Eigen::poly_eval(pos_coefficients, T_rise) + Eigen::poly_eval(vel_coefficients, T_rise) * (T_end - 2 * T_rise) + (Eigen::poly_eval(pos_coefficients, t - T_end) - Eigen::poly_eval(pos_coefficients, - T_rise));
            _vel = Eigen::poly_eval(vel_coefficients, t - T_end);
            _acc = Eigen::poly_eval(acc_coefficients, t - T_end);
            _jerk = Eigen::poly_eval(jerk_coefficients, t - T_end);
        }

        return true;
    }
}
*/

void CalculatePolynomialTrajectory(double t, double swing_period, double rise_percentage, double distance, double vel_cmd, double &_pos, double &_vel, double &_acc, double &_jerk)
{
    if(distance == 0.0)
    {
        // Can do something more fancy here, like moving towards the nominal position
        _pos = 0.0;
        _vel = 0.0;
        _acc = 0.0;
        _jerk = 0.0;
    }
    else
    {    
        double rise_period = swing_period * rise_percentage;

        double high_period = swing_period - 2.0 * rise_period;

        double beta = 1.0/(1.0/rise_percentage - 2.0);

        double rise_distance = (- vel_cmd * rise_period + 8.0 / 7.0 * beta * distance) / (15.0 / 7.0 + beta * 16.0 / 7.0);

        double c = beta * (distance - 2.0 * rise_distance) / rise_distance;

        double a = 15.0 / 7.0 * (c - 1.0);

        double d = 1.0 - c;

        double b = - 2.0 * a;

        Eigen::Matrix<double, 6, 1> pos_coefficients;

        Eigen::Matrix<double, 5, 1> vel_coefficients;

        Eigen::Matrix<double, 4, 1> acc_coefficients;

        Eigen::Matrix<double, 3, 1> jerk_coefficients;

        pos_coefficients << d, c, 0, b/3.0, 0, a/5.0;

        vel_coefficients << c, 0, b, 0, a;

        acc_coefficients << 0, 2.0*b, 0, 4.0*a;

        jerk_coefficients << 2.0*b, 0, 12.0*a;

        if(t <= rise_period)
        {
            double x = t / rise_period;

            
            _pos = rise_distance * (a / 5.0 * pow(x - 1.0, 5) + b / 3.0 * pow(x - 1.0, 3) + c * x + d);
            /*
            _vel = rise_distance / rise_period * (a * pow(x - 1, 4) + b * pow(x - 1, 2) + c);
            _acc = rise_distance / pow(rise_period, 2) * (4.0 * a * pow(x - 1.0, 3) + 2.0 * b * (x - 1.0));
            _jerk = rise_distance / pow(rise_period, 3) * (12.0 * a * pow(x - 1.0, 2) + 2.0 * b);
            */

            //_pos = rise_distance * Eigen::poly_eval(pos_coefficients, x - 1.0);
            _vel = rise_distance / rise_period * Eigen::poly_eval(vel_coefficients, x - 1.0);
            _acc = rise_distance / pow(rise_period, 2) * Eigen::poly_eval(acc_coefficients, x - 1.0);
            _jerk = rise_distance / pow(rise_period, 3) * Eigen::poly_eval(jerk_coefficients, x - 1.0);
        
        }
        else if (t <= rise_period + high_period)
        {
            _pos = rise_distance * (a / 5.0 * pow(0.0, 5) + b / 3.0 * pow(0.0, 3) + c * 1.0 + d)  + rise_distance / rise_period * Eigen::poly_eval(vel_coefficients, 0.0) * (t - rise_period);
            _vel = rise_distance / rise_period * Eigen::poly_eval(vel_coefficients, 0.0);
            _acc = rise_distance / pow(rise_period, 2.0) * Eigen::poly_eval(acc_coefficients, 0.0); // Should be zero
            _jerk = rise_distance / pow(rise_period, 3.0) * Eigen::poly_eval(jerk_coefficients, 0.0); 
        }
        else
        {
            double x = (t - high_period) / rise_period;

            _pos = _pos = rise_distance * (a / 5.0 * pow(x - 1.0, 5) + b / 3.0 * pow(x - 1.0, 3) + c * x + d) + rise_distance / rise_period * Eigen::poly_eval(vel_coefficients, 0.0) * high_period;
            _vel = rise_distance / rise_period * Eigen::poly_eval(vel_coefficients, x - 1.0);
            _acc = rise_distance / pow(rise_period, 2) * Eigen::poly_eval(acc_coefficients, x - 1.0);
            _jerk = rise_distance / pow(rise_period, 3) * Eigen::poly_eval(jerk_coefficients, x - 1.0);
        }
    }
}

void CalculateFourthOrderPolynomialTrajectory(double t, double swing_period, double distance, double &_pos, double &_vel, double _acc)
{
    double a = 1.0;
    double b = - 2.0;
    double c = 1.0;

    double rise_period = swing_period / 2.0;

    double x = t/rise_period - 1.0;

    _pos = distance * (a * pow(x, 4) + b * pow(x, 2) + c);

    _vel = distance / rise_period * (4.0 * a * pow(x, 3) + 2.0 * b * x);

    _acc = distance / pow(rise_period, 2) * (12.0 * pow(x, 2) + 2 * b); 
    
    ROS_INFO("Height - pos: %f, vel: %f, acc: %f, x: %f, dis: %f", _pos, _vel, _acc, x, distance);
}