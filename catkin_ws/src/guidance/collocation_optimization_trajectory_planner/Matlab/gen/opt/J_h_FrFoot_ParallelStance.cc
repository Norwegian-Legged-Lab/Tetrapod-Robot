/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:30:08 GMT+01:00
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
  double t405;
  double t1244;
  double t1289;
  double t1304;
  double t1336;
  double t1416;
  double t1472;
  double t421;
  double t537;
  double t968;
  double t1047;
  double t1242;
  double t1652;
  double t62;
  double t1852;
  double t1894;
  double t1895;
  double t1948;
  double t1953;
  double t1987;
  double t1990;
  double t2006;
  double t2009;
  double t2038;
  double t2151;
  double t2081;
  double t2083;
  double t2087;
  double t2096;
  double t2097;
  double t2110;
  double t2221;
  double t2246;
  double t2257;
  double t2269;
  double t2317;
  double t2320;
  double t2322;
  double t2324;
  double t2327;
  double t2334;
  double t1544;
  double t1581;
  double t1312;
  double t1438;
  double t1929;
  double t1934;
  double t1939;
  double t1661;
  double t1797;
  double t1836;
  double t1846;
  double t1850;
  double t2285;
  double t2290;
  double t2296;
  double t2297;
  double t2301;
  double t2517;
  double t2522;
  double t2524;
  double t2540;
  double t2541;
  double t2544;
  double t2143;
  double t2149;
  double t2157;
  double t2164;
  double t2201;
  double t2010;
  double t2042;
  double t2062;
  double t2549;
  double t2550;
  double t2554;
  double t2557;
  double t2559;
  double t2560;
  double t2456;
  double t2459;
  double t2573;
  double t2578;
  double t2586;
  double t2356;
  double t2362;
  double t2684;
  double t2538;
  double t2545;
  double t2556;
  double t2569;
  double t2590;
  double t2595;
  double t2602;
  double t2608;
  double t2611;
  double t2613;
  double t2614;
  double t2615;
  double t2616;
  double t2619;
  double t2622;
  double t2624;
  double t2625;
  double t2628;
  double t2653;
  double t2663;
  double t2843;
  double t2846;
  double t2848;
  double t2857;
  double t2862;
  double t2864;
  double t2875;
  double t2876;
  double t2881;
  double t2882;
  double t2890;
  double t2891;
  double t2895;
  double t2900;
  double t2966;
  double t2967;
  double t2972;
  double t2976;
  double t2987;
  double t2989;
  double t2991;
  double t3001;
  double t3003;
  double t3008;
  double t3009;
  double t392;
  double t555;
  double t970;
  double t1122;
  double t1155;
  double t3059;
  double t3074;
  double t3073;
  double t3075;
  double t3082;
  double t3091;
  double t3093;
  double t3099;
  double t3104;
  double t3105;
  double t3106;
  double t3109;
  double t3111;
  double t3112;
  double t3125;
  double t3126;
  double t3128;
  double t3129;
  double t3139;
  double t3144;
  double t3146;
  double t3147;
  double t3157;
  double t3160;
  double t3162;
  double t3164;
  double t3244;
  double t3246;
  double t3247;
  double t3251;
  double t3252;
  double t3259;
  double t3265;
  double t3266;
  double t3269;
  double t3270;
  double t3274;
  double t3275;
  double t3278;
  double t3281;
  double t3284;
  double t3288;
  double t3290;
  double t3294;
  double t3323;
  double t3327;
  double t3335;
  double t3340;
  double t3343;
  double t3353;
  double t3362;
  double t3367;
  double t3374;
  double t3383;
  double t3393;
  double t3394;
  double t3403;
  double t3405;
  double t3409;
  double t3413;
  double t3414;
  double t3415;
  double t3417;
  double t3418;
  double t3420;
  double t2716;
  double t2736;
  double t2763;
  double t3504;
  double t3508;
  double t3512;
  double t3535;
  double t3540;
  double t3553;
  double t3570;
  double t3580;
  double t3586;
  double t3587;
  double t3598;
  double t3599;
  double t3600;
  double t3605;
  double t3606;
  double t3607;
  double t2768;
  double t2774;
  double t2788;
  double t2789;
  double t2809;
  double t2820;
  double t2827;
  double t2835;
  double t3700;
  double t3701;
  double t3707;
  double t3713;
  double t3719;
  double t3720;
  double t3722;
  double t3723;
  double t3727;
  double t3728;
  double t3743;
  double t3744;
  double t3747;
  double t3748;
  double t2961;
  double t2962;
  double t2963;
  double t2983;
  double t2984;
  double t2993;
  double t2996;
  double t3000;
  double t3789;
  double t3792;
  double t3793;
  double t3797;
  double t3799;
  double t3801;
  double t3806;
  double t3812;
  double t3814;
  double t3819;
  double t3820;
  double t3840;
  double t3973;
  double t3975;
  double t3979;
  double t3986;
  double t3990;
  double t3991;
  double t3995;
  double t3998;
  double t4003;
  double t4006;
  double t4013;
  double t4014;
  double t4015;
  double t4016;
  double t4028;
  double t4032;
  double t4033;
  double t4034;
  double t4098;
  double t4100;
  double t4106;
  double t4108;
  double t4114;
  double t4115;
  double t4121;
  double t4124;
  double t4131;
  double t4134;
  double t4138;
  double t4146;
  double t4150;
  double t4154;
  double t4168;
  double t4172;
  double t4174;
  double t4232;
  double t4233;
  double t4236;
  double t4250;
  double t4251;
  double t4254;
  double t4257;
  double t4262;
  double t4265;
  double t4267;
  double t4272;
  double t4274;
  double t4280;
  double t4283;
  double t4286;
  double t4288;
  double t4355;
  double t4363;
  double t4371;
  double t4379;
  double t4385;
  double t4388;
  double t4394;
  double t4404;
  double t4405;
  double t4412;
  double t4413;
  double t4415;
  double t4421;
  double t4475;
  double t4476;
  double t4481;
  double t4482;
  double t4485;
  double t4487;
  double t4489;
  double t4499;
  double t4501;
  double t4504;
  double t4513;
  t405 = Cos(var1[10]);
  t1244 = Cos(var1[9]);
  t1289 = -1.*t1244;
  t1304 = 1. + t1289;
  t1336 = Sin(var1[9]);
  t1416 = -0.15121*t1336;
  t1472 = Sin(var1[4]);
  t421 = -1.*t405;
  t537 = 1. + t421;
  t968 = -1. + t405;
  t1047 = Sin(var1[10]);
  t1242 = Cos(var1[5]);
  t1652 = Sin(var1[5]);
  t62 = Cos(var1[4]);
  t1852 = t1242*t1336*t1472;
  t1894 = t1244*t1472*t1652;
  t1895 = t1852 + t1894;
  t1948 = -1.*t1244*t1242*t1472;
  t1953 = t1336*t1472*t1652;
  t1987 = t1948 + t1953;
  t1990 = Cos(var1[11]);
  t2006 = -1.*t1990;
  t2009 = 1. + t2006;
  t2038 = Sin(var1[11]);
  t2151 = -1. + t1990;
  t2081 = t62*t1047;
  t2083 = -4.e-6*t1047*t1895;
  t2087 = -1.000000000016*t537;
  t2096 = 1. + t2087;
  t2097 = t2096*t1987;
  t2110 = t2081 + t2083 + t2097;
  t2221 = t405*t62;
  t2246 = 4.e-6*t537*t1895;
  t2257 = -1.*t1047*t1987;
  t2269 = t2221 + t2246 + t2257;
  t2317 = 4.e-6*t537*t62;
  t2320 = 1.6e-11*t968;
  t2322 = 1. + t2320;
  t2324 = t2322*t1895;
  t2327 = 4.e-6*t1047*t1987;
  t2334 = t2317 + t2324 + t2327;
  t1544 = -0.15121*t1304;
  t1581 = t1544 + t1416;
  t1312 = 0.15121*t1304;
  t1438 = t1312 + t1416;
  t1929 = 0.281210000008499*t537;
  t1934 = -0.03874900000062*t1047;
  t1939 = t1929 + t1934;
  t1661 = -1.2484e-7*var1[10];
  t1797 = 2.479936e-18*t537;
  t1836 = -1.54996e-7*t968;
  t1846 = 1.124840000016e-6*t1047;
  t1850 = t1661 + t1797 + t1836 + t1846;
  t2285 = -1.26e-8*var1[11];
  t2290 = 2.552896e-18*t2009;
  t2296 = -1.59556e-7*t2151;
  t2297 = 2.012600000032e-6*t2038;
  t2301 = t2285 + t2290 + t2296 + t2297;
  t2517 = -1.*t62*t1242*t1336;
  t2522 = -1.*t1244*t62*t1652;
  t2524 = t2517 + t2522;
  t2540 = -1.*t1244*t62*t1242;
  t2541 = t62*t1336*t1652;
  t2544 = t2540 + t2541;
  t2143 = -5.04e-14*var1[11];
  t2149 = -0.039889*t2009;
  t2157 = 6.38224e-13*t2151;
  t2164 = -0.503150000008*t2038;
  t2201 = t2143 + t2149 + t2157 + t2164;
  t2010 = 0.50315000001605*t2009;
  t2042 = -0.0398890000006382*t2038;
  t2062 = t2010 + t2042;
  t2549 = 4.e-6*t1047*t2524;
  t2550 = t2322*t2544;
  t2554 = t2549 + t2550;
  t2557 = -1.*t1047*t2524;
  t2559 = 4.e-6*t537*t2544;
  t2560 = t2557 + t2559;
  t2456 = -1.000000000016*t2009;
  t2459 = 1. + t2456;
  t2573 = t2096*t2524;
  t2578 = -4.e-6*t1047*t2544;
  t2586 = t2573 + t2578;
  t2356 = 1.6e-11*t2151;
  t2362 = 1. + t2356;
  t2684 = -0.15121*t1244;
  t2538 = t1939*t2524;
  t2545 = t1850*t2544;
  t2556 = t2301*t2554;
  t2569 = t2201*t2560;
  t2590 = t2062*t2586;
  t2595 = -4.e-6*t2038*t2554;
  t2602 = t2038*t2560;
  t2608 = t2459*t2586;
  t2611 = t2595 + t2602 + t2608;
  t2613 = 0.803147*t2611;
  t2614 = 4.e-6*t2009*t2554;
  t2615 = t1990*t2560;
  t2616 = -1.*t2038*t2586;
  t2619 = t2614 + t2615 + t2616;
  t2622 = -0.041195*t2619;
  t2624 = t2362*t2554;
  t2625 = 4.e-6*t2009*t2560;
  t2628 = 4.e-6*t2038*t2586;
  t2653 = t2624 + t2625 + t2628;
  t2663 = -0.14871*t2653;
  t2843 = t1244*t62*t1242;
  t2846 = -1.*t62*t1336*t1652;
  t2848 = t2843 + t2846;
  t2857 = -1.*t1047*t1472;
  t2862 = -1.*t405*t2848;
  t2864 = t2857 + t2549 + t2862;
  t2875 = 4.e-6*t1047*t1472;
  t2876 = -1.6e-11*t1047*t2524;
  t2881 = 4.e-6*t405*t2848;
  t2882 = t2875 + t2876 + t2881;
  t2890 = t405*t1472;
  t2891 = -4.e-6*t405*t2524;
  t2895 = -1.000000000016*t1047*t2848;
  t2900 = t2890 + t2891 + t2895;
  t2966 = t1047*t1472;
  t2967 = -4.e-6*t1047*t2524;
  t2972 = t2096*t2848;
  t2976 = t2966 + t2967 + t2972;
  t2987 = 4.e-6*t537*t2524;
  t2989 = -1.*t1047*t2848;
  t2991 = t2890 + t2987 + t2989;
  t3001 = 4.e-6*t537*t1472;
  t3003 = t2322*t2524;
  t3008 = 4.e-6*t1047*t2848;
  t3009 = t3001 + t3003 + t3008;
  t392 = -4.9936e-13*var1[10];
  t555 = -0.038749*t537;
  t970 = 6.19984e-13*t968;
  t1122 = -0.281210000004*t1047;
  t1155 = t392 + t555 + t970 + t1122;
  t3059 = Cos(var1[3]);
  t3074 = Sin(var1[3]);
  t3073 = t3059*t1242*t1472;
  t3075 = -1.*t3074*t1652;
  t3082 = t3073 + t3075;
  t3091 = -1.*t1242*t3074;
  t3093 = -1.*t3059*t1472*t1652;
  t3099 = t3091 + t3093;
  t3104 = -1.*t1336*t3082;
  t3105 = t1244*t3099;
  t3106 = t3104 + t3105;
  t3109 = t1244*t3082;
  t3111 = t1336*t3099;
  t3112 = t3109 + t3111;
  t3125 = -1.*t3059*t62*t1047;
  t3126 = -4.e-6*t1047*t3106;
  t3128 = t2096*t3112;
  t3129 = t3125 + t3126 + t3128;
  t3139 = -1.*t405*t3059*t62;
  t3144 = 4.e-6*t537*t3106;
  t3146 = -1.*t1047*t3112;
  t3147 = t3139 + t3144 + t3146;
  t3157 = -4.e-6*t537*t3059*t62;
  t3160 = t2322*t3106;
  t3162 = 4.e-6*t1047*t3112;
  t3164 = t3157 + t3160 + t3162;
  t3244 = -1.*t62*t1242*t1336*t3074;
  t3246 = -1.*t1244*t62*t3074*t1652;
  t3247 = t3244 + t3246;
  t3251 = t1244*t62*t1242*t3074;
  t3252 = -1.*t62*t1336*t3074*t1652;
  t3259 = t3251 + t3252;
  t3265 = t1047*t3074*t1472;
  t3266 = -4.e-6*t1047*t3247;
  t3269 = t2096*t3259;
  t3270 = t3265 + t3266 + t3269;
  t3274 = t405*t3074*t1472;
  t3275 = 4.e-6*t537*t3247;
  t3278 = -1.*t1047*t3259;
  t3281 = t3274 + t3275 + t3278;
  t3284 = 4.e-6*t537*t3074*t1472;
  t3288 = t2322*t3247;
  t3290 = 4.e-6*t1047*t3259;
  t3294 = t3284 + t3288 + t3290;
  t3323 = -1.*t1242*t3074*t1472;
  t3327 = -1.*t3059*t1652;
  t3335 = t3323 + t3327;
  t3340 = t3059*t1242;
  t3343 = -1.*t3074*t1472*t1652;
  t3353 = t3340 + t3343;
  t3362 = t1336*t3335;
  t3367 = t1244*t3353;
  t3374 = t3362 + t3367;
  t3383 = t1244*t3335;
  t3393 = -1.*t1336*t3353;
  t3394 = t3383 + t3393;
  t3403 = 4.e-6*t1047*t3374;
  t3405 = t2322*t3394;
  t3409 = t3403 + t3405;
  t3413 = -1.*t1047*t3374;
  t3414 = 4.e-6*t537*t3394;
  t3415 = t3413 + t3414;
  t3417 = t2096*t3374;
  t3418 = -4.e-6*t1047*t3394;
  t3420 = t3417 + t3418;
  t2716 = 0.15121*t1336;
  t2736 = t2684 + t2716;
  t2763 = t2684 + t1416;
  t3504 = t1242*t3074*t1472;
  t3508 = t3059*t1652;
  t3512 = t3504 + t3508;
  t3535 = -1.*t1336*t3512;
  t3540 = t3535 + t3367;
  t3553 = -1.*t1244*t3512;
  t3570 = t3553 + t3393;
  t3580 = 4.e-6*t1047*t3540;
  t3586 = t2322*t3570;
  t3587 = t3580 + t3586;
  t3598 = -1.*t1047*t3540;
  t3599 = 4.e-6*t537*t3570;
  t3600 = t3598 + t3599;
  t3605 = t2096*t3540;
  t3606 = -4.e-6*t1047*t3570;
  t3607 = t3605 + t3606;
  t2768 = -0.281210000004*t405;
  t2774 = -4.9936e-13 + t2768 + t1934;
  t2788 = 1.124840000016e-6*t405;
  t2789 = 1.5499600000248e-7*t1047;
  t2809 = -1.2484e-7 + t2788 + t2789;
  t2820 = -0.03874900000062*t405;
  t2827 = 0.281210000008499*t1047;
  t2835 = t2820 + t2827;
  t3700 = t1244*t3512;
  t3701 = t1336*t3353;
  t3707 = t3700 + t3701;
  t3713 = t62*t1047*t3074;
  t3719 = -1.*t405*t3707;
  t3720 = t3713 + t3580 + t3719;
  t3722 = -4.e-6*t62*t1047*t3074;
  t3723 = -1.6e-11*t1047*t3540;
  t3727 = 4.e-6*t405*t3707;
  t3728 = t3722 + t3723 + t3727;
  t3743 = -1.*t405*t62*t3074;
  t3744 = -4.e-6*t405*t3540;
  t3747 = -1.000000000016*t1047*t3707;
  t3748 = t3743 + t3744 + t3747;
  t2961 = -0.0398890000006382*t1990;
  t2962 = 0.50315000001605*t2038;
  t2963 = t2961 + t2962;
  t2983 = -0.503150000008*t1990;
  t2984 = -5.04e-14 + t2983 + t2042;
  t2993 = 2.012600000032e-6*t1990;
  t2996 = 1.59556000002553e-7*t2038;
  t3000 = -1.26e-8 + t2993 + t2996;
  t3789 = -1.*t62*t1047*t3074;
  t3792 = -4.e-6*t1047*t3540;
  t3793 = t2096*t3707;
  t3797 = t3789 + t3792 + t3793;
  t3799 = 4.e-6*t537*t3540;
  t3801 = -1.*t1047*t3707;
  t3806 = t3743 + t3799 + t3801;
  t3812 = -4.e-6*t537*t62*t3074;
  t3814 = t2322*t3540;
  t3819 = 4.e-6*t1047*t3707;
  t3820 = t3812 + t3814 + t3819;
  t3840 = t1990*t3806;
  t3973 = t3059*t62*t1242*t1336;
  t3975 = t1244*t3059*t62*t1652;
  t3979 = t3973 + t3975;
  t3986 = -1.*t1244*t3059*t62*t1242;
  t3990 = t3059*t62*t1336*t1652;
  t3991 = t3986 + t3990;
  t3995 = -1.*t3059*t1047*t1472;
  t3998 = -4.e-6*t1047*t3979;
  t4003 = t2096*t3991;
  t4006 = t3995 + t3998 + t4003;
  t4013 = -1.*t405*t3059*t1472;
  t4014 = 4.e-6*t537*t3979;
  t4015 = -1.*t1047*t3991;
  t4016 = t4013 + t4014 + t4015;
  t4028 = -4.e-6*t537*t3059*t1472;
  t4032 = t2322*t3979;
  t4033 = 4.e-6*t1047*t3991;
  t4034 = t4028 + t4032 + t4033;
  t4098 = t1242*t3074;
  t4100 = t3059*t1472*t1652;
  t4106 = t4098 + t4100;
  t4108 = t1336*t3082;
  t4114 = t1244*t4106;
  t4115 = t4108 + t4114;
  t4121 = -1.*t1336*t4106;
  t4124 = t3109 + t4121;
  t4131 = 4.e-6*t1047*t4115;
  t4134 = t2322*t4124;
  t4138 = t4131 + t4134;
  t4146 = -1.*t1047*t4115;
  t4150 = 4.e-6*t537*t4124;
  t4154 = t4146 + t4150;
  t4168 = t2096*t4115;
  t4172 = -4.e-6*t1047*t4124;
  t4174 = t4168 + t4172;
  t4232 = -1.*t3059*t1242*t1472;
  t4233 = t3074*t1652;
  t4236 = t4232 + t4233;
  t4250 = -1.*t1336*t4236;
  t4251 = t4250 + t4114;
  t4254 = -1.*t1244*t4236;
  t4257 = t4254 + t4121;
  t4262 = 4.e-6*t1047*t4251;
  t4265 = t2322*t4257;
  t4267 = t4262 + t4265;
  t4272 = -1.*t1047*t4251;
  t4274 = 4.e-6*t537*t4257;
  t4280 = t4272 + t4274;
  t4283 = t2096*t4251;
  t4286 = -4.e-6*t1047*t4257;
  t4288 = t4283 + t4286;
  t4355 = t1244*t4236;
  t4363 = t1336*t4106;
  t4371 = t4355 + t4363;
  t4379 = -1.*t405*t4371;
  t4385 = t3125 + t4262 + t4379;
  t4388 = 4.e-6*t3059*t62*t1047;
  t4394 = -1.6e-11*t1047*t4251;
  t4404 = 4.e-6*t405*t4371;
  t4405 = t4388 + t4394 + t4404;
  t4412 = t405*t3059*t62;
  t4413 = -4.e-6*t405*t4251;
  t4415 = -1.000000000016*t1047*t4371;
  t4421 = t4412 + t4413 + t4415;
  t4475 = t3059*t62*t1047;
  t4476 = -4.e-6*t1047*t4251;
  t4481 = t2096*t4371;
  t4482 = t4475 + t4476 + t4481;
  t4485 = 4.e-6*t537*t4251;
  t4487 = -1.*t1047*t4371;
  t4489 = t4412 + t4485 + t4487;
  t4499 = 4.e-6*t537*t3059*t62;
  t4501 = t2322*t4251;
  t4504 = 4.e-6*t1047*t4371;
  t4513 = t4499 + t4501 + t4504;
  p_output1[0]=1.;
  p_output1[1]=-1.*t1242*t1438*t1472 + t1472*t1581*t1652 + t1850*t1895 + t1939*t1987 + t2062*t2110 + t2201*t2269 + t2301*t2334 - 0.041195*(-1.*t2038*t2110 + t1990*t2269 + 4.e-6*t2009*t2334) - 0.14871*(4.e-6*t2038*t2110 + 4.e-6*t2009*t2269 + t2334*t2362) + 0.803147*(t2038*t2269 - 4.e-6*t2038*t2334 + t2110*t2459) + t1155*t62;
  p_output1[2]=t2538 + t2545 + t2556 + t2569 + t2590 + t2613 + t2622 + t2663 - 1.*t1242*t1581*t62 - 1.*t1438*t1652*t62;
  p_output1[3]=t2538 + t2545 + t2556 + t2569 + t2590 + t2613 + t2622 + t2663 + t1242*t2736*t62 - 1.*t1652*t2763*t62;
  p_output1[4]=t1472*t2774 + t2524*t2809 + t2835*t2848 + t2201*t2864 + t2301*t2882 + t2062*t2900 - 0.041195*(t1990*t2864 + 4.e-6*t2009*t2882 - 1.*t2038*t2900) - 0.14871*(4.e-6*t2009*t2864 + t2362*t2882 + 4.e-6*t2038*t2900) + 0.803147*(t2038*t2864 - 4.e-6*t2038*t2882 + t2459*t2900);
  p_output1[5]=t2963*t2976 + t2984*t2991 + t3000*t3009 + 0.803147*(-1.000000000016*t2038*t2976 + t1990*t2991 - 4.e-6*t1990*t3009) - 0.14871*(4.e-6*t1990*t2976 + 4.e-6*t2038*t2991 - 1.6e-11*t2038*t3009) - 0.041195*(-1.*t1990*t2976 - 1.*t2038*t2991 + 4.e-6*t2038*t3009);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t1438*t3082 + t1581*t3099 + t1850*t3106 + t1939*t3112 + t2062*t3129 + t2201*t3147 + t2301*t3164 - 0.041195*(-1.*t2038*t3129 + t1990*t3147 + 4.e-6*t2009*t3164) + 0.803147*(t2459*t3129 + t2038*t3147 - 4.e-6*t2038*t3164) - 0.14871*(4.e-6*t2038*t3129 + 4.e-6*t2009*t3147 + t2362*t3164) - 1.*t1155*t3059*t62;
  p_output1[9]=t1155*t1472*t3074 + t1850*t3247 + t1939*t3259 + t2062*t3270 + t2201*t3281 + t2301*t3294 - 0.041195*(-1.*t2038*t3270 + t1990*t3281 + 4.e-6*t2009*t3294) + 0.803147*(t2459*t3270 + t2038*t3281 - 4.e-6*t2038*t3294) - 0.14871*(4.e-6*t2038*t3270 + 4.e-6*t2009*t3281 + t2362*t3294) + t1242*t1438*t3074*t62 - 1.*t1581*t1652*t3074*t62;
  p_output1[10]=t1581*t3335 + t1438*t3353 + t1939*t3374 + t1850*t3394 + t2301*t3409 + t2201*t3415 + t2062*t3420 - 0.041195*(4.e-6*t2009*t3409 + t1990*t3415 - 1.*t2038*t3420) - 0.14871*(t2362*t3409 + 4.e-6*t2009*t3415 + 4.e-6*t2038*t3420) + 0.803147*(-4.e-6*t2038*t3409 + t2038*t3415 + t2459*t3420);
  p_output1[11]=t2763*t3353 + t2736*t3512 + t1939*t3540 + t1850*t3570 + t2301*t3587 + t2201*t3600 + t2062*t3607 - 0.041195*(4.e-6*t2009*t3587 + t1990*t3600 - 1.*t2038*t3607) - 0.14871*(t2362*t3587 + 4.e-6*t2009*t3600 + 4.e-6*t2038*t3607) + 0.803147*(-4.e-6*t2038*t3587 + t2038*t3600 + t2459*t3607);
  p_output1[12]=t2809*t3540 + t2835*t3707 + t2201*t3720 + t2301*t3728 + t2062*t3748 - 0.041195*(t1990*t3720 + 4.e-6*t2009*t3728 - 1.*t2038*t3748) - 0.14871*(4.e-6*t2009*t3720 + t2362*t3728 + 4.e-6*t2038*t3748) + 0.803147*(t2038*t3720 - 4.e-6*t2038*t3728 + t2459*t3748) - 1.*t2774*t3074*t62;
  p_output1[13]=t2963*t3797 + t2984*t3806 + t3000*t3820 - 0.14871*(4.e-6*t1990*t3797 + 4.e-6*t2038*t3806 - 1.6e-11*t2038*t3820) - 0.041195*(-1.*t1990*t3797 - 1.*t2038*t3806 + 4.e-6*t2038*t3820) + 0.803147*(-1.000000000016*t2038*t3797 - 4.e-6*t1990*t3820 + t3840);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t1581*t3353 + t1438*t3512 + t1850*t3540 + t1939*t3707 + t2062*t3797 + t2201*t3806 + t2301*t3820 + 0.803147*(t2459*t3797 + t2038*t3806 - 4.e-6*t2038*t3820) - 0.14871*(4.e-6*t2038*t3797 + 4.e-6*t2009*t3806 + t2362*t3820) - 0.041195*(-1.*t2038*t3797 + 4.e-6*t2009*t3820 + t3840) - 1.*t1155*t3074*t62;
  p_output1[17]=-1.*t1155*t1472*t3059 + t1850*t3979 + t1939*t3991 + t2062*t4006 + t2201*t4016 + t2301*t4034 - 0.041195*(-1.*t2038*t4006 + t1990*t4016 + 4.e-6*t2009*t4034) + 0.803147*(t2459*t4006 + t2038*t4016 - 4.e-6*t2038*t4034) - 0.14871*(4.e-6*t2038*t4006 + 4.e-6*t2009*t4016 + t2362*t4034) - 1.*t1242*t1438*t3059*t62 + t1581*t1652*t3059*t62;
  p_output1[18]=t1581*t3082 + t1438*t4106 + t1939*t4115 + t1850*t4124 + t2301*t4138 + t2201*t4154 + t2062*t4174 - 0.041195*(4.e-6*t2009*t4138 + t1990*t4154 - 1.*t2038*t4174) - 0.14871*(t2362*t4138 + 4.e-6*t2009*t4154 + 4.e-6*t2038*t4174) + 0.803147*(-4.e-6*t2038*t4138 + t2038*t4154 + t2459*t4174);
  p_output1[19]=t2763*t4106 + t2736*t4236 + t1939*t4251 + t1850*t4257 + t2301*t4267 + t2201*t4280 + t2062*t4288 - 0.041195*(4.e-6*t2009*t4267 + t1990*t4280 - 1.*t2038*t4288) - 0.14871*(t2362*t4267 + 4.e-6*t2009*t4280 + 4.e-6*t2038*t4288) + 0.803147*(-4.e-6*t2038*t4267 + t2038*t4280 + t2459*t4288);
  p_output1[20]=t2809*t4251 + t2835*t4371 + t2201*t4385 + t2301*t4405 + t2062*t4421 - 0.041195*(t1990*t4385 + 4.e-6*t2009*t4405 - 1.*t2038*t4421) - 0.14871*(4.e-6*t2009*t4385 + t2362*t4405 + 4.e-6*t2038*t4421) + 0.803147*(t2038*t4385 - 4.e-6*t2038*t4405 + t2459*t4421) + t2774*t3059*t62;
  p_output1[21]=t2963*t4482 + t2984*t4489 + t3000*t4513 + 0.803147*(-1.000000000016*t2038*t4482 + t1990*t4489 - 4.e-6*t1990*t4513) - 0.14871*(4.e-6*t1990*t4482 + 4.e-6*t2038*t4489 - 1.6e-11*t2038*t4513) - 0.041195*(-1.*t1990*t4482 - 1.*t2038*t4489 + 4.e-6*t2038*t4513);
  p_output1[22]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
