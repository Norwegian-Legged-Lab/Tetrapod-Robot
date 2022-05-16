/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:37 GMT+02:00
 */

#ifndef DJH_RLFOOT_PARALLELSTANCE2_HH
#define DJH_RLFOOT_PARALLELSTANCE2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void dJh_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2);

  inline void dJh_RlFoot_ParallelStance2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 18);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dJh_RlFoot_ParallelStance2_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DJH_RLFOOT_PARALLELSTANCE2_HH
