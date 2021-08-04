#pragma once

#include <Eigen/Core>

#include<cmath>

Eigen::Vector3d parabolic_step(double s, double h, const Eigen::Vector3d &start, const Eigen::Vector3d &end);

Eigen::Vector3d parabolic_step_velocity(double s, double h, const Eigen::Vector3d &start, const Eigen::Vector3d &end);

Eigen::Vector3d parabolic_step_acceleration(double s, double h, const Eigen::Vector3d &start, const Eigen::Vector3d &end);