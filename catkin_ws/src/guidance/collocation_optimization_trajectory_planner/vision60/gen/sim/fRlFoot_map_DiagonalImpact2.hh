/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:50 GMT+02:00
 */

#ifndef FRLFOOT_MAP_DIAGONALIMPACT2_HH
#define FRLFOOT_MAP_DIAGONALIMPACT2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void fRlFoot_map_DiagonalImpact2_raw(double *p_output1, const double *var1);

  inline void fRlFoot_map_DiagonalImpact2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 18, 3);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    fRlFoot_map_DiagonalImpact2_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // FRLFOOT_MAP_DIAGONALIMPACT2_HH
