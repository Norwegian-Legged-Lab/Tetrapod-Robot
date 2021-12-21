/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:18:48 GMT+01:00
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
  double t395;
  double t72;
  double t466;
  double t484;
  double t496;
  double t521;
  double t523;
  double t542;
  double t584;
  double t562;
  double t586;
  double t411;
  double t423;
  double t433;
  double t437;
  double t563;
  double t605;
  double t616;
  double t648;
  double t653;
  double t656;
  double t288;
  double t675;
  double t680;
  double t681;
  double t690;
  double t691;
  double t704;
  double t758;
  double t762;
  double t786;
  double t828;
  double t1009;
  double t898;
  double t916;
  double t934;
  double t957;
  double t960;
  double t961;
  double t1069;
  double t1070;
  double t1092;
  double t1093;
  double t1110;
  double t1111;
  double t1116;
  double t1117;
  double t1120;
  double t1129;
  t395 = Cos(var1[10]);
  t72 = Cos(var1[3]);
  t466 = Cos(var1[9]);
  t484 = -1.*t466;
  t496 = 1. + t484;
  t521 = Sin(var1[9]);
  t523 = -0.15121*t521;
  t542 = Cos(var1[5]);
  t584 = Sin(var1[3]);
  t562 = Sin(var1[4]);
  t586 = Sin(var1[5]);
  t411 = -1.*t395;
  t423 = 1. + t411;
  t433 = -1. + t395;
  t437 = Sin(var1[10]);
  t563 = -1.*t72*t542*t562;
  t605 = t584*t586;
  t616 = t563 + t605;
  t648 = t542*t584;
  t653 = t72*t562*t586;
  t656 = t648 + t653;
  t288 = Cos(var1[4]);
  t675 = -1.*t521*t616;
  t680 = t466*t656;
  t681 = t675 + t680;
  t690 = t466*t616;
  t691 = t521*t656;
  t704 = t690 + t691;
  t758 = Cos(var1[11]);
  t762 = -1.*t758;
  t786 = 1. + t762;
  t828 = Sin(var1[11]);
  t1009 = -1. + t758;
  t898 = t72*t288*t437;
  t916 = -4.e-6*t437*t681;
  t934 = -1.000000000016*t423;
  t957 = 1. + t934;
  t960 = t957*t704;
  t961 = t898 + t916 + t960;
  t1069 = t395*t72*t288;
  t1070 = 4.e-6*t423*t681;
  t1092 = -1.*t437*t704;
  t1093 = t1069 + t1070 + t1092;
  t1110 = 4.e-6*t423*t72*t288;
  t1111 = 1.6e-11*t433;
  t1116 = 1. + t1111;
  t1117 = t1116*t681;
  t1120 = 4.e-6*t437*t704;
  t1129 = t1110 + t1117 + t1120;
  p_output1[0]=(0.15121*t496 + t523)*t616 + (-0.15121*t496 + t523)*t656 + (0.281210000008499*t423 - 0.03874900000062*t437)*t704 + (0.50315000001605*t786 - 0.0398890000006382*t828)*t961 + 0.803147*(t1093*t828 - 4.e-6*t1129*t828 + (1. - 1.000000000016*t786)*t961) - 0.041195*(t1093*t758 + 4.e-6*t1129*t786 - 1.*t828*t961) - 0.14871*((1. + 1.6e-11*t1009)*t1129 + 4.e-6*t1093*t786 + 4.e-6*t828*t961) + var1[2] + t681*(2.479936e-18*t423 - 1.54996e-7*t433 + 1.124840000016e-6*t437 - 1.2484e-7*var1[10]) + t288*t72*(-0.038749*t423 + 6.19984e-13*t433 - 0.281210000004*t437 - 4.9936e-13*var1[10]) + t1129*(-1.59556e-7*t1009 + 2.552896e-18*t786 + 2.012600000032e-6*t828 - 1.26e-8*var1[11]) + t1093*(6.38224e-13*t1009 - 0.039889*t786 - 0.503150000008*t828 - 5.04e-14*var1[11]);
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

#include "foot_clearance_FrFoot.hh"

namespace TrotStance2
{

void foot_clearance_FrFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
