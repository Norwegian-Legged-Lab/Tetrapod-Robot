/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:31 GMT+01:00
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
  double t46;
  double t92;
  double t141;
  double t153;
  double t154;
  double t190;
  double t49;
  double t277;
  double t230;
  double t248;
  double t258;
  double t276;
  double t632;
  double t555;
  double t566;
  double t603;
  double t687;
  double t704;
  double t734;
  double t819;
  double t839;
  double t958;
  double t960;
  double t968;
  double t971;
  double t984;
  double t999;
  t46 = Cos(var1[4]);
  t92 = Cos(var1[15]);
  t141 = -1.*t92;
  t153 = 1. + t141;
  t154 = -0.15121*t153;
  t190 = Sin(var1[15]);
  t49 = Cos(var1[5]);
  t277 = Sin(var1[5]);
  t230 = -0.15121*t190;
  t248 = t154 + t230;
  t258 = 0.15121*t190;
  t276 = t154 + t258;
  t632 = Cos(var1[3]);
  t555 = Sin(var1[3]);
  t566 = Sin(var1[4]);
  t603 = t49*t555*t566;
  t687 = t632*t277;
  t704 = t603 + t687;
  t734 = t632*t49;
  t819 = -1.*t555*t566*t277;
  t839 = t734 + t819;
  t958 = -1.*t632*t49*t566;
  t960 = t555*t277;
  t968 = t958 + t960;
  t971 = t49*t555;
  t984 = t632*t566*t277;
  t999 = t971 + t984;
  p_output1[0]=-1.*t276*t277*t46 + t248*t46*t49 - 0.15121*(-1.*t190*t46*t49 - 1.*t277*t46*t92) - 0.15121*(-1.*t190*t277*t46 + t46*t49*t92) + var1[0];
  p_output1[1]=t248*t704 + t276*t839 - 0.15121*(t190*t839 + t704*t92) - 0.15121*(-1.*t190*t704 + t839*t92) + var1[1];
  p_output1[2]=t248*t968 + t276*t999 - 0.15121*(t92*t968 + t190*t999) - 0.15121*(-1.*t190*t968 + t92*t999) + var1[2];
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

#include "Joint_rr_hip_yaw_sphere_center.hh"

namespace SymFunction
{

void Joint_rr_hip_yaw_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
