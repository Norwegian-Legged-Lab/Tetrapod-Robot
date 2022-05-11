/*
 * Automatically Generated from Mathematica.
 * Wed 6 Apr 2022 13:11:35 GMT+02:00
 */

#ifndef J_U_FRONTSWINGFOOTHEIGHT4_PARALLELSTANCE2_HH
#define J_U_FRONTSWINGFOOTHEIGHT4_PARALLELSTANCE2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void J_u_frontSwingFootHeight4_ParallelStance2_raw(double *p_output1, const double *var1);

  inline void J_u_frontSwingFootHeight4_ParallelStance2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 7, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_u_frontSwingFootHeight4_ParallelStance2_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_U_FRONTSWINGFOOTHEIGHT4_PARALLELSTANCE2_HH
