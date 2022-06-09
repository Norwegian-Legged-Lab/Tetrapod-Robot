/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:11 GMT+02:00
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
  double t3411;
  double t3412;
  double t3421;
  double t3422;
  double t3430;
  double t3439;
  double t3444;
  double t3450;
  double t3292;
  double t3406;
  double t3452;
  double t3471;
  double t3446;
  double t3455;
  double t3464;
  double t3220;
  double t3472;
  double t3473;
  double t3560;
  double t3571;
  double t3572;
  double t3573;
  double t3582;
  double t3583;
  double t3589;
  double t3620;
  double t3647;
  double t3686;
  double t3691;
  double t3699;
  double t3702;
  double t3706;
  double t3707;
  double t3744;
  double t3747;
  double t3750;
  double t3755;
  double t3760;
  double t3762;
  double t3770;
  double t3778;
  double t3779;
  double t3780;
  double t3784;
  double t3786;
  double t3830;
  double t3865;
  double t3866;
  double t3883;
  double t3884;
  double t3886;
  double t3888;
  double t3889;
  double t3899;
  double t3902;
  double t3915;
  double t3932;
  double t3958;
  double t3960;
  double t3966;
  double t3967;
  double t3882;
  double t3890;
  double t3891;
  double t3897;
  double t3908;
  double t3971;
  double t3972;
  double t3984;
  double t3998;
  double t4004;
  double t4009;
  double t4017;
  double t4029;
  double t4032;
  double t4039;
  double t4127;
  double t4128;
  double t4132;
  double t3898;
  double t4042;
  double t4053;
  double t4150;
  double t4151;
  double t4187;
  double t3874;
  double t3878;
  double t3879;
  double t4144;
  double t4145;
  double t4146;
  double t4198;
  double t4199;
  double t4204;
  double t4252;
  double t4256;
  double t4257;
  double t4389;
  double t4390;
  double t4391;
  double t4147;
  double t4406;
  double t4410;
  double t4411;
  double t4233;
  double t4448;
  double t4449;
  double t4450;
  double t4149;
  double t4191;
  double t4193;
  double t4418;
  double t4425;
  double t4430;
  double t4435;
  double t4436;
  double t4447;
  double t4453;
  double t4236;
  double t4238;
  double t4239;
  double t4269;
  double t4283;
  double t4531;
  double t4539;
  double t4553;
  double t4555;
  double t4273;
  double t4274;
  double t4275;
  double t4285;
  double t4286;
  double t4287;
  double t4319;
  double t4351;
  double t4328;
  double t4329;
  double t4330;
  double t4486;
  double t4491;
  double t4666;
  double t4667;
  double t4672;
  double t4676;
  double t4364;
  double t4365;
  double t4382;
  double t4392;
  double t4393;
  double t4394;
  double t4395;
  double t4396;
  double t4397;
  double t4398;
  double t4399;
  double t4402;
  double t4403;
  double t4404;
  double t4405;
  double t4748;
  double t4750;
  double t4754;
  double t4742;
  double t4439;
  double t4780;
  double t4781;
  double t4782;
  double t4790;
  double t4797;
  double t4799;
  double t4451;
  double t4459;
  double t4460;
  double t4464;
  double t4469;
  double t4483;
  double t4832;
  double t4493;
  double t4494;
  double t4836;
  double t4500;
  double t4501;
  double t4505;
  double t4512;
  double t4515;
  double t4516;
  double t4517;
  double t4518;
  double t4521;
  double t4524;
  double t4525;
  double t4529;
  double t4534;
  double t4543;
  double t4548;
  double t4549;
  double t4550;
  double t4554;
  double t4594;
  double t4599;
  double t4600;
  double t4605;
  double t4925;
  double t4619;
  double t4620;
  double t5490;
  double t4630;
  double t4637;
  double t4641;
  double t4642;
  double t4646;
  double t4647;
  double t4648;
  double t4649;
  double t4651;
  double t4652;
  double t4653;
  double t4655;
  double t4656;
  double t4657;
  double t4659;
  double t4661;
  double t4668;
  double t4673;
  double t4679;
  double t4681;
  double t4683;
  double t4687;
  double t4691;
  double t8834;
  double t4705;
  double t4706;
  double t8963;
  double t4716;
  double t4718;
  double t4725;
  double t9054;
  double t9056;
  double t9059;
  double t9063;
  double t9134;
  double t9143;
  double t9150;
  double t9151;
  double t9153;
  double t9155;
  double t9173;
  double t9177;
  double t9197;
  double t9200;
  double t9201;
  double t9203;
  double t9206;
  double t9207;
  double t9202;
  double t9229;
  double t9230;
  double t9231;
  double t9235;
  double t9242;
  double t9283;
  double t9288;
  double t9302;
  double t9336;
  double t9466;
  double t9481;
  double t10162;
  double t10173;
  double t10374;
  double t10379;
  double t10331;
  double t9062;
  double t9144;
  double t9145;
  double t10473;
  double t10484;
  double t10489;
  double t3674;
  double t3676;
  double t3680;
  double t11534;
  double t11553;
  double t11560;
  double t9039;
  double t9042;
  double t9052;
  double t3815;
  double t3816;
  double t3817;
  double t11665;
  double t11666;
  double t11671;
  double t11672;
  double t11673;
  double t11674;
  double t11676;
  double t11677;
  double t11678;
  double t11683;
  double t11684;
  double t11685;
  double t11675;
  double t11691;
  double t11694;
  double t11699;
  double t11700;
  double t11701;
  double t11696;
  double t11698;
  double t11708;
  double t11709;
  double t11745;
  double t11748;
  double t11749;
  double t11751;
  double t11757;
  double t11758;
  double t11759;
  double t10127;
  double t10138;
  double t10215;
  double t10219;
  double t10279;
  double t10351;
  double t10352;
  double t10353;
  double t11800;
  double t11820;
  double t10446;
  double t10458;
  double t10463;
  double t11968;
  double t11976;
  double t11989;
  double t11780;
  double t11782;
  double t11784;
  double t11240;
  double t11250;
  double t11251;
  double t11255;
  double t11281;
  double t11323;
  double t11337;
  double t12117;
  double t12145;
  t3411 = Cos(var1[13]);
  t3412 = Cos(var1[14]);
  t3421 = t3411*t3412;
  t3422 = Sin(var1[13]);
  t3430 = Sin(var1[14]);
  t3439 = t3422*t3430;
  t3444 = t3421 + t3439;
  t3450 = Cos(var1[12]);
  t3292 = Cos(var1[5]);
  t3406 = Sin(var1[12]);
  t3452 = Sin(var1[5]);
  t3471 = Cos(var1[3]);
  t3446 = t3292*t3406*t3444;
  t3455 = t3450*t3444*t3452;
  t3464 = t3446 + t3455;
  t3220 = Sin(var1[3]);
  t3472 = Cos(var1[4]);
  t3473 = -1.*t3412*t3422;
  t3560 = t3411*t3430;
  t3571 = t3473 + t3560;
  t3572 = t3472*t3571;
  t3573 = Sin(var1[4]);
  t3582 = t3450*t3292*t3444;
  t3583 = -1.*t3406*t3444*t3452;
  t3589 = t3582 + t3583;
  t3620 = -1.*t3573*t3589;
  t3647 = t3572 + t3620;
  t3686 = -1.*t3292*t3406;
  t3691 = -1.*t3450*t3452;
  t3699 = t3686 + t3691;
  t3702 = t3450*t3292;
  t3706 = -1.*t3406*t3452;
  t3707 = t3702 + t3706;
  t3744 = t3412*t3422;
  t3747 = -1.*t3411*t3430;
  t3750 = t3744 + t3747;
  t3755 = t3292*t3406*t3750;
  t3760 = t3450*t3750*t3452;
  t3762 = t3755 + t3760;
  t3770 = t3472*t3444;
  t3778 = t3450*t3292*t3750;
  t3779 = -1.*t3406*t3750*t3452;
  t3780 = t3778 + t3779;
  t3784 = -1.*t3573*t3780;
  t3786 = t3770 + t3784;
  t3830 = -1.*t3571*t3573;
  t3865 = -1.*t3472*t3589;
  t3866 = t3830 + t3865;
  t3883 = -1.*t3412;
  t3884 = 1. + t3883;
  t3886 = 0.50321*t3884;
  t3888 = 0.19821*t3412;
  t3889 = t3886 + t3888;
  t3899 = -1.*t3450;
  t3902 = 1. + t3899;
  t3915 = -1.*t3411;
  t3932 = 1. + t3915;
  t3958 = 0.28121*t3932;
  t3960 = t3411*t3889;
  t3966 = -0.305*t3422*t3430;
  t3967 = t3958 + t3960 + t3966;
  t3882 = 0.28121*t3422;
  t3890 = -1.*t3889*t3422;
  t3891 = -0.305*t3411*t3430;
  t3897 = t3882 + t3890 + t3891;
  t3908 = 0.15121*t3902;
  t3971 = t3450*t3967;
  t3972 = t3908 + t3971;
  t3984 = t3292*t3972;
  t3998 = -0.15121*t3902;
  t4004 = -0.15121*t3450;
  t4009 = -0.15121*t3406;
  t4017 = t3406*t3967;
  t4029 = t3998 + t4004 + t4009 + t4017;
  t4032 = -1.*t4029*t3452;
  t4039 = t3984 + t4032;
  t4127 = t3897*t3573;
  t4128 = t3472*t4039;
  t4132 = t4127 + t4128;
  t3898 = -1.*t3897*t3573;
  t4042 = -1.*t3472*t4039;
  t4053 = t3898 + t4042;
  t4150 = t3472*t3897;
  t4151 = -1.*t3573*t4039;
  t4187 = t4150 + t4151;
  t3874 = t3444*t3573;
  t3878 = t3472*t3780;
  t3879 = t3874 + t3878;
  t4144 = t3292*t4029;
  t4145 = t3972*t3452;
  t4146 = t4144 + t4145;
  t4198 = -1.*t3444*t3573;
  t4199 = -1.*t3472*t3780;
  t4204 = t4198 + t4199;
  t4252 = t3571*t3573;
  t4256 = t3472*t3589;
  t4257 = t4252 + t4256;
  t4389 = -1.*t3292*t3406*t3444;
  t4390 = -1.*t3450*t3444*t3452;
  t4391 = t4389 + t4390;
  t4147 = -1.*t3707*t4146;
  t4406 = -1.*t3292*t4029;
  t4410 = -1.*t3972*t3452;
  t4411 = t4406 + t4410;
  t4233 = t3762*t4146;
  t4448 = -1.*t3292*t3406*t3750;
  t4449 = -1.*t3450*t3750*t3452;
  t4450 = t4448 + t4449;
  t4149 = -1.*t3472*t3699*t4132;
  t4191 = t3573*t3699*t4187;
  t4193 = t4147 + t4149 + t4191;
  t4418 = -1.*t3699*t4146;
  t4425 = -1.*t3707*t4039;
  t4430 = -1.*t3450*t3292;
  t4435 = t3406*t3452;
  t4436 = t4430 + t4435;
  t4447 = t3780*t4146;
  t4453 = t3762*t4039;
  t4236 = t3879*t4132;
  t4238 = t3786*t4187;
  t4239 = t4233 + t4236 + t4238;
  t4269 = -1.*t3762*t4146;
  t4283 = t3464*t4146;
  t4531 = -1.*t3780*t4146;
  t4539 = -1.*t3762*t4039;
  t4553 = t3589*t4146;
  t4555 = t3464*t4039;
  t4273 = -1.*t3879*t4132;
  t4274 = -1.*t3786*t4187;
  t4275 = t4269 + t4273 + t4274;
  t4285 = t4257*t4132;
  t4286 = t3647*t4187;
  t4287 = t4283 + t4285 + t4286;
  t4319 = t3707*t4146;
  t4351 = -1.*t3464*t4146;
  t4328 = t3472*t3699*t4132;
  t4329 = -1.*t3573*t3699*t4187;
  t4330 = t4319 + t4328 + t4329;
  t4486 = Power(t3472,2);
  t4491 = Power(t3573,2);
  t4666 = t3699*t4146;
  t4667 = t3707*t4039;
  t4672 = -1.*t3589*t4146;
  t4676 = -1.*t3464*t4039;
  t4364 = -1.*t4257*t4132;
  t4365 = -1.*t3647*t4187;
  t4382 = t4351 + t4364 + t4365;
  t4392 = var2[0]*t3472*t4391;
  t4393 = t3220*t3573*t4391;
  t4394 = t3471*t3589;
  t4395 = t4393 + t4394;
  t4396 = var2[1]*t4395;
  t4397 = -1.*t3471*t3573*t4391;
  t4398 = t3220*t3589;
  t4399 = t4397 + t4398;
  t4402 = var2[2]*t4399;
  t4403 = -1.*t3699*t4039;
  t4404 = t4147 + t4403;
  t4405 = t3780*t4404;
  t4748 = 0.15121*t3406;
  t4750 = -1.*t3406*t3967;
  t4754 = t4748 + t4750;
  t4742 = t4004 + t3971;
  t4439 = -1.*t4436*t4039;
  t4780 = t3292*t4754;
  t4781 = -1.*t4742*t3452;
  t4782 = t4780 + t4781;
  t4790 = t3292*t4742;
  t4797 = t4754*t3452;
  t4799 = t4790 + t4797;
  t4451 = t4450*t4039;
  t4459 = t3897*t3444;
  t4460 = t3780*t4039;
  t4464 = t4459 + t4233 + t4460;
  t4469 = t3699*t4464;
  t4483 = t3472*t4450*t4193;
  t4832 = -1.*t3707*t4799;
  t4493 = -1.*t3472*t4436*t4132;
  t4494 = t3573*t4436*t4187;
  t4836 = t3762*t4799;
  t4500 = t3472*t4450*t4132;
  t4501 = -1.*t3573*t4450*t4187;
  t4505 = t3472*t4436*t4239;
  t4512 = var2[0]*t3472*t4436;
  t4515 = t3220*t3699;
  t4516 = -1.*t3471*t3573*t4436;
  t4517 = t4515 + t4516;
  t4518 = var2[2]*t4517;
  t4521 = t3471*t3699;
  t4524 = t3220*t3573*t4436;
  t4525 = t4521 + t4524;
  t4529 = var2[1]*t4525;
  t4534 = -1.*t4450*t4039;
  t4543 = -1.*t3897*t3444;
  t4548 = -1.*t3780*t4039;
  t4549 = t4543 + t4269 + t4548;
  t4550 = t3589*t4549;
  t4554 = t4391*t4039;
  t4594 = t3897*t3571;
  t4599 = t3589*t4039;
  t4600 = t4594 + t4283 + t4599;
  t4605 = t3780*t4600;
  t4925 = -1.*t3762*t4799;
  t4619 = -1.*t3472*t4450*t4132;
  t4620 = t3573*t4450*t4187;
  t5490 = t3464*t4799;
  t4630 = t3472*t4391*t4132;
  t4637 = -1.*t3573*t4391*t4187;
  t4641 = t3472*t4391*t4275;
  t4642 = t3472*t4450*t4287;
  t4646 = var2[0]*t3472*t4450;
  t4647 = t3220*t3573*t4450;
  t4648 = t3471*t3780;
  t4649 = t4647 + t4648;
  t4651 = var2[1]*t4649;
  t4652 = -1.*t3471*t3573*t4450;
  t4653 = t3220*t3780;
  t4655 = t4652 + t4653;
  t4656 = var2[2]*t4655;
  t4657 = t3699*t4039;
  t4659 = t4319 + t4657;
  t4661 = t3589*t4659;
  t4668 = t4436*t4039;
  t4673 = -1.*t4391*t4039;
  t4679 = -1.*t3897*t3571;
  t4681 = -1.*t3589*t4039;
  t4683 = t4679 + t4351 + t4681;
  t4687 = t3699*t4683;
  t4691 = t3472*t4391*t4330;
  t8834 = t3707*t4799;
  t4705 = t3472*t4436*t4132;
  t4706 = -1.*t3573*t4436*t4187;
  t8963 = -1.*t3464*t4799;
  t4716 = -1.*t3472*t4391*t4132;
  t4718 = t3573*t4391*t4187;
  t4725 = t3472*t4436*t4382;
  t9054 = -1.*t3411*t3412;
  t9056 = -1.*t3422*t3430;
  t9059 = t9054 + t9056;
  t9063 = t3450*t3292*t3571;
  t9134 = -1.*t3406*t3571*t3452;
  t9143 = t9063 + t9134;
  t9150 = t3292*t3406*t3571;
  t9151 = t3450*t3571*t3452;
  t9153 = t9150 + t9151;
  t9155 = t3472*t9059;
  t9173 = -1.*t3573*t9143;
  t9177 = t9155 + t9173;
  t9197 = t3292*t3406*t3897;
  t9200 = t3450*t3897*t3452;
  t9201 = t9197 + t9200;
  t9203 = t3450*t3292*t3897;
  t9206 = -1.*t3406*t3897*t3452;
  t9207 = t9203 + t9206;
  t9202 = -1.*t3707*t9201;
  t9229 = 0.28121*t3411;
  t9230 = -1.*t3411*t3889;
  t9231 = 0.305*t3422*t3430;
  t9235 = t9229 + t9230 + t9231;
  t9242 = t3762*t9201;
  t9283 = t9235*t3573;
  t9288 = t3472*t9207;
  t9302 = t9283 + t9288;
  t9336 = t3472*t9235;
  t9466 = -1.*t3573*t9207;
  t9481 = t9336 + t9466;
  t10162 = t3897*t9059;
  t10173 = t3571*t9235;
  t10374 = Power(t3450,2);
  t10379 = Power(t3406,2);
  t10331 = -1.*t9235*t3444;
  t9062 = t9059*t3573;
  t9144 = t3472*t9143;
  t9145 = t9062 + t9144;
  t10473 = t9201*t3464;
  t10484 = t9153*t4146;
  t10489 = -1.*t3762*t9201;
  t3674 = t3471*t3464;
  t3676 = -1.*t3220*t3647;
  t3680 = t3674 + t3676;
  t11534 = t3707*t9201;
  t11553 = -1.*t9201*t3464;
  t11560 = -1.*t9153*t4146;
  t9039 = t3406*t3972;
  t9042 = -1.*t3450*t4029;
  t9052 = t9039 + t9042;
  t3815 = t3471*t3762;
  t3816 = -1.*t3220*t3786;
  t3817 = t3815 + t3816;
  t11665 = -0.305*t3412*t3422;
  t11666 = 0.305*t3411*t3430;
  t11671 = t11665 + t11666;
  t11672 = t3292*t3406*t11671;
  t11673 = t3450*t11671*t3452;
  t11674 = t11672 + t11673;
  t11676 = t3450*t3292*t11671;
  t11677 = -1.*t3406*t11671*t3452;
  t11678 = t11676 + t11677;
  t11683 = t3292*t3406*t9059;
  t11684 = t3450*t9059*t3452;
  t11685 = t11683 + t11684;
  t11675 = -1.*t3707*t11674;
  t11691 = -0.305*t3411*t3412;
  t11694 = t11691 + t3966;
  t11699 = t3450*t3292*t9059;
  t11700 = -1.*t3406*t9059*t3452;
  t11701 = t11699 + t11700;
  t11696 = t3762*t11674;
  t11698 = t11685*t4146;
  t11708 = t11694*t3573;
  t11709 = t3472*t11678;
  t11745 = t11708 + t11709;
  t11748 = t3472*t11694;
  t11749 = -1.*t3573*t11678;
  t11751 = t11748 + t11749;
  t11757 = t3750*t3573;
  t11758 = t3472*t11701;
  t11759 = t11757 + t11758;
  t10127 = -1.*t3750*t3967;
  t10138 = t10127 + t4543;
  t10215 = t3967*t3444;
  t10219 = t4594 + t10215;
  t10279 = -1.*t3750*t3897;
  t10351 = -1.*t3450*t3750*t3972;
  t10352 = -1.*t3406*t3750*t4029;
  t10353 = t4543 + t10351 + t10352;
  t11800 = t3571*t11694;
  t11820 = -1.*t11694*t3444;
  t10446 = t3450*t3444*t3972;
  t10458 = t3406*t3444*t4029;
  t10463 = t4594 + t10446 + t10458;
  t11968 = t11674*t3464;
  t11976 = -1.*t3762*t11674;
  t11989 = -1.*t11685*t4146;
  t11780 = t3472*t3750;
  t11782 = -1.*t3573*t11701;
  t11784 = t11780 + t11782;
  t11240 = -0.15121*t9059;
  t11250 = -0.15121*t3444;
  t11251 = t11240 + t11250;
  t11255 = var2[12]*t11251;
  t11281 = -1.*t3406*t3972;
  t11323 = t3450*t4029;
  t11337 = t11281 + t11323;
  t12117 = t3707*t11674;
  t12145 = -1.*t11674*t3464;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t3220*t3464 - 1.*t3471*t3647)*var2[1] + t3680*var2[2];
  p_output1[10]=(t3471*t3573*t3699 - 1.*t3220*t3707)*var2[1] + (t3220*t3573*t3699 + t3471*t3707)*var2[2];
  p_output1[11]=(-1.*t3220*t3762 - 1.*t3471*t3786)*var2[1] + t3817*var2[2];
  p_output1[12]=t3647*var2[0] - 1.*t3220*t3866*var2[1] + t3471*t3866*var2[2] + (t3879*(t3573*t3699*t4053 + t3573*t3699*t4132) + t3786*t4193 + t3472*t3699*(t3786*t4053 + t3786*t4132 + t3879*t4187 + t4187*t4204) - 1.*t3573*t3699*t4239)*var2[3];
  p_output1[13]=-1.*t3573*t3699*var2[0] + t3220*t3472*t3699*var2[1] - 1.*t3471*t3472*t3699*var2[2] + ((-1.*t3786*t4053 - 1.*t3786*t4132 - 1.*t3879*t4187 - 1.*t4187*t4204)*t4257 + t3879*(t3647*t4053 + t3647*t4132 + t3866*t4187 + t4187*t4257) + t3647*t4275 + t3786*t4287)*var2[3];
  p_output1[14]=t3786*var2[0] - 1.*t3220*t4204*var2[1] + t3471*t4204*var2[2] + ((-1.*t3573*t3699*t4053 - 1.*t3573*t3699*t4132)*t4257 + t3472*t3699*(-1.*t3647*t4053 - 1.*t3647*t4132 - 1.*t3866*t4187 - 1.*t4187*t4257) + t3647*t4330 - 1.*t3573*t3699*t4382)*var2[3];
  p_output1[15]=t4392 + t4396 + t4402 + (t4483 + t3879*(t4418 + t4425 - 1.*t3699*t4411*t4486 - 1.*t3699*t4411*t4491 + t4493 + t4494) + t3472*t3699*(-1.*t3573*t3786*t4411 + t3472*t3879*t4411 + t4447 + t4453 + t4500 + t4501) + t4505)*var2[3] + (t4405 + t3762*(-1.*t3699*t4411 + t4418 + t4425 + t4439) + t3707*(t3780*t4411 + t4447 + t4451 + t4453) + t4469)*var2[4];
  p_output1[16]=t4512 + t4518 + t4529 + (t4257*(t3573*t3786*t4411 - 1.*t3472*t3879*t4411 + t4531 + t4539 + t4619 + t4620) + t3879*(-1.*t3573*t3647*t4411 + t3472*t4257*t4411 + t4553 + t4555 + t4630 + t4637) + t4641 + t4642)*var2[3] + (t3464*(-1.*t3780*t4411 + t4531 + t4534 + t4539) + t4550 + t3762*(t3589*t4411 + t4553 + t4554 + t4555) + t4605)*var2[4];
  p_output1[17]=t4646 + t4651 + t4656 + (t4691 + t4257*(t3699*t4411*t4486 + t3699*t4411*t4491 + t4666 + t4667 + t4705 + t4706) + t3472*t3699*(t3573*t3647*t4411 - 1.*t3472*t4257*t4411 + t4672 + t4676 + t4716 + t4718) + t4725)*var2[3] + (t4661 + t3464*(t3699*t4411 + t4666 + t4667 + t4668) + t3707*(-1.*t3589*t4411 + t4672 + t4673 + t4676) + t4687)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t4392 + t4396 + t4402 + (t4483 + t4505 + t3879*(t4418 + t4493 + t4494 - 1.*t3699*t4486*t4782 - 1.*t3699*t4491*t4782 + t4832) + t3472*t3699*(t4447 + t4500 + t4501 - 1.*t3573*t3786*t4782 + t3472*t3879*t4782 + t4836))*var2[3] + (t4405 + t4469 + t3762*(t4418 + t4439 - 1.*t3699*t4782 + t4832) + t3707*(t4447 + t4451 + t3780*t4782 + t4836))*var2[4] + t3444*(t3450*t3972 + t3406*t4029 - 1.*t3450*t4742 + t3406*t4754)*var2[5];
  p_output1[37]=t4512 + t4518 + t4529 + (t4641 + t4642 + t4257*(t4531 + t4619 + t4620 + t3573*t3786*t4782 - 1.*t3472*t3879*t4782 + t4925) + t3879*(t4553 + t4630 + t4637 - 1.*t3573*t3647*t4782 + t3472*t4257*t4782 + t5490))*var2[3] + (t4550 + t4605 + t3464*(t4531 + t4534 - 1.*t3780*t4782 + t4925) + t3762*(t4553 + t4554 + t3589*t4782 + t5490))*var2[4] + (t3444*(-1.*t3406*t3444*t3972 + t3444*t3450*t4029 + t3406*t3444*t4742 + t3444*t3450*t4754) + t3571*(t3406*t3750*t3972 - 1.*t3450*t3750*t4029 - 1.*t3406*t3750*t4742 - 1.*t3450*t3750*t4754))*var2[5];
  p_output1[38]=t4646 + t4651 + t4656 + (t4691 + t4725 + t4257*(t4666 + t4705 + t4706 + t3699*t4486*t4782 + t3699*t4491*t4782 + t8834) + t3472*t3699*(t4672 + t4716 + t4718 + t3573*t3647*t4782 - 1.*t3472*t4257*t4782 + t8963))*var2[3] + (t4661 + t4687 + t3464*(t4666 + t4668 + t3699*t4782 + t8834) + t3707*(t4672 + t4673 - 1.*t3589*t4782 + t8963))*var2[4] + t3571*(-1.*t3450*t3972 - 1.*t3406*t4029 + t3450*t4742 - 1.*t3406*t4754)*var2[5];
  p_output1[39]=t9145*var2[0] + (t3471*t9153 - 1.*t3220*t9177)*var2[1] + (t3220*t9153 + t3471*t9177)*var2[2] + (t4193*t4257 + t3879*(t9202 - 1.*t3472*t3699*t9302 + t3573*t3699*t9481) + t3472*t3699*(t4283 + t4285 + t4286 + t9242 + t3879*t9302 + t3786*t9481))*var2[3] + (t3464*t4404 + t3762*(t9202 - 1.*t3699*t9207) + t3707*(t4283 + t4594 + t4599 + t3780*t9207 + t3444*t9235 + t9242))*var2[4] + t3571*t9052*var2[5];
  p_output1[40]=(t4257*t4287 + t4275*t9145 + t3879*(t10473 + t10484 + t4132*t9145 + t4187*t9177 + t4257*t9302 + t3647*t9481) + t4257*(t10489 + t4351 + t4364 + t4365 - 1.*t3879*t9302 - 1.*t3786*t9481))*var2[3] + (t3464*t4600 + t4549*t9153 + t3762*(t10162 + t10173 + t10473 + t10484 + t4039*t9143 + t3589*t9207) + t3464*(t10331 + t10489 + t4351 + t4679 + t4681 - 1.*t3780*t9207))*var2[4] + (t10463*t3571 + t3444*(t10162 + t10173 + t10374*t3444*t3897 + t10379*t3444*t3897 + t3450*t3571*t3972 + t3406*t3571*t4029) + t3571*(t10331 - 1.*t10374*t3750*t3897 - 1.*t10379*t3750*t3897 - 1.*t3444*t3450*t3972 - 1.*t3406*t3444*t4029 + t4679) + t10353*t9059)*var2[5] + (t10219*t3571 + t3444*(t10162 + t10173 + t3571*t3967 + t4459) + t3571*(t10279 + t10331 - 1.*t3444*t3967 + t4679) + t10138*t9059)*var2[12];
  p_output1[41]=t11255 + t4257*var2[0] + t3680*var2[1] + (t3220*t3464 + t3471*t3647)*var2[2] + (t4330*t9145 + t3472*t3699*(t11553 + t11560 - 1.*t4132*t9145 - 1.*t4187*t9177 - 1.*t4257*t9302 - 1.*t3647*t9481) + t4257*(t11534 + t3472*t3699*t9302 - 1.*t3573*t3699*t9481))*var2[3] + (t4659*t9153 + t3464*(t11534 + t3699*t9207) + t3707*(t11553 + t11560 - 1.*t3897*t9059 - 1.*t4039*t9143 - 1.*t3589*t9207 - 1.*t3571*t9235))*var2[4] + t11337*t9059*var2[5];
  p_output1[42]=t3879*var2[0] + t3817*var2[1] + (t3220*t3762 + t3471*t3786)*var2[2] + ((t11675 - 1.*t11745*t3472*t3699 + t11751*t3573*t3699)*t3879 + t3472*t3699*(t11696 + t11698 + t11751*t3786 + t11745*t3879 + t11759*t4132 + t11784*t4187) + t11759*t4193)*var2[3] + ((t11675 - 1.*t11678*t3699)*t3762 + t3707*(t11696 + t11698 + t11694*t3444 + t11678*t3780 + t3750*t3897 + t11701*t4039) + t11685*t4404)*var2[4] + t3750*t9052*var2[5] + (0.28121*t3412 - 0.305*Power(t3412,2) - 1.*t3412*t3889)*var2[13];
  p_output1[43]=((t11976 + t11989 - 1.*t11751*t3786 - 1.*t11745*t3879 - 1.*t11759*t4132 - 1.*t11784*t4187)*t4257 + t3879*(t11968 + t11751*t3647 + t4233 + t4236 + t4238 + t11745*t4257) + t3879*t4275 + t11759*t4287)*var2[3] + (t3464*(t10279 + t11820 + t11976 + t11989 - 1.*t11678*t3780 - 1.*t11701*t4039) + t3762*(t11800 + t11968 + t11678*t3589 + t4233 + t4459 + t4460) + t3762*t4549 + t11685*t4600)*var2[4] + (t10353*t3444 + t10463*t3750 + t3444*(t11800 + t10374*t11671*t3444 + t10379*t11671*t3444 + t3450*t3750*t3972 + t3406*t3750*t4029 + t4459) + t3571*(t10279 + t11820 - 1.*t10374*t11671*t3750 - 1.*t10379*t11671*t3750 - 1.*t3450*t3972*t9059 - 1.*t3406*t4029*t9059))*var2[5] + (t10138*t3444 + t10219*t3750 + t3444*(t11800 + t11671*t3444 + t3750*t3967 + t4459) + t3571*(t10279 + t11820 - 1.*t11671*t3750 - 1.*t3967*t9059))*var2[12];
  p_output1[44]=t11255 + t11759*var2[0] + (-1.*t11784*t3220 + t11685*t3471)*var2[1] + (t11685*t3220 + t11784*t3471)*var2[2] + ((t12117 + t11745*t3472*t3699 - 1.*t11751*t3573*t3699)*t4257 + t3472*t3699*(t12145 - 1.*t11751*t3647 - 1.*t11745*t4257 + t4269 + t4273 + t4274) + t3879*t4330)*var2[3] + (t3464*(t12117 + t11678*t3699) + t3707*(t12145 - 1.*t11694*t3571 - 1.*t11678*t3589 + t4269 + t4543 + t4548) + t3762*t4659)*var2[4] + t11337*t3444*var2[5] + (-0.28121*t3430 + 0.305*t3412*t3430 + t3430*t3889)*var2[13];
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJh_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void dJh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
