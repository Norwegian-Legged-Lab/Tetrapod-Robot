/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:23:40 GMT+02:00
 */

#ifndef H_RLFOOT_DIAGONALSTANCE_HH
#define H_RLFOOT_DIAGONALSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void h_RlFoot_DiagonalStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 3, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    h_RlFoot_DiagonalStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // H_RLFOOT_DIAGONALSTANCE_HH
