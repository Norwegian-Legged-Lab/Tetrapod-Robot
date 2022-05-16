/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:12:03 GMT+01:00
 */

#ifndef J_FOOT_CLEARANCE_RLFOOTPARALLELSTANCE1_HH
#define J_FOOT_CLEARANCE_RLFOOTPARALLELSTANCE1_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelStance1
{

  void J_foot_clearance_RlFootParallelStance1_raw(double *p_output1, const double *var1);

  inline void J_foot_clearance_RlFootParallelStance1(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 7, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_foot_clearance_RlFootParallelStance1_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_FOOT_CLEARANCE_RLFOOTPARALLELSTANCE1_HH