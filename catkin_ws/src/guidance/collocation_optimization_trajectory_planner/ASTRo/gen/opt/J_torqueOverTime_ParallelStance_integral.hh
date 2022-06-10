/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:52:11 GMT+02:00
 */

#ifndef J_TORQUEOVERTIME_PARALLELSTANCE_INTEGRAL_HH
#define J_TORQUEOVERTIME_PARALLELSTANCE_INTEGRAL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelStance
{

  void J_torqueOverTime_ParallelStance_integral_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4);

  inline void J_torqueOverTime_ParallelStance_integral(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 12, 1);
    assert_size_matrix(var3, 2, 1);
    assert_size_matrix(var4, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 16, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_torqueOverTime_ParallelStance_integral_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_TORQUEOVERTIME_PARALLELSTANCE_INTEGRAL_HH