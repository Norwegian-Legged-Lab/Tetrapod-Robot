#pragma once

#include <Eigen/Core>

#include<cmath>

class polytope {
    public: polytope(Eigen::Matrix<Eigen::Vector2d, Eigen::Dynamic, 1> points, double epsilon = 0);

    private: Eigen::Matrix<double, Eigen::Dynamic, 2> A;
    private: Eigen::Matrix<double, Eigen::Dynamic, 1> b;
};