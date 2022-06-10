/*
 * Automatically Generated from Mathematica.
 * Thu 26 May 2022 14:48:52 GMT+02:00
 */

#ifndef SWING_POSITION_RRFOOT_PARALLELSTANCE_HH
#define SWING_POSITION_RRFOOT_PARALLELSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelStance
{

  void swing_position_RrFoot_ParallelStance_raw(double *p_output1, const double *var1);

  inline void swing_position_RrFoot_ParallelStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    swing_position_RrFoot_ParallelStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // SWING_POSITION_RRFOOT_PARALLELSTANCE_HH