/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:30 GMT+02:00
 */

#ifndef JH_RRFOOT_PARALLELSTANCE_HH
#define JH_RRFOOT_PARALLELSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Jh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1);

  inline void Jh_RrFoot_ParallelStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 18);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Jh_RrFoot_ParallelStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JH_RRFOOT_PARALLELSTANCE_HH
