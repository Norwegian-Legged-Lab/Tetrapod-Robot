/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 17:51:13 GMT+01:00
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
  double t675;
  double t425;
  double t1571;
  double t893;
  double t1230;
  double t1302;
  double t1575;
  double t1587;
  double t427;
  double t647;
  double t1660;
  double t1661;
  double t1663;
  double t1851;
  double t1843;
  double t1775;
  double t1794;
  double t1795;
  double t1797;
  double t1798;
  double t1806;
  double t1807;
  double t1855;
  double t1859;
  double t1861;
  double t2264;
  double t1717;
  double t1735;
  double t1773;
  double t2240;
  double t2244;
  double t2254;
  double t2270;
  double t2277;
  double t2279;
  double t2282;
  double t2300;
  double t2305;
  double t2307;
  double t2313;
  double t2314;
  double t2316;
  double t2335;
  double t2352;
  double t2353;
  double t2361;
  double t2371;
  double t2377;
  double t2379;
  double t2381;
  double t2382;
  double t2392;
  double t2198;
  double t2448;
  double t2450;
  double t2454;
  double t2461;
  double t2468;
  double t2474;
  double t2479;
  double t2483;
  double t2527;
  double t2528;
  double t2530;
  double t2532;
  double t2567;
  double t2570;
  double t2573;
  double t2577;
  double t1905;
  double t1998;
  double t2099;
  double t1824;
  double t1879;
  double t1883;
  double t1631;
  double t1688;
  double t1713;
  double t1892;
  double t2211;
  double t2224;
  double t2691;
  double t2407;
  double t2408;
  double t2415;
  double t2364;
  double t2393;
  double t2399;
  double t2728;
  double t2278;
  double t2312;
  double t2323;
  double t2331;
  double t2400;
  double t2416;
  double t2424;
  double t2617;
  double t2631;
  double t2644;
  double t2533;
  double t2587;
  double t2588;
  double t2456;
  double t2470;
  double t2501;
  double t2517;
  double t2614;
  double t2649;
  double t2654;
  double t2693;
  double t2696;
  double t2703;
  double t2729;
  double t2730;
  double t2739;
  double t2763;
  double t2773;
  double t2774;
  double t2777;
  double t2778;
  double t2780;
  double t2799;
  double t2800;
  double t2802;
  double t2820;
  double t2834;
  double t2853;
  double t2333;
  double t2429;
  double t2434;
  double t3026;
  double t3031;
  double t3034;
  double t3036;
  double t3040;
  double t3044;
  double t3045;
  double t3078;
  double t3097;
  double t3099;
  double t3103;
  double t3108;
  double t3110;
  double t3113;
  double t3117;
  double t3124;
  double t3126;
  double t2968;
  double t2972;
  double t2977;
  double t2979;
  double t2981;
  double t2989;
  double t3024;
  double t3048;
  double t3104;
  double t3144;
  double t3147;
  double t3167;
  double t3168;
  double t3170;
  double t3171;
  double t3172;
  double t3175;
  double t1725;
  double t2227;
  double t2228;
  double t3197;
  double t3201;
  double t3202;
  double t3210;
  double t2976;
  double t3156;
  double t3186;
  double t3190;
  double t3246;
  double t3247;
  double t3256;
  double t3263;
  double t3266;
  double t3280;
  double t3281;
  double t3285;
  double t3299;
  double t3303;
  double t3316;
  double t3191;
  double t3219;
  double t3220;
  double t3293;
  double t3317;
  double t3318;
  double t3333;
  double t3343;
  double t3345;
  double t2522;
  double t2662;
  double t2663;
  double t3234;
  double t3354;
  double t3403;
  double t3432;
  double t3480;
  double t3522;
  double t3625;
  double t3574;
  double t3732;
  double t3714;
  double t3682;
  double t3667;
  double t4095;
  double t4538;
  double t4552;
  double t4554;
  double t4559;
  double t4481;
  double t4486;
  double t4507;
  double t4516;
  double t4671;
  double t4673;
  double t4687;
  double t4695;
  double t4739;
  double t4748;
  double t4761;
  double t4844;
  double t4868;
  double t4879;
  double t4882;
  double t4909;
  double t4919;
  double t4942;
  t675 = Cos(var1[11]);
  t425 = Cos(var1[10]);
  t1571 = -1. + t675;
  t893 = -1.*t675;
  t1230 = 1. + t893;
  t1302 = 1.6e-11*t1230;
  t1575 = 1.6e-11*t1571;
  t1587 = -1. + t1302 + t1575;
  t427 = -1.*t425;
  t647 = 1. + t427;
  t1660 = 4.e-6*t1571;
  t1661 = -4.e-6*t675;
  t1663 = t1660 + t1661;
  t1851 = Sin(var1[10]);
  t1843 = Cos(var1[9]);
  t1775 = -1. + t425;
  t1794 = 1.6e-11*t1775;
  t1795 = 1. + t1794;
  t1797 = t1795*t1587;
  t1798 = 4.e-6*t647*t1663;
  t1806 = t1797 + t1798;
  t1807 = Sin(var1[9]);
  t1855 = 4.e-6*t1587*t1851;
  t1859 = -1.*t1663*t1851;
  t1861 = t1855 + t1859;
  t2264 = Sin(var1[11]);
  t1717 = Sin(var1[4]);
  t1735 = Cos(var1[4]);
  t1773 = Cos(var1[5]);
  t2240 = -1.000000000016*t1230;
  t2244 = 1. + t2240;
  t2254 = 0.004352*t2244;
  t2270 = -0.9999910000159999*t2264;
  t2277 = t2254 + t2270;
  t2279 = -1. + t1302;
  t2282 = 4.e-6*t2279;
  t2300 = 3.999964e-6*t1230;
  t2305 = -1.7408e-8*t2264;
  t2307 = t2282 + t2300 + t2305;
  t2313 = 0.999991*t675;
  t2314 = 0.004352*t2264;
  t2316 = t1575 + t2313 + t2314;
  t2335 = -4.e-6*t1851*t2277;
  t2352 = t1795*t2307;
  t2353 = 4.e-6*t647*t2316;
  t2361 = 0. + t2335 + t2352 + t2353;
  t2371 = -1.000000000016*t647;
  t2377 = 1. + t2371;
  t2379 = t2377*t2277;
  t2381 = 4.e-6*t1851*t2307;
  t2382 = -1.*t1851*t2316;
  t2392 = 0. + t2379 + t2381 + t2382;
  t2198 = Sin(var1[5]);
  t2448 = -1.7408e-8*t1230;
  t2450 = -3.999964e-6*t2264;
  t2454 = t2448 + t2450;
  t2461 = 0.999991*t2244;
  t2468 = t2461 + t2314;
  t2474 = -0.004352*t675;
  t2479 = 0.999991*t2264;
  t2483 = t2474 + t2479;
  t2527 = t1795*t2454;
  t2528 = -4.e-6*t1851*t2468;
  t2530 = 4.e-6*t647*t2483;
  t2532 = 0. + t2527 + t2528 + t2530;
  t2567 = 4.e-6*t1851*t2454;
  t2570 = t2377*t2468;
  t2573 = -1.*t1851*t2483;
  t2577 = 0. + t2567 + t2570 + t2573;
  t1905 = t1843*t1806;
  t1998 = t1807*t1861;
  t2099 = t1905 + t1998;
  t1824 = -1.*t1806*t1807;
  t1879 = t1843*t1861;
  t1883 = t1824 + t1879;
  t1631 = 4.e-6*t647*t1587;
  t1688 = t425*t1663;
  t1713 = t1631 + t1688;
  t1892 = t1773*t1883;
  t2211 = -1.*t2099*t2198;
  t2224 = t1892 + t2211;
  t2691 = Cos(var1[3]);
  t2407 = t1843*t2361;
  t2408 = t1807*t2392;
  t2415 = 0. + t2407 + t2408;
  t2364 = -1.*t1807*t2361;
  t2393 = t1843*t2392;
  t2399 = 0. + t2364 + t2393;
  t2728 = Sin(var1[3]);
  t2278 = t1851*t2277;
  t2312 = 4.e-6*t647*t2307;
  t2323 = t425*t2316;
  t2331 = 0. + t2278 + t2312 + t2323;
  t2400 = t1773*t2399;
  t2416 = -1.*t2415*t2198;
  t2424 = 0. + t2400 + t2416;
  t2617 = t1843*t2532;
  t2631 = t1807*t2577;
  t2644 = 0. + t2617 + t2631;
  t2533 = -1.*t1807*t2532;
  t2587 = t1843*t2577;
  t2588 = 0. + t2533 + t2587;
  t2456 = 4.e-6*t647*t2454;
  t2470 = t1851*t2468;
  t2501 = t425*t2483;
  t2517 = 0. + t2456 + t2470 + t2501;
  t2614 = t1773*t2588;
  t2649 = -1.*t2644*t2198;
  t2654 = 0. + t2614 + t2649;
  t2693 = t1773*t2099;
  t2696 = t1883*t2198;
  t2703 = t2693 + t2696;
  t2729 = t1713*t1735;
  t2730 = -1.*t1717*t2224;
  t2739 = t2729 + t2730;
  t2763 = t1773*t2415;
  t2773 = t2399*t2198;
  t2774 = 0. + t2763 + t2773;
  t2777 = t1735*t2331;
  t2778 = -1.*t1717*t2424;
  t2780 = 0. + t2777 + t2778;
  t2799 = t1773*t2644;
  t2800 = t2588*t2198;
  t2802 = 0. + t2799 + t2800;
  t2820 = t1735*t2517;
  t2834 = -1.*t1717*t2654;
  t2853 = 0. + t2820 + t2834;
  t2333 = t2331*t1717;
  t2429 = t1735*t2424;
  t2434 = 0. + t2333 + t2429;
  t3026 = -1.26e-8*var1[11];
  t3031 = 1. + t1575;
  t3034 = -0.14871*t3031;
  t3036 = -1.64779999997447e-7*t1230;
  t3040 = -1.59556e-7*t1571;
  t3044 = -1.199987999968e-6*t2264;
  t3045 = t3026 + t3034 + t3036 + t3040 + t3044;
  t3078 = 0.803147*t2244;
  t3097 = 0.50315000001605*t1230;
  t3099 = 0.00130540515936178*t2264;
  t3103 = t3078 + t3097 + t3099;
  t3108 = -5.04e-14*var1[11];
  t3110 = -0.03988959484*t1230;
  t3113 = 6.38224e-13*t1571;
  t3117 = -0.041195*t675;
  t3124 = 0.299996999992*t2264;
  t3126 = t3108 + t3110 + t3113 + t3117 + t3124;
  t2968 = -1.*t1843;
  t2972 = 1. + t2968;
  t2977 = -0.15121*t1807;
  t2979 = -1.2484e-7*var1[10];
  t2981 = 2.479936e-18*t647;
  t2989 = -1.54996e-7*t1775;
  t3024 = 1.124840000016e-6*t1851;
  t3048 = t1795*t3045;
  t3104 = -4.e-6*t1851*t3103;
  t3144 = 4.e-6*t647*t3126;
  t3147 = t2979 + t2981 + t2989 + t3024 + t3048 + t3104 + t3144;
  t3167 = 0.281210000008499*t647;
  t3168 = -0.03874900000062*t1851;
  t3170 = 4.e-6*t1851*t3045;
  t3171 = t2377*t3103;
  t3172 = -1.*t1851*t3126;
  t3175 = t3167 + t3168 + t3170 + t3171 + t3172;
  t1725 = t1713*t1717;
  t2227 = t1735*t2224;
  t2228 = t1725 + t2227;
  t3197 = 0.15121*t2972;
  t3201 = -1.*t1807*t3147;
  t3202 = t1843*t3175;
  t3210 = t3197 + t2977 + t3201 + t3202;
  t2976 = -0.15121*t2972;
  t3156 = t1843*t3147;
  t3186 = t1807*t3175;
  t3190 = t2976 + t2977 + t3156 + t3186;
  t3246 = -4.9936e-13*var1[10];
  t3247 = -0.038749*t647;
  t3256 = 6.19984e-13*t1775;
  t3263 = -0.281210000004*t1851;
  t3266 = 4.e-6*t647*t3045;
  t3280 = t1851*t3103;
  t3281 = t425*t3126;
  t3285 = 0. + t3246 + t3247 + t3256 + t3263 + t3266 + t3280 + t3281;
  t3299 = t1773*t3210;
  t3303 = -1.*t3190*t2198;
  t3316 = 0. + t3299 + t3303;
  t3191 = t1773*t3190;
  t3219 = t3210*t2198;
  t3220 = 0. + t3191 + t3219;
  t3293 = t3285*t1717;
  t3317 = t1735*t3316;
  t3318 = 0. + t3293 + t3317;
  t3333 = t1735*t3285;
  t3343 = -1.*t1717*t3316;
  t3345 = 0. + t3333 + t3343;
  t2522 = t2517*t1717;
  t2662 = t1735*t2654;
  t2663 = 0. + t2522 + t2662;
  t3234 = t2703*t3220;
  t3354 = -1.*t2774*t3220;
  t3403 = t2774*t3220;
  t3432 = -1.*t3220*t2802;
  t3480 = -1.*t2703*t3220;
  t3522 = t3220*t2802;
  t3625 = -1.*t2331*t3285;
  t3574 = t1713*t3285;
  t3732 = t3285*t2517;
  t3714 = -1.*t1713*t3285;
  t3682 = -1.*t3285*t2517;
  t3667 = t2331*t3285;
  t4095 = t3246 + t3247 + t3256 + t3263 + t3266 + t3280 + t3281;
  t4538 = t3045*t2307;
  t4552 = t2277*t3103;
  t4554 = t2316*t3126;
  t4559 = t4538 + t4552 + t4554;
  t4481 = -1.*t2454*t3045;
  t4486 = -1.*t3103*t2468;
  t4507 = -1.*t3126*t2483;
  t4516 = t4481 + t4486 + t4507;
  t4671 = t2454*t3045;
  t4673 = t3103*t2468;
  t4687 = t3126*t2483;
  t4695 = t4671 + t4673 + t4687;
  t4739 = -1.*t1587*t3045;
  t4748 = -1.*t1663*t3126;
  t4761 = t4739 + t4748;
  t4844 = -1.*t3045*t2307;
  t4868 = -1.*t2277*t3103;
  t4879 = -1.*t2316*t3126;
  t4882 = t4844 + t4868 + t4879;
  t4909 = t1587*t3045;
  t4919 = t1663*t3126;
  t4942 = t4909 + t4919;
  p_output1[0]=t2663*var2[0] + t2434*var2[1] + t2228*var2[2];
  p_output1[1]=(0. + t2691*t2802 - 1.*t2728*t2853)*var2[0] + (0. + t2691*t2774 - 1.*t2728*t2780)*var2[1] + (t2691*t2703 - 1.*t2728*t2739)*var2[2];
  p_output1[2]=(0. + t2728*t2802 + t2691*t2853)*var2[0] + (0. + t2728*t2774 + t2691*t2780)*var2[1] + (t2703*t2728 + t2691*t2739)*var2[2];
  p_output1[3]=(t2434*(t3234 + t2228*t3318 + t2739*t3345) + t2228*(-1.*t2434*t3318 - 1.*t2780*t3345 + t3354))*var2[0] + (t2663*(-1.*t2228*t3318 - 1.*t2739*t3345 + t3480) + t2228*(t2663*t3318 + t2853*t3345 + t3522))*var2[1] + (t2663*(t2434*t3318 + t2780*t3345 + t3403) + t2434*(-1.*t2663*t3318 - 1.*t2853*t3345 + t3432))*var2[2];
  p_output1[4]=(t2774*(t3234 + t2224*t3316 + t3574) + t2703*(-1.*t2424*t3316 + t3354 + t3625))*var2[0] + (t2802*(-1.*t2224*t3316 + t3480 + t3714) + t2703*(t2654*t3316 + t3522 + t3732))*var2[1] + (t2802*(t2424*t3316 + t3403 + t3667) + t2774*(-1.*t2654*t3316 + t3432 + t3682))*var2[2];
  p_output1[5]=(t2331*(t2099*t3190 + t1883*t3210 + t3574) + t1713*(-1.*t2415*t3190 - 1.*t2399*t3210 + t3625))*var2[0] + (t2517*(-1.*t2099*t3190 - 1.*t1883*t3210 + t3714) + t1713*(t2644*t3190 + t2588*t3210 + t3732))*var2[1] + (t2517*(t2415*t3190 + t2399*t3210 + t3667) + t2331*(-1.*t2644*t3190 - 1.*t2588*t3210 + t3682))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.15121*t2532 - 0.15121*t2577 + t2331*(t1806*t3147 + t1861*t3175 + t1713*t4095) + t1713*(-1.*t2361*t3147 - 1.*t2392*t3175 - 1.*t2331*t4095))*var2[0] + (-0.15121*t2361 - 0.15121*t2392 + t2517*(-1.*t1806*t3147 - 1.*t1861*t3175 - 1.*t1713*t4095) + t1713*(t2532*t3147 + t2577*t3175 + t2517*t4095))*var2[1] + (-0.15121*t1806 - 0.15121*t1861 + t2517*(t2361*t3147 + t2392*t3175 + t2331*t4095) + t2331*(-1.*t2532*t3147 - 1.*t2577*t3175 - 1.*t2517*t4095))*var2[2];
  p_output1[10]=(1.e-6*t2454 - 0.038749*t2468 - 0.28121*t2483 - 1.*t1587*t4882 - 1.*t2307*t4942 + 4.e-6*(-1.*t1663*t4882 - 1.*t2316*t4942))*var2[0] + (-0.038749*t2277 + 1.e-6*t2307 - 0.28121*t2316 - 1.*t1587*t4695 - 1.*t2454*t4761 + 4.e-6*(-1.*t1663*t4695 - 1.*t2483*t4761))*var2[1] + (1.e-6*t1587 - 0.28121*t1663 - 1.*t2307*t4516 - 1.*t2454*t4559 + 4.e-6*(-1.*t2316*t4516 - 1.*t2483*t4559))*var2[2];
  p_output1[11]=-1.9353204325022392e-7*var2[0] + 0.29999998115510645*var2[1] + 1.1914820871506078e-8*var2[2];
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

#include "fFrFoot_vec_QuadrupleStance.hh"

namespace QuadrupleStance
{

void fFrFoot_vec_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
