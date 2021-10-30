#pragma once

#include <ifopt/constraint_set.h>
#include <ifopt/variable_set.h>
#include <kinematics/kinematics.h>
#include<variable_sets.h>
#include<string>
#include<collocation_optimization_trajectory_planner/constrained_dynamics.h>

namespace ifopt{

class NodeConstraintSet: public ConstraintSet{
    
    public:

    NodeConstraintSet(std::string name, int dimension, int domain_idx, int node_idx)
    : ConstraintSet(dimension, GetVariableName(name, domain_idx, node_idx)), domain_idx(domain_idx), node_idx(node_idx) {
        this->domain_idx = domain_idx;
        this->node_idx = node_idx;
    }

    static std::string GetVariableName(std::string name, int domain_idx, int node_idx) {
        return name + "_" + std::to_string(domain_idx) + "_" + std::to_string(node_idx);
    }

    protected:

    static ConstrainedDynamics constrainedDynamics;

    const int domain_idx;

    const int node_idx;
};

class DynamicsConstraintSet: public NodeConstraintSet{

    public:

    DynamicsConstraintSet(int domain_idx, int node_idx, Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs)
    : NodeConstraintSet("F_dynamics", Kinematics::nCoord, domain_idx, node_idx) {
        this->constraintLegs = constraint_legs;
    }

    VectorXd GetValues() const {

        Eigen::VectorXd q = GetVariables()->GetComponent(CoordVariableSet::GetVariableName(domain_idx, node_idx))->GetValues();

        Eigen::VectorXd dq = GetVariables()->GetComponent(VelVariableSet::GetVariableName(domain_idx, node_idx))->GetValues();

        Eigen::VectorXd ddq = GetVariables()->GetComponent(AccVariableSet::GetVariableName(domain_idx, node_idx))->GetValues();

        Eigen::VectorXd u = GetVariables()->GetComponent(InputVariableSet::GetVariableName(domain_idx, node_idx))->GetValues();

        Eigen::VectorXd lambda = GetVariables()->GetComponent(LambdaVariableSet::GetVariableName(domain_idx, node_idx))->GetValues();

        return constrainedDynamics.GetStateDynamicsImplicit(q, dq, ddq, u, lambda, constraintLegs);
    }

    void FillJacobianBlock(std::string var_set, Jacobian& jac_block) const{
        
        Eigen::VectorXd q = GetVariables()->GetComponent(CoordVariableSet::GetVariableName(domain_idx, node_idx))->GetValues();

        Eigen::VectorXd dq = GetVariables()->GetComponent(VelVariableSet::GetVariableName(domain_idx, node_idx))->GetValues();

        Eigen::VectorXd ddq = GetVariables()->GetComponent(AccVariableSet::GetVariableName(domain_idx, node_idx))->GetValues();

        Eigen::VectorXd u = GetVariables()->GetComponent(InputVariableSet::GetVariableName(domain_idx, node_idx))->GetValues();

        Eigen::VectorXd lambda = GetVariables()->GetComponent(LambdaVariableSet::GetVariableName(domain_idx, node_idx))->GetValues();

        if (var_set == CoordVariableSet::GetVariableName(domain_idx, node_idx)){
            jac_block = constrainedDynamics.GetStateDynamicsImplicitJacobianQ(q, dq, ddq, u, lambda, constraintLegs);
        } else if (var_set == VelVariableSet::GetVariableName(domain_idx, node_idx)){
            jac_block = constrainedDynamics.GetStateDynamicsImplicitJacobianDq(q, dq, ddq, u, lambda, constraintLegs);
        } else if (var_set == AccVariableSet::GetVariableName(domain_idx, node_idx)){
            jac_block = constrainedDynamics.GetStateDynamicsImplicitJacobianDdq(q, dq, ddq, u, lambda, constraintLegs);
        } else if (var_set == InputVariableSet::GetVariableName(domain_idx, node_idx)){
            jac_block = constrainedDynamics.GetStateDynamicsImplicitJacobianU(q, dq, ddq, u, lambda, constraintLegs);
        } else if (var_set == LambdaVariableSet::GetVariableName(domain_idx, node_idx)){
            jac_block = constrainedDynamics.GetStateDynamicsImplicitJacobianLambda(q, dq, ddq, u, lambda, constraintLegs);
        }
    }

    private:

    Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraintLegs;
};

class HolonomicConstraintsConstraintSet: public NodeConstraintSet{
    
    public:

    HolonomicConstraintsConstraintSet(int domain_idx, int node_idx, Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs)
    : NodeConstraintSet("F_holonomic_constraints", 3*constraint_legs.rows(), domain_idx, node_idx) {
        this->constraintLegs = constraint_legs;
    }

    VectorXd GetValues() const {

        Eigen::VectorXd q = GetVariables()->GetComponent(CoordVariableSet::GetVariableName(domain_idx, node_idx))->GetValues();

        Eigen::VectorXd dq = GetVariables()->GetComponent(VelVariableSet::GetVariableName(domain_idx, node_idx))->GetValues();

        Eigen::VectorXd ddq = GetVariables()->GetComponent(AccVariableSet::GetVariableName(domain_idx, node_idx))->GetValues();

        return constrainedDynamics.GetConstraintDynamicsImplicit(q, dq, ddq, constraintLegs);
    }

    void FillJacobianBlock(std::string var_name, Jacobian& jac_block) const{

        Eigen::VectorXd q = GetVariables()->GetComponent(CoordVariableSet::GetVariableName(domain_idx, node_idx))->GetValues();

        Eigen::VectorXd dq = GetVariables()->GetComponent(VelVariableSet::GetVariableName(domain_idx, node_idx))->GetValues();

        Eigen::VectorXd ddq = GetVariables()->GetComponent(AccVariableSet::GetVariableName(domain_idx, node_idx))->GetValues();

        if (var_name == CoordVariableSet::GetVariableName(domain_idx, node_idx)){
            jac_block = constrainedDynamics.GetConstraintDynamicsImplicitJacobianQ(q, dq, ddq, constraintLegs);
        } else if (var_name == VelVariableSet::GetVariableName(domain_idx, node_idx)){
            jac_block = constrainedDynamics.GetConstraintDynamicsImplicitJacobianDq(q, dq, ddq, constraintLegs);
        } else if (var_name == AccVariableSet::GetVariableName(domain_idx, node_idx)){
            jac_block = constrainedDynamics.GetConstraintDynamicsImplicitJacobianDdq(q, dq, ddq, constraintLegs);
        }
    }
    private:

    Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraintLegs;
}

}//namespace ifopt