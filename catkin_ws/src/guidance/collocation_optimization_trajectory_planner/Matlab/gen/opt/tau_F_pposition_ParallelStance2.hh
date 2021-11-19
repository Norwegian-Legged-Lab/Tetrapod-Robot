/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:32:43 GMT+01:00
 */

#ifndef TAU_F_PPOSITION_PARALLELSTANCE2_HH
#define TAU_F_PPOSITION_PARALLELSTANCE2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelStance2
{

  void tau_F_pposition_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2);

  inline void tau_F_pposition_ParallelStance2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    tau_F_pposition_ParallelStance2_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // TAU_F_PPOSITION_PARALLELSTANCE2_HH
