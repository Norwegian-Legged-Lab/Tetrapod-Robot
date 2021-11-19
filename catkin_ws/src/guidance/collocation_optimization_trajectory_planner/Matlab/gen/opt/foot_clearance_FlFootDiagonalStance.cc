/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:28:59 GMT+01:00
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
  double t289;
  double t59;
  double t309;
  double t155;
  double t315;
  double t356;
  double t363;
  double t369;
  double t370;
  double t377;
  double t249;
  double t316;
  double t355;
  double t496;
  double t507;
  double t519;
  double t617;
  double t625;
  double t626;
  double t628;
  double t668;
  double t889;
  double t566;
  double t575;
  double t610;
  double t642;
  double t652;
  double t655;
  double t993;
  double t1011;
  double t1032;
  double t1059;
  double t916;
  double t935;
  double t936;
  double t956;
  double t960;
  double t964;
  double t1191;
  double t1160;
  double t1161;
  double t1165;
  double t1167;
  double t1104;
  double t1111;
  double t1112;
  double t1124;
  double t1125;
  double t1134;
  t289 = Cos(var1[3]);
  t59 = Cos(var1[5]);
  t309 = Sin(var1[4]);
  t155 = Sin(var1[3]);
  t315 = Sin(var1[5]);
  t356 = Cos(var1[6]);
  t363 = -1.*t356;
  t369 = 1. + t363;
  t370 = 0.15121*t369;
  t377 = Sin(var1[6]);
  t249 = t59*t155;
  t316 = t289*t309*t315;
  t355 = t249 + t316;
  t496 = -1.*t289*t59*t309;
  t507 = t155*t315;
  t519 = t496 + t507;
  t617 = Cos(var1[7]);
  t625 = -1.*t617;
  t626 = 1. + t625;
  t628 = Sin(var1[7]);
  t668 = Cos(var1[4]);
  t889 = -1. + t617;
  t566 = t356*t355;
  t575 = -1.*t519*t377;
  t610 = t566 + t575;
  t642 = t356*t519;
  t652 = t355*t377;
  t655 = t642 + t652;
  t993 = Cos(var1[8]);
  t1011 = -1.*t993;
  t1032 = 1. + t1011;
  t1059 = Sin(var1[8]);
  t916 = 4.e-6*t289*t668*t889;
  t935 = 1.6e-11*t889;
  t936 = 1. + t935;
  t956 = t936*t610;
  t960 = 4.e-6*t655*t628;
  t964 = t916 + t956 + t960;
  t1191 = -1. + t993;
  t1160 = t289*t668*t617;
  t1161 = 4.e-6*t889*t610;
  t1165 = t655*t628;
  t1167 = t1160 + t1161 + t1165;
  t1104 = -1.000000000016*t626;
  t1111 = 1. + t1104;
  t1112 = t1111*t655;
  t1124 = -1.*t289*t668*t628;
  t1125 = -4.e-6*t610*t628;
  t1134 = t1112 + t1124 + t1125;
  p_output1[0]=(0.503210000016051*t1032 + 0.03874900000062*t1059)*t1134 + t355*(t370 - 0.15121*t377) + (t370 + 0.15121*t377)*t519 + (0.281210000008499*t626 + 0.03874900000062*t628)*t655 + 0.80321*((1. - 1.000000000016*t1032)*t1134 - 1.*t1059*t1167 - 4.e-6*t1059*t964) + 0.14871*(4.e-6*t1059*t1134 + 4.e-6*t1167*t1191 + (1. + 1.6e-11*t1191)*t964) - 0.03875*(t1059*t1134 + 4.e-6*t1191*t964 + t1167*t993) + var1[2] + t610*(-1.5499600000248e-7*t626 + 1.124840000016e-6*t628 - 1.2484e-7*var1[7]) + t289*t668*(-0.03874900000062*t626 + 0.281210000004*t628 + 4.9936e-13*var1[7]) + t964*(-1.5499600000248e-7*t1032 + 2.012840000032e-6*t1059 - 1.284e-8*var1[8]) + t1167*(-0.03874900000062*t1032 + 0.503210000008*t1059 + 5.136e-14*var1[8]);
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

#include "foot_clearance_FlFootDiagonalStance.hh"

namespace DiagonalStance
{

void foot_clearance_FlFootDiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
