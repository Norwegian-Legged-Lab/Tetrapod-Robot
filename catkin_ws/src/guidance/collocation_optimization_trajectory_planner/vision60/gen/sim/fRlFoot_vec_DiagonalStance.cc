/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:56 GMT+02:00
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
  double t2784;
  double t2742;
  double t2789;
  double t2834;
  double t2826;
  double t2831;
  double t2854;
  double t2694;
  double t2832;
  double t2871;
  double t2874;
  double t2791;
  double t2880;
  double t2881;
  double t2888;
  double t2879;
  double t3089;
  double t3096;
  double t2889;
  double t2894;
  double t2897;
  double t2905;
  double t2910;
  double t2912;
  double t3039;
  double t3052;
  double t3054;
  double t3103;
  double t3111;
  double t3113;
  double t3131;
  double t3134;
  double t3140;
  double t3142;
  double t3147;
  double t3148;
  double t3170;
  double t3172;
  double t3173;
  double t3179;
  double t3185;
  double t3198;
  double t2875;
  double t2898;
  double t2899;
  double t3329;
  double t3333;
  double t3334;
  double t3339;
  double t3340;
  double t3341;
  double t3348;
  double t3351;
  double t3355;
  double t2766;
  double t2812;
  double t2816;
  double t3328;
  double t3335;
  double t3358;
  double t3359;
  double t3369;
  double t3374;
  double t3376;
  double t3377;
  double t3380;
  double t3382;
  double t3299;
  double t3316;
  double t3320;
  double t3321;
  double t3362;
  double t3366;
  double t3405;
  double t3411;
  double t3413;
  double t3421;
  double t3425;
  double t3435;
  double t3368;
  double t3383;
  double t3388;
  double t3420;
  double t3441;
  double t3442;
  double t3452;
  double t3454;
  double t3462;
  double t2904;
  double t3056;
  double t3067;
  double t3398;
  double t3478;
  double t3493;
  double t3506;
  double t3528;
  double t3539;
  double t3621;
  double t3627;
  double t3571;
  double t3581;
  double t3611;
  double t3596;
  double t3719;
  double t3705;
  t2784 = Cos(var1[9]);
  t2742 = Sin(var1[4]);
  t2789 = Cos(var1[4]);
  t2834 = Cos(var1[10]);
  t2826 = Cos(var1[11]);
  t2831 = Sin(var1[10]);
  t2854 = Sin(var1[11]);
  t2694 = Sin(var1[9]);
  t2832 = t2826*t2831;
  t2871 = -1.*t2834*t2854;
  t2874 = t2832 + t2871;
  t2791 = Sin(var1[5]);
  t2880 = t2834*t2826;
  t2881 = t2831*t2854;
  t2888 = t2880 + t2881;
  t2879 = Cos(var1[5]);
  t3089 = Cos(var1[3]);
  t3096 = Sin(var1[3]);
  t2889 = t2879*t2888;
  t2894 = t2694*t2874*t2791;
  t2897 = t2889 + t2894;
  t2905 = -1.*t2826*t2831;
  t2910 = t2834*t2854;
  t2912 = t2905 + t2910;
  t3039 = t2879*t2912;
  t3052 = t2694*t2888*t2791;
  t3054 = t3039 + t3052;
  t3103 = t2789*t2694;
  t3111 = t2784*t2742*t2791;
  t3113 = t3103 + t3111;
  t3131 = -1.*t2879*t2694*t2874;
  t3134 = t2888*t2791;
  t3140 = t3131 + t3134;
  t3142 = t2784*t2789*t2874;
  t3147 = -1.*t2742*t2897;
  t3148 = t3142 + t3147;
  t3170 = -1.*t2879*t2694*t2888;
  t3172 = t2912*t2791;
  t3173 = t3170 + t3172;
  t3179 = t2784*t2789*t2888;
  t3185 = -1.*t2742*t3054;
  t3198 = t3179 + t3185;
  t2875 = t2784*t2874*t2742;
  t2898 = t2789*t2897;
  t2899 = t2875 + t2898;
  t3329 = -0.0641*t2826;
  t3333 = -0.28*t2854;
  t3334 = t3329 + t3333;
  t3339 = -1.*t2826;
  t3340 = 1. + t3339;
  t3341 = -0.575*t3340;
  t3348 = -0.295*t2826;
  t3351 = -0.0641*t2854;
  t3355 = t3341 + t3348 + t3351;
  t2766 = t2694*t2742;
  t2812 = -1.*t2784*t2789*t2791;
  t2816 = t2766 + t2812;
  t3328 = 0.325*t2831;
  t3335 = t2834*t3334;
  t3358 = t2831*t3355;
  t3359 = t3328 + t3335 + t3358;
  t3369 = -1.*t2834;
  t3374 = 1. + t3369;
  t3376 = -0.325*t3374;
  t3377 = -1.*t2831*t3334;
  t3380 = t2834*t3355;
  t3382 = t3376 + t3377 + t3380;
  t3299 = -1.*t2784;
  t3316 = 1. + t3299;
  t3320 = 0.1575*t3316;
  t3321 = 0.2255*t2784;
  t3362 = -1.*t2694*t3359;
  t3366 = t3320 + t3321 + t3362;
  t3405 = 0.068*t2694;
  t3411 = t2784*t3359;
  t3413 = t3405 + t3411;
  t3421 = t2879*t3382;
  t3425 = -1.*t3366*t2791;
  t3435 = t3421 + t3425;
  t3368 = t2879*t3366;
  t3383 = t3382*t2791;
  t3388 = t3368 + t3383;
  t3420 = t3413*t2742;
  t3441 = t2789*t3435;
  t3442 = t3420 + t3441;
  t3452 = t2789*t3413;
  t3454 = -1.*t2742*t3435;
  t3462 = t3452 + t3454;
  t2904 = t2784*t2888*t2742;
  t3056 = t2789*t3054;
  t3067 = t2904 + t3056;
  t3398 = t2784*t2879*t3388;
  t3478 = -1.*t3388*t3140;
  t3493 = t3388*t3140;
  t3506 = -1.*t3388*t3173;
  t3528 = -1.*t2784*t2879*t3388;
  t3539 = t3388*t3173;
  t3621 = -1.*t2694*t3413;
  t3627 = t2784*t3413*t2888;
  t3571 = t2694*t3413;
  t3581 = -1.*t2784*t3413*t2874;
  t3611 = -1.*t2784*t3413*t2888;
  t3596 = t2784*t3413*t2874;
  t3719 = t3382*t2888;
  t3705 = -1.*t3382*t2912;
  p_output1[0]=t2899*var2[0] + t2816*var2[1] + t3067*var2[2];
  p_output1[1]=(t3089*t3140 - 1.*t3096*t3148)*var2[0] + (t2784*t2879*t3089 - 1.*t3096*t3113)*var2[1] + (t3089*t3173 - 1.*t3096*t3198)*var2[2];
  p_output1[2]=(t3096*t3140 + t3089*t3148)*var2[0] + (t2784*t2879*t3096 + t3089*t3113)*var2[1] + (t3096*t3173 + t3089*t3198)*var2[2];
  p_output1[3]=(t3067*(-1.*t2816*t3442 - 1.*t3113*t3462 + t3528) + t2816*(t3067*t3442 + t3198*t3462 + t3539))*var2[0] + (t3067*(t2899*t3442 + t3148*t3462 + t3493) + t2899*(-1.*t3067*t3442 - 1.*t3198*t3462 + t3506))*var2[1] + (t2899*(t3398 + t2816*t3442 + t3113*t3462) + t2816*(-1.*t2899*t3442 - 1.*t3148*t3462 + t3478))*var2[2];
  p_output1[4]=(t3173*(t2784*t2791*t3435 + t3528 + t3621) + t2784*t2879*(t3054*t3435 + t3539 + t3627))*var2[0] + (t3173*(t2897*t3435 + t3493 + t3596) + t3140*(-1.*t3054*t3435 + t3506 + t3611))*var2[1] + (t3140*(t3398 - 1.*t2784*t2791*t3435 + t3571) + t2784*t2879*(-1.*t2897*t3435 + t3478 + t3581))*var2[2];
  p_output1[5]=(t2784*t2888*(-1.*t2784*t3366 + t3621) + t2694*(-1.*t2694*t2888*t3366 + t2912*t3382 + t3627))*var2[0] + (t2784*t2874*(t2694*t2888*t3366 + t3611 + t3705) + t2784*t2888*(-1.*t2694*t2874*t3366 + t3596 + t3719))*var2[1] + (t2784*t2874*(t2784*t3366 + t3571) + t2694*(t2694*t2874*t3366 - 1.*t2888*t3382 + t3581))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t2874 - 0.2255*t2912)*var2[0] + (t2888*(-1.*t2888*t3359 + t3705) + t2912*(t2874*t3359 + t3719))*var2[1] + 0.068*t2888*var2[2];
  p_output1[10]=(-0.325*t2854 - 1.*t2826*t3334 - 1.*t2854*t3355)*var2[0] + (0.325*t2826 - 1.*t2854*t3334 + t2826*t3355)*var2[2];
  p_output1[11]=-0.0641*var2[0] - 0.28*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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

#include "fRlFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
