/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:16:50 GMT+01:00
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
  double t841;
  double t83;
  double t431;
  double t1067;
  double t873;
  double t987;
  double t1146;
  double t1664;
  double t1677;
  double t1693;
  double t69;
  double t1044;
  double t1310;
  double t1375;
  double t2105;
  double t2119;
  double t2171;
  double t2194;
  double t2444;
  double t2460;
  double t2463;
  double t2469;
  double t2538;
  double t2543;
  double t2551;
  double t2560;
  double t1867;
  double t1945;
  double t1948;
  double t2028;
  double t2718;
  double t3014;
  double t3146;
  double t3163;
  double t3167;
  double t3176;
  double t3224;
  double t3231;
  double t3002;
  double t3051;
  double t3065;
  double t3072;
  double t3292;
  double t3312;
  double t3333;
  double t3341;
  double t3342;
  double t3352;
  double t3493;
  double t3501;
  double t3507;
  double t3561;
  double t3562;
  double t3577;
  double t2088;
  double t2178;
  double t2344;
  double t2380;
  double t2471;
  double t2486;
  double t2491;
  double t2566;
  double t2568;
  double t2590;
  double t2597;
  double t2629;
  double t2636;
  double t3648;
  double t3655;
  double t3656;
  double t3629;
  double t3633;
  double t3638;
  double t3667;
  double t3674;
  double t3678;
  double t2774;
  double t2795;
  double t3552;
  double t3579;
  double t3586;
  double t3597;
  double t3608;
  double t3610;
  double t3614;
  double t3617;
  double t3621;
  double t3626;
  double t3639;
  double t3657;
  double t3681;
  double t3694;
  double t3710;
  double t3711;
  double t3713;
  double t3723;
  double t3741;
  double t3752;
  double t3757;
  double t3758;
  double t3770;
  double t3779;
  double t3788;
  double t3789;
  double t3795;
  double t3797;
  double t3510;
  double t3522;
  double t3555;
  double t3887;
  double t3891;
  double t3892;
  double t3897;
  double t3898;
  double t3899;
  double t3942;
  double t3956;
  double t3960;
  double t3962;
  double t3995;
  double t3998;
  double t4002;
  double t4005;
  double t3973;
  double t3976;
  double t3980;
  double t3989;
  double t4096;
  double t3920;
  double t3921;
  double t3931;
  double t3936;
  double t4122;
  double t4125;
  double t4130;
  double t4133;
  double t4135;
  double t4143;
  double t4158;
  double t4166;
  double t4168;
  double t4173;
  double t4192;
  double t4193;
  double t4197;
  double t4214;
  double t4175;
  double t4178;
  double t4181;
  double t4182;
  double t4310;
  double t4309;
  double t4311;
  double t4312;
  double t4314;
  double t4317;
  double t4320;
  double t4323;
  double t4324;
  double t4325;
  double t4339;
  double t4340;
  double t4346;
  double t4358;
  double t4363;
  double t4364;
  double t4368;
  double t4388;
  double t4389;
  double t4395;
  double t4398;
  double t4375;
  double t4377;
  double t4378;
  double t4380;
  double t4462;
  double t4465;
  double t4472;
  double t4476;
  double t4481;
  double t4485;
  double t4491;
  double t4496;
  double t4498;
  double t4511;
  double t4513;
  double t4516;
  double t4545;
  double t4551;
  double t4560;
  double t4523;
  double t4524;
  double t4528;
  double t4575;
  double t4579;
  double t4585;
  double t3819;
  double t3820;
  double t3832;
  double t3841;
  double t4659;
  double t4664;
  double t4665;
  double t4667;
  double t4669;
  double t4671;
  double t4672;
  double t4687;
  double t4691;
  double t4694;
  double t4677;
  double t4681;
  double t4682;
  double t4699;
  double t4701;
  double t4704;
  double t363;
  double t484;
  double t692;
  double t1393;
  double t1407;
  double t1454;
  double t1694;
  double t1766;
  double t1827;
  double t4780;
  double t4783;
  double t4784;
  double t4812;
  double t4813;
  double t4818;
  double t4826;
  double t4830;
  double t4836;
  double t4838;
  double t4839;
  double t4790;
  double t4793;
  double t4798;
  double t4799;
  double t3090;
  double t3094;
  double t3125;
  double t3233;
  double t3272;
  double t3283;
  double t3354;
  double t3362;
  double t3372;
  double t4922;
  double t4929;
  double t4930;
  double t4934;
  double t4903;
  double t4906;
  double t4908;
  double t4910;
  double t4943;
  double t4951;
  double t5010;
  double t5011;
  double t5012;
  double t5017;
  double t5020;
  double t5021;
  double t5024;
  double t5025;
  double t5030;
  double t5033;
  double t5046;
  double t5047;
  double t5049;
  double t5054;
  double t5038;
  double t5039;
  double t5040;
  double t5043;
  double t5112;
  double t5120;
  double t5122;
  double t5128;
  double t5130;
  double t5138;
  double t5142;
  double t5145;
  double t5164;
  double t5166;
  double t5170;
  double t5150;
  double t5152;
  double t5153;
  double t5172;
  double t5173;
  double t5174;
  double t5231;
  double t5235;
  double t5236;
  double t5241;
  double t5246;
  double t5249;
  double t5253;
  double t5268;
  double t5272;
  double t5274;
  double t5256;
  double t5257;
  double t5260;
  double t5283;
  double t5288;
  double t5289;
  double t5360;
  double t5361;
  double t5362;
  double t5373;
  double t5374;
  double t5383;
  double t5389;
  double t5391;
  double t5392;
  double t5394;
  double t5364;
  double t5366;
  double t5367;
  double t5370;
  double t5469;
  double t5473;
  double t5476;
  double t5477;
  double t5458;
  double t5461;
  double t5462;
  double t5466;
  double t5481;
  double t5482;
  double t4980;
  double t4983;
  t841 = Cos(var1[4]);
  t83 = Cos(var1[7]);
  t431 = Sin(var1[7]);
  t1067 = Cos(var1[5]);
  t873 = Cos(var1[6]);
  t987 = Sin(var1[5]);
  t1146 = Sin(var1[6]);
  t1664 = t841*t1067*t873;
  t1677 = -1.*t841*t987*t1146;
  t1693 = t1664 + t1677;
  t69 = Sin(var1[4]);
  t1044 = -1.*t841*t873*t987;
  t1310 = -1.*t841*t1067*t1146;
  t1375 = t1044 + t1310;
  t2105 = Cos(var1[8]);
  t2119 = -1.*t2105;
  t2171 = 1. + t2119;
  t2194 = Sin(var1[8]);
  t2444 = -1.*t83*t69;
  t2460 = -4.e-6*t83*t1375;
  t2463 = -1.000000000016*t1693*t431;
  t2469 = t2444 + t2460 + t2463;
  t2538 = t83*t1693;
  t2543 = -1.*t69*t431;
  t2551 = -4.e-6*t1375*t431;
  t2560 = t2538 + t2543 + t2551;
  t1867 = 4.e-6*t83*t1693;
  t1945 = -4.e-6*t69*t431;
  t1948 = -1.6e-11*t1375*t431;
  t2028 = t1867 + t1945 + t1948;
  t2718 = -1. + t2105;
  t3014 = -1. + t83;
  t3146 = 4.e-6*t3014*t69;
  t3163 = 1.6e-11*t3014;
  t3167 = 1. + t3163;
  t3176 = t3167*t1375;
  t3224 = 4.e-6*t1693*t431;
  t3231 = t3146 + t3176 + t3224;
  t3002 = t83*t69;
  t3051 = 4.e-6*t3014*t1375;
  t3065 = t1693*t431;
  t3072 = t3002 + t3051 + t3065;
  t3292 = -1.*t83;
  t3312 = 1. + t3292;
  t3333 = -1.000000000016*t3312;
  t3341 = 1. + t3333;
  t3342 = t3341*t1693;
  t3352 = t3342 + t2543 + t2551;
  t3493 = -1.*t873;
  t3501 = 1. + t3493;
  t3507 = 0.15121*t3501;
  t3561 = -1.*t841*t1067*t873;
  t3562 = t841*t987*t1146;
  t3577 = t3561 + t3562;
  t2088 = -1.284e-8*var1[8];
  t2178 = -1.5499600000248e-7*t2171;
  t2344 = 2.012840000032e-6*t2194;
  t2380 = t2088 + t2178 + t2344;
  t2471 = 0.503210000016051*t2171;
  t2486 = 0.03874900000062*t2194;
  t2491 = t2471 + t2486;
  t2566 = 5.136e-14*var1[8];
  t2568 = -0.03874900000062*t2171;
  t2590 = 0.503210000008*t2194;
  t2597 = t2566 + t2568 + t2590;
  t2629 = -1.000000000016*t2171;
  t2636 = 1. + t2629;
  t3648 = t3341*t1375;
  t3655 = -4.e-6*t3577*t431;
  t3656 = t3648 + t3655;
  t3629 = t3167*t3577;
  t3633 = 4.e-6*t1375*t431;
  t3638 = t3629 + t3633;
  t3667 = 4.e-6*t3014*t3577;
  t3674 = t1375*t431;
  t3678 = t3667 + t3674;
  t2774 = 1.6e-11*t2718;
  t2795 = 1. + t2774;
  t3552 = 0.15121*t1146;
  t3579 = -1.2484e-7*var1[7];
  t3586 = -1.5499600000248e-7*t3312;
  t3597 = 1.124840000016e-6*t431;
  t3608 = t3579 + t3586 + t3597;
  t3610 = t3577*t3608;
  t3614 = 0.281210000008499*t3312;
  t3617 = 0.03874900000062*t431;
  t3621 = t3614 + t3617;
  t3626 = t1375*t3621;
  t3639 = t3638*t2380;
  t3657 = t3656*t2491;
  t3681 = t3678*t2597;
  t3694 = t2636*t3656;
  t3710 = -4.e-6*t3638*t2194;
  t3711 = -1.*t3678*t2194;
  t3713 = t3694 + t3710 + t3711;
  t3723 = 0.80321*t3713;
  t3741 = t2795*t3638;
  t3752 = 4.e-6*t2718*t3678;
  t3757 = 4.e-6*t3656*t2194;
  t3758 = t3741 + t3752 + t3757;
  t3770 = 0.14871*t3758;
  t3779 = 4.e-6*t2718*t3638;
  t3788 = t2105*t3678;
  t3789 = t3656*t2194;
  t3795 = t3779 + t3788 + t3789;
  t3797 = -0.03875*t3795;
  t3510 = -0.15121*t1146;
  t3522 = t3507 + t3510;
  t3555 = t3507 + t3552;
  t3887 = t873*t69*t987;
  t3891 = t1067*t69*t1146;
  t3892 = t3887 + t3891;
  t3897 = -1.*t1067*t873*t69;
  t3898 = t69*t987*t1146;
  t3899 = t3897 + t3898;
  t3942 = 4.e-6*t841*t3014;
  t3956 = t3167*t3892;
  t3960 = 4.e-6*t3899*t431;
  t3962 = t3942 + t3956 + t3960;
  t3995 = t841*t83;
  t3998 = 4.e-6*t3014*t3892;
  t4002 = t3899*t431;
  t4005 = t3995 + t3998 + t4002;
  t3973 = t3341*t3899;
  t3976 = -1.*t841*t431;
  t3980 = -4.e-6*t3892*t431;
  t3989 = t3973 + t3976 + t3980;
  t4096 = Sin(var1[3]);
  t3920 = 4.9936e-13*var1[7];
  t3921 = -0.03874900000062*t3312;
  t3931 = 0.281210000004*t431;
  t3936 = t3920 + t3921 + t3931;
  t4122 = -1.*t841*t873*t4096*t987;
  t4125 = -1.*t841*t1067*t4096*t1146;
  t4130 = t4122 + t4125;
  t4133 = t841*t1067*t873*t4096;
  t4135 = -1.*t841*t4096*t987*t1146;
  t4143 = t4133 + t4135;
  t4158 = 4.e-6*t3014*t4096*t69;
  t4166 = t3167*t4130;
  t4168 = 4.e-6*t4143*t431;
  t4173 = t4158 + t4166 + t4168;
  t4192 = t83*t4096*t69;
  t4193 = 4.e-6*t3014*t4130;
  t4197 = t4143*t431;
  t4214 = t4192 + t4193 + t4197;
  t4175 = t3341*t4143;
  t4178 = -1.*t4096*t69*t431;
  t4181 = -4.e-6*t4130*t431;
  t4182 = t4175 + t4178 + t4181;
  t4310 = Cos(var1[3]);
  t4309 = -1.*t1067*t4096;
  t4311 = -1.*t4310*t69*t987;
  t4312 = t4309 + t4311;
  t4314 = t4310*t1067*t69;
  t4317 = -1.*t4096*t987;
  t4320 = t4314 + t4317;
  t4323 = t873*t4312;
  t4324 = -1.*t4320*t1146;
  t4325 = t4323 + t4324;
  t4339 = t873*t4320;
  t4340 = t4312*t1146;
  t4346 = t4339 + t4340;
  t4358 = -4.e-6*t4310*t841*t3014;
  t4363 = t3167*t4325;
  t4364 = 4.e-6*t4346*t431;
  t4368 = t4358 + t4363 + t4364;
  t4388 = -1.*t4310*t841*t83;
  t4389 = 4.e-6*t3014*t4325;
  t4395 = t4346*t431;
  t4398 = t4388 + t4389 + t4395;
  t4375 = t3341*t4346;
  t4377 = t4310*t841*t431;
  t4378 = -4.e-6*t4325*t431;
  t4380 = t4375 + t4377 + t4378;
  t4462 = -1.*t1067*t4096*t69;
  t4465 = -1.*t4310*t987;
  t4472 = t4462 + t4465;
  t4476 = t4310*t1067;
  t4481 = -1.*t4096*t69*t987;
  t4485 = t4476 + t4481;
  t4491 = t873*t4472;
  t4496 = -1.*t4485*t1146;
  t4498 = t4491 + t4496;
  t4511 = t873*t4485;
  t4513 = t4472*t1146;
  t4516 = t4511 + t4513;
  t4545 = t3341*t4516;
  t4551 = -4.e-6*t4498*t431;
  t4560 = t4545 + t4551;
  t4523 = t3167*t4498;
  t4524 = 4.e-6*t4516*t431;
  t4528 = t4523 + t4524;
  t4575 = 4.e-6*t3014*t4498;
  t4579 = t4516*t431;
  t4585 = t4575 + t4579;
  t3819 = -0.15121*t873;
  t3820 = t3819 + t3552;
  t3832 = 0.15121*t873;
  t3841 = t3832 + t3552;
  t4659 = t1067*t4096*t69;
  t4664 = t4310*t987;
  t4665 = t4659 + t4664;
  t4667 = -1.*t873*t4665;
  t4669 = t4667 + t4496;
  t4671 = -1.*t4665*t1146;
  t4672 = t4511 + t4671;
  t4687 = t3341*t4672;
  t4691 = -4.e-6*t4669*t431;
  t4694 = t4687 + t4691;
  t4677 = t3167*t4669;
  t4681 = 4.e-6*t4672*t431;
  t4682 = t4677 + t4681;
  t4699 = 4.e-6*t3014*t4669;
  t4701 = t4672*t431;
  t4704 = t4699 + t4701;
  t363 = 0.281210000004*t83;
  t484 = -0.03874900000062*t431;
  t692 = 4.9936e-13 + t363 + t484;
  t1393 = 1.124840000016e-6*t83;
  t1407 = -1.5499600000248e-7*t431;
  t1454 = -1.2484e-7 + t1393 + t1407;
  t1694 = 0.03874900000062*t83;
  t1766 = 0.281210000008499*t431;
  t1827 = t1694 + t1766;
  t4780 = t873*t4665;
  t4783 = t4485*t1146;
  t4784 = t4780 + t4783;
  t4812 = t841*t83*t4096;
  t4813 = -4.e-6*t83*t4672;
  t4818 = -1.000000000016*t4784*t431;
  t4826 = t4812 + t4813 + t4818;
  t4830 = t83*t4784;
  t4836 = t841*t4096*t431;
  t4838 = -4.e-6*t4672*t431;
  t4839 = t4830 + t4836 + t4838;
  t4790 = 4.e-6*t83*t4784;
  t4793 = 4.e-6*t841*t4096*t431;
  t4798 = -1.6e-11*t4672*t431;
  t4799 = t4790 + t4793 + t4798;
  t3090 = 0.503210000008*t2105;
  t3094 = -0.03874900000062*t2194;
  t3125 = 5.136e-14 + t3090 + t3094;
  t3233 = 2.012840000032e-6*t2105;
  t3272 = -1.5499600000248e-7*t2194;
  t3283 = -1.284e-8 + t3233 + t3272;
  t3354 = 0.03874900000062*t2105;
  t3362 = 0.503210000016051*t2194;
  t3372 = t3354 + t3362;
  t4922 = -4.e-6*t841*t3014*t4096;
  t4929 = t3167*t4672;
  t4930 = 4.e-6*t4784*t431;
  t4934 = t4922 + t4929 + t4930;
  t4903 = -1.*t841*t83*t4096;
  t4906 = 4.e-6*t3014*t4672;
  t4908 = t4784*t431;
  t4910 = t4903 + t4906 + t4908;
  t4943 = t3341*t4784;
  t4951 = t4943 + t4836 + t4838;
  t5010 = t4310*t841*t873*t987;
  t5011 = t4310*t841*t1067*t1146;
  t5012 = t5010 + t5011;
  t5017 = -1.*t4310*t841*t1067*t873;
  t5020 = t4310*t841*t987*t1146;
  t5021 = t5017 + t5020;
  t5024 = -4.e-6*t4310*t3014*t69;
  t5025 = t3167*t5012;
  t5030 = 4.e-6*t5021*t431;
  t5033 = t5024 + t5025 + t5030;
  t5046 = -1.*t4310*t83*t69;
  t5047 = 4.e-6*t3014*t5012;
  t5049 = t5021*t431;
  t5054 = t5046 + t5047 + t5049;
  t5038 = t3341*t5021;
  t5039 = t4310*t69*t431;
  t5040 = -4.e-6*t5012*t431;
  t5043 = t5038 + t5039 + t5040;
  t5112 = t1067*t4096;
  t5120 = t4310*t69*t987;
  t5122 = t5112 + t5120;
  t5128 = -1.*t5122*t1146;
  t5130 = t4339 + t5128;
  t5138 = t873*t5122;
  t5142 = t4320*t1146;
  t5145 = t5138 + t5142;
  t5164 = t3341*t5145;
  t5166 = -4.e-6*t5130*t431;
  t5170 = t5164 + t5166;
  t5150 = t3167*t5130;
  t5152 = 4.e-6*t5145*t431;
  t5153 = t5150 + t5152;
  t5172 = 4.e-6*t3014*t5130;
  t5173 = t5145*t431;
  t5174 = t5172 + t5173;
  t5231 = -1.*t4310*t1067*t69;
  t5235 = t4096*t987;
  t5236 = t5231 + t5235;
  t5241 = -1.*t873*t5236;
  t5246 = t5241 + t5128;
  t5249 = -1.*t5236*t1146;
  t5253 = t5138 + t5249;
  t5268 = t3341*t5253;
  t5272 = -4.e-6*t5246*t431;
  t5274 = t5268 + t5272;
  t5256 = t3167*t5246;
  t5257 = 4.e-6*t5253*t431;
  t5260 = t5256 + t5257;
  t5283 = 4.e-6*t3014*t5246;
  t5288 = t5253*t431;
  t5289 = t5283 + t5288;
  t5360 = t873*t5236;
  t5361 = t5122*t1146;
  t5362 = t5360 + t5361;
  t5373 = -4.e-6*t83*t5253;
  t5374 = -1.000000000016*t5362*t431;
  t5383 = t4388 + t5373 + t5374;
  t5389 = t83*t5362;
  t5391 = -1.*t4310*t841*t431;
  t5392 = -4.e-6*t5253*t431;
  t5394 = t5389 + t5391 + t5392;
  t5364 = 4.e-6*t83*t5362;
  t5366 = -4.e-6*t4310*t841*t431;
  t5367 = -1.6e-11*t5253*t431;
  t5370 = t5364 + t5366 + t5367;
  t5469 = 4.e-6*t4310*t841*t3014;
  t5473 = t3167*t5253;
  t5476 = 4.e-6*t5362*t431;
  t5477 = t5469 + t5473 + t5476;
  t5458 = t4310*t841*t83;
  t5461 = 4.e-6*t3014*t5253;
  t5462 = t5362*t431;
  t5466 = t5458 + t5461 + t5462;
  t5481 = t3341*t5362;
  t5482 = t5481 + t5391 + t5392;
  t4980 = -4.e-6*t4934*t2194;
  t4983 = -1.*t4910*t2194;
  p_output1[0]=var2[0] + (t3608*t3892 + t3621*t3899 + t2380*t3962 + t2491*t3989 + t2597*t4005 - 0.03875*(4.e-6*t2718*t3962 + t2194*t3989 + t2105*t4005) + 0.80321*(-4.e-6*t2194*t3962 + t2636*t3989 - 1.*t2194*t4005) + 0.14871*(t2795*t3962 + 4.e-6*t2194*t3989 + 4.e-6*t2718*t4005) - 1.*t1067*t3555*t69 + t3936*t841 + t3522*t69*t987)*var2[4] + (t3610 + t3626 + t3639 + t3657 + t3681 + t3723 + t3770 + t3797 - 1.*t1067*t3522*t841 - 1.*t3555*t841*t987)*var2[5] + (t3610 + t3626 + t3639 + t3657 + t3681 + t3723 + t3770 + t3797 + t1067*t3841*t841 - 1.*t3820*t841*t987)*var2[6] + (t1375*t1454 + t1693*t1827 + t2028*t2380 + t2469*t2491 + t2560*t2597 + 0.80321*(-4.e-6*t2028*t2194 - 1.*t2194*t2560 + t2469*t2636) - 0.03875*(t2194*t2469 + t2105*t2560 + 4.e-6*t2028*t2718) + 0.14871*(4.e-6*t2194*t2469 + 4.e-6*t2560*t2718 + t2028*t2795) + t69*t692)*var2[7] + (t3072*t3125 + t3231*t3283 + 0.14871*(-4.e-6*t2194*t3072 - 1.6e-11*t2194*t3231 + 4.e-6*t2105*t3352) - 0.03875*(-1.*t2194*t3072 - 4.e-6*t2194*t3231 + t2105*t3352) + 0.80321*(-1.*t2105*t3072 - 4.e-6*t2105*t3231 - 1.000000000016*t2194*t3352) + t3352*t3372)*var2[8];
  p_output1[1]=var2[1] + (t3522*t4312 + t3555*t4320 + t3608*t4325 + t3621*t4346 + t2380*t4368 + t2491*t4380 + t2597*t4398 - 0.03875*(4.e-6*t2718*t4368 + t2194*t4380 + t2105*t4398) + 0.80321*(-4.e-6*t2194*t4368 + t2636*t4380 - 1.*t2194*t4398) + 0.14871*(t2795*t4368 + 4.e-6*t2194*t4380 + 4.e-6*t2718*t4398) - 1.*t3936*t4310*t841)*var2[3] + (t3608*t4130 + t3621*t4143 + t2380*t4173 + t2491*t4182 + t2597*t4214 - 0.03875*(4.e-6*t2718*t4173 + t2194*t4182 + t2105*t4214) + 0.80321*(-4.e-6*t2194*t4173 + t2636*t4182 - 1.*t2194*t4214) + 0.14871*(t2795*t4173 + 4.e-6*t2194*t4182 + 4.e-6*t2718*t4214) + t3936*t4096*t69 + t1067*t3555*t4096*t841 - 1.*t3522*t4096*t841*t987)*var2[4] + (t3522*t4472 + t3555*t4485 + t3608*t4498 + t3621*t4516 + t2380*t4528 + t2491*t4560 + t2597*t4585 - 0.03875*(4.e-6*t2718*t4528 + t2194*t4560 + t2105*t4585) + 0.80321*(-4.e-6*t2194*t4528 + t2636*t4560 - 1.*t2194*t4585) + 0.14871*(t2795*t4528 + 4.e-6*t2194*t4560 + 4.e-6*t2718*t4585))*var2[5] + (t3820*t4485 + t3841*t4665 + t3608*t4669 + t3621*t4672 + t2380*t4682 + t2491*t4694 + t2597*t4704 - 0.03875*(4.e-6*t2718*t4682 + t2194*t4694 + t2105*t4704) + 0.80321*(-4.e-6*t2194*t4682 + t2636*t4694 - 1.*t2194*t4704) + 0.14871*(t2795*t4682 + 4.e-6*t2194*t4694 + 4.e-6*t2718*t4704))*var2[6] + (t1454*t4672 + t1827*t4784 + t2380*t4799 + t2491*t4826 + t2597*t4839 - 0.03875*(4.e-6*t2718*t4799 + t2194*t4826 + t2105*t4839) + 0.80321*(-4.e-6*t2194*t4799 + t2636*t4826 - 1.*t2194*t4839) + 0.14871*(t2795*t4799 + 4.e-6*t2194*t4826 + 4.e-6*t2718*t4839) - 1.*t4096*t692*t841)*var2[7] + (t3125*t4910 + t3283*t4934 + t3372*t4951 + 0.14871*(-4.e-6*t2194*t4910 - 1.6e-11*t2194*t4934 + 4.e-6*t2105*t4951) + 0.80321*(-1.*t2105*t4910 - 4.e-6*t2105*t4934 - 1.000000000016*t2194*t4951) - 0.03875*(t2105*t4951 + t4980 + t4983))*var2[8];
  p_output1[2]=var2[2] + (t3522*t4485 + t3555*t4665 + t3608*t4672 + t3621*t4784 + t2597*t4910 + t2380*t4934 + t2491*t4951 + 0.14871*(4.e-6*t2718*t4910 + t2795*t4934 + 4.e-6*t2194*t4951) - 0.03875*(t2105*t4910 + 4.e-6*t2718*t4934 + t2194*t4951) + 0.80321*(t2636*t4951 + t4980 + t4983) - 1.*t3936*t4096*t841)*var2[3] + (t3608*t5012 + t3621*t5021 + t2380*t5033 + t2491*t5043 + t2597*t5054 - 0.03875*(4.e-6*t2718*t5033 + t2194*t5043 + t2105*t5054) + 0.80321*(-4.e-6*t2194*t5033 + t2636*t5043 - 1.*t2194*t5054) + 0.14871*(t2795*t5033 + 4.e-6*t2194*t5043 + 4.e-6*t2718*t5054) - 1.*t3936*t4310*t69 - 1.*t1067*t3555*t4310*t841 + t3522*t4310*t841*t987)*var2[4] + (t3522*t4320 + t3555*t5122 + t3608*t5130 + t3621*t5145 + t2380*t5153 + t2491*t5170 + t2597*t5174 - 0.03875*(4.e-6*t2718*t5153 + t2194*t5170 + t2105*t5174) + 0.80321*(-4.e-6*t2194*t5153 + t2636*t5170 - 1.*t2194*t5174) + 0.14871*(t2795*t5153 + 4.e-6*t2194*t5170 + 4.e-6*t2718*t5174))*var2[5] + (t3820*t5122 + t3841*t5236 + t3608*t5246 + t3621*t5253 + t2380*t5260 + t2491*t5274 + t2597*t5289 - 0.03875*(4.e-6*t2718*t5260 + t2194*t5274 + t2105*t5289) + 0.80321*(-4.e-6*t2194*t5260 + t2636*t5274 - 1.*t2194*t5289) + 0.14871*(t2795*t5260 + 4.e-6*t2194*t5274 + 4.e-6*t2718*t5289))*var2[6] + (t1454*t5253 + t1827*t5362 + t2380*t5370 + t2491*t5383 + t2597*t5394 - 0.03875*(4.e-6*t2718*t5370 + t2194*t5383 + t2105*t5394) + 0.80321*(-4.e-6*t2194*t5370 + t2636*t5383 - 1.*t2194*t5394) + 0.14871*(t2795*t5370 + 4.e-6*t2194*t5383 + 4.e-6*t2718*t5394) + t4310*t692*t841)*var2[7] + (t3125*t5466 + t3283*t5477 + t3372*t5482 + 0.14871*(-4.e-6*t2194*t5466 - 1.6e-11*t2194*t5477 + 4.e-6*t2105*t5482) - 0.03875*(-1.*t2194*t5466 - 4.e-6*t2194*t5477 + t2105*t5482) + 0.80321*(-1.*t2105*t5466 - 4.e-6*t2105*t5477 - 1.000000000016*t2194*t5482))*var2[8];
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

#include "impact_velocity_FlFoot.hh"

namespace TrotStance1
{

void impact_velocity_FlFoot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
