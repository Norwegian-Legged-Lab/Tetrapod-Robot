#include <include/kinematics/kinematics.h>

#include <drake/solvers/constraint.h>

// Eigen
#include <Eigen/Core>

namespace drake{
namespace solvers{
namespace constraint{

class DynamicsConstraint: Constraint {
    void DynamicsConstraint(Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs)
    : Constraint(Eigen::Dynamic, Eigen::Dynamic) {this->constraintLegs = constraint_legs;}

    public: bool DoCheckSatisfied(const Eigen::Ref< const Eigen::VectorXd > & x, const double tol) const;

    private: Kinematics kinematics;

    private: Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraintLegs;
}

}
}
}