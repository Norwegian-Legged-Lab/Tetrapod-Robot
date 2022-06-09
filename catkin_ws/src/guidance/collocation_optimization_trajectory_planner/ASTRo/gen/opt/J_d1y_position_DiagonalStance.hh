/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:53:07 GMT+02:00
 */

#ifndef J_D1Y_POSITION_DIAGONALSTANCE_HH
#define J_D1Y_POSITION_DIAGONALSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DiagonalStance
{

  void J_d1y_position_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7);

  inline void J_d1y_position_DiagonalStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4,const Eigen::VectorXd &var5,const Eigen::VectorXd &var6,const Eigen::VectorXd &var7)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 18, 1);
    assert_size_matrix(var3, 18, 1);
    assert_size_matrix(var4, 66, 1);
    assert_size_matrix(var5, 2, 1);
    assert_size_matrix(var6, 1, 1);
    assert_size_matrix(var7, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 121, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_d1y_position_DiagonalStance_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data(),var5.data(),var6.data(),var7.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_D1Y_POSITION_DIAGONALSTANCE_HH
