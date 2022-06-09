/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:52:38 GMT+02:00
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
  double t2856;
  double t3139;
  double t3063;
  double t3274;
  double t3278;
  double t3268;
  double t3284;
  double t3125;
  double t3313;
  double t3314;
  double t3315;
  double t3144;
  double t3246;
  double t3365;
  double t3379;
  double t3391;
  double t3484;
  double t3495;
  double t3502;
  double t3518;
  double t3519;
  double t3523;
  double t3524;
  double t3534;
  double t3542;
  double t3543;
  double t3547;
  double t3548;
  double t3549;
  double t3551;
  double t3596;
  double t3597;
  double t3394;
  double t3439;
  double t3451;
  double t3275;
  double t3291;
  double t3293;
  double t3323;
  double t3331;
  double t3345;
  double t3637;
  double t3642;
  double t3649;
  double t3126;
  double t3211;
  double t3231;
  double t3659;
  double t3662;
  double t3741;
  double t3832;
  double t3824;
  double t3295;
  double t3351;
  double t3353;
  double t3361;
  double t3469;
  double t3470;
  double t3978;
  double t3979;
  double t3998;
  double t4013;
  double t4033;
  double t4034;
  double t4041;
  double t4050;
  double t4051;
  double t4069;
  double t4070;
  double t4074;
  double t4077;
  double t3605;
  double t3606;
  double t3616;
  double t3904;
  double t3907;
  double t3910;
  double t3869;
  double t3870;
  double t3873;
  double t3756;
  double t3785;
  double t3787;
  double t4113;
  double t4117;
  double t4119;
  double t3833;
  double t3834;
  double t3835;
  double t4129;
  double t4132;
  double t4139;
  double t4179;
  double t4180;
  double t4181;
  double t3937;
  double t3945;
  double t3946;
  double t3952;
  double t3953;
  double t3956;
  double t4204;
  double t4208;
  double t4212;
  double t4213;
  double t4214;
  double t4215;
  double t4218;
  double t4220;
  double t4223;
  double t4228;
  double t4229;
  double t4234;
  double t4235;
  double t4079;
  double t4081;
  double t4090;
  double t4098;
  double t4099;
  double t4101;
  double t4145;
  double t4147;
  double t4150;
  double t4166;
  double t4167;
  double t4173;
  double t4282;
  double t4289;
  double t4292;
  double t4296;
  double t4297;
  double t4298;
  double t4323;
  double t4326;
  double t4327;
  double t4330;
  double t4331;
  double t4348;
  double t4349;
  double t4353;
  double t4354;
  double t4355;
  double t4356;
  double t4360;
  double t4367;
  double t4321;
  double t4333;
  double t4339;
  double t4345;
  double t4352;
  double t4406;
  double t4410;
  double t4414;
  double t4417;
  double t4423;
  double t4425;
  double t4426;
  double t4430;
  double t4433;
  double t4435;
  double t4443;
  double t4447;
  double t4452;
  double t4346;
  double t4437;
  double t4439;
  double t4470;
  double t4475;
  double t4476;
  double t4460;
  double t4461;
  double t4462;
  double t4463;
  double t4466;
  double t4483;
  double t4485;
  double t4668;
  double t4669;
  double t4670;
  double t4507;
  double t4508;
  double t4509;
  double t4512;
  double t4522;
  double t4523;
  double t4524;
  double t4525;
  double t4664;
  double t4679;
  double t4544;
  double t4545;
  double t4550;
  double t4552;
  double t4596;
  double t4599;
  double t4607;
  double t4617;
  double t4644;
  double t4645;
  double t4649;
  double t4650;
  double t4658;
  double t4681;
  double t4826;
  double t4829;
  double t4830;
  double t4831;
  double t4839;
  double t4840;
  double t4841;
  double t4691;
  double t4695;
  double t4702;
  double t4850;
  double t4852;
  double t4854;
  double t4708;
  double t4709;
  double t4720;
  double t4733;
  double t4745;
  double t4751;
  double t4755;
  double t4760;
  double t4770;
  double t4773;
  double t4778;
  double t4785;
  double t4799;
  double t4800;
  double t4804;
  double t4809;
  double t4810;
  double t4813;
  double t4814;
  double t4914;
  double t4915;
  double t4916;
  double t4917;
  double t4955;
  double t4957;
  double t4960;
  double t4961;
  double t4962;
  double t3550;
  double t3617;
  double t3630;
  double t4928;
  double t4937;
  double t4945;
  double t4959;
  double t4963;
  double t4964;
  double t4967;
  double t4970;
  double t4982;
  double t5073;
  double t5074;
  double t5089;
  double t5090;
  double t5092;
  double t5094;
  double t5095;
  double t5096;
  double t5078;
  double t5084;
  double t5085;
  double t5093;
  double t5098;
  double t5102;
  double t5109;
  double t5110;
  double t5111;
  double t3755;
  double t3788;
  double t3796;
  double t4690;
  double t4703;
  double t4750;
  double t4761;
  double t4787;
  double t4805;
  double t5205;
  double t5206;
  double t5207;
  double t4857;
  double t5209;
  double t4860;
  double t5214;
  double t5217;
  double t5218;
  double t5219;
  double t5220;
  double t5223;
  double t5224;
  double t5225;
  double t4879;
  double t5227;
  double t4883;
  double t5233;
  double t5237;
  double t5238;
  double t5240;
  double t5241;
  double t4891;
  double t5247;
  double t5251;
  double t5252;
  double t5253;
  double t5255;
  double t4903;
  double t5257;
  double t5262;
  double t5263;
  double t5264;
  double t5266;
  double t4953;
  double t4988;
  double t4989;
  double t5005;
  double t5006;
  double t5016;
  double t5046;
  double t5060;
  double t5088;
  double t5118;
  double t5134;
  double t5146;
  double t5151;
  double t5165;
  double t5172;
  double t5173;
  double t5341;
  double t5344;
  double t5469;
  double t5471;
  double t5356;
  double t5460;
  double t5461;
  double t5462;
  double t5464;
  double t5465;
  double t5467;
  double t5478;
  double t5479;
  double t5480;
  double t5386;
  double t5489;
  double t5490;
  double t5491;
  double t5391;
  double t5392;
  double t5525;
  double t5526;
  double t5527;
  double t5528;
  double t5529;
  double t5530;
  double t5537;
  double t5538;
  double t5572;
  double t5573;
  t2856 = Sin(var1[4]);
  t3139 = Cos(var1[9]);
  t3063 = Cos(var1[5]);
  t3274 = Cos(var1[11]);
  t3278 = Sin(var1[10]);
  t3268 = Cos(var1[10]);
  t3284 = Sin(var1[11]);
  t3125 = Sin(var1[9]);
  t3313 = -1.*t3274*t3278;
  t3314 = t3268*t3284;
  t3315 = t3313 + t3314;
  t3144 = Sin(var1[5]);
  t3246 = Cos(var1[4]);
  t3365 = -1.*t3268*t3274;
  t3379 = -1.*t3278*t3284;
  t3391 = t3365 + t3379;
  t3484 = t3139*t3063;
  t3495 = -1.*t3125*t3144;
  t3502 = t3484 + t3495;
  t3518 = var2[1]*t3246*t3502;
  t3519 = -1.*t3063*t3125*t3315;
  t3523 = -1.*t3139*t3315*t3144;
  t3524 = t3519 + t3523;
  t3534 = var2[2]*t3246*t3524;
  t3542 = -1.*t3063*t3125*t3391;
  t3543 = -1.*t3139*t3391*t3144;
  t3547 = t3542 + t3543;
  t3548 = var2[0]*t3246*t3547;
  t3549 = t3518 + t3534 + t3548;
  t3551 = t3274*t3278;
  t3596 = -1.*t3268*t3284;
  t3597 = t3551 + t3596;
  t3394 = t3139*t3063*t3391;
  t3439 = -1.*t3125*t3391*t3144;
  t3451 = t3394 + t3439;
  t3275 = t3268*t3274;
  t3291 = t3278*t3284;
  t3293 = t3275 + t3291;
  t3323 = t3139*t3063*t3315;
  t3331 = -1.*t3125*t3315*t3144;
  t3345 = t3323 + t3331;
  t3637 = t3315*t2856;
  t3642 = t3246*t3451;
  t3649 = t3637 + t3642;
  t3126 = t3063*t3125;
  t3211 = t3139*t3144;
  t3231 = t3126 + t3211;
  t3659 = t3293*t2856;
  t3662 = t3246*t3345;
  t3741 = t3659 + t3662;
  t3832 = Sin(var1[3]);
  t3824 = Cos(var1[3]);
  t3295 = t3246*t3293;
  t3351 = -1.*t2856*t3345;
  t3353 = t3295 + t3351;
  t3361 = t3246*t3315;
  t3469 = -1.*t2856*t3451;
  t3470 = t3361 + t3469;
  t3978 = t3824*t3231;
  t3979 = t3832*t2856*t3502;
  t3998 = t3978 + t3979;
  t4013 = var2[1]*t3998;
  t4033 = t3832*t2856*t3524;
  t4034 = t3824*t3345;
  t4041 = t4033 + t4034;
  t4050 = var2[2]*t4041;
  t4051 = t3832*t2856*t3547;
  t4069 = t3824*t3451;
  t4070 = t4051 + t4069;
  t4074 = var2[0]*t4070;
  t4077 = t4013 + t4050 + t4074;
  t3605 = t3139*t3063*t3597;
  t3606 = -1.*t3125*t3597*t3144;
  t3616 = t3605 + t3606;
  t3904 = t3063*t3125*t3391;
  t3907 = t3139*t3391*t3144;
  t3910 = t3904 + t3907;
  t3869 = t3063*t3125*t3315;
  t3870 = t3139*t3315*t3144;
  t3873 = t3869 + t3870;
  t3756 = t3139*t3063*t3293;
  t3785 = -1.*t3125*t3293*t3144;
  t3787 = t3756 + t3785;
  t4113 = t3824*t3910;
  t4117 = -1.*t3832*t3470;
  t4119 = t4113 + t4117;
  t3833 = -1.*t3139*t3063;
  t3834 = t3125*t3144;
  t3835 = t3833 + t3834;
  t4129 = t3824*t3873;
  t4132 = -1.*t3832*t3353;
  t4139 = t4129 + t4132;
  t4179 = t3832*t2856*t3231;
  t4180 = t3824*t3835;
  t4181 = t4179 + t4180;
  t3937 = -1.*t3293*t2856;
  t3945 = -1.*t3246*t3345;
  t3946 = t3937 + t3945;
  t3952 = -1.*t3315*t2856;
  t3953 = -1.*t3246*t3451;
  t3956 = t3952 + t3953;
  t4204 = t3832*t3231;
  t4208 = -1.*t3824*t2856*t3502;
  t4212 = t4204 + t4208;
  t4213 = var2[1]*t4212;
  t4214 = -1.*t3824*t2856*t3524;
  t4215 = t3832*t3345;
  t4218 = t4214 + t4215;
  t4220 = var2[2]*t4218;
  t4223 = -1.*t3824*t2856*t3547;
  t4228 = t3832*t3451;
  t4229 = t4223 + t4228;
  t4234 = var2[0]*t4229;
  t4235 = t4213 + t4220 + t4234;
  t4079 = t3063*t3125*t3597;
  t4081 = t3139*t3597*t3144;
  t4090 = t4079 + t4081;
  t4098 = t3246*t3391;
  t4099 = -1.*t2856*t3616;
  t4101 = t4098 + t4099;
  t4145 = t3063*t3125*t3293;
  t4147 = t3139*t3293*t3144;
  t4150 = t4145 + t4147;
  t4166 = t3246*t3597;
  t4167 = -1.*t2856*t3787;
  t4173 = t4166 + t4167;
  t4282 = t3832*t3910;
  t4289 = t3824*t3470;
  t4292 = t4282 + t4289;
  t4296 = t3832*t3873;
  t4297 = t3824*t3353;
  t4298 = t4296 + t4297;
  t4323 = -1.*t3274;
  t4326 = 1. + t4323;
  t4327 = -0.50321*t4326;
  t4330 = -0.19821*t3274;
  t4331 = t4327 + t4330;
  t4348 = -1.*t3139;
  t4349 = 1. + t4348;
  t4353 = -1.*t3268;
  t4354 = 1. + t4353;
  t4355 = -0.28121*t4354;
  t4356 = t3268*t4331;
  t4360 = 0.305*t3278*t3284;
  t4367 = t4355 + t4356 + t4360;
  t4321 = 0.28121*t3278;
  t4333 = t4331*t3278;
  t4339 = -0.305*t3268*t3284;
  t4345 = t4321 + t4333 + t4339;
  t4352 = -0.15121*t4349;
  t4406 = t3139*t4367;
  t4410 = t4352 + t4406;
  t4414 = t3063*t4410;
  t4417 = 0.15121*t4349;
  t4423 = 0.15121*t3139;
  t4425 = 0.15121*t3125;
  t4426 = t3125*t4367;
  t4430 = t4417 + t4423 + t4425 + t4426;
  t4433 = -1.*t4430*t3144;
  t4435 = t4414 + t4433;
  t4443 = t4345*t2856;
  t4447 = t3246*t4435;
  t4452 = t4443 + t4447;
  t4346 = -1.*t4345*t2856;
  t4437 = -1.*t3246*t4435;
  t4439 = t4346 + t4437;
  t4470 = t3246*t4345;
  t4475 = -1.*t2856*t4435;
  t4476 = t4470 + t4475;
  t4460 = t3063*t4430;
  t4461 = t4410*t3144;
  t4462 = t4460 + t4461;
  t4463 = -1.*t3835*t4462;
  t4466 = -1.*t3246*t3231*t4452;
  t4483 = t2856*t3231*t4476;
  t4485 = t4463 + t4466 + t4483;
  t4668 = -1.*t3063*t4430;
  t4669 = -1.*t4410*t3144;
  t4670 = t4668 + t4669;
  t4507 = t3873*t4462;
  t4508 = t3741*t4452;
  t4509 = t3353*t4476;
  t4512 = t4507 + t4508 + t4509;
  t4522 = t3835*t4462;
  t4523 = t3246*t3231*t4452;
  t4524 = -1.*t2856*t3231*t4476;
  t4525 = t4522 + t4523 + t4524;
  t4664 = Power(t3246,2);
  t4679 = Power(t2856,2);
  t4544 = -1.*t3910*t4462;
  t4545 = -1.*t3649*t4452;
  t4550 = -1.*t3470*t4476;
  t4552 = t4544 + t4545 + t4550;
  t4596 = -1.*t3873*t4462;
  t4599 = -1.*t3741*t4452;
  t4607 = -1.*t3353*t4476;
  t4617 = t4596 + t4599 + t4607;
  t4644 = t3910*t4462;
  t4645 = t3649*t4452;
  t4649 = t3470*t4476;
  t4650 = t4644 + t4645 + t4649;
  t4658 = t3246*t3524*t4485;
  t4681 = -1.*t3231*t4462;
  t4826 = -0.15121*t3125;
  t4829 = -1.*t3125*t4367;
  t4830 = t4826 + t4829;
  t4831 = t3063*t4830;
  t4839 = t4423 + t4406;
  t4840 = -1.*t4839*t3144;
  t4841 = t4831 + t4840;
  t4691 = -1.*t3246*t3502*t4452;
  t4695 = t2856*t3502*t4476;
  t4702 = t3345*t4462;
  t4850 = t3063*t4839;
  t4852 = t4830*t3144;
  t4854 = t4850 + t4852;
  t4708 = t3246*t3524*t4452;
  t4709 = -1.*t2856*t3524*t4476;
  t4720 = t3246*t3502*t4512;
  t4733 = t3246*t3547*t4525;
  t4745 = t3231*t4462;
  t4751 = t3246*t3502*t4452;
  t4755 = -1.*t2856*t3502*t4476;
  t4760 = -1.*t3451*t4462;
  t4770 = -1.*t3246*t3547*t4452;
  t4773 = t2856*t3547*t4476;
  t4778 = t3246*t3502*t4552;
  t4785 = -1.*t3345*t4462;
  t4799 = -1.*t3246*t3524*t4452;
  t4800 = t2856*t3524*t4476;
  t4804 = t3451*t4462;
  t4809 = t3246*t3547*t4452;
  t4810 = -1.*t2856*t3547*t4476;
  t4813 = t3246*t3547*t4617;
  t4814 = t3246*t3524*t4650;
  t4914 = -0.28121*t3278;
  t4915 = -1.*t4331*t3278;
  t4916 = 0.305*t3268*t3284;
  t4917 = t4914 + t4915 + t4916;
  t4955 = 0.28121*t3268;
  t4957 = t4955 + t4356 + t4360;
  t4960 = t3139*t3063*t4917;
  t4961 = -1.*t3125*t4917*t3144;
  t4962 = t4960 + t4961;
  t3550 = t3391*t2856;
  t3617 = t3246*t3616;
  t3630 = t3550 + t3617;
  t4928 = t3063*t3125*t4917;
  t4937 = t3139*t4917*t3144;
  t4945 = t4928 + t4937;
  t4959 = t4957*t2856;
  t4963 = t3246*t4962;
  t4964 = t4959 + t4963;
  t4967 = t3246*t4957;
  t4970 = -1.*t2856*t4962;
  t4982 = t4967 + t4970;
  t5073 = 0.305*t3274*t3278;
  t5074 = t5073 + t4339;
  t5089 = -0.305*t3268*t3274;
  t5090 = -0.305*t3278*t3284;
  t5092 = t5089 + t5090;
  t5094 = t3139*t3063*t5074;
  t5095 = -1.*t3125*t5074*t3144;
  t5096 = t5094 + t5095;
  t5078 = t3063*t3125*t5074;
  t5084 = t3139*t5074*t3144;
  t5085 = t5078 + t5084;
  t5093 = t5092*t2856;
  t5098 = t3246*t5096;
  t5102 = t5093 + t5098;
  t5109 = t3246*t5092;
  t5110 = -1.*t2856*t5096;
  t5111 = t5109 + t5110;
  t3755 = t3597*t2856;
  t3788 = t3246*t3787;
  t3796 = t3755 + t3788;
  t4690 = -1.*t3835*t4435;
  t4703 = t3873*t4435;
  t4750 = t3835*t4435;
  t4761 = -1.*t3910*t4435;
  t4787 = -1.*t3873*t4435;
  t4805 = t3910*t4435;
  t5205 = -1.*t3231*t4435;
  t5206 = t4463 + t5205;
  t5207 = t3345*t5206;
  t4857 = -1.*t3835*t4854;
  t5209 = -1.*t3502*t4435;
  t4860 = t3873*t4854;
  t5214 = t3524*t4435;
  t5217 = t4345*t3293;
  t5218 = t3345*t4435;
  t5219 = t5217 + t4507 + t5218;
  t5220 = t3231*t5219;
  t5223 = t3231*t4435;
  t5224 = t4522 + t5223;
  t5225 = t3451*t5224;
  t4879 = t3835*t4854;
  t5227 = t3502*t4435;
  t4883 = -1.*t3910*t4854;
  t5233 = -1.*t3547*t4435;
  t5237 = -1.*t4345*t3315;
  t5238 = -1.*t3451*t4435;
  t5240 = t5237 + t4544 + t5238;
  t5241 = t3231*t5240;
  t4891 = -1.*t3873*t4854;
  t5247 = -1.*t3524*t4435;
  t5251 = -1.*t4345*t3293;
  t5252 = -1.*t3345*t4435;
  t5253 = t5251 + t4596 + t5252;
  t5255 = t3451*t5253;
  t4903 = t3910*t4854;
  t5257 = t3547*t4435;
  t5262 = t4345*t3315;
  t5263 = t3451*t4435;
  t5264 = t5262 + t4644 + t5263;
  t5266 = t3345*t5264;
  t4953 = t3835*t4945;
  t4988 = -1.*t4945*t3910;
  t4989 = -1.*t4090*t4462;
  t5005 = t4945*t3910;
  t5006 = t4090*t4462;
  t5016 = -1.*t4945*t3873;
  t5046 = -1.*t3835*t4945;
  t5060 = t4945*t3873;
  t5088 = t3835*t5085;
  t5118 = -1.*t5085*t3910;
  t5134 = t5085*t3910;
  t5146 = -1.*t5085*t3873;
  t5151 = -1.*t4150*t4462;
  t5165 = -1.*t3835*t5085;
  t5172 = t5085*t3873;
  t5173 = t4150*t4462;
  t5341 = t4345*t3391;
  t5344 = t3315*t4957;
  t5469 = Power(t3139,2);
  t5471 = Power(t3125,2);
  t5356 = -1.*t4957*t3293;
  t5460 = t3125*t4410;
  t5461 = -1.*t3139*t4430;
  t5462 = t5460 + t5461;
  t5464 = -1.*t3125*t4410;
  t5465 = t3139*t4430;
  t5467 = t5464 + t5465;
  t5478 = -1.*t3139*t3315*t4410;
  t5479 = -1.*t3125*t3315*t4430;
  t5480 = t5251 + t5478 + t5479;
  t5386 = t3315*t5092;
  t5489 = t3139*t3391*t4410;
  t5490 = t3125*t3391*t4430;
  t5491 = t5262 + t5489 + t5490;
  t5391 = -1.*t3597*t4345;
  t5392 = -1.*t5092*t3293;
  t5525 = 0.15121*t3597;
  t5526 = 0.15121*t3315;
  t5527 = t5525 + t5526;
  t5528 = var2[0]*t5527;
  t5529 = t3391*t4367;
  t5530 = t5262 + t5529;
  t5537 = -1.*t3315*t4367;
  t5538 = t5537 + t5251;
  t5572 = 0.28121*t3274;
  t5573 = t4331*t3274;
  p_output1[0]=t3470*var2[0] - 1.*t2856*t3231*var2[1] + t3353*var2[2];
  p_output1[1]=t3549;
  p_output1[2]=t3549;
  p_output1[3]=t3630*var2[0] + t3649*var2[2];
  p_output1[4]=t3741*var2[0] + t3796*var2[2];
  p_output1[5]=t3649;
  p_output1[6]=t3231*t3246;
  p_output1[7]=t3741;
  p_output1[8]=(-1.*t3470*t3824 - 1.*t3832*t3910)*var2[0] + (t2856*t3231*t3824 - 1.*t3832*t3835)*var2[1] + (-1.*t3353*t3824 - 1.*t3832*t3873)*var2[2];
  p_output1[9]=-1.*t3832*t3956*var2[0] + t3231*t3246*t3832*var2[1] - 1.*t3832*t3946*var2[2];
  p_output1[10]=t4077;
  p_output1[11]=t4077;
  p_output1[12]=(t3824*t4090 - 1.*t3832*t4101)*var2[0] + t4119*var2[2];
  p_output1[13]=t4139*var2[0] + (t3824*t4150 - 1.*t3832*t4173)*var2[2];
  p_output1[14]=t4119;
  p_output1[15]=t4181;
  p_output1[16]=t4139;
  p_output1[17]=t4119*var2[0] + t4181*var2[1] + t4139*var2[2];
  p_output1[18]=t3824*t3956*var2[0] - 1.*t3231*t3246*t3824*var2[1] + t3824*t3946*var2[2];
  p_output1[19]=t4235;
  p_output1[20]=t4235;
  p_output1[21]=(t3832*t4090 + t3824*t4101)*var2[0] + t4292*var2[2];
  p_output1[22]=t4298*var2[0] + (t3832*t4150 + t3824*t4173)*var2[2];
  p_output1[23]=t4292;
  p_output1[24]=-1.*t2856*t3231*t3824 + t3832*t3835;
  p_output1[25]=t4298;
  p_output1[26]=(t3741*(t2856*t3231*t4439 + t2856*t3231*t4452) + t3231*t3246*(t3353*t4439 + t3353*t4452 + t3741*t4476 + t3946*t4476) + t3353*t4485 - 1.*t2856*t3231*t4512)*var2[0] + (t3649*(-1.*t3353*t4439 - 1.*t3353*t4452 - 1.*t3741*t4476 - 1.*t3946*t4476) + t3741*(t3470*t4439 + t3470*t4452 + t3649*t4476 + t3956*t4476) + t3470*t4617 + t3353*t4650)*var2[1] + (t3649*(-1.*t2856*t3231*t4439 - 1.*t2856*t3231*t4452) + t3231*t3246*(-1.*t3470*t4439 - 1.*t3470*t4452 - 1.*t3649*t4476 - 1.*t3956*t4476) + t3470*t4525 - 1.*t2856*t3231*t4552)*var2[2];
  p_output1[27]=(t4658 + t3741*(-1.*t3231*t4664*t4670 - 1.*t3231*t4670*t4679 + t4681 + t4690 + t4691 + t4695) + t3231*t3246*(-1.*t2856*t3353*t4670 + t3246*t3741*t4670 + t4702 + t4703 + t4708 + t4709) + t4720)*var2[0] + (t3649*(t2856*t3353*t4670 - 1.*t3246*t3741*t4670 + t4785 + t4787 + t4799 + t4800) + t3741*(-1.*t2856*t3470*t4670 + t3246*t3649*t4670 + t4804 + t4805 + t4809 + t4810) + t4813 + t4814)*var2[1] + (t4733 + t3649*(t3231*t4664*t4670 + t3231*t4670*t4679 + t4745 + t4750 + t4751 + t4755) + t3231*t3246*(t2856*t3470*t4670 - 1.*t3246*t3649*t4670 + t4760 + t4761 + t4770 + t4773) + t4778)*var2[2];
  p_output1[28]=(t4658 + t4720 + t3741*(t4681 + t4691 + t4695 - 1.*t3231*t4664*t4841 - 1.*t3231*t4679*t4841 + t4857) + t3231*t3246*(t4702 + t4708 + t4709 - 1.*t2856*t3353*t4841 + t3246*t3741*t4841 + t4860))*var2[0] + (t4813 + t4814 + t3649*(t4785 + t4799 + t4800 + t2856*t3353*t4841 - 1.*t3246*t3741*t4841 + t4891) + t3741*(t4804 + t4809 + t4810 - 1.*t2856*t3470*t4841 + t3246*t3649*t4841 + t4903))*var2[1] + (t4733 + t4778 + t3649*(t4745 + t4751 + t4755 + t3231*t4664*t4841 + t3231*t4679*t4841 + t4879) + t3231*t3246*(t4760 + t4770 + t4773 + t2856*t3470*t4841 - 1.*t3246*t3649*t4841 + t4883))*var2[2];
  p_output1[29]=(t3649*t4485 + t3741*(-1.*t3231*t3246*t4964 + t2856*t3231*t4982 + t5046) + t3231*t3246*(t4644 + t4645 + t4649 + t3741*t4964 + t3353*t4982 + t5060))*var2[0] + (t3630*t4617 + t3649*t4650 + t3741*(t3630*t4452 + t4101*t4476 + t3649*t4964 + t3470*t4982 + t5005 + t5006) + t3649*(t4544 + t4545 + t4550 - 1.*t3741*t4964 - 1.*t3353*t4982 + t5016))*var2[1] + (t3630*t4525 + t3649*(t4953 + t3231*t3246*t4964 - 1.*t2856*t3231*t4982) + t3231*t3246*(-1.*t3630*t4452 - 1.*t4101*t4476 - 1.*t3649*t4964 - 1.*t3470*t4982 + t4988 + t4989))*var2[2];
  p_output1[30]=(t3796*t4485 + t3741*(-1.*t3231*t3246*t5102 + t2856*t3231*t5111 + t5165) + t3231*t3246*(t3796*t4452 + t4173*t4476 + t3741*t5102 + t3353*t5111 + t5172 + t5173))*var2[0] + (t3741*t4617 + t3796*t4650 + t3741*(t4507 + t4508 + t4509 + t3649*t5102 + t3470*t5111 + t5134) + t3649*(-1.*t3796*t4452 - 1.*t4173*t4476 - 1.*t3741*t5102 - 1.*t3353*t5111 + t5146 + t5151))*var2[1] + (t3741*t4525 + t3649*(t5088 + t3231*t3246*t5102 - 1.*t2856*t3231*t5111) + t3231*t3246*(t4596 + t4599 + t4607 - 1.*t3649*t5102 - 1.*t3470*t5111 + t5118))*var2[2];
  p_output1[31]=t3741*t4485 + t3231*t3246*t4512;
  p_output1[32]=t3649*t4617 + t3741*t4650;
  p_output1[33]=t3649*t4525 + t3231*t3246*t4552;
  p_output1[34]=(t5207 + t3873*(-1.*t3231*t4670 + t4681 + t4690 + t5209) + t3835*(t3345*t4670 + t4702 + t4703 + t5214) + t5220)*var2[0] + (t3910*(-1.*t3345*t4670 + t4785 + t4787 + t5247) + t5255 + t3873*(t3451*t4670 + t4804 + t4805 + t5257) + t5266)*var2[1] + (t5225 + t3910*(t3231*t4670 + t4745 + t4750 + t5227) + t3835*(-1.*t3451*t4670 + t4760 + t4761 + t5233) + t5241)*var2[2];
  p_output1[35]=(t5207 + t3873*(t4681 - 1.*t3231*t4841 + t4857 + t5209) + t3835*(t4702 + t3345*t4841 + t4860 + t5214) + t5220)*var2[0] + (t3910*(t4785 - 1.*t3345*t4841 + t4891 + t5247) + t5255 + t3873*(t4804 + t3451*t4841 + t4903 + t5257) + t5266)*var2[1] + (t5225 + t3910*(t4745 + t3231*t4841 + t4879 + t5227) + t3835*(t4760 - 1.*t3451*t4841 + t4883 + t5233) + t5241)*var2[2];
  p_output1[36]=(t3873*(-1.*t3231*t4962 + t5046) + t3910*t5206 + t3835*(t4644 + t3293*t4957 + t3345*t4962 + t5060 + t5262 + t5263))*var2[0] + (t4090*t5253 + t3910*t5264 + t3873*(t3616*t4435 + t3451*t4962 + t5005 + t5006 + t5341 + t5344) + t3910*(t4544 - 1.*t3345*t4962 + t5016 + t5237 + t5238 + t5356))*var2[1] + (t3910*(t4953 + t3231*t4962) + t3835*(-1.*t3391*t4345 - 1.*t3616*t4435 - 1.*t3315*t4957 - 1.*t3451*t4962 + t4988 + t4989) + t4090*t5224)*var2[2];
  p_output1[37]=(t3873*(-1.*t3231*t5096 + t5165) + t3835*(t3597*t4345 + t3787*t4435 + t3293*t5092 + t3345*t5096 + t5172 + t5173) + t4150*t5206)*var2[0] + (t3873*t5253 + t4150*t5264 + t3873*(t4507 + t3451*t5096 + t5134 + t5217 + t5218 + t5386) + t3910*(-1.*t3787*t4435 - 1.*t3345*t5096 + t5146 + t5151 + t5391 + t5392))*var2[1] + (t3910*(t5088 + t3231*t5096) + t3873*t5224 + t3835*(t4596 - 1.*t3315*t5092 - 1.*t3451*t5096 + t5118 + t5251 + t5252))*var2[2];
  p_output1[38]=t3873*t5206 + t3835*t5219;
  p_output1[39]=t3910*t5253 + t3873*t5264;
  p_output1[40]=t3910*t5224 + t3835*t5240;
  p_output1[41]=t3293*(-1.*t3139*t4410 - 1.*t3125*t4430 - 1.*t3125*t4830 + t3139*t4839)*var2[0] + (t3315*(t3125*t3315*t4410 - 1.*t3139*t3315*t4430 - 1.*t3139*t3315*t4830 - 1.*t3125*t3315*t4839) + t3293*(-1.*t3125*t3391*t4410 + t3139*t3391*t4430 + t3139*t3391*t4830 + t3125*t3391*t4839))*var2[1] + t3315*(t3139*t4410 + t3125*t4430 + t3125*t4830 - 1.*t3139*t4839)*var2[2];
  p_output1[42]=t3315*t5467*var2[0] + (t3315*(-1.*t3139*t3391*t4410 - 1.*t3125*t3391*t4430 + t5237 + t5356 - 1.*t3315*t4917*t5469 - 1.*t3315*t4917*t5471) + t3293*(t3139*t3597*t4410 + t3125*t3597*t4430 + t5341 + t5344 + t3391*t4917*t5469 + t3391*t4917*t5471) + t3391*t5480 + t3315*t5491)*var2[1] + t3391*t5462*var2[2];
  p_output1[43]=t3597*t5467*var2[0] + (t3315*(-1.*t3139*t3293*t4410 - 1.*t3125*t3293*t4430 + t5391 + t5392 - 1.*t3315*t5074*t5469 - 1.*t3315*t5074*t5471) + t3293*(t3139*t3315*t4410 + t3125*t3315*t4430 + t5217 + t5386 + t3391*t5074*t5469 + t3391*t5074*t5471) + t3293*t5480 + t3597*t5491)*var2[1] + t3293*t5462*var2[2];
  p_output1[44]=t3293*t5467;
  p_output1[45]=t3315*t5480 + t3293*t5491;
  p_output1[46]=t3315*t5462;
  p_output1[47]=t5528 + (t3293*(t3597*t4367 + t3391*t4917 + t5341 + t5344) + t3315*(-1.*t3391*t4367 - 1.*t3315*t4917 + t5237 + t5356) + t3315*t5530 + t3391*t5538)*var2[1];
  p_output1[48]=t5528 + (t3293*(t3315*t4367 + t3391*t5074 + t5217 + t5386) + t3315*(-1.*t3293*t4367 - 1.*t3315*t5074 + t5391 + t5392) + t3597*t5530 + t3293*t5538)*var2[1];
  p_output1[49]=0.15121*t3293 + 0.15121*t3391;
  p_output1[50]=-0.15121 + t3293*t5530 + t3315*t5538;
  p_output1[51]=(-0.305*Power(t3274,2) + t5572 + t5573)*var2[0] + (-0.28121*t3284 + 0.305*t3274*t3284 - 1.*t3284*t4331)*var2[2];
  p_output1[52]=0.28121*t3284 - 0.305*t3274*t3284 + t3284*t4331;
  p_output1[53]=0.305*Power(t3284,2) + t5572 + t5573;
  p_output1[54]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 55, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRlFoot_vec_DiagonalStance.hh"

namespace DiagonalStance
{

void J_fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
