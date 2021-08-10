#pragma once

#include <Eigen/Core>

#include<Eigen/Geometry>

#include<cmath>

#include<iostream>

class Polytope {
    public: Polytope();
    
    public: Polytope(Eigen::Matrix<double, Eigen::Dynamic, 2> points, double epsilon = 0);

    public: const Eigen::Matrix<double, Eigen::Dynamic, 2> &GetA() const {return this->A;}

    public: const Eigen::Matrix<double, Eigen::Dynamic, 1> &GetB() const {return this->b;}
    
    private: Eigen::Matrix<double, Eigen::Dynamic, 2> A;

    private: Eigen::Matrix<double, Eigen::Dynamic, 1> b;
};