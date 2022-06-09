/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:53:47 GMT+02:00
 */

#ifndef J_DXMINUSCONT_PARALLELIMPACT_HH
#define J_DXMINUSCONT_PARALLELIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelImpact
{

  void J_dxMinusCont_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_dxMinusCont_ParallelImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
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
    J_dxMinusCont_ParallelImpact_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_DXMINUSCONT_PARALLELIMPACT_HH
