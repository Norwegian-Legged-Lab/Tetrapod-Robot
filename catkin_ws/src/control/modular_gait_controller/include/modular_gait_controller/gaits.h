#pragma once

#include <cmath>
#include <Eigen/Core>
#include "kinematics/kinematics.h"
#include <eigen3/unsupported/Eigen/Polynomials>

Eigen::Vector3d classicGait(double t, Kinematics::LegType leg);

double polynomialSpine(double t, double t_tot, double d_tot, double a_max, double v_rob);

void CalculatePolynomialTrajectory(double t, double swing_period, double rise_percentage, double distance, double vel_cmd, double &_pos, double &_vel, double &_acc, double &_jerk);

void CalculateFourthOrderPolynomialTrajectory(double t, double swing_period, double distance, double &_pos, double &_vel, double _acc);