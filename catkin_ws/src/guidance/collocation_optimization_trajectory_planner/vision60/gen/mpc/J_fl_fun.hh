/*
 * Automatically Generated from Mathematica.
 * Tue 16 Nov 2021 16:05:47 GMT+01:00
 */

#ifndef J_FL_FUN_HH
#define J_FL_FUN_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void J_fl_fun_raw(double *p_output1, const double *var1);

  inline void J_fl_fun(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 18);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_fl_fun_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_FL_FUN_HH
