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


// 3x18 Time derivative of the translation Jacobian in world frame
Eigen::Matrix<double, 3, 18> ConstrainedDynamics::GetTranslationHessianInWTimesAcceleration(const LegType &_leg,
                                                                       const BodyType &_body,
                                                                       const Eigen::Matrix<double, 18, 1> &_q,
                                                                       const Eigen::Matrix<double, 18, 1> &_ddq)
{
    //Not ideal, but alternative would be to copy all code to make the exactly same function with a different name. Perhaps yet another reason that AD would be the way to go
    return Kinematics::GetTranslationJacobianInWDiff(_leg, _body, _q, _ddq);
}

// 3x18 Time derivative of the rotational Jacobian in world frame
Eigen::Matrix<double, 3, 18> ConstrainedDynamics::GetRotationHessianInWTimesAcceleration(const LegType &_leg,
                                                                    const BodyType &_body,
                                                                    const Eigen::Matrix<double, 18, 1> &_q,
                                                                    const Eigen::Matrix<double, 18, 1> &_ddq)
{
    //Not ideal, but alternative would be to copy all code to make the exactly same function with a different name. Perhaps yet another reason that AD would be the way to go
    return Kinematics::GetRotationJacobianInWDiff(_leg, _body, _q, _ddq);
}

// Single body mass matrix
Eigen::Matrix<double, 18, 18> ConstrainedDynamics::GetSingleBodyMassMatrixJacobianTimesAcceleration(const LegType &_leg,
                                                                  const BodyType &_body,
                                                                  const Eigen::Matrix<double, 18, 1> &_q,
                                                                  const Eigen::Matrix<double, 18, 1> &_ddq)
{
    Eigen::Matrix<double, 3, 18> J_COM;  // Translation Jacobian about COM of the body
    Eigen::Matrix<double, 3, 18> J_R;    // Rotation Jacobian for the body

    Eigen::Matrix<double, 3, 18> H_COM_ddq; //Translation Hessian about COM of the body times generalized acceleration
    Eigen::Matrix<double, 3, 18> H_R_ddq; //Rotation Hessian for the body times generalized acceleration

    Eigen::Matrix<double, 3, 3> I_COM;   // Inertia matrix for the COM of the body

    double m; // Mass of the body

    J_COM = this->GetTranslationJacobianInW(_leg, _body, _q);
    J_R = this->GetRotationJacobianInW(_leg, _body, _q);

    H_COM_ddq = this->GetTranslationHessianInWTimesAcceleration(_leg, _body, _q, _ddq);
    H_R_ddq = this->GetRotationHessianInWTimesAcceleration(_leg, _body, _q, _ddq);

    I_COM = this->GetBodyInertia(_body, _leg);
    m = this->GetBodyMass(_body);

    return 2 * m * (J_COM.transpose() * H_COM_ddq) + J_R.transpose() * I_COM * H_R_ddq + J_R.transpose() * I_COM.transpose() * H_R_ddq;
}

// Mass matrix jacobian times acceleration
Eigen::Matrix<double, 18, 18> ConstrainedDynamics::GetMassMatrixTimesJacobianTimesAcceleration(const Eigen::Matrix<double, 18, 1> &_q, const Eigen::Matrix<double, 18, 1> &_ddq)
{
    Eigen::Matrix<double, 18, 18> J_M_ddq = Eigen::Matrix<double, 18, 18>::Constant(0); // Mass matrix jacobian times acceleration


    static const std::vector<BodyType> bodies{ BodyType::base,
                                               BodyType::hip,
                                               BodyType::thigh,
                                               BodyType::leg };

    static const std::vector<LegType> legs{ LegType::frontLeft, 
                                            LegType::frontRight,
                                            LegType::rearLeft,
                                            LegType::rearRight };

    for (const auto body : bodies)
    {
        if (body == BodyType::base)
        {
            J_M_ddq += this->GetSingleBodyMassMatrixJacobianTimesAcceleration(LegType::NONE, body, _q, _ddq);
        }
        else
        {
            for (const auto leg : legs)
            {
                J_M_ddq += this->GetSingleBodyMassMatrixJacobianTimesAcceleration(leg, body, _q, _ddq);
            }
        }
    }

    return J_M_ddq;
}

