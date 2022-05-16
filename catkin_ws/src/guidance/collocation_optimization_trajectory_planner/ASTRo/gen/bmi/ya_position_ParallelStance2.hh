/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:39 GMT+02:00
 */

#ifndef YA_POSITION_PARALLELSTANCE2_HH
#define YA_POSITION_PARALLELSTANCE2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void ya_position_ParallelStance2_raw(double *p_output1, const double *var1);

  inline void ya_position_ParallelStance2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 14, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    ya_position_ParallelStance2_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // YA_POSITION_PARALLELSTANCE2_HH
