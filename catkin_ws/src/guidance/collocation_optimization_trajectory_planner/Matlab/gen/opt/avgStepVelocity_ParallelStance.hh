/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:30:55 GMT+01:00
 */

#ifndef AVGSTEPVELOCITY_PARALLELSTANCE_HH
#define AVGSTEPVELOCITY_PARALLELSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelStance
{

  void avgStepVelocity_ParallelStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void avgStepVelocity_ParallelStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
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
    avgStepVelocity_ParallelStance_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // AVGSTEPVELOCITY_PARALLELSTANCE_HH
