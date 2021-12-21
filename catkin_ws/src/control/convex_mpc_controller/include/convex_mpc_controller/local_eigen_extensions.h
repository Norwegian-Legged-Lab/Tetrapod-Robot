#pragma once

#include<Eigen/Core>
#include<Eigen/Geometry>
#include<ros/ros.h>
#include<cmath>
#include<stdexcept>
#include<string>

namespace Eigen{
namespace LocalExtensions{

enum EulerAngleOrder {intrinsic, extrinsic};

VectorXd Arange(const double &low, const double &high, const double &delta_t);

Eigen::Matrix3d EulerAnglesToRotMat(
    const Vector3d &angles,
    EulerAngleOrder order,
    int axis_1,
    int axis_2,
    int axis_3);

//because eigen's euler angles function gives angles between 0 and pi, instead of between -pi/2, pi/2. For now, range specification is not allowed, but may be implemented later
Vector3d RotMatToEulerAngles(
    const Matrix3d &R,
    EulerAngleOrder order, 
    int axis_1,
    int axis_2,
    int axis_3);

Vector3d ConvertEulerAngles(
    const Vector3d &angles_in,
    EulerAngleOrder order_in,
    int axis_1_in,
    int axis_2_in,
    int axis_3_in,
    EulerAngleOrder order_out,
    int axis_1_out,
    int axis_2_out,
    int axis_3_out);

Matrix3d GeometricOrientationalJacobian(
    const Vector3d &angles,
    EulerAngleOrder order,
    int axis_1,
    int axis_2,
    int axis_3);

Vector3d ConvertEulerAnglesDiff(
    const Vector3d &angles_in,
    const Vector3d &angles_in_diff,
    EulerAngleOrder order_in,
    int axis_1_in,
    int axis_2_in,
    int axis_3_in,
    EulerAngleOrder order_out,
    int axis_1_out,
    int axis_2_out,
    int axis_3_out);

Matrix<double, 12, 1> ConvertBodyState(
    const Matrix<double, 12, 1> &body_state_in,
    EulerAngleOrder order_in,
    int axis_1_in,
    int axis_2_in,
    int axis_3_in,
    EulerAngleOrder order_out,
    int axis_1_out,
    int axis_2_out,
    int axis_3_out);

Matrix<double, 12, 1> GazeboToMpcBodyState(const Matrix<double, 12, 1> &gazebo_body_state);

Matrix<double, 12, 1> MpcToGazeboBodyState(const Matrix<double, 12, 1> &mpc_body_state);

}//LocalExtensions
}//Eigen