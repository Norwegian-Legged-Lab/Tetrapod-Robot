/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:18:56 GMT+01:00
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
  double t47;
  double t183;
  double t487;
  double t662;
  double t580;
  double t630;
  double t707;
  double t1274;
  double t219;
  double t640;
  double t742;
  double t750;
  double t901;
  double t1051;
  double t1108;
  double t1288;
  double t1338;
  double t1508;
  double t1532;
  double t1590;
  double t1613;
  double t1615;
  double t1723;
  double t2078;
  double t2080;
  double t2087;
  double t2091;
  double t2130;
  double t2149;
  double t2170;
  double t2173;
  double t2105;
  double t2361;
  double t2380;
  double t2354;
  double t2359;
  double t2404;
  double t2412;
  double t2414;
  double t2459;
  double t2530;
  double t2534;
  double t2556;
  double t2609;
  double t2613;
  double t2616;
  double t2620;
  double t2621;
  double t2674;
  double t2679;
  double t2858;
  double t2862;
  double t2872;
  double t195;
  double t1789;
  double t1842;
  double t1982;
  double t2037;
  double t2058;
  double t2994;
  double t2996;
  double t3002;
  double t1251;
  double t1437;
  double t1531;
  double t1533;
  double t1570;
  double t2099;
  double t2121;
  double t3018;
  double t3024;
  double t3046;
  double t3053;
  double t3058;
  double t2200;
  double t2204;
  double t3062;
  double t3068;
  double t3071;
  double t2273;
  double t2278;
  double t3168;
  double t2921;
  double t2934;
  double t2941;
  double t2947;
  double t2955;
  double t2958;
  double t2974;
  double t2987;
  double t3006;
  double t3028;
  double t3061;
  double t3073;
  double t3083;
  double t3084;
  double t3086;
  double t3087;
  double t3096;
  double t3103;
  double t3105;
  double t3110;
  double t3116;
  double t3122;
  double t3135;
  double t3142;
  double t3147;
  double t3152;
  double t3156;
  double t2884;
  double t2894;
  double t2870;
  double t2878;
  double t3247;
  double t3251;
  double t3252;
  double t3258;
  double t3260;
  double t3264;
  double t3267;
  double t3268;
  double t3273;
  double t3276;
  double t3303;
  double t3311;
  double t3312;
  double t3320;
  double t3327;
  double t3337;
  double t3340;
  double t3346;
  double t3210;
  double t3220;
  double t3221;
  double t3224;
  double t3227;
  double t3423;
  double t3443;
  double t3450;
  double t3453;
  double t3463;
  double t3466;
  double t3469;
  double t3478;
  double t3480;
  double t3487;
  double t3495;
  double t3499;
  double t3507;
  double t3511;
  double t3519;
  double t3526;
  double t3539;
  double t3542;
  double t3543;
  double t3608;
  double t3613;
  double t3615;
  double t3618;
  double t3633;
  double t3640;
  double t3641;
  double t3643;
  double t3644;
  double t3649;
  double t3653;
  double t3656;
  double t3660;
  double t3662;
  double t3663;
  double t3668;
  double t3669;
  double t3672;
  double t3674;
  double t3680;
  double t3684;
  double t3687;
  double t3691;
  double t3694;
  double t3695;
  double t3754;
  double t3761;
  double t3765;
  double t3774;
  double t3778;
  double t3783;
  double t3790;
  double t3791;
  double t3793;
  double t3810;
  double t3820;
  double t3823;
  double t3836;
  double t3838;
  double t3842;
  double t3850;
  double t3851;
  double t3855;
  double t3870;
  double t3874;
  double t3879;
  double t3169;
  double t3175;
  double t3185;
  double t3944;
  double t3947;
  double t3948;
  double t3962;
  double t3963;
  double t3969;
  double t3972;
  double t3979;
  double t3980;
  double t3983;
  double t3994;
  double t3995;
  double t3996;
  double t4000;
  double t4002;
  double t4003;
  double t124;
  double t198;
  double t344;
  double t359;
  double t420;
  double t815;
  double t832;
  double t887;
  double t4086;
  double t4087;
  double t4088;
  double t4093;
  double t4094;
  double t4098;
  double t4103;
  double t4110;
  double t4116;
  double t4121;
  double t4126;
  double t4128;
  double t4137;
  double t4139;
  double t2342;
  double t2344;
  double t2351;
  double t2502;
  double t2507;
  double t2579;
  double t2580;
  double t2590;
  double t4193;
  double t4202;
  double t4204;
  double t4215;
  double t4219;
  double t4227;
  double t4233;
  double t4238;
  double t4239;
  double t4245;
  double t4251;
  double t4350;
  double t4355;
  double t4357;
  double t4360;
  double t4361;
  double t4363;
  double t4370;
  double t4374;
  double t4375;
  double t4377;
  double t4379;
  double t4380;
  double t4381;
  double t4383;
  double t4386;
  double t4390;
  double t4392;
  double t4394;
  double t4468;
  double t4469;
  double t4477;
  double t4485;
  double t4487;
  double t4488;
  double t4493;
  double t4500;
  double t4502;
  double t4507;
  double t4508;
  double t4511;
  double t4513;
  double t4514;
  double t4519;
  double t4523;
  double t4527;
  double t4579;
  double t4583;
  double t4584;
  double t4594;
  double t4595;
  double t4599;
  double t4601;
  double t4603;
  double t4604;
  double t4605;
  double t4609;
  double t4610;
  double t4611;
  double t4613;
  double t4620;
  double t4621;
  double t4698;
  double t4701;
  double t4704;
  double t4719;
  double t4728;
  double t4737;
  double t4739;
  double t4744;
  double t4750;
  double t4760;
  double t4762;
  double t4763;
  double t4765;
  double t4822;
  double t4824;
  double t4826;
  double t4828;
  double t4832;
  double t4836;
  double t4837;
  double t4843;
  double t4846;
  double t4848;
  double t4850;
  double t4270;
  t47 = Cos(var1[10]);
  t183 = Sin(var1[10]);
  t487 = Cos(var1[4]);
  t662 = Cos(var1[9]);
  t580 = Cos(var1[5]);
  t630 = Sin(var1[9]);
  t707 = Sin(var1[5]);
  t1274 = Cos(var1[11]);
  t219 = Sin(var1[4]);
  t640 = -1.*t487*t580*t630;
  t742 = -1.*t662*t487*t707;
  t750 = t640 + t742;
  t901 = t662*t487*t580;
  t1051 = -1.*t487*t630*t707;
  t1108 = t901 + t1051;
  t1288 = -1.*t1274;
  t1338 = 1. + t1288;
  t1508 = -1. + t1274;
  t1532 = Sin(var1[11]);
  t1590 = -1.*t183*t219;
  t1613 = 4.e-6*t183*t750;
  t1615 = -1.*t47*t1108;
  t1723 = t1590 + t1613 + t1615;
  t2078 = 4.e-6*t183*t219;
  t2080 = -1.6e-11*t183*t750;
  t2087 = 4.e-6*t47*t1108;
  t2091 = t2078 + t2080 + t2087;
  t2130 = t47*t219;
  t2149 = -4.e-6*t47*t750;
  t2170 = -1.000000000016*t183*t1108;
  t2173 = t2130 + t2149 + t2170;
  t2105 = -0.0398890000006382*t1532;
  t2361 = -1.*t47;
  t2380 = 1. + t2361;
  t2354 = t183*t219;
  t2359 = -4.e-6*t183*t750;
  t2404 = -1.000000000016*t2380;
  t2412 = 1. + t2404;
  t2414 = t2412*t1108;
  t2459 = t2354 + t2359 + t2414;
  t2530 = 4.e-6*t2380*t750;
  t2534 = -1.*t183*t1108;
  t2556 = t2130 + t2530 + t2534;
  t2609 = 4.e-6*t2380*t219;
  t2613 = -1. + t47;
  t2616 = 1.6e-11*t2613;
  t2620 = 1. + t2616;
  t2621 = t2620*t750;
  t2674 = 4.e-6*t183*t1108;
  t2679 = t2609 + t2621 + t2674;
  t2858 = -1.*t662;
  t2862 = 1. + t2858;
  t2872 = -0.15121*t630;
  t195 = -0.03874900000062*t183;
  t1789 = -1.26e-8*var1[11];
  t1842 = 2.552896e-18*t1338;
  t1982 = -1.59556e-7*t1508;
  t2037 = 2.012600000032e-6*t1532;
  t2058 = t1789 + t1842 + t1982 + t2037;
  t2994 = -1.*t662*t487*t580;
  t2996 = t487*t630*t707;
  t3002 = t2994 + t2996;
  t1251 = -5.04e-14*var1[11];
  t1437 = -0.039889*t1338;
  t1531 = 6.38224e-13*t1508;
  t1533 = -0.503150000008*t1532;
  t1570 = t1251 + t1437 + t1531 + t1533;
  t2099 = 0.50315000001605*t1338;
  t2121 = t2099 + t2105;
  t3018 = t2620*t3002;
  t3024 = t1613 + t3018;
  t3046 = -1.*t183*t750;
  t3053 = 4.e-6*t2380*t3002;
  t3058 = t3046 + t3053;
  t2200 = -1.000000000016*t1338;
  t2204 = 1. + t2200;
  t3062 = t2412*t750;
  t3068 = -4.e-6*t183*t3002;
  t3071 = t3062 + t3068;
  t2273 = 1.6e-11*t1508;
  t2278 = 1. + t2273;
  t3168 = -0.15121*t662;
  t2921 = 0.281210000008499*t2380;
  t2934 = t2921 + t195;
  t2941 = t2934*t750;
  t2947 = -1.2484e-7*var1[10];
  t2955 = 2.479936e-18*t2380;
  t2958 = -1.54996e-7*t2613;
  t2974 = 1.124840000016e-6*t183;
  t2987 = t2947 + t2955 + t2958 + t2974;
  t3006 = t2987*t3002;
  t3028 = t2058*t3024;
  t3061 = t1570*t3058;
  t3073 = t2121*t3071;
  t3083 = -4.e-6*t1532*t3024;
  t3084 = t1532*t3058;
  t3086 = t2204*t3071;
  t3087 = t3083 + t3084 + t3086;
  t3096 = 0.803147*t3087;
  t3103 = 4.e-6*t1338*t3024;
  t3105 = t1274*t3058;
  t3110 = -1.*t1532*t3071;
  t3116 = t3103 + t3105 + t3110;
  t3122 = -0.041195*t3116;
  t3135 = t2278*t3024;
  t3142 = 4.e-6*t1338*t3058;
  t3147 = 4.e-6*t1532*t3071;
  t3152 = t3135 + t3142 + t3147;
  t3156 = -0.14871*t3152;
  t2884 = 0.15121*t2862;
  t2894 = t2884 + t2872;
  t2870 = -0.15121*t2862;
  t2878 = t2870 + t2872;
  t3247 = t580*t630*t219;
  t3251 = t662*t219*t707;
  t3252 = t3247 + t3251;
  t3258 = -1.*t662*t580*t219;
  t3260 = t630*t219*t707;
  t3264 = t3258 + t3260;
  t3267 = t487*t183;
  t3268 = -4.e-6*t183*t3252;
  t3273 = t2412*t3264;
  t3276 = t3267 + t3268 + t3273;
  t3303 = t47*t487;
  t3311 = 4.e-6*t2380*t3252;
  t3312 = -1.*t183*t3264;
  t3320 = t3303 + t3311 + t3312;
  t3327 = 4.e-6*t2380*t487;
  t3337 = t2620*t3252;
  t3340 = 4.e-6*t183*t3264;
  t3346 = t3327 + t3337 + t3340;
  t3210 = -4.9936e-13*var1[10];
  t3220 = -0.038749*t2380;
  t3221 = 6.19984e-13*t2613;
  t3224 = -0.281210000004*t183;
  t3227 = t3210 + t3220 + t3221 + t3224;
  t3423 = Sin(var1[3]);
  t3443 = -1.*t487*t580*t630*t3423;
  t3450 = -1.*t662*t487*t3423*t707;
  t3453 = t3443 + t3450;
  t3463 = t662*t487*t580*t3423;
  t3466 = -1.*t487*t630*t3423*t707;
  t3469 = t3463 + t3466;
  t3478 = t183*t3423*t219;
  t3480 = -4.e-6*t183*t3453;
  t3487 = t2412*t3469;
  t3495 = t3478 + t3480 + t3487;
  t3499 = t47*t3423*t219;
  t3507 = 4.e-6*t2380*t3453;
  t3511 = -1.*t183*t3469;
  t3519 = t3499 + t3507 + t3511;
  t3526 = 4.e-6*t2380*t3423*t219;
  t3539 = t2620*t3453;
  t3542 = 4.e-6*t183*t3469;
  t3543 = t3526 + t3539 + t3542;
  t3608 = Cos(var1[3]);
  t3613 = t3608*t580*t219;
  t3615 = -1.*t3423*t707;
  t3618 = t3613 + t3615;
  t3633 = -1.*t580*t3423;
  t3640 = -1.*t3608*t219*t707;
  t3641 = t3633 + t3640;
  t3643 = -1.*t630*t3618;
  t3644 = t662*t3641;
  t3649 = t3643 + t3644;
  t3653 = t662*t3618;
  t3656 = t630*t3641;
  t3660 = t3653 + t3656;
  t3662 = -1.*t3608*t487*t183;
  t3663 = -4.e-6*t183*t3649;
  t3668 = t2412*t3660;
  t3669 = t3662 + t3663 + t3668;
  t3672 = -1.*t47*t3608*t487;
  t3674 = 4.e-6*t2380*t3649;
  t3680 = -1.*t183*t3660;
  t3684 = t3672 + t3674 + t3680;
  t3687 = -4.e-6*t2380*t3608*t487;
  t3691 = t2620*t3649;
  t3694 = 4.e-6*t183*t3660;
  t3695 = t3687 + t3691 + t3694;
  t3754 = -1.*t580*t3423*t219;
  t3761 = -1.*t3608*t707;
  t3765 = t3754 + t3761;
  t3774 = t3608*t580;
  t3778 = -1.*t3423*t219*t707;
  t3783 = t3774 + t3778;
  t3790 = t630*t3765;
  t3791 = t662*t3783;
  t3793 = t3790 + t3791;
  t3810 = t662*t3765;
  t3820 = -1.*t630*t3783;
  t3823 = t3810 + t3820;
  t3836 = 4.e-6*t183*t3793;
  t3838 = t2620*t3823;
  t3842 = t3836 + t3838;
  t3850 = -1.*t183*t3793;
  t3851 = 4.e-6*t2380*t3823;
  t3855 = t3850 + t3851;
  t3870 = t2412*t3793;
  t3874 = -4.e-6*t183*t3823;
  t3879 = t3870 + t3874;
  t3169 = 0.15121*t630;
  t3175 = t3168 + t3169;
  t3185 = t3168 + t2872;
  t3944 = t580*t3423*t219;
  t3947 = t3608*t707;
  t3948 = t3944 + t3947;
  t3962 = -1.*t630*t3948;
  t3963 = t3962 + t3791;
  t3969 = -1.*t662*t3948;
  t3972 = t3969 + t3820;
  t3979 = 4.e-6*t183*t3963;
  t3980 = t2620*t3972;
  t3983 = t3979 + t3980;
  t3994 = -1.*t183*t3963;
  t3995 = 4.e-6*t2380*t3972;
  t3996 = t3994 + t3995;
  t4000 = t2412*t3963;
  t4002 = -4.e-6*t183*t3972;
  t4003 = t4000 + t4002;
  t124 = -0.281210000004*t47;
  t198 = -4.9936e-13 + t124 + t195;
  t344 = 1.124840000016e-6*t47;
  t359 = 1.5499600000248e-7*t183;
  t420 = -1.2484e-7 + t344 + t359;
  t815 = -0.03874900000062*t47;
  t832 = 0.281210000008499*t183;
  t887 = t815 + t832;
  t4086 = t662*t3948;
  t4087 = t630*t3783;
  t4088 = t4086 + t4087;
  t4093 = t487*t183*t3423;
  t4094 = -1.*t47*t4088;
  t4098 = t4093 + t3979 + t4094;
  t4103 = -4.e-6*t487*t183*t3423;
  t4110 = -1.6e-11*t183*t3963;
  t4116 = 4.e-6*t47*t4088;
  t4121 = t4103 + t4110 + t4116;
  t4126 = -1.*t47*t487*t3423;
  t4128 = -4.e-6*t47*t3963;
  t4137 = -1.000000000016*t183*t4088;
  t4139 = t4126 + t4128 + t4137;
  t2342 = -0.0398890000006382*t1274;
  t2344 = 0.50315000001605*t1532;
  t2351 = t2342 + t2344;
  t2502 = -0.503150000008*t1274;
  t2507 = -5.04e-14 + t2502 + t2105;
  t2579 = 2.012600000032e-6*t1274;
  t2580 = 1.59556000002553e-7*t1532;
  t2590 = -1.26e-8 + t2579 + t2580;
  t4193 = -1.*t487*t183*t3423;
  t4202 = -4.e-6*t183*t3963;
  t4204 = t2412*t4088;
  t4215 = t4193 + t4202 + t4204;
  t4219 = 4.e-6*t2380*t3963;
  t4227 = -1.*t183*t4088;
  t4233 = t4126 + t4219 + t4227;
  t4238 = -4.e-6*t2380*t487*t3423;
  t4239 = t2620*t3963;
  t4245 = 4.e-6*t183*t4088;
  t4251 = t4238 + t4239 + t4245;
  t4350 = t3608*t487*t580*t630;
  t4355 = t662*t3608*t487*t707;
  t4357 = t4350 + t4355;
  t4360 = -1.*t662*t3608*t487*t580;
  t4361 = t3608*t487*t630*t707;
  t4363 = t4360 + t4361;
  t4370 = -1.*t3608*t183*t219;
  t4374 = -4.e-6*t183*t4357;
  t4375 = t2412*t4363;
  t4377 = t4370 + t4374 + t4375;
  t4379 = -1.*t47*t3608*t219;
  t4380 = 4.e-6*t2380*t4357;
  t4381 = -1.*t183*t4363;
  t4383 = t4379 + t4380 + t4381;
  t4386 = -4.e-6*t2380*t3608*t219;
  t4390 = t2620*t4357;
  t4392 = 4.e-6*t183*t4363;
  t4394 = t4386 + t4390 + t4392;
  t4468 = t580*t3423;
  t4469 = t3608*t219*t707;
  t4477 = t4468 + t4469;
  t4485 = t630*t3618;
  t4487 = t662*t4477;
  t4488 = t4485 + t4487;
  t4493 = -1.*t630*t4477;
  t4500 = t3653 + t4493;
  t4502 = 4.e-6*t183*t4488;
  t4507 = t2620*t4500;
  t4508 = t4502 + t4507;
  t4511 = -1.*t183*t4488;
  t4513 = 4.e-6*t2380*t4500;
  t4514 = t4511 + t4513;
  t4519 = t2412*t4488;
  t4523 = -4.e-6*t183*t4500;
  t4527 = t4519 + t4523;
  t4579 = -1.*t3608*t580*t219;
  t4583 = t3423*t707;
  t4584 = t4579 + t4583;
  t4594 = -1.*t630*t4584;
  t4595 = t4594 + t4487;
  t4599 = -1.*t662*t4584;
  t4601 = t4599 + t4493;
  t4603 = 4.e-6*t183*t4595;
  t4604 = t2620*t4601;
  t4605 = t4603 + t4604;
  t4609 = -1.*t183*t4595;
  t4610 = 4.e-6*t2380*t4601;
  t4611 = t4609 + t4610;
  t4613 = t2412*t4595;
  t4620 = -4.e-6*t183*t4601;
  t4621 = t4613 + t4620;
  t4698 = t662*t4584;
  t4701 = t630*t4477;
  t4704 = t4698 + t4701;
  t4719 = -1.*t47*t4704;
  t4728 = t3662 + t4603 + t4719;
  t4737 = 4.e-6*t3608*t487*t183;
  t4739 = -1.6e-11*t183*t4595;
  t4744 = 4.e-6*t47*t4704;
  t4750 = t4737 + t4739 + t4744;
  t4760 = t47*t3608*t487;
  t4762 = -4.e-6*t47*t4595;
  t4763 = -1.000000000016*t183*t4704;
  t4765 = t4760 + t4762 + t4763;
  t4822 = t3608*t487*t183;
  t4824 = -4.e-6*t183*t4595;
  t4826 = t2412*t4704;
  t4828 = t4822 + t4824 + t4826;
  t4832 = 4.e-6*t2380*t4595;
  t4836 = -1.*t183*t4704;
  t4837 = t4760 + t4832 + t4836;
  t4843 = 4.e-6*t2380*t3608*t487;
  t4846 = t2620*t4595;
  t4848 = 4.e-6*t183*t4704;
  t4850 = t4843 + t4846 + t4848;
  t4270 = t1274*t4233;
  p_output1[0]=var2[0] + (t2987*t3252 + t2934*t3264 + t2121*t3276 + t1570*t3320 + t2058*t3346 - 0.041195*(-1.*t1532*t3276 + t1274*t3320 + 4.e-6*t1338*t3346) + 0.803147*(t2204*t3276 + t1532*t3320 - 4.e-6*t1532*t3346) - 0.14871*(4.e-6*t1532*t3276 + 4.e-6*t1338*t3320 + t2278*t3346) + t3227*t487 - 1.*t219*t2894*t580 + t219*t2878*t707)*var2[4] + (t2941 + t3006 + t3028 + t3061 + t3073 + t3096 + t3122 + t3156 - 1.*t2878*t487*t580 - 1.*t2894*t487*t707)*var2[5] + (t2941 + t3006 + t3028 + t3061 + t3073 + t3096 + t3122 + t3156 + t3175*t487*t580 - 1.*t3185*t487*t707)*var2[9] + (t1570*t1723 + t2058*t2091 + t2121*t2173 - 0.041195*(t1274*t1723 + 4.e-6*t1338*t2091 - 1.*t1532*t2173) + t198*t219 + 0.803147*(t1532*t1723 - 4.e-6*t1532*t2091 + t2173*t2204) - 0.14871*(4.e-6*t1338*t1723 + 4.e-6*t1532*t2173 + t2091*t2278) + t420*t750 + t1108*t887)*var2[10] + (t2351*t2459 + t2507*t2556 + t2590*t2679 + 0.803147*(-1.000000000016*t1532*t2459 + t1274*t2556 - 4.e-6*t1274*t2679) - 0.14871*(4.e-6*t1274*t2459 + 4.e-6*t1532*t2556 - 1.6e-11*t1532*t2679) - 0.041195*(-1.*t1274*t2459 - 1.*t1532*t2556 + 4.e-6*t1532*t2679))*var2[11];
  p_output1[1]=var2[1] + (t2894*t3618 + t2878*t3641 + t2987*t3649 + t2934*t3660 + t2121*t3669 + t1570*t3684 + t2058*t3695 - 0.041195*(-1.*t1532*t3669 + t1274*t3684 + 4.e-6*t1338*t3695) + 0.803147*(t2204*t3669 + t1532*t3684 - 4.e-6*t1532*t3695) - 0.14871*(4.e-6*t1532*t3669 + 4.e-6*t1338*t3684 + t2278*t3695) - 1.*t3227*t3608*t487)*var2[3] + (t219*t3227*t3423 + t2987*t3453 + t2934*t3469 + t2121*t3495 + t1570*t3519 + t2058*t3543 - 0.041195*(-1.*t1532*t3495 + t1274*t3519 + 4.e-6*t1338*t3543) + 0.803147*(t2204*t3495 + t1532*t3519 - 4.e-6*t1532*t3543) - 0.14871*(4.e-6*t1532*t3495 + 4.e-6*t1338*t3519 + t2278*t3543) + t2894*t3423*t487*t580 - 1.*t2878*t3423*t487*t707)*var2[4] + (t2878*t3765 + t2894*t3783 + t2934*t3793 + t2987*t3823 + t2058*t3842 + t1570*t3855 + t2121*t3879 - 0.041195*(4.e-6*t1338*t3842 + t1274*t3855 - 1.*t1532*t3879) - 0.14871*(t2278*t3842 + 4.e-6*t1338*t3855 + 4.e-6*t1532*t3879) + 0.803147*(-4.e-6*t1532*t3842 + t1532*t3855 + t2204*t3879))*var2[5] + (t3185*t3783 + t3175*t3948 + t2934*t3963 + t2987*t3972 + t2058*t3983 + t1570*t3996 + t2121*t4003 - 0.041195*(4.e-6*t1338*t3983 + t1274*t3996 - 1.*t1532*t4003) - 0.14871*(t2278*t3983 + 4.e-6*t1338*t3996 + 4.e-6*t1532*t4003) + 0.803147*(-4.e-6*t1532*t3983 + t1532*t3996 + t2204*t4003))*var2[9] + (t1570*t4098 + t2058*t4121 + t2121*t4139 - 0.041195*(t1274*t4098 + 4.e-6*t1338*t4121 - 1.*t1532*t4139) - 0.14871*(4.e-6*t1338*t4098 + t2278*t4121 + 4.e-6*t1532*t4139) + 0.803147*(t1532*t4098 - 4.e-6*t1532*t4121 + t2204*t4139) + t3963*t420 - 1.*t198*t3423*t487 + t4088*t887)*var2[10] + (t2351*t4215 + t2507*t4233 + t2590*t4251 - 0.14871*(4.e-6*t1274*t4215 + 4.e-6*t1532*t4233 - 1.6e-11*t1532*t4251) - 0.041195*(-1.*t1274*t4215 - 1.*t1532*t4233 + 4.e-6*t1532*t4251) + 0.803147*(-1.000000000016*t1532*t4215 - 4.e-6*t1274*t4251 + t4270))*var2[11];
  p_output1[2]=var2[2] + (t2878*t3783 + t2894*t3948 + t2987*t3963 + t2934*t4088 + t2121*t4215 + t1570*t4233 + t2058*t4251 + 0.803147*(t2204*t4215 + t1532*t4233 - 4.e-6*t1532*t4251) - 0.14871*(4.e-6*t1532*t4215 + 4.e-6*t1338*t4233 + t2278*t4251) - 0.041195*(-1.*t1532*t4215 + 4.e-6*t1338*t4251 + t4270) - 1.*t3227*t3423*t487)*var2[3] + (-1.*t219*t3227*t3608 + t2987*t4357 + t2934*t4363 + t2121*t4377 + t1570*t4383 + t2058*t4394 - 0.041195*(-1.*t1532*t4377 + t1274*t4383 + 4.e-6*t1338*t4394) + 0.803147*(t2204*t4377 + t1532*t4383 - 4.e-6*t1532*t4394) - 0.14871*(4.e-6*t1532*t4377 + 4.e-6*t1338*t4383 + t2278*t4394) - 1.*t2894*t3608*t487*t580 + t2878*t3608*t487*t707)*var2[4] + (t2878*t3618 + t2894*t4477 + t2934*t4488 + t2987*t4500 + t2058*t4508 + t1570*t4514 + t2121*t4527 - 0.041195*(4.e-6*t1338*t4508 + t1274*t4514 - 1.*t1532*t4527) - 0.14871*(t2278*t4508 + 4.e-6*t1338*t4514 + 4.e-6*t1532*t4527) + 0.803147*(-4.e-6*t1532*t4508 + t1532*t4514 + t2204*t4527))*var2[5] + (t3185*t4477 + t3175*t4584 + t2934*t4595 + t2987*t4601 + t2058*t4605 + t1570*t4611 + t2121*t4621 - 0.041195*(4.e-6*t1338*t4605 + t1274*t4611 - 1.*t1532*t4621) - 0.14871*(t2278*t4605 + 4.e-6*t1338*t4611 + 4.e-6*t1532*t4621) + 0.803147*(-4.e-6*t1532*t4605 + t1532*t4611 + t2204*t4621))*var2[9] + (t420*t4595 + t1570*t4728 + t2058*t4750 + t2121*t4765 - 0.041195*(t1274*t4728 + 4.e-6*t1338*t4750 - 1.*t1532*t4765) - 0.14871*(4.e-6*t1338*t4728 + t2278*t4750 + 4.e-6*t1532*t4765) + 0.803147*(t1532*t4728 - 4.e-6*t1532*t4750 + t2204*t4765) + t198*t3608*t487 + t4704*t887)*var2[10] + (t2351*t4828 + t2507*t4837 + t2590*t4850 + 0.803147*(-1.000000000016*t1532*t4828 + t1274*t4837 - 4.e-6*t1274*t4850) - 0.14871*(4.e-6*t1274*t4828 + 4.e-6*t1532*t4837 - 1.6e-11*t1532*t4850) - 0.041195*(-1.*t1274*t4828 - 1.*t1532*t4837 + 4.e-6*t1532*t4850))*var2[11];
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

#include "impact_velocity_FrFoot.hh"

namespace TrotStance2
{

void impact_velocity_FrFoot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
