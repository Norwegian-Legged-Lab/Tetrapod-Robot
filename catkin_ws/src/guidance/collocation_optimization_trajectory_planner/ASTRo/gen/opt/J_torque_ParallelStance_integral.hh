/*
 * Automatically Generated from Mathematica.
 * Thu 26 May 2022 14:46:33 GMT+02:00
 */

#ifndef J_TORQUE_PARALLELSTANCE_INTEGRAL_HH
#define J_TORQUE_PARALLELSTANCE_INTEGRAL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelStance
{

  void J_torque_ParallelStance_integral_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void J_torque_ParallelStance_integral(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
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
    J_torque_ParallelStance_integral_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_TORQUE_PARALLELSTANCE_INTEGRAL_HH
