/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:18:05 GMT+01:00
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
  double t46;
  double t581;
  double t655;
  double t1073;
  double t1238;
  double t1239;
  double t566;
  double t1773;
  double t2587;
  double t2669;
  double t2690;
  double t2706;
  double t2972;
  double t3101;
  double t2274;
  double t2276;
  double t2359;
  double t2734;
  double t2746;
  double t2747;
  double t3233;
  double t3240;
  double t3245;
  double t3258;
  double t3123;
  double t3128;
  double t3163;
  double t3192;
  double t3224;
  double t3226;
  double t3741;
  double t3538;
  double t3544;
  double t3565;
  double t3685;
  double t3283;
  double t3290;
  double t3296;
  double t3305;
  double t3308;
  double t3312;
  double t1549;
  double t1738;
  double t1972;
  double t2169;
  double t2527;
  double t2692;
  double t2710;
  double t2731;
  double t2759;
  double t2921;
  double t2924;
  double t3956;
  double t3962;
  double t3964;
  double t3969;
  double t3973;
  double t3976;
  double t3228;
  double t3246;
  double t3269;
  double t3274;
  double t3322;
  double t3372;
  double t3455;
  double t3713;
  double t3718;
  double t3719;
  double t3722;
  double t3833;
  double t3857;
  double t3999;
  double t4005;
  double t4006;
  double t3980;
  double t3989;
  double t3993;
  double t4015;
  double t4021;
  double t4030;
  double t3744;
  double t3745;
  double t3967;
  double t3978;
  double t3995;
  double t4011;
  double t4046;
  double t4050;
  double t4052;
  double t4056;
  double t4059;
  double t4065;
  double t4071;
  double t4073;
  double t4078;
  double t4081;
  double t4095;
  double t4130;
  double t4133;
  double t4141;
  double t4143;
  double t4146;
  double t4204;
  double t4207;
  double t4210;
  double t4253;
  double t4254;
  double t4260;
  double t4263;
  double t4273;
  double t4285;
  double t4289;
  double t4292;
  double t4235;
  double t4239;
  double t4240;
  double t4245;
  double t4392;
  double t4403;
  double t4405;
  double t4410;
  double t4362;
  double t4366;
  double t4374;
  double t4378;
  double t4437;
  double t4447;
  double t4516;
  double t4510;
  double t4511;
  double t4519;
  double t4523;
  double t4531;
  double t4537;
  double t4538;
  double t2973;
  double t2985;
  double t2987;
  double t3056;
  double t4545;
  double t4549;
  double t4550;
  double t4563;
  double t4566;
  double t4568;
  double t4572;
  double t4579;
  double t4585;
  double t4595;
  double t4614;
  double t4616;
  double t4618;
  double t4621;
  double t4598;
  double t4601;
  double t4605;
  double t4610;
  double t4671;
  double t4672;
  double t4673;
  double t4681;
  double t4682;
  double t4683;
  double t4694;
  double t4698;
  double t4699;
  double t4701;
  double t4727;
  double t4729;
  double t4746;
  double t4748;
  double t4704;
  double t4711;
  double t4713;
  double t4719;
  double t4833;
  double t4836;
  double t4843;
  double t4877;
  double t4880;
  double t4884;
  double t4891;
  double t4897;
  double t4899;
  double t4903;
  double t4906;
  double t4907;
  double t4914;
  double t4915;
  double t4918;
  double t4909;
  double t4910;
  double t4911;
  double t4930;
  double t4933;
  double t4943;
  double t4158;
  double t4159;
  double t4164;
  double t4165;
  double t4992;
  double t4993;
  double t4997;
  double t5010;
  double t5011;
  double t5015;
  double t5017;
  double t5025;
  double t5030;
  double t5039;
  double t5020;
  double t5021;
  double t5023;
  double t5049;
  double t5053;
  double t5054;
  double t4169;
  double t4173;
  double t4181;
  double t4186;
  double t4193;
  double t4197;
  double t4213;
  double t4223;
  double t4230;
  double t5120;
  double t5122;
  double t5137;
  double t5157;
  double t5170;
  double t5171;
  double t5172;
  double t5174;
  double t5176;
  double t5180;
  double t5182;
  double t5141;
  double t5142;
  double t5145;
  double t5148;
  double t4380;
  double t4381;
  double t4388;
  double t4424;
  double t4425;
  double t4432;
  double t4451;
  double t4455;
  double t4456;
  double t5237;
  double t5240;
  double t5243;
  double t5244;
  double t5231;
  double t5233;
  double t5234;
  double t5235;
  double t5249;
  double t5251;
  double t5269;
  double t5271;
  double t5505;
  double t5506;
  double t5507;
  double t5515;
  double t5516;
  double t5517;
  double t5533;
  double t5538;
  double t5550;
  double t5551;
  double t5595;
  double t5597;
  double t5604;
  double t5605;
  double t5560;
  double t5561;
  double t5575;
  double t5591;
  double t5701;
  double t5703;
  double t5705;
  double t5718;
  double t5726;
  double t5741;
  double t5767;
  double t5768;
  double t5782;
  double t5783;
  double t5794;
  double t5771;
  double t5772;
  double t5773;
  double t5802;
  double t5810;
  double t5829;
  double t5980;
  double t5982;
  double t6028;
  double t6040;
  double t6045;
  double t6047;
  double t6049;
  double t6077;
  double t6079;
  double t6082;
  double t6062;
  double t6063;
  double t6070;
  double t6084;
  double t6087;
  double t6089;
  double t6258;
  double t6272;
  double t6274;
  double t6311;
  double t6313;
  double t6322;
  double t6327;
  double t6328;
  double t6330;
  double t6335;
  double t6283;
  double t6284;
  double t6296;
  double t6299;
  double t6508;
  double t6512;
  double t6517;
  double t6518;
  double t6483;
  double t6496;
  double t6503;
  double t6505;
  double t6547;
  double t6570;
  t46 = Sin(var1[4]);
  t581 = Cos(var1[6]);
  t655 = -1.*t581;
  t1073 = 1. + t655;
  t1238 = 0.15121*t1073;
  t1239 = Sin(var1[6]);
  t566 = Sin(var1[5]);
  t1773 = Cos(var1[5]);
  t2587 = Cos(var1[7]);
  t2669 = -1.*t2587;
  t2690 = 1. + t2669;
  t2706 = Sin(var1[7]);
  t2972 = Cos(var1[4]);
  t3101 = -1. + t2587;
  t2274 = t581*t46*t566;
  t2276 = t1773*t46*t1239;
  t2359 = t2274 + t2276;
  t2734 = -1.*t1773*t581*t46;
  t2746 = t46*t566*t1239;
  t2747 = t2734 + t2746;
  t3233 = Cos(var1[8]);
  t3240 = -1.*t3233;
  t3245 = 1. + t3240;
  t3258 = Sin(var1[8]);
  t3123 = 4.e-6*t2972*t3101;
  t3128 = 1.6e-11*t3101;
  t3163 = 1. + t3128;
  t3192 = t3163*t2359;
  t3224 = 4.e-6*t2747*t2706;
  t3226 = t3123 + t3192 + t3224;
  t3741 = -1. + t3233;
  t3538 = t2972*t2587;
  t3544 = 4.e-6*t3101*t2359;
  t3565 = t2747*t2706;
  t3685 = t3538 + t3544 + t3565;
  t3283 = -1.000000000016*t2690;
  t3290 = 1. + t3283;
  t3296 = t3290*t2747;
  t3305 = -1.*t2972*t2706;
  t3308 = -4.e-6*t2359*t2706;
  t3312 = t3296 + t3305 + t3308;
  t1549 = -0.15121*t1239;
  t1738 = t1238 + t1549;
  t1972 = 0.15121*t1239;
  t2169 = t1238 + t1972;
  t2527 = -1.2484e-7*var1[7];
  t2692 = -1.5499600000248e-7*t2690;
  t2710 = 1.124840000016e-6*t2706;
  t2731 = t2527 + t2692 + t2710;
  t2759 = 0.281210000008499*t2690;
  t2921 = 0.03874900000062*t2706;
  t2924 = t2759 + t2921;
  t3956 = -1.*t2972*t1773*t581;
  t3962 = t2972*t566*t1239;
  t3964 = t3956 + t3962;
  t3969 = -1.*t2972*t581*t566;
  t3973 = -1.*t2972*t1773*t1239;
  t3976 = t3969 + t3973;
  t3228 = -1.284e-8*var1[8];
  t3246 = -1.5499600000248e-7*t3245;
  t3269 = 2.012840000032e-6*t3258;
  t3274 = t3228 + t3246 + t3269;
  t3322 = 0.503210000016051*t3245;
  t3372 = 0.03874900000062*t3258;
  t3455 = t3322 + t3372;
  t3713 = 5.136e-14*var1[8];
  t3718 = -0.03874900000062*t3245;
  t3719 = 0.503210000008*t3258;
  t3722 = t3713 + t3718 + t3719;
  t3833 = -1.000000000016*t3245;
  t3857 = 1. + t3833;
  t3999 = t3290*t3976;
  t4005 = -4.e-6*t3964*t2706;
  t4006 = t3999 + t4005;
  t3980 = t3163*t3964;
  t3989 = 4.e-6*t3976*t2706;
  t3993 = t3980 + t3989;
  t4015 = 4.e-6*t3101*t3964;
  t4021 = t3976*t2706;
  t4030 = t4015 + t4021;
  t3744 = 1.6e-11*t3741;
  t3745 = 1. + t3744;
  t3967 = t3964*t2731;
  t3978 = t3976*t2924;
  t3995 = t3993*t3274;
  t4011 = t4006*t3455;
  t4046 = t4030*t3722;
  t4050 = t3857*t4006;
  t4052 = -4.e-6*t3993*t3258;
  t4056 = -1.*t4030*t3258;
  t4059 = t4050 + t4052 + t4056;
  t4065 = 0.80321*t4059;
  t4071 = t3745*t3993;
  t4073 = 4.e-6*t3741*t4030;
  t4078 = 4.e-6*t4006*t3258;
  t4081 = t4071 + t4073 + t4078;
  t4095 = 0.14871*t4081;
  t4130 = 4.e-6*t3741*t3993;
  t4133 = t3233*t4030;
  t4141 = t4006*t3258;
  t4143 = t4130 + t4133 + t4141;
  t4146 = -0.03875*t4143;
  t4204 = t2972*t1773*t581;
  t4207 = -1.*t2972*t566*t1239;
  t4210 = t4204 + t4207;
  t4253 = -1.*t2587*t46;
  t4254 = -4.e-6*t2587*t3976;
  t4260 = -1.000000000016*t4210*t2706;
  t4263 = t4253 + t4254 + t4260;
  t4273 = t2587*t4210;
  t4285 = -1.*t46*t2706;
  t4289 = -4.e-6*t3976*t2706;
  t4292 = t4273 + t4285 + t4289;
  t4235 = 4.e-6*t2587*t4210;
  t4239 = -4.e-6*t46*t2706;
  t4240 = -1.6e-11*t3976*t2706;
  t4245 = t4235 + t4239 + t4240;
  t4392 = 4.e-6*t3101*t46;
  t4403 = t3163*t3976;
  t4405 = 4.e-6*t4210*t2706;
  t4410 = t4392 + t4403 + t4405;
  t4362 = t2587*t46;
  t4366 = 4.e-6*t3101*t3976;
  t4374 = t4210*t2706;
  t4378 = t4362 + t4366 + t4374;
  t4437 = t3290*t4210;
  t4447 = t4437 + t4285 + t4289;
  t4516 = Cos(var1[3]);
  t4510 = Sin(var1[3]);
  t4511 = -1.*t1773*t4510;
  t4519 = -1.*t4516*t46*t566;
  t4523 = t4511 + t4519;
  t4531 = t4516*t1773*t46;
  t4537 = -1.*t4510*t566;
  t4538 = t4531 + t4537;
  t2973 = 4.9936e-13*var1[7];
  t2985 = -0.03874900000062*t2690;
  t2987 = 0.281210000004*t2706;
  t3056 = t2973 + t2985 + t2987;
  t4545 = t581*t4523;
  t4549 = -1.*t4538*t1239;
  t4550 = t4545 + t4549;
  t4563 = t581*t4538;
  t4566 = t4523*t1239;
  t4568 = t4563 + t4566;
  t4572 = -4.e-6*t4516*t2972*t3101;
  t4579 = t3163*t4550;
  t4585 = 4.e-6*t4568*t2706;
  t4595 = t4572 + t4579 + t4585;
  t4614 = -1.*t4516*t2972*t2587;
  t4616 = 4.e-6*t3101*t4550;
  t4618 = t4568*t2706;
  t4621 = t4614 + t4616 + t4618;
  t4598 = t3290*t4568;
  t4601 = t4516*t2972*t2706;
  t4605 = -4.e-6*t4550*t2706;
  t4610 = t4598 + t4601 + t4605;
  t4671 = -1.*t2972*t581*t4510*t566;
  t4672 = -1.*t2972*t1773*t4510*t1239;
  t4673 = t4671 + t4672;
  t4681 = t2972*t1773*t581*t4510;
  t4682 = -1.*t2972*t4510*t566*t1239;
  t4683 = t4681 + t4682;
  t4694 = 4.e-6*t3101*t4510*t46;
  t4698 = t3163*t4673;
  t4699 = 4.e-6*t4683*t2706;
  t4701 = t4694 + t4698 + t4699;
  t4727 = t2587*t4510*t46;
  t4729 = 4.e-6*t3101*t4673;
  t4746 = t4683*t2706;
  t4748 = t4727 + t4729 + t4746;
  t4704 = t3290*t4683;
  t4711 = -1.*t4510*t46*t2706;
  t4713 = -4.e-6*t4673*t2706;
  t4719 = t4704 + t4711 + t4713;
  t4833 = -1.*t1773*t4510*t46;
  t4836 = -1.*t4516*t566;
  t4843 = t4833 + t4836;
  t4877 = t4516*t1773;
  t4880 = -1.*t4510*t46*t566;
  t4884 = t4877 + t4880;
  t4891 = t581*t4843;
  t4897 = -1.*t4884*t1239;
  t4899 = t4891 + t4897;
  t4903 = t581*t4884;
  t4906 = t4843*t1239;
  t4907 = t4903 + t4906;
  t4914 = t3290*t4907;
  t4915 = -4.e-6*t4899*t2706;
  t4918 = t4914 + t4915;
  t4909 = t3163*t4899;
  t4910 = 4.e-6*t4907*t2706;
  t4911 = t4909 + t4910;
  t4930 = 4.e-6*t3101*t4899;
  t4933 = t4907*t2706;
  t4943 = t4930 + t4933;
  t4158 = -0.15121*t581;
  t4159 = t4158 + t1972;
  t4164 = 0.15121*t581;
  t4165 = t4164 + t1972;
  t4992 = t1773*t4510*t46;
  t4993 = t4516*t566;
  t4997 = t4992 + t4993;
  t5010 = -1.*t581*t4997;
  t5011 = t5010 + t4897;
  t5015 = -1.*t4997*t1239;
  t5017 = t4903 + t5015;
  t5025 = t3290*t5017;
  t5030 = -4.e-6*t5011*t2706;
  t5039 = t5025 + t5030;
  t5020 = t3163*t5011;
  t5021 = 4.e-6*t5017*t2706;
  t5023 = t5020 + t5021;
  t5049 = 4.e-6*t3101*t5011;
  t5053 = t5017*t2706;
  t5054 = t5049 + t5053;
  t4169 = 0.281210000004*t2587;
  t4173 = -0.03874900000062*t2706;
  t4181 = 4.9936e-13 + t4169 + t4173;
  t4186 = 1.124840000016e-6*t2587;
  t4193 = -1.5499600000248e-7*t2706;
  t4197 = -1.2484e-7 + t4186 + t4193;
  t4213 = 0.03874900000062*t2587;
  t4223 = 0.281210000008499*t2706;
  t4230 = t4213 + t4223;
  t5120 = t581*t4997;
  t5122 = t4884*t1239;
  t5137 = t5120 + t5122;
  t5157 = t2972*t2587*t4510;
  t5170 = -4.e-6*t2587*t5017;
  t5171 = -1.000000000016*t5137*t2706;
  t5172 = t5157 + t5170 + t5171;
  t5174 = t2587*t5137;
  t5176 = t2972*t4510*t2706;
  t5180 = -4.e-6*t5017*t2706;
  t5182 = t5174 + t5176 + t5180;
  t5141 = 4.e-6*t2587*t5137;
  t5142 = 4.e-6*t2972*t4510*t2706;
  t5145 = -1.6e-11*t5017*t2706;
  t5148 = t5141 + t5142 + t5145;
  t4380 = 0.503210000008*t3233;
  t4381 = -0.03874900000062*t3258;
  t4388 = 5.136e-14 + t4380 + t4381;
  t4424 = 2.012840000032e-6*t3233;
  t4425 = -1.5499600000248e-7*t3258;
  t4432 = -1.284e-8 + t4424 + t4425;
  t4451 = 0.03874900000062*t3233;
  t4455 = 0.503210000016051*t3258;
  t4456 = t4451 + t4455;
  t5237 = -4.e-6*t2972*t3101*t4510;
  t5240 = t3163*t5017;
  t5243 = 4.e-6*t5137*t2706;
  t5244 = t5237 + t5240 + t5243;
  t5231 = -1.*t2972*t2587*t4510;
  t5233 = 4.e-6*t3101*t5017;
  t5234 = t5137*t2706;
  t5235 = t5231 + t5233 + t5234;
  t5249 = t3290*t5137;
  t5251 = t5249 + t5176 + t5180;
  t5269 = -4.e-6*t5244*t3258;
  t5271 = -1.*t5235*t3258;
  t5505 = t4516*t2972*t581*t566;
  t5506 = t4516*t2972*t1773*t1239;
  t5507 = t5505 + t5506;
  t5515 = -1.*t4516*t2972*t1773*t581;
  t5516 = t4516*t2972*t566*t1239;
  t5517 = t5515 + t5516;
  t5533 = -4.e-6*t4516*t3101*t46;
  t5538 = t3163*t5507;
  t5550 = 4.e-6*t5517*t2706;
  t5551 = t5533 + t5538 + t5550;
  t5595 = -1.*t4516*t2587*t46;
  t5597 = 4.e-6*t3101*t5507;
  t5604 = t5517*t2706;
  t5605 = t5595 + t5597 + t5604;
  t5560 = t3290*t5517;
  t5561 = t4516*t46*t2706;
  t5575 = -4.e-6*t5507*t2706;
  t5591 = t5560 + t5561 + t5575;
  t5701 = t1773*t4510;
  t5703 = t4516*t46*t566;
  t5705 = t5701 + t5703;
  t5718 = -1.*t5705*t1239;
  t5726 = t4563 + t5718;
  t5741 = t581*t5705;
  t5767 = t4538*t1239;
  t5768 = t5741 + t5767;
  t5782 = t3290*t5768;
  t5783 = -4.e-6*t5726*t2706;
  t5794 = t5782 + t5783;
  t5771 = t3163*t5726;
  t5772 = 4.e-6*t5768*t2706;
  t5773 = t5771 + t5772;
  t5802 = 4.e-6*t3101*t5726;
  t5810 = t5768*t2706;
  t5829 = t5802 + t5810;
  t5980 = -1.*t4516*t1773*t46;
  t5982 = t4510*t566;
  t6028 = t5980 + t5982;
  t6040 = -1.*t581*t6028;
  t6045 = t6040 + t5718;
  t6047 = -1.*t6028*t1239;
  t6049 = t5741 + t6047;
  t6077 = t3290*t6049;
  t6079 = -4.e-6*t6045*t2706;
  t6082 = t6077 + t6079;
  t6062 = t3163*t6045;
  t6063 = 4.e-6*t6049*t2706;
  t6070 = t6062 + t6063;
  t6084 = 4.e-6*t3101*t6045;
  t6087 = t6049*t2706;
  t6089 = t6084 + t6087;
  t6258 = t581*t6028;
  t6272 = t5705*t1239;
  t6274 = t6258 + t6272;
  t6311 = -4.e-6*t2587*t6049;
  t6313 = -1.000000000016*t6274*t2706;
  t6322 = t4614 + t6311 + t6313;
  t6327 = t2587*t6274;
  t6328 = -1.*t4516*t2972*t2706;
  t6330 = -4.e-6*t6049*t2706;
  t6335 = t6327 + t6328 + t6330;
  t6283 = 4.e-6*t2587*t6274;
  t6284 = -4.e-6*t4516*t2972*t2706;
  t6296 = -1.6e-11*t6049*t2706;
  t6299 = t6283 + t6284 + t6296;
  t6508 = 4.e-6*t4516*t2972*t3101;
  t6512 = t3163*t6049;
  t6517 = 4.e-6*t6274*t2706;
  t6518 = t6508 + t6512 + t6517;
  t6483 = t4516*t2972*t2587;
  t6496 = 4.e-6*t3101*t6049;
  t6503 = t6274*t2706;
  t6505 = t6483 + t6496 + t6503;
  t6547 = t3290*t6274;
  t6570 = t6547 + t6328 + t6330;
  p_output1[0]=1.;
  p_output1[1]=t2359*t2731 + t2747*t2924 + t2972*t3056 + t3226*t3274 + t3312*t3455 + t3685*t3722 - 0.03875*(t3258*t3312 + t3233*t3685 + 4.e-6*t3226*t3741) + 0.14871*(4.e-6*t3258*t3312 + 4.e-6*t3685*t3741 + t3226*t3745) + 0.80321*(-4.e-6*t3226*t3258 - 1.*t3258*t3685 + t3312*t3857) - 1.*t1773*t2169*t46 + t1738*t46*t566;
  p_output1[2]=-1.*t1738*t1773*t2972 + t3967 + t3978 + t3995 + t4011 + t4046 + t4065 + t4095 + t4146 - 1.*t2169*t2972*t566;
  p_output1[3]=t3967 + t3978 + t3995 + t4011 + t4046 + t4065 + t4095 + t4146 + t1773*t2972*t4165 - 1.*t2972*t4159*t566;
  p_output1[4]=t3976*t4197 + t4210*t4230 + t3274*t4245 + t3455*t4263 + t3722*t4292 - 0.03875*(4.e-6*t3741*t4245 + t3258*t4263 + t3233*t4292) + 0.80321*(-4.e-6*t3258*t4245 + t3857*t4263 - 1.*t3258*t4292) + 0.14871*(t3745*t4245 + 4.e-6*t3258*t4263 + 4.e-6*t3741*t4292) + t4181*t46;
  p_output1[5]=t4378*t4388 + t4410*t4432 + 0.14871*(-4.e-6*t3258*t4378 - 1.6e-11*t3258*t4410 + 4.e-6*t3233*t4447) - 0.03875*(-1.*t3258*t4378 - 4.e-6*t3258*t4410 + t3233*t4447) + 0.80321*(-1.*t3233*t4378 - 4.e-6*t3233*t4410 - 1.000000000016*t3258*t4447) + t4447*t4456;
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=-1.*t2972*t3056*t4516 + t1738*t4523 + t2169*t4538 + t2731*t4550 + t2924*t4568 + t3274*t4595 + t3455*t4610 + t3722*t4621 - 0.03875*(4.e-6*t3741*t4595 + t3258*t4610 + t3233*t4621) + 0.80321*(-4.e-6*t3258*t4595 + t3857*t4610 - 1.*t3258*t4621) + 0.14871*(t3745*t4595 + 4.e-6*t3258*t4610 + 4.e-6*t3741*t4621);
  p_output1[9]=t1773*t2169*t2972*t4510 + t3056*t4510*t46 + t2731*t4673 + t2924*t4683 + t3274*t4701 + t3455*t4719 + t3722*t4748 - 0.03875*(4.e-6*t3741*t4701 + t3258*t4719 + t3233*t4748) + 0.80321*(-4.e-6*t3258*t4701 + t3857*t4719 - 1.*t3258*t4748) + 0.14871*(t3745*t4701 + 4.e-6*t3258*t4719 + 4.e-6*t3741*t4748) - 1.*t1738*t2972*t4510*t566;
  p_output1[10]=t1738*t4843 + t2169*t4884 + t2731*t4899 + t2924*t4907 + t3274*t4911 + t3455*t4918 + t3722*t4943 - 0.03875*(4.e-6*t3741*t4911 + t3258*t4918 + t3233*t4943) + 0.80321*(-4.e-6*t3258*t4911 + t3857*t4918 - 1.*t3258*t4943) + 0.14871*(t3745*t4911 + 4.e-6*t3258*t4918 + 4.e-6*t3741*t4943);
  p_output1[11]=t4159*t4884 + t4165*t4997 + t2731*t5011 + t2924*t5017 + t3274*t5023 + t3455*t5039 + t3722*t5054 - 0.03875*(4.e-6*t3741*t5023 + t3258*t5039 + t3233*t5054) + 0.80321*(-4.e-6*t3258*t5023 + t3857*t5039 - 1.*t3258*t5054) + 0.14871*(t3745*t5023 + 4.e-6*t3258*t5039 + 4.e-6*t3741*t5054);
  p_output1[12]=-1.*t2972*t4181*t4510 + t4197*t5017 + t4230*t5137 + t3274*t5148 + t3455*t5172 + t3722*t5182 - 0.03875*(4.e-6*t3741*t5148 + t3258*t5172 + t3233*t5182) + 0.80321*(-4.e-6*t3258*t5148 + t3857*t5172 - 1.*t3258*t5182) + 0.14871*(t3745*t5148 + 4.e-6*t3258*t5172 + 4.e-6*t3741*t5182);
  p_output1[13]=t4388*t5235 + t4432*t5244 + t4456*t5251 + 0.14871*(-4.e-6*t3258*t5235 - 1.6e-11*t3258*t5244 + 4.e-6*t3233*t5251) + 0.80321*(-1.*t3233*t5235 - 4.e-6*t3233*t5244 - 1.000000000016*t3258*t5251) - 0.03875*(t3233*t5251 + t5269 + t5271);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-1.*t2972*t3056*t4510 + t1738*t4884 + t2169*t4997 + t2731*t5017 + t2924*t5137 + t3722*t5235 + t3274*t5244 + t3455*t5251 + 0.14871*(4.e-6*t3741*t5235 + t3745*t5244 + 4.e-6*t3258*t5251) - 0.03875*(t3233*t5235 + 4.e-6*t3741*t5244 + t3258*t5251) + 0.80321*(t3857*t5251 + t5269 + t5271);
  p_output1[17]=-1.*t1773*t2169*t2972*t4516 - 1.*t3056*t4516*t46 + t2731*t5507 + t2924*t5517 + t3274*t5551 + t3455*t5591 + t3722*t5605 - 0.03875*(4.e-6*t3741*t5551 + t3258*t5591 + t3233*t5605) + 0.80321*(-4.e-6*t3258*t5551 + t3857*t5591 - 1.*t3258*t5605) + 0.14871*(t3745*t5551 + 4.e-6*t3258*t5591 + 4.e-6*t3741*t5605) + t1738*t2972*t4516*t566;
  p_output1[18]=t1738*t4538 + t2169*t5705 + t2731*t5726 + t2924*t5768 + t3274*t5773 + t3455*t5794 + t3722*t5829 - 0.03875*(4.e-6*t3741*t5773 + t3258*t5794 + t3233*t5829) + 0.80321*(-4.e-6*t3258*t5773 + t3857*t5794 - 1.*t3258*t5829) + 0.14871*(t3745*t5773 + 4.e-6*t3258*t5794 + 4.e-6*t3741*t5829);
  p_output1[19]=t4159*t5705 + t4165*t6028 + t2731*t6045 + t2924*t6049 + t3274*t6070 + t3455*t6082 + t3722*t6089 - 0.03875*(4.e-6*t3741*t6070 + t3258*t6082 + t3233*t6089) + 0.80321*(-4.e-6*t3258*t6070 + t3857*t6082 - 1.*t3258*t6089) + 0.14871*(t3745*t6070 + 4.e-6*t3258*t6082 + 4.e-6*t3741*t6089);
  p_output1[20]=t2972*t4181*t4516 + t4197*t6049 + t4230*t6274 + t3274*t6299 + t3455*t6322 + t3722*t6335 - 0.03875*(4.e-6*t3741*t6299 + t3258*t6322 + t3233*t6335) + 0.80321*(-4.e-6*t3258*t6299 + t3857*t6322 - 1.*t3258*t6335) + 0.14871*(t3745*t6299 + 4.e-6*t3258*t6322 + 4.e-6*t3741*t6335);
  p_output1[21]=t4388*t6505 + t4432*t6518 + t4456*t6570 + 0.14871*(-4.e-6*t3258*t6505 - 1.6e-11*t3258*t6518 + 4.e-6*t3233*t6570) - 0.03875*(-1.*t3258*t6505 - 4.e-6*t3258*t6518 + t3233*t6570) + 0.80321*(-1.*t3233*t6505 - 4.e-6*t3233*t6518 - 1.000000000016*t3258*t6570);
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

namespace TrotStance2
{

void J_h_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
