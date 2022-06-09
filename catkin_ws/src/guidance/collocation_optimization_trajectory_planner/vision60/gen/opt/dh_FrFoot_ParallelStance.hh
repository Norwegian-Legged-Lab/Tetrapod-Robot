/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:07:42 GMT+02:00
 */

#ifndef DH_FRFOOT_PARALLELSTANCE_HH
#define DH_FRFOOT_PARALLELSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelStance
{

  void dh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void dh_FrFoot_ParallelStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dh_FrFoot_ParallelStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DH_FRFOOT_PARALLELSTANCE_HH
