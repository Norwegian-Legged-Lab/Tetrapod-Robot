/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:14 GMT+01:00
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
  double t64;
  double t267;
  double t281;
  double t318;
  double t392;
  double t419;
  double t213;
  double t516;
  double t372;
  double t420;
  double t486;
  double t488;
  double t659;
  double t639;
  double t646;
  double t654;
  double t701;
  double t710;
  double t772;
  double t782;
  double t799;
  double t924;
  double t931;
  double t933;
  double t951;
  double t987;
  double t990;
  t64 = Cos(var1[4]);
  t267 = Cos(var1[12]);
  t281 = -1.*t267;
  t318 = 1. + t281;
  t392 = Sin(var1[12]);
  t419 = 0.15121*t392;
  t213 = Cos(var1[5]);
  t516 = Sin(var1[5]);
  t372 = -0.15121*t318;
  t420 = t372 + t419;
  t486 = 0.15121*t318;
  t488 = t486 + t419;
  t659 = Cos(var1[3]);
  t639 = Sin(var1[3]);
  t646 = Sin(var1[4]);
  t654 = t213*t639*t646;
  t701 = t659*t516;
  t710 = t654 + t701;
  t772 = t659*t213;
  t782 = -1.*t639*t646*t516;
  t799 = t772 + t782;
  t924 = -1.*t659*t213*t646;
  t931 = t639*t516;
  t933 = t924 + t931;
  t951 = t213*t639;
  t987 = t659*t646*t516;
  t990 = t951 + t987;
  p_output1[0]=t213*t420*t64 - 1.*t488*t516*t64 + 0.15121*(-1.*t213*t392*t64 - 1.*t267*t516*t64) - 0.15121*(t213*t267*t64 - 1.*t392*t516*t64) + var1[0];
  p_output1[1]=t420*t710 + t488*t799 + 0.15121*(-1.*t392*t710 + t267*t799) - 0.15121*(t267*t710 + t392*t799) + var1[1];
  p_output1[2]=t420*t933 + t488*t990 + 0.15121*(-1.*t392*t933 + t267*t990) - 0.15121*(t267*t933 + t392*t990) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_rl_hip_yaw_sphere_center.hh"

namespace SymFunction
{

void Joint_rl_hip_yaw_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
