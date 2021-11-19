/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:28:50 GMT+01:00
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
  double t426;
  double t306;
  double t481;
  double t439;
  double t443;
  double t452;
  double t1048;
  double t328;
  double t374;
  double t483;
  double t895;
  double t898;
  double t1005;
  double t1098;
  double t1201;
  double t885;
  double t1389;
  double t1398;
  double t1402;
  double t1482;
  double t1494;
  double t1567;
  double t1627;
  double t1642;
  double t1778;
  double t820;
  double t1251;
  double t1318;
  double t1335;
  double t2114;
  double t2143;
  double t2147;
  double t2174;
  double t2198;
  double t2204;
  double t2212;
  double t1792;
  double t1831;
  double t2223;
  double t2228;
  double t2233;
  double t2253;
  double t2263;
  double t2269;
  double t2274;
  double t2276;
  double t2278;
  double t2279;
  double t1204;
  double t1514;
  double t1684;
  double t1690;
  double t1858;
  double t1859;
  double t1863;
  double t1913;
  double t1950;
  double t2001;
  double t2034;
  double t2043;
  double t2081;
  double t2093;
  double t2104;
  double t2217;
  double t2256;
  double t2280;
  double t2288;
  double t2310;
  double t2320;
  double t2322;
  double t2324;
  double t2327;
  double t2335;
  double t517;
  double t585;
  double t708;
  double t738;
  double t2017;
  double t2306;
  double t2340;
  double t2346;
  double t2531;
  double t2533;
  double t2542;
  double t2553;
  double t2563;
  double t2573;
  double t2386;
  double t2392;
  double t2396;
  double t2407;
  double t583;
  double t773;
  double t794;
  double t2443;
  double t2453;
  double t2463;
  double t2467;
  double t2473;
  double t2483;
  double t2493;
  double t2503;
  double t2420;
  double t2427;
  double t2433;
  double t2437;
  double t2654;
  double t2744;
  double t2765;
  double t2768;
  double t2795;
  double t2808;
  double t2830;
  double t2836;
  double t2858;
  double t2905;
  double t2907;
  double t2908;
  double t2909;
  double t2913;
  double t2918;
  double t2919;
  double t2790;
  double t2816;
  double t2869;
  double t2886;
  double t2890;
  double t2891;
  double t2892;
  double t2894;
  double t3022;
  double t2359;
  double t2361;
  double t2366;
  double t1693;
  double t1917;
  double t1946;
  double t3047;
  double t2624;
  double t2603;
  double t2609;
  double t2613;
  double t2543;
  double t2581;
  double t2583;
  double t3105;
  double t3116;
  double t3118;
  double t2511;
  double t3093;
  double t3095;
  double t3096;
  double t3160;
  double t3177;
  double t3185;
  double t3205;
  double t3209;
  double t3220;
  double t3038;
  double t3039;
  double t3044;
  double t3024;
  double t3026;
  double t3027;
  double t3021;
  double t3008;
  double t3009;
  double t3016;
  double t3018;
  double t3019;
  double t3029;
  double t3054;
  double t3071;
  double t3285;
  double t3262;
  double t3275;
  double t3279;
  double t3259;
  double t3290;
  double t3294;
  double t3295;
  double t3231;
  double t3232;
  double t3234;
  double t3192;
  double t3195;
  double t3198;
  double t3200;
  double t3326;
  double t3329;
  double t3331;
  double t3228;
  double t3315;
  double t3318;
  double t3320;
  double t3336;
  double t3346;
  double t3347;
  double t3378;
  double t3381;
  double t3385;
  double t3549;
  double t3553;
  double t3555;
  double t3559;
  double t3562;
  double t3565;
  double t3569;
  double t3402;
  double t3409;
  double t3411;
  double t3454;
  double t3445;
  double t3020;
  double t3075;
  double t3076;
  double t3633;
  double t3356;
  double t3357;
  double t3370;
  double t3647;
  double t3843;
  double t3844;
  double t3847;
  double t3858;
  double t3816;
  double t3825;
  double t3827;
  double t3839;
  double t3736;
  double t3723;
  double t3931;
  double t3941;
  t426 = Cos(var1[11]);
  t306 = Cos(var1[10]);
  t481 = -1. + t426;
  t439 = -1.*t426;
  t443 = 1. + t439;
  t452 = 1.6e-11*t443;
  t1048 = Sin(var1[11]);
  t328 = -1.*t306;
  t374 = 1. + t328;
  t483 = 1.6e-11*t481;
  t895 = -1.000000000016*t443;
  t898 = 1. + t895;
  t1005 = 0.004352*t898;
  t1098 = -0.9999910000159999*t1048;
  t1201 = t1005 + t1098;
  t885 = Sin(var1[10]);
  t1389 = -1. + t452;
  t1398 = 4.e-6*t1389;
  t1402 = 3.999964e-6*t443;
  t1482 = -1.7408e-8*t1048;
  t1494 = t1398 + t1402 + t1482;
  t1567 = 0.999991*t426;
  t1627 = 0.004352*t1048;
  t1642 = t483 + t1567 + t1627;
  t1778 = Cos(var1[9]);
  t820 = Sin(var1[9]);
  t1251 = -1. + t306;
  t1318 = 1.6e-11*t1251;
  t1335 = 1. + t1318;
  t2114 = -1.26e-8*var1[11];
  t2143 = 1. + t483;
  t2147 = -0.14871*t2143;
  t2174 = -1.64779999997447e-7*t443;
  t2198 = -1.59556e-7*t481;
  t2204 = -1.199987999968e-6*t1048;
  t2212 = t2114 + t2147 + t2174 + t2198 + t2204;
  t1792 = -1.000000000016*t374;
  t1831 = 1. + t1792;
  t2223 = 0.803147*t898;
  t2228 = 0.50315000001605*t443;
  t2233 = 0.00130540515936178*t1048;
  t2253 = t2223 + t2228 + t2233;
  t2263 = -5.04e-14*var1[11];
  t2269 = -0.03988959484*t443;
  t2274 = 6.38224e-13*t481;
  t2276 = -0.041195*t426;
  t2278 = 0.299996999992*t1048;
  t2279 = t2263 + t2269 + t2274 + t2276 + t2278;
  t1204 = -4.e-6*t885*t1201;
  t1514 = t1335*t1494;
  t1684 = 4.e-6*t374*t1642;
  t1690 = 0. + t1204 + t1514 + t1684;
  t1858 = t1831*t1201;
  t1859 = 4.e-6*t885*t1494;
  t1863 = -1.*t885*t1642;
  t1913 = 0. + t1858 + t1859 + t1863;
  t1950 = -1.*t1778;
  t2001 = 1. + t1950;
  t2034 = -0.15121*t820;
  t2043 = -1.2484e-7*var1[10];
  t2081 = 2.479936e-18*t374;
  t2093 = -1.54996e-7*t1251;
  t2104 = 1.124840000016e-6*t885;
  t2217 = t1335*t2212;
  t2256 = -4.e-6*t885*t2253;
  t2280 = 4.e-6*t374*t2279;
  t2288 = t2043 + t2081 + t2093 + t2104 + t2217 + t2256 + t2280;
  t2310 = 0.281210000008499*t374;
  t2320 = -0.03874900000062*t885;
  t2322 = 4.e-6*t885*t2212;
  t2324 = t1831*t2253;
  t2327 = -1.*t885*t2279;
  t2335 = t2310 + t2320 + t2322 + t2324 + t2327;
  t517 = -1. + t452 + t483;
  t585 = 4.e-6*t481;
  t708 = -4.e-6*t426;
  t738 = t585 + t708;
  t2017 = 0.15121*t2001;
  t2306 = -1.*t820*t2288;
  t2340 = t1778*t2335;
  t2346 = t2017 + t2034 + t2306 + t2340;
  t2531 = t1335*t517;
  t2533 = 4.e-6*t374*t738;
  t2542 = t2531 + t2533;
  t2553 = 4.e-6*t517*t885;
  t2563 = -1.*t738*t885;
  t2573 = t2553 + t2563;
  t2386 = -0.15121*t2001;
  t2392 = t1778*t2288;
  t2396 = t820*t2335;
  t2407 = t2386 + t2034 + t2392 + t2396;
  t583 = 4.e-6*t374*t517;
  t773 = t306*t738;
  t794 = t583 + t773;
  t2443 = -4.9936e-13*var1[10];
  t2453 = -0.038749*t374;
  t2463 = 6.19984e-13*t1251;
  t2467 = -0.281210000004*t885;
  t2473 = 4.e-6*t374*t2212;
  t2483 = t885*t2253;
  t2493 = t306*t2279;
  t2503 = 0. + t2443 + t2453 + t2463 + t2467 + t2473 + t2483 + t2493;
  t2420 = t885*t1201;
  t2427 = 4.e-6*t374*t1494;
  t2433 = t306*t1642;
  t2437 = 0. + t2420 + t2427 + t2433;
  t2654 = t2443 + t2453 + t2463 + t2467 + t2473 + t2483 + t2493;
  t2744 = -1.7408e-8*t443;
  t2765 = -3.999964e-6*t1048;
  t2768 = t2744 + t2765;
  t2795 = 0.999991*t898;
  t2808 = t2795 + t1627;
  t2830 = -0.004352*t426;
  t2836 = 0.999991*t1048;
  t2858 = t2830 + t2836;
  t2905 = -1.*t2212*t1494;
  t2907 = -1.*t1201*t2253;
  t2908 = -1.*t1642*t2279;
  t2909 = t2905 + t2907 + t2908;
  t2913 = t517*t2212;
  t2918 = t738*t2279;
  t2919 = t2913 + t2918;
  t2790 = t1335*t2768;
  t2816 = -4.e-6*t885*t2808;
  t2869 = 4.e-6*t374*t2858;
  t2886 = 0. + t2790 + t2816 + t2869;
  t2890 = 4.e-6*t885*t2768;
  t2891 = t1831*t2808;
  t2892 = -1.*t885*t2858;
  t2894 = 0. + t2890 + t2891 + t2892;
  t3022 = Cos(var1[5]);
  t2359 = t1778*t1690;
  t2361 = t820*t1913;
  t2366 = 0. + t2359 + t2361;
  t1693 = -1.*t820*t1690;
  t1917 = t1778*t1913;
  t1946 = 0. + t1693 + t1917;
  t3047 = Sin(var1[5]);
  t2624 = t794*t2503;
  t2603 = t1778*t2542;
  t2609 = t820*t2573;
  t2613 = t2603 + t2609;
  t2543 = -1.*t2542*t820;
  t2581 = t1778*t2573;
  t2583 = t2543 + t2581;
  t3105 = t3022*t2613;
  t3116 = t2583*t3047;
  t3118 = t3105 + t3116;
  t2511 = -1.*t2437*t2503;
  t3093 = t3022*t2366;
  t3095 = t1946*t3047;
  t3096 = 0. + t3093 + t3095;
  t3160 = t3022*t2407;
  t3177 = t2346*t3047;
  t3185 = 0. + t3160 + t3177;
  t3205 = t3022*t2346;
  t3209 = -1.*t2407*t3047;
  t3220 = 0. + t3205 + t3209;
  t3038 = t1778*t2886;
  t3039 = t820*t2894;
  t3044 = 0. + t3038 + t3039;
  t3024 = -1.*t820*t2886;
  t3026 = t1778*t2894;
  t3027 = 0. + t3024 + t3026;
  t3021 = Cos(var1[4]);
  t3008 = 4.e-6*t374*t2768;
  t3009 = t885*t2808;
  t3016 = t306*t2858;
  t3018 = 0. + t3008 + t3009 + t3016;
  t3019 = Sin(var1[4]);
  t3029 = t3022*t3027;
  t3054 = -1.*t3044*t3047;
  t3071 = 0. + t3029 + t3054;
  t3285 = Cos(var1[3]);
  t3262 = t3022*t3044;
  t3275 = t3027*t3047;
  t3279 = 0. + t3262 + t3275;
  t3259 = Sin(var1[3]);
  t3290 = t3021*t3018;
  t3294 = -1.*t3019*t3071;
  t3295 = 0. + t3290 + t3294;
  t3231 = t3022*t1946;
  t3232 = -1.*t2366*t3047;
  t3234 = 0. + t3231 + t3232;
  t3192 = t3118*t3185;
  t3195 = t3022*t2583;
  t3198 = -1.*t2613*t3047;
  t3200 = t3195 + t3198;
  t3326 = t794*t3019;
  t3329 = t3021*t3200;
  t3331 = t3326 + t3329;
  t3228 = -1.*t3096*t3185;
  t3315 = t2437*t3019;
  t3318 = t3021*t3234;
  t3320 = 0. + t3315 + t3318;
  t3336 = t2503*t3019;
  t3346 = t3021*t3220;
  t3347 = 0. + t3336 + t3346;
  t3378 = t3021*t2503;
  t3381 = -1.*t3019*t3220;
  t3385 = 0. + t3378 + t3381;
  t3549 = t2768*t2212;
  t3553 = t2253*t2808;
  t3555 = t2279*t2858;
  t3559 = t3549 + t3553 + t3555;
  t3562 = -1.*t517*t2212;
  t3565 = -1.*t738*t2279;
  t3569 = t3562 + t3565;
  t3402 = t3021*t2437;
  t3409 = -1.*t3019*t3234;
  t3411 = 0. + t3402 + t3409;
  t3454 = -1.*t794*t2503;
  t3445 = t2503*t3018;
  t3020 = t3018*t3019;
  t3075 = t3021*t3071;
  t3076 = 0. + t3020 + t3075;
  t3633 = -1.*t3118*t3185;
  t3356 = t794*t3021;
  t3357 = -1.*t3019*t3200;
  t3370 = t3356 + t3357;
  t3647 = t3185*t3279;
  t3843 = t2212*t1494;
  t3844 = t1201*t2253;
  t3847 = t1642*t2279;
  t3858 = t3843 + t3844 + t3847;
  t3816 = -1.*t2768*t2212;
  t3825 = -1.*t2253*t2808;
  t3827 = -1.*t2279*t2858;
  t3839 = t3816 + t3825 + t3827;
  t3736 = t2437*t2503;
  t3723 = -1.*t2503*t3018;
  t3931 = t3096*t3185;
  t3941 = -1.*t3185*t3279;
  p_output1[0]=t3076*var2[0] + (0. + t3279*t3285 - 1.*t3259*t3295)*var2[1] + (0. + t3259*t3279 + t3285*t3295)*var2[2] + (t3320*(t3192 + t3331*t3347 + t3370*t3385) + t3331*(t3228 - 1.*t3320*t3347 - 1.*t3385*t3411))*var2[3] + (t3096*(t2624 + t3192 + t3200*t3220) + t3118*(t2511 + t3228 - 1.*t3220*t3234))*var2[4] + (t2437*(t2346*t2583 + t2407*t2613 + t2624) + (-1.*t1946*t2346 - 1.*t2366*t2407 + t2511)*t794)*var2[5] + (-0.15121*t2886 - 0.15121*t2894 + (-1.*t1690*t2288 - 1.*t1913*t2335 - 1.*t2437*t2654)*t794 + t2437*(t2288*t2542 + t2335*t2573 + t2654*t794))*var2[9] + (1.e-6*t2768 - 0.038749*t2808 - 0.28121*t2858 - 1.*t1494*t2919 - 1.*t2909*t517 + 4.e-6*(-1.*t1642*t2919 - 1.*t2909*t738))*var2[10] - 1.9353204325022392e-7*var2[11];
  p_output1[1]=t3320*var2[0] + (0. + t3096*t3285 - 1.*t3259*t3411)*var2[1] + (0. + t3096*t3259 + t3285*t3411)*var2[2] + (t3076*(-1.*t3331*t3347 - 1.*t3370*t3385 + t3633) + t3331*(t3076*t3347 + t3295*t3385 + t3647))*var2[3] + (t3279*(-1.*t3200*t3220 + t3454 + t3633) + t3118*(t3071*t3220 + t3445 + t3647))*var2[4] + (t3018*(-1.*t2346*t2583 - 1.*t2407*t2613 + t3454) + (t2346*t3027 + t2407*t3044 + t3445)*t794)*var2[5] + (-0.15121*t1690 - 0.15121*t1913 + (t2288*t2886 + t2335*t2894 + t2654*t3018)*t794 + t3018*(-1.*t2288*t2542 - 1.*t2335*t2573 - 1.*t2654*t794))*var2[9] + (-0.038749*t1201 + 1.e-6*t1494 - 0.28121*t1642 - 1.*t2768*t3569 - 1.*t3559*t517 + 4.e-6*(-1.*t2858*t3569 - 1.*t3559*t738))*var2[10] + 0.29999998115510645*var2[11];
  p_output1[2]=t3331*var2[0] + (t3118*t3285 - 1.*t3259*t3370)*var2[1] + (t3118*t3259 + t3285*t3370)*var2[2] + (t3076*(t3320*t3347 + t3385*t3411 + t3931) + t3320*(-1.*t3076*t3347 - 1.*t3295*t3385 + t3941))*var2[3] + (t3279*(t3220*t3234 + t3736 + t3931) + t3096*(-1.*t3071*t3220 + t3723 + t3941))*var2[4] + (t2437*(-1.*t2346*t3027 - 1.*t2407*t3044 + t3723) + t3018*(t1946*t2346 + t2366*t2407 + t3736))*var2[5] + (-0.15121*t2542 - 0.15121*t2573 + (t1690*t2288 + t1913*t2335 + t2437*t2654)*t3018 + t2437*(-1.*t2288*t2886 - 1.*t2335*t2894 - 1.*t2654*t3018))*var2[9] + (-1.*t1494*t3839 - 1.*t2768*t3858 + 4.e-6*(-1.*t1642*t3839 - 1.*t2858*t3858) + 1.e-6*t517 - 0.28121*t738)*var2[10] + 1.1914820871506078e-8*var2[11];
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

#include "dh_FrFoot_ParallelStance1.hh"

namespace ParallelStance1
{

void dh_FrFoot_ParallelStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
