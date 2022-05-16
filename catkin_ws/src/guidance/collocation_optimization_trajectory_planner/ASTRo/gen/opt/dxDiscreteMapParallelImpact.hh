/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:42:49 GMT+02:00
 */

#ifndef DXDISCRETEMAPPARALLELIMPACT_HH
#define DXDISCRETEMAPPARALLELIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelImpact
{

  void dxDiscreteMapParallelImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5);

  inline void dxDiscreteMapParallelImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4,const Eigen::VectorXd &var5)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 18, 1);
    assert_size_matrix(var3, 18, 1);
    assert_size_matrix(var4, 3, 1);
    assert_size_matrix(var5, 3, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 18, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dxDiscreteMapParallelImpact_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data(),var5.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DXDISCRETEMAPPARALLELIMPACT_HH
