/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:29 GMT+02:00
 */

#ifndef U_MAP_DIAGONALSTANCE2_HH
#define U_MAP_DIAGONALSTANCE2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void u_map_DiagonalStance2_raw(double *p_output1, const double *var1);

  inline void u_map_DiagonalStance2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 18, 11);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    u_map_DiagonalStance2_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // U_MAP_DIAGONALSTANCE2_HH
