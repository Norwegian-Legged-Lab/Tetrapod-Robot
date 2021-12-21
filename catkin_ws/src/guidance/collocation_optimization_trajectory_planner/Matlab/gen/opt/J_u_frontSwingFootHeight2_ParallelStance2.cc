/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:16:04 GMT+01:00
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
  double t441;
  double t995;
  double t1022;
  double t1025;
  double t1045;
  double t1092;
  double t1097;
  double t1307;
  double t1230;
  double t1236;
  double t1339;
  double t645;
  double t673;
  double t731;
  double t788;
  double t1272;
  double t1345;
  double t1355;
  double t1428;
  double t1525;
  double t1540;
  double t263;
  double t1849;
  double t1905;
  double t2036;
  double t2124;
  double t2128;
  double t2160;
  double t2249;
  double t2262;
  double t2265;
  double t2317;
  double t2581;
  double t2443;
  double t2466;
  double t2470;
  double t2473;
  double t2492;
  double t2524;
  double t2636;
  double t2647;
  double t2654;
  double t2664;
  double t2718;
  double t2730;
  double t2731;
  double t2776;
  double t2779;
  double t2784;
  double t1066;
  double t1106;
  double t397;
  double t718;
  double t739;
  double t880;
  double t949;
  double t1402;
  double t1408;
  double t1592;
  double t1730;
  double t1836;
  double t1845;
  double t1846;
  double t2092;
  double t2096;
  double t2111;
  double t2266;
  double t2321;
  double t2381;
  double t2933;
  double t2941;
  double t2945;
  double t2959;
  double t2963;
  double t2975;
  double t2564;
  double t2580;
  double t2592;
  double t2613;
  double t2631;
  double t2676;
  double t2677;
  double t2683;
  double t2686;
  double t2702;
  double t3011;
  double t3013;
  double t3016;
  double t3033;
  double t3057;
  double t3059;
  double t3068;
  double t3080;
  double t2812;
  double t2821;
  double t3097;
  double t3106;
  double t3110;
  double t3115;
  double t2889;
  double t2896;
  double t3197;
  double t3200;
  double t3207;
  double t3213;
  double t3214;
  double t3216;
  double t3220;
  double t3224;
  double t3225;
  double t3232;
  double t3233;
  double t3243;
  double t3247;
  double t3258;
  double t3259;
  double t3272;
  double t3275;
  double t3276;
  double t3333;
  double t3343;
  double t3356;
  double t3450;
  double t3462;
  double t3469;
  double t3473;
  double t3500;
  double t3501;
  double t3513;
  double t3515;
  double t3531;
  double t3548;
  double t3562;
  double t3567;
  double t3571;
  double t3574;
  double t3589;
  double t3592;
  double t3604;
  double t3738;
  double t3740;
  double t3749;
  double t3755;
  double t3756;
  double t3758;
  double t3762;
  double t3767;
  double t3768;
  double t3773;
  double t3775;
  double t3778;
  double t3787;
  double t3789;
  double t3900;
  double t3902;
  double t3913;
  double t3918;
  double t3948;
  double t3954;
  double t3956;
  double t3967;
  double t3972;
  double t3973;
  double t3974;
  t441 = Cos(var1[10]);
  t995 = Sin(var1[3]);
  t1022 = Cos(var1[9]);
  t1025 = -1.*t1022;
  t1045 = 1. + t1025;
  t1092 = Sin(var1[9]);
  t1097 = -0.15121*t1092;
  t1307 = Cos(var1[3]);
  t1230 = Cos(var1[5]);
  t1236 = Sin(var1[4]);
  t1339 = Sin(var1[5]);
  t645 = -1.*t441;
  t673 = 1. + t645;
  t731 = -1. + t441;
  t788 = Sin(var1[10]);
  t1272 = t1230*t995*t1236;
  t1345 = t1307*t1339;
  t1355 = t1272 + t1345;
  t1428 = t1307*t1230;
  t1525 = -1.*t995*t1236*t1339;
  t1540 = t1428 + t1525;
  t263 = Cos(var1[4]);
  t1849 = -1.*t1092*t1355;
  t1905 = t1022*t1540;
  t2036 = t1849 + t1905;
  t2124 = t1022*t1355;
  t2128 = t1092*t1540;
  t2160 = t2124 + t2128;
  t2249 = Cos(var1[11]);
  t2262 = -1.*t2249;
  t2265 = 1. + t2262;
  t2317 = Sin(var1[11]);
  t2581 = -1. + t2249;
  t2443 = -1.*t263*t788*t995;
  t2466 = -4.e-6*t788*t2036;
  t2470 = -1.000000000016*t673;
  t2473 = 1. + t2470;
  t2492 = t2473*t2160;
  t2524 = t2443 + t2466 + t2492;
  t2636 = -1.*t441*t263*t995;
  t2647 = 4.e-6*t673*t2036;
  t2654 = -1.*t788*t2160;
  t2664 = t2636 + t2647 + t2654;
  t2718 = -4.e-6*t673*t263*t995;
  t2730 = 1.6e-11*t731;
  t2731 = 1. + t2730;
  t2776 = t2731*t2036;
  t2779 = 4.e-6*t788*t2160;
  t2784 = t2718 + t2776 + t2779;
  t1066 = 0.15121*t1045;
  t1106 = t1066 + t1097;
  t397 = -4.9936e-13*var1[10];
  t718 = -0.038749*t673;
  t739 = 6.19984e-13*t731;
  t880 = -0.281210000004*t788;
  t949 = t397 + t718 + t739 + t880;
  t1402 = -0.15121*t1045;
  t1408 = t1402 + t1097;
  t1592 = -1.2484e-7*var1[10];
  t1730 = 2.479936e-18*t673;
  t1836 = -1.54996e-7*t731;
  t1845 = 1.124840000016e-6*t788;
  t1846 = t1592 + t1730 + t1836 + t1845;
  t2092 = 0.281210000008499*t673;
  t2096 = -0.03874900000062*t788;
  t2111 = t2092 + t2096;
  t2266 = 0.50315000001605*t2265;
  t2321 = -0.0398890000006382*t2317;
  t2381 = t2266 + t2321;
  t2933 = t1307*t263*t1230*t1092;
  t2941 = t1022*t1307*t263*t1339;
  t2945 = t2933 + t2941;
  t2959 = -1.*t1022*t1307*t263*t1230;
  t2963 = t1307*t263*t1092*t1339;
  t2975 = t2959 + t2963;
  t2564 = -5.04e-14*var1[11];
  t2580 = -0.039889*t2265;
  t2592 = 6.38224e-13*t2581;
  t2613 = -0.503150000008*t2317;
  t2631 = t2564 + t2580 + t2592 + t2613;
  t2676 = -1.26e-8*var1[11];
  t2677 = 2.552896e-18*t2265;
  t2683 = -1.59556e-7*t2581;
  t2686 = 2.012600000032e-6*t2317;
  t2702 = t2676 + t2677 + t2683 + t2686;
  t3011 = -1.*t1307*t788*t1236;
  t3013 = -4.e-6*t788*t2945;
  t3016 = t2473*t2975;
  t3033 = t3011 + t3013 + t3016;
  t3057 = -1.*t441*t1307*t1236;
  t3059 = 4.e-6*t673*t2945;
  t3068 = -1.*t788*t2975;
  t3080 = t3057 + t3059 + t3068;
  t2812 = 1.6e-11*t2581;
  t2821 = 1. + t2812;
  t3097 = -4.e-6*t673*t1307*t1236;
  t3106 = t2731*t2945;
  t3110 = 4.e-6*t788*t2975;
  t3115 = t3097 + t3106 + t3110;
  t2889 = -1.000000000016*t2265;
  t2896 = 1. + t2889;
  t3197 = t1307*t1230*t1236;
  t3200 = -1.*t995*t1339;
  t3207 = t3197 + t3200;
  t3213 = t1230*t995;
  t3214 = t1307*t1236*t1339;
  t3216 = t3213 + t3214;
  t3220 = t1092*t3207;
  t3224 = t1022*t3216;
  t3225 = t3220 + t3224;
  t3232 = t1022*t3207;
  t3233 = -1.*t1092*t3216;
  t3243 = t3232 + t3233;
  t3247 = 4.e-6*t788*t3225;
  t3258 = t2731*t3243;
  t3259 = t3247 + t3258;
  t3272 = -1.*t788*t3225;
  t3275 = 4.e-6*t673*t3243;
  t3276 = t3272 + t3275;
  t3333 = t2473*t3225;
  t3343 = -4.e-6*t788*t3243;
  t3356 = t3333 + t3343;
  t3450 = -0.15121*t1022;
  t3462 = -1.*t1307*t1230*t1236;
  t3469 = t995*t1339;
  t3473 = t3462 + t3469;
  t3500 = -1.*t1092*t3473;
  t3501 = t3500 + t3224;
  t3513 = -1.*t1022*t3473;
  t3515 = t3513 + t3233;
  t3531 = 4.e-6*t788*t3501;
  t3548 = t2731*t3515;
  t3562 = t3531 + t3548;
  t3567 = -1.*t788*t3501;
  t3571 = 4.e-6*t673*t3515;
  t3574 = t3567 + t3571;
  t3589 = t2473*t3501;
  t3592 = -4.e-6*t788*t3515;
  t3604 = t3589 + t3592;
  t3738 = t1022*t3473;
  t3740 = t1092*t3216;
  t3749 = t3738 + t3740;
  t3755 = -1.*t1307*t263*t788;
  t3756 = -1.*t441*t3749;
  t3758 = t3755 + t3531 + t3756;
  t3762 = 4.e-6*t1307*t263*t788;
  t3767 = -1.6e-11*t788*t3501;
  t3768 = 4.e-6*t441*t3749;
  t3773 = t3762 + t3767 + t3768;
  t3775 = t441*t1307*t263;
  t3778 = -4.e-6*t441*t3501;
  t3787 = -1.000000000016*t788*t3749;
  t3789 = t3775 + t3778 + t3787;
  t3900 = t1307*t263*t788;
  t3902 = -4.e-6*t788*t3501;
  t3913 = t2473*t3749;
  t3918 = t3900 + t3902 + t3913;
  t3948 = 4.e-6*t673*t3501;
  t3954 = -1.*t788*t3749;
  t3956 = t3775 + t3948 + t3954;
  t3967 = 4.e-6*t673*t1307*t263;
  t3972 = t2731*t3501;
  t3973 = 4.e-6*t788*t3749;
  t3974 = t3967 + t3972 + t3973;
  p_output1[0]=1.;
  p_output1[1]=t1106*t1355 + t1408*t1540 + t1846*t2036 + t2111*t2160 + t2381*t2524 + t2631*t2664 + t2702*t2784 - 0.041195*(-1.*t2317*t2524 + t2249*t2664 + 4.e-6*t2265*t2784) - 0.14871*(4.e-6*t2317*t2524 + 4.e-6*t2265*t2664 + t2784*t2821) + 0.803147*(t2317*t2664 - 4.e-6*t2317*t2784 + t2524*t2896) - 1.*t263*t949*t995;
  p_output1[2]=-1.*t1106*t1230*t1307*t263 + t1307*t1339*t1408*t263 + t1846*t2945 + t2111*t2975 + t2381*t3033 + t2631*t3080 + t2702*t3115 - 0.041195*(-1.*t2317*t3033 + t2249*t3080 + 4.e-6*t2265*t3115) + 0.803147*(t2896*t3033 + t2317*t3080 - 4.e-6*t2317*t3115) - 0.14871*(4.e-6*t2317*t3033 + 4.e-6*t2265*t3080 + t2821*t3115) - 1.*t1236*t1307*t949;
  p_output1[3]=t1408*t3207 + t1106*t3216 + t2111*t3225 + t1846*t3243 + t2702*t3259 + t2631*t3276 + t2381*t3356 - 0.041195*(4.e-6*t2265*t3259 + t2249*t3276 - 1.*t2317*t3356) - 0.14871*(t2821*t3259 + 4.e-6*t2265*t3276 + 4.e-6*t2317*t3356) + 0.803147*(-4.e-6*t2317*t3259 + t2317*t3276 + t2896*t3356);
  p_output1[4]=t3216*(t1097 + t3450) + (0.15121*t1092 + t3450)*t3473 + t2111*t3501 + t1846*t3515 + t2702*t3562 + t2631*t3574 + t2381*t3604 - 0.041195*(4.e-6*t2265*t3562 + t2249*t3574 - 1.*t2317*t3604) - 0.14871*(t2821*t3562 + 4.e-6*t2265*t3574 + 4.e-6*t2317*t3604) + 0.803147*(-4.e-6*t2317*t3562 + t2317*t3574 + t2896*t3604);
  p_output1[5]=t2631*t3758 + t2702*t3773 + t2381*t3789 - 0.041195*(t2249*t3758 + 4.e-6*t2265*t3773 - 1.*t2317*t3789) - 0.14871*(4.e-6*t2265*t3758 + t2821*t3773 + 4.e-6*t2317*t3789) + 0.803147*(t2317*t3758 - 4.e-6*t2317*t3773 + t2896*t3789) + t1307*t263*(-4.9936e-13 + t2096 - 0.281210000004*t441) + t3501*(-1.2484e-7 + 1.124840000016e-6*t441 + 1.5499600000248e-7*t788) + t3749*(-0.03874900000062*t441 + 0.281210000008499*t788);
  p_output1[6]=(-0.0398890000006382*t2249 + 0.50315000001605*t2317)*t3918 + (-5.04e-14 - 0.503150000008*t2249 + t2321)*t3956 + (-1.26e-8 + 2.012600000032e-6*t2249 + 1.59556000002553e-7*t2317)*t3974 + 0.803147*(-1.000000000016*t2317*t3918 + t2249*t3956 - 4.e-6*t2249*t3974) - 0.14871*(4.e-6*t2249*t3918 + 4.e-6*t2317*t3956 - 1.6e-11*t2317*t3974) - 0.041195*(-1.*t2249*t3918 - 1.*t2317*t3956 + 4.e-6*t2317*t3974);
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

#include "J_u_frontSwingFootHeight2_ParallelStance2.hh"

namespace ParallelStance2
{

void J_u_frontSwingFootHeight2_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
