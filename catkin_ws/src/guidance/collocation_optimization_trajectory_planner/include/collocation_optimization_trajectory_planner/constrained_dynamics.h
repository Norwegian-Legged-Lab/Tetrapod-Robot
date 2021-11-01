#pragma once

#include <Eigen/Core>

#include <kinematics/kinematics.h>

class ConstrainedDynamics: public Kinematics{
    public:

    Eigen::VectorXd GetStateDynamicsImplicit(
        const Eigen::VectorXd& q, const Eigen::VectorXd& dq, const Eigen::VectorXd& ddq,
        const Eigen::VectorXd& u, const Eigen::VectorXd& lambda, Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs);

    Eigen::VectorXd GetConstraintDynamicsImplicit(
        const Eigen::VectorXd& q, const Eigen::VectorXd& dq, const Eigen::VectorXd& ddq,
        Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs);
    
    Eigen::VectorXd GetStateDynamicsImplicitJacobianQ(
        const Eigen::VectorXd& q, const Eigen::VectorXd& dq, const Eigen::VectorXd& ddq,
        const Eigen::VectorXd& u, const Eigen::VectorXd& lambda, Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs);

    Eigen::VectorXd GetStateDynamicsImplicitJacobianDq(
        const Eigen::VectorXd& q, const Eigen::VectorXd& dq, const Eigen::VectorXd& ddq,
        const Eigen::VectorXd& u, const Eigen::VectorXd& lambda, Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs);
    
    Eigen::VectorXd GetStateDynamicsImplicitJacobianDdq(
        const Eigen::VectorXd& q, const Eigen::VectorXd& dq, const Eigen::VectorXd& ddq,
        const Eigen::VectorXd& u, const Eigen::VectorXd& lambda, Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs);

    Eigen::VectorXd GetStateDynamicsImplicitJacobianU(
        const Eigen::VectorXd& q, const Eigen::VectorXd& dq, const Eigen::VectorXd& ddq,
        const Eigen::VectorXd& u, const Eigen::VectorXd& lambda, Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs);
    
    Eigen::VectorXd GetStateDynamicsImplicitJacobianLambda(
        const Eigen::VectorXd& q, const Eigen::VectorXd& dq, const Eigen::VectorXd& ddq,
        const Eigen::VectorXd& u, const Eigen::VectorXd& lambda, Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs);

    Eigen::VectorXd GetConstraintDynamicsImplicitJacobianQ(
        const Eigen::VectorXd& q, const Eigen::VectorXd& dq, const Eigen::VectorXd& ddq,
        Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs);

    Eigen::VectorXd GetConstraintDynamicsImplicitJacobianDq(
        const Eigen::VectorXd& q, const Eigen::VectorXd& dq, const Eigen::VectorXd& ddq,
        Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs);

    Eigen::VectorXd GetConstraintDynamicsImplicitJacobianDdq(
        const Eigen::VectorXd& q, const Eigen::VectorXd& dq, const Eigen::VectorXd& ddq,
        Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs);

    // 3x18 Translation Hessian times generalized acceleration in world frame
    Eigen::Matrix<double, 3, 18> GetTranslationHessianInWTimesAcceleration(const LegType &_leg,
                                                                        const BodyType &_body,
                                                                        const Eigen::Matrix<double, 18, 1> &_q,
                                                                        const Eigen::Matrix<double, 18, 1> &_ddq);
    // 3x18 Rotational Hessian times generalized acceleration in world frame
    Eigen::Matrix<double, 3, 18> GetRotationHessianInWTimesAcceleration(const LegType &_leg,
                                                                                    const BodyType &_body,
                                                                                    const Eigen::Matrix<double, 18, 1> &_q,
                                                                                    const Eigen::Matrix<double, 18, 1> &_ddq);

    Eigen::Matrix<double, 18, 18> GetSingleBodyMassMatrixJacobianTimesAcceleration(const LegType &_leg,
                                                                            const BodyType &_body,
                                                                            const Eigen::Matrix<double, 18, 1> &_q,
                                                                            const Eigen::Matrix<double, 18, 1> &_ddq);
    
    Eigen::Matrix<double, 18, 18> GetMassMatrixTimesJacobianTimesAcceleration(const Eigen::Matrix<double, 18, 1> &_q, const Eigen::Matrix<double, 18, 1> &_ddq);

};