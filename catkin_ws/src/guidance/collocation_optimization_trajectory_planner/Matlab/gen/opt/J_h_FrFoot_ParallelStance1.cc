/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:28:49 GMT+01:00
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
  double t418;
  double t1223;
  double t1226;
  double t1243;
  double t1289;
  double t1309;
  double t1383;
  double t515;
  double t529;
  double t609;
  double t1043;
  double t1129;
  double t1538;
  double t8;
  double t1690;
  double t1693;
  double t1768;
  double t1836;
  double t1858;
  double t1861;
  double t1868;
  double t1872;
  double t1873;
  double t1887;
  double t2052;
  double t1917;
  double t1922;
  double t1926;
  double t1936;
  double t1946;
  double t1978;
  double t2093;
  double t2098;
  double t2100;
  double t2106;
  double t2205;
  double t2206;
  double t2209;
  double t2212;
  double t2213;
  double t2215;
  double t1421;
  double t1524;
  double t1280;
  double t1374;
  double t1780;
  double t1794;
  double t1831;
  double t1578;
  double t1600;
  double t1619;
  double t1636;
  double t1642;
  double t2121;
  double t2131;
  double t2159;
  double t2172;
  double t2198;
  double t2384;
  double t2397;
  double t2406;
  double t2415;
  double t2437;
  double t2449;
  double t2033;
  double t2042;
  double t2064;
  double t2072;
  double t2081;
  double t1885;
  double t1902;
  double t1913;
  double t2489;
  double t2511;
  double t2519;
  double t2529;
  double t2535;
  double t2545;
  double t2296;
  double t2309;
  double t2581;
  double t2585;
  double t2611;
  double t2237;
  double t2249;
  double t2700;
  double t2409;
  double t2465;
  double t2521;
  double t2550;
  double t2614;
  double t2615;
  double t2629;
  double t2633;
  double t2641;
  double t2648;
  double t2650;
  double t2651;
  double t2652;
  double t2661;
  double t2679;
  double t2682;
  double t2683;
  double t2686;
  double t2689;
  double t2697;
  double t2808;
  double t2814;
  double t2815;
  double t2823;
  double t2830;
  double t2831;
  double t2839;
  double t2841;
  double t2844;
  double t2848;
  double t2869;
  double t2870;
  double t2876;
  double t2880;
  double t2947;
  double t2948;
  double t2950;
  double t2951;
  double t2959;
  double t2961;
  double t2963;
  double t3000;
  double t3001;
  double t3003;
  double t3005;
  double t260;
  double t578;
  double t836;
  double t1048;
  double t1061;
  double t3046;
  double t3056;
  double t3054;
  double t3057;
  double t3063;
  double t3072;
  double t3074;
  double t3075;
  double t3087;
  double t3088;
  double t3091;
  double t3095;
  double t3096;
  double t3103;
  double t3109;
  double t3112;
  double t3116;
  double t3117;
  double t3121;
  double t3123;
  double t3129;
  double t3137;
  double t3162;
  double t3177;
  double t3181;
  double t3184;
  double t3263;
  double t3269;
  double t3273;
  double t3279;
  double t3280;
  double t3283;
  double t3285;
  double t3286;
  double t3290;
  double t3292;
  double t3295;
  double t3297;
  double t3298;
  double t3299;
  double t3303;
  double t3304;
  double t3305;
  double t3306;
  double t3373;
  double t3375;
  double t3378;
  double t3385;
  double t3386;
  double t3390;
  double t3393;
  double t3398;
  double t3399;
  double t3402;
  double t3406;
  double t3408;
  double t3410;
  double t3411;
  double t3412;
  double t3414;
  double t3418;
  double t3419;
  double t3423;
  double t3426;
  double t3429;
  double t2701;
  double t2711;
  double t2725;
  double t3469;
  double t3473;
  double t3474;
  double t3485;
  double t3486;
  double t3491;
  double t3493;
  double t3500;
  double t3505;
  double t3508;
  double t3513;
  double t3514;
  double t3519;
  double t3527;
  double t3529;
  double t3544;
  double t2761;
  double t2767;
  double t2774;
  double t2786;
  double t2787;
  double t2791;
  double t2792;
  double t2795;
  double t3603;
  double t3604;
  double t3605;
  double t3608;
  double t3609;
  double t3611;
  double t3614;
  double t3615;
  double t3616;
  double t3617;
  double t3620;
  double t3621;
  double t3622;
  double t3623;
  double t2926;
  double t2937;
  double t2942;
  double t2953;
  double t2954;
  double t2976;
  double t2980;
  double t2989;
  double t3677;
  double t3680;
  double t3683;
  double t3684;
  double t3692;
  double t3694;
  double t3696;
  double t3698;
  double t3702;
  double t3706;
  double t3708;
  double t3713;
  double t3863;
  double t3864;
  double t3867;
  double t3878;
  double t3879;
  double t3880;
  double t3883;
  double t3886;
  double t3887;
  double t3888;
  double t3893;
  double t3900;
  double t3901;
  double t3902;
  double t3906;
  double t3910;
  double t3917;
  double t3921;
  double t3956;
  double t3957;
  double t3961;
  double t3967;
  double t3968;
  double t3971;
  double t3981;
  double t3988;
  double t4003;
  double t4013;
  double t4018;
  double t4022;
  double t4026;
  double t4027;
  double t4038;
  double t4039;
  double t4044;
  double t4094;
  double t4095;
  double t4096;
  double t4099;
  double t4100;
  double t4109;
  double t4110;
  double t4118;
  double t4120;
  double t4122;
  double t4127;
  double t4129;
  double t4130;
  double t4133;
  double t4136;
  double t4139;
  double t4211;
  double t4212;
  double t4213;
  double t4218;
  double t4220;
  double t4224;
  double t4231;
  double t4234;
  double t4236;
  double t4238;
  double t4239;
  double t4240;
  double t4244;
  double t4311;
  double t4312;
  double t4319;
  double t4327;
  double t4329;
  double t4330;
  double t4332;
  double t4339;
  double t4340;
  double t4341;
  double t4344;
  t418 = Cos(var1[10]);
  t1223 = Cos(var1[9]);
  t1226 = -1.*t1223;
  t1243 = 1. + t1226;
  t1289 = Sin(var1[9]);
  t1309 = -0.15121*t1289;
  t1383 = Sin(var1[4]);
  t515 = -1.*t418;
  t529 = 1. + t515;
  t609 = -1. + t418;
  t1043 = Sin(var1[10]);
  t1129 = Cos(var1[5]);
  t1538 = Sin(var1[5]);
  t8 = Cos(var1[4]);
  t1690 = t1129*t1289*t1383;
  t1693 = t1223*t1383*t1538;
  t1768 = t1690 + t1693;
  t1836 = -1.*t1223*t1129*t1383;
  t1858 = t1289*t1383*t1538;
  t1861 = t1836 + t1858;
  t1868 = Cos(var1[11]);
  t1872 = -1.*t1868;
  t1873 = 1. + t1872;
  t1887 = Sin(var1[11]);
  t2052 = -1. + t1868;
  t1917 = t8*t1043;
  t1922 = -4.e-6*t1043*t1768;
  t1926 = -1.000000000016*t529;
  t1936 = 1. + t1926;
  t1946 = t1936*t1861;
  t1978 = t1917 + t1922 + t1946;
  t2093 = t418*t8;
  t2098 = 4.e-6*t529*t1768;
  t2100 = -1.*t1043*t1861;
  t2106 = t2093 + t2098 + t2100;
  t2205 = 4.e-6*t529*t8;
  t2206 = 1.6e-11*t609;
  t2209 = 1. + t2206;
  t2212 = t2209*t1768;
  t2213 = 4.e-6*t1043*t1861;
  t2215 = t2205 + t2212 + t2213;
  t1421 = -0.15121*t1243;
  t1524 = t1421 + t1309;
  t1280 = 0.15121*t1243;
  t1374 = t1280 + t1309;
  t1780 = 0.281210000008499*t529;
  t1794 = -0.03874900000062*t1043;
  t1831 = t1780 + t1794;
  t1578 = -1.2484e-7*var1[10];
  t1600 = 2.479936e-18*t529;
  t1619 = -1.54996e-7*t609;
  t1636 = 1.124840000016e-6*t1043;
  t1642 = t1578 + t1600 + t1619 + t1636;
  t2121 = -1.26e-8*var1[11];
  t2131 = 2.552896e-18*t1873;
  t2159 = -1.59556e-7*t2052;
  t2172 = 2.012600000032e-6*t1887;
  t2198 = t2121 + t2131 + t2159 + t2172;
  t2384 = -1.*t8*t1129*t1289;
  t2397 = -1.*t1223*t8*t1538;
  t2406 = t2384 + t2397;
  t2415 = -1.*t1223*t8*t1129;
  t2437 = t8*t1289*t1538;
  t2449 = t2415 + t2437;
  t2033 = -5.04e-14*var1[11];
  t2042 = -0.039889*t1873;
  t2064 = 6.38224e-13*t2052;
  t2072 = -0.503150000008*t1887;
  t2081 = t2033 + t2042 + t2064 + t2072;
  t1885 = 0.50315000001605*t1873;
  t1902 = -0.0398890000006382*t1887;
  t1913 = t1885 + t1902;
  t2489 = 4.e-6*t1043*t2406;
  t2511 = t2209*t2449;
  t2519 = t2489 + t2511;
  t2529 = -1.*t1043*t2406;
  t2535 = 4.e-6*t529*t2449;
  t2545 = t2529 + t2535;
  t2296 = -1.000000000016*t1873;
  t2309 = 1. + t2296;
  t2581 = t1936*t2406;
  t2585 = -4.e-6*t1043*t2449;
  t2611 = t2581 + t2585;
  t2237 = 1.6e-11*t2052;
  t2249 = 1. + t2237;
  t2700 = -0.15121*t1223;
  t2409 = t1831*t2406;
  t2465 = t1642*t2449;
  t2521 = t2198*t2519;
  t2550 = t2081*t2545;
  t2614 = t1913*t2611;
  t2615 = -4.e-6*t1887*t2519;
  t2629 = t1887*t2545;
  t2633 = t2309*t2611;
  t2641 = t2615 + t2629 + t2633;
  t2648 = 0.803147*t2641;
  t2650 = 4.e-6*t1873*t2519;
  t2651 = t1868*t2545;
  t2652 = -1.*t1887*t2611;
  t2661 = t2650 + t2651 + t2652;
  t2679 = -0.041195*t2661;
  t2682 = t2249*t2519;
  t2683 = 4.e-6*t1873*t2545;
  t2686 = 4.e-6*t1887*t2611;
  t2689 = t2682 + t2683 + t2686;
  t2697 = -0.14871*t2689;
  t2808 = t1223*t8*t1129;
  t2814 = -1.*t8*t1289*t1538;
  t2815 = t2808 + t2814;
  t2823 = -1.*t1043*t1383;
  t2830 = -1.*t418*t2815;
  t2831 = t2823 + t2489 + t2830;
  t2839 = 4.e-6*t1043*t1383;
  t2841 = -1.6e-11*t1043*t2406;
  t2844 = 4.e-6*t418*t2815;
  t2848 = t2839 + t2841 + t2844;
  t2869 = t418*t1383;
  t2870 = -4.e-6*t418*t2406;
  t2876 = -1.000000000016*t1043*t2815;
  t2880 = t2869 + t2870 + t2876;
  t2947 = t1043*t1383;
  t2948 = -4.e-6*t1043*t2406;
  t2950 = t1936*t2815;
  t2951 = t2947 + t2948 + t2950;
  t2959 = 4.e-6*t529*t2406;
  t2961 = -1.*t1043*t2815;
  t2963 = t2869 + t2959 + t2961;
  t3000 = 4.e-6*t529*t1383;
  t3001 = t2209*t2406;
  t3003 = 4.e-6*t1043*t2815;
  t3005 = t3000 + t3001 + t3003;
  t260 = -4.9936e-13*var1[10];
  t578 = -0.038749*t529;
  t836 = 6.19984e-13*t609;
  t1048 = -0.281210000004*t1043;
  t1061 = t260 + t578 + t836 + t1048;
  t3046 = Cos(var1[3]);
  t3056 = Sin(var1[3]);
  t3054 = t3046*t1129*t1383;
  t3057 = -1.*t3056*t1538;
  t3063 = t3054 + t3057;
  t3072 = -1.*t1129*t3056;
  t3074 = -1.*t3046*t1383*t1538;
  t3075 = t3072 + t3074;
  t3087 = -1.*t1289*t3063;
  t3088 = t1223*t3075;
  t3091 = t3087 + t3088;
  t3095 = t1223*t3063;
  t3096 = t1289*t3075;
  t3103 = t3095 + t3096;
  t3109 = -1.*t3046*t8*t1043;
  t3112 = -4.e-6*t1043*t3091;
  t3116 = t1936*t3103;
  t3117 = t3109 + t3112 + t3116;
  t3121 = -1.*t418*t3046*t8;
  t3123 = 4.e-6*t529*t3091;
  t3129 = -1.*t1043*t3103;
  t3137 = t3121 + t3123 + t3129;
  t3162 = -4.e-6*t529*t3046*t8;
  t3177 = t2209*t3091;
  t3181 = 4.e-6*t1043*t3103;
  t3184 = t3162 + t3177 + t3181;
  t3263 = -1.*t8*t1129*t1289*t3056;
  t3269 = -1.*t1223*t8*t3056*t1538;
  t3273 = t3263 + t3269;
  t3279 = t1223*t8*t1129*t3056;
  t3280 = -1.*t8*t1289*t3056*t1538;
  t3283 = t3279 + t3280;
  t3285 = t1043*t3056*t1383;
  t3286 = -4.e-6*t1043*t3273;
  t3290 = t1936*t3283;
  t3292 = t3285 + t3286 + t3290;
  t3295 = t418*t3056*t1383;
  t3297 = 4.e-6*t529*t3273;
  t3298 = -1.*t1043*t3283;
  t3299 = t3295 + t3297 + t3298;
  t3303 = 4.e-6*t529*t3056*t1383;
  t3304 = t2209*t3273;
  t3305 = 4.e-6*t1043*t3283;
  t3306 = t3303 + t3304 + t3305;
  t3373 = -1.*t1129*t3056*t1383;
  t3375 = -1.*t3046*t1538;
  t3378 = t3373 + t3375;
  t3385 = t3046*t1129;
  t3386 = -1.*t3056*t1383*t1538;
  t3390 = t3385 + t3386;
  t3393 = t1289*t3378;
  t3398 = t1223*t3390;
  t3399 = t3393 + t3398;
  t3402 = t1223*t3378;
  t3406 = -1.*t1289*t3390;
  t3408 = t3402 + t3406;
  t3410 = 4.e-6*t1043*t3399;
  t3411 = t2209*t3408;
  t3412 = t3410 + t3411;
  t3414 = -1.*t1043*t3399;
  t3418 = 4.e-6*t529*t3408;
  t3419 = t3414 + t3418;
  t3423 = t1936*t3399;
  t3426 = -4.e-6*t1043*t3408;
  t3429 = t3423 + t3426;
  t2701 = 0.15121*t1289;
  t2711 = t2700 + t2701;
  t2725 = t2700 + t1309;
  t3469 = t1129*t3056*t1383;
  t3473 = t3046*t1538;
  t3474 = t3469 + t3473;
  t3485 = -1.*t1289*t3474;
  t3486 = t3485 + t3398;
  t3491 = -1.*t1223*t3474;
  t3493 = t3491 + t3406;
  t3500 = 4.e-6*t1043*t3486;
  t3505 = t2209*t3493;
  t3508 = t3500 + t3505;
  t3513 = -1.*t1043*t3486;
  t3514 = 4.e-6*t529*t3493;
  t3519 = t3513 + t3514;
  t3527 = t1936*t3486;
  t3529 = -4.e-6*t1043*t3493;
  t3544 = t3527 + t3529;
  t2761 = -0.281210000004*t418;
  t2767 = -4.9936e-13 + t2761 + t1794;
  t2774 = 1.124840000016e-6*t418;
  t2786 = 1.5499600000248e-7*t1043;
  t2787 = -1.2484e-7 + t2774 + t2786;
  t2791 = -0.03874900000062*t418;
  t2792 = 0.281210000008499*t1043;
  t2795 = t2791 + t2792;
  t3603 = t1223*t3474;
  t3604 = t1289*t3390;
  t3605 = t3603 + t3604;
  t3608 = t8*t1043*t3056;
  t3609 = -1.*t418*t3605;
  t3611 = t3608 + t3500 + t3609;
  t3614 = -4.e-6*t8*t1043*t3056;
  t3615 = -1.6e-11*t1043*t3486;
  t3616 = 4.e-6*t418*t3605;
  t3617 = t3614 + t3615 + t3616;
  t3620 = -1.*t418*t8*t3056;
  t3621 = -4.e-6*t418*t3486;
  t3622 = -1.000000000016*t1043*t3605;
  t3623 = t3620 + t3621 + t3622;
  t2926 = -0.0398890000006382*t1868;
  t2937 = 0.50315000001605*t1887;
  t2942 = t2926 + t2937;
  t2953 = -0.503150000008*t1868;
  t2954 = -5.04e-14 + t2953 + t1902;
  t2976 = 2.012600000032e-6*t1868;
  t2980 = 1.59556000002553e-7*t1887;
  t2989 = -1.26e-8 + t2976 + t2980;
  t3677 = -1.*t8*t1043*t3056;
  t3680 = -4.e-6*t1043*t3486;
  t3683 = t1936*t3605;
  t3684 = t3677 + t3680 + t3683;
  t3692 = 4.e-6*t529*t3486;
  t3694 = -1.*t1043*t3605;
  t3696 = t3620 + t3692 + t3694;
  t3698 = -4.e-6*t529*t8*t3056;
  t3702 = t2209*t3486;
  t3706 = 4.e-6*t1043*t3605;
  t3708 = t3698 + t3702 + t3706;
  t3713 = t1868*t3696;
  t3863 = t3046*t8*t1129*t1289;
  t3864 = t1223*t3046*t8*t1538;
  t3867 = t3863 + t3864;
  t3878 = -1.*t1223*t3046*t8*t1129;
  t3879 = t3046*t8*t1289*t1538;
  t3880 = t3878 + t3879;
  t3883 = -1.*t3046*t1043*t1383;
  t3886 = -4.e-6*t1043*t3867;
  t3887 = t1936*t3880;
  t3888 = t3883 + t3886 + t3887;
  t3893 = -1.*t418*t3046*t1383;
  t3900 = 4.e-6*t529*t3867;
  t3901 = -1.*t1043*t3880;
  t3902 = t3893 + t3900 + t3901;
  t3906 = -4.e-6*t529*t3046*t1383;
  t3910 = t2209*t3867;
  t3917 = 4.e-6*t1043*t3880;
  t3921 = t3906 + t3910 + t3917;
  t3956 = t1129*t3056;
  t3957 = t3046*t1383*t1538;
  t3961 = t3956 + t3957;
  t3967 = t1289*t3063;
  t3968 = t1223*t3961;
  t3971 = t3967 + t3968;
  t3981 = -1.*t1289*t3961;
  t3988 = t3095 + t3981;
  t4003 = 4.e-6*t1043*t3971;
  t4013 = t2209*t3988;
  t4018 = t4003 + t4013;
  t4022 = -1.*t1043*t3971;
  t4026 = 4.e-6*t529*t3988;
  t4027 = t4022 + t4026;
  t4038 = t1936*t3971;
  t4039 = -4.e-6*t1043*t3988;
  t4044 = t4038 + t4039;
  t4094 = -1.*t3046*t1129*t1383;
  t4095 = t3056*t1538;
  t4096 = t4094 + t4095;
  t4099 = -1.*t1289*t4096;
  t4100 = t4099 + t3968;
  t4109 = -1.*t1223*t4096;
  t4110 = t4109 + t3981;
  t4118 = 4.e-6*t1043*t4100;
  t4120 = t2209*t4110;
  t4122 = t4118 + t4120;
  t4127 = -1.*t1043*t4100;
  t4129 = 4.e-6*t529*t4110;
  t4130 = t4127 + t4129;
  t4133 = t1936*t4100;
  t4136 = -4.e-6*t1043*t4110;
  t4139 = t4133 + t4136;
  t4211 = t1223*t4096;
  t4212 = t1289*t3961;
  t4213 = t4211 + t4212;
  t4218 = -1.*t418*t4213;
  t4220 = t3109 + t4118 + t4218;
  t4224 = 4.e-6*t3046*t8*t1043;
  t4231 = -1.6e-11*t1043*t4100;
  t4234 = 4.e-6*t418*t4213;
  t4236 = t4224 + t4231 + t4234;
  t4238 = t418*t3046*t8;
  t4239 = -4.e-6*t418*t4100;
  t4240 = -1.000000000016*t1043*t4213;
  t4244 = t4238 + t4239 + t4240;
  t4311 = t3046*t8*t1043;
  t4312 = -4.e-6*t1043*t4100;
  t4319 = t1936*t4213;
  t4327 = t4311 + t4312 + t4319;
  t4329 = 4.e-6*t529*t4100;
  t4330 = -1.*t1043*t4213;
  t4332 = t4238 + t4329 + t4330;
  t4339 = 4.e-6*t529*t3046*t8;
  t4340 = t2209*t4100;
  t4341 = 4.e-6*t1043*t4213;
  t4344 = t4339 + t4340 + t4341;
  p_output1[0]=1.;
  p_output1[1]=-1.*t1129*t1374*t1383 + t1383*t1524*t1538 + t1642*t1768 + t1831*t1861 + t1913*t1978 + t2081*t2106 + t2198*t2215 - 0.041195*(-1.*t1887*t1978 + t1868*t2106 + 4.e-6*t1873*t2215) - 0.14871*(4.e-6*t1887*t1978 + 4.e-6*t1873*t2106 + t2215*t2249) + 0.803147*(t1887*t2106 - 4.e-6*t1887*t2215 + t1978*t2309) + t1061*t8;
  p_output1[2]=t2409 + t2465 + t2521 + t2550 + t2614 + t2648 + t2679 + t2697 - 1.*t1129*t1524*t8 - 1.*t1374*t1538*t8;
  p_output1[3]=t2409 + t2465 + t2521 + t2550 + t2614 + t2648 + t2679 + t2697 + t1129*t2711*t8 - 1.*t1538*t2725*t8;
  p_output1[4]=t1383*t2767 + t2406*t2787 + t2795*t2815 + t2081*t2831 + t2198*t2848 + t1913*t2880 - 0.041195*(t1868*t2831 + 4.e-6*t1873*t2848 - 1.*t1887*t2880) - 0.14871*(4.e-6*t1873*t2831 + t2249*t2848 + 4.e-6*t1887*t2880) + 0.803147*(t1887*t2831 - 4.e-6*t1887*t2848 + t2309*t2880);
  p_output1[5]=t2942*t2951 + t2954*t2963 + t2989*t3005 + 0.803147*(-1.000000000016*t1887*t2951 + t1868*t2963 - 4.e-6*t1868*t3005) - 0.14871*(4.e-6*t1868*t2951 + 4.e-6*t1887*t2963 - 1.6e-11*t1887*t3005) - 0.041195*(-1.*t1868*t2951 - 1.*t1887*t2963 + 4.e-6*t1887*t3005);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t1374*t3063 + t1524*t3075 + t1642*t3091 + t1831*t3103 + t1913*t3117 + t2081*t3137 + t2198*t3184 - 0.041195*(-1.*t1887*t3117 + t1868*t3137 + 4.e-6*t1873*t3184) + 0.803147*(t2309*t3117 + t1887*t3137 - 4.e-6*t1887*t3184) - 0.14871*(4.e-6*t1887*t3117 + 4.e-6*t1873*t3137 + t2249*t3184) - 1.*t1061*t3046*t8;
  p_output1[9]=t1061*t1383*t3056 + t1642*t3273 + t1831*t3283 + t1913*t3292 + t2081*t3299 + t2198*t3306 - 0.041195*(-1.*t1887*t3292 + t1868*t3299 + 4.e-6*t1873*t3306) + 0.803147*(t2309*t3292 + t1887*t3299 - 4.e-6*t1887*t3306) - 0.14871*(4.e-6*t1887*t3292 + 4.e-6*t1873*t3299 + t2249*t3306) + t1129*t1374*t3056*t8 - 1.*t1524*t1538*t3056*t8;
  p_output1[10]=t1524*t3378 + t1374*t3390 + t1831*t3399 + t1642*t3408 + t2198*t3412 + t2081*t3419 + t1913*t3429 - 0.041195*(4.e-6*t1873*t3412 + t1868*t3419 - 1.*t1887*t3429) - 0.14871*(t2249*t3412 + 4.e-6*t1873*t3419 + 4.e-6*t1887*t3429) + 0.803147*(-4.e-6*t1887*t3412 + t1887*t3419 + t2309*t3429);
  p_output1[11]=t2725*t3390 + t2711*t3474 + t1831*t3486 + t1642*t3493 + t2198*t3508 + t2081*t3519 + t1913*t3544 - 0.041195*(4.e-6*t1873*t3508 + t1868*t3519 - 1.*t1887*t3544) - 0.14871*(t2249*t3508 + 4.e-6*t1873*t3519 + 4.e-6*t1887*t3544) + 0.803147*(-4.e-6*t1887*t3508 + t1887*t3519 + t2309*t3544);
  p_output1[12]=t2787*t3486 + t2795*t3605 + t2081*t3611 + t2198*t3617 + t1913*t3623 - 0.041195*(t1868*t3611 + 4.e-6*t1873*t3617 - 1.*t1887*t3623) - 0.14871*(4.e-6*t1873*t3611 + t2249*t3617 + 4.e-6*t1887*t3623) + 0.803147*(t1887*t3611 - 4.e-6*t1887*t3617 + t2309*t3623) - 1.*t2767*t3056*t8;
  p_output1[13]=t2942*t3684 + t2954*t3696 + t2989*t3708 - 0.14871*(4.e-6*t1868*t3684 + 4.e-6*t1887*t3696 - 1.6e-11*t1887*t3708) - 0.041195*(-1.*t1868*t3684 - 1.*t1887*t3696 + 4.e-6*t1887*t3708) + 0.803147*(-1.000000000016*t1887*t3684 - 4.e-6*t1868*t3708 + t3713);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t1524*t3390 + t1374*t3474 + t1642*t3486 + t1831*t3605 + t1913*t3684 + t2081*t3696 + t2198*t3708 + 0.803147*(t2309*t3684 + t1887*t3696 - 4.e-6*t1887*t3708) - 0.14871*(4.e-6*t1887*t3684 + 4.e-6*t1873*t3696 + t2249*t3708) - 0.041195*(-1.*t1887*t3684 + 4.e-6*t1873*t3708 + t3713) - 1.*t1061*t3056*t8;
  p_output1[17]=-1.*t1061*t1383*t3046 + t1642*t3867 + t1831*t3880 + t1913*t3888 + t2081*t3902 + t2198*t3921 - 0.041195*(-1.*t1887*t3888 + t1868*t3902 + 4.e-6*t1873*t3921) + 0.803147*(t2309*t3888 + t1887*t3902 - 4.e-6*t1887*t3921) - 0.14871*(4.e-6*t1887*t3888 + 4.e-6*t1873*t3902 + t2249*t3921) - 1.*t1129*t1374*t3046*t8 + t1524*t1538*t3046*t8;
  p_output1[18]=t1524*t3063 + t1374*t3961 + t1831*t3971 + t1642*t3988 + t2198*t4018 + t2081*t4027 + t1913*t4044 - 0.041195*(4.e-6*t1873*t4018 + t1868*t4027 - 1.*t1887*t4044) - 0.14871*(t2249*t4018 + 4.e-6*t1873*t4027 + 4.e-6*t1887*t4044) + 0.803147*(-4.e-6*t1887*t4018 + t1887*t4027 + t2309*t4044);
  p_output1[19]=t2725*t3961 + t2711*t4096 + t1831*t4100 + t1642*t4110 + t2198*t4122 + t2081*t4130 + t1913*t4139 - 0.041195*(4.e-6*t1873*t4122 + t1868*t4130 - 1.*t1887*t4139) - 0.14871*(t2249*t4122 + 4.e-6*t1873*t4130 + 4.e-6*t1887*t4139) + 0.803147*(-4.e-6*t1887*t4122 + t1887*t4130 + t2309*t4139);
  p_output1[20]=t2787*t4100 + t2795*t4213 + t2081*t4220 + t2198*t4236 + t1913*t4244 - 0.041195*(t1868*t4220 + 4.e-6*t1873*t4236 - 1.*t1887*t4244) - 0.14871*(4.e-6*t1873*t4220 + t2249*t4236 + 4.e-6*t1887*t4244) + 0.803147*(t1887*t4220 - 4.e-6*t1887*t4236 + t2309*t4244) + t2767*t3046*t8;
  p_output1[21]=t2942*t4327 + t2954*t4332 + t2989*t4344 + 0.803147*(-1.000000000016*t1887*t4327 + t1868*t4332 - 4.e-6*t1868*t4344) - 0.14871*(4.e-6*t1868*t4327 + 4.e-6*t1887*t4332 - 1.6e-11*t1887*t4344) - 0.041195*(-1.*t1868*t4327 - 1.*t1887*t4332 + 4.e-6*t1887*t4344);
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

#include "J_h_FrFoot_ParallelStance1.hh"

namespace ParallelStance1
{

void J_h_FrFoot_ParallelStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
