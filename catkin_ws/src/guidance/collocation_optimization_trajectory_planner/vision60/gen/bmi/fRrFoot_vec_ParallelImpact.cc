/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:11:12 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t2033;
  double t1780;
  double t2035;
  double t2131;
  double t2113;
  double t2119;
  double t2445;
  double t1265;
  double t2120;
  double t2475;
  double t2476;
  double t2076;
  double t2488;
  double t2496;
  double t2497;
  double t2486;
  double t3189;
  double t3205;
  double t2499;
  double t2520;
  double t2525;
  double t2548;
  double t2549;
  double t3018;
  double t3023;
  double t3025;
  double t3052;
  double t3218;
  double t3233;
  double t3235;
  double t4635;
  double t4636;
  double t7195;
  double t10118;
  double t10247;
  double t10431;
  double t11021;
  double t15762;
  double t16004;
  double t16023;
  double t16215;
  double t19097;
  double t2481;
  double t2527;
  double t2541;
  double t19989;
  double t19990;
  double t20032;
  double t20059;
  double t20060;
  double t20064;
  double t20067;
  double t20068;
  double t20069;
  double t1813;
  double t2077;
  double t2096;
  double t19988;
  double t20036;
  double t20070;
  double t20076;
  double t20092;
  double t20180;
  double t20185;
  double t20217;
  double t20233;
  double t20245;
  double t19959;
  double t19983;
  double t19984;
  double t19987;
  double t20080;
  double t20084;
  double t20417;
  double t20710;
  double t21132;
  double t24671;
  double t24701;
  double t24751;
  double t20091;
  double t20300;
  double t20313;
  double t22349;
  double t25377;
  double t26902;
  double t31538;
  double t31539;
  double t32118;
  double t2546;
  double t3085;
  double t3090;
  double t20355;
  double t33907;
  double t35239;
  double t37332;
  double t40769;
  double t40816;
  double t42537;
  double t42575;
  double t41189;
  double t41260;
  double t42374;
  double t42046;
  double t43222;
  double t43099;
  t2033 = Cos(var1[15]);
  t1780 = Sin(var1[4]);
  t2035 = Cos(var1[4]);
  t2131 = Cos(var1[16]);
  t2113 = Cos(var1[17]);
  t2119 = Sin(var1[16]);
  t2445 = Sin(var1[17]);
  t1265 = Sin(var1[15]);
  t2120 = t2113*t2119;
  t2475 = -1.*t2131*t2445;
  t2476 = t2120 + t2475;
  t2076 = Sin(var1[5]);
  t2488 = t2131*t2113;
  t2496 = t2119*t2445;
  t2497 = t2488 + t2496;
  t2486 = Cos(var1[5]);
  t3189 = Cos(var1[3]);
  t3205 = Sin(var1[3]);
  t2499 = t2486*t2497;
  t2520 = t1265*t2476*t2076;
  t2525 = t2499 + t2520;
  t2548 = -1.*t2113*t2119;
  t2549 = t2131*t2445;
  t3018 = t2548 + t2549;
  t3023 = t2486*t3018;
  t3025 = t1265*t2497*t2076;
  t3052 = t3023 + t3025;
  t3218 = t2035*t1265;
  t3233 = t2033*t1780*t2076;
  t3235 = t3218 + t3233;
  t4635 = -1.*t2486*t1265*t2476;
  t4636 = t2497*t2076;
  t7195 = t4635 + t4636;
  t10118 = t2033*t2035*t2476;
  t10247 = -1.*t1780*t2525;
  t10431 = t10118 + t10247;
  t11021 = -1.*t2486*t1265*t2497;
  t15762 = t3018*t2076;
  t16004 = t11021 + t15762;
  t16023 = t2033*t2035*t2497;
  t16215 = -1.*t1780*t3052;
  t19097 = t16023 + t16215;
  t2481 = t2033*t2476*t1780;
  t2527 = t2035*t2525;
  t2541 = t2481 + t2527;
  t19989 = -0.0641*t2113;
  t19990 = -0.28*t2445;
  t20032 = t19989 + t19990;
  t20059 = -1.*t2113;
  t20060 = 1. + t20059;
  t20064 = -0.575*t20060;
  t20067 = -0.295*t2113;
  t20068 = -0.0641*t2445;
  t20069 = t20064 + t20067 + t20068;
  t1813 = t1265*t1780;
  t2077 = -1.*t2033*t2035*t2076;
  t2096 = t1813 + t2077;
  t19988 = 0.325*t2119;
  t20036 = t2131*t20032;
  t20070 = t2119*t20069;
  t20076 = t19988 + t20036 + t20070;
  t20092 = -1.*t2131;
  t20180 = 1. + t20092;
  t20185 = -0.325*t20180;
  t20217 = -1.*t2119*t20032;
  t20233 = t2131*t20069;
  t20245 = t20185 + t20217 + t20233;
  t19959 = -1.*t2033;
  t19983 = 1. + t19959;
  t19984 = -0.1575*t19983;
  t19987 = -0.2255*t2033;
  t20080 = -1.*t1265*t20076;
  t20084 = t19984 + t19987 + t20080;
  t20417 = -0.068*t1265;
  t20710 = t2033*t20076;
  t21132 = t20417 + t20710;
  t24671 = t2486*t20245;
  t24701 = -1.*t20084*t2076;
  t24751 = t24671 + t24701;
  t20091 = t2486*t20084;
  t20300 = t20245*t2076;
  t20313 = t20091 + t20300;
  t22349 = t21132*t1780;
  t25377 = t2035*t24751;
  t26902 = t22349 + t25377;
  t31538 = t2035*t21132;
  t31539 = -1.*t1780*t24751;
  t32118 = t31538 + t31539;
  t2546 = t2033*t2497*t1780;
  t3085 = t2035*t3052;
  t3090 = t2546 + t3085;
  t20355 = t2033*t2486*t20313;
  t33907 = -1.*t20313*t7195;
  t35239 = t20313*t7195;
  t37332 = -1.*t20313*t16004;
  t40769 = -1.*t2033*t2486*t20313;
  t40816 = t20313*t16004;
  t42537 = -1.*t1265*t21132;
  t42575 = t2033*t21132*t2497;
  t41189 = t1265*t21132;
  t41260 = -1.*t2033*t21132*t2476;
  t42374 = -1.*t2033*t21132*t2497;
  t42046 = t2033*t21132*t2476;
  t43222 = t20245*t2497;
  t43099 = -1.*t20245*t3018;
  p_output1[0]=t2541*var2[0] + t2096*var2[1] + t3090*var2[2];
  p_output1[1]=(-1.*t10431*t3205 + t3189*t7195)*var2[0] + (t2033*t2486*t3189 - 1.*t3205*t3235)*var2[1] + (t16004*t3189 - 1.*t19097*t3205)*var2[2];
  p_output1[2]=(t10431*t3189 + t3205*t7195)*var2[0] + (t2033*t2486*t3205 + t3189*t3235)*var2[1] + (t19097*t3189 + t16004*t3205)*var2[2];
  p_output1[3]=(t3090*(-1.*t2096*t26902 - 1.*t32118*t3235 + t40769) + t2096*(t26902*t3090 + t19097*t32118 + t40816))*var2[0] + (t3090*(t2541*t26902 + t10431*t32118 + t35239) + t2541*(-1.*t26902*t3090 - 1.*t19097*t32118 + t37332))*var2[1] + (t2541*(t20355 + t2096*t26902 + t32118*t3235) + t2096*(-1.*t2541*t26902 - 1.*t10431*t32118 + t33907))*var2[2];
  p_output1[4]=(t16004*(t2033*t2076*t24751 + t40769 + t42537) + t2033*t2486*(t24751*t3052 + t40816 + t42575))*var2[0] + (t16004*(t24751*t2525 + t35239 + t42046) + (-1.*t24751*t3052 + t37332 + t42374)*t7195)*var2[1] + (t2033*t2486*(-1.*t24751*t2525 + t33907 + t41260) + (t20355 - 1.*t2033*t2076*t24751 + t41189)*t7195)*var2[2];
  p_output1[5]=(t2033*t2497*(-1.*t20084*t2033 + t42537) + t1265*(-1.*t1265*t20084*t2497 + t20245*t3018 + t42575))*var2[0] + (t2033*t2476*(t1265*t20084*t2497 + t42374 + t43099) + t2033*t2497*(-1.*t1265*t20084*t2476 + t42046 + t43222))*var2[1] + (t2033*t2476*(t20084*t2033 + t41189) + t1265*(t1265*t20084*t2476 - 1.*t20245*t2497 + t41260))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.1575*t2476 + 0.2255*t3018)*var2[0] + (t2497*(-1.*t20076*t2497 + t43099) + t3018*(t20076*t2476 + t43222))*var2[1] - 0.068*t2497*var2[2];
  p_output1[16]=(-1.*t20032*t2113 - 0.325*t2445 - 1.*t20069*t2445)*var2[0] + (0.325*t2113 + t20069*t2113 - 1.*t20032*t2445)*var2[2];
  p_output1[17]=-0.0641*var2[0] - 0.28*var2[2];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
