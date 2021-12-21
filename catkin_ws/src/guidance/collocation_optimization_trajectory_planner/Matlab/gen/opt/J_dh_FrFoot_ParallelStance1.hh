/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:11:24 GMT+01:00
 */

#ifndef J_DH_FRFOOT_PARALLELSTANCE1_HH
#define J_DH_FRFOOT_PARALLELSTANCE1_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelStance1
{

  void J_dh_FrFoot_ParallelStance1_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_dh_FrFoot_ParallelStance1(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 45, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_dh_FrFoot_ParallelStance1_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_DH_FRFOOT_PARALLELSTANCE1_HH
