/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:01 GMT+02:00
 */

#ifndef MMAT_ASTRO_HH
#define MMAT_ASTRO_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Mmat_ASTRo_raw(double *p_output1, const double *var1);

  inline void Mmat_ASTRo(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 18, 18);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Mmat_ASTRo_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // MMAT_ASTRO_HH
