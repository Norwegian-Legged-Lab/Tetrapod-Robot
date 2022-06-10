/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:07:26 GMT+02:00
 */

#ifndef U_FRONTSWINGFOOTHEIGHTTWISTED_PARALLELSTANCE2_HH
#define U_FRONTSWINGFOOTHEIGHTTWISTED_PARALLELSTANCE2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void u_frontSwingFootHeighttwisted_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4);

  inline void u_frontSwingFootHeighttwisted_ParallelStance2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 1, 1);
    assert_size_matrix(var3, 1, 1);
    assert_size_matrix(var4, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    u_frontSwingFootHeighttwisted_ParallelStance2_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // U_FRONTSWINGFOOTHEIGHTTWISTED_PARALLELSTANCE2_HH