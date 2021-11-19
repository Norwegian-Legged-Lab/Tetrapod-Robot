/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:29:31 GMT+01:00
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
  double t80;
  double t596;
  double t1823;
  double t1842;
  double t1843;
  double t2007;
  double t2301;
  double t2306;
  double t2310;
  double t2321;
  double t2285;
  double t715;
  double t999;
  double t1181;
  double t1227;
  double t1350;
  double t1519;
  double t1558;
  double t1562;
  double t1586;
  double t1589;
  double t2368;
  double t1980;
  double t2332;
  double t2337;
  double t2184;
  double t2481;
  double t2550;
  double t2313;
  double t2845;
  double t2851;
  double t2856;
  double t2861;
  double t2723;
  double t2729;
  double t2529;
  double t2531;
  double t2535;
  double t2737;
  double t2738;
  double t2739;
  double t2868;
  double t2471;
  double t2889;
  double t2482;
  double t2936;
  double t2860;
  double t2995;
  double t2996;
  double t2046;
  double t2880;
  double t3160;
  double t3165;
  double t3172;
  double t3187;
  double t2767;
  double t2682;
  double t2700;
  double t2708;
  double t2800;
  double t2810;
  double t2827;
  double t3199;
  double t2338;
  double t3207;
  double t2322;
  double t3179;
  double t3273;
  double t3274;
  double t3303;
  double t2615;
  double t3220;
  double t2553;
  double t2883;
  double t2884;
  double t2892;
  double t2893;
  double t2894;
  double t2895;
  double t2898;
  double t2899;
  double t3062;
  double t2999;
  double t3002;
  double t3006;
  double t3013;
  double t3033;
  double t3036;
  double t3037;
  double t3041;
  double t3090;
  double t3107;
  double t3114;
  double t3118;
  double t3128;
  double t3135;
  double t3144;
  double t3148;
  double t2872;
  double t3388;
  double t2863;
  double t3430;
  double t2959;
  double t3394;
  double t3395;
  double t2939;
  double t3332;
  double t3213;
  double t3216;
  double t3221;
  double t3230;
  double t3238;
  double t3245;
  double t3246;
  double t3250;
  double t3345;
  double t3294;
  double t3298;
  double t3299;
  double t3304;
  double t3307;
  double t3313;
  double t3316;
  double t3318;
  double t3354;
  double t3368;
  double t3369;
  double t3372;
  double t3375;
  double t3376;
  double t3378;
  double t3383;
  double t3269;
  double t3492;
  double t3282;
  double t3523;
  double t3482;
  double t3192;
  double t1807;
  double t1878;
  double t2124;
  double t2159;
  double t2185;
  double t2249;
  double t2274;
  double t2297;
  double t2312;
  double t2323;
  double t2327;
  double t2342;
  double t2347;
  double t2350;
  double t3583;
  double t1187;
  double t1379;
  double t1596;
  double t1601;
  double t3589;
  double t3597;
  double t3598;
  double t3599;
  double t2358;
  double t2360;
  double t2378;
  double t2387;
  double t3614;
  double t3615;
  double t3625;
  double t2409;
  double t2443;
  double t2475;
  double t2480;
  double t2492;
  double t2499;
  double t2527;
  double t2544;
  double t2548;
  double t2571;
  double t2591;
  double t2624;
  double t2638;
  double t2656;
  double t2718;
  double t2719;
  double t2725;
  double t2726;
  double t2731;
  double t2734;
  double t2736;
  double t2756;
  double t2761;
  double t2770;
  double t2787;
  double t2788;
  double t2789;
  double t2796;
  double t2837;
  double t2858;
  double t2866;
  double t2867;
  double t2874;
  double t2877;
  double t2879;
  double t3632;
  double t3633;
  double t3634;
  double t3668;
  double t3676;
  double t3680;
  double t2909;
  double t2914;
  double t2940;
  double t2945;
  double t2970;
  double t2984;
  double t2989;
  double t3052;
  double t3054;
  double t3063;
  double t3065;
  double t3085;
  double t3088;
  double t3089;
  double t3153;
  double t3177;
  double t3193;
  double t3194;
  double t3200;
  double t3201;
  double t3206;
  double t3647;
  double t3649;
  double t3653;
  double t3694;
  double t3698;
  double t3699;
  double t3258;
  double t3259;
  double t3270;
  double t3271;
  double t3287;
  double t3288;
  double t3293;
  double t3328;
  double t3329;
  double t3337;
  double t3344;
  double t3347;
  double t3352;
  double t3353;
  double t3389;
  double t3712;
  double t3716;
  double t3717;
  double t3720;
  double t3396;
  double t3730;
  double t3732;
  double t3735;
  double t3745;
  double t3403;
  double t3410;
  double t3756;
  double t3759;
  double t3767;
  double t3768;
  double t3423;
  double t3427;
  double t3431;
  double t3436;
  double t3451;
  double t3459;
  double t3465;
  double t3471;
  double t3484;
  double t3771;
  double t3773;
  double t3778;
  double t3780;
  double t3498;
  double t3788;
  double t3790;
  double t3795;
  double t3797;
  double t3503;
  double t3508;
  double t3799;
  double t3816;
  double t3820;
  double t3822;
  double t3526;
  double t3534;
  double t3537;
  double t3543;
  double t3550;
  double t3554;
  double t3563;
  double t3572;
  t80 = Cos(var1[4]);
  t596 = Cos(var1[5]);
  t1823 = Cos(var1[13]);
  t1842 = -1.*t1823;
  t1843 = 1. + t1842;
  t2007 = Sin(var1[13]);
  t2301 = Cos(var1[16]);
  t2306 = -1.*t2301;
  t2310 = 1. + t2306;
  t2321 = Sin(var1[16]);
  t2285 = Sin(var1[4]);
  t715 = Cos(var1[12]);
  t999 = -1.*t715;
  t1181 = 1. + t999;
  t1227 = Sin(var1[12]);
  t1350 = 0.15121*t1227;
  t1519 = Cos(var1[15]);
  t1558 = -1.*t1519;
  t1562 = 1. + t1558;
  t1586 = -0.15121*t1562;
  t1589 = Sin(var1[15]);
  t2368 = Sin(var1[5]);
  t1980 = 4.e-6*t1843;
  t2332 = -1. + t2301;
  t2337 = 4.e-6*t2332;
  t2184 = -2.8e-11*t1843;
  t2481 = 7.e-6*t1843;
  t2550 = 7.e-6*t2310;
  t2313 = 2.8e-11*t2310;
  t2845 = Cos(var1[14]);
  t2851 = -1.*t2845;
  t2856 = 1. + t2851;
  t2861 = Sin(var1[14]);
  t2723 = -1.*t2007;
  t2729 = -4.e-6*t2007;
  t2529 = -1.*t80*t596*t1227;
  t2531 = -1.*t715*t80*t2368;
  t2535 = t2529 + t2531;
  t2737 = t715*t80*t596;
  t2738 = -1.*t80*t1227*t2368;
  t2739 = t2737 + t2738;
  t2868 = 7.e-6*t2856;
  t2471 = -7.e-6*t2007;
  t2889 = -7.e-6*t1843;
  t2482 = 4.e-6*t2007;
  t2936 = 4.e-6*t2856;
  t2860 = -2.8e-11*t2856;
  t2995 = -1. + t1823;
  t2996 = 4.e-6*t2995;
  t2046 = 7.e-6*t2007;
  t2880 = 2.8e-11*t1843;
  t3160 = Cos(var1[17]);
  t3165 = -1.*t3160;
  t3172 = 1. + t3165;
  t3187 = Sin(var1[17]);
  t2767 = -4.e-6*t2321;
  t2682 = -1.*t80*t596*t1589;
  t2700 = -1.*t1519*t80*t2368;
  t2708 = t2682 + t2700;
  t2800 = t1519*t80*t596;
  t2810 = -1.*t80*t1589*t2368;
  t2827 = t2800 + t2810;
  t3199 = 2.8e-11*t3172;
  t2338 = -7.e-6*t2321;
  t3207 = -2.8e-11*t2310;
  t2322 = -1.*t2321;
  t3179 = 7.e-6*t3172;
  t3273 = -1. + t3160;
  t3274 = 4.e-6*t3273;
  t3303 = 4.e-6*t2310;
  t2615 = 7.e-6*t2321;
  t3220 = -7.e-6*t2310;
  t2553 = 4.e-6*t2321;
  t2883 = t2880 + t2723;
  t2884 = t2883*t2285;
  t2892 = t2889 + t2729;
  t2893 = t2892*t2535;
  t2894 = -1.000000000016*t1843;
  t2895 = 1. + t2894;
  t2898 = t2895*t2739;
  t2899 = t2884 + t2893 + t2898;
  t3062 = 7.e-6*t2861;
  t2999 = t2996 + t2471;
  t3002 = t2999*t2285;
  t3006 = -6.5e-11*t1843;
  t3013 = 1. + t3006;
  t3033 = t3013*t2535;
  t3036 = t2889 + t2482;
  t3037 = t3036*t2739;
  t3041 = t3002 + t3033 + t3037;
  t3090 = -1.000000000049*t1843;
  t3107 = 1. + t3090;
  t3114 = t3107*t2285;
  t3118 = t2996 + t2046;
  t3128 = t3118*t2535;
  t3135 = t2880 + t2007;
  t3144 = t3135*t2739;
  t3148 = t3114 + t3128 + t3144;
  t2872 = -4.e-6*t2861;
  t3388 = 2.8e-11*t2856;
  t2863 = -1.*t2861;
  t3430 = -7.e-6*t2856;
  t2959 = 4.e-6*t2861;
  t3394 = -1. + t2845;
  t3395 = 4.e-6*t3394;
  t2939 = -7.e-6*t2861;
  t3332 = 4.e-6*t3187;
  t3213 = t3207 + t2321;
  t3216 = t3213*t2285;
  t3221 = t3220 + t2767;
  t3230 = t3221*t2708;
  t3238 = -1.000000000016*t2310;
  t3245 = 1. + t3238;
  t3246 = t3245*t2827;
  t3250 = t3216 + t3230 + t3246;
  t3345 = 7.e-6*t3187;
  t3294 = -1.000000000049*t2310;
  t3298 = 1. + t3294;
  t3299 = t3298*t2285;
  t3304 = t3303 + t2338;
  t3307 = t3304*t2708;
  t3313 = t3207 + t2322;
  t3316 = t3313*t2827;
  t3318 = t3299 + t3307 + t3316;
  t3354 = t3303 + t2615;
  t3368 = t3354*t2285;
  t3369 = -6.5e-11*t2310;
  t3372 = 1. + t3369;
  t3375 = t3372*t2708;
  t3376 = t3220 + t2553;
  t3378 = t3376*t2827;
  t3383 = t3368 + t3375 + t3378;
  t3269 = -1.*t3187;
  t3492 = 4.e-6*t3172;
  t3282 = -7.e-6*t3187;
  t3523 = -2.8e-11*t3172;
  t3482 = -7.e-6*t3172;
  t3192 = -4.e-6*t3187;
  t1807 = 5.856279999999999e-13*var1[13];
  t1878 = -0.0387489999948987*t1843;
  t2124 = t1980 + t2046;
  t2159 = -2.123459e-6*t2124;
  t2185 = t2184 + t2007;
  t2249 = -0.281209000004*t2185;
  t2274 = t1807 + t1878 + t2159 + t2249;
  t2297 = 1.5843479999999999e-12*var1[16];
  t2312 = -0.03874900000889869*t2310;
  t2323 = t2313 + t2322;
  t2327 = -0.281211000004*t2323;
  t2342 = t2337 + t2338;
  t2347 = -1.8134809999999998e-6*t2342;
  t2350 = t2297 + t2312 + t2327 + t2347;
  t3583 = Sin(var1[3]);
  t1187 = -0.15121*t1181;
  t1379 = t1187 + t1350;
  t1596 = -0.15121*t1589;
  t1601 = t1586 + t1596;
  t3589 = t596*t3583*t2285;
  t3597 = Cos(var1[3]);
  t3598 = t3597*t2368;
  t3599 = t3589 + t3598;
  t2358 = 0.15121*t1181;
  t2360 = t2358 + t1350;
  t2378 = 0.15121*t1589;
  t2387 = t1586 + t2378;
  t3614 = t3597*t596;
  t3615 = -1.*t3583*t2285*t2368;
  t3625 = t3614 + t3615;
  t2409 = -1.4640699999999997e-7*var1[13];
  t2443 = -1.38024835e-16*t1843;
  t2475 = t1980 + t2471;
  t2480 = -0.038748999993*t2475;
  t2492 = t2481 + t2482;
  t2499 = -0.281209000004*t2492;
  t2527 = t2409 + t2443 + t2480 + t2499;
  t2544 = 3.9608699999999997e-7*var1[16];
  t2548 = -1.1787626499999999e-16*t2310;
  t2571 = t2550 + t2553;
  t2591 = -0.281211000004*t2571;
  t2624 = t2337 + t2615;
  t2638 = -0.038749000006999997*t2624;
  t2656 = t2544 + t2548 + t2591 + t2638;
  t2718 = 1.0248489999999998e-12*var1[13];
  t2719 = -0.28120900000849935*t1843;
  t2725 = t2184 + t2723;
  t2726 = -0.038748999993*t2725;
  t2731 = t2481 + t2729;
  t2734 = -2.123459e-6*t2731;
  t2736 = t2718 + t2719 + t2726 + t2734;
  t2756 = -2.7726089999999997e-12*var1[16];
  t2761 = -0.2812110000084994*t2310;
  t2770 = t2550 + t2767;
  t2787 = -1.8134809999999998e-6*t2770;
  t2788 = t2313 + t2321;
  t2789 = -0.038749000006999997*t2788;
  t2796 = t2756 + t2761 + t2787 + t2789;
  t2837 = 1.8190549999999993e-12*var1[14];
  t2858 = -0.5031490000160505*t2856;
  t2866 = t2860 + t2863;
  t2867 = -0.038922999986*t2866;
  t2874 = t2868 + t2872;
  t2877 = -3.6777349999999994e-6*t2874;
  t2879 = t2837 + t2858 + t2867 + t2877;
  t3632 = -1.*t1227*t3599;
  t3633 = t715*t3625;
  t3634 = t3632 + t3633;
  t3668 = t715*t3599;
  t3676 = t1227*t3625;
  t3680 = t3668 + t3676;
  t2909 = -2.598649999999999e-7*var1[14];
  t2914 = -2.3905277499999995e-16*t2856;
  t2940 = t2936 + t2939;
  t2945 = -0.038922999986*t2940;
  t2970 = t2868 + t2959;
  t2984 = -0.503149000008*t2970;
  t2989 = t2909 + t2914 + t2945 + t2984;
  t3052 = 1.0394599999999997e-12*var1[14];
  t3054 = -0.03892299998790722*t2856;
  t3063 = t2936 + t3062;
  t3065 = -3.6777349999999994e-6*t3063;
  t3085 = t2860 + t2861;
  t3088 = -0.503149000008*t3085;
  t3089 = t3052 + t3054 + t3065 + t3088;
  t3153 = -1.9784030000000015e-12*var1[17];
  t3177 = -0.5031510000160505*t3172;
  t3193 = t3179 + t3192;
  t3194 = -3.367757e-6*t3193;
  t3200 = t3199 + t3187;
  t3201 = -0.038575000014*t3200;
  t3206 = t3153 + t3177 + t3194 + t3201;
  t3647 = -1.*t1589*t3599;
  t3649 = t1519*t3625;
  t3653 = t3647 + t3649;
  t3694 = t1519*t3599;
  t3698 = t1589*t3625;
  t3699 = t3694 + t3698;
  t3258 = 1.1305160000000008e-12*var1[17];
  t3259 = -0.03857500001589017*t3172;
  t3270 = t3199 + t3269;
  t3271 = -0.5031510000080001*t3270;
  t3287 = t3274 + t3282;
  t3288 = -3.367757e-6*t3287;
  t3293 = t3258 + t3259 + t3271 + t3288;
  t3328 = 2.826290000000002e-7*var1[17];
  t3329 = -2.18904205e-16*t3172;
  t3337 = t3179 + t3332;
  t3344 = -0.5031510000080001*t3337;
  t3347 = t3274 + t3345;
  t3352 = -0.038575000014*t3347;
  t3353 = t3328 + t3329 + t3344 + t3352;
  t3389 = t3388 + t2861;
  t3712 = -1.*t80*t2883*t3583;
  t3716 = t2892*t3634;
  t3717 = t2895*t3680;
  t3720 = t3712 + t3716 + t3717;
  t3396 = t3395 + t3062;
  t3730 = -1.*t80*t2999*t3583;
  t3732 = t3013*t3634;
  t3735 = t3036*t3680;
  t3745 = t3730 + t3732 + t3735;
  t3403 = -1.000000000049*t2856;
  t3410 = 1. + t3403;
  t3756 = -1.*t3107*t80*t3583;
  t3759 = t3118*t3634;
  t3767 = t3135*t3680;
  t3768 = t3756 + t3759 + t3767;
  t3423 = -1.000000000016*t2856;
  t3427 = 1. + t3423;
  t3431 = t3430 + t2872;
  t3436 = t3388 + t2863;
  t3451 = t3430 + t2959;
  t3459 = -6.5e-11*t2856;
  t3465 = 1. + t3459;
  t3471 = t3395 + t2939;
  t3484 = t3482 + t3332;
  t3771 = -1.*t80*t3213*t3583;
  t3773 = t3221*t3653;
  t3778 = t3245*t3699;
  t3780 = t3771 + t3773 + t3778;
  t3498 = t3492 + t3345;
  t3788 = -1.*t3298*t80*t3583;
  t3790 = t3304*t3653;
  t3795 = t3313*t3699;
  t3797 = t3788 + t3790 + t3795;
  t3503 = -6.5e-11*t3172;
  t3508 = 1. + t3503;
  t3799 = -1.*t80*t3354*t3583;
  t3816 = t3372*t3653;
  t3820 = t3376*t3699;
  t3822 = t3799 + t3816 + t3820;
  t3526 = t3523 + t3269;
  t3534 = -1.000000000049*t3172;
  t3537 = 1. + t3534;
  t3543 = t3492 + t3282;
  t3550 = -1.000000000016*t3172;
  t3554 = 1. + t3550;
  t3563 = t3523 + t3187;
  t3572 = t3482 + t3192;
  p_output1[0]=-1.*t2274*t2285 + t2285*t2350 - 1.*t2527*t2535 + t2656*t2708 - 1.*t2736*t2739 + t2796*t2827 - 1.*t2879*t2899 - 1.*t2989*t3041 - 1.*t3089*t3148 + t3206*t3250 + t3293*t3318 + t3353*t3383 + 0.038924*(t2899*t3389 + t3041*t3396 + t3148*t3410) + 0.80315*(t2899*t3427 + t3041*t3431 + t3148*t3436) - 0.148705*(t2899*t3451 + t3041*t3465 + t3148*t3471) - 0.148715*(t3250*t3484 + t3318*t3498 + t3383*t3508) - 0.038576*(t3250*t3526 + t3318*t3537 + t3383*t3543) - 0.80315*(t3250*t3554 + t3318*t3563 + t3383*t3572) + t2360*t2368*t80 - 1.*t2368*t2387*t80 - 1.*t1379*t596*t80 + t1601*t596*t80;
  p_output1[1]=-1.*t1379*t3599 + t1601*t3599 - 1.*t2360*t3625 + t2387*t3625 - 1.*t2527*t3634 + t2656*t3653 - 1.*t2736*t3680 + t2796*t3699 - 1.*t2879*t3720 - 1.*t2989*t3745 - 1.*t3089*t3768 + 0.038924*(t3389*t3720 + t3396*t3745 + t3410*t3768) + 0.80315*(t3427*t3720 + t3431*t3745 + t3436*t3768) - 0.148705*(t3451*t3720 + t3465*t3745 + t3471*t3768) + t3206*t3780 + t3293*t3797 + t3353*t3822 - 0.148715*(t3484*t3780 + t3498*t3797 + t3508*t3822) - 0.038576*(t3526*t3780 + t3537*t3797 + t3543*t3822) - 0.80315*(t3554*t3780 + t3563*t3797 + t3572*t3822) + t2274*t3583*t80 - 1.*t2350*t3583*t80;
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

#include "step_distance_ParallelStance1.hh"

namespace ParallelStance1
{

void step_distance_ParallelStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
