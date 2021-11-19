/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:26:54 GMT+01:00
 */

#ifndef J_U_VEC_ASTRO_URDF_HH
#define J_U_VEC_ASTRO_URDF_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DiagonalStance1
{

  void J_u_vec_ASTRo_urdf_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_u_vec_ASTRo_urdf(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 12, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 12, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_u_vec_ASTRo_urdf_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_U_VEC_ASTRO_URDF_HH
