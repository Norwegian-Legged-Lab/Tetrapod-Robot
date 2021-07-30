#pragma once

#include <Eigen/Core>

#include "support_polytope_base_planner/polytope.h"

class polytopes{
    public: polytopes(Eigen::Matrix<Eigen::Vector2d, Eigen::Dynamic, 1> points, double epsilon = 0, bool skip_first = false);

    private: Eigen::Matrix<polytope, Eigen::Dynamic, 1> polytope_list;
};