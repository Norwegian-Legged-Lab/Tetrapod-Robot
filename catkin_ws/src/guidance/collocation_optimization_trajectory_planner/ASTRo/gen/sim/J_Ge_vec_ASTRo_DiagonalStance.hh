/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:31:06 GMT+02:00
 */

#ifndef J_GE_VEC_ASTRO_DIAGONALSTANCE_HH
#define J_GE_VEC_ASTRO_DIAGONALSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void J_Ge_vec_ASTRo_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_Ge_vec_ASTRo_DiagonalStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 117, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_Ge_vec_ASTRo_DiagonalStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_GE_VEC_ASTRO_DIAGONALSTANCE_HH
