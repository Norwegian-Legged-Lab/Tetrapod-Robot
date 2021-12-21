/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 22:32:42 GMT+01:00
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
  double t1201;
  double t1265;
  double t1299;
  double t665;
  double t670;
  double t722;
  double t1693;
  double t862;
  double t1771;
  double t1339;
  double t1580;
  double t1789;
  double t1801;
  double t1839;
  double t2024;
  double t1966;
  double t1976;
  double t1989;
  double t2002;
  double t2010;
  double t2011;
  double t2016;
  double t2038;
  double t2043;
  double t2044;
  double t2053;
  double t2054;
  double t857;
  double t2267;
  double t2343;
  double t2274;
  double t2283;
  double t2288;
  double t2289;
  double t2307;
  double t2308;
  double t2314;
  double t2319;
  double t2325;
  double t2326;
  double t2245;
  double t2350;
  double t2368;
  double t2379;
  double t2387;
  double t2393;
  double t2394;
  double t2397;
  double t2399;
  double t2403;
  double t2404;
  double t1952;
  double t1963;
  double t2035;
  double t2037;
  double t1122;
  double t2139;
  double t2208;
  double t2238;
  double t2454;
  double t2457;
  double t2459;
  double t2461;
  double t2464;
  double t2467;
  double t2471;
  double t2474;
  double t2477;
  double t2494;
  double t2497;
  double t2503;
  double t2507;
  double t2519;
  double t2521;
  double t2524;
  double t2527;
  double t2434;
  double t2564;
  double t2561;
  double t2565;
  double t2567;
  double t2571;
  double t2574;
  double t2575;
  double t2592;
  double t2612;
  double t2618;
  double t2632;
  double t2642;
  double t2653;
  double t2654;
  double t2662;
  double t2665;
  double t2669;
  double t2670;
  double t2672;
  double t2673;
  double t2750;
  double t2757;
  double t2762;
  double t2765;
  double t2773;
  double t2790;
  double t2791;
  double t2799;
  double t2420;
  double t2421;
  double t2431;
  double t2331;
  double t2409;
  double t2410;
  double t1870;
  double t2019;
  double t2055;
  double t2084;
  double t2419;
  double t2437;
  double t2441;
  double t2841;
  double t2537;
  double t2539;
  double t2540;
  double t2513;
  double t2531;
  double t2533;
  double t2856;
  double t2460;
  double t2473;
  double t2479;
  double t2481;
  double t2534;
  double t2541;
  double t2543;
  double t2815;
  double t2820;
  double t2824;
  double t2769;
  double t2803;
  double t2807;
  double t2585;
  double t2657;
  double t2710;
  double t2721;
  double t2811;
  double t2827;
  double t2830;
  double t2845;
  double t2846;
  double t2853;
  double t2860;
  double t2862;
  double t2863;
  double t2872;
  double t2875;
  double t2876;
  double t2881;
  double t2888;
  double t2890;
  double t2912;
  double t2915;
  double t2923;
  double t2929;
  double t2930;
  double t2933;
  double t2483;
  double t2553;
  double t2554;
  double t3015;
  double t3027;
  double t3028;
  double t3029;
  double t3030;
  double t3031;
  double t3032;
  double t3034;
  double t3035;
  double t3039;
  double t3040;
  double t3044;
  double t3045;
  double t3046;
  double t3047;
  double t3048;
  double t3051;
  double t3052;
  double t3054;
  double t3056;
  double t3058;
  double t3063;
  double t3064;
  double t3071;
  double t3072;
  double t3073;
  double t3077;
  double t3081;
  double t3082;
  double t3085;
  double t3086;
  double t3088;
  double t3089;
  double t2983;
  double t2995;
  double t3003;
  double t3011;
  double t3012;
  double t3016;
  double t3017;
  double t3021;
  double t3022;
  double t3024;
  double t3043;
  double t3068;
  double t3090;
  double t3092;
  double t3096;
  double t3097;
  double t3098;
  double t3101;
  double t3102;
  double t3105;
  double t3106;
  double t3107;
  double t3108;
  double t3117;
  double t3119;
  double t3125;
  double t2183;
  double t2443;
  double t2445;
  double t3135;
  double t3138;
  double t3141;
  double t3143;
  double t3007;
  double t3093;
  double t3126;
  double t3133;
  double t3154;
  double t3155;
  double t3157;
  double t3158;
  double t3161;
  double t3162;
  double t3164;
  double t3166;
  double t3170;
  double t3174;
  double t3177;
  double t3181;
  double t3183;
  double t3134;
  double t3144;
  double t3147;
  double t3176;
  double t3185;
  double t3192;
  double t3194;
  double t3196;
  double t3197;
  double t2736;
  double t2831;
  double t2832;
  double t3153;
  double t3220;
  double t3235;
  double t3249;
  double t3272;
  double t3283;
  double t3303;
  double t3318;
  double t3329;
  double t3337;
  double t3348;
  double t3359;
  double t3521;
  double t3522;
  double t3524;
  double t3525;
  double t3529;
  double t3537;
  double t3538;
  double t3541;
  double t3578;
  double t3582;
  double t3583;
  double t3587;
  double t3593;
  double t3594;
  double t3595;
  double t3598;
  double t3630;
  double t3631;
  double t3632;
  double t3633;
  double t3637;
  double t3638;
  double t3640;
  double t3641;
  t1201 = Cos(var1[17]);
  t1265 = -1.*t1201;
  t1299 = 1. + t1265;
  t665 = Cos(var1[16]);
  t670 = -1.*t665;
  t722 = 1. + t670;
  t1693 = Sin(var1[17]);
  t862 = Sin(var1[16]);
  t1771 = 4.e-6*t1693;
  t1339 = 1.000000000016*t1299;
  t1580 = -7.e-6*t1299;
  t1789 = t1580 + t1771;
  t1801 = -7.e-6*t1789;
  t1839 = -1. + t1339 + t1801;
  t2024 = 4.e-6*t722;
  t1966 = 2.8e-11*t1299;
  t1976 = 4.e-6*t1299;
  t1989 = 7.e-6*t1693;
  t2002 = t1976 + t1989;
  t2010 = -7.e-6*t2002;
  t2011 = -1.*t1693;
  t2016 = t1966 + t2010 + t2011;
  t2038 = -6.5e-11*t1299;
  t2043 = 1. + t2038;
  t2044 = -7.e-6*t2043;
  t2053 = 7.e-6*t1299;
  t2054 = t2044 + t2053 + t1771;
  t857 = -2.8e-11*t722;
  t2267 = -7.e-6*t722;
  t2343 = Cos(var1[15]);
  t2274 = -4.e-6*t862;
  t2283 = t2267 + t2274;
  t2288 = t2283*t1839;
  t2289 = -7.e-6*t862;
  t2307 = t2024 + t2289;
  t2308 = t2307*t2016;
  t2314 = -6.5e-11*t722;
  t2319 = 1. + t2314;
  t2325 = t2319*t2054;
  t2326 = t2288 + t2308 + t2325;
  t2245 = Sin(var1[15]);
  t2350 = -1.000000000016*t722;
  t2368 = 1. + t2350;
  t2379 = t2368*t1839;
  t2387 = -1.*t862;
  t2393 = t857 + t2387;
  t2394 = t2393*t2016;
  t2397 = 4.e-6*t862;
  t2399 = t2267 + t2397;
  t2403 = t2399*t2054;
  t2404 = t2379 + t2394 + t2403;
  t1952 = -1.000000000049*t722;
  t1963 = 1. + t1952;
  t2035 = 7.e-6*t862;
  t2037 = t2024 + t2035;
  t1122 = t857 + t862;
  t2139 = Sin(var1[4]);
  t2208 = Cos(var1[4]);
  t2238 = Cos(var1[5]);
  t2454 = 1.000000000049*t1299;
  t2457 = 4.e-6*t2002;
  t2459 = -1. + t2454 + t2457;
  t2461 = 4.e-6*t2043;
  t2464 = -1. + t1201;
  t2467 = 4.e-6*t2464;
  t2471 = t2461 + t2467 + t1989;
  t2474 = 4.e-6*t1789;
  t2477 = t1966 + t2474 + t1693;
  t2494 = t2393*t2459;
  t2497 = t2399*t2471;
  t2503 = t2368*t2477;
  t2507 = t2494 + t2497 + t2503;
  t2519 = t2307*t2459;
  t2521 = t2319*t2471;
  t2524 = t2283*t2477;
  t2527 = t2519 + t2521 + t2524;
  t2434 = Sin(var1[5]);
  t2564 = -4.e-6*t1693;
  t2561 = 6.5e-11*t1299;
  t2565 = t1580 + t2564;
  t2567 = 7.e-6*t2565;
  t2571 = t2467 + t1989;
  t2574 = 4.e-6*t2571;
  t2575 = -1. + t2561 + t2567 + t2574;
  t2592 = -1. + t2454;
  t2612 = 4.e-6*t2592;
  t2618 = -7.e-6*t1693;
  t2632 = -2.8e-11*t1299;
  t2642 = t2632 + t1693;
  t2653 = 7.e-6*t2642;
  t2654 = t2612 + t2467 + t2618 + t2653;
  t2662 = -1.000000000016*t1299;
  t2665 = 1. + t2662;
  t2669 = 7.e-6*t2665;
  t2670 = t1966 + t1693;
  t2672 = 4.e-6*t2670;
  t2673 = t2669 + t2053 + t2564 + t2672;
  t2750 = t2399*t2575;
  t2757 = t2393*t2654;
  t2762 = t2368*t2673;
  t2765 = t2750 + t2757 + t2762;
  t2773 = t2319*t2575;
  t2790 = t2307*t2654;
  t2791 = t2283*t2673;
  t2799 = t2773 + t2790 + t2791;
  t2420 = t2343*t2326;
  t2421 = t2245*t2404;
  t2431 = t2420 + t2421;
  t2331 = -1.*t2245*t2326;
  t2409 = t2343*t2404;
  t2410 = t2331 + t2409;
  t1870 = t1122*t1839;
  t2019 = t1963*t2016;
  t2055 = t2037*t2054;
  t2084 = t1870 + t2019 + t2055;
  t2419 = t2238*t2410;
  t2437 = -1.*t2431*t2434;
  t2441 = t2419 + t2437;
  t2841 = Cos(var1[3]);
  t2537 = t2245*t2507;
  t2539 = t2343*t2527;
  t2540 = t2537 + t2539;
  t2513 = t2343*t2507;
  t2531 = -1.*t2245*t2527;
  t2533 = t2513 + t2531;
  t2856 = Sin(var1[3]);
  t2460 = t1963*t2459;
  t2473 = t2037*t2471;
  t2479 = t1122*t2477;
  t2481 = t2460 + t2473 + t2479;
  t2534 = t2238*t2533;
  t2541 = -1.*t2540*t2434;
  t2543 = t2534 + t2541;
  t2815 = t2245*t2765;
  t2820 = t2343*t2799;
  t2824 = t2815 + t2820;
  t2769 = t2343*t2765;
  t2803 = -1.*t2245*t2799;
  t2807 = t2769 + t2803;
  t2585 = t2037*t2575;
  t2657 = t1963*t2654;
  t2710 = t1122*t2673;
  t2721 = t2585 + t2657 + t2710;
  t2811 = t2238*t2807;
  t2827 = -1.*t2824*t2434;
  t2830 = t2811 + t2827;
  t2845 = t2238*t2431;
  t2846 = t2410*t2434;
  t2853 = t2845 + t2846;
  t2860 = t2208*t2084;
  t2862 = -1.*t2139*t2441;
  t2863 = t2860 + t2862;
  t2872 = t2238*t2540;
  t2875 = t2533*t2434;
  t2876 = t2872 + t2875;
  t2881 = t2208*t2481;
  t2888 = -1.*t2139*t2543;
  t2890 = t2881 + t2888;
  t2912 = t2238*t2824;
  t2915 = t2807*t2434;
  t2923 = t2912 + t2915;
  t2929 = t2208*t2721;
  t2930 = -1.*t2139*t2830;
  t2933 = t2929 + t2930;
  t2483 = t2481*t2139;
  t2553 = t2208*t2543;
  t2554 = t2483 + t2553;
  t3015 = 7.e-6*t722;
  t3027 = 2.826290000000002e-7*var1[17];
  t3028 = -0.148715*t2043;
  t3029 = -2.18904205e-16*t1299;
  t3030 = t1976 + t2618;
  t3031 = -0.038576*t3030;
  t3032 = -0.80315*t2565;
  t3034 = t2053 + t1771;
  t3035 = -0.5031510000080001*t3034;
  t3039 = -0.038575000014*t2571;
  t3040 = t3027 + t3028 + t3029 + t3031 + t3032 + t3035 + t3039;
  t3044 = 1.1305160000000008e-12*var1[17];
  t3045 = -1.000000000049*t1299;
  t3046 = 1. + t3045;
  t3047 = -0.038576*t3046;
  t3048 = -0.03857500001589017*t1299;
  t3051 = t1966 + t2011;
  t3052 = -0.5031510000080001*t3051;
  t3054 = t2467 + t2618;
  t3056 = -3.367757e-6*t3054;
  t3058 = -0.148715*t2002;
  t3063 = -0.80315*t2642;
  t3064 = t3044 + t3047 + t3048 + t3052 + t3056 + t3058 + t3063;
  t3071 = -1.9784030000000015e-12*var1[17];
  t3072 = -0.80315*t2665;
  t3073 = -0.5031510000160505*t1299;
  t3077 = t2632 + t2011;
  t3081 = -0.038576*t3077;
  t3082 = t2053 + t2564;
  t3085 = -3.367757e-6*t3082;
  t3086 = -0.148715*t1789;
  t3088 = -0.038575000014*t2670;
  t3089 = t3071 + t3072 + t3073 + t3081 + t3085 + t3086 + t3088;
  t2983 = -1.*t2343;
  t2995 = 1. + t2983;
  t3003 = -0.15121*t2995;
  t3011 = -2.7726089999999997e-12*var1[16];
  t3012 = -0.2812110000084994*t722;
  t3016 = t3015 + t2274;
  t3017 = -1.8134809999999998e-6*t3016;
  t3021 = 2.8e-11*t722;
  t3022 = t3021 + t862;
  t3024 = -0.038749000006999997*t3022;
  t3043 = t2399*t3040;
  t3068 = t2393*t3064;
  t3090 = t2368*t3089;
  t3092 = t3011 + t3012 + t3017 + t3024 + t3043 + t3068 + t3090;
  t3096 = 3.9608699999999997e-7*var1[16];
  t3097 = -1.1787626499999999e-16*t722;
  t3098 = t3015 + t2397;
  t3101 = -0.281211000004*t3098;
  t3102 = -1. + t665;
  t3105 = 4.e-6*t3102;
  t3106 = t3105 + t2035;
  t3107 = -0.038749000006999997*t3106;
  t3108 = t2319*t3040;
  t3117 = t2307*t3064;
  t3119 = t2283*t3089;
  t3125 = t3096 + t3097 + t3101 + t3107 + t3108 + t3117 + t3119;
  t2183 = t2084*t2139;
  t2443 = t2208*t2441;
  t2445 = t2183 + t2443;
  t3135 = -0.15121*t2245;
  t3138 = t2343*t3092;
  t3141 = -1.*t2245*t3125;
  t3143 = t3003 + t3135 + t3138 + t3141;
  t3007 = 0.15121*t2245;
  t3093 = t2245*t3092;
  t3126 = t2343*t3125;
  t3133 = t3003 + t3007 + t3093 + t3126;
  t3154 = 1.5843479999999999e-12*var1[16];
  t3155 = -0.03874900000889869*t722;
  t3157 = t3021 + t2387;
  t3158 = -0.281211000004*t3157;
  t3161 = t3105 + t2289;
  t3162 = -1.8134809999999998e-6*t3161;
  t3164 = t2037*t3040;
  t3166 = t1963*t3064;
  t3170 = t1122*t3089;
  t3174 = t3154 + t3155 + t3158 + t3162 + t3164 + t3166 + t3170;
  t3177 = t2238*t3143;
  t3181 = -1.*t3133*t2434;
  t3183 = t3177 + t3181;
  t3134 = t2238*t3133;
  t3144 = t3143*t2434;
  t3147 = t3134 + t3144;
  t3176 = t3174*t2139;
  t3185 = t2208*t3183;
  t3192 = t3176 + t3185;
  t3194 = t2208*t3174;
  t3196 = -1.*t2139*t3183;
  t3197 = t3194 + t3196;
  t2736 = t2721*t2139;
  t2831 = t2208*t2830;
  t2832 = t2736 + t2831;
  t3153 = -1.*t2853*t3147;
  t3220 = t2876*t3147;
  t3235 = t2853*t3147;
  t3249 = -1.*t3147*t2923;
  t3272 = -1.*t2876*t3147;
  t3283 = t3147*t2923;
  t3303 = -1.*t2084*t3174;
  t3318 = t2481*t3174;
  t3329 = t2084*t3174;
  t3337 = -1.*t3174*t2721;
  t3348 = -1.*t2481*t3174;
  t3359 = t3174*t2721;
  t3521 = -1.*t3040*t2054;
  t3522 = -1.*t2016*t3064;
  t3524 = -1.*t1839*t3089;
  t3525 = t3521 + t3522 + t3524;
  t3529 = t3040*t2471;
  t3537 = t2459*t3064;
  t3538 = t2477*t3089;
  t3541 = t3529 + t3537 + t3538;
  t3578 = t3040*t2054;
  t3582 = t2016*t3064;
  t3583 = t1839*t3089;
  t3587 = t3578 + t3582 + t3583;
  t3593 = -1.*t3040*t2575;
  t3594 = -1.*t3064*t2654;
  t3595 = -1.*t3089*t2673;
  t3598 = t3593 + t3594 + t3595;
  t3630 = -1.*t3040*t2471;
  t3631 = -1.*t2459*t3064;
  t3632 = -1.*t2477*t3089;
  t3633 = t3630 + t3631 + t3632;
  t3637 = t3040*t2575;
  t3638 = t3064*t2654;
  t3640 = t3089*t2673;
  t3641 = t3637 + t3638 + t3640;
  p_output1[0]=t2445*var2[0] + t2554*var2[1] + t2832*var2[2];
  p_output1[1]=(t2841*t2853 - 1.*t2856*t2863)*var2[0] + (t2841*t2876 - 1.*t2856*t2890)*var2[1] + (t2841*t2923 - 1.*t2856*t2933)*var2[2];
  p_output1[2]=(t2853*t2856 + t2841*t2863)*var2[0] + (t2856*t2876 + t2841*t2890)*var2[1] + (t2856*t2923 + t2841*t2933)*var2[2];
  p_output1[3]=(t2832*(-1.*t2554*t3192 - 1.*t2890*t3197 + t3272) + t2554*(t2832*t3192 + t2933*t3197 + t3283))*var2[0] + (t2832*(t2445*t3192 + t2863*t3197 + t3235) + t2445*(-1.*t2832*t3192 - 1.*t2933*t3197 + t3249))*var2[1] + (t2554*(t3153 - 1.*t2445*t3192 - 1.*t2863*t3197) + t2445*(t2554*t3192 + t2890*t3197 + t3220))*var2[2];
  p_output1[4]=(t2923*(-1.*t2543*t3183 + t3272 + t3348) + t2876*(t2830*t3183 + t3283 + t3359))*var2[0] + (t2923*(t2441*t3183 + t3235 + t3329) + t2853*(-1.*t2830*t3183 + t3249 + t3337))*var2[1] + (t2876*(t3153 - 1.*t2441*t3183 + t3303) + t2853*(t2543*t3183 + t3220 + t3318))*var2[2];
  p_output1[5]=(t2721*(-1.*t2540*t3133 - 1.*t2533*t3143 + t3348) + t2481*(t2824*t3133 + t2807*t3143 + t3359))*var2[0] + (t2721*(t2431*t3133 + t2410*t3143 + t3329) + t2084*(-1.*t2824*t3133 - 1.*t2807*t3143 + t3337))*var2[1] + (t2481*(-1.*t2431*t3133 - 1.*t2410*t3143 + t3303) + t2084*(t2540*t3133 + t2533*t3143 + t3318))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.15121*t2326 - 0.15121*t2404 + t2721*(-1.*t2507*t3092 - 1.*t2527*t3125 + t3348) + t2481*(t2765*t3092 + t2799*t3125 + t3359))*var2[0] + (-0.15121*t2507 + 0.15121*t2527 + t2721*(t2404*t3092 + t2326*t3125 + t3329) + t2084*(-1.*t2765*t3092 - 1.*t2799*t3125 + t3337))*var2[1] + (-0.15121*t2765 + 0.15121*t2799 + t2481*(-1.*t2404*t3092 - 1.*t2326*t3125 + t3303) + t2084*(t2507*t3092 + t2527*t3125 + t3318))*var2[2];
  p_output1[16]=(-0.038749*t1839 + 0.281211*t2016 + 1.e-6*(t1580 + 7.e-6*t2043 + t2564) - 1.*t2575*t3633 - 1.*t2471*t3641 + 4.e-6*(-1.*t2654*t3633 - 1.*t2459*t3641) + 7.e-6*(t2673*t3633 + t2477*t3641))*var2[0] + (0.281211*t2459 - 0.038749*t2477 + 1.e-6*(t1976 + 4.e-6*(-1. + t2561) + t2618) - 1.*t2575*t3587 - 1.*t2054*t3598 + 7.e-6*(t2673*t3587 + t1839*t3598) + 4.e-6*(-1.*t2654*t3587 - 1.*t2016*t3598))*var2[1] + (0.281211*t2654 - 0.038749*t2673 + 1.e-6*(1. + t2038 - 7.e-6*t2565 + 4.e-6*t3030) - 1.*t2471*t3525 - 1.*t2054*t3541 + 7.e-6*(t2477*t3525 + t1839*t3541) + 4.e-6*(-1.*t2459*t3525 - 1.*t2016*t3541))*var2[2];
  p_output1[17]=-4.051285074010787e-7*var2[0] + 0.3000000410492048*var2[1] - 2.826290000000002e-7*var2[2];
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

#include "fRrFoot_vec_QuadrupleStance.hh"

namespace QuadrupleStance
{

void fRrFoot_vec_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
