/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:03:48 GMT+02:00
 */

#ifndef YD_POSITION_DIAGONALSTANCE_HH
#define YD_POSITION_DIAGONALSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void yd_position_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void yd_position_DiagonalStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);
    assert_size_matrix(var2, 84, 1);
    assert_size_matrix(var3, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 14, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    yd_position_DiagonalStance_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // YD_POSITION_DIAGONALSTANCE_HH
