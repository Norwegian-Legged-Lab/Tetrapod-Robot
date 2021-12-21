/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:15:08 GMT+01:00
 */

#ifndef J_H_FLFOOT_PARALLELSTANCE2_HH
#define J_H_FLFOOT_PARALLELSTANCE2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelStance2
{

  void J_h_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_h_FlFoot_ParallelStance2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 3, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 23, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_h_FlFoot_ParallelStance2_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_H_FLFOOT_PARALLELSTANCE2_HH
