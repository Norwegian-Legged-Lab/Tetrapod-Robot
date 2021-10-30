#include <kinematics/kinematics.h>

#include <drake/solvers/constraint.h>

// Eigen
#include <Eigen/Core>

namespace drake{
namespace solvers{

class DynamicsConstraint: Constraint {
    DynamicsConstraint(Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs)
    : Constraint(Eigen::Dynamic, Eigen::Dynamic) {this->constraintLegs = constraint_legs;}

    public: void DoEval(const Eigen::Ref< const Eigen::VectorXd > & x, Eigen::VectorXd *y) const;

    private: Kinematics kinematics;

    private: Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraintLegs;
};

}//namespace solvers
}//namespace drake