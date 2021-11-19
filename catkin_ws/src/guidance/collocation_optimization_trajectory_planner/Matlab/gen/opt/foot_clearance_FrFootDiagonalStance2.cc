/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:31:08 GMT+01:00
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
  double t151;
  double t8;
  double t388;
  double t434;
  double t449;
  double t451;
  double t471;
  double t493;
  double t512;
  double t494;
  double t519;
  double t189;
  double t275;
  double t331;
  double t337;
  double t507;
  double t525;
  double t538;
  double t558;
  double t575;
  double t581;
  double t69;
  double t606;
  double t612;
  double t623;
  double t637;
  double t643;
  double t731;
  double t773;
  double t795;
  double t811;
  double t853;
  double t1051;
  double t922;
  double t962;
  double t965;
  double t982;
  double t992;
  double t1008;
  double t1085;
  double t1098;
  double t1102;
  double t1115;
  double t1157;
  double t1160;
  double t1162;
  double t1165;
  double t1166;
  double t1168;
  t151 = Cos(var1[10]);
  t8 = Cos(var1[3]);
  t388 = Cos(var1[9]);
  t434 = -1.*t388;
  t449 = 1. + t434;
  t451 = Sin(var1[9]);
  t471 = -0.15121*t451;
  t493 = Cos(var1[5]);
  t512 = Sin(var1[3]);
  t494 = Sin(var1[4]);
  t519 = Sin(var1[5]);
  t189 = -1.*t151;
  t275 = 1. + t189;
  t331 = -1. + t151;
  t337 = Sin(var1[10]);
  t507 = -1.*t8*t493*t494;
  t525 = t512*t519;
  t538 = t507 + t525;
  t558 = t493*t512;
  t575 = t8*t494*t519;
  t581 = t558 + t575;
  t69 = Cos(var1[4]);
  t606 = -1.*t451*t538;
  t612 = t388*t581;
  t623 = t606 + t612;
  t637 = t388*t538;
  t643 = t451*t581;
  t731 = t637 + t643;
  t773 = Cos(var1[11]);
  t795 = -1.*t773;
  t811 = 1. + t795;
  t853 = Sin(var1[11]);
  t1051 = -1. + t773;
  t922 = t8*t69*t337;
  t962 = -4.e-6*t337*t623;
  t965 = -1.000000000016*t275;
  t982 = 1. + t965;
  t992 = t982*t731;
  t1008 = t922 + t962 + t992;
  t1085 = t151*t8*t69;
  t1098 = 4.e-6*t275*t623;
  t1102 = -1.*t337*t731;
  t1115 = t1085 + t1098 + t1102;
  t1157 = 4.e-6*t275*t8*t69;
  t1160 = 1.6e-11*t331;
  t1162 = 1. + t1160;
  t1165 = t1162*t623;
  t1166 = 4.e-6*t337*t731;
  t1168 = t1157 + t1165 + t1166;
  p_output1[0]=(0.15121*t449 + t471)*t538 + (-0.15121*t449 + t471)*t581 + (0.281210000008499*t275 - 0.03874900000062*t337)*t731 + t1008*(0.50315000001605*t811 - 0.0398890000006382*t853) - 0.041195*(t1115*t773 + 4.e-6*t1168*t811 - 1.*t1008*t853) - 0.14871*((1. + 1.6e-11*t1051)*t1168 + 4.e-6*t1115*t811 + 4.e-6*t1008*t853) + 0.803147*(t1008*(1. - 1.000000000016*t811) + t1115*t853 - 4.e-6*t1168*t853) + var1[2] + t623*(2.479936e-18*t275 - 1.54996e-7*t331 + 1.124840000016e-6*t337 - 1.2484e-7*var1[10]) + t69*t8*(-0.038749*t275 + 6.19984e-13*t331 - 0.281210000004*t337 - 4.9936e-13*var1[10]) + t1168*(-1.59556e-7*t1051 + 2.552896e-18*t811 + 2.012600000032e-6*t853 - 1.26e-8*var1[11]) + t1115*(6.38224e-13*t1051 - 0.039889*t811 - 0.503150000008*t853 - 5.04e-14*var1[11]);
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

#include "foot_clearance_FrFootDiagonalStance2.hh"

namespace DiagonalStance2
{

void foot_clearance_FrFootDiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
