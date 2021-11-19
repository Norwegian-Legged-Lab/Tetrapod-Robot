#include<convex_mpc_controller/convex_mpc_solver.h>
#include<iostream>
#include<Eigen/Core>

int main(int argc, char **argv){
    Eigen::Matrix3d I = Eigen::Matrix3d::Identity();
    Eigen::Vector3d v;
    v << 1, 2, 3;
    std::cout << v.rows() << " " << v.cols() << std::endl;

    v.setConstant(1);


    std::cout << v << std::endl;
    return 0;
}