#include <collocation_optimization_trajectory_planner/nonlinear_optimization_constraints.h>
 
namespace drake{
namespace solvers{

void DynamicsConstraint::DoEval(const Eigen::Ref< const Eigen::VectorXd > & x, Eigen::VectorXd *y) const {
    int nLambda = x.rows() - 3*Kinematics::nCoord - Kinematics::nActuation;
    
    Eigen::VectorXd q = x.topRows(Kinematics::nCoord);
    
    Eigen::VectorXd dq = x.middleRows(Kinematics::nCoord, Kinematics::nCoord);
    
    Eigen::VectorXd ddq = x.middleRows(2*Kinematics::nCoord, Kinematics::nCoord);
    
    Eigen::VectorXd u = x.middleRows(3*Kinematics::nCoord, Kinematics::nActuation);
    
    Eigen::VectorXd lambda = x.bottomRows(nLambda);

    Eigen::Matrix<double, Kinematics::nCoord, Kinematics::nCoord> M;

    Eigen::Matrix<double, Kinematics::nCoord, 1> H;
    
    Eigen::Matrix<double, Eigen::Dynamic, Kinematics::nCoord> J_v;

    Eigen::Matrix<double, Kinematics::nCoord, Kinematics::nActuation> B;

    Eigen::Matrix<double, Kinematics::nCoord, 1> F_dyn;

    M = this->kinematics.GetMassMatrix(q);

    H = this->kinematics.GetCoriolisAndCentrifugalTerms(q, dq) + this->kinematics.GetGravitationalTerms(q);

    for (int i = 0; i < this->constraintLegs.rows(); ++i){
        J_v.middleRows(i*3, 3) = this->kinematics.GetTranslationJacobianInW(this->constraintLegs(i), Kinematics::BodyType::foot, q);
    }

    B.setZero();

    B.bottomRows(Kinematics::nActuation).setIdentity();

    F_dyn = M*ddq + H - B*u - J_v.transpose()*lambda;

    *y = F_dyn;

    return;
}

}//namespace solvers
}//namespace drake
