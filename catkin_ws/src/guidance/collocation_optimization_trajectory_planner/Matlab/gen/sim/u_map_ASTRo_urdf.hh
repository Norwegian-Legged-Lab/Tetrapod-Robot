/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:10:45 GMT+01:00
 */

#ifndef U_MAP_ASTRO_URDF_HH
#define U_MAP_ASTRO_URDF_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void u_map_ASTRo_urdf_raw(double *p_output1, const double *var1);

  inline void u_map_ASTRo_urdf(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 18, 12);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    u_map_ASTRo_urdf_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // U_MAP_ASTRO_URDF_HH