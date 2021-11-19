/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:29:05 GMT+01:00
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
  double t199;
  double t33;
  double t106;
  double t397;
  double t302;
  double t365;
  double t402;
  double t584;
  double t635;
  double t644;
  double t22;
  double t392;
  double t443;
  double t444;
  double t912;
  double t943;
  double t944;
  double t959;
  double t1127;
  double t1273;
  double t1277;
  double t1288;
  double t1463;
  double t1492;
  double t1502;
  double t1619;
  double t790;
  double t825;
  double t868;
  double t885;
  double t1839;
  double t2270;
  double t2409;
  double t2412;
  double t2413;
  double t2427;
  double t2438;
  double t2447;
  double t2250;
  double t2288;
  double t2326;
  double t2349;
  double t2522;
  double t2533;
  double t2541;
  double t2544;
  double t2550;
  double t2573;
  double t2906;
  double t2912;
  double t2913;
  double t3002;
  double t3016;
  double t3048;
  double t905;
  double t945;
  double t984;
  double t985;
  double t1354;
  double t1388;
  double t1428;
  double t1657;
  double t1658;
  double t1702;
  double t1725;
  double t1744;
  double t1768;
  double t3251;
  double t3255;
  double t3265;
  double t3197;
  double t3222;
  double t3224;
  double t3269;
  double t3281;
  double t3294;
  double t1939;
  double t2010;
  double t2967;
  double t3058;
  double t3105;
  double t3106;
  double t3111;
  double t3128;
  double t3135;
  double t3147;
  double t3175;
  double t3176;
  double t3231;
  double t3266;
  double t3295;
  double t3298;
  double t3302;
  double t3306;
  double t3307;
  double t3309;
  double t3310;
  double t3311;
  double t3312;
  double t3320;
  double t3321;
  double t3326;
  double t3327;
  double t3328;
  double t3332;
  double t3334;
  double t2914;
  double t2935;
  double t2975;
  double t3454;
  double t3459;
  double t3477;
  double t3489;
  double t3497;
  double t3500;
  double t3573;
  double t3580;
  double t3583;
  double t3592;
  double t3653;
  double t3660;
  double t3662;
  double t3663;
  double t3613;
  double t3615;
  double t3627;
  double t3637;
  double t3711;
  double t3525;
  double t3531;
  double t3533;
  double t3547;
  double t3752;
  double t3772;
  double t3774;
  double t3789;
  double t3793;
  double t3801;
  double t3806;
  double t3807;
  double t3813;
  double t3814;
  double t3851;
  double t3860;
  double t3863;
  double t3873;
  double t3819;
  double t3821;
  double t3825;
  double t3833;
  double t3994;
  double t3990;
  double t3997;
  double t4004;
  double t4006;
  double t4012;
  double t4017;
  double t4037;
  double t4040;
  double t4047;
  double t4059;
  double t4062;
  double t4082;
  double t4099;
  double t4108;
  double t4110;
  double t4112;
  double t4138;
  double t4141;
  double t4142;
  double t4143;
  double t4125;
  double t4130;
  double t4134;
  double t4136;
  double t4222;
  double t4223;
  double t4231;
  double t4242;
  double t4251;
  double t4254;
  double t4271;
  double t4280;
  double t4281;
  double t4283;
  double t4285;
  double t4286;
  double t4303;
  double t4304;
  double t4309;
  double t4288;
  double t4292;
  double t4299;
  double t4318;
  double t4319;
  double t4322;
  double t3359;
  double t3367;
  double t3381;
  double t3392;
  double t4382;
  double t4383;
  double t4386;
  double t4394;
  double t4405;
  double t4411;
  double t4413;
  double t4431;
  double t4433;
  double t4435;
  double t4419;
  double t4423;
  double t4426;
  double t4442;
  double t4447;
  double t4449;
  double t50;
  double t133;
  double t149;
  double t465;
  double t488;
  double t527;
  double t666;
  double t679;
  double t739;
  double t4534;
  double t4537;
  double t4538;
  double t4564;
  double t4571;
  double t4579;
  double t4586;
  double t4595;
  double t4598;
  double t4600;
  double t4603;
  double t4545;
  double t4547;
  double t4554;
  double t4555;
  double t2352;
  double t2389;
  double t2390;
  double t2460;
  double t2481;
  double t2490;
  double t2592;
  double t2603;
  double t2669;
  double t4687;
  double t4689;
  double t4691;
  double t4695;
  double t4669;
  double t4674;
  double t4677;
  double t4678;
  double t4707;
  double t4710;
  double t4772;
  double t4776;
  double t4791;
  double t4795;
  double t4798;
  double t4799;
  double t4812;
  double t4813;
  double t4820;
  double t4831;
  double t4844;
  double t4847;
  double t4851;
  double t4854;
  double t4838;
  double t4839;
  double t4840;
  double t4841;
  double t4933;
  double t4936;
  double t4941;
  double t4944;
  double t4945;
  double t4950;
  double t4953;
  double t4956;
  double t4976;
  double t4978;
  double t4979;
  double t4965;
  double t4966;
  double t4971;
  double t4981;
  double t4984;
  double t4985;
  double t5057;
  double t5060;
  double t5061;
  double t5067;
  double t5068;
  double t5070;
  double t5073;
  double t5095;
  double t5096;
  double t5097;
  double t5081;
  double t5086;
  double t5090;
  double t5099;
  double t5100;
  double t5101;
  double t5179;
  double t5183;
  double t5185;
  double t5215;
  double t5216;
  double t5218;
  double t5221;
  double t5222;
  double t5224;
  double t5225;
  double t5194;
  double t5202;
  double t5206;
  double t5210;
  double t5304;
  double t5305;
  double t5311;
  double t5312;
  double t5295;
  double t5296;
  double t5298;
  double t5299;
  double t5331;
  double t5340;
  double t4735;
  double t4740;
  t199 = Cos(var1[4]);
  t33 = Cos(var1[7]);
  t106 = Sin(var1[7]);
  t397 = Cos(var1[5]);
  t302 = Cos(var1[6]);
  t365 = Sin(var1[5]);
  t402 = Sin(var1[6]);
  t584 = t199*t397*t302;
  t635 = -1.*t199*t365*t402;
  t644 = t584 + t635;
  t22 = Sin(var1[4]);
  t392 = -1.*t199*t302*t365;
  t443 = -1.*t199*t397*t402;
  t444 = t392 + t443;
  t912 = Cos(var1[8]);
  t943 = -1.*t912;
  t944 = 1. + t943;
  t959 = Sin(var1[8]);
  t1127 = -1.*t33*t22;
  t1273 = -4.e-6*t33*t444;
  t1277 = -1.000000000016*t644*t106;
  t1288 = t1127 + t1273 + t1277;
  t1463 = t33*t644;
  t1492 = -1.*t22*t106;
  t1502 = -4.e-6*t444*t106;
  t1619 = t1463 + t1492 + t1502;
  t790 = 4.e-6*t33*t644;
  t825 = -4.e-6*t22*t106;
  t868 = -1.6e-11*t444*t106;
  t885 = t790 + t825 + t868;
  t1839 = -1. + t912;
  t2270 = -1. + t33;
  t2409 = 4.e-6*t2270*t22;
  t2412 = 1.6e-11*t2270;
  t2413 = 1. + t2412;
  t2427 = t2413*t444;
  t2438 = 4.e-6*t644*t106;
  t2447 = t2409 + t2427 + t2438;
  t2250 = t33*t22;
  t2288 = 4.e-6*t2270*t444;
  t2326 = t644*t106;
  t2349 = t2250 + t2288 + t2326;
  t2522 = -1.*t33;
  t2533 = 1. + t2522;
  t2541 = -1.000000000016*t2533;
  t2544 = 1. + t2541;
  t2550 = t2544*t644;
  t2573 = t2550 + t1492 + t1502;
  t2906 = -1.*t302;
  t2912 = 1. + t2906;
  t2913 = 0.15121*t2912;
  t3002 = -1.*t199*t397*t302;
  t3016 = t199*t365*t402;
  t3048 = t3002 + t3016;
  t905 = -1.284e-8*var1[8];
  t945 = -1.5499600000248e-7*t944;
  t984 = 2.012840000032e-6*t959;
  t985 = t905 + t945 + t984;
  t1354 = 0.503210000016051*t944;
  t1388 = 0.03874900000062*t959;
  t1428 = t1354 + t1388;
  t1657 = 5.136e-14*var1[8];
  t1658 = -0.03874900000062*t944;
  t1702 = 0.503210000008*t959;
  t1725 = t1657 + t1658 + t1702;
  t1744 = -1.000000000016*t944;
  t1768 = 1. + t1744;
  t3251 = t2544*t444;
  t3255 = -4.e-6*t3048*t106;
  t3265 = t3251 + t3255;
  t3197 = t2413*t3048;
  t3222 = 4.e-6*t444*t106;
  t3224 = t3197 + t3222;
  t3269 = 4.e-6*t2270*t3048;
  t3281 = t444*t106;
  t3294 = t3269 + t3281;
  t1939 = 1.6e-11*t1839;
  t2010 = 1. + t1939;
  t2967 = 0.15121*t402;
  t3058 = -1.2484e-7*var1[7];
  t3105 = -1.5499600000248e-7*t2533;
  t3106 = 1.124840000016e-6*t106;
  t3111 = t3058 + t3105 + t3106;
  t3128 = t3048*t3111;
  t3135 = 0.281210000008499*t2533;
  t3147 = 0.03874900000062*t106;
  t3175 = t3135 + t3147;
  t3176 = t444*t3175;
  t3231 = t3224*t985;
  t3266 = t3265*t1428;
  t3295 = t3294*t1725;
  t3298 = t1768*t3265;
  t3302 = -4.e-6*t3224*t959;
  t3306 = -1.*t3294*t959;
  t3307 = t3298 + t3302 + t3306;
  t3309 = 0.80321*t3307;
  t3310 = t2010*t3224;
  t3311 = 4.e-6*t1839*t3294;
  t3312 = 4.e-6*t3265*t959;
  t3320 = t3310 + t3311 + t3312;
  t3321 = 0.14871*t3320;
  t3326 = 4.e-6*t1839*t3224;
  t3327 = t912*t3294;
  t3328 = t3265*t959;
  t3332 = t3326 + t3327 + t3328;
  t3334 = -0.03875*t3332;
  t2914 = -0.15121*t402;
  t2935 = t2913 + t2914;
  t2975 = t2913 + t2967;
  t3454 = t302*t22*t365;
  t3459 = t397*t22*t402;
  t3477 = t3454 + t3459;
  t3489 = -1.*t397*t302*t22;
  t3497 = t22*t365*t402;
  t3500 = t3489 + t3497;
  t3573 = 4.e-6*t199*t2270;
  t3580 = t2413*t3477;
  t3583 = 4.e-6*t3500*t106;
  t3592 = t3573 + t3580 + t3583;
  t3653 = t199*t33;
  t3660 = 4.e-6*t2270*t3477;
  t3662 = t3500*t106;
  t3663 = t3653 + t3660 + t3662;
  t3613 = t2544*t3500;
  t3615 = -1.*t199*t106;
  t3627 = -4.e-6*t3477*t106;
  t3637 = t3613 + t3615 + t3627;
  t3711 = Sin(var1[3]);
  t3525 = 4.9936e-13*var1[7];
  t3531 = -0.03874900000062*t2533;
  t3533 = 0.281210000004*t106;
  t3547 = t3525 + t3531 + t3533;
  t3752 = -1.*t199*t302*t3711*t365;
  t3772 = -1.*t199*t397*t3711*t402;
  t3774 = t3752 + t3772;
  t3789 = t199*t397*t302*t3711;
  t3793 = -1.*t199*t3711*t365*t402;
  t3801 = t3789 + t3793;
  t3806 = 4.e-6*t2270*t3711*t22;
  t3807 = t2413*t3774;
  t3813 = 4.e-6*t3801*t106;
  t3814 = t3806 + t3807 + t3813;
  t3851 = t33*t3711*t22;
  t3860 = 4.e-6*t2270*t3774;
  t3863 = t3801*t106;
  t3873 = t3851 + t3860 + t3863;
  t3819 = t2544*t3801;
  t3821 = -1.*t3711*t22*t106;
  t3825 = -4.e-6*t3774*t106;
  t3833 = t3819 + t3821 + t3825;
  t3994 = Cos(var1[3]);
  t3990 = -1.*t397*t3711;
  t3997 = -1.*t3994*t22*t365;
  t4004 = t3990 + t3997;
  t4006 = t3994*t397*t22;
  t4012 = -1.*t3711*t365;
  t4017 = t4006 + t4012;
  t4037 = t302*t4004;
  t4040 = -1.*t4017*t402;
  t4047 = t4037 + t4040;
  t4059 = t302*t4017;
  t4062 = t4004*t402;
  t4082 = t4059 + t4062;
  t4099 = -4.e-6*t3994*t199*t2270;
  t4108 = t2413*t4047;
  t4110 = 4.e-6*t4082*t106;
  t4112 = t4099 + t4108 + t4110;
  t4138 = -1.*t3994*t199*t33;
  t4141 = 4.e-6*t2270*t4047;
  t4142 = t4082*t106;
  t4143 = t4138 + t4141 + t4142;
  t4125 = t2544*t4082;
  t4130 = t3994*t199*t106;
  t4134 = -4.e-6*t4047*t106;
  t4136 = t4125 + t4130 + t4134;
  t4222 = -1.*t397*t3711*t22;
  t4223 = -1.*t3994*t365;
  t4231 = t4222 + t4223;
  t4242 = t3994*t397;
  t4251 = -1.*t3711*t22*t365;
  t4254 = t4242 + t4251;
  t4271 = t302*t4231;
  t4280 = -1.*t4254*t402;
  t4281 = t4271 + t4280;
  t4283 = t302*t4254;
  t4285 = t4231*t402;
  t4286 = t4283 + t4285;
  t4303 = t2544*t4286;
  t4304 = -4.e-6*t4281*t106;
  t4309 = t4303 + t4304;
  t4288 = t2413*t4281;
  t4292 = 4.e-6*t4286*t106;
  t4299 = t4288 + t4292;
  t4318 = 4.e-6*t2270*t4281;
  t4319 = t4286*t106;
  t4322 = t4318 + t4319;
  t3359 = -0.15121*t302;
  t3367 = t3359 + t2967;
  t3381 = 0.15121*t302;
  t3392 = t3381 + t2967;
  t4382 = t397*t3711*t22;
  t4383 = t3994*t365;
  t4386 = t4382 + t4383;
  t4394 = -1.*t302*t4386;
  t4405 = t4394 + t4280;
  t4411 = -1.*t4386*t402;
  t4413 = t4283 + t4411;
  t4431 = t2544*t4413;
  t4433 = -4.e-6*t4405*t106;
  t4435 = t4431 + t4433;
  t4419 = t2413*t4405;
  t4423 = 4.e-6*t4413*t106;
  t4426 = t4419 + t4423;
  t4442 = 4.e-6*t2270*t4405;
  t4447 = t4413*t106;
  t4449 = t4442 + t4447;
  t50 = 0.281210000004*t33;
  t133 = -0.03874900000062*t106;
  t149 = 4.9936e-13 + t50 + t133;
  t465 = 1.124840000016e-6*t33;
  t488 = -1.5499600000248e-7*t106;
  t527 = -1.2484e-7 + t465 + t488;
  t666 = 0.03874900000062*t33;
  t679 = 0.281210000008499*t106;
  t739 = t666 + t679;
  t4534 = t302*t4386;
  t4537 = t4254*t402;
  t4538 = t4534 + t4537;
  t4564 = t199*t33*t3711;
  t4571 = -4.e-6*t33*t4413;
  t4579 = -1.000000000016*t4538*t106;
  t4586 = t4564 + t4571 + t4579;
  t4595 = t33*t4538;
  t4598 = t199*t3711*t106;
  t4600 = -4.e-6*t4413*t106;
  t4603 = t4595 + t4598 + t4600;
  t4545 = 4.e-6*t33*t4538;
  t4547 = 4.e-6*t199*t3711*t106;
  t4554 = -1.6e-11*t4413*t106;
  t4555 = t4545 + t4547 + t4554;
  t2352 = 0.503210000008*t912;
  t2389 = -0.03874900000062*t959;
  t2390 = 5.136e-14 + t2352 + t2389;
  t2460 = 2.012840000032e-6*t912;
  t2481 = -1.5499600000248e-7*t959;
  t2490 = -1.284e-8 + t2460 + t2481;
  t2592 = 0.03874900000062*t912;
  t2603 = 0.503210000016051*t959;
  t2669 = t2592 + t2603;
  t4687 = -4.e-6*t199*t2270*t3711;
  t4689 = t2413*t4413;
  t4691 = 4.e-6*t4538*t106;
  t4695 = t4687 + t4689 + t4691;
  t4669 = -1.*t199*t33*t3711;
  t4674 = 4.e-6*t2270*t4413;
  t4677 = t4538*t106;
  t4678 = t4669 + t4674 + t4677;
  t4707 = t2544*t4538;
  t4710 = t4707 + t4598 + t4600;
  t4772 = t3994*t199*t302*t365;
  t4776 = t3994*t199*t397*t402;
  t4791 = t4772 + t4776;
  t4795 = -1.*t3994*t199*t397*t302;
  t4798 = t3994*t199*t365*t402;
  t4799 = t4795 + t4798;
  t4812 = -4.e-6*t3994*t2270*t22;
  t4813 = t2413*t4791;
  t4820 = 4.e-6*t4799*t106;
  t4831 = t4812 + t4813 + t4820;
  t4844 = -1.*t3994*t33*t22;
  t4847 = 4.e-6*t2270*t4791;
  t4851 = t4799*t106;
  t4854 = t4844 + t4847 + t4851;
  t4838 = t2544*t4799;
  t4839 = t3994*t22*t106;
  t4840 = -4.e-6*t4791*t106;
  t4841 = t4838 + t4839 + t4840;
  t4933 = t397*t3711;
  t4936 = t3994*t22*t365;
  t4941 = t4933 + t4936;
  t4944 = -1.*t4941*t402;
  t4945 = t4059 + t4944;
  t4950 = t302*t4941;
  t4953 = t4017*t402;
  t4956 = t4950 + t4953;
  t4976 = t2544*t4956;
  t4978 = -4.e-6*t4945*t106;
  t4979 = t4976 + t4978;
  t4965 = t2413*t4945;
  t4966 = 4.e-6*t4956*t106;
  t4971 = t4965 + t4966;
  t4981 = 4.e-6*t2270*t4945;
  t4984 = t4956*t106;
  t4985 = t4981 + t4984;
  t5057 = -1.*t3994*t397*t22;
  t5060 = t3711*t365;
  t5061 = t5057 + t5060;
  t5067 = -1.*t302*t5061;
  t5068 = t5067 + t4944;
  t5070 = -1.*t5061*t402;
  t5073 = t4950 + t5070;
  t5095 = t2544*t5073;
  t5096 = -4.e-6*t5068*t106;
  t5097 = t5095 + t5096;
  t5081 = t2413*t5068;
  t5086 = 4.e-6*t5073*t106;
  t5090 = t5081 + t5086;
  t5099 = 4.e-6*t2270*t5068;
  t5100 = t5073*t106;
  t5101 = t5099 + t5100;
  t5179 = t302*t5061;
  t5183 = t4941*t402;
  t5185 = t5179 + t5183;
  t5215 = -4.e-6*t33*t5073;
  t5216 = -1.000000000016*t5185*t106;
  t5218 = t4138 + t5215 + t5216;
  t5221 = t33*t5185;
  t5222 = -1.*t3994*t199*t106;
  t5224 = -4.e-6*t5073*t106;
  t5225 = t5221 + t5222 + t5224;
  t5194 = 4.e-6*t33*t5185;
  t5202 = -4.e-6*t3994*t199*t106;
  t5206 = -1.6e-11*t5073*t106;
  t5210 = t5194 + t5202 + t5206;
  t5304 = 4.e-6*t3994*t199*t2270;
  t5305 = t2413*t5073;
  t5311 = 4.e-6*t5185*t106;
  t5312 = t5304 + t5305 + t5311;
  t5295 = t3994*t199*t33;
  t5296 = 4.e-6*t2270*t5073;
  t5298 = t5185*t106;
  t5299 = t5295 + t5296 + t5298;
  t5331 = t2544*t5185;
  t5340 = t5331 + t5222 + t5224;
  t4735 = -4.e-6*t4695*t959;
  t4740 = -1.*t4678*t959;
  p_output1[0]=var2[0] + (t3111*t3477 + t3175*t3500 + t199*t3547 + t1428*t3637 + t22*t2935*t365 + t1725*t3663 - 1.*t22*t2975*t397 + 0.14871*(t2010*t3592 + 4.e-6*t1839*t3663 + 4.e-6*t3637*t959) - 0.03875*(4.e-6*t1839*t3592 + t3663*t912 + t3637*t959) + 0.80321*(t1768*t3637 - 4.e-6*t3592*t959 - 1.*t3663*t959) + t3592*t985)*var2[4] + (t3128 + t3176 + t3231 + t3266 + t3295 + t3309 + t3321 + t3334 - 1.*t199*t2975*t365 - 1.*t199*t2935*t397)*var2[5] + (t3128 + t3176 + t3231 + t3266 + t3295 + t3309 + t3321 + t3334 - 1.*t199*t3367*t365 + t199*t3392*t397)*var2[6] + (t1288*t1428 + t1619*t1725 + t149*t22 + t444*t527 + t644*t739 + 0.14871*(4.e-6*t1619*t1839 + t2010*t885 + 4.e-6*t1288*t959) - 0.03875*(4.e-6*t1839*t885 + t1619*t912 + t1288*t959) + 0.80321*(t1288*t1768 - 1.*t1619*t959 - 4.e-6*t885*t959) + t885*t985)*var2[7] + (t2349*t2390 + t2447*t2490 + t2573*t2669 - 0.03875*(t2573*t912 - 1.*t2349*t959 - 4.e-6*t2447*t959) + 0.14871*(4.e-6*t2573*t912 - 4.e-6*t2349*t959 - 1.6e-11*t2447*t959) + 0.80321*(-1.*t2349*t912 - 4.e-6*t2447*t912 - 1.000000000016*t2573*t959))*var2[8];
  p_output1[1]=var2[1] + (-1.*t199*t3547*t3994 + t2935*t4004 + t2975*t4017 + t3111*t4047 + t3175*t4082 + t1428*t4136 + t1725*t4143 + 0.14871*(t2010*t4112 + 4.e-6*t1839*t4143 + 4.e-6*t4136*t959) - 0.03875*(4.e-6*t1839*t4112 + t4143*t912 + t4136*t959) + 0.80321*(t1768*t4136 - 4.e-6*t4112*t959 - 1.*t4143*t959) + t4112*t985)*var2[3] + (t22*t3547*t3711 - 1.*t199*t2935*t365*t3711 + t3111*t3774 + t3175*t3801 + t1428*t3833 + t1725*t3873 + t199*t2975*t3711*t397 + 0.14871*(t2010*t3814 + 4.e-6*t1839*t3873 + 4.e-6*t3833*t959) - 0.03875*(4.e-6*t1839*t3814 + t3873*t912 + t3833*t959) + 0.80321*(t1768*t3833 - 4.e-6*t3814*t959 - 1.*t3873*t959) + t3814*t985)*var2[4] + (t2935*t4231 + t2975*t4254 + t3111*t4281 + t3175*t4286 + t1428*t4309 + t1725*t4322 + 0.14871*(t2010*t4299 + 4.e-6*t1839*t4322 + 4.e-6*t4309*t959) - 0.03875*(4.e-6*t1839*t4299 + t4322*t912 + t4309*t959) + 0.80321*(t1768*t4309 - 4.e-6*t4299*t959 - 1.*t4322*t959) + t4299*t985)*var2[5] + (t3367*t4254 + t3392*t4386 + t3111*t4405 + t3175*t4413 + t1428*t4435 + t1725*t4449 + 0.14871*(t2010*t4426 + 4.e-6*t1839*t4449 + 4.e-6*t4435*t959) - 0.03875*(4.e-6*t1839*t4426 + t4449*t912 + t4435*t959) + 0.80321*(t1768*t4435 - 4.e-6*t4426*t959 - 1.*t4449*t959) + t4426*t985)*var2[6] + (-1.*t149*t199*t3711 + t1428*t4586 + t1725*t4603 + t4413*t527 + t4538*t739 + 0.14871*(t2010*t4555 + 4.e-6*t1839*t4603 + 4.e-6*t4586*t959) - 0.03875*(4.e-6*t1839*t4555 + t4603*t912 + t4586*t959) + 0.80321*(t1768*t4586 - 4.e-6*t4555*t959 - 1.*t4603*t959) + t4555*t985)*var2[7] + (t2390*t4678 + t2490*t4695 + t2669*t4710 - 0.03875*(t4735 + t4740 + t4710*t912) + 0.14871*(4.e-6*t4710*t912 - 4.e-6*t4678*t959 - 1.6e-11*t4695*t959) + 0.80321*(-1.*t4678*t912 - 4.e-6*t4695*t912 - 1.000000000016*t4710*t959))*var2[8];
  p_output1[2]=var2[2] + (-1.*t199*t3547*t3711 + t2935*t4254 + t2975*t4386 + t3111*t4413 + t3175*t4538 + t1725*t4678 + t1428*t4710 + 0.80321*(t1768*t4710 + t4735 + t4740) + 0.14871*(4.e-6*t1839*t4678 + t2010*t4695 + 4.e-6*t4710*t959) - 0.03875*(4.e-6*t1839*t4695 + t4678*t912 + t4710*t959) + t4695*t985)*var2[3] + (-1.*t22*t3547*t3994 + t199*t2935*t365*t3994 - 1.*t199*t2975*t397*t3994 + t3111*t4791 + t3175*t4799 + t1428*t4841 + t1725*t4854 + 0.14871*(t2010*t4831 + 4.e-6*t1839*t4854 + 4.e-6*t4841*t959) - 0.03875*(4.e-6*t1839*t4831 + t4854*t912 + t4841*t959) + 0.80321*(t1768*t4841 - 4.e-6*t4831*t959 - 1.*t4854*t959) + t4831*t985)*var2[4] + (t2935*t4017 + t2975*t4941 + t3111*t4945 + t3175*t4956 + t1428*t4979 + t1725*t4985 + 0.14871*(t2010*t4971 + 4.e-6*t1839*t4985 + 4.e-6*t4979*t959) - 0.03875*(4.e-6*t1839*t4971 + t4985*t912 + t4979*t959) + 0.80321*(t1768*t4979 - 4.e-6*t4971*t959 - 1.*t4985*t959) + t4971*t985)*var2[5] + (t3367*t4941 + t3392*t5061 + t3111*t5068 + t3175*t5073 + t1428*t5097 + t1725*t5101 + 0.14871*(t2010*t5090 + 4.e-6*t1839*t5101 + 4.e-6*t5097*t959) - 0.03875*(4.e-6*t1839*t5090 + t5101*t912 + t5097*t959) + 0.80321*(t1768*t5097 - 4.e-6*t5090*t959 - 1.*t5101*t959) + t5090*t985)*var2[6] + (t149*t199*t3994 + t1428*t5218 + t1725*t5225 + t5073*t527 + t5185*t739 + 0.14871*(t2010*t5210 + 4.e-6*t1839*t5225 + 4.e-6*t5218*t959) - 0.03875*(4.e-6*t1839*t5210 + t5225*t912 + t5218*t959) + 0.80321*(t1768*t5218 - 4.e-6*t5210*t959 - 1.*t5225*t959) + t5210*t985)*var2[7] + (t2390*t5299 + t2490*t5312 + t2669*t5340 - 0.03875*(t5340*t912 - 1.*t5299*t959 - 4.e-6*t5312*t959) + 0.14871*(4.e-6*t5340*t912 - 4.e-6*t5299*t959 - 1.6e-11*t5312*t959) + 0.80321*(-1.*t5299*t912 - 4.e-6*t5312*t912 - 1.000000000016*t5340*t959))*var2[8];
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

#include "impact_velocity_FlFootDiagonalStance.hh"

namespace DiagonalStance
{

void impact_velocity_FlFootDiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
