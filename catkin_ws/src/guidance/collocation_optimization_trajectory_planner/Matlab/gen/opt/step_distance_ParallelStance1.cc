/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:12:07 GMT+01:00
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
  double t62;
  double t328;
  double t2107;
  double t2109;
  double t2112;
  double t2121;
  double t2178;
  double t2186;
  double t2195;
  double t2260;
  double t2152;
  double t533;
  double t717;
  double t1079;
  double t1501;
  double t1526;
  double t1863;
  double t1889;
  double t1958;
  double t1982;
  double t2009;
  double t2294;
  double t2117;
  double t2270;
  double t2274;
  double t2139;
  double t2389;
  double t2478;
  double t2249;
  double t2687;
  double t2691;
  double t2693;
  double t2709;
  double t2559;
  double t2585;
  double t2458;
  double t2460;
  double t2464;
  double t2638;
  double t2641;
  double t2643;
  double t2738;
  double t2361;
  double t2804;
  double t2409;
  double t2849;
  double t2699;
  double t2889;
  double t2901;
  double t2122;
  double t2794;
  double t3022;
  double t3027;
  double t3028;
  double t3034;
  double t2651;
  double t2507;
  double t2508;
  double t2510;
  double t2666;
  double t2668;
  double t2671;
  double t3041;
  double t2275;
  double t3048;
  double t2265;
  double t3033;
  double t3092;
  double t3094;
  double t3121;
  double t2494;
  double t3061;
  double t2483;
  double t2801;
  double t2803;
  double t2810;
  double t2816;
  double t2817;
  double t2820;
  double t2833;
  double t2834;
  double t2954;
  double t2907;
  double t2915;
  double t2924;
  double t2925;
  double t2931;
  double t2932;
  double t2936;
  double t2941;
  double t2981;
  double t2982;
  double t2990;
  double t2994;
  double t2998;
  double t3000;
  double t3009;
  double t3013;
  double t2739;
  double t3197;
  double t2714;
  double t3239;
  double t2869;
  double t3204;
  double t3205;
  double t2853;
  double t3149;
  double t3052;
  double t3059;
  double t3067;
  double t3068;
  double t3073;
  double t3074;
  double t3079;
  double t3080;
  double t3159;
  double t3110;
  double t3112;
  double t3120;
  double t3126;
  double t3128;
  double t3131;
  double t3132;
  double t3133;
  double t3170;
  double t3178;
  double t3179;
  double t3182;
  double t3183;
  double t3184;
  double t3185;
  double t3187;
  double t3086;
  double t3297;
  double t3095;
  double t3325;
  double t3288;
  double t3035;
  double t2106;
  double t2113;
  double t2134;
  double t2138;
  double t2146;
  double t2149;
  double t2151;
  double t2165;
  double t2216;
  double t2267;
  double t2268;
  double t2278;
  double t2279;
  double t2280;
  double t3383;
  double t1084;
  double t1594;
  double t2075;
  double t2094;
  double t3392;
  double t3400;
  double t3406;
  double t3407;
  double t2292;
  double t2293;
  double t2300;
  double t2306;
  double t3417;
  double t3421;
  double t3422;
  double t2324;
  double t2345;
  double t2377;
  double t2384;
  double t2441;
  double t2450;
  double t2456;
  double t2471;
  double t2475;
  double t2492;
  double t2493;
  double t2495;
  double t2496;
  double t2505;
  double t2528;
  double t2557;
  double t2564;
  double t2580;
  double t2594;
  double t2620;
  double t2635;
  double t2645;
  double t2648;
  double t2653;
  double t2654;
  double t2656;
  double t2658;
  double t2659;
  double t2682;
  double t2696;
  double t2733;
  double t2734;
  double t2748;
  double t2757;
  double t2776;
  double t3429;
  double t3434;
  double t3439;
  double t3459;
  double t3461;
  double t3462;
  double t2840;
  double t2843;
  double t2854;
  double t2856;
  double t2870;
  double t2872;
  double t2879;
  double t2946;
  double t2949;
  double t2965;
  double t2967;
  double t2970;
  double t2971;
  double t2974;
  double t3021;
  double t3029;
  double t3037;
  double t3040;
  double t3042;
  double t3045;
  double t3046;
  double t3442;
  double t3447;
  double t3450;
  double t3471;
  double t3472;
  double t3477;
  double t3083;
  double t3085;
  double t3088;
  double t3091;
  double t3097;
  double t3103;
  double t3107;
  double t3142;
  double t3147;
  double t3154;
  double t3155;
  double t3160;
  double t3163;
  double t3167;
  double t3201;
  double t3497;
  double t3499;
  double t3511;
  double t3512;
  double t3208;
  double t3522;
  double t3526;
  double t3530;
  double t3531;
  double t3210;
  double t3212;
  double t3542;
  double t3548;
  double t3561;
  double t3562;
  double t3228;
  double t3236;
  double t3243;
  double t3250;
  double t3260;
  double t3268;
  double t3269;
  double t3277;
  double t3290;
  double t3567;
  double t3569;
  double t3571;
  double t3573;
  double t3304;
  double t3581;
  double t3583;
  double t3586;
  double t3590;
  double t3309;
  double t3310;
  double t3592;
  double t3593;
  double t3596;
  double t3597;
  double t3328;
  double t3331;
  double t3334;
  double t3343;
  double t3355;
  double t3358;
  double t3364;
  double t3368;
  t62 = Cos(var1[4]);
  t328 = Cos(var1[5]);
  t2107 = Cos(var1[13]);
  t2109 = -1.*t2107;
  t2112 = 1. + t2109;
  t2121 = Sin(var1[13]);
  t2178 = Cos(var1[16]);
  t2186 = -1.*t2178;
  t2195 = 1. + t2186;
  t2260 = Sin(var1[16]);
  t2152 = Sin(var1[4]);
  t533 = Cos(var1[12]);
  t717 = -1.*t533;
  t1079 = 1. + t717;
  t1501 = Sin(var1[12]);
  t1526 = 0.15121*t1501;
  t1863 = Cos(var1[15]);
  t1889 = -1.*t1863;
  t1958 = 1. + t1889;
  t1982 = -0.15121*t1958;
  t2009 = Sin(var1[15]);
  t2294 = Sin(var1[5]);
  t2117 = 4.e-6*t2112;
  t2270 = -1. + t2178;
  t2274 = 4.e-6*t2270;
  t2139 = -2.8e-11*t2112;
  t2389 = 7.e-6*t2112;
  t2478 = 7.e-6*t2195;
  t2249 = 2.8e-11*t2195;
  t2687 = Cos(var1[14]);
  t2691 = -1.*t2687;
  t2693 = 1. + t2691;
  t2709 = Sin(var1[14]);
  t2559 = -1.*t2121;
  t2585 = -4.e-6*t2121;
  t2458 = -1.*t62*t328*t1501;
  t2460 = -1.*t533*t62*t2294;
  t2464 = t2458 + t2460;
  t2638 = t533*t62*t328;
  t2641 = -1.*t62*t1501*t2294;
  t2643 = t2638 + t2641;
  t2738 = 7.e-6*t2693;
  t2361 = -7.e-6*t2121;
  t2804 = -7.e-6*t2112;
  t2409 = 4.e-6*t2121;
  t2849 = 4.e-6*t2693;
  t2699 = -2.8e-11*t2693;
  t2889 = -1. + t2107;
  t2901 = 4.e-6*t2889;
  t2122 = 7.e-6*t2121;
  t2794 = 2.8e-11*t2112;
  t3022 = Cos(var1[17]);
  t3027 = -1.*t3022;
  t3028 = 1. + t3027;
  t3034 = Sin(var1[17]);
  t2651 = -4.e-6*t2260;
  t2507 = -1.*t62*t328*t2009;
  t2508 = -1.*t1863*t62*t2294;
  t2510 = t2507 + t2508;
  t2666 = t1863*t62*t328;
  t2668 = -1.*t62*t2009*t2294;
  t2671 = t2666 + t2668;
  t3041 = 2.8e-11*t3028;
  t2275 = -7.e-6*t2260;
  t3048 = -2.8e-11*t2195;
  t2265 = -1.*t2260;
  t3033 = 7.e-6*t3028;
  t3092 = -1. + t3022;
  t3094 = 4.e-6*t3092;
  t3121 = 4.e-6*t2195;
  t2494 = 7.e-6*t2260;
  t3061 = -7.e-6*t2195;
  t2483 = 4.e-6*t2260;
  t2801 = t2794 + t2559;
  t2803 = t2801*t2152;
  t2810 = t2804 + t2585;
  t2816 = t2810*t2464;
  t2817 = -1.000000000016*t2112;
  t2820 = 1. + t2817;
  t2833 = t2820*t2643;
  t2834 = t2803 + t2816 + t2833;
  t2954 = 7.e-6*t2709;
  t2907 = t2901 + t2361;
  t2915 = t2907*t2152;
  t2924 = -6.5e-11*t2112;
  t2925 = 1. + t2924;
  t2931 = t2925*t2464;
  t2932 = t2804 + t2409;
  t2936 = t2932*t2643;
  t2941 = t2915 + t2931 + t2936;
  t2981 = -1.000000000049*t2112;
  t2982 = 1. + t2981;
  t2990 = t2982*t2152;
  t2994 = t2901 + t2122;
  t2998 = t2994*t2464;
  t3000 = t2794 + t2121;
  t3009 = t3000*t2643;
  t3013 = t2990 + t2998 + t3009;
  t2739 = -4.e-6*t2709;
  t3197 = 2.8e-11*t2693;
  t2714 = -1.*t2709;
  t3239 = -7.e-6*t2693;
  t2869 = 4.e-6*t2709;
  t3204 = -1. + t2687;
  t3205 = 4.e-6*t3204;
  t2853 = -7.e-6*t2709;
  t3149 = 4.e-6*t3034;
  t3052 = t3048 + t2260;
  t3059 = t3052*t2152;
  t3067 = t3061 + t2651;
  t3068 = t3067*t2510;
  t3073 = -1.000000000016*t2195;
  t3074 = 1. + t3073;
  t3079 = t3074*t2671;
  t3080 = t3059 + t3068 + t3079;
  t3159 = 7.e-6*t3034;
  t3110 = -1.000000000049*t2195;
  t3112 = 1. + t3110;
  t3120 = t3112*t2152;
  t3126 = t3121 + t2275;
  t3128 = t3126*t2510;
  t3131 = t3048 + t2265;
  t3132 = t3131*t2671;
  t3133 = t3120 + t3128 + t3132;
  t3170 = t3121 + t2494;
  t3178 = t3170*t2152;
  t3179 = -6.5e-11*t2195;
  t3182 = 1. + t3179;
  t3183 = t3182*t2510;
  t3184 = t3061 + t2483;
  t3185 = t3184*t2671;
  t3187 = t3178 + t3183 + t3185;
  t3086 = -1.*t3034;
  t3297 = 4.e-6*t3028;
  t3095 = -7.e-6*t3034;
  t3325 = -2.8e-11*t3028;
  t3288 = -7.e-6*t3028;
  t3035 = -4.e-6*t3034;
  t2106 = 5.856279999999999e-13*var1[13];
  t2113 = -0.0387489999948987*t2112;
  t2134 = t2117 + t2122;
  t2138 = -2.123459e-6*t2134;
  t2146 = t2139 + t2121;
  t2149 = -0.281209000004*t2146;
  t2151 = t2106 + t2113 + t2138 + t2149;
  t2165 = 1.5843479999999999e-12*var1[16];
  t2216 = -0.03874900000889869*t2195;
  t2267 = t2249 + t2265;
  t2268 = -0.281211000004*t2267;
  t2278 = t2274 + t2275;
  t2279 = -1.8134809999999998e-6*t2278;
  t2280 = t2165 + t2216 + t2268 + t2279;
  t3383 = Sin(var1[3]);
  t1084 = -0.15121*t1079;
  t1594 = t1084 + t1526;
  t2075 = -0.15121*t2009;
  t2094 = t1982 + t2075;
  t3392 = t328*t3383*t2152;
  t3400 = Cos(var1[3]);
  t3406 = t3400*t2294;
  t3407 = t3392 + t3406;
  t2292 = 0.15121*t1079;
  t2293 = t2292 + t1526;
  t2300 = 0.15121*t2009;
  t2306 = t1982 + t2300;
  t3417 = t3400*t328;
  t3421 = -1.*t3383*t2152*t2294;
  t3422 = t3417 + t3421;
  t2324 = -1.4640699999999997e-7*var1[13];
  t2345 = -1.38024835e-16*t2112;
  t2377 = t2117 + t2361;
  t2384 = -0.038748999993*t2377;
  t2441 = t2389 + t2409;
  t2450 = -0.281209000004*t2441;
  t2456 = t2324 + t2345 + t2384 + t2450;
  t2471 = 3.9608699999999997e-7*var1[16];
  t2475 = -1.1787626499999999e-16*t2195;
  t2492 = t2478 + t2483;
  t2493 = -0.281211000004*t2492;
  t2495 = t2274 + t2494;
  t2496 = -0.038749000006999997*t2495;
  t2505 = t2471 + t2475 + t2493 + t2496;
  t2528 = 1.0248489999999998e-12*var1[13];
  t2557 = -0.28120900000849935*t2112;
  t2564 = t2139 + t2559;
  t2580 = -0.038748999993*t2564;
  t2594 = t2389 + t2585;
  t2620 = -2.123459e-6*t2594;
  t2635 = t2528 + t2557 + t2580 + t2620;
  t2645 = -2.7726089999999997e-12*var1[16];
  t2648 = -0.2812110000084994*t2195;
  t2653 = t2478 + t2651;
  t2654 = -1.8134809999999998e-6*t2653;
  t2656 = t2249 + t2260;
  t2658 = -0.038749000006999997*t2656;
  t2659 = t2645 + t2648 + t2654 + t2658;
  t2682 = 1.8190549999999993e-12*var1[14];
  t2696 = -0.5031490000160505*t2693;
  t2733 = t2699 + t2714;
  t2734 = -0.038922999986*t2733;
  t2748 = t2738 + t2739;
  t2757 = -3.6777349999999994e-6*t2748;
  t2776 = t2682 + t2696 + t2734 + t2757;
  t3429 = -1.*t1501*t3407;
  t3434 = t533*t3422;
  t3439 = t3429 + t3434;
  t3459 = t533*t3407;
  t3461 = t1501*t3422;
  t3462 = t3459 + t3461;
  t2840 = -2.598649999999999e-7*var1[14];
  t2843 = -2.3905277499999995e-16*t2693;
  t2854 = t2849 + t2853;
  t2856 = -0.038922999986*t2854;
  t2870 = t2738 + t2869;
  t2872 = -0.503149000008*t2870;
  t2879 = t2840 + t2843 + t2856 + t2872;
  t2946 = 1.0394599999999997e-12*var1[14];
  t2949 = -0.03892299998790722*t2693;
  t2965 = t2849 + t2954;
  t2967 = -3.6777349999999994e-6*t2965;
  t2970 = t2699 + t2709;
  t2971 = -0.503149000008*t2970;
  t2974 = t2946 + t2949 + t2967 + t2971;
  t3021 = -1.9784030000000015e-12*var1[17];
  t3029 = -0.5031510000160505*t3028;
  t3037 = t3033 + t3035;
  t3040 = -3.367757e-6*t3037;
  t3042 = t3041 + t3034;
  t3045 = -0.038575000014*t3042;
  t3046 = t3021 + t3029 + t3040 + t3045;
  t3442 = -1.*t2009*t3407;
  t3447 = t1863*t3422;
  t3450 = t3442 + t3447;
  t3471 = t1863*t3407;
  t3472 = t2009*t3422;
  t3477 = t3471 + t3472;
  t3083 = 1.1305160000000008e-12*var1[17];
  t3085 = -0.03857500001589017*t3028;
  t3088 = t3041 + t3086;
  t3091 = -0.5031510000080001*t3088;
  t3097 = t3094 + t3095;
  t3103 = -3.367757e-6*t3097;
  t3107 = t3083 + t3085 + t3091 + t3103;
  t3142 = 2.826290000000002e-7*var1[17];
  t3147 = -2.18904205e-16*t3028;
  t3154 = t3033 + t3149;
  t3155 = -0.5031510000080001*t3154;
  t3160 = t3094 + t3159;
  t3163 = -0.038575000014*t3160;
  t3167 = t3142 + t3147 + t3155 + t3163;
  t3201 = t3197 + t2709;
  t3497 = -1.*t62*t2801*t3383;
  t3499 = t2810*t3439;
  t3511 = t2820*t3462;
  t3512 = t3497 + t3499 + t3511;
  t3208 = t3205 + t2954;
  t3522 = -1.*t62*t2907*t3383;
  t3526 = t2925*t3439;
  t3530 = t2932*t3462;
  t3531 = t3522 + t3526 + t3530;
  t3210 = -1.000000000049*t2693;
  t3212 = 1. + t3210;
  t3542 = -1.*t2982*t62*t3383;
  t3548 = t2994*t3439;
  t3561 = t3000*t3462;
  t3562 = t3542 + t3548 + t3561;
  t3228 = -1.000000000016*t2693;
  t3236 = 1. + t3228;
  t3243 = t3239 + t2739;
  t3250 = t3197 + t2714;
  t3260 = t3239 + t2869;
  t3268 = -6.5e-11*t2693;
  t3269 = 1. + t3268;
  t3277 = t3205 + t2853;
  t3290 = t3288 + t3149;
  t3567 = -1.*t62*t3052*t3383;
  t3569 = t3067*t3450;
  t3571 = t3074*t3477;
  t3573 = t3567 + t3569 + t3571;
  t3304 = t3297 + t3159;
  t3581 = -1.*t3112*t62*t3383;
  t3583 = t3126*t3450;
  t3586 = t3131*t3477;
  t3590 = t3581 + t3583 + t3586;
  t3309 = -6.5e-11*t3028;
  t3310 = 1. + t3309;
  t3592 = -1.*t62*t3170*t3383;
  t3593 = t3182*t3450;
  t3596 = t3184*t3477;
  t3597 = t3592 + t3593 + t3596;
  t3328 = t3325 + t3086;
  t3331 = -1.000000000049*t3028;
  t3334 = 1. + t3331;
  t3343 = t3297 + t3095;
  t3355 = -1.000000000016*t3028;
  t3358 = 1. + t3355;
  t3364 = t3325 + t3034;
  t3368 = t3288 + t3035;
  p_output1[0]=-1.*t2151*t2152 + t2152*t2280 - 1.*t2456*t2464 + t2505*t2510 - 1.*t2635*t2643 + t2659*t2671 - 1.*t2776*t2834 - 1.*t2879*t2941 - 1.*t2974*t3013 + t3046*t3080 + t3107*t3133 + t3167*t3187 + 0.038924*(t2834*t3201 + t2941*t3208 + t3013*t3212) + 0.80315*(t2834*t3236 + t2941*t3243 + t3013*t3250) - 0.148705*(t2834*t3260 + t2941*t3269 + t3013*t3277) - 0.148715*(t3080*t3290 + t3133*t3304 + t3187*t3310) - 0.038576*(t3080*t3328 + t3133*t3334 + t3187*t3343) - 0.80315*(t3080*t3358 + t3133*t3364 + t3187*t3368) + t2293*t2294*t62 - 1.*t2294*t2306*t62 - 1.*t1594*t328*t62 + t2094*t328*t62;
  p_output1[1]=-1.*t1594*t3407 + t2094*t3407 - 1.*t2293*t3422 + t2306*t3422 - 1.*t2456*t3439 + t2505*t3450 - 1.*t2635*t3462 + t2659*t3477 - 1.*t2776*t3512 - 1.*t2879*t3531 - 1.*t2974*t3562 + 0.038924*(t3201*t3512 + t3208*t3531 + t3212*t3562) + 0.80315*(t3236*t3512 + t3243*t3531 + t3250*t3562) - 0.148705*(t3260*t3512 + t3269*t3531 + t3277*t3562) + t3046*t3573 + t3107*t3590 + t3167*t3597 - 0.148715*(t3290*t3573 + t3304*t3590 + t3310*t3597) - 0.038576*(t3328*t3573 + t3334*t3590 + t3343*t3597) - 0.80315*(t3358*t3573 + t3364*t3590 + t3368*t3597) + t2151*t3383*t62 - 1.*t2280*t3383*t62;
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
