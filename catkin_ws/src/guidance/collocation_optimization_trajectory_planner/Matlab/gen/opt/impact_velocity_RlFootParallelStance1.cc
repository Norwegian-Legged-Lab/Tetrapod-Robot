/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:29:33 GMT+01:00
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
  double t35;
  double t40;
  double t85;
  double t304;
  double t43;
  double t250;
  double t391;
  double t325;
  double t334;
  double t587;
  double t1410;
  double t1484;
  double t1500;
  double t1652;
  double t178;
  double t143;
  double t379;
  double t805;
  double t821;
  double t233;
  double t1256;
  double t1257;
  double t1265;
  double t1625;
  double t70;
  double t1812;
  double t2247;
  double t1743;
  double t859;
  double t2406;
  double t981;
  double t2049;
  double t2489;
  double t1878;
  double t1943;
  double t2039;
  double t2076;
  double t2159;
  double t2164;
  double t2478;
  double t2299;
  double t2342;
  double t2347;
  double t2409;
  double t2412;
  double t2443;
  double t2691;
  double t2703;
  double t2712;
  double t2721;
  double t2748;
  double t2787;
  double t1702;
  double t2823;
  double t1783;
  double t3002;
  double t3033;
  double t2218;
  double t2866;
  double t3337;
  double t3391;
  double t3230;
  double t3574;
  double t3581;
  double t3341;
  double t3513;
  double t3344;
  double t3368;
  double t3375;
  double t3414;
  double t3415;
  double t3435;
  double t3444;
  double t3445;
  double t3454;
  double t3582;
  double t3585;
  double t3589;
  double t3597;
  double t3598;
  double t3609;
  double t3611;
  double t3628;
  double t3478;
  double t3735;
  double t3753;
  double t3767;
  double t3769;
  double t3790;
  double t3798;
  double t3816;
  double t3830;
  double t3258;
  double t3893;
  double t3659;
  double t3940;
  double t3951;
  double t3981;
  double t4029;
  double t1381;
  double t1573;
  double t1727;
  double t1729;
  double t1784;
  double t1803;
  double t1805;
  double t4089;
  double t4101;
  double t4103;
  double t2464;
  double t2469;
  double t2480;
  double t2488;
  double t2514;
  double t2541;
  double t2552;
  double t2199;
  double t2210;
  double t2231;
  double t2240;
  double t2277;
  double t2284;
  double t2287;
  double t3088;
  double t4106;
  double t4108;
  double t4109;
  double t3152;
  double t4114;
  double t4117;
  double t4118;
  double t3128;
  double t3135;
  double t4148;
  double t4161;
  double t4167;
  double t2833;
  double t2884;
  double t2892;
  double t2867;
  double t2940;
  double t2945;
  double t3049;
  double t3037;
  double t4236;
  double t4014;
  double t4016;
  double t4018;
  double t4020;
  double t4025;
  double t4033;
  double t4034;
  double t4036;
  double t4039;
  double t4049;
  double t4061;
  double t4062;
  double t4063;
  double t4069;
  double t4078;
  double t4086;
  double t4087;
  double t4105;
  double t4113;
  double t4146;
  double t4171;
  double t4175;
  double t4178;
  double t4192;
  double t4195;
  double t4198;
  double t4201;
  double t4206;
  double t4208;
  double t4212;
  double t4214;
  double t4216;
  double t4217;
  double t4220;
  double t4225;
  double t4227;
  double t3995;
  double t4001;
  double t3961;
  double t3988;
  double t4311;
  double t4312;
  double t4320;
  double t4331;
  double t4336;
  double t4340;
  double t4351;
  double t4359;
  double t4363;
  double t4366;
  double t4371;
  double t4373;
  double t4376;
  double t4377;
  double t4387;
  double t4389;
  double t4393;
  double t4397;
  double t4264;
  double t4272;
  double t4276;
  double t4284;
  double t4285;
  double t4287;
  double t4290;
  double t4475;
  double t4489;
  double t4491;
  double t4493;
  double t4509;
  double t4518;
  double t4521;
  double t4526;
  double t4535;
  double t4545;
  double t4548;
  double t4555;
  double t4556;
  double t4560;
  double t4561;
  double t4571;
  double t4576;
  double t4577;
  double t4579;
  double t4667;
  double t4672;
  double t4677;
  double t4682;
  double t4692;
  double t4695;
  double t4706;
  double t4710;
  double t4711;
  double t4712;
  double t4730;
  double t4739;
  double t4740;
  double t4755;
  double t4760;
  double t4762;
  double t4763;
  double t4773;
  double t4775;
  double t4779;
  double t4782;
  double t4789;
  double t4794;
  double t4795;
  double t4801;
  double t4903;
  double t4906;
  double t4907;
  double t4915;
  double t4918;
  double t4919;
  double t4924;
  double t4927;
  double t4928;
  double t4930;
  double t4936;
  double t4939;
  double t4945;
  double t4952;
  double t4953;
  double t4960;
  double t4962;
  double t4964;
  double t4973;
  double t4974;
  double t4978;
  double t4237;
  double t4243;
  double t4251;
  double t5047;
  double t5051;
  double t5055;
  double t5066;
  double t5070;
  double t5074;
  double t5085;
  double t5094;
  double t5097;
  double t5104;
  double t5117;
  double t5119;
  double t5125;
  double t5137;
  double t5147;
  double t5148;
  double t46;
  double t49;
  double t90;
  double t115;
  double t125;
  double t138;
  double t190;
  double t213;
  double t257;
  double t265;
  double t281;
  double t287;
  double t972;
  double t979;
  double t982;
  double t983;
  double t1042;
  double t1067;
  double t5242;
  double t5243;
  double t5245;
  double t5252;
  double t5256;
  double t5263;
  double t5266;
  double t5271;
  double t5272;
  double t5274;
  double t5275;
  double t5281;
  double t5282;
  double t5285;
  double t5286;
  double t3246;
  double t3255;
  double t3271;
  double t3288;
  double t3299;
  double t3316;
  double t3481;
  double t3499;
  double t3515;
  double t3546;
  double t3562;
  double t3566;
  double t3643;
  double t3649;
  double t3676;
  double t3687;
  double t3691;
  double t3716;
  double t3841;
  double t5327;
  double t5328;
  double t5329;
  double t5330;
  double t5334;
  double t5336;
  double t5339;
  double t5341;
  double t3856;
  double t5343;
  double t5344;
  double t5351;
  double t5355;
  double t3888;
  double t3896;
  double t3904;
  double t3913;
  double t5432;
  double t5433;
  double t5435;
  double t5446;
  double t5449;
  double t5451;
  double t5456;
  double t5462;
  double t5464;
  double t5469;
  double t5478;
  double t5480;
  double t5482;
  double t5484;
  double t5487;
  double t5488;
  double t5492;
  double t5495;
  double t5566;
  double t5567;
  double t5568;
  double t5572;
  double t5574;
  double t5575;
  double t5581;
  double t5582;
  double t5590;
  double t5596;
  double t5600;
  double t5606;
  double t5607;
  double t5608;
  double t5623;
  double t5624;
  double t5630;
  double t5675;
  double t5677;
  double t5678;
  double t5681;
  double t5682;
  double t5686;
  double t5687;
  double t5692;
  double t5693;
  double t5694;
  double t5696;
  double t5698;
  double t5699;
  double t5706;
  double t5708;
  double t5711;
  double t5776;
  double t5777;
  double t5778;
  double t5782;
  double t5783;
  double t5784;
  double t5786;
  double t5788;
  double t5789;
  double t5791;
  double t5792;
  double t5796;
  double t5797;
  double t5799;
  double t5803;
  double t5854;
  double t5855;
  double t5856;
  double t5860;
  double t5864;
  double t5866;
  double t5875;
  double t5879;
  double t5888;
  double t5894;
  double t5896;
  double t5899;
  t35 = Cos(var1[13]);
  t40 = Sin(var1[13]);
  t85 = 4.e-6*t40;
  t304 = Cos(var1[4]);
  t43 = -2.8e-11*t40;
  t250 = 7.e-6*t40;
  t391 = Cos(var1[12]);
  t325 = Cos(var1[5]);
  t334 = Sin(var1[12]);
  t587 = Sin(var1[5]);
  t1410 = Cos(var1[14]);
  t1484 = -1.*t1410;
  t1500 = 1. + t1484;
  t1652 = Sin(var1[14]);
  t178 = -7.e-6*t35;
  t143 = Sin(var1[4]);
  t379 = -1.*t304*t325*t334;
  t805 = -1.*t391*t304*t587;
  t821 = t379 + t805;
  t233 = 4.e-6*t35;
  t1256 = t391*t304*t325;
  t1257 = -1.*t304*t334*t587;
  t1265 = t1256 + t1257;
  t1625 = 4.e-6*t1500;
  t70 = 7.e-6*t35;
  t1812 = -4.e-6*t40;
  t2247 = -2.8e-11*t1500;
  t1743 = 7.e-6*t1500;
  t859 = -1.*t35;
  t2406 = 2.8e-11*t40;
  t981 = -4.e-6*t35;
  t2049 = -7.e-6*t40;
  t2489 = -4.e-6*t1652;
  t1878 = t178 + t1812;
  t1943 = t1878*t143;
  t2039 = -6.5e-11*t40*t821;
  t2076 = t233 + t2049;
  t2159 = t2076*t1265;
  t2164 = t1943 + t2039 + t2159;
  t2478 = -1.*t1652;
  t2299 = -1.000000000049*t40*t143;
  t2342 = t70 + t1812;
  t2347 = t2342*t821;
  t2409 = t35 + t2406;
  t2412 = t2409*t1265;
  t2443 = t2299 + t2347 + t2412;
  t2691 = t859 + t2406;
  t2703 = t2691*t143;
  t2712 = t981 + t2049;
  t2721 = t2712*t821;
  t2748 = -1.000000000016*t40*t1265;
  t2787 = t2703 + t2721 + t2748;
  t1702 = -7.e-6*t1652;
  t2823 = -7.e-6*t1500;
  t1783 = 4.e-6*t1652;
  t3002 = -1. + t1410;
  t3033 = 4.e-6*t3002;
  t2218 = 7.e-6*t1652;
  t2866 = 2.8e-11*t1500;
  t3337 = 1. + t859;
  t3391 = -7.e-6*t3337;
  t3230 = -2.8e-11*t1652;
  t3574 = -1. + t35;
  t3581 = 4.e-6*t3574;
  t3341 = 2.8e-11*t3337;
  t3513 = 4.e-6*t1410;
  t3344 = -1.*t40;
  t3368 = t3341 + t3344;
  t3375 = t3368*t143;
  t3414 = t3391 + t1812;
  t3415 = t3414*t821;
  t3435 = -1.000000000016*t3337;
  t3444 = 1. + t3435;
  t3445 = t3444*t1265;
  t3454 = t3375 + t3415 + t3445;
  t3582 = t3581 + t2049;
  t3585 = t3582*t143;
  t3589 = -6.5e-11*t3337;
  t3597 = 1. + t3589;
  t3598 = t3597*t821;
  t3609 = t3391 + t85;
  t3611 = t3609*t1265;
  t3628 = t3585 + t3598 + t3611;
  t3478 = -7.e-6*t1410;
  t3735 = -1.000000000049*t3337;
  t3753 = 1. + t3735;
  t3767 = t3753*t143;
  t3769 = t3581 + t250;
  t3790 = t3769*t821;
  t3798 = t3341 + t40;
  t3816 = t3798*t1265;
  t3830 = t3767 + t3790 + t3816;
  t3258 = -4.e-6*t1410;
  t3893 = 2.8e-11*t1652;
  t3659 = 7.e-6*t1410;
  t3940 = -1.*t391;
  t3951 = 1. + t3940;
  t3981 = 0.15121*t334;
  t4029 = 7.e-6*t3337;
  t1381 = -2.598649999999999e-7*var1[14];
  t1573 = -2.3905277499999995e-16*t1500;
  t1727 = t1625 + t1702;
  t1729 = -0.038922999986*t1727;
  t1784 = t1743 + t1783;
  t1803 = -0.503149000008*t1784;
  t1805 = t1381 + t1573 + t1729 + t1803;
  t4089 = -1.*t391*t304*t325;
  t4101 = t304*t334*t587;
  t4103 = t4089 + t4101;
  t2464 = 1.8190549999999993e-12*var1[14];
  t2469 = -0.5031490000160505*t1500;
  t2480 = t2247 + t2478;
  t2488 = -0.038922999986*t2480;
  t2514 = t1743 + t2489;
  t2541 = -3.6777349999999994e-6*t2514;
  t2552 = t2464 + t2469 + t2488 + t2541;
  t2199 = 1.0394599999999997e-12*var1[14];
  t2210 = -0.03892299998790722*t1500;
  t2231 = t1625 + t2218;
  t2240 = -3.6777349999999994e-6*t2231;
  t2277 = t2247 + t1652;
  t2284 = -0.503149000008*t2277;
  t2287 = t2199 + t2210 + t2240 + t2284;
  t3088 = t3033 + t2218;
  t4106 = t3609*t821;
  t4108 = t3597*t4103;
  t4109 = t4106 + t4108;
  t3152 = t2866 + t1652;
  t4114 = t3444*t821;
  t4117 = t3414*t4103;
  t4118 = t4114 + t4117;
  t3128 = -1.000000000049*t1500;
  t3135 = 1. + t3128;
  t4148 = t3798*t821;
  t4161 = t3769*t4103;
  t4167 = t4148 + t4161;
  t2833 = t2823 + t2489;
  t2884 = -1.000000000016*t1500;
  t2892 = 1. + t2884;
  t2867 = t2866 + t2478;
  t2940 = -6.5e-11*t1500;
  t2945 = 1. + t2940;
  t3049 = t2823 + t1783;
  t3037 = t3033 + t1702;
  t4236 = 0.15121*t391;
  t4014 = 1.0248489999999998e-12*var1[13];
  t4016 = -0.28120900000849935*t3337;
  t4018 = -2.8e-11*t3337;
  t4020 = t4018 + t3344;
  t4025 = -0.038748999993*t4020;
  t4033 = t4029 + t1812;
  t4034 = -2.123459e-6*t4033;
  t4036 = t4014 + t4016 + t4025 + t4034;
  t4039 = t4036*t821;
  t4049 = -1.4640699999999997e-7*var1[13];
  t4061 = -1.38024835e-16*t3337;
  t4062 = 4.e-6*t3337;
  t4063 = t4062 + t2049;
  t4069 = -0.038748999993*t4063;
  t4078 = t4029 + t85;
  t4086 = -0.281209000004*t4078;
  t4087 = t4049 + t4061 + t4069 + t4086;
  t4105 = t4087*t4103;
  t4113 = t1805*t4109;
  t4146 = t2552*t4118;
  t4171 = t2287*t4167;
  t4175 = t3088*t4109;
  t4178 = t3152*t4118;
  t4192 = t3135*t4167;
  t4195 = t4175 + t4178 + t4192;
  t4198 = -0.038924*t4195;
  t4201 = t2833*t4109;
  t4206 = t2892*t4118;
  t4208 = t2867*t4167;
  t4212 = t4201 + t4206 + t4208;
  t4214 = -0.80315*t4212;
  t4216 = t2945*t4109;
  t4217 = t3049*t4118;
  t4220 = t3037*t4167;
  t4225 = t4216 + t4217 + t4220;
  t4227 = 0.148705*t4225;
  t3995 = -0.15121*t3951;
  t4001 = t3995 + t3981;
  t3961 = 0.15121*t3951;
  t3988 = t3961 + t3981;
  t4311 = t325*t334*t143;
  t4312 = t391*t143*t587;
  t4320 = t4311 + t4312;
  t4331 = -1.*t391*t325*t143;
  t4336 = t334*t143*t587;
  t4340 = t4331 + t4336;
  t4351 = t304*t3368;
  t4359 = t3414*t4320;
  t4363 = t3444*t4340;
  t4366 = t4351 + t4359 + t4363;
  t4371 = t304*t3582;
  t4373 = t3597*t4320;
  t4376 = t3609*t4340;
  t4377 = t4371 + t4373 + t4376;
  t4387 = t3753*t304;
  t4389 = t3769*t4320;
  t4393 = t3798*t4340;
  t4397 = t4387 + t4389 + t4393;
  t4264 = 5.856279999999999e-13*var1[13];
  t4272 = -0.0387489999948987*t3337;
  t4276 = t4062 + t250;
  t4284 = -2.123459e-6*t4276;
  t4285 = t4018 + t40;
  t4287 = -0.281209000004*t4285;
  t4290 = t4264 + t4272 + t4284 + t4287;
  t4475 = Sin(var1[3]);
  t4489 = -1.*t304*t325*t334*t4475;
  t4491 = -1.*t391*t304*t4475*t587;
  t4493 = t4489 + t4491;
  t4509 = t391*t304*t325*t4475;
  t4518 = -1.*t304*t334*t4475*t587;
  t4521 = t4509 + t4518;
  t4526 = t3368*t4475*t143;
  t4535 = t3414*t4493;
  t4545 = t3444*t4521;
  t4548 = t4526 + t4535 + t4545;
  t4555 = t3582*t4475*t143;
  t4556 = t3597*t4493;
  t4560 = t3609*t4521;
  t4561 = t4555 + t4556 + t4560;
  t4571 = t3753*t4475*t143;
  t4576 = t3769*t4493;
  t4577 = t3798*t4521;
  t4579 = t4571 + t4576 + t4577;
  t4667 = Cos(var1[3]);
  t4672 = t4667*t325*t143;
  t4677 = -1.*t4475*t587;
  t4682 = t4672 + t4677;
  t4692 = -1.*t325*t4475;
  t4695 = -1.*t4667*t143*t587;
  t4706 = t4692 + t4695;
  t4710 = -1.*t334*t4682;
  t4711 = t391*t4706;
  t4712 = t4710 + t4711;
  t4730 = t391*t4682;
  t4739 = t334*t4706;
  t4740 = t4730 + t4739;
  t4755 = -1.*t4667*t304*t3368;
  t4760 = t3414*t4712;
  t4762 = t3444*t4740;
  t4763 = t4755 + t4760 + t4762;
  t4773 = -1.*t4667*t304*t3582;
  t4775 = t3597*t4712;
  t4779 = t3609*t4740;
  t4782 = t4773 + t4775 + t4779;
  t4789 = -1.*t3753*t4667*t304;
  t4794 = t3769*t4712;
  t4795 = t3798*t4740;
  t4801 = t4789 + t4794 + t4795;
  t4903 = -1.*t325*t4475*t143;
  t4906 = -1.*t4667*t587;
  t4907 = t4903 + t4906;
  t4915 = t4667*t325;
  t4918 = -1.*t4475*t143*t587;
  t4919 = t4915 + t4918;
  t4924 = t334*t4907;
  t4927 = t391*t4919;
  t4928 = t4924 + t4927;
  t4930 = t391*t4907;
  t4936 = -1.*t334*t4919;
  t4939 = t4930 + t4936;
  t4945 = t3609*t4928;
  t4952 = t3597*t4939;
  t4953 = t4945 + t4952;
  t4960 = t3444*t4928;
  t4962 = t3414*t4939;
  t4964 = t4960 + t4962;
  t4973 = t3798*t4928;
  t4974 = t3769*t4939;
  t4978 = t4973 + t4974;
  t4237 = -0.15121*t334;
  t4243 = t4236 + t4237;
  t4251 = t4236 + t3981;
  t5047 = t325*t4475*t143;
  t5051 = t4667*t587;
  t5055 = t5047 + t5051;
  t5066 = -1.*t334*t5055;
  t5070 = t5066 + t4927;
  t5074 = -1.*t391*t5055;
  t5085 = t5074 + t4936;
  t5094 = t3609*t5070;
  t5097 = t3597*t5085;
  t5104 = t5094 + t5097;
  t5117 = t3444*t5070;
  t5119 = t3414*t5085;
  t5125 = t5117 + t5119;
  t5137 = t3798*t5070;
  t5147 = t3769*t5085;
  t5148 = t5137 + t5147;
  t46 = t35 + t43;
  t49 = -0.281209000004*t46;
  t90 = t70 + t85;
  t115 = -2.123459e-6*t90;
  t125 = -0.0387489999948987*t40;
  t138 = 5.856279999999999e-13 + t49 + t115 + t125;
  t190 = t178 + t85;
  t213 = -0.038748999993*t190;
  t257 = t233 + t250;
  t265 = -0.281209000004*t257;
  t281 = -1.38024835e-16*t40;
  t287 = -1.4640699999999997e-7 + t213 + t265 + t281;
  t972 = t859 + t43;
  t979 = -0.038748999993*t972;
  t982 = t981 + t250;
  t983 = -2.123459e-6*t982;
  t1042 = -0.28120900000849935*t40;
  t1067 = 1.0248489999999998e-12 + t979 + t983 + t1042;
  t5242 = t391*t5055;
  t5243 = t334*t4919;
  t5245 = t5242 + t5243;
  t5252 = -1.*t304*t1878*t4475;
  t5256 = -6.5e-11*t40*t5070;
  t5263 = t2076*t5245;
  t5266 = t5252 + t5256 + t5263;
  t5271 = 1.000000000049*t304*t40*t4475;
  t5272 = t2342*t5070;
  t5274 = t2409*t5245;
  t5275 = t5271 + t5272 + t5274;
  t5281 = -1.*t304*t2691*t4475;
  t5282 = t2712*t5070;
  t5285 = -1.000000000016*t40*t5245;
  t5286 = t5281 + t5282 + t5285;
  t3246 = t1484 + t3230;
  t3255 = -0.038922999986*t3246;
  t3271 = t3258 + t2218;
  t3288 = -3.6777349999999994e-6*t3271;
  t3299 = -0.5031490000160505*t1652;
  t3316 = 1.8190549999999993e-12 + t3255 + t3288 + t3299;
  t3481 = t3478 + t1783;
  t3499 = -0.038922999986*t3481;
  t3515 = t3513 + t2218;
  t3546 = -0.503149000008*t3515;
  t3562 = -2.3905277499999995e-16*t1652;
  t3566 = -2.598649999999999e-7 + t3499 + t3546 + t3562;
  t3643 = t1410 + t3230;
  t3649 = -0.503149000008*t3643;
  t3676 = t3659 + t1783;
  t3687 = -3.6777349999999994e-6*t3676;
  t3691 = -0.03892299998790722*t1652;
  t3716 = 1.0394599999999997e-12 + t3649 + t3687 + t3691;
  t3841 = t3513 + t1702;
  t5327 = -1.*t304*t3368*t4475;
  t5328 = t3414*t5070;
  t5329 = t3444*t5245;
  t5330 = t5327 + t5328 + t5329;
  t5334 = -1.*t304*t3582*t4475;
  t5336 = t3597*t5070;
  t5339 = t3609*t5245;
  t5341 = t5334 + t5336 + t5339;
  t3856 = t3478 + t2489;
  t5343 = -1.*t3753*t304*t4475;
  t5344 = t3769*t5070;
  t5351 = t3798*t5245;
  t5355 = t5343 + t5344 + t5351;
  t3888 = t3258 + t1702;
  t3896 = t1484 + t3893;
  t3904 = t1410 + t3893;
  t3913 = t3659 + t2489;
  t5432 = t4667*t304*t325*t334;
  t5433 = t391*t4667*t304*t587;
  t5435 = t5432 + t5433;
  t5446 = -1.*t391*t4667*t304*t325;
  t5449 = t4667*t304*t334*t587;
  t5451 = t5446 + t5449;
  t5456 = -1.*t4667*t3368*t143;
  t5462 = t3414*t5435;
  t5464 = t3444*t5451;
  t5469 = t5456 + t5462 + t5464;
  t5478 = -1.*t4667*t3582*t143;
  t5480 = t3597*t5435;
  t5482 = t3609*t5451;
  t5484 = t5478 + t5480 + t5482;
  t5487 = -1.*t3753*t4667*t143;
  t5488 = t3769*t5435;
  t5492 = t3798*t5451;
  t5495 = t5487 + t5488 + t5492;
  t5566 = t325*t4475;
  t5567 = t4667*t143*t587;
  t5568 = t5566 + t5567;
  t5572 = t334*t4682;
  t5574 = t391*t5568;
  t5575 = t5572 + t5574;
  t5581 = -1.*t334*t5568;
  t5582 = t4730 + t5581;
  t5590 = t3609*t5575;
  t5596 = t3597*t5582;
  t5600 = t5590 + t5596;
  t5606 = t3444*t5575;
  t5607 = t3414*t5582;
  t5608 = t5606 + t5607;
  t5623 = t3798*t5575;
  t5624 = t3769*t5582;
  t5630 = t5623 + t5624;
  t5675 = -1.*t4667*t325*t143;
  t5677 = t4475*t587;
  t5678 = t5675 + t5677;
  t5681 = -1.*t334*t5678;
  t5682 = t5681 + t5574;
  t5686 = -1.*t391*t5678;
  t5687 = t5686 + t5581;
  t5692 = t3609*t5682;
  t5693 = t3597*t5687;
  t5694 = t5692 + t5693;
  t5696 = t3444*t5682;
  t5698 = t3414*t5687;
  t5699 = t5696 + t5698;
  t5706 = t3798*t5682;
  t5708 = t3769*t5687;
  t5711 = t5706 + t5708;
  t5776 = t391*t5678;
  t5777 = t334*t5568;
  t5778 = t5776 + t5777;
  t5782 = t4667*t304*t1878;
  t5783 = -6.5e-11*t40*t5682;
  t5784 = t2076*t5778;
  t5786 = t5782 + t5783 + t5784;
  t5788 = -1.000000000049*t4667*t304*t40;
  t5789 = t2342*t5682;
  t5791 = t2409*t5778;
  t5792 = t5788 + t5789 + t5791;
  t5796 = t4667*t304*t2691;
  t5797 = t2712*t5682;
  t5799 = -1.000000000016*t40*t5778;
  t5803 = t5796 + t5797 + t5799;
  t5854 = t4667*t304*t3368;
  t5855 = t3414*t5682;
  t5856 = t3444*t5778;
  t5860 = t5854 + t5855 + t5856;
  t5864 = t4667*t304*t3582;
  t5866 = t3597*t5682;
  t5875 = t3609*t5778;
  t5879 = t5864 + t5866 + t5875;
  t5888 = t3753*t4667*t304;
  t5894 = t3769*t5682;
  t5896 = t3798*t5778;
  t5899 = t5888 + t5894 + t5896;
  p_output1[0]=var2[0] + (-1.*t143*t325*t4001 + t304*t4290 + t4087*t4320 + t4036*t4340 + t2552*t4366 + t1805*t4377 + t2287*t4397 - 0.80315*(t2892*t4366 + t2833*t4377 + t2867*t4397) + 0.148705*(t3049*t4366 + t2945*t4377 + t3037*t4397) - 0.038924*(t3152*t4366 + t3088*t4377 + t3135*t4397) + t143*t3988*t587)*var2[4] + (-1.*t304*t325*t3988 + t4039 + t4105 + t4113 + t4146 + t4171 + t4198 + t4214 + t4227 - 1.*t304*t4001*t587)*var2[5] + (t4039 + t4105 + t4113 + t4146 + t4171 + t4198 + t4214 + t4227 + t304*t325*t4243 - 1.*t304*t4251*t587)*var2[12] + (t1067*t1265 + t138*t143 + t1805*t2164 + t2287*t2443 + t2552*t2787 - 0.80315*(t2164*t2833 + t2443*t2867 + t2787*t2892) + 0.148705*(t2164*t2945 + t2443*t3037 + t2787*t3049) - 0.038924*(t2164*t3088 + t2443*t3135 + t2787*t3152) + t287*t821)*var2[13] + (t3316*t3454 + t3566*t3628 + t3716*t3830 + 0.148705*(-6.5e-11*t1652*t3628 + t3454*t3841 + t3830*t3856) - 0.80315*(-1.000000000016*t1652*t3454 + t3628*t3888 + t3830*t3896) - 0.038924*(-1.000000000049*t1652*t3830 + t3454*t3904 + t3628*t3913))*var2[14];
  p_output1[1]=var2[1] + (-1.*t304*t4290*t4667 + t4001*t4682 + t3988*t4706 + t4087*t4712 + t4036*t4740 + t2552*t4763 + t1805*t4782 + t2287*t4801 - 0.80315*(t2892*t4763 + t2833*t4782 + t2867*t4801) + 0.148705*(t3049*t4763 + t2945*t4782 + t3037*t4801) - 0.038924*(t3152*t4763 + t3088*t4782 + t3135*t4801))*var2[3] + (t304*t325*t4001*t4475 + t143*t4290*t4475 + t4087*t4493 + t4036*t4521 + t2552*t4548 + t1805*t4561 + t2287*t4579 - 0.80315*(t2892*t4548 + t2833*t4561 + t2867*t4579) + 0.148705*(t3049*t4548 + t2945*t4561 + t3037*t4579) - 0.038924*(t3152*t4548 + t3088*t4561 + t3135*t4579) - 1.*t304*t3988*t4475*t587)*var2[4] + (t3988*t4907 + t4001*t4919 + t4036*t4928 + t4087*t4939 + t1805*t4953 + t2552*t4964 + t2287*t4978 - 0.80315*(t2833*t4953 + t2892*t4964 + t2867*t4978) + 0.148705*(t2945*t4953 + t3049*t4964 + t3037*t4978) - 0.038924*(t3088*t4953 + t3152*t4964 + t3135*t4978))*var2[5] + (t4251*t4919 + t4243*t5055 + t4036*t5070 + t4087*t5085 + t1805*t5104 + t2552*t5125 + t2287*t5148 - 0.80315*(t2833*t5104 + t2892*t5125 + t2867*t5148) + 0.148705*(t2945*t5104 + t3049*t5125 + t3037*t5148) - 0.038924*(t3088*t5104 + t3152*t5125 + t3135*t5148))*var2[12] + (-1.*t138*t304*t4475 + t287*t5070 + t1067*t5245 + t1805*t5266 + t2287*t5275 + t2552*t5286 - 0.80315*(t2833*t5266 + t2867*t5275 + t2892*t5286) + 0.148705*(t2945*t5266 + t3037*t5275 + t3049*t5286) - 0.038924*(t3088*t5266 + t3135*t5275 + t3152*t5286))*var2[13] + (t3316*t5330 + t3566*t5341 + t3716*t5355 - 0.038924*(t3904*t5330 + t3913*t5341 - 1.000000000049*t1652*t5355) + 0.148705*(t3841*t5330 - 6.5e-11*t1652*t5341 + t3856*t5355) - 0.80315*(-1.000000000016*t1652*t5330 + t3888*t5341 + t3896*t5355))*var2[14];
  p_output1[2]=var2[2] + (-1.*t304*t4290*t4475 + t3988*t4919 + t4001*t5055 + t4087*t5070 + t4036*t5245 + t2552*t5330 + t1805*t5341 + t2287*t5355 - 0.80315*(t2892*t5330 + t2833*t5341 + t2867*t5355) + 0.148705*(t3049*t5330 + t2945*t5341 + t3037*t5355) - 0.038924*(t3152*t5330 + t3088*t5341 + t3135*t5355))*var2[3] + (-1.*t304*t325*t4001*t4667 - 1.*t143*t4290*t4667 + t4087*t5435 + t4036*t5451 + t2552*t5469 + t1805*t5484 + t2287*t5495 - 0.80315*(t2892*t5469 + t2833*t5484 + t2867*t5495) + 0.148705*(t3049*t5469 + t2945*t5484 + t3037*t5495) - 0.038924*(t3152*t5469 + t3088*t5484 + t3135*t5495) + t304*t3988*t4667*t587)*var2[4] + (t3988*t4682 + t4001*t5568 + t4036*t5575 + t4087*t5582 + t1805*t5600 + t2552*t5608 + t2287*t5630 - 0.80315*(t2833*t5600 + t2892*t5608 + t2867*t5630) + 0.148705*(t2945*t5600 + t3049*t5608 + t3037*t5630) - 0.038924*(t3088*t5600 + t3152*t5608 + t3135*t5630))*var2[5] + (t4251*t5568 + t4243*t5678 + t4036*t5682 + t4087*t5687 + t1805*t5694 + t2552*t5699 + t2287*t5711 - 0.80315*(t2833*t5694 + t2892*t5699 + t2867*t5711) + 0.148705*(t2945*t5694 + t3049*t5699 + t3037*t5711) - 0.038924*(t3088*t5694 + t3152*t5699 + t3135*t5711))*var2[12] + (t138*t304*t4667 + t287*t5682 + t1067*t5778 + t1805*t5786 + t2287*t5792 + t2552*t5803 - 0.80315*(t2833*t5786 + t2867*t5792 + t2892*t5803) + 0.148705*(t2945*t5786 + t3037*t5792 + t3049*t5803) - 0.038924*(t3088*t5786 + t3135*t5792 + t3152*t5803))*var2[13] + (t3316*t5860 + t3566*t5879 + t3716*t5899 - 0.038924*(t3904*t5860 + t3913*t5879 - 1.000000000049*t1652*t5899) + 0.148705*(t3841*t5860 - 6.5e-11*t1652*t5879 + t3856*t5899) - 0.80315*(-1.000000000016*t1652*t5860 + t3888*t5879 + t3896*t5899))*var2[14];
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

#include "impact_velocity_RlFootParallelStance1.hh"

namespace ParallelStance1
{

void impact_velocity_RlFootParallelStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
