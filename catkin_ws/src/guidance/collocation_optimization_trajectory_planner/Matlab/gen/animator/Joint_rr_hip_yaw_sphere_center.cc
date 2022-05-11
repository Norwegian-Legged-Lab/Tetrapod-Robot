/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:52:06 GMT+01:00
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
  double t207;
  double t617;
  double t630;
  double t636;
  double t678;
  double t742;
  double t396;
  double t2349;
  double t1025;
  double t1287;
  double t1479;
  double t1795;
  double t2596;
  double t2582;
  double t2583;
  double t2584;
  double t2606;
  double t2611;
  double t2616;
  double t2617;
  double t2621;
  double t2897;
  double t2967;
  double t2972;
  double t2974;
  double t2976;
  double t2977;
  t207 = Cos(var1[4]);
  t617 = Cos(var1[15]);
  t630 = -1.*t617;
  t636 = 1. + t630;
  t678 = -0.15121*t636;
  t742 = Sin(var1[15]);
  t396 = Cos(var1[5]);
  t2349 = Sin(var1[5]);
  t1025 = -0.15121*t742;
  t1287 = t678 + t1025;
  t1479 = 0.15121*t742;
  t1795 = t678 + t1479;
  t2596 = Cos(var1[3]);
  t2582 = Sin(var1[3]);
  t2583 = Sin(var1[4]);
  t2584 = t396*t2582*t2583;
  t2606 = t2596*t2349;
  t2611 = t2584 + t2606;
  t2616 = t2596*t396;
  t2617 = -1.*t2582*t2583*t2349;
  t2621 = t2616 + t2617;
  t2897 = -1.*t2596*t396*t2583;
  t2967 = t2582*t2349;
  t2972 = t2897 + t2967;
  t2974 = t396*t2582;
  t2976 = t2596*t2583*t2349;
  t2977 = t2974 + t2976;
  p_output1[0]=-1.*t1795*t207*t2349 + t1287*t207*t396 - 0.15121*(t207*t396*t617 - 1.*t207*t2349*t742) - 0.15121*(-1.*t207*t2349*t617 - 1.*t207*t396*t742) + var1[0];
  p_output1[1]=t1287*t2611 + t1795*t2621 - 0.15121*(t2621*t617 - 1.*t2611*t742) - 0.15121*(t2611*t617 + t2621*t742) + var1[1];
  p_output1[2]=t1287*t2972 + t1795*t2977 - 0.15121*(t2977*t617 - 1.*t2972*t742) - 0.15121*(t2972*t617 + t2977*t742) + var1[2];
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
