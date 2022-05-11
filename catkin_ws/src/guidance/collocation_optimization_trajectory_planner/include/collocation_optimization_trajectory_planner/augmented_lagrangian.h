#include<Eigen/Core>
#include<Eigen/Householder>
#include<cmath>
#include<tuple>

struct VariableIdx {
    Eigen::ArrayXi xi;
    Eigen::ArrayXi W;
    Eigen::ArrayXi mu;
    Eigen::ArrayXi gamma;
}

std::tuple<double, Eigen::VectorXd, Eigen::MatrixXd> calcAugmentedLagrangian(
    const Eigen::VectorXd &x, const VariableIdx &variable_idx, const Eigen::MatrixXd &U, const double &P, const double &w, const Eigen::MatrixXd &dPhi, const Eigen::Array<Eigen::MatrixXd, Eigen::Dynamic, 1> &ddPhi);