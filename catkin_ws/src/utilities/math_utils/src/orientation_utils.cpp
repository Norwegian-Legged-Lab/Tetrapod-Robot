#include "math_utils/orientation_utils.h"
#include<iostream>
double nominalOrientation(Eigen::Vector3d base, Eigen::Matrix<Eigen::Vector3d, 4, 1> fPos, Eigen::Vector4d angle_offsets)
{
    Eigen::Vector4d angles_rectified;

    for (int i = 0; i < 4; ++i)
    {
        Eigen::Vector3d error_vec = fPos(i) - base;
        
        angles_rectified(i) = std::atan2(error_vec(1), error_vec(0)) - angle_offsets(i);
    }
    return angles_rectified.mean();
}

double angleMean(const Eigen::VectorXd &angles)
{
    return angles.mean();
}