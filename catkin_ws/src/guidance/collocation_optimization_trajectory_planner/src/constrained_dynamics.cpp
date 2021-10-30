#include <collocation_optimization_trajectory_planner/constrained_dynamics.h>

//TODO: change kinematics instance to const ref after fixing const functions in kinematics.h/kinematics.cpp


Eigen::VectorXd ConstrainedDynamics::GetStateDynamicsImplicit(
    const Eigen::VectorXd& q, const Eigen::VectorXd& dq, const Eigen::VectorXd& ddq,
    const Eigen::VectorXd& u, const Eigen::VectorXd& lambda, Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs
)
{
    Eigen::Matrix<double, nCoord, nCoord> M = GetMassMatrix(q);

    Eigen::Matrix<double, nCoord, 1> H = GetCoriolisAndCentrifugalTerms(q, dq) + GetGravitationalTerms(q);

    Eigen::Matrix<double, nCoord, nActuation> B = Eigen::Matrix<double, nCoord, nActuation>::Zero();

    B.bottomRows(nActuation).setIdentity();

    int constraint_legs_count = constraint_legs.rows();

    Eigen::Matrix<double, Eigen::Dynamic, nCoord> J_c = Eigen::Matrix<double, Eigen::Dynamic, nCoord>::Zero(3*constraint_legs_count);

    for (int i = 0; i < constraint_legs_count; ++i){
        J_c.middleRows(3*i, 3) = GetTranslationJacobianInW(constraint_legs(i), Kinematics::BodyType::foot, q);
    }

    return M*ddq + H - B*u - J_c.transpose()*lambda;
}

Eigen::VectorXd ConstrainedDynamics::GetConstraintDynamicsImplicit(
    const Eigen::VectorXd& q, const Eigen::VectorXd& dq, const Eigen::VectorXd& ddq, Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs
)
{
        
    int constraint_legs_count = constraint_legs.rows();

    Eigen::Matrix<double, Eigen::Dynamic, nCoord> J_c = Eigen::Matrix<double, Eigen::Dynamic, nCoord>::Zero(3*constraint_legs_count);

    Eigen::Matrix<double, Eigen::Dynamic, nCoord> J_c_diff = Eigen::Matrix<double, Eigen::Dynamic, nCoord>::Zero(3*constraint_legs_count);

    for (int i = 0; i < constraint_legs_count; ++i){
        J_c.middleRows(3*i, 3) = GetTranslationJacobianInW(constraint_legs(i), BodyType::foot, q);

        J_c_diff.middleRows(3*i, 3) = GetTranslationJacobianInWDiff(constarint_leg(i), BodyType::foot, q, dq);
    }

    return J_c*ddq + J_c_diff*dq;
}

Eigen::VectorXd ConstrainedDynamics::GetStateDynamicsImplicitJacobianQ(//TODO: Implement
    const Eigen::VectorXd& q, const Eigen::VectorXd& dq, const Eigen::VectorXd& ddq,
    const Eigen::VectorXd& u, const Eigen::VectorXd& lambda, Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs)
{
    
}

Eigen::VectorXd ConstrainedDynamics::GetStateDynamicsImplicitJacobianDq(//TODO: Implement
    const Eigen::VectorXd& q, const Eigen::VectorXd& dq, const Eigen::VectorXd& ddq,
    const Eigen::VectorXd& u, const Eigen::VectorXd& lambda, Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs)
{
    
}

Eigen::VectorXd ConstrainedDynamics::GetStateDynamicsImplicitJacobianDdq(//TODO: Implement
    const Eigen::VectorXd& q, const Eigen::VectorXd& dq, const Eigen::VectorXd& ddq,
    const Eigen::VectorXd& u, const Eigen::VectorXd& lambda, Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs)
{
    
}

Eigen::VectorXd ConstrainedDynamics::GetStateDynamicsImplicitJacobianU(//TODO: Implement
    const Eigen::VectorXd& q, const Eigen::VectorXd& dq, const Eigen::VectorXd& ddq,
    const Eigen::VectorXd& u, const Eigen::VectorXd& lambda, Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs)
{
    
}

Eigen::VectorXd ConstrainedDynamics::GetStateDynamicsImplicitJacobianLambda(//TODO: Implement
    const Eigen::VectorXd& q, const Eigen::VectorXd& dq, const Eigen::VectorXd& ddq,
    const Eigen::VectorXd& u, const Eigen::VectorXd& lambda, Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs)
{
    
}

Eigen::VectorXd ConstrainedDynamics::GetConstraintDynamicsImplicitJacobianQ(//TODO: Implement
    const Eigen::VectorXd& q, const Eigen::VectorXd& dq, const Eigen::VectorXd& ddq,
    Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs)
{
    
}

Eigen::VectorXd ConstrainedDynamics::GetConstraintDynamicsImplicitJacobianDq(//TODO: Implement
    const Eigen::VectorXd& q, const Eigen::VectorXd& dq, const Eigen::VectorXd& ddq,
    Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs)
{
    
}

Eigen::VectorXd ConstrainedDynamics::GetConstraintDynamicsImplicitJacobianDdq(//TODO: Implement
    const Eigen::VectorXd& q, const Eigen::VectorXd& dq, const Eigen::VectorXd& ddq,
    Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs)
{
    
}
