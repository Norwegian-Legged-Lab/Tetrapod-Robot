/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 18:25:29 GMT+02:00
 */

#ifndef J_JD2YD_POSITION_DIAGONALSTANCE2_DIAGONALSTANCE2_HH
#define J_JD2YD_POSITION_DIAGONALSTANCE2_DIAGONALSTANCE2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void J_Jd2yd_position_DiagonalStance2_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void J_Jd2yd_position_DiagonalStance2_DiagonalStance2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);
    assert_size_matrix(var2, 84, 1);
    assert_size_matrix(var3, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 126, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_Jd2yd_position_DiagonalStance2_DiagonalStance2_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_JD2YD_POSITION_DIAGONALSTANCE2_DIAGONALSTANCE2_HH
