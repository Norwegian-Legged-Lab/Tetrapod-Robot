/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:15:52 GMT+01:00
 */

#ifndef JS_MMATDX_ASTRO_URDF_HH
#define JS_MMATDX_ASTRO_URDF_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace TrotStance1
{

  void Js_MmatDx_ASTRo_urdf_raw(double *p_output1, const double *var1);

  inline void Js_MmatDx_ASTRo_urdf(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 378, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_MmatDx_ASTRo_urdf_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_MMATDX_ASTRO_URDF_HH
