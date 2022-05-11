/*
 * Automatically Generated from Mathematica.
 * Tue 16 Nov 2021 21:25:02 GMT+01:00
 */

#ifndef J_FR_HH
#define J_FR_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void J_fr_raw(double *p_output1, const double *var1);

  inline void J_fr(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 9);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_fr_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_FR_HH
