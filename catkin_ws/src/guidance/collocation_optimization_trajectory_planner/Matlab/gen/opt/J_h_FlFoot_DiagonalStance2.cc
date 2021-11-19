/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:30:31 GMT+01:00
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
  double t8;
  double t652;
  double t708;
  double t729;
  double t774;
  double t823;
  double t421;
  double t1042;
  double t1480;
  double t1496;
  double t1516;
  double t1560;
  double t1904;
  double t2021;
  double t1322;
  double t1327;
  double t1394;
  double t1647;
  double t1653;
  double t1681;
  double t2217;
  double t2225;
  double t2232;
  double t2256;
  double t2035;
  double t2068;
  double t2074;
  double t2134;
  double t2159;
  double t2179;
  double t2433;
  double t2399;
  double t2400;
  double t2401;
  double t2405;
  double t2292;
  double t2294;
  double t2317;
  double t2331;
  double t2342;
  double t2383;
  double t828;
  double t997;
  double t1124;
  double t1192;
  double t1471;
  double t1536;
  double t1624;
  double t1634;
  double t1769;
  double t1787;
  double t1790;
  double t2699;
  double t2735;
  double t2747;
  double t2786;
  double t2792;
  double t2796;
  double t2185;
  double t2248;
  double t2264;
  double t2278;
  double t2389;
  double t2390;
  double t2395;
  double t2411;
  double t2413;
  double t2423;
  double t2429;
  double t2542;
  double t2555;
  double t2817;
  double t2822;
  double t2826;
  double t2799;
  double t2800;
  double t2814;
  double t2834;
  double t2837;
  double t2840;
  double t2446;
  double t2448;
  double t2757;
  double t2797;
  double t2815;
  double t2830;
  double t2841;
  double t2846;
  double t2848;
  double t2858;
  double t2862;
  double t2864;
  double t2867;
  double t2869;
  double t2886;
  double t2902;
  double t2906;
  double t2949;
  double t2966;
  double t2981;
  double t2994;
  double t2998;
  double t3192;
  double t3198;
  double t3204;
  double t3282;
  double t3283;
  double t3284;
  double t3285;
  double t3297;
  double t3299;
  double t3310;
  double t3315;
  double t3237;
  double t3246;
  double t3255;
  double t3262;
  double t3467;
  double t3468;
  double t3470;
  double t3471;
  double t3445;
  double t3446;
  double t3448;
  double t3451;
  double t3486;
  double t3490;
  double t3563;
  double t3559;
  double t3561;
  double t3568;
  double t3572;
  double t3579;
  double t3581;
  double t3587;
  double t1911;
  double t1926;
  double t1933;
  double t1943;
  double t3595;
  double t3596;
  double t3598;
  double t3603;
  double t3606;
  double t3608;
  double t3612;
  double t3624;
  double t3628;
  double t3629;
  double t3652;
  double t3653;
  double t3656;
  double t3657;
  double t3631;
  double t3637;
  double t3639;
  double t3647;
  double t3721;
  double t3723;
  double t3727;
  double t3730;
  double t3731;
  double t3732;
  double t3737;
  double t3743;
  double t3745;
  double t3748;
  double t3766;
  double t3768;
  double t3771;
  double t3774;
  double t3750;
  double t3752;
  double t3756;
  double t3760;
  double t3817;
  double t3818;
  double t3819;
  double t3822;
  double t3823;
  double t3825;
  double t3827;
  double t3832;
  double t3833;
  double t3835;
  double t3836;
  double t3837;
  double t3847;
  double t3848;
  double t3850;
  double t3841;
  double t3844;
  double t3845;
  double t3859;
  double t3860;
  double t3863;
  double t3010;
  double t3012;
  double t3018;
  double t3021;
  double t3897;
  double t3898;
  double t3902;
  double t3904;
  double t3905;
  double t3909;
  double t3911;
  double t3918;
  double t3920;
  double t3922;
  double t3914;
  double t3915;
  double t3916;
  double t3925;
  double t3926;
  double t3927;
  double t3045;
  double t3054;
  double t3055;
  double t3061;
  double t3153;
  double t3175;
  double t3217;
  double t3219;
  double t3228;
  double t3970;
  double t3971;
  double t3973;
  double t3993;
  double t4002;
  double t4008;
  double t4009;
  double t4012;
  double t4016;
  double t4020;
  double t4024;
  double t3977;
  double t3978;
  double t3985;
  double t3987;
  double t3454;
  double t3456;
  double t3457;
  double t3474;
  double t3475;
  double t3481;
  double t3491;
  double t3492;
  double t3498;
  double t4155;
  double t4158;
  double t4159;
  double t4161;
  double t4122;
  double t4126;
  double t4128;
  double t4131;
  double t4167;
  double t4171;
  double t4221;
  double t4223;
  double t4293;
  double t4295;
  double t4296;
  double t4304;
  double t4307;
  double t4310;
  double t4316;
  double t4319;
  double t4320;
  double t4321;
  double t4343;
  double t4346;
  double t4348;
  double t4351;
  double t4331;
  double t4332;
  double t4334;
  double t4335;
  double t4424;
  double t4425;
  double t4426;
  double t4448;
  double t4453;
  double t4460;
  double t4464;
  double t4465;
  double t4481;
  double t4483;
  double t4484;
  double t4474;
  double t4476;
  double t4479;
  double t4495;
  double t4503;
  double t4507;
  double t4556;
  double t4560;
  double t4561;
  double t4566;
  double t4568;
  double t4571;
  double t4572;
  double t4598;
  double t4599;
  double t4601;
  double t4576;
  double t4577;
  double t4592;
  double t4604;
  double t4613;
  double t4614;
  double t4690;
  double t4691;
  double t4692;
  double t4709;
  double t4711;
  double t4719;
  double t4739;
  double t4760;
  double t4762;
  double t4763;
  double t4694;
  double t4696;
  double t4701;
  double t4702;
  double t4917;
  double t4918;
  double t4921;
  double t4925;
  double t4853;
  double t4900;
  double t4914;
  double t4915;
  double t4928;
  double t4929;
  t8 = Sin(var1[4]);
  t652 = Cos(var1[6]);
  t708 = -1.*t652;
  t729 = 1. + t708;
  t774 = 0.15121*t729;
  t823 = Sin(var1[6]);
  t421 = Sin(var1[5]);
  t1042 = Cos(var1[5]);
  t1480 = Cos(var1[7]);
  t1496 = -1.*t1480;
  t1516 = 1. + t1496;
  t1560 = Sin(var1[7]);
  t1904 = Cos(var1[4]);
  t2021 = -1. + t1480;
  t1322 = t652*t8*t421;
  t1327 = t1042*t8*t823;
  t1394 = t1322 + t1327;
  t1647 = -1.*t1042*t652*t8;
  t1653 = t8*t421*t823;
  t1681 = t1647 + t1653;
  t2217 = Cos(var1[8]);
  t2225 = -1.*t2217;
  t2232 = 1. + t2225;
  t2256 = Sin(var1[8]);
  t2035 = 4.e-6*t1904*t2021;
  t2068 = 1.6e-11*t2021;
  t2074 = 1. + t2068;
  t2134 = t2074*t1394;
  t2159 = 4.e-6*t1681*t1560;
  t2179 = t2035 + t2134 + t2159;
  t2433 = -1. + t2217;
  t2399 = t1904*t1480;
  t2400 = 4.e-6*t2021*t1394;
  t2401 = t1681*t1560;
  t2405 = t2399 + t2400 + t2401;
  t2292 = -1.000000000016*t1516;
  t2294 = 1. + t2292;
  t2317 = t2294*t1681;
  t2331 = -1.*t1904*t1560;
  t2342 = -4.e-6*t1394*t1560;
  t2383 = t2317 + t2331 + t2342;
  t828 = -0.15121*t823;
  t997 = t774 + t828;
  t1124 = 0.15121*t823;
  t1192 = t774 + t1124;
  t1471 = -1.2484e-7*var1[7];
  t1536 = -1.5499600000248e-7*t1516;
  t1624 = 1.124840000016e-6*t1560;
  t1634 = t1471 + t1536 + t1624;
  t1769 = 0.281210000008499*t1516;
  t1787 = 0.03874900000062*t1560;
  t1790 = t1769 + t1787;
  t2699 = -1.*t1904*t1042*t652;
  t2735 = t1904*t421*t823;
  t2747 = t2699 + t2735;
  t2786 = -1.*t1904*t652*t421;
  t2792 = -1.*t1904*t1042*t823;
  t2796 = t2786 + t2792;
  t2185 = -1.284e-8*var1[8];
  t2248 = -1.5499600000248e-7*t2232;
  t2264 = 2.012840000032e-6*t2256;
  t2278 = t2185 + t2248 + t2264;
  t2389 = 0.503210000016051*t2232;
  t2390 = 0.03874900000062*t2256;
  t2395 = t2389 + t2390;
  t2411 = 5.136e-14*var1[8];
  t2413 = -0.03874900000062*t2232;
  t2423 = 0.503210000008*t2256;
  t2429 = t2411 + t2413 + t2423;
  t2542 = -1.000000000016*t2232;
  t2555 = 1. + t2542;
  t2817 = t2294*t2796;
  t2822 = -4.e-6*t2747*t1560;
  t2826 = t2817 + t2822;
  t2799 = t2074*t2747;
  t2800 = 4.e-6*t2796*t1560;
  t2814 = t2799 + t2800;
  t2834 = 4.e-6*t2021*t2747;
  t2837 = t2796*t1560;
  t2840 = t2834 + t2837;
  t2446 = 1.6e-11*t2433;
  t2448 = 1. + t2446;
  t2757 = t2747*t1634;
  t2797 = t2796*t1790;
  t2815 = t2814*t2278;
  t2830 = t2826*t2395;
  t2841 = t2840*t2429;
  t2846 = t2555*t2826;
  t2848 = -4.e-6*t2814*t2256;
  t2858 = -1.*t2840*t2256;
  t2862 = t2846 + t2848 + t2858;
  t2864 = 0.80321*t2862;
  t2867 = t2448*t2814;
  t2869 = 4.e-6*t2433*t2840;
  t2886 = 4.e-6*t2826*t2256;
  t2902 = t2867 + t2869 + t2886;
  t2906 = 0.14871*t2902;
  t2949 = 4.e-6*t2433*t2814;
  t2966 = t2217*t2840;
  t2981 = t2826*t2256;
  t2994 = t2949 + t2966 + t2981;
  t2998 = -0.03875*t2994;
  t3192 = t1904*t1042*t652;
  t3198 = -1.*t1904*t421*t823;
  t3204 = t3192 + t3198;
  t3282 = -1.*t1480*t8;
  t3283 = -4.e-6*t1480*t2796;
  t3284 = -1.000000000016*t3204*t1560;
  t3285 = t3282 + t3283 + t3284;
  t3297 = t1480*t3204;
  t3299 = -1.*t8*t1560;
  t3310 = -4.e-6*t2796*t1560;
  t3315 = t3297 + t3299 + t3310;
  t3237 = 4.e-6*t1480*t3204;
  t3246 = -4.e-6*t8*t1560;
  t3255 = -1.6e-11*t2796*t1560;
  t3262 = t3237 + t3246 + t3255;
  t3467 = 4.e-6*t2021*t8;
  t3468 = t2074*t2796;
  t3470 = 4.e-6*t3204*t1560;
  t3471 = t3467 + t3468 + t3470;
  t3445 = t1480*t8;
  t3446 = 4.e-6*t2021*t2796;
  t3448 = t3204*t1560;
  t3451 = t3445 + t3446 + t3448;
  t3486 = t2294*t3204;
  t3490 = t3486 + t3299 + t3310;
  t3563 = Cos(var1[3]);
  t3559 = Sin(var1[3]);
  t3561 = -1.*t1042*t3559;
  t3568 = -1.*t3563*t8*t421;
  t3572 = t3561 + t3568;
  t3579 = t3563*t1042*t8;
  t3581 = -1.*t3559*t421;
  t3587 = t3579 + t3581;
  t1911 = 4.9936e-13*var1[7];
  t1926 = -0.03874900000062*t1516;
  t1933 = 0.281210000004*t1560;
  t1943 = t1911 + t1926 + t1933;
  t3595 = t652*t3572;
  t3596 = -1.*t3587*t823;
  t3598 = t3595 + t3596;
  t3603 = t652*t3587;
  t3606 = t3572*t823;
  t3608 = t3603 + t3606;
  t3612 = -4.e-6*t3563*t1904*t2021;
  t3624 = t2074*t3598;
  t3628 = 4.e-6*t3608*t1560;
  t3629 = t3612 + t3624 + t3628;
  t3652 = -1.*t3563*t1904*t1480;
  t3653 = 4.e-6*t2021*t3598;
  t3656 = t3608*t1560;
  t3657 = t3652 + t3653 + t3656;
  t3631 = t2294*t3608;
  t3637 = t3563*t1904*t1560;
  t3639 = -4.e-6*t3598*t1560;
  t3647 = t3631 + t3637 + t3639;
  t3721 = -1.*t1904*t652*t3559*t421;
  t3723 = -1.*t1904*t1042*t3559*t823;
  t3727 = t3721 + t3723;
  t3730 = t1904*t1042*t652*t3559;
  t3731 = -1.*t1904*t3559*t421*t823;
  t3732 = t3730 + t3731;
  t3737 = 4.e-6*t2021*t3559*t8;
  t3743 = t2074*t3727;
  t3745 = 4.e-6*t3732*t1560;
  t3748 = t3737 + t3743 + t3745;
  t3766 = t1480*t3559*t8;
  t3768 = 4.e-6*t2021*t3727;
  t3771 = t3732*t1560;
  t3774 = t3766 + t3768 + t3771;
  t3750 = t2294*t3732;
  t3752 = -1.*t3559*t8*t1560;
  t3756 = -4.e-6*t3727*t1560;
  t3760 = t3750 + t3752 + t3756;
  t3817 = -1.*t1042*t3559*t8;
  t3818 = -1.*t3563*t421;
  t3819 = t3817 + t3818;
  t3822 = t3563*t1042;
  t3823 = -1.*t3559*t8*t421;
  t3825 = t3822 + t3823;
  t3827 = t652*t3819;
  t3832 = -1.*t3825*t823;
  t3833 = t3827 + t3832;
  t3835 = t652*t3825;
  t3836 = t3819*t823;
  t3837 = t3835 + t3836;
  t3847 = t2294*t3837;
  t3848 = -4.e-6*t3833*t1560;
  t3850 = t3847 + t3848;
  t3841 = t2074*t3833;
  t3844 = 4.e-6*t3837*t1560;
  t3845 = t3841 + t3844;
  t3859 = 4.e-6*t2021*t3833;
  t3860 = t3837*t1560;
  t3863 = t3859 + t3860;
  t3010 = -0.15121*t652;
  t3012 = t3010 + t1124;
  t3018 = 0.15121*t652;
  t3021 = t3018 + t1124;
  t3897 = t1042*t3559*t8;
  t3898 = t3563*t421;
  t3902 = t3897 + t3898;
  t3904 = -1.*t652*t3902;
  t3905 = t3904 + t3832;
  t3909 = -1.*t3902*t823;
  t3911 = t3835 + t3909;
  t3918 = t2294*t3911;
  t3920 = -4.e-6*t3905*t1560;
  t3922 = t3918 + t3920;
  t3914 = t2074*t3905;
  t3915 = 4.e-6*t3911*t1560;
  t3916 = t3914 + t3915;
  t3925 = 4.e-6*t2021*t3905;
  t3926 = t3911*t1560;
  t3927 = t3925 + t3926;
  t3045 = 0.281210000004*t1480;
  t3054 = -0.03874900000062*t1560;
  t3055 = 4.9936e-13 + t3045 + t3054;
  t3061 = 1.124840000016e-6*t1480;
  t3153 = -1.5499600000248e-7*t1560;
  t3175 = -1.2484e-7 + t3061 + t3153;
  t3217 = 0.03874900000062*t1480;
  t3219 = 0.281210000008499*t1560;
  t3228 = t3217 + t3219;
  t3970 = t652*t3902;
  t3971 = t3825*t823;
  t3973 = t3970 + t3971;
  t3993 = t1904*t1480*t3559;
  t4002 = -4.e-6*t1480*t3911;
  t4008 = -1.000000000016*t3973*t1560;
  t4009 = t3993 + t4002 + t4008;
  t4012 = t1480*t3973;
  t4016 = t1904*t3559*t1560;
  t4020 = -4.e-6*t3911*t1560;
  t4024 = t4012 + t4016 + t4020;
  t3977 = 4.e-6*t1480*t3973;
  t3978 = 4.e-6*t1904*t3559*t1560;
  t3985 = -1.6e-11*t3911*t1560;
  t3987 = t3977 + t3978 + t3985;
  t3454 = 0.503210000008*t2217;
  t3456 = -0.03874900000062*t2256;
  t3457 = 5.136e-14 + t3454 + t3456;
  t3474 = 2.012840000032e-6*t2217;
  t3475 = -1.5499600000248e-7*t2256;
  t3481 = -1.284e-8 + t3474 + t3475;
  t3491 = 0.03874900000062*t2217;
  t3492 = 0.503210000016051*t2256;
  t3498 = t3491 + t3492;
  t4155 = -4.e-6*t1904*t2021*t3559;
  t4158 = t2074*t3911;
  t4159 = 4.e-6*t3973*t1560;
  t4161 = t4155 + t4158 + t4159;
  t4122 = -1.*t1904*t1480*t3559;
  t4126 = 4.e-6*t2021*t3911;
  t4128 = t3973*t1560;
  t4131 = t4122 + t4126 + t4128;
  t4167 = t2294*t3973;
  t4171 = t4167 + t4016 + t4020;
  t4221 = -4.e-6*t4161*t2256;
  t4223 = -1.*t4131*t2256;
  t4293 = t3563*t1904*t652*t421;
  t4295 = t3563*t1904*t1042*t823;
  t4296 = t4293 + t4295;
  t4304 = -1.*t3563*t1904*t1042*t652;
  t4307 = t3563*t1904*t421*t823;
  t4310 = t4304 + t4307;
  t4316 = -4.e-6*t3563*t2021*t8;
  t4319 = t2074*t4296;
  t4320 = 4.e-6*t4310*t1560;
  t4321 = t4316 + t4319 + t4320;
  t4343 = -1.*t3563*t1480*t8;
  t4346 = 4.e-6*t2021*t4296;
  t4348 = t4310*t1560;
  t4351 = t4343 + t4346 + t4348;
  t4331 = t2294*t4310;
  t4332 = t3563*t8*t1560;
  t4334 = -4.e-6*t4296*t1560;
  t4335 = t4331 + t4332 + t4334;
  t4424 = t1042*t3559;
  t4425 = t3563*t8*t421;
  t4426 = t4424 + t4425;
  t4448 = -1.*t4426*t823;
  t4453 = t3603 + t4448;
  t4460 = t652*t4426;
  t4464 = t3587*t823;
  t4465 = t4460 + t4464;
  t4481 = t2294*t4465;
  t4483 = -4.e-6*t4453*t1560;
  t4484 = t4481 + t4483;
  t4474 = t2074*t4453;
  t4476 = 4.e-6*t4465*t1560;
  t4479 = t4474 + t4476;
  t4495 = 4.e-6*t2021*t4453;
  t4503 = t4465*t1560;
  t4507 = t4495 + t4503;
  t4556 = -1.*t3563*t1042*t8;
  t4560 = t3559*t421;
  t4561 = t4556 + t4560;
  t4566 = -1.*t652*t4561;
  t4568 = t4566 + t4448;
  t4571 = -1.*t4561*t823;
  t4572 = t4460 + t4571;
  t4598 = t2294*t4572;
  t4599 = -4.e-6*t4568*t1560;
  t4601 = t4598 + t4599;
  t4576 = t2074*t4568;
  t4577 = 4.e-6*t4572*t1560;
  t4592 = t4576 + t4577;
  t4604 = 4.e-6*t2021*t4568;
  t4613 = t4572*t1560;
  t4614 = t4604 + t4613;
  t4690 = t652*t4561;
  t4691 = t4426*t823;
  t4692 = t4690 + t4691;
  t4709 = -4.e-6*t1480*t4572;
  t4711 = -1.000000000016*t4692*t1560;
  t4719 = t3652 + t4709 + t4711;
  t4739 = t1480*t4692;
  t4760 = -1.*t3563*t1904*t1560;
  t4762 = -4.e-6*t4572*t1560;
  t4763 = t4739 + t4760 + t4762;
  t4694 = 4.e-6*t1480*t4692;
  t4696 = -4.e-6*t3563*t1904*t1560;
  t4701 = -1.6e-11*t4572*t1560;
  t4702 = t4694 + t4696 + t4701;
  t4917 = 4.e-6*t3563*t1904*t2021;
  t4918 = t2074*t4572;
  t4921 = 4.e-6*t4692*t1560;
  t4925 = t4917 + t4918 + t4921;
  t4853 = t3563*t1904*t1480;
  t4900 = 4.e-6*t2021*t4572;
  t4914 = t4692*t1560;
  t4915 = t4853 + t4900 + t4914;
  t4928 = t2294*t4692;
  t4929 = t4928 + t4760 + t4762;
  p_output1[0]=1.;
  p_output1[1]=t1394*t1634 + t1681*t1790 + t1904*t1943 + t2179*t2278 + t2383*t2395 + t2405*t2429 - 0.03875*(t2256*t2383 + t2217*t2405 + 4.e-6*t2179*t2433) + 0.14871*(4.e-6*t2256*t2383 + 4.e-6*t2405*t2433 + t2179*t2448) + 0.80321*(-4.e-6*t2179*t2256 - 1.*t2256*t2405 + t2383*t2555) - 1.*t1042*t1192*t8 + t421*t8*t997;
  p_output1[2]=t2757 + t2797 + t2815 + t2830 + t2841 + t2864 + t2906 + t2998 - 1.*t1192*t1904*t421 - 1.*t1042*t1904*t997;
  p_output1[3]=t2757 + t2797 + t2815 + t2830 + t2841 + t2864 + t2906 + t2998 + t1042*t1904*t3021 - 1.*t1904*t3012*t421;
  p_output1[4]=t2796*t3175 + t3204*t3228 + t2278*t3262 + t2395*t3285 + t2429*t3315 - 0.03875*(4.e-6*t2433*t3262 + t2256*t3285 + t2217*t3315) + 0.80321*(-4.e-6*t2256*t3262 + t2555*t3285 - 1.*t2256*t3315) + 0.14871*(t2448*t3262 + 4.e-6*t2256*t3285 + 4.e-6*t2433*t3315) + t3055*t8;
  p_output1[5]=t3451*t3457 + t3471*t3481 + 0.14871*(-4.e-6*t2256*t3451 - 1.6e-11*t2256*t3471 + 4.e-6*t2217*t3490) - 0.03875*(-1.*t2256*t3451 - 4.e-6*t2256*t3471 + t2217*t3490) + 0.80321*(-1.*t2217*t3451 - 4.e-6*t2217*t3471 - 1.000000000016*t2256*t3490) + t3490*t3498;
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=-1.*t1904*t1943*t3563 + t1192*t3587 + t1634*t3598 + t1790*t3608 + t2278*t3629 + t2395*t3647 + t2429*t3657 - 0.03875*(4.e-6*t2433*t3629 + t2256*t3647 + t2217*t3657) + 0.80321*(-4.e-6*t2256*t3629 + t2555*t3647 - 1.*t2256*t3657) + 0.14871*(t2448*t3629 + 4.e-6*t2256*t3647 + 4.e-6*t2433*t3657) + t3572*t997;
  p_output1[9]=t1042*t1192*t1904*t3559 + t1634*t3727 + t1790*t3732 + t2278*t3748 + t2395*t3760 + t2429*t3774 - 0.03875*(4.e-6*t2433*t3748 + t2256*t3760 + t2217*t3774) + 0.80321*(-4.e-6*t2256*t3748 + t2555*t3760 - 1.*t2256*t3774) + 0.14871*(t2448*t3748 + 4.e-6*t2256*t3760 + 4.e-6*t2433*t3774) + t1943*t3559*t8 - 1.*t1904*t3559*t421*t997;
  p_output1[10]=t1192*t3825 + t1634*t3833 + t1790*t3837 + t2278*t3845 + t2395*t3850 + t2429*t3863 - 0.03875*(4.e-6*t2433*t3845 + t2256*t3850 + t2217*t3863) + 0.80321*(-4.e-6*t2256*t3845 + t2555*t3850 - 1.*t2256*t3863) + 0.14871*(t2448*t3845 + 4.e-6*t2256*t3850 + 4.e-6*t2433*t3863) + t3819*t997;
  p_output1[11]=t3012*t3825 + t3021*t3902 + t1634*t3905 + t1790*t3911 + t2278*t3916 + t2395*t3922 + t2429*t3927 - 0.03875*(4.e-6*t2433*t3916 + t2256*t3922 + t2217*t3927) + 0.80321*(-4.e-6*t2256*t3916 + t2555*t3922 - 1.*t2256*t3927) + 0.14871*(t2448*t3916 + 4.e-6*t2256*t3922 + 4.e-6*t2433*t3927);
  p_output1[12]=-1.*t1904*t3055*t3559 + t3175*t3911 + t3228*t3973 + t2278*t3987 + t2395*t4009 + t2429*t4024 - 0.03875*(4.e-6*t2433*t3987 + t2256*t4009 + t2217*t4024) + 0.80321*(-4.e-6*t2256*t3987 + t2555*t4009 - 1.*t2256*t4024) + 0.14871*(t2448*t3987 + 4.e-6*t2256*t4009 + 4.e-6*t2433*t4024);
  p_output1[13]=t3457*t4131 + t3481*t4161 + t3498*t4171 + 0.14871*(-4.e-6*t2256*t4131 - 1.6e-11*t2256*t4161 + 4.e-6*t2217*t4171) + 0.80321*(-1.*t2217*t4131 - 4.e-6*t2217*t4161 - 1.000000000016*t2256*t4171) - 0.03875*(t2217*t4171 + t4221 + t4223);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-1.*t1904*t1943*t3559 + t1192*t3902 + t1634*t3911 + t1790*t3973 + t2429*t4131 + t2278*t4161 + t2395*t4171 + 0.14871*(4.e-6*t2433*t4131 + t2448*t4161 + 4.e-6*t2256*t4171) - 0.03875*(t2217*t4131 + 4.e-6*t2433*t4161 + t2256*t4171) + 0.80321*(t2555*t4171 + t4221 + t4223) + t3825*t997;
  p_output1[17]=-1.*t1042*t1192*t1904*t3563 + t1634*t4296 + t1790*t4310 + t2278*t4321 + t2395*t4335 + t2429*t4351 - 0.03875*(4.e-6*t2433*t4321 + t2256*t4335 + t2217*t4351) + 0.80321*(-4.e-6*t2256*t4321 + t2555*t4335 - 1.*t2256*t4351) + 0.14871*(t2448*t4321 + 4.e-6*t2256*t4335 + 4.e-6*t2433*t4351) - 1.*t1943*t3563*t8 + t1904*t3563*t421*t997;
  p_output1[18]=t1192*t4426 + t1634*t4453 + t1790*t4465 + t2278*t4479 + t2395*t4484 + t2429*t4507 - 0.03875*(4.e-6*t2433*t4479 + t2256*t4484 + t2217*t4507) + 0.80321*(-4.e-6*t2256*t4479 + t2555*t4484 - 1.*t2256*t4507) + 0.14871*(t2448*t4479 + 4.e-6*t2256*t4484 + 4.e-6*t2433*t4507) + t3587*t997;
  p_output1[19]=t3012*t4426 + t3021*t4561 + t1634*t4568 + t1790*t4572 + t2278*t4592 + t2395*t4601 + t2429*t4614 - 0.03875*(4.e-6*t2433*t4592 + t2256*t4601 + t2217*t4614) + 0.80321*(-4.e-6*t2256*t4592 + t2555*t4601 - 1.*t2256*t4614) + 0.14871*(t2448*t4592 + 4.e-6*t2256*t4601 + 4.e-6*t2433*t4614);
  p_output1[20]=t1904*t3055*t3563 + t3175*t4572 + t3228*t4692 + t2278*t4702 + t2395*t4719 + t2429*t4763 - 0.03875*(4.e-6*t2433*t4702 + t2256*t4719 + t2217*t4763) + 0.80321*(-4.e-6*t2256*t4702 + t2555*t4719 - 1.*t2256*t4763) + 0.14871*(t2448*t4702 + 4.e-6*t2256*t4719 + 4.e-6*t2433*t4763);
  p_output1[21]=t3457*t4915 + t3481*t4925 + t3498*t4929 + 0.14871*(-4.e-6*t2256*t4915 - 1.6e-11*t2256*t4925 + 4.e-6*t2217*t4929) - 0.03875*(-1.*t2256*t4915 - 4.e-6*t2256*t4925 + t2217*t4929) + 0.80321*(-1.*t2217*t4915 - 4.e-6*t2217*t4925 - 1.000000000016*t2256*t4929);
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

#include "J_h_FlFoot_DiagonalStance2.hh"

namespace DiagonalStance2
{

void J_h_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
