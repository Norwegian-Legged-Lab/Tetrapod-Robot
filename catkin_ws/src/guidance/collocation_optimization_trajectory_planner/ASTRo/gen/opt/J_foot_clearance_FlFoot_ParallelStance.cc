/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:01:22 GMT+02:00
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
  double t860;
  double t1004;
  double t1005;
  double t850;
  double t1098;
  double t1190;
  double t1233;
  double t1245;
  double t1254;
  double t1275;
  double t909;
  double t1120;
  double t1132;
  double t1382;
  double t1619;
  double t1692;
  double t2069;
  double t2404;
  double t2413;
  double t2469;
  double t2805;
  double t2826;
  double t2839;
  double t2863;
  double t3028;
  double t3029;
  double t3039;
  double t3098;
  double t3181;
  double t3220;
  double t1313;
  double t1335;
  double t1696;
  double t1699;
  double t2134;
  double t2222;
  double t2848;
  double t2858;
  double t4443;
  double t4517;
  double t4563;
  double t4727;
  double t4728;
  double t4733;
  double t4795;
  double t4799;
  double t4800;
  double t5325;
  double t5437;
  double t5538;
  double t4956;
  double t4987;
  double t5081;
  double t5883;
  double t6204;
  double t6708;
  double t7630;
  double t7659;
  double t7692;
  double t7798;
  double t7813;
  double t6942;
  double t8355;
  double t8357;
  double t8363;
  double t8371;
  double t8372;
  double t8374;
  double t8407;
  double t8417;
  double t8421;
  double t8581;
  double t8590;
  double t8622;
  t860 = Cos(var1[5]);
  t1004 = Sin(var1[3]);
  t1005 = Sin(var1[4]);
  t850 = Cos(var1[3]);
  t1098 = Sin(var1[5]);
  t1190 = Cos(var1[6]);
  t1233 = -1.*t1190;
  t1245 = 1. + t1233;
  t1254 = 0.15121*t1245;
  t1275 = Sin(var1[6]);
  t909 = t850*t860;
  t1120 = -1.*t1004*t1005*t1098;
  t1132 = t909 + t1120;
  t1382 = t860*t1004*t1005;
  t1619 = t850*t1098;
  t1692 = t1382 + t1619;
  t2069 = Cos(var1[7]);
  t2404 = t1190*t1692;
  t2413 = t1132*t1275;
  t2469 = t2404 + t2413;
  t2805 = Cos(var1[4]);
  t2826 = Sin(var1[7]);
  t2839 = Cos(var1[8]);
  t2863 = t2069*t2469;
  t3028 = t2805*t1004*t2826;
  t3029 = t2863 + t3028;
  t3039 = -1.*t2805*t2069*t1004;
  t3098 = t2469*t2826;
  t3181 = t3039 + t3098;
  t3220 = Sin(var1[8]);
  t1313 = -0.15121*t1275;
  t1335 = t1254 + t1313;
  t1696 = 0.15121*t1275;
  t1699 = t1254 + t1696;
  t2134 = -1.*t2069;
  t2222 = 1. + t2134;
  t2848 = -1.*t2839;
  t2858 = 1. + t2848;
  t4443 = -1.*t850*t2805*t860*t1190;
  t4517 = t850*t2805*t1098*t1275;
  t4563 = t4443 + t4517;
  t4727 = t2069*t4563;
  t4728 = t850*t1005*t2826;
  t4733 = t4727 + t4728;
  t4795 = -1.*t850*t2069*t1005;
  t4799 = t4563*t2826;
  t4800 = t4795 + t4799;
  t5325 = t860*t1004;
  t5437 = t850*t1005*t1098;
  t5538 = t5325 + t5437;
  t4956 = t850*t860*t1005;
  t4987 = -1.*t1004*t1098;
  t5081 = t4956 + t4987;
  t5883 = t1190*t5538;
  t6204 = t5081*t1275;
  t6708 = t5883 + t6204;
  t7630 = -1.*t850*t860*t1005;
  t7659 = t1004*t1098;
  t7692 = t7630 + t7659;
  t7798 = -1.*t7692*t1275;
  t7813 = t5883 + t7798;
  t6942 = -1.*t5538*t1275;
  t8355 = t1190*t7692;
  t8357 = t5538*t1275;
  t8363 = t8355 + t8357;
  t8371 = -1.*t850*t2805*t2069;
  t8372 = -1.*t8363*t2826;
  t8374 = t8371 + t8372;
  t8407 = t2069*t8363;
  t8417 = -1.*t850*t2805*t2826;
  t8421 = t8407 + t8417;
  t8581 = t850*t2805*t2069;
  t8590 = t8363*t2826;
  t8622 = t8581 + t8590;
  p_output1[0]=1.;
  p_output1[1]=t1132*t1335 + 0.15121*(t1132*t1190 - 1.*t1275*t1692) + t1692*t1699 + 0.28121*t2222*t2469 - 0.28121*t1004*t2805*t2826 + 0.50321*t2858*t3029 - 0.50321*t3181*t3220 + 0.19821*(t2839*t3029 + t3181*t3220);
  p_output1[2]=0.28121*t2222*t4563 + 0.50321*t2858*t4733 - 0.50321*t3220*t4800 + 0.19821*(t2839*t4733 + t3220*t4800) + t1098*t1335*t2805*t850 - 0.28121*t1005*t2826*t850 - 1.*t1699*t2805*t850*t860 + 0.15121*(t1098*t1190*t2805*t850 + t1275*t2805*t850*t860);
  p_output1[3]=t1335*t5081 + t1699*t5538 + 0.28121*t2222*t6708 + 0.50321*t2069*t2858*t6708 - 0.50321*t2826*t3220*t6708 + 0.19821*(t2069*t2839*t6708 + t2826*t3220*t6708) + 0.15121*(t1190*t5081 + t6942);
  p_output1[4]=(-0.15121*t1190 + t1696)*t5538 + (0.15121*t1190 + t1696)*t7692 + 0.15121*(t6942 - 1.*t1190*t7692) + 0.28121*t2222*t7813 + 0.50321*t2069*t2858*t7813 - 0.50321*t2826*t3220*t7813 + 0.19821*(t2069*t2839*t7813 + t2826*t3220*t7813);
  p_output1[5]=0.28121*t2826*t8363 + 0.50321*t2858*t8374 - 0.50321*t3220*t8421 + 0.19821*(t2839*t8374 + t3220*t8421) + 0.28121*t2069*t2805*t850;
  p_output1[6]=0.50321*t3220*t8421 - 0.50321*t2839*t8622 + 0.19821*(-1.*t3220*t8421 + t2839*t8622);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_foot_clearance_FlFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_foot_clearance_FlFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
