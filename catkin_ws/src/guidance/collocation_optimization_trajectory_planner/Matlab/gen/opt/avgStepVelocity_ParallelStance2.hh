/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:16:01 GMT+01:00
 */

#ifndef AVGSTEPVELOCITY_PARALLELSTANCE2_HH
#define AVGSTEPVELOCITY_PARALLELSTANCE2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelStance2
{

  void avgStepVelocity_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void avgStepVelocity_ParallelStance2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 18, 1);
    assert_size_matrix(var3, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    avgStepVelocity_ParallelStance2_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // AVGSTEPVELOCITY_PARALLELSTANCE2_HH