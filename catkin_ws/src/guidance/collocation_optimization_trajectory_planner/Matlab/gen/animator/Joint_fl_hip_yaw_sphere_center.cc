/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:19 GMT+01:00
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
  double t139;
  double t147;
  double t153;
  double t154;
  double t164;
  double t125;
  double t194;
  double t170;
  double t175;
  double t284;
  double t293;
  double t268;
  double t197;
  double t218;
  double t283;
  double t353;
  double t363;
  double t367;
  double t377;
  double t379;
  double t436;
  double t439;
  double t442;
  double t449;
  double t453;
  double t457;
  t64 = Cos(var1[4]);
  t139 = Cos(var1[6]);
  t147 = -1.*t139;
  t153 = 1. + t147;
  t154 = 0.15121*t153;
  t164 = Sin(var1[6]);
  t125 = Sin(var1[5]);
  t194 = Cos(var1[5]);
  t170 = -0.15121*t164;
  t175 = t154 + t170;
  t284 = Sin(var1[3]);
  t293 = Sin(var1[4]);
  t268 = Cos(var1[3]);
  t197 = 0.15121*t164;
  t218 = t154 + t197;
  t283 = t268*t194;
  t353 = -1.*t284*t293*t125;
  t363 = t283 + t353;
  t367 = t194*t284*t293;
  t377 = t268*t125;
  t379 = t367 + t377;
  t436 = t194*t284;
  t439 = t268*t293*t125;
  t442 = t436 + t439;
  t449 = -1.*t268*t194*t293;
  t453 = t284*t125;
  t457 = t449 + t453;
  p_output1[0]=-1.*t125*t175*t64 + t194*t218*t64 + 0.15121*(-1.*t125*t164*t64 + t139*t194*t64) + 0.15121*(-1.*t125*t139*t64 - 1.*t164*t194*t64) + var1[0];
  p_output1[1]=t175*t363 + t218*t379 + 0.15121*(t164*t363 + t139*t379) + 0.15121*(t139*t363 - 1.*t164*t379) + var1[1];
  p_output1[2]=t175*t442 + t218*t457 + 0.15121*(t164*t442 + t139*t457) + 0.15121*(t139*t442 - 1.*t164*t457) + var1[2];
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

#include "Joint_fl_hip_yaw_sphere_center.hh"

namespace SymFunction
{

void Joint_fl_hip_yaw_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
