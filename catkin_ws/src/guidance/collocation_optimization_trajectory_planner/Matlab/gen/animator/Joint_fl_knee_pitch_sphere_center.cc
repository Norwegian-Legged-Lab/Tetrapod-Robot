/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:51:50 GMT+01:00
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
  double t328;
  double t531;
  double t557;
  double t558;
  double t599;
  double t602;
  double t528;
  double t1678;
  double t2107;
  double t2280;
  double t2474;
  double t2514;
  double t3660;
  double t3826;
  double t1800;
  double t2011;
  double t2095;
  double t3392;
  double t3486;
  double t3523;
  double t4007;
  double t4023;
  double t4102;
  double t4356;
  double t3835;
  double t3870;
  double t3883;
  double t3945;
  double t3957;
  double t3978;
  double t4530;
  double t4495;
  double t4501;
  double t4503;
  double t4510;
  double t4422;
  double t4430;
  double t4441;
  double t4447;
  double t4455;
  double t4466;
  double t989;
  double t1455;
  double t5053;
  double t5029;
  double t1745;
  double t1788;
  double t5036;
  double t5121;
  double t5137;
  double t5150;
  double t5151;
  double t5152;
  double t2098;
  double t2485;
  double t2525;
  double t2916;
  double t3532;
  double t3554;
  double t3600;
  double t3687;
  double t3712;
  double t3733;
  double t3771;
  double t5163;
  double t5168;
  double t5171;
  double t5217;
  double t5220;
  double t5229;
  double t3988;
  double t4104;
  double t4402;
  double t4405;
  double t4471;
  double t4479;
  double t4486;
  double t4511;
  double t4515;
  double t4519;
  double t4527;
  double t4535;
  double t4543;
  double t5239;
  double t5256;
  double t5269;
  double t5287;
  double t5422;
  double t5424;
  double t5442;
  double t5444;
  double t5382;
  double t5383;
  double t5389;
  double t5395;
  double t4862;
  double t4867;
  double t5674;
  double t5700;
  double t5706;
  double t5762;
  double t5767;
  double t5792;
  double t5798;
  double t5800;
  double t5802;
  double t5821;
  double t5823;
  double t5829;
  double t5863;
  double t5877;
  double t5896;
  double t5911;
  double t5974;
  double t5983;
  double t5984;
  double t5986;
  double t5941;
  double t5949;
  double t5950;
  double t5956;
  t328 = Cos(var1[4]);
  t531 = Cos(var1[6]);
  t557 = -1.*t531;
  t558 = 1. + t557;
  t599 = 0.15121*t558;
  t602 = Sin(var1[6]);
  t528 = Sin(var1[5]);
  t1678 = Cos(var1[5]);
  t2107 = Cos(var1[7]);
  t2280 = -1.*t2107;
  t2474 = 1. + t2280;
  t2514 = Sin(var1[7]);
  t3660 = Sin(var1[4]);
  t3826 = -1. + t2107;
  t1800 = -1.*t328*t531*t528;
  t2011 = -1.*t328*t1678*t602;
  t2095 = t1800 + t2011;
  t3392 = t328*t1678*t531;
  t3486 = -1.*t328*t528*t602;
  t3523 = t3392 + t3486;
  t4007 = Cos(var1[8]);
  t4023 = -1.*t4007;
  t4102 = 1. + t4023;
  t4356 = Sin(var1[8]);
  t3835 = 4.e-6*t3826*t3660;
  t3870 = 1.6e-11*t3826;
  t3883 = 1. + t3870;
  t3945 = t3883*t2095;
  t3957 = 4.e-6*t3523*t2514;
  t3978 = t3835 + t3945 + t3957;
  t4530 = -1. + t4007;
  t4495 = t2107*t3660;
  t4501 = 4.e-6*t3826*t2095;
  t4503 = t3523*t2514;
  t4510 = t4495 + t4501 + t4503;
  t4422 = -1.000000000016*t2474;
  t4430 = 1. + t4422;
  t4441 = t4430*t3523;
  t4447 = -1.*t3660*t2514;
  t4455 = -4.e-6*t2095*t2514;
  t4466 = t4441 + t4447 + t4455;
  t989 = -0.15121*t602;
  t1455 = t599 + t989;
  t5053 = Sin(var1[3]);
  t5029 = Cos(var1[3]);
  t1745 = 0.15121*t602;
  t1788 = t599 + t1745;
  t5036 = t5029*t1678;
  t5121 = -1.*t5053*t3660*t528;
  t5137 = t5036 + t5121;
  t5150 = t1678*t5053*t3660;
  t5151 = t5029*t528;
  t5152 = t5150 + t5151;
  t2098 = -1.2484e-7*var1[7];
  t2485 = -1.5499600000248e-7*t2474;
  t2525 = 1.124840000016e-6*t2514;
  t2916 = t2098 + t2485 + t2525;
  t3532 = 0.281210000008499*t2474;
  t3554 = 0.03874900000062*t2514;
  t3600 = t3532 + t3554;
  t3687 = 4.9936e-13*var1[7];
  t3712 = -0.03874900000062*t2474;
  t3733 = 0.281210000004*t2514;
  t3771 = t3687 + t3712 + t3733;
  t5163 = t531*t5137;
  t5168 = -1.*t5152*t602;
  t5171 = t5163 + t5168;
  t5217 = t531*t5152;
  t5220 = t5137*t602;
  t5229 = t5217 + t5220;
  t3988 = -1.284e-8*var1[8];
  t4104 = -1.5499600000248e-7*t4102;
  t4402 = 2.012840000032e-6*t4356;
  t4405 = t3988 + t4104 + t4402;
  t4471 = 0.503210000016051*t4102;
  t4479 = 0.03874900000062*t4356;
  t4486 = t4471 + t4479;
  t4511 = 5.136e-14*var1[8];
  t4515 = -0.03874900000062*t4102;
  t4519 = 0.503210000008*t4356;
  t4527 = t4511 + t4515 + t4519;
  t4535 = 1.6e-11*t4530;
  t4543 = 1. + t4535;
  t5239 = -4.e-6*t328*t3826*t5053;
  t5256 = t3883*t5171;
  t5269 = 4.e-6*t5229*t2514;
  t5287 = t5239 + t5256 + t5269;
  t5422 = -1.*t328*t2107*t5053;
  t5424 = 4.e-6*t3826*t5171;
  t5442 = t5229*t2514;
  t5444 = t5422 + t5424 + t5442;
  t5382 = t4430*t5229;
  t5383 = t328*t5053*t2514;
  t5389 = -4.e-6*t5171*t2514;
  t5395 = t5382 + t5383 + t5389;
  t4862 = -1.000000000016*t4102;
  t4867 = 1. + t4862;
  t5674 = t1678*t5053;
  t5700 = t5029*t3660*t528;
  t5706 = t5674 + t5700;
  t5762 = -1.*t5029*t1678*t3660;
  t5767 = t5053*t528;
  t5792 = t5762 + t5767;
  t5798 = t531*t5706;
  t5800 = -1.*t5792*t602;
  t5802 = t5798 + t5800;
  t5821 = t531*t5792;
  t5823 = t5706*t602;
  t5829 = t5821 + t5823;
  t5863 = 4.e-6*t5029*t328*t3826;
  t5877 = t3883*t5802;
  t5896 = 4.e-6*t5829*t2514;
  t5911 = t5863 + t5877 + t5896;
  t5974 = t5029*t328*t2107;
  t5983 = 4.e-6*t3826*t5802;
  t5984 = t5829*t2514;
  t5986 = t5974 + t5983 + t5984;
  t5941 = t4430*t5829;
  t5949 = -1.*t5029*t328*t2514;
  t5950 = -4.e-6*t5802*t2514;
  t5956 = t5941 + t5949 + t5950;
  p_output1[0]=t2095*t2916 + t1678*t1788*t328 + t3523*t3600 + t3660*t3771 + t3978*t4405 + t4466*t4486 + t4510*t4527 - 0.03875*(t4356*t4466 + t4007*t4510 + 4.e-6*t3978*t4530) + 0.16571*(4.e-6*t4356*t4466 + 4.e-6*t4510*t4530 + t3978*t4543) + 0.50321*(-4.e-6*t3978*t4356 - 1.*t4356*t4510 + t4466*t4867) - 1.*t1455*t328*t528 + var1[0];
  p_output1[1]=-1.*t328*t3771*t5053 + t1455*t5137 + t1788*t5152 + t2916*t5171 + t3600*t5229 + t4405*t5287 + t4486*t5395 + t4527*t5444 - 0.03875*(4.e-6*t4530*t5287 + t4356*t5395 + t4007*t5444) + 0.50321*(-4.e-6*t4356*t5287 + t4867*t5395 - 1.*t4356*t5444) + 0.16571*(t4543*t5287 + 4.e-6*t4356*t5395 + 4.e-6*t4530*t5444) + var1[1];
  p_output1[2]=t328*t3771*t5029 + t1455*t5706 + t1788*t5792 + t2916*t5802 + t3600*t5829 + t4405*t5911 + t4486*t5956 + t4527*t5986 - 0.03875*(4.e-6*t4530*t5911 + t4356*t5956 + t4007*t5986) + 0.50321*(-4.e-6*t4356*t5911 + t4867*t5956 - 1.*t4356*t5986) + 0.16571*(t4543*t5911 + 4.e-6*t4356*t5956 + 4.e-6*t4530*t5986) + var1[2];
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

#include "Joint_fl_knee_pitch_sphere_center.hh"

namespace SymFunction
{

void Joint_fl_knee_pitch_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
