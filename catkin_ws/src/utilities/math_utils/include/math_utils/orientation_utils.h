#pragma once

#include <Eigen/Core>

#include <cmath>

double nominalOrientation(Eigen::Vector3d base, Eigen::Matrix<Eigen::Vector3d, 4, 1> fPos, Eigen::Vector4d angle_offsets);

double angleMean(const Eigen::VectorXd &angles);