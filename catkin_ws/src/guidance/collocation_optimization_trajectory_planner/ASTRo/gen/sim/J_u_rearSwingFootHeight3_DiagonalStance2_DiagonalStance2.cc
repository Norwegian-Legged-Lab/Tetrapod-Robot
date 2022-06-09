/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:39:30 GMT+02:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t1970;
  double t2701;
  double t2849;
  double t3274;
  double t3454;
  double t3461;
  double t4795;
  double t3484;
  double t4445;
  double t4810;
  double t4784;
  double t5255;
  double t5293;
  double t5898;
  double t5976;
  double t5977;
  double t1720;
  double t1934;
  double t6143;
  double t6150;
  double t6153;
  double t8999;
  double t9269;
  double t9497;
  double t9514;
  double t9543;
  double t9928;
  double t9997;
  double t10180;
  double t10182;
  double t3336;
  double t3466;
  double t5506;
  double t5593;
  double t6148;
  double t6149;
  double t9299;
  double t9306;
  double t10256;
  double t10272;
  double t10284;
  double t10612;
  double t10613;
  double t10621;
  double t10623;
  double t10648;
  double t10652;
  double t10946;
  double t10952;
  double t10954;
  double t11045;
  double t11090;
  double t11115;
  double t11118;
  double t11119;
  double t11120;
  double t11483;
  double t11508;
  double t11516;
  double t11517;
  double t11546;
  double t11565;
  double t11195;
  double t11947;
  double t11948;
  double t11954;
  double t12362;
  double t12403;
  double t12427;
  double t12484;
  double t12506;
  double t12532;
  double t12594;
  double t12595;
  double t12627;
  t1970 = Sin(var1[3]);
  t2701 = Cos(var1[9]);
  t2849 = -1.*t2701;
  t3274 = 1. + t2849;
  t3454 = Sin(var1[9]);
  t3461 = 0.15121*t3454;
  t4795 = Cos(var1[3]);
  t3484 = Cos(var1[5]);
  t4445 = Sin(var1[4]);
  t4810 = Sin(var1[5]);
  t4784 = t3484*t1970*t4445;
  t5255 = t4795*t4810;
  t5293 = t4784 + t5255;
  t5898 = t4795*t3484;
  t5976 = -1.*t1970*t4445*t4810;
  t5977 = t5898 + t5976;
  t1720 = Cos(var1[4]);
  t1934 = Sin(var1[10]);
  t6143 = Cos(var1[10]);
  t6150 = t2701*t5293;
  t6153 = t3454*t5977;
  t8999 = t6150 + t6153;
  t9269 = Cos(var1[11]);
  t9497 = -1.*t1720*t1934*t1970;
  t9514 = t6143*t8999;
  t9543 = t9497 + t9514;
  t9928 = Sin(var1[11]);
  t9997 = -1.*t6143*t1720*t1970;
  t10180 = -1.*t1934*t8999;
  t10182 = t9997 + t10180;
  t3336 = -0.15121*t3274;
  t3466 = t3336 + t3461;
  t5506 = 0.15121*t3274;
  t5593 = t5506 + t3461;
  t6148 = -1.*t6143;
  t6149 = 1. + t6148;
  t9299 = -1.*t9269;
  t9306 = 1. + t9299;
  t10256 = -1.*t2701*t4795*t1720*t3484;
  t10272 = t4795*t1720*t3454*t4810;
  t10284 = t10256 + t10272;
  t10612 = -1.*t4795*t1934*t4445;
  t10613 = t6143*t10284;
  t10621 = t10612 + t10613;
  t10623 = -1.*t6143*t4795*t4445;
  t10648 = -1.*t1934*t10284;
  t10652 = t10623 + t10648;
  t10946 = t4795*t3484*t4445;
  t10952 = -1.*t1970*t4810;
  t10954 = t10946 + t10952;
  t11045 = t3484*t1970;
  t11090 = t4795*t4445*t4810;
  t11115 = t11045 + t11090;
  t11118 = t3454*t10954;
  t11119 = t2701*t11115;
  t11120 = t11118 + t11119;
  t11483 = 0.15121*t2701;
  t11508 = -1.*t4795*t3484*t4445;
  t11516 = t1970*t4810;
  t11517 = t11508 + t11516;
  t11546 = -1.*t3454*t11517;
  t11565 = t11546 + t11119;
  t11195 = -1.*t3454*t11115;
  t11947 = t2701*t11517;
  t11948 = t3454*t11115;
  t11954 = t11947 + t11948;
  t12362 = -1.*t4795*t1720*t1934;
  t12403 = -1.*t6143*t11954;
  t12427 = t12362 + t12403;
  t12484 = t6143*t4795*t1720;
  t12506 = -1.*t1934*t11954;
  t12532 = t12484 + t12506;
  t12594 = t4795*t1720*t1934;
  t12595 = t6143*t11954;
  t12627 = t12594 + t12595;
  p_output1[0]=1.;
  p_output1[1]=-0.28121*t1720*t1934*t1970 + t3466*t5293 + t5593*t5977 + 0.15121*(-1.*t3454*t5293 + t2701*t5977) - 0.28121*t6149*t8999 - 0.50321*t9306*t9543 - 0.50321*t10182*t9928 - 0.19821*(t9269*t9543 - 1.*t10182*t9928);
  p_output1[2]=-1.*t1720*t3466*t3484*t4795 - 0.28121*t1934*t4445*t4795 + 0.15121*(t1720*t3454*t3484*t4795 + t1720*t2701*t4795*t4810) + t1720*t4795*t4810*t5593 - 0.28121*t10284*t6149 - 0.50321*t10621*t9306 - 0.50321*t10652*t9928 - 0.19821*(t10621*t9269 - 1.*t10652*t9928);
  p_output1[3]=0.15121*(t11195 + t10954*t2701) + t11115*t3466 + t10954*t5593 - 0.28121*t11120*t6149 - 0.50321*t11120*t6143*t9306 + 0.50321*t11120*t1934*t9928 - 0.19821*(t11120*t6143*t9269 + t11120*t1934*t9928);
  p_output1[4]=0.15121*(t11195 - 1.*t11517*t2701) + t11517*(t11483 - 0.15121*t3454) + t11115*(t11483 + t3461) - 0.28121*t11565*t6149 - 0.50321*t11565*t6143*t9306 + 0.50321*t11565*t1934*t9928 - 0.19821*(t11565*t6143*t9269 + t11565*t1934*t9928);
  p_output1[5]=-0.28121*t11954*t1934 + 0.28121*t1720*t4795*t6143 - 0.50321*t12532*t9306 - 0.50321*t12427*t9928 - 0.19821*(t12532*t9269 - 1.*t12427*t9928);
  p_output1[6]=-0.50321*t12532*t9269 - 0.50321*t12627*t9928 - 0.19821*(-1.*t12532*t9269 - 1.*t12627*t9928);
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_rearSwingFootHeight3_DiagonalStance2_DiagonalStance2.hh"

namespace SymFunction
{

void J_u_rearSwingFootHeight3_DiagonalStance2_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
