#pragma once

#include <Eigen/Core>

#include <string>

#include <fstream>

#include "ros/console.h"

#include "support_polytope_base_planner/polytope.h"

#include "footstep_planner/utils.h"

class Polytopes{
    public: Polytopes(Eigen::Matrix<double, Eigen::Dynamic, 2> points, double epsilon = 0, bool skip_first = false);

    public: const Eigen::Matrix<Polytope, Eigen::Dynamic, 1> &getPolytopes() const {return this->polytope_list;}

    private: Eigen::Matrix<Polytope, Eigen::Dynamic, 1> polytope_list;

    public: void writePolytopesTofile(std::string base_name);
};