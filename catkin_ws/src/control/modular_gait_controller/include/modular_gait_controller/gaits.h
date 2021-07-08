#pragma once

#include <cmath>
#include <Eigen/Core>
#include "kinematics/kinematics.h"
#include <eigen3/unsupported/Eigen/Polynomials>

Eigen::Vector3d classicGait(double t, Kinematics::LegType leg);