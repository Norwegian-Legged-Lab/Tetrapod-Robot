/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:10:54 GMT+01:00
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
  double t70;
  double t159;
  double t160;
  double t199;
  double t204;
  double t205;
  double t114;
  double t345;
  double t510;
  double t511;
  double t512;
  double t537;
  double t636;
  double t718;
  double t449;
  double t457;
  double t469;
  double t568;
  double t571;
  double t602;
  double t862;
  double t864;
  double t886;
  double t924;
  double t728;
  double t743;
  double t758;
  double t775;
  double t785;
  double t816;
  double t1295;
  double t1125;
  double t1171;
  double t1202;
  double t1239;
  double t999;
  double t1000;
  double t1013;
  double t1025;
  double t1029;
  double t1035;
  double t226;
  double t244;
  double t1617;
  double t1596;
  double t371;
  double t426;
  double t1612;
  double t1623;
  double t1634;
  double t1676;
  double t1688;
  double t1696;
  double t478;
  double t522;
  double t557;
  double t563;
  double t608;
  double t624;
  double t632;
  double t649;
  double t676;
  double t708;
  double t710;
  double t1726;
  double t1747;
  double t1750;
  double t1764;
  double t1783;
  double t1791;
  double t825;
  double t909;
  double t933;
  double t966;
  double t1044;
  double t1097;
  double t1116;
  double t1251;
  double t1258;
  double t1265;
  double t1277;
  double t1312;
  double t1343;
  double t1836;
  double t1850;
  double t1878;
  double t1883;
  double t1955;
  double t1956;
  double t1962;
  double t1989;
  double t1917;
  double t1930;
  double t1936;
  double t1947;
  double t1494;
  double t1512;
  double t2183;
  double t2190;
  double t2233;
  double t2248;
  double t2253;
  double t2257;
  double t2300;
  double t2316;
  double t2317;
  double t2338;
  double t2345;
  double t2361;
  double t2409;
  double t2450;
  double t2532;
  double t2537;
  double t2623;
  double t2643;
  double t2652;
  double t2660;
  double t2560;
  double t2584;
  double t2586;
  double t2597;
  double t2912;
  double t2919;
  double t2925;
  double t2953;
  double t2791;
  double t2796;
  double t2801;
  double t2821;
  double t2854;
  double t2937;
  double t2983;
  double t3088;
  double t3317;
  double t3341;
  double t3361;
  double t3406;
  double t3171;
  double t3216;
  double t3131;
  double t3142;
  double t3152;
  double t3245;
  double t3289;
  double t3292;
  double t3417;
  double t3054;
  double t3467;
  double t3098;
  double t3549;
  double t3400;
  double t3588;
  double t3590;
  double t2959;
  double t3444;
  double t3455;
  double t3463;
  double t3469;
  double t3470;
  double t3481;
  double t3520;
  double t3529;
  double t3533;
  double t3670;
  double t3613;
  double t3616;
  double t3618;
  double t3619;
  double t3625;
  double t3626;
  double t3653;
  double t3654;
  double t3685;
  double t3688;
  double t3691;
  double t3693;
  double t3699;
  double t3707;
  double t3715;
  double t3729;
  double t3419;
  double t3736;
  double t3408;
  double t3856;
  double t3574;
  double t3749;
  double t3753;
  double t3556;
  double t2911;
  double t2930;
  double t2979;
  double t2982;
  double t2993;
  double t3005;
  double t3017;
  double t2809;
  double t2873;
  double t3025;
  double t3029;
  double t3036;
  double t3042;
  double t3057;
  double t3060;
  double t3114;
  double t3116;
  double t3121;
  double t3161;
  double t3165;
  double t3172;
  double t3204;
  double t3227;
  double t3232;
  double t3233;
  double t3315;
  double t3386;
  double t3409;
  double t3413;
  double t3422;
  double t3426;
  double t3430;
  double t3964;
  double t3967;
  double t3988;
  double t4003;
  double t4015;
  double t4018;
  double t3538;
  double t3548;
  double t3559;
  double t3573;
  double t3582;
  double t3585;
  double t3587;
  double t3662;
  double t3669;
  double t3672;
  double t3679;
  double t3681;
  double t3683;
  double t3684;
  double t3740;
  double t4051;
  double t4056;
  double t4060;
  double t4067;
  double t3766;
  double t4087;
  double t4091;
  double t4093;
  double t4112;
  double t3784;
  double t3787;
  double t4118;
  double t4122;
  double t4123;
  double t4126;
  double t3844;
  double t3846;
  double t3864;
  double t3884;
  double t3910;
  double t3914;
  double t3917;
  double t3946;
  double t4215;
  double t4223;
  double t4224;
  double t4230;
  double t4237;
  double t4241;
  double t4249;
  double t4252;
  double t4253;
  double t4254;
  double t4257;
  double t4270;
  double t4279;
  double t4282;
  double t4288;
  double t4289;
  double t4290;
  double t4291;
  double t4377;
  double t4380;
  double t4386;
  double t4404;
  double t4406;
  double t4411;
  double t4413;
  double t4415;
  double t4420;
  double t4421;
  t70 = Cos(var1[4]);
  t159 = Cos(var1[6]);
  t160 = -1.*t159;
  t199 = 1. + t160;
  t204 = 0.15121*t199;
  t205 = Sin(var1[6]);
  t114 = Sin(var1[5]);
  t345 = Cos(var1[5]);
  t510 = Cos(var1[7]);
  t511 = -1.*t510;
  t512 = 1. + t511;
  t537 = Sin(var1[7]);
  t636 = Sin(var1[4]);
  t718 = -1. + t510;
  t449 = -1.*t70*t159*t114;
  t457 = -1.*t70*t345*t205;
  t469 = t449 + t457;
  t568 = t70*t345*t159;
  t571 = -1.*t70*t114*t205;
  t602 = t568 + t571;
  t862 = Cos(var1[8]);
  t864 = -1.*t862;
  t886 = 1. + t864;
  t924 = Sin(var1[8]);
  t728 = 4.e-6*t718*t636;
  t743 = 1.6e-11*t718;
  t758 = 1. + t743;
  t775 = t758*t469;
  t785 = 4.e-6*t602*t537;
  t816 = t728 + t775 + t785;
  t1295 = -1. + t862;
  t1125 = t510*t636;
  t1171 = 4.e-6*t718*t469;
  t1202 = t602*t537;
  t1239 = t1125 + t1171 + t1202;
  t999 = -1.000000000016*t512;
  t1000 = 1. + t999;
  t1013 = t1000*t602;
  t1025 = -1.*t636*t537;
  t1029 = -4.e-6*t469*t537;
  t1035 = t1013 + t1025 + t1029;
  t226 = -0.15121*t205;
  t244 = t204 + t226;
  t1617 = Sin(var1[3]);
  t1596 = Cos(var1[3]);
  t371 = 0.15121*t205;
  t426 = t204 + t371;
  t1612 = t1596*t345;
  t1623 = -1.*t1617*t636*t114;
  t1634 = t1612 + t1623;
  t1676 = t345*t1617*t636;
  t1688 = t1596*t114;
  t1696 = t1676 + t1688;
  t478 = -1.2484e-7*var1[7];
  t522 = -1.5499600000248e-7*t512;
  t557 = 1.124840000016e-6*t537;
  t563 = t478 + t522 + t557;
  t608 = 0.281210000008499*t512;
  t624 = 0.03874900000062*t537;
  t632 = t608 + t624;
  t649 = 4.9936e-13*var1[7];
  t676 = -0.03874900000062*t512;
  t708 = 0.281210000004*t537;
  t710 = t649 + t676 + t708;
  t1726 = t159*t1634;
  t1747 = -1.*t1696*t205;
  t1750 = t1726 + t1747;
  t1764 = t159*t1696;
  t1783 = t1634*t205;
  t1791 = t1764 + t1783;
  t825 = -1.284e-8*var1[8];
  t909 = -1.5499600000248e-7*t886;
  t933 = 2.012840000032e-6*t924;
  t966 = t825 + t909 + t933;
  t1044 = 0.503210000016051*t886;
  t1097 = 0.03874900000062*t924;
  t1116 = t1044 + t1097;
  t1251 = 5.136e-14*var1[8];
  t1258 = -0.03874900000062*t886;
  t1265 = 0.503210000008*t924;
  t1277 = t1251 + t1258 + t1265;
  t1312 = 1.6e-11*t1295;
  t1343 = 1. + t1312;
  t1836 = -4.e-6*t70*t718*t1617;
  t1850 = t758*t1750;
  t1878 = 4.e-6*t1791*t537;
  t1883 = t1836 + t1850 + t1878;
  t1955 = -1.*t70*t510*t1617;
  t1956 = 4.e-6*t718*t1750;
  t1962 = t1791*t537;
  t1989 = t1955 + t1956 + t1962;
  t1917 = t1000*t1791;
  t1930 = t70*t1617*t537;
  t1936 = -4.e-6*t1750*t537;
  t1947 = t1917 + t1930 + t1936;
  t1494 = -1.000000000016*t886;
  t1512 = 1. + t1494;
  t2183 = t345*t1617;
  t2190 = t1596*t636*t114;
  t2233 = t2183 + t2190;
  t2248 = -1.*t1596*t345*t636;
  t2253 = t1617*t114;
  t2257 = t2248 + t2253;
  t2300 = t159*t2233;
  t2316 = -1.*t2257*t205;
  t2317 = t2300 + t2316;
  t2338 = t159*t2257;
  t2345 = t2233*t205;
  t2361 = t2338 + t2345;
  t2409 = 4.e-6*t1596*t70*t718;
  t2450 = t758*t2317;
  t2532 = 4.e-6*t2361*t537;
  t2537 = t2409 + t2450 + t2532;
  t2623 = t1596*t70*t510;
  t2643 = 4.e-6*t718*t2317;
  t2652 = t2361*t537;
  t2660 = t2623 + t2643 + t2652;
  t2560 = t1000*t2361;
  t2584 = -1.*t1596*t70*t537;
  t2586 = -4.e-6*t2317*t537;
  t2597 = t2560 + t2584 + t2586;
  t2912 = Cos(var1[13]);
  t2919 = -1.*t2912;
  t2925 = 1. + t2919;
  t2953 = Sin(var1[13]);
  t2791 = Cos(var1[12]);
  t2796 = -1.*t2791;
  t2801 = 1. + t2796;
  t2821 = Sin(var1[12]);
  t2854 = 0.15121*t2821;
  t2937 = 4.e-6*t2925;
  t2983 = -2.8e-11*t2925;
  t3088 = 7.e-6*t2925;
  t3317 = Cos(var1[14]);
  t3341 = -1.*t3317;
  t3361 = 1. + t3341;
  t3406 = Sin(var1[14]);
  t3171 = -1.*t2953;
  t3216 = -4.e-6*t2953;
  t3131 = -1.*t70*t345*t2821;
  t3142 = -1.*t2791*t70*t114;
  t3152 = t3131 + t3142;
  t3245 = t2791*t70*t345;
  t3289 = -1.*t70*t2821*t114;
  t3292 = t3245 + t3289;
  t3417 = 7.e-6*t3361;
  t3054 = -7.e-6*t2953;
  t3467 = -7.e-6*t2925;
  t3098 = 4.e-6*t2953;
  t3549 = 4.e-6*t3361;
  t3400 = -2.8e-11*t3361;
  t3588 = -1. + t2912;
  t3590 = 4.e-6*t3588;
  t2959 = 7.e-6*t2953;
  t3444 = 2.8e-11*t2925;
  t3455 = t3444 + t3171;
  t3463 = t3455*t636;
  t3469 = t3467 + t3216;
  t3470 = t3469*t3152;
  t3481 = -1.000000000016*t2925;
  t3520 = 1. + t3481;
  t3529 = t3520*t3292;
  t3533 = t3463 + t3470 + t3529;
  t3670 = 7.e-6*t3406;
  t3613 = t3590 + t3054;
  t3616 = t3613*t636;
  t3618 = -6.5e-11*t2925;
  t3619 = 1. + t3618;
  t3625 = t3619*t3152;
  t3626 = t3467 + t3098;
  t3653 = t3626*t3292;
  t3654 = t3616 + t3625 + t3653;
  t3685 = -1.000000000049*t2925;
  t3688 = 1. + t3685;
  t3691 = t3688*t636;
  t3693 = t3590 + t2959;
  t3699 = t3693*t3152;
  t3707 = t3444 + t2953;
  t3715 = t3707*t3292;
  t3729 = t3691 + t3699 + t3715;
  t3419 = -4.e-6*t3406;
  t3736 = 2.8e-11*t3361;
  t3408 = -1.*t3406;
  t3856 = -7.e-6*t3361;
  t3574 = 4.e-6*t3406;
  t3749 = -1. + t3317;
  t3753 = 4.e-6*t3749;
  t3556 = -7.e-6*t3406;
  t2911 = 5.856279999999999e-13*var1[13];
  t2930 = -0.0387489999948987*t2925;
  t2979 = t2937 + t2959;
  t2982 = -2.123459e-6*t2979;
  t2993 = t2983 + t2953;
  t3005 = -0.281209000004*t2993;
  t3017 = t2911 + t2930 + t2982 + t3005;
  t2809 = -0.15121*t2801;
  t2873 = t2809 + t2854;
  t3025 = 0.15121*t2801;
  t3029 = t3025 + t2854;
  t3036 = -1.4640699999999997e-7*var1[13];
  t3042 = -1.38024835e-16*t2925;
  t3057 = t2937 + t3054;
  t3060 = -0.038748999993*t3057;
  t3114 = t3088 + t3098;
  t3116 = -0.281209000004*t3114;
  t3121 = t3036 + t3042 + t3060 + t3116;
  t3161 = 1.0248489999999998e-12*var1[13];
  t3165 = -0.28120900000849935*t2925;
  t3172 = t2983 + t3171;
  t3204 = -0.038748999993*t3172;
  t3227 = t3088 + t3216;
  t3232 = -2.123459e-6*t3227;
  t3233 = t3161 + t3165 + t3204 + t3232;
  t3315 = 1.8190549999999993e-12*var1[14];
  t3386 = -0.5031490000160505*t3361;
  t3409 = t3400 + t3408;
  t3413 = -0.038922999986*t3409;
  t3422 = t3417 + t3419;
  t3426 = -3.6777349999999994e-6*t3422;
  t3430 = t3315 + t3386 + t3413 + t3426;
  t3964 = -1.*t2821*t1696;
  t3967 = t2791*t1634;
  t3988 = t3964 + t3967;
  t4003 = t2791*t1696;
  t4015 = t2821*t1634;
  t4018 = t4003 + t4015;
  t3538 = -2.598649999999999e-7*var1[14];
  t3548 = -2.3905277499999995e-16*t3361;
  t3559 = t3549 + t3556;
  t3573 = -0.038922999986*t3559;
  t3582 = t3417 + t3574;
  t3585 = -0.503149000008*t3582;
  t3587 = t3538 + t3548 + t3573 + t3585;
  t3662 = 1.0394599999999997e-12*var1[14];
  t3669 = -0.03892299998790722*t3361;
  t3672 = t3549 + t3670;
  t3679 = -3.6777349999999994e-6*t3672;
  t3681 = t3400 + t3406;
  t3683 = -0.503149000008*t3681;
  t3684 = t3662 + t3669 + t3679 + t3683;
  t3740 = t3736 + t3406;
  t4051 = -1.*t70*t3455*t1617;
  t4056 = t3469*t3988;
  t4060 = t3520*t4018;
  t4067 = t4051 + t4056 + t4060;
  t3766 = t3753 + t3670;
  t4087 = -1.*t70*t3613*t1617;
  t4091 = t3619*t3988;
  t4093 = t3626*t4018;
  t4112 = t4087 + t4091 + t4093;
  t3784 = -1.000000000049*t3361;
  t3787 = 1. + t3784;
  t4118 = -1.*t3688*t70*t1617;
  t4122 = t3693*t3988;
  t4123 = t3707*t4018;
  t4126 = t4118 + t4122 + t4123;
  t3844 = -1.000000000016*t3361;
  t3846 = 1. + t3844;
  t3864 = t3856 + t3419;
  t3884 = t3736 + t3408;
  t3910 = t3856 + t3574;
  t3914 = -6.5e-11*t3361;
  t3917 = 1. + t3914;
  t3946 = t3753 + t3556;
  t4215 = -1.*t2821*t2257;
  t4223 = t2791*t2233;
  t4224 = t4215 + t4223;
  t4230 = t2791*t2257;
  t4237 = t2821*t2233;
  t4241 = t4230 + t4237;
  t4249 = t1596*t70*t3455;
  t4252 = t3469*t4224;
  t4253 = t3520*t4241;
  t4254 = t4249 + t4252 + t4253;
  t4257 = t1596*t70*t3613;
  t4270 = t3619*t4224;
  t4279 = t3626*t4241;
  t4282 = t4257 + t4270 + t4279;
  t4288 = t3688*t1596*t70;
  t4289 = t3693*t4224;
  t4290 = t3707*t4241;
  t4291 = t4288 + t4289 + t4290;
  t4377 = Cos(var1[9]);
  t4380 = -1.*t4377;
  t4386 = 1. + t4380;
  t4404 = Sin(var1[9]);
  t4406 = -0.15121*t4404;
  t4411 = Cos(var1[15]);
  t4413 = -1.*t4411;
  t4415 = 1. + t4413;
  t4420 = -0.15121*t4415;
  t4421 = Sin(var1[15]);
  p_output1[0]=t1035*t1116 + t1239*t1277 + t469*t563 + t602*t632 - 1.*t114*t244*t70 + t345*t426*t70 + t636*t710 + 0.14871*(4.e-6*t1239*t1295 + t1343*t816 + 4.e-6*t1035*t924) - 0.03875*(4.e-6*t1295*t816 + t1239*t862 + t1035*t924) + 0.80321*(t1035*t1512 - 1.*t1239*t924 - 4.e-6*t816*t924) + t816*t966 + var1[0];
  p_output1[1]=t1116*t1947 + t1277*t1989 + t1634*t244 + t1696*t426 + t1750*t563 + t1791*t632 - 1.*t1617*t70*t710 + 0.14871*(t1343*t1883 + 4.e-6*t1295*t1989 + 4.e-6*t1947*t924) - 0.03875*(4.e-6*t1295*t1883 + t1989*t862 + t1947*t924) + 0.80321*(t1512*t1947 - 4.e-6*t1883*t924 - 1.*t1989*t924) + t1883*t966 + var1[1];
  p_output1[2]=t2233*t244 + t1116*t2597 + t1277*t2660 + t2257*t426 + t2317*t563 + t2361*t632 + t1596*t70*t710 + 0.14871*(t1343*t2537 + 4.e-6*t1295*t2660 + 4.e-6*t2597*t924) - 0.03875*(4.e-6*t1295*t2537 + t2660*t862 + t2597*t924) + 0.80321*(t1512*t2597 - 4.e-6*t2537*t924 - 1.*t2660*t924) + t2537*t966 + var1[2];
  p_output1[3]=t3121*t3152 + t3233*t3292 + t3430*t3533 + t3587*t3654 + t3684*t3729 - 0.038924*(t3533*t3740 + t3654*t3766 + t3729*t3787) - 0.80315*(t3533*t3846 + t3654*t3864 + t3729*t3884) + 0.148705*(t3533*t3910 + t3654*t3917 + t3729*t3946) + t3017*t636 - 1.*t114*t3029*t70 + t2873*t345*t70 + var1[0];
  p_output1[4]=t1696*t2873 + t1634*t3029 + t3121*t3988 + t3233*t4018 + t3430*t4067 + t3587*t4112 + t3684*t4126 - 0.038924*(t3740*t4067 + t3766*t4112 + t3787*t4126) - 0.80315*(t3846*t4067 + t3864*t4112 + t3884*t4126) + 0.148705*(t3910*t4067 + t3917*t4112 + t3946*t4126) - 1.*t1617*t3017*t70 + var1[1];
  p_output1[5]=t2257*t2873 + t2233*t3029 + t3121*t4224 + t3233*t4241 + t3430*t4254 + t3587*t4282 + t3684*t4291 - 0.038924*(t3740*t4254 + t3766*t4282 + t3787*t4291) - 0.80315*(t3846*t4254 + t3864*t4282 + t3884*t4291) + 0.148705*(t3910*t4254 + t3917*t4282 + t3946*t4291) + t1596*t3017*t70 + var1[2];
  p_output1[6]=-0.002264*t1634 + 0.00183*t1696 + 0.024028*t1617*t70 + var1[1];
  p_output1[7]=-0.002264*t2233 + 0.00183*t2257 - 0.024028*t1596*t70 + var1[2];
  p_output1[8]=ArcTan(t345*t70,t1696);
  p_output1[9]=0.15121*(t2257*t4377 + t2233*t4404) - 0.15121*(t2233*t4377 - 1.*t2257*t4404) + t2233*(-0.15121*t4386 + t4406) + t2257*(0.15121*t4386 + t4406) - 1.*t2257*(t4420 - 0.15121*t4421) - 1.*t2233*(t4420 + 0.15121*t4421) + 0.15121*(t2257*t4411 + t2233*t4421) + 0.15121*(t2233*t4411 - 1.*t2257*t4421);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 10, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "ya_position_ParallelStance.hh"

namespace SymFunction
{

void ya_position_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
