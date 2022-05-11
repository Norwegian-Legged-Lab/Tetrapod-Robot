#include<collocation_optimization_trajectory_planner/augmented_lagrangian.h>


std::tuple<double, Eigen::VectorXd, Eigen::MatrixXd> calcAugmentedLagrangian(
    const Eigen::VectorXd &x, const VariableIdx &idx, const Eigen::MatrixXd &U, const double &P, const double &w, const Eigen::MatrixXd &dJ, const Eigen::Array<Eigen::MatrixXd, Eigen::Dynamic, 1> &ddJ)
{
    int n_x = x.size();

    Eigen::VectorXd xi = x(idx.xi);

    Eigen::VectorXd W_vec = x(idx.W);

    int n_xi = xi.size();

    double mu = x(idx.mu);

    double gamma = x(idx.gamma);

    int n_Wvec = W_vec.size();

    int n_W = (-1 + std::sqrt(1 + 8*n_Wvec))/2;

    // Construct SPD matrix W from Vector Wvec
    Eigen::MatrixXd W(n_W, n_W);

    int diag_idx = 0;
    int diag_len = n_Wvec;

    //Matrix of indices such that the ith row are the indices to the entries (transposes of each other) where the ith element of Wvec lie
    Eigen::ArrayX2i W_mat_idx(n_Wvec);
    while (diag_len > 0){
        W_mat_idx.block(diag_idx, 0, diag_len, 1).setLinSpaced(0, n_Wvec - 1 - diag_idx);
        W_mat_idx.block(diag_idx, 1, diag_len, 1).setLinSpaced(diag_idx, n_Wvec - 1);
        diag_idx += diag_len;
        diag_len -= 1;
    }

    W_mat_idx(W_mat_idx.col(0), W_mat_idx.col(1)) << W_vec;
    W_mat_idx(W_mat_idx.col(1), W_mat_idx.col(0)) << W_vec;

    //Construct the weighted sum of partial derivatives with respect to xi
    Eigen::MatrixXd lincomb_ddJ = dJ + (xi.array()*ddJ).sum();

    // Get Z(x)
    Eigen::MatrixXd Z = constructZ(xi, W, mu, gamma, lincomb_ddJ);

    int n_z = Z.rows();

    //Evaluate the objective function
    double f = -w*mu + gamma;

    Eigen::MatrixXd phi = std::pow(P, 2)*Z - P*Eigen::MatrixXd::Identity(n_z, n_z);

    //Evaluate the augmentet Lagrangian
    double F = f + (U*phi).trace();
    
    //Begin constructing the gradient of the augmented lagrangian
    Eigen::MatrixXd dA(n_z, n_z);

    double df;

    Eigen::MatrixXd dphi(n_z, n_z);

    //Construct the gradient of augmented lagangian wrt xi
    Eigen::VectorXd dF_dxi = Eigen::VectorXd::Zero(n_xi);

    dA.setZero();
    
    Eigen::Array<Eigen::MatrixXd, Eigen::Dynamic, 1> dA_dxi;

    dA_dxi.resize(n_xi);


    for (int i = 0; i < n_xi; ++i){
        dA.block(0, n_W, n_W, n_W) << -ddJ(i)*W;
        dA.block(n_W, 0, n_W, n_W) << dA.block(0, n_W, n_W, n_W).transpose();
        
        //For later calculation of the Hessian
        dA_dxi(i) << dA;

        dphi << std::pow(P,2)*Z*dA*Z;

        dF_dxi(i) = (U*dphi).trace();
    }

    //Construct the gradient of the augmented Lagrangian wrt mu
    double dF_dmu;

    dA.setZero();
    
    dA.block(n_W, n_W, n_W, n_W) << W;

    dA.bottomRightCorner(1,1) << -1;

    //For later calculation of the Hessian
    Eigen::MatrixXd dA_dmu(dA);

    dphi << std::pow(P,2)*Z*dA*Z;

    df = -w;

    dF_dmu = df + (U*dphi).trace(); 

    //Construct the gradient of the augmented Lagrangian wrt gamma

    double dF_dgamma;

    dA.setZero();

    dA(n_z - 2, n_z - 2) = -1;

    df = 1;

    dphi << std::pow(P,2)*Z*dA*Z;

    dF_dgamma = df + (U*dphi).trace();
    //Construct the gradient of the augmented Lagrangian wrt Wvec and the hessian wrt Wvec and xi, and wvec and mu

    Eigen::MatrixXd ddA(n_z, n_z);

    Eigen::VectorXd dF_dWvec(n_Wvec);

    Eigen::MatrixXd ddF_dxi_dWvec(n_Wvec, n_xi);

    Eigen::VectorXd ddF_dmu_dWvec(n_Wvec);

    Eigen::MatrixXd dW_dWvec(n_W, n_W);

    for (int i = 0; i < n_Wvec; ++i){
        dA.setZero();
        dW_dWvec.setZero();
        dW_dWvec(W_mat_idx(i, 0), W_mat_idx(i, 1)) = 1;
        dW_dWvec(W_mat_idx(i, 1), W_mat_idx(i, 0)) = 1;

        //Create dA/dWvec(i)
        dA.topLeftCorner(n_W, n_W) << -dW_dWvec;
        dA.block(0, n_W, n_W, n_W) << -lincomb_ddJ*dW_dWvec;
        dA.block(n_W, 0, n_W, n_W) << dA.block(0, n_W, n_W, n_W).transpose();
        dA.block(n_W, n_W, n_W, n_W) << dW_dWvec*mu;

        dF_dWvec(i) = (U*calcDphiDx(dA, Z, P)).trace();

        //Create ddF/dxi_dWvec(i)
        for (int j = 0; j < n_xi; ++j){
            //construct ddA/dxi(j)_dWvec(i)
            ddA.setZero();
            ddA.block(0, n_W, n_W, n_W) << -ddJ*dW_dWvec;
            ddA.block(n_W, 0, n_W, n_W) << ddA.block(0, n_W, n_W, n_W).transpose();

            ddF_dxi_dWvec(i, j) = (U*calcDdphiDxDy(dA, dA_dxi(j), ddA, Z, P)).trace();
        }

        //Create ddF/dmu_dWvec(i)
        ddA.setZero();
        ddA.block(n_W, n_W, n_W, n_W) << dW_dWvec;

        ddF_dmu_dWvec(i) = (U*calcDdphiDxDy(dA, dA_dmu, ddA, Z, P)).trace();
    }

    // Put together gradient of augmented Lagrangian
    Eigen::VectorXd dF(n_x);
    dF.setZero();
    
    dF(idx.xi) << dF_dxi;
    dF(idx.W) << dF_dWvec;
    dF(idx.mu) = dF_dmu;
    dF(idx.gamma) = dF_dgamma;

    // Put together hessian of augmented Lagrangian
    Eigen::MatrixXd ddF(n_x, n_x);
    ddF.setZero();

    ddF.block(idx.W(0), idx.xi(0), n_Wvec, n_xi) << ddF_dxi_dWvec;
    ddF.block(idx.xi(0), idx.W(0), n_xi, n_Wvec) << ddF_dxi_dWvec.transpose();

    ddF.block(idx.W(0), idx.mu(0), n_Wvec, 1) << ddF_dmu_dWvec;
    ddF.block(idx.mu(0), idx.W(0), 1, n_Wvec) << ddF_dmu_dWvec.transpose();

    return std::tuple<double, Eigen::VectorXd, Eigen::MatrixXd>(F, dF, ddF);

}


