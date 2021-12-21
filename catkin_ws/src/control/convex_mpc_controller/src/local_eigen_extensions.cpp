#include<convex_mpc_controller/local_eigen_extensions.h>

namespace Eigen{
namespace LocalExtensions{
VectorXd Arange(const double &low, const double &high, const double &delta_t){
    int size = (high - low)/delta_t;
    return VectorXd::LinSpaced(size + 1, low, low + size*delta_t);
}

Eigen::Matrix3d EulerAnglesToRotMatIntrinsic(
    const Vector3d &angles,
    int axis_1,
    int axis_2,
    int axis_3)
{
    return Eigen::AngleAxisd(angles(0), Eigen::Vector3d::Unit(axis_1)).toRotationMatrix()*Eigen::AngleAxisd(angles(1), Eigen::Vector3d::Unit(axis_2)).toRotationMatrix()*Eigen::AngleAxisd(angles(2), Eigen::Vector3d::Unit(axis_3)).toRotationMatrix();
}

Eigen::Matrix3d EulerAnglesToRotMat(
    const Vector3d &angles,
    EulerAngleOrder order,
    int axis_1,
    int axis_2,
    int axis_3)
{
    switch(order){
        case intrinsic: return EulerAnglesToRotMatIntrinsic(angles, axis_1, axis_2, axis_3);
        case extrinsic: return EulerAnglesToRotMatIntrinsic(angles.reverse(), axis_3, axis_2, axis_1);
    }
    return EulerAnglesToRotMatIntrinsic(angles, axis_1, axis_2, axis_3);
}

Vector3d RotMatToEulerAnglesIntrinsic(
    const Matrix3d &rotmat,
    int axis_1,
    int axis_2,
    int axis_3)
{
    
    Vector3d angles;
    std::string error_string = "RotMatToEulerAnglesIntrinsic: this set of EA axes are not yet implemented: " + std::to_string(axis_1) + "," + std::to_string(axis_2) + "," + std::to_string(axis_3);
    
    switch(axis_1){
        case 0:{
            switch(axis_2){
                case 1:{
                    switch(axis_3){
                        case 2:{
                            //intrinsic XYZ
                            angles(1) = std::asin(rotmat(0,2));

                            //As pitch is given to be in the range (-pi/2, pi/2), cosine is always geq 0. thus, no need to normalize.
                            angles(0) = std::atan2(-rotmat(1,2), rotmat(2,2));
                            
                            angles(2) = std::atan2(-rotmat(0,1), rotmat(0,0));
                        }break;
                        default: throw std::runtime_error(error_string);
                    }
                }break;
                default: throw std::runtime_error(error_string);
            }
        }break;
        case 2:{
            switch(axis_2){
                case 1:{
                    switch(axis_3){
                        case 0:{
                            //intrinsic ZYX
                            angles(1) = std::asin(-rotmat(2,0));

                            //As pitch is given to be in the range (-pi/2, pi/2), cosine is always geq 0. thus, no need to normalize.
                            angles(0) = std::atan2(rotmat(1,0), rotmat(0,0));

                            angles(2) = std::atan2(rotmat(2,1), rotmat(2,2));
                        }break;
                        default: throw std::runtime_error(error_string);
                    }
                }break;
                default: throw std::runtime_error(error_string);
            }
        }break;
        default: throw std::runtime_error(error_string);
    }
    return angles;
}

Vector3d RotMatToEulerAngles(
    const Matrix3d &rotmat,
    EulerAngleOrder order, 
    int axis_1,
    int axis_2,
    int axis_3)
{
    switch(order){
        case intrinsic: return RotMatToEulerAnglesIntrinsic(rotmat, axis_1, axis_2, axis_3);
        case extrinsic: return RotMatToEulerAnglesIntrinsic(rotmat, axis_3, axis_2, axis_1).reverse();
    }
    //default case shouldnt be necessary, but required to stop the compiler from complaining
    return RotMatToEulerAnglesIntrinsic(rotmat, axis_1, axis_2, axis_3);
}


Vector3d ConvertEulerAngles(
    const Vector3d &angles_in,
    EulerAngleOrder order_in,
    int axis_1_in,
    int axis_2_in,
    int axis_3_in,
    EulerAngleOrder order_out,
    int axis_1_out,
    int axis_2_out,
    int axis_3_out)
{
    Matrix3d rotmat;
    switch(order_in){
        case intrinsic:{
            rotmat = (AngleAxisd(angles_in(0), Vector3d::Unit(axis_1_in))*AngleAxisd(angles_in(1), Vector3d::Unit(axis_2_in))*AngleAxisd(angles_in(2), Vector3d::Unit(axis_3_in))).toRotationMatrix();
        }break;
        case extrinsic:{
            rotmat = (AngleAxisd(angles_in(2), Vector3d::Unit(axis_3_in))*AngleAxisd(angles_in(1), Vector3d::Unit(axis_2_in))*AngleAxisd(angles_in(0), Vector3d::Unit(axis_1_in))).toRotationMatrix();
        }break;
    }

    Vector3d angles_out = RotMatToEulerAngles(rotmat, order_out, axis_1_out, axis_2_out, axis_3_out);

    return angles_out;
}

Matrix3d GeometricOrientationalJacobianIntrinsic(
    const Vector3d &angles,
    int axis_1,
    int axis_2,
    int axis_3)
{
    Matrix3d J;

    Vector3d axis_1_w = Vector3d::Unit(axis_1);

    Matrix3d rmat_1 = AngleAxisd(angles(0), Vector3d::Unit(axis_1)).toRotationMatrix();

    Vector3d axis_2_w = rmat_1.col(axis_2);

    Vector3d axis_3_w = (rmat_1*AngleAxisd(angles(1), Vector3d::Unit(axis_2)).toRotationMatrix()).col(axis_3);

    J << axis_1_w, axis_2_w, axis_3_w;

    return J;
}

Matrix3d GeometricOrientationalJacobian(
    const Vector3d &angles,
    EulerAngleOrder order,
    int axis_1,
    int axis_2,
    int axis_3)
{
    Matrix3d J;

    switch (order)
    {
    case intrinsic:{
        J = GeometricOrientationalJacobianIntrinsic(angles, axis_1, axis_2, axis_3);
    }break;
    
    case extrinsic:{
        J = (GeometricOrientationalJacobianIntrinsic(angles.reverse(), axis_3, axis_2, axis_1)).rowwise().reverse(); //use that extrinsic abc = intrinsic cba
    }break;
    }

    return J;
}

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
    int axis_3_out)
{
    Vector3d angles_out = ConvertEulerAngles(angles_in, order_in, axis_1_in, axis_2_in, axis_3_in, order_out, axis_1_out, axis_2_out, axis_3_out);

    Matrix3d geometric_jacobian_in = GeometricOrientationalJacobian(angles_in, order_in, axis_1_in, axis_2_in, axis_3_in);

    Matrix3d geometric_jacobian_out = GeometricOrientationalJacobian(angles_out, order_out, axis_1_out, axis_2_out, axis_3_out);

    return geometric_jacobian_out.colPivHouseholderQr().solve(geometric_jacobian_in*angles_in_diff);// both J1*angles1 and J2*angles2 equal angular velocity
}

Matrix<double, 12, 1> ConvertBodyState(
    const Matrix<double, 12, 1> &body_state_in,
    EulerAngleOrder order_in,
    int axis_1_in,
    int axis_2_in,
    int axis_3_in,
    EulerAngleOrder order_out,
    int axis_1_out,
    int axis_2_out,
    int axis_3_out)
{
    Matrix<double, 6, 1> body_pose_in = body_state_in.topRows(6);
    Matrix<double, 6, 1> body_pose_in_diff = body_state_in.bottomRows(6);

    Matrix<double, 6, 1> body_pose_out;
    Matrix<double, 6, 1> body_pose_out_diff;

    Vector3d angles_out = ConvertEulerAngles(body_pose_in.bottomRows(3), order_in, axis_1_in, axis_2_in, axis_3_in,
        order_out, axis_1_out, axis_2_out, axis_3_out);
    
    Vector3d angles_out_diff = ConvertEulerAnglesDiff(body_pose_in.bottomRows(3), body_pose_in_diff.bottomRows(3),
        order_in, axis_1_in, axis_2_in, axis_3_in,
        order_out, axis_1_out, axis_2_out, axis_3_out);
    
    Matrix<double, 12, 1> body_state_out;

    body_pose_out << body_pose_in.topRows(3), angles_out;

    body_pose_out_diff << body_pose_in_diff.topRows(3), angles_out_diff;

    body_state_out << body_pose_out, body_pose_out_diff;
    return body_state_out;
}

Matrix<double, 12, 1> GazeboToMpcBodyState(const Matrix<double, 12, 1> &gazebo_state){
    //gazebo uses intrinsic XYZ
    EulerAngleOrder gazebo_order = intrinsic;
    int axis_1_gazebo = 0;
    int axis_2_gazebo = 1;
    int axis_3_gazebo = 2;
    //Mpc must use extrinsic XYZ for linearization reasons (of course intrinsic ZYX would be equivalent, but is not used in formulation)
    EulerAngleOrder mpc_order = extrinsic;
    int axis_1_mpc = 0;
    int axis_2_mpc = 1;
    int axis_3_mpc = 2;
    return ConvertBodyState(gazebo_state, gazebo_order, axis_1_gazebo, axis_2_gazebo, axis_3_gazebo,
        mpc_order, axis_1_mpc, axis_2_mpc, axis_3_mpc);
}

Matrix<double, 12, 1> MpcToGazeboBodyState(const Matrix<double, 12, 1> &mpc_body_state){
    //gazebo uses intrinsic XYZ
    EulerAngleOrder gazebo_order = intrinsic;
    int axis_1_gazebo = 0;
    int axis_2_gazebo = 1;
    int axis_3_gazebo = 2;
    //Mpc must use extrinsic XYZ for linearization reasons (of course intrinsic ZYX would be equivalent, but is not used in formulation)
    EulerAngleOrder mpc_order = extrinsic;
    int axis_1_mpc = 0;
    int axis_2_mpc = 1;
    int axis_3_mpc = 2;
    return ConvertBodyState(mpc_body_state, mpc_order, axis_1_mpc, axis_2_mpc, axis_3_mpc,
        gazebo_order, axis_1_gazebo, axis_2_gazebo, axis_3_gazebo);
}


}//LocalExtensions
}//Eigen