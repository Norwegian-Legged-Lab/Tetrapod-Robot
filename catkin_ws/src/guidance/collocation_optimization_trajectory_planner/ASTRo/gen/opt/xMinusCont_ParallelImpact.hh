/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:36:25 GMT+02:00
 */

#ifndef XMINUSCONT_PARALLELIMPACT_HH
#define XMINUSCONT_PARALLELIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelImpact
{

  void xMinusCont_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2);

  inline void xMinusCont_ParallelImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 18, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    xMinusCont_ParallelImpact_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // XMINUSCONT_PARALLELIMPACT_HH
