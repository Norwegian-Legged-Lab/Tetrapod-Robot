#ifndef utils_h
#define utils_h

#include<cmath>
#include "drake/common/symbolic.h"
#include<Eigen/Core>

#define _USE_MATH_DEFINES

double wrap(double num, double range=2*M_PI, double offset=-M_PI);

drake::symbolic::Expression drake_or(drake::symbolic::Variable &b1, drake::symbolic::Variable &b2);

drake::symbolic::Expression drake_and(drake::symbolic::Variable &b1, drake::symbolic::Variable &b2);

drake::symbolic::Expression drake_nor(drake::symbolic::Variable &b1, drake::symbolic::Variable &b2);

drake::symbolic::Expression drake_nand(drake::symbolic::Variable &b1, drake::symbolic::Variable &b2);

Eigen::MatrixXd get_sin_coeffs();

Eigen::MatrixXd get_cos_coeffs();
#endif
