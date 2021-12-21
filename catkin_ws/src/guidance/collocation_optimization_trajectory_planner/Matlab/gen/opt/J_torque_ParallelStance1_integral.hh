/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:08:42 GMT+01:00
 */

#ifndef J_TORQUE_PARALLELSTANCE1_INTEGRAL_HH
#define J_TORQUE_PARALLELSTANCE1_INTEGRAL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelStance1
{

  void J_torque_ParallelStance1_integral_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void J_torque_ParallelStance1_integral(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 12, 1);
    assert_size_matrix(var3, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 14, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_torque_ParallelStance1_integral_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_TORQUE_PARALLELSTANCE1_INTEGRAL_HH
