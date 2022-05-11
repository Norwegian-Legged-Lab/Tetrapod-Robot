/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:11:24 GMT+02:00
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
  double t197;
  double t271;
  double t272;
  double t2299;
  double t2868;
  double t209;
  double t3142;
  double t57;
  double t3151;
  double t3161;
  double t3284;
  double t3309;
  double t3343;
  double t3522;
  double t3524;
  double t3544;
  double t3578;
  double t3597;
  double t3633;
  double t153;
  double t160;
  double t4333;
  double t2338;
  double t2858;
  double t4383;
  double t4609;
  double t4647;
  double t4752;
  double t4379;
  double t4426;
  double t4520;
  double t5128;
  double t5129;
  double t5151;
  double t3562;
  double t3574;
  double t5250;
  double t5483;
  double t5489;
  double t6002;
  double t6003;
  double t6004;
  double t6138;
  double t6157;
  double t6163;
  double t6123;
  double t6126;
  double t6133;
  double t6613;
  double t6617;
  double t6622;
  double t6654;
  double t6658;
  double t6660;
  double t6662;
  double t6663;
  double t6664;
  t197 = Cos(var1[4]);
  t271 = Sin(var1[9]);
  t272 = Sin(var1[4]);
  t2299 = Cos(var1[9]);
  t2868 = Sin(var1[5]);
  t209 = Cos(var1[5]);
  t3142 = Sin(var1[10]);
  t57 = Cos(var1[10]);
  t3151 = t2299*t272;
  t3161 = t197*t271*t2868;
  t3284 = t3151 + t3161;
  t3309 = Sin(var1[11]);
  t3343 = -1.*t197*t209*t3142;
  t3522 = t57*t3284;
  t3524 = t3343 + t3522;
  t3544 = Cos(var1[11]);
  t3578 = t57*t197*t209;
  t3597 = t3142*t3284;
  t3633 = t3578 + t3597;
  t153 = -1.*t57;
  t160 = 1. + t153;
  t4333 = Sin(var1[3]);
  t2338 = -1.*t2299;
  t2858 = 1. + t2338;
  t4383 = Cos(var1[3]);
  t4609 = t4383*t209;
  t4647 = -1.*t4333*t272*t2868;
  t4752 = t4609 + t4647;
  t4379 = t209*t4333*t272;
  t4426 = t4383*t2868;
  t4520 = t4379 + t4426;
  t5128 = -1.*t2299*t197*t4333;
  t5129 = -1.*t271*t4752;
  t5151 = t5128 + t5129;
  t3562 = -1.*t3544;
  t3574 = 1. + t3562;
  t5250 = -1.*t3142*t4520;
  t5483 = t57*t5151;
  t5489 = t5250 + t5483;
  t6002 = t57*t4520;
  t6003 = t3142*t5151;
  t6004 = t6002 + t6003;
  t6138 = t209*t4333;
  t6157 = t4383*t272*t2868;
  t6163 = t6138 + t6157;
  t6123 = -1.*t4383*t209*t272;
  t6126 = t4333*t2868;
  t6133 = t6123 + t6126;
  t6613 = t2299*t4383*t197;
  t6617 = -1.*t271*t6163;
  t6622 = t6613 + t6617;
  t6654 = -1.*t3142*t6133;
  t6658 = t57*t6622;
  t6660 = t6654 + t6658;
  t6662 = t57*t6133;
  t6663 = t3142*t6622;
  t6664 = t6662 + t6663;
  p_output1[0]=-0.325*t160*t197*t209 - 0.1575*t271*t272 - 0.1575*t197*t2858*t2868 + 0.2255*(t271*t272 - 1.*t197*t2299*t2868) + 0.325*t3142*t3284 - 0.575*t3309*t3524 - 0.575*t3574*t3633 - 0.0641*(t3524*t3544 + t3309*t3633) - 0.295*(-1.*t3309*t3524 + t3544*t3633) + var1[0];
  p_output1[1]=0.1575*t197*t271*t4333 - 0.325*t160*t4520 + 0.1575*t2858*t4752 + 0.2255*(-1.*t197*t271*t4333 + t2299*t4752) + 0.325*t3142*t5151 - 0.575*t3309*t5489 - 0.575*t3574*t6004 - 0.0641*(t3544*t5489 + t3309*t6004) - 0.295*(-1.*t3309*t5489 + t3544*t6004) + var1[1];
  p_output1[2]=-0.1575*t197*t271*t4383 - 0.325*t160*t6133 + 0.1575*t2858*t6163 + 0.2255*(t197*t271*t4383 + t2299*t6163) + 0.325*t3142*t6622 - 0.575*t3309*t6660 - 0.575*t3574*t6664 - 0.0641*(t3544*t6660 + t3309*t6664) - 0.295*(-1.*t3309*t6660 + t3544*t6664) + var1[2];
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

#include "RlFoot_sphere_center.hh"

namespace SymFunction
{

void RlFoot_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
