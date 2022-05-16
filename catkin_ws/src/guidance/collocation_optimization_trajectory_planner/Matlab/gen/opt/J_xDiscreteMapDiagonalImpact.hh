/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:31:08 GMT+01:00
 */

#ifndef J_XDISCRETEMAPDIAGONALIMPACT_HH
#define J_XDISCRETEMAPDIAGONALIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DiagonalImpact
{

  void J_xDiscreteMapDiagonalImpact_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_xDiscreteMapDiagonalImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 36, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_xDiscreteMapDiagonalImpact_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_XDISCRETEMAPDIAGONALIMPACT_HH