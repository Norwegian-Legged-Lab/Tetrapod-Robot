#pragma once

#include <ifopt/constraint_set.h>
#include <ifopt/variable_set.h>
#include <kinematics/kinematics.h>
#include<string>


namespace ifopt{

class NodeVariableSet: public VariableSet{
    public: NodeVariableSet(std::string state_type, int dimension, int domain_idx, int node_idx)
    : VariableSet(dimension, NodeVariableSet::GetVariableName(state_type, domain_idx, node_idx))
    {
        x = Eigen::VectorXd::Zero(dimension);

        lb = Eigen::VectorXd::Zero(dimension);

        ub = Eigen::VectorXd::Zero(dimension);
    }
    
    static std::string GetVariableName(std::string name, int domain_idx, int node_idx) {
        return name + "_" + std::to_string(domain_idx) + "_" + std::to_string(node_idx);
    }

    void SetVariables
    (const Eigen::VectorXd& x) {this->x = x;}

    Eigen::VectorXd GetValues() const {return x;}

    void SetBounds(const Eigen::VectorXd& lb, const Eigen::VectorXd& ub){
        this->lb = lb;
        this->ub = ub;
    }

    VecBound GetBounds() const {
        int row_count = GetRows();

        VecBound bounds(row_count);

        for (int i = 0; i < row_count; ++i){
            bounds.at(i) = Bounds(lb(i), ub(i));
        }
        return bounds;
    }

    private:

    Eigen::VectorXd x;

    Eigen::VectorXd lb;

    Eigen::VectorXd ub;
};

class StateVariableSet: public NodeVariableSet{
    
    public:

    StateVariableSet(std::string state_type, int domain_idx, int node_idx)
    : NodeVariableSet(state_type, Kinematics::nCoord, domain_idx, node_idx) {}

};

class CoordVariableSet: public StateVariableSet{
    public:

    CoordVariableSet(int domain_idx, int node_idx): StateVariableSet("q", domain_idx, node_idx) {}

    static std::string GetVariableName(int domain_idx, int node_idx) {return NodeVariableSet::GetVariableName("q", domain_idx, node_idx);}
};

class VelVariableSet: public StateVariableSet{
    public:

    VelVariableSet(int domain_idx, int node_idx): StateVariableSet("dq", domain_idx, node_idx) {}

    static std::string GetVariableName(int domain_idx, int node_idx) {return NodeVariableSet::GetVariableName("dq", domain_idx, node_idx);}
};

class AccVariableSet: public StateVariableSet{
    public:

    AccVariableSet(int domain_idx, int node_idx): StateVariableSet("ddq", domain_idx, node_idx) {}

    static std::string GetVariableName(int domain_idx, int node_idx) {return NodeVariableSet::GetVariableName("ddq", domain_idx, node_idx);}
};

class InputVariableSet: public NodeVariableSet{
    public:

    InputVariableSet(int domain_idx, int node_idx)
    : NodeVariableSet("u", Kinematics::nActuation, domain_idx, node_idx) {}

    static std::string GetVariableName(int domain_idx, node_idx) {return NodeVariableSet::GetVariableName("u", domain_idx, node_idx);}
}

class LambdaVariableSet: public NodeVariableSet{

    public:

    LambdaVariableSet(int domain_idx, int node_idx, Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraint_legs)
    : NodeVariableSet("lambda", 3*constraint_legs.rows(), domain_idx, node_idx)) {
        this->constraintLegs = constraint_legs;
    }

    static std::string GetVariableName(int domain_idx, node_idx) {return NodeVariableSet::GetVariableName("lambda", domain_idx, node_idx);}

    Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> GetConstraintLegs() const {return constraintLegs;}
    private:

    Eigen::Matrix<Kinematics::LegType, Eigen::Dynamic, 1> constraintLegs;
}
}//namespace ifopt