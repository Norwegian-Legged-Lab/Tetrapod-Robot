/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:32:21 GMT+02:00
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
  double t55;
  double t2884;
  double t3155;
  double t2927;
  double t3466;
  double t137;
  double t197;
  double t3649;
  double t3737;
  double t3792;
  double t3820;
  double t3944;
  double t3073;
  double t3564;
  double t3604;
  double t566;
  double t3958;
  double t3961;
  double t3990;
  double t4006;
  double t4011;
  double t4014;
  double t4019;
  double t4056;
  double t4061;
  double t4073;
  double t4078;
  t55 = Cos(var1[3]);
  t2884 = Cos(var1[5]);
  t3155 = Sin(var1[3]);
  t2927 = Sin(var1[4]);
  t3466 = Sin(var1[5]);
  t137 = Cos(var1[4]);
  t197 = Sin(var1[15]);
  t3649 = Cos(var1[15]);
  t3737 = t2884*t3155;
  t3792 = t55*t2927*t3466;
  t3820 = t3737 + t3792;
  t3944 = Sin(var1[16]);
  t3073 = -1.*t55*t2884*t2927;
  t3564 = t3155*t3466;
  t3604 = t3073 + t3564;
  t566 = Cos(var1[16]);
  t3958 = t3649*t55*t137;
  t3961 = -1.*t197*t3820;
  t3990 = t3958 + t3961;
  t4006 = Sin(var1[17]);
  t4011 = -1.*t3944*t3604;
  t4014 = t566*t3990;
  t4019 = t4011 + t4014;
  t4056 = Cos(var1[17]);
  t4061 = t566*t3604;
  t4073 = t3944*t3990;
  t4078 = t4061 + t4073;
  p_output1[0]=-0.1575*(1. - 1.*t3649)*t3820 + 0.325*t3944*t3990 - 0.575*t4006*t4019 - 0.575*(1. - 1.*t4056)*t4078 - 0.0641*(t4019*t4056 + t4006*t4078) - 0.295*(-1.*t4006*t4019 + t4056*t4078) + 0.1575*t137*t197*t55 - 0.2255*(t3649*t3820 + t137*t197*t55) - 0.325*t3604*(1. - 1.*t566) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "foot_clearance_RrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void foot_clearance_RrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
