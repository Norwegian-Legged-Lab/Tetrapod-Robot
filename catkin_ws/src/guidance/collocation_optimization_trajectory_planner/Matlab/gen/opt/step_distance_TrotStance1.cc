/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:16:47 GMT+01:00
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
  double t472;
  double t667;
  double t1695;
  double t1699;
  double t1716;
  double t1729;
  double t1905;
  double t1908;
  double t1978;
  double t2009;
  double t1858;
  double t677;
  double t718;
  double t763;
  double t1110;
  double t1215;
  double t1447;
  double t1452;
  double t1507;
  double t1575;
  double t1590;
  double t2139;
  double t1728;
  double t2042;
  double t2059;
  double t1841;
  double t2202;
  double t2308;
  double t2002;
  double t2473;
  double t2474;
  double t2476;
  double t2480;
  double t2389;
  double t2393;
  double t2256;
  double t2265;
  double t2278;
  double t2404;
  double t2411;
  double t2415;
  double t2493;
  double t2186;
  double t2536;
  double t2214;
  double t2580;
  double t2479;
  double t2620;
  double t2621;
  double t1749;
  double t2519;
  double t2827;
  double t2830;
  double t2832;
  double t2847;
  double t2426;
  double t2369;
  double t2371;
  double t2379;
  double t2463;
  double t2465;
  double t2466;
  double t2864;
  double t2073;
  double t2887;
  double t2013;
  double t2845;
  double t2995;
  double t2996;
  double t3044;
  double t2329;
  double t2919;
  double t2316;
  double t2520;
  double t2535;
  double t2538;
  double t2540;
  double t2541;
  double t2546;
  double t2551;
  double t2555;
  double t2668;
  double t2622;
  double t2629;
  double t2630;
  double t2633;
  double t2635;
  double t2636;
  double t2641;
  double t2649;
  double t2743;
  double t2744;
  double t2764;
  double t2774;
  double t2783;
  double t2795;
  double t2811;
  double t2813;
  double t2496;
  double t3140;
  double t2482;
  double t3203;
  double t2598;
  double t3147;
  double t3157;
  double t2589;
  double t3069;
  double t2895;
  double t2908;
  double t2932;
  double t2936;
  double t2938;
  double t2944;
  double t2961;
  double t2962;
  double t3080;
  double t3026;
  double t3029;
  double t3038;
  double t3048;
  double t3049;
  double t3051;
  double t3055;
  double t3056;
  double t3097;
  double t3103;
  double t3110;
  double t3114;
  double t3122;
  double t3123;
  double t3125;
  double t3132;
  double t2987;
  double t3297;
  double t3000;
  double t3318;
  double t3288;
  double t2849;
  double t1693;
  double t1722;
  double t1766;
  double t1827;
  double t1847;
  double t1852;
  double t1853;
  double t1870;
  double t2001;
  double t2028;
  double t2029;
  double t2090;
  double t2100;
  double t2115;
  double t3384;
  double t811;
  double t1409;
  double t1607;
  double t1609;
  double t3395;
  double t3396;
  double t3399;
  double t3401;
  double t2120;
  double t2122;
  double t2162;
  double t2169;
  double t3404;
  double t3406;
  double t3411;
  double t2171;
  double t2178;
  double t2188;
  double t2194;
  double t2215;
  double t2252;
  double t2254;
  double t2304;
  double t2307;
  double t2319;
  double t2328;
  double t2333;
  double t2350;
  double t2359;
  double t2382;
  double t2383;
  double t2390;
  double t2391;
  double t2395;
  double t2400;
  double t2403;
  double t2418;
  double t2422;
  double t2431;
  double t2444;
  double t2453;
  double t2454;
  double t2461;
  double t2471;
  double t2478;
  double t2486;
  double t2491;
  double t2506;
  double t2508;
  double t2514;
  double t3418;
  double t3420;
  double t3421;
  double t3435;
  double t3436;
  double t3438;
  double t2565;
  double t2568;
  double t2590;
  double t2597;
  double t2601;
  double t2609;
  double t2617;
  double t2663;
  double t2666;
  double t2682;
  double t2717;
  double t2718;
  double t2723;
  double t2734;
  double t2825;
  double t2844;
  double t2851;
  double t2859;
  double t2866;
  double t2876;
  double t2885;
  double t3426;
  double t3428;
  double t3429;
  double t3444;
  double t3446;
  double t3447;
  double t2974;
  double t2978;
  double t2990;
  double t2993;
  double t3002;
  double t3014;
  double t3023;
  double t3062;
  double t3065;
  double t3072;
  double t3078;
  double t3090;
  double t3094;
  double t3095;
  double t3141;
  double t3451;
  double t3452;
  double t3454;
  double t3455;
  double t3159;
  double t3458;
  double t3462;
  double t3465;
  double t3466;
  double t3168;
  double t3169;
  double t3486;
  double t3488;
  double t3497;
  double t3498;
  double t3186;
  double t3192;
  double t3215;
  double t3226;
  double t3245;
  double t3261;
  double t3269;
  double t3275;
  double t3290;
  double t3506;
  double t3508;
  double t3510;
  double t3514;
  double t3300;
  double t3526;
  double t3528;
  double t3531;
  double t3533;
  double t3305;
  double t3309;
  double t3547;
  double t3549;
  double t3552;
  double t3554;
  double t3321;
  double t3325;
  double t3330;
  double t3335;
  double t3344;
  double t3349;
  double t3353;
  double t3357;
  t472 = Cos(var1[4]);
  t667 = Cos(var1[5]);
  t1695 = Cos(var1[13]);
  t1699 = -1.*t1695;
  t1716 = 1. + t1699;
  t1729 = Sin(var1[13]);
  t1905 = Cos(var1[16]);
  t1908 = -1.*t1905;
  t1978 = 1. + t1908;
  t2009 = Sin(var1[16]);
  t1858 = Sin(var1[4]);
  t677 = Cos(var1[12]);
  t718 = -1.*t677;
  t763 = 1. + t718;
  t1110 = Sin(var1[12]);
  t1215 = 0.15121*t1110;
  t1447 = Cos(var1[15]);
  t1452 = -1.*t1447;
  t1507 = 1. + t1452;
  t1575 = -0.15121*t1507;
  t1590 = Sin(var1[15]);
  t2139 = Sin(var1[5]);
  t1728 = 4.e-6*t1716;
  t2042 = -1. + t1905;
  t2059 = 4.e-6*t2042;
  t1841 = -2.8e-11*t1716;
  t2202 = 7.e-6*t1716;
  t2308 = 7.e-6*t1978;
  t2002 = 2.8e-11*t1978;
  t2473 = Cos(var1[14]);
  t2474 = -1.*t2473;
  t2476 = 1. + t2474;
  t2480 = Sin(var1[14]);
  t2389 = -1.*t1729;
  t2393 = -4.e-6*t1729;
  t2256 = -1.*t472*t667*t1110;
  t2265 = -1.*t677*t472*t2139;
  t2278 = t2256 + t2265;
  t2404 = t677*t472*t667;
  t2411 = -1.*t472*t1110*t2139;
  t2415 = t2404 + t2411;
  t2493 = 7.e-6*t2476;
  t2186 = -7.e-6*t1729;
  t2536 = -7.e-6*t1716;
  t2214 = 4.e-6*t1729;
  t2580 = 4.e-6*t2476;
  t2479 = -2.8e-11*t2476;
  t2620 = -1. + t1695;
  t2621 = 4.e-6*t2620;
  t1749 = 7.e-6*t1729;
  t2519 = 2.8e-11*t1716;
  t2827 = Cos(var1[17]);
  t2830 = -1.*t2827;
  t2832 = 1. + t2830;
  t2847 = Sin(var1[17]);
  t2426 = -4.e-6*t2009;
  t2369 = -1.*t472*t667*t1590;
  t2371 = -1.*t1447*t472*t2139;
  t2379 = t2369 + t2371;
  t2463 = t1447*t472*t667;
  t2465 = -1.*t472*t1590*t2139;
  t2466 = t2463 + t2465;
  t2864 = 2.8e-11*t2832;
  t2073 = -7.e-6*t2009;
  t2887 = -2.8e-11*t1978;
  t2013 = -1.*t2009;
  t2845 = 7.e-6*t2832;
  t2995 = -1. + t2827;
  t2996 = 4.e-6*t2995;
  t3044 = 4.e-6*t1978;
  t2329 = 7.e-6*t2009;
  t2919 = -7.e-6*t1978;
  t2316 = 4.e-6*t2009;
  t2520 = t2519 + t2389;
  t2535 = t2520*t1858;
  t2538 = t2536 + t2393;
  t2540 = t2538*t2278;
  t2541 = -1.000000000016*t1716;
  t2546 = 1. + t2541;
  t2551 = t2546*t2415;
  t2555 = t2535 + t2540 + t2551;
  t2668 = 7.e-6*t2480;
  t2622 = t2621 + t2186;
  t2629 = t2622*t1858;
  t2630 = -6.5e-11*t1716;
  t2633 = 1. + t2630;
  t2635 = t2633*t2278;
  t2636 = t2536 + t2214;
  t2641 = t2636*t2415;
  t2649 = t2629 + t2635 + t2641;
  t2743 = -1.000000000049*t1716;
  t2744 = 1. + t2743;
  t2764 = t2744*t1858;
  t2774 = t2621 + t1749;
  t2783 = t2774*t2278;
  t2795 = t2519 + t1729;
  t2811 = t2795*t2415;
  t2813 = t2764 + t2783 + t2811;
  t2496 = -4.e-6*t2480;
  t3140 = 2.8e-11*t2476;
  t2482 = -1.*t2480;
  t3203 = -7.e-6*t2476;
  t2598 = 4.e-6*t2480;
  t3147 = -1. + t2473;
  t3157 = 4.e-6*t3147;
  t2589 = -7.e-6*t2480;
  t3069 = 4.e-6*t2847;
  t2895 = t2887 + t2009;
  t2908 = t2895*t1858;
  t2932 = t2919 + t2426;
  t2936 = t2932*t2379;
  t2938 = -1.000000000016*t1978;
  t2944 = 1. + t2938;
  t2961 = t2944*t2466;
  t2962 = t2908 + t2936 + t2961;
  t3080 = 7.e-6*t2847;
  t3026 = -1.000000000049*t1978;
  t3029 = 1. + t3026;
  t3038 = t3029*t1858;
  t3048 = t3044 + t2073;
  t3049 = t3048*t2379;
  t3051 = t2887 + t2013;
  t3055 = t3051*t2466;
  t3056 = t3038 + t3049 + t3055;
  t3097 = t3044 + t2329;
  t3103 = t3097*t1858;
  t3110 = -6.5e-11*t1978;
  t3114 = 1. + t3110;
  t3122 = t3114*t2379;
  t3123 = t2919 + t2316;
  t3125 = t3123*t2466;
  t3132 = t3103 + t3122 + t3125;
  t2987 = -1.*t2847;
  t3297 = 4.e-6*t2832;
  t3000 = -7.e-6*t2847;
  t3318 = -2.8e-11*t2832;
  t3288 = -7.e-6*t2832;
  t2849 = -4.e-6*t2847;
  t1693 = 5.856279999999999e-13*var1[13];
  t1722 = -0.0387489999948987*t1716;
  t1766 = t1728 + t1749;
  t1827 = -2.123459e-6*t1766;
  t1847 = t1841 + t1729;
  t1852 = -0.281209000004*t1847;
  t1853 = t1693 + t1722 + t1827 + t1852;
  t1870 = 1.5843479999999999e-12*var1[16];
  t2001 = -0.03874900000889869*t1978;
  t2028 = t2002 + t2013;
  t2029 = -0.281211000004*t2028;
  t2090 = t2059 + t2073;
  t2100 = -1.8134809999999998e-6*t2090;
  t2115 = t1870 + t2001 + t2029 + t2100;
  t3384 = Sin(var1[3]);
  t811 = -0.15121*t763;
  t1409 = t811 + t1215;
  t1607 = -0.15121*t1590;
  t1609 = t1575 + t1607;
  t3395 = t667*t3384*t1858;
  t3396 = Cos(var1[3]);
  t3399 = t3396*t2139;
  t3401 = t3395 + t3399;
  t2120 = 0.15121*t763;
  t2122 = t2120 + t1215;
  t2162 = 0.15121*t1590;
  t2169 = t1575 + t2162;
  t3404 = t3396*t667;
  t3406 = -1.*t3384*t1858*t2139;
  t3411 = t3404 + t3406;
  t2171 = -1.4640699999999997e-7*var1[13];
  t2178 = -1.38024835e-16*t1716;
  t2188 = t1728 + t2186;
  t2194 = -0.038748999993*t2188;
  t2215 = t2202 + t2214;
  t2252 = -0.281209000004*t2215;
  t2254 = t2171 + t2178 + t2194 + t2252;
  t2304 = 3.9608699999999997e-7*var1[16];
  t2307 = -1.1787626499999999e-16*t1978;
  t2319 = t2308 + t2316;
  t2328 = -0.281211000004*t2319;
  t2333 = t2059 + t2329;
  t2350 = -0.038749000006999997*t2333;
  t2359 = t2304 + t2307 + t2328 + t2350;
  t2382 = 1.0248489999999998e-12*var1[13];
  t2383 = -0.28120900000849935*t1716;
  t2390 = t1841 + t2389;
  t2391 = -0.038748999993*t2390;
  t2395 = t2202 + t2393;
  t2400 = -2.123459e-6*t2395;
  t2403 = t2382 + t2383 + t2391 + t2400;
  t2418 = -2.7726089999999997e-12*var1[16];
  t2422 = -0.2812110000084994*t1978;
  t2431 = t2308 + t2426;
  t2444 = -1.8134809999999998e-6*t2431;
  t2453 = t2002 + t2009;
  t2454 = -0.038749000006999997*t2453;
  t2461 = t2418 + t2422 + t2444 + t2454;
  t2471 = 1.8190549999999993e-12*var1[14];
  t2478 = -0.5031490000160505*t2476;
  t2486 = t2479 + t2482;
  t2491 = -0.038922999986*t2486;
  t2506 = t2493 + t2496;
  t2508 = -3.6777349999999994e-6*t2506;
  t2514 = t2471 + t2478 + t2491 + t2508;
  t3418 = -1.*t1110*t3401;
  t3420 = t677*t3411;
  t3421 = t3418 + t3420;
  t3435 = t677*t3401;
  t3436 = t1110*t3411;
  t3438 = t3435 + t3436;
  t2565 = -2.598649999999999e-7*var1[14];
  t2568 = -2.3905277499999995e-16*t2476;
  t2590 = t2580 + t2589;
  t2597 = -0.038922999986*t2590;
  t2601 = t2493 + t2598;
  t2609 = -0.503149000008*t2601;
  t2617 = t2565 + t2568 + t2597 + t2609;
  t2663 = 1.0394599999999997e-12*var1[14];
  t2666 = -0.03892299998790722*t2476;
  t2682 = t2580 + t2668;
  t2717 = -3.6777349999999994e-6*t2682;
  t2718 = t2479 + t2480;
  t2723 = -0.503149000008*t2718;
  t2734 = t2663 + t2666 + t2717 + t2723;
  t2825 = -1.9784030000000015e-12*var1[17];
  t2844 = -0.5031510000160505*t2832;
  t2851 = t2845 + t2849;
  t2859 = -3.367757e-6*t2851;
  t2866 = t2864 + t2847;
  t2876 = -0.038575000014*t2866;
  t2885 = t2825 + t2844 + t2859 + t2876;
  t3426 = -1.*t1590*t3401;
  t3428 = t1447*t3411;
  t3429 = t3426 + t3428;
  t3444 = t1447*t3401;
  t3446 = t1590*t3411;
  t3447 = t3444 + t3446;
  t2974 = 1.1305160000000008e-12*var1[17];
  t2978 = -0.03857500001589017*t2832;
  t2990 = t2864 + t2987;
  t2993 = -0.5031510000080001*t2990;
  t3002 = t2996 + t3000;
  t3014 = -3.367757e-6*t3002;
  t3023 = t2974 + t2978 + t2993 + t3014;
  t3062 = 2.826290000000002e-7*var1[17];
  t3065 = -2.18904205e-16*t2832;
  t3072 = t2845 + t3069;
  t3078 = -0.5031510000080001*t3072;
  t3090 = t2996 + t3080;
  t3094 = -0.038575000014*t3090;
  t3095 = t3062 + t3065 + t3078 + t3094;
  t3141 = t3140 + t2480;
  t3451 = -1.*t472*t2520*t3384;
  t3452 = t2538*t3421;
  t3454 = t2546*t3438;
  t3455 = t3451 + t3452 + t3454;
  t3159 = t3157 + t2668;
  t3458 = -1.*t472*t2622*t3384;
  t3462 = t2633*t3421;
  t3465 = t2636*t3438;
  t3466 = t3458 + t3462 + t3465;
  t3168 = -1.000000000049*t2476;
  t3169 = 1. + t3168;
  t3486 = -1.*t2744*t472*t3384;
  t3488 = t2774*t3421;
  t3497 = t2795*t3438;
  t3498 = t3486 + t3488 + t3497;
  t3186 = -1.000000000016*t2476;
  t3192 = 1. + t3186;
  t3215 = t3203 + t2496;
  t3226 = t3140 + t2482;
  t3245 = t3203 + t2598;
  t3261 = -6.5e-11*t2476;
  t3269 = 1. + t3261;
  t3275 = t3157 + t2589;
  t3290 = t3288 + t3069;
  t3506 = -1.*t472*t2895*t3384;
  t3508 = t2932*t3429;
  t3510 = t2944*t3447;
  t3514 = t3506 + t3508 + t3510;
  t3300 = t3297 + t3080;
  t3526 = -1.*t3029*t472*t3384;
  t3528 = t3048*t3429;
  t3531 = t3051*t3447;
  t3533 = t3526 + t3528 + t3531;
  t3305 = -6.5e-11*t2832;
  t3309 = 1. + t3305;
  t3547 = -1.*t472*t3097*t3384;
  t3549 = t3114*t3429;
  t3552 = t3123*t3447;
  t3554 = t3547 + t3549 + t3552;
  t3321 = t3318 + t2987;
  t3325 = -1.000000000049*t2832;
  t3330 = 1. + t3325;
  t3335 = t3297 + t3000;
  t3344 = -1.000000000016*t2832;
  t3349 = 1. + t3344;
  t3353 = t3318 + t2847;
  t3357 = t3288 + t2849;
  p_output1[0]=t1853*t1858 - 1.*t1858*t2115 + t2254*t2278 - 1.*t2359*t2379 + t2403*t2415 - 1.*t2461*t2466 + t2514*t2555 + t2617*t2649 + t2734*t2813 - 1.*t2885*t2962 - 1.*t3023*t3056 - 1.*t3095*t3132 - 0.038924*(t2555*t3141 + t2649*t3159 + t2813*t3169) - 0.80315*(t2555*t3192 + t2649*t3215 + t2813*t3226) + 0.148705*(t2555*t3245 + t2649*t3269 + t2813*t3275) + 0.148715*(t2962*t3290 + t3056*t3300 + t3132*t3309) + 0.038576*(t2962*t3321 + t3056*t3330 + t3132*t3335) + 0.80315*(t2962*t3349 + t3056*t3353 + t3132*t3357) - 1.*t2122*t2139*t472 + t2139*t2169*t472 + t1409*t472*t667 - 1.*t1609*t472*t667;
  p_output1[1]=t1409*t3401 - 1.*t1609*t3401 + t2122*t3411 - 1.*t2169*t3411 + t2254*t3421 - 1.*t2359*t3429 + t2403*t3438 - 1.*t2461*t3447 + t2514*t3455 + t2617*t3466 + t2734*t3498 - 0.038924*(t3141*t3455 + t3159*t3466 + t3169*t3498) - 0.80315*(t3192*t3455 + t3215*t3466 + t3226*t3498) + 0.148705*(t3245*t3455 + t3269*t3466 + t3275*t3498) - 1.*t2885*t3514 - 1.*t3023*t3533 - 1.*t3095*t3554 + 0.148715*(t3290*t3514 + t3300*t3533 + t3309*t3554) + 0.038576*(t3321*t3514 + t3330*t3533 + t3335*t3554) + 0.80315*(t3349*t3514 + t3353*t3533 + t3357*t3554) - 1.*t1853*t3384*t472 + t2115*t3384*t472;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "step_distance_TrotStance1.hh"

namespace TrotStance1
{

void step_distance_TrotStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
