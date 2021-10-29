#include <kinematics/kinematics.h>
#include <Eigen/Core>
#include <iostream>
#include <chrono>
#include<thread>
int main(int argc, char **argv){
    Kinematics kinematics;
    Eigen::VectorXd q = Eigen::VectorXd::Zero(18);
    Eigen::VectorXd dq = Eigen::VectorXd::Zero(18);
    Eigen::VectorXd u = Eigen::VectorXd::Zero(12);

    Eigen::Matrix<double, 18, 12> B;
    B << Eigen::Matrix<double, 6, 12>::Zero(), Eigen::Matrix<double, 12, 12>::Identity();
    auto t1 = std::chrono::high_resolution_clock::now();

    auto M = kinematics.GetMassMatrix(q);
    auto C = kinematics.GetCoriolisAndCentrifugalTerms(q, q);
    auto G = kinematics.GetGravitationalTerms(q);
    auto b = B*u - C - G;
    auto ddq = M.ldlt().solve(b);

    auto t2 = std::chrono::high_resolution_clock::now();
    auto ms_int = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1);
    std::cout << ddq << std::endl << std::endl;
    std::cout << ms_int.count() << std::endl;

    return 0;
}