Eigen::MatrixXd constructZ(const Eigen::VectorXd &xi, const Eigen::MatrixXd &W, const double &mu, const double &gamma, const Eigen::MatrixXd &lincomb_ddJ)
{
    int n_W = W.rows();

    int n_xi = xi.size();

    //Construct the blocks of M

    Eigen::MatrixXd M11 = -W;

    Eigen::MatrixXd M12 = -lincomb_ddJ*W;

    Eigen::MatrixXd M22 = -W*(1 - mu);

    //Construct the blocks of the inverse of M - PI

    Eigen::MatrixXd M11_P = M11 - P*Eigen::MatrixXd::Identity(n_W, n_W);

    Eigen::MatrixXd M22_P = M22 - P*Eigen::MatrixXd::Identity(n_W, n_W);

    Eigen::LDLT<Eigen::MatrixXd> M11_P_dec(M11_P);
    
    Eigen::LDLT<Eigen::MatrixXd> M22_P_dec(M22_P);

    Eigen::MatrixXd schur_M11_P_inv = (M11_P - M12*M22_P_dec.solve(M12.transpose()));

    Eigen::HouseholderQR<Eigen::MatrixXd> schur_M11_P_inv_dec(schur_M11_P_inv);

    Eigen::MatrixXd schur_M11_P = schur_M11_P_inv.inverse();

    Eigen::MatrixXd schur_M12_P = (M22_P_llt.solve((-(schur_M11_P_inv_dec.solve(M12))).transpose())).transpose();

    Eigen::MatrixXd schur_M22_P = M22_P.inverse() + (M22_P_llt.solve((M22_P_llt.solve(M12.transpose()*(schur_M11_P_inv_dec.solve(M12)))).transpose())).transpose();

    Eigen::MatrixXd M_P_inv(2*n_W, 2*n_W);

    //Construct the inverse of M - PI

    M_P_inv << schur_M11_P, schur_M12_P, schur_M12_P.transpose(), schur_M22_P;

    //Construct the blocks of N - PI

    Eigen::MatrixXd N11_P = -(1 + P)*Eigen::MatrixXd::Identity(n_xi);

    Eigen::MatrixXd N11_P_inv = Eigen::MatrixXd::Identity(n_xi)/(-(1 + P));

    Eigen::MatrixXd N12 = -xi;    //Construct the blocks of M

    double N22_P = -gamma - P;

    Eigen::MatrixXd schur_N11_P_inv = (N11_P - N12*N12.transpose()/N22_P);

    Eigen::HouseholderQR<Eigen::MatrixXd> schur_N11_P_inv_dec(schur_N11_P_inv);

    Eigen::MatrixXd schur_N11_P = schur_N11_P_inv.inverse();

    Eigen::MatrixXd schur_N12_P = -schur_M11_P_inv_dec.solve(N12)/N22_P;

    double schur_N22_P = 1/N22_P + (N12.transpose()*schur_N11_P_inv_dec.solve(N12)/(std::pow(N22_P, 2)))(0,0);

    Eigen::MatrixXd N_P_inv(n_xi + 1, n_xi + 1);

    N_P_inv << schur_N11_P, schur_N12_P, schur_N12_P.transpose(), schur_N22_P;

    int n_A = 2*n_W + n_xi + 2;

    Eigen::MatrixXd Z = Eigen::MatrixXd::Zero(n_A, n_A);

    Z.topLeftCorner(2*n_W, 2*n_W) << M_P_inv;

    Z.block(2*n_W, 2*n_W, n_xi + 1, n_xi +1) << N_P_inv;

    Z.bottomLeftCorner(1,1) << 1/(-mu - P);

    return Z;
}

inline Eigen::MatrixXd calcDphiDx(const Eigen::MatrixXd &dA, const Eigen::MatrixXd &Z, const double &P)
{
    return std::pow(P,2)*Z*dA*Z;
}

inline Eigen::MatrixXd calcDdphiDxDy(const Eigen::MatrixXd &dA_dx, const Eigen::MatrixXd &dA_dy, const Eigen::MatrixXd &ddA_dx_dy, const Eigen::MatrixXd &Z, const double &P)
{
    return std::pow(P,2)*Z*(dA_dx*Z*dA_dy + dA_dy*Z*dA_dx - ddA_dx_dy)*Z;
}