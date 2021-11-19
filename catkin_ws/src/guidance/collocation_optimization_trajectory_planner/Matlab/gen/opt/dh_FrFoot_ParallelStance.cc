/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:30:09 GMT+01:00
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
  double t398;
  double t78;
  double t686;
  double t490;
  double t501;
  double t581;
  double t1219;
  double t90;
  double t276;
  double t761;
  double t1128;
  double t1144;
  double t1156;
  double t1342;
  double t1366;
  double t1095;
  double t1484;
  double t1571;
  double t1655;
  double t1679;
  double t1692;
  double t1706;
  double t1750;
  double t1812;
  double t1871;
  double t1092;
  double t1386;
  double t1392;
  double t1443;
  double t2284;
  double t2301;
  double t2312;
  double t2324;
  double t2343;
  double t2349;
  double t2355;
  double t1894;
  double t1897;
  double t2381;
  double t2394;
  double t2396;
  double t2398;
  double t2410;
  double t2432;
  double t2460;
  double t2463;
  double t2471;
  double t2472;
  double t1380;
  double t1701;
  double t1850;
  double t1852;
  double t1907;
  double t1908;
  double t1923;
  double t1939;
  double t2062;
  double t2081;
  double t2113;
  double t2169;
  double t2201;
  double t2221;
  double t2261;
  double t2378;
  double t2408;
  double t2474;
  double t2479;
  double t2486;
  double t2495;
  double t2498;
  double t2541;
  double t2550;
  double t2573;
  double t820;
  double t871;
  double t980;
  double t988;
  double t2097;
  double t2481;
  double t2602;
  double t2603;
  double t2890;
  double t2894;
  double t2902;
  double t2912;
  double t2917;
  double t2928;
  double t2632;
  double t2638;
  double t2669;
  double t2689;
  double t844;
  double t1003;
  double t1018;
  double t2765;
  double t2767;
  double t2777;
  double t2814;
  double t2825;
  double t2835;
  double t2843;
  double t2853;
  double t2707;
  double t2740;
  double t2744;
  double t2764;
  double t2966;
  double t3025;
  double t3026;
  double t3032;
  double t3036;
  double t3037;
  double t3048;
  double t3049;
  double t3050;
  double t3108;
  double t3109;
  double t3111;
  double t3124;
  double t3138;
  double t3149;
  double t3154;
  double t3034;
  double t3041;
  double t3052;
  double t3055;
  double t3067;
  double t3073;
  double t3084;
  double t3087;
  double t3230;
  double t2611;
  double t2615;
  double t2624;
  double t1856;
  double t1953;
  double t1988;
  double t3251;
  double t2942;
  double t2938;
  double t2939;
  double t2940;
  double t2905;
  double t2933;
  double t2935;
  double t3295;
  double t3296;
  double t3297;
  double t2856;
  double t3274;
  double t3282;
  double t3288;
  double t3300;
  double t3301;
  double t3302;
  double t3309;
  double t3310;
  double t3311;
  double t3243;
  double t3245;
  double t3248;
  double t3231;
  double t3232;
  double t3238;
  double t3229;
  double t3207;
  double t3219;
  double t3221;
  double t3222;
  double t3225;
  double t3241;
  double t3261;
  double t3263;
  double t3430;
  double t3405;
  double t3412;
  double t3416;
  double t3399;
  double t3431;
  double t3435;
  double t3437;
  double t3335;
  double t3339;
  double t3340;
  double t3303;
  double t3304;
  double t3306;
  double t3307;
  double t3480;
  double t3488;
  double t3489;
  double t3319;
  double t3470;
  double t3477;
  double t3478;
  double t3490;
  double t3503;
  double t3504;
  double t3549;
  double t3575;
  double t3586;
  double t3771;
  double t3772;
  double t3774;
  double t3775;
  double t3779;
  double t3786;
  double t3793;
  double t3616;
  double t3619;
  double t3620;
  double t3680;
  double t3645;
  double t3227;
  double t3265;
  double t3269;
  double t3886;
  double t3516;
  double t3530;
  double t3536;
  double t3898;
  double t4070;
  double t4071;
  double t4079;
  double t4081;
  double t4061;
  double t4062;
  double t4063;
  double t4065;
  double t3961;
  double t3950;
  double t4188;
  double t4206;
  t398 = Cos(var1[11]);
  t78 = Cos(var1[10]);
  t686 = -1. + t398;
  t490 = -1.*t398;
  t501 = 1. + t490;
  t581 = 1.6e-11*t501;
  t1219 = Sin(var1[11]);
  t90 = -1.*t78;
  t276 = 1. + t90;
  t761 = 1.6e-11*t686;
  t1128 = -1.000000000016*t501;
  t1144 = 1. + t1128;
  t1156 = 0.004352*t1144;
  t1342 = -0.9999910000159999*t1219;
  t1366 = t1156 + t1342;
  t1095 = Sin(var1[10]);
  t1484 = -1. + t581;
  t1571 = 4.e-6*t1484;
  t1655 = 3.999964e-6*t501;
  t1679 = -1.7408e-8*t1219;
  t1692 = t1571 + t1655 + t1679;
  t1706 = 0.999991*t398;
  t1750 = 0.004352*t1219;
  t1812 = t761 + t1706 + t1750;
  t1871 = Cos(var1[9]);
  t1092 = Sin(var1[9]);
  t1386 = -1. + t78;
  t1392 = 1.6e-11*t1386;
  t1443 = 1. + t1392;
  t2284 = -1.26e-8*var1[11];
  t2301 = 1. + t761;
  t2312 = -0.14871*t2301;
  t2324 = -1.64779999997447e-7*t501;
  t2343 = -1.59556e-7*t686;
  t2349 = -1.199987999968e-6*t1219;
  t2355 = t2284 + t2312 + t2324 + t2343 + t2349;
  t1894 = -1.000000000016*t276;
  t1897 = 1. + t1894;
  t2381 = 0.803147*t1144;
  t2394 = 0.50315000001605*t501;
  t2396 = 0.00130540515936178*t1219;
  t2398 = t2381 + t2394 + t2396;
  t2410 = -5.04e-14*var1[11];
  t2432 = -0.03988959484*t501;
  t2460 = 6.38224e-13*t686;
  t2463 = -0.041195*t398;
  t2471 = 0.299996999992*t1219;
  t2472 = t2410 + t2432 + t2460 + t2463 + t2471;
  t1380 = -4.e-6*t1095*t1366;
  t1701 = t1443*t1692;
  t1850 = 4.e-6*t276*t1812;
  t1852 = 0. + t1380 + t1701 + t1850;
  t1907 = t1897*t1366;
  t1908 = 4.e-6*t1095*t1692;
  t1923 = -1.*t1095*t1812;
  t1939 = 0. + t1907 + t1908 + t1923;
  t2062 = -1.*t1871;
  t2081 = 1. + t2062;
  t2113 = -0.15121*t1092;
  t2169 = -1.2484e-7*var1[10];
  t2201 = 2.479936e-18*t276;
  t2221 = -1.54996e-7*t1386;
  t2261 = 1.124840000016e-6*t1095;
  t2378 = t1443*t2355;
  t2408 = -4.e-6*t1095*t2398;
  t2474 = 4.e-6*t276*t2472;
  t2479 = t2169 + t2201 + t2221 + t2261 + t2378 + t2408 + t2474;
  t2486 = 0.281210000008499*t276;
  t2495 = -0.03874900000062*t1095;
  t2498 = 4.e-6*t1095*t2355;
  t2541 = t1897*t2398;
  t2550 = -1.*t1095*t2472;
  t2573 = t2486 + t2495 + t2498 + t2541 + t2550;
  t820 = -1. + t581 + t761;
  t871 = 4.e-6*t686;
  t980 = -4.e-6*t398;
  t988 = t871 + t980;
  t2097 = 0.15121*t2081;
  t2481 = -1.*t1092*t2479;
  t2602 = t1871*t2573;
  t2603 = t2097 + t2113 + t2481 + t2602;
  t2890 = t1443*t820;
  t2894 = 4.e-6*t276*t988;
  t2902 = t2890 + t2894;
  t2912 = 4.e-6*t820*t1095;
  t2917 = -1.*t988*t1095;
  t2928 = t2912 + t2917;
  t2632 = -0.15121*t2081;
  t2638 = t1871*t2479;
  t2669 = t1092*t2573;
  t2689 = t2632 + t2113 + t2638 + t2669;
  t844 = 4.e-6*t276*t820;
  t1003 = t78*t988;
  t1018 = t844 + t1003;
  t2765 = -4.9936e-13*var1[10];
  t2767 = -0.038749*t276;
  t2777 = 6.19984e-13*t1386;
  t2814 = -0.281210000004*t1095;
  t2825 = 4.e-6*t276*t2355;
  t2835 = t1095*t2398;
  t2843 = t78*t2472;
  t2853 = 0. + t2765 + t2767 + t2777 + t2814 + t2825 + t2835 + t2843;
  t2707 = t1095*t1366;
  t2740 = 4.e-6*t276*t1692;
  t2744 = t78*t1812;
  t2764 = 0. + t2707 + t2740 + t2744;
  t2966 = t2765 + t2767 + t2777 + t2814 + t2825 + t2835 + t2843;
  t3025 = -1.7408e-8*t501;
  t3026 = -3.999964e-6*t1219;
  t3032 = t3025 + t3026;
  t3036 = 0.999991*t1144;
  t3037 = t3036 + t1750;
  t3048 = -0.004352*t398;
  t3049 = 0.999991*t1219;
  t3050 = t3048 + t3049;
  t3108 = -1.*t2355*t1692;
  t3109 = -1.*t1366*t2398;
  t3111 = -1.*t1812*t2472;
  t3124 = t3108 + t3109 + t3111;
  t3138 = t820*t2355;
  t3149 = t988*t2472;
  t3154 = t3138 + t3149;
  t3034 = t1443*t3032;
  t3041 = -4.e-6*t1095*t3037;
  t3052 = 4.e-6*t276*t3050;
  t3055 = 0. + t3034 + t3041 + t3052;
  t3067 = 4.e-6*t1095*t3032;
  t3073 = t1897*t3037;
  t3084 = -1.*t1095*t3050;
  t3087 = 0. + t3067 + t3073 + t3084;
  t3230 = Cos(var1[5]);
  t2611 = t1871*t1852;
  t2615 = t1092*t1939;
  t2624 = 0. + t2611 + t2615;
  t1856 = -1.*t1092*t1852;
  t1953 = t1871*t1939;
  t1988 = 0. + t1856 + t1953;
  t3251 = Sin(var1[5]);
  t2942 = t1018*t2853;
  t2938 = t1871*t2902;
  t2939 = t1092*t2928;
  t2940 = t2938 + t2939;
  t2905 = -1.*t2902*t1092;
  t2933 = t1871*t2928;
  t2935 = t2905 + t2933;
  t3295 = t3230*t2940;
  t3296 = t2935*t3251;
  t3297 = t3295 + t3296;
  t2856 = -1.*t2764*t2853;
  t3274 = t3230*t2624;
  t3282 = t1988*t3251;
  t3288 = 0. + t3274 + t3282;
  t3300 = t3230*t2689;
  t3301 = t2603*t3251;
  t3302 = 0. + t3300 + t3301;
  t3309 = t3230*t2603;
  t3310 = -1.*t2689*t3251;
  t3311 = 0. + t3309 + t3310;
  t3243 = t1871*t3055;
  t3245 = t1092*t3087;
  t3248 = 0. + t3243 + t3245;
  t3231 = -1.*t1092*t3055;
  t3232 = t1871*t3087;
  t3238 = 0. + t3231 + t3232;
  t3229 = Cos(var1[4]);
  t3207 = 4.e-6*t276*t3032;
  t3219 = t1095*t3037;
  t3221 = t78*t3050;
  t3222 = 0. + t3207 + t3219 + t3221;
  t3225 = Sin(var1[4]);
  t3241 = t3230*t3238;
  t3261 = -1.*t3248*t3251;
  t3263 = 0. + t3241 + t3261;
  t3430 = Cos(var1[3]);
  t3405 = t3230*t3248;
  t3412 = t3238*t3251;
  t3416 = 0. + t3405 + t3412;
  t3399 = Sin(var1[3]);
  t3431 = t3229*t3222;
  t3435 = -1.*t3225*t3263;
  t3437 = 0. + t3431 + t3435;
  t3335 = t3230*t1988;
  t3339 = -1.*t2624*t3251;
  t3340 = 0. + t3335 + t3339;
  t3303 = t3297*t3302;
  t3304 = t3230*t2935;
  t3306 = -1.*t2940*t3251;
  t3307 = t3304 + t3306;
  t3480 = t1018*t3225;
  t3488 = t3229*t3307;
  t3489 = t3480 + t3488;
  t3319 = -1.*t3288*t3302;
  t3470 = t2764*t3225;
  t3477 = t3229*t3340;
  t3478 = 0. + t3470 + t3477;
  t3490 = t2853*t3225;
  t3503 = t3229*t3311;
  t3504 = 0. + t3490 + t3503;
  t3549 = t3229*t2853;
  t3575 = -1.*t3225*t3311;
  t3586 = 0. + t3549 + t3575;
  t3771 = t3032*t2355;
  t3772 = t2398*t3037;
  t3774 = t2472*t3050;
  t3775 = t3771 + t3772 + t3774;
  t3779 = -1.*t820*t2355;
  t3786 = -1.*t988*t2472;
  t3793 = t3779 + t3786;
  t3616 = t3229*t2764;
  t3619 = -1.*t3225*t3340;
  t3620 = 0. + t3616 + t3619;
  t3680 = -1.*t1018*t2853;
  t3645 = t2853*t3222;
  t3227 = t3222*t3225;
  t3265 = t3229*t3263;
  t3269 = 0. + t3227 + t3265;
  t3886 = -1.*t3297*t3302;
  t3516 = t1018*t3229;
  t3530 = -1.*t3225*t3307;
  t3536 = t3516 + t3530;
  t3898 = t3302*t3416;
  t4070 = t2355*t1692;
  t4071 = t1366*t2398;
  t4079 = t1812*t2472;
  t4081 = t4070 + t4071 + t4079;
  t4061 = -1.*t3032*t2355;
  t4062 = -1.*t2398*t3037;
  t4063 = -1.*t2472*t3050;
  t4065 = t4061 + t4062 + t4063;
  t3961 = t2764*t2853;
  t3950 = -1.*t2853*t3222;
  t4188 = t3288*t3302;
  t4206 = -1.*t3302*t3416;
  p_output1[0]=t3269*var2[0] + (0. + t3416*t3430 - 1.*t3399*t3437)*var2[1] + (0. + t3399*t3416 + t3430*t3437)*var2[2] + (t3478*(t3303 + t3489*t3504 + t3536*t3586) + t3489*(t3319 - 1.*t3478*t3504 - 1.*t3586*t3620))*var2[3] + (t3288*(t2942 + t3303 + t3307*t3311) + t3297*(t2856 + t3319 - 1.*t3311*t3340))*var2[4] + (t1018*(-1.*t1988*t2603 - 1.*t2624*t2689 + t2856) + t2764*(t2603*t2935 + t2689*t2940 + t2942))*var2[5] + (t2764*(t2479*t2902 + t2573*t2928 + t1018*t2966) + t1018*(-1.*t1852*t2479 - 1.*t1939*t2573 - 1.*t2764*t2966) - 0.15121*t3055 - 0.15121*t3087)*var2[9] + (1.e-6*t3032 - 0.038749*t3037 - 0.28121*t3050 - 1.*t1692*t3154 - 1.*t3124*t820 + 4.e-6*(-1.*t1812*t3154 - 1.*t3124*t988))*var2[10] - 1.9353204325022392e-7*var2[11];
  p_output1[1]=t3478*var2[0] + (0. + t3288*t3430 - 1.*t3399*t3620)*var2[1] + (0. + t3288*t3399 + t3430*t3620)*var2[2] + (t3269*(-1.*t3489*t3504 - 1.*t3536*t3586 + t3886) + t3489*(t3269*t3504 + t3437*t3586 + t3898))*var2[3] + (t3416*(-1.*t3307*t3311 + t3680 + t3886) + t3297*(t3263*t3311 + t3645 + t3898))*var2[4] + (t1018*(t2603*t3238 + t2689*t3248 + t3645) + t3222*(-1.*t2603*t2935 - 1.*t2689*t2940 + t3680))*var2[5] + (-0.15121*t1852 - 0.15121*t1939 + (-1.*t2479*t2902 - 1.*t2573*t2928 - 1.*t1018*t2966)*t3222 + t1018*(t2479*t3055 + t2573*t3087 + t2966*t3222))*var2[9] + (-0.038749*t1366 + 1.e-6*t1692 - 0.28121*t1812 - 1.*t3032*t3793 - 1.*t3775*t820 + 4.e-6*(-1.*t3050*t3793 - 1.*t3775*t988))*var2[10] + 0.29999998115510645*var2[11];
  p_output1[2]=t3489*var2[0] + (t3297*t3430 - 1.*t3399*t3536)*var2[1] + (t3297*t3399 + t3430*t3536)*var2[2] + (t3269*(t3478*t3504 + t3586*t3620 + t4188) + t3478*(-1.*t3269*t3504 - 1.*t3437*t3586 + t4206))*var2[3] + (t3416*(t3311*t3340 + t3961 + t4188) + t3288*(-1.*t3263*t3311 + t3950 + t4206))*var2[4] + (t2764*(-1.*t2603*t3238 - 1.*t2689*t3248 + t3950) + t3222*(t1988*t2603 + t2624*t2689 + t3961))*var2[5] + (-0.15121*t2902 - 0.15121*t2928 + (t1852*t2479 + t1939*t2573 + t2764*t2966)*t3222 + t2764*(-1.*t2479*t3055 - 1.*t2573*t3087 - 1.*t2966*t3222))*var2[9] + (-1.*t1692*t4065 - 1.*t3032*t4081 + 4.e-6*(-1.*t1812*t4065 - 1.*t3050*t4081) + 1.e-6*t820 - 0.28121*t988)*var2[10] + 1.1914820871506078e-8*var2[11];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void dh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
