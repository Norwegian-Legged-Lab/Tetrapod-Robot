#include <kinematics/kinematics.h>
#include <Eigen/Core>
#include <iostream>
#include <chrono>
#include<thread>
#include<cmath>
#include<unsupported/Eigen/AutoDiff>
#define _USE_MATH_DEFINES

Eigen::AutoDiffScalar<Eigen::VectorXd> normSquared(Eigen::Matrix<Eigen::AutoDiffScalar<Eigen::VectorXd>, Eigen::Dynamic, 1> q){
    return q.transpose()*q;
}

Eigen::AutoDiffScalar<Eigen::VectorXd> oneVar(Eigen::Matrix<Eigen::AutoDiffScalar<Eigen::VectorXd>, Eigen::Dynamic, 1> q){
    return q(0);
}

void setValue(Eigen::Matrix<Eigen::AutoDiffScalar<Eigen::VectorXd>, Eigen::Dynamic, 1> &q, Eigen::VectorXd val){
    int dim_q = q.rows();
    for (int i = 0; i < dim_q; ++i){
        q(i).value() = val(i);
    }
}

void setDerivatives(Eigen::Matrix<Eigen::AutoDiffScalar<Eigen::VectorXd>, Eigen::Dynamic, 1> &q){
    int dim_q = q.rows();

    for (int i = 0; i < dim_q; ++i){
        q(i).derivatives() = Eigen::VectorXd::Unit(dim_q, i);
    }
}

Eigen::AutoDiffScalar<Eigen::VectorXd> cosTest(Eigen::AutoDiffScalar<Eigen::VectorXd> x){
    return Eigen::cos(x);
}

int main(int argc, char **argv){
    Eigen::Matrix<Eigen::AutoDiffScalar<Eigen::VectorXd>, Eigen::Dynamic, 1> q;
    q.resize(18);
    setValue(q, Eigen::VectorXd::Ones(18));
    setDerivatives(q);
    Eigen::AutoDiffScalar<Eigen::VectorXd> nsq = normSquared(q);

    std::cout << "value: " << nsq.value() << std::endl;
    std::cout << "derivatives: " << nsq.derivatives() << std::endl;

    Eigen::AutoDiffScalar<Eigen::VectorXd> onev = oneVar(q);

    std::cout << "value: " << onev.value() << std::endl;
    std::cout << "derivatives: " << onev.derivatives() << std::endl;

    Eigen::AutoDiffScalar<Eigen::VectorXd> x;
    x.value() = M_PI_2;
    x.derivatives() = Eigen::VectorXd::Unit(1, 0);
    Eigen::AutoDiffScalar<Eigen::VectorXd> cT = cosTest(x);

    std::cout << "value: " << cT.value() << std::endl;
    std::cout << "derivatives: " << cT.derivatives() << std::endl;
    return 0;
}