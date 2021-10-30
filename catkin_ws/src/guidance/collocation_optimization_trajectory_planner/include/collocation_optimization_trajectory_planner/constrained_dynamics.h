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
};