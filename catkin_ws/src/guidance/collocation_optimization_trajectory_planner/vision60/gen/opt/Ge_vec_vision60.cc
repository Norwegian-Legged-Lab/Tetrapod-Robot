/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:46:12 GMT+02:00
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
  double t2215;
  double t2423;
  double t2291;
  double t2302;
  double t2516;
  double t574;
  double t2189;
  double t2855;
  double t2908;
  double t3081;
  double t3087;
  double t2342;
  double t2520;
  double t2522;
  double t3163;
  double t3237;
  double t2848;
  double t3345;
  double t3347;
  double t2290;
  double t2893;
  double t2906;
  double t3089;
  double t3095;
  double t3106;
  double t3107;
  double t3380;
  double t3422;
  double t3423;
  double t3424;
  double t3426;
  double t3166;
  double t3259;
  double t3274;
  double t3282;
  double t3283;
  double t3301;
  double t3310;
  double t3493;
  double t3513;
  double t3530;
  double t3532;
  double t3537;
  double t3346;
  double t3348;
  double t3355;
  double t3362;
  double t3363;
  double t3370;
  double t3373;
  double t3575;
  double t3598;
  double t3612;
  double t3616;
  double t3620;
  double t3385;
  double t3390;
  double t3393;
  double t3394;
  double t3453;
  double t3459;
  double t3465;
  double t3468;
  double t3668;
  double t3670;
  double t3672;
  double t3680;
  double t3700;
  double t3494;
  double t3505;
  double t3509;
  double t3510;
  double t3541;
  double t3543;
  double t3547;
  double t3550;
  double t3749;
  double t3755;
  double t3757;
  double t3758;
  double t3777;
  double t3579;
  double t3589;
  double t3590;
  double t3592;
  double t3622;
  double t3624;
  double t3630;
  double t3636;
  double t3820;
  double t3823;
  double t3826;
  double t3830;
  double t3836;
  double t3183;
  double t3880;
  double t3896;
  double t3882;
  double t3883;
  double t3892;
  double t3897;
  double t3898;
  double t3900;
  double t3901;
  double t3930;
  double t3943;
  double t3948;
  double t3950;
  double t3951;
  double t3931;
  double t3932;
  double t3933;
  double t3939;
  double t3955;
  double t3958;
  double t3959;
  double t3968;
  double t3981;
  double t3989;
  double t4001;
  double t4004;
  double t4005;
  double t4050;
  double t4053;
  double t4057;
  double t4080;
  double t4081;
  double t4094;
  double t4212;
  double t4222;
  double t4225;
  double t4120;
  double t4127;
  double t4146;
  double t4147;
  double t4149;
  double t4261;
  double t4264;
  double t4268;
  double t4180;
  double t4188;
  double t4189;
  double t4191;
  double t4193;
  double t4320;
  double t4327;
  double t4329;
  double t4207;
  double t4211;
  double t4232;
  double t3708;
  double t3716;
  double t4236;
  double t4237;
  double t4238;
  double t4350;
  double t4351;
  double t4352;
  double t4253;
  double t4255;
  double t4271;
  double t3784;
  double t3788;
  double t4276;
  double t4285;
  double t4288;
  double t4381;
  double t4390;
  double t4393;
  double t4308;
  double t4311;
  double t4334;
  double t3840;
  double t3847;
  double t4338;
  double t4339;
  double t4340;
  double t4499;
  double t4503;
  double t4504;
  double t4117;
  double t4565;
  double t4575;
  double t4583;
  double t4587;
  double t4590;
  double t4602;
  double t4603;
  double t4610;
  double t4598;
  double t4601;
  double t4616;
  double t3982;
  double t3983;
  double t4617;
  double t4619;
  double t4620;
  double t4633;
  double t4634;
  double t4635;
  double t4645;
  double t4648;
  double t4649;
  double t4654;
  double t4656;
  double t4657;
  double t4658;
  double t4675;
  double t4650;
  double t4670;
  double t4661;
  double t4710;
  double t4712;
  double t4722;
  double t4723;
  double t4726;
  double t4727;
  double t4806;
  double t4807;
  double t4808;
  double t4741;
  double t4745;
  double t4748;
  double t4749;
  double t4750;
  double t4755;
  double t4842;
  double t4844;
  double t4845;
  double t4770;
  double t4772;
  double t4775;
  double t4778;
  double t4783;
  double t4784;
  double t4908;
  double t4913;
  double t4928;
  double t4687;
  double t4953;
  double t4954;
  double t4956;
  double t4960;
  double t4973;
  double t4975;
  double t4987;
  double t4989;
  double t4999;
  double t5019;
  double t5024;
  double t5026;
  double t5031;
  double t5034;
  double t5051;
  double t5068;
  double t5071;
  double t5088;
  double t5183;
  double t5188;
  double t5189;
  double t5182;
  double t5192;
  double t5193;
  double t5194;
  double t5195;
  double t5212;
  double t5214;
  double t5215;
  double t5242;
  double t5248;
  double t5249;
  double t5278;
  double t5292;
  double t5295;
  double t5297;
  double t5300;
  double t5323;
  double t5324;
  double t5325;
  double t5319;
  double t5341;
  double t5343;
  double t5344;
  double t5345;
  double t5346;
  double t5375;
  double t5377;
  double t5384;
  double t5415;
  double t5417;
  double t5418;
  double t5427;
  double t5428;
  double t5429;
  double t5430;
  double t5432;
  double t5463;
  double t5474;
  double t5479;
  double t5433;
  double t5513;
  double t5514;
  double t5516;
  double t5517;
  double t5521;
  double t5530;
  double t5531;
  double t5539;
  double t5561;
  double t5562;
  double t5567;
  double t5595;
  double t5596;
  double t5602;
  double t5603;
  double t5618;
  double t5661;
  double t5662;
  double t5671;
  double t5619;
  double t5726;
  double t5737;
  double t5738;
  double t5739;
  double t5752;
  double t5759;
  double t5768;
  double t5786;
  double t5876;
  double t5886;
  double t5899;
  t2215 = Sin(var1[3]);
  t2423 = Cos(var1[3]);
  t2291 = Cos(var1[5]);
  t2302 = Sin(var1[4]);
  t2516 = Sin(var1[5]);
  t574 = Cos(var1[4]);
  t2189 = Sin(var1[9]);
  t2855 = Cos(var1[9]);
  t2908 = t2423*t2291;
  t3081 = -1.*t2215*t2302*t2516;
  t3087 = t2908 + t3081;
  t2342 = t2291*t2215*t2302;
  t2520 = t2423*t2516;
  t2522 = t2342 + t2520;
  t3163 = Sin(var1[12]);
  t3237 = Cos(var1[12]);
  t2848 = -0.325*t2522;
  t3345 = Sin(var1[15]);
  t3347 = Cos(var1[15]);
  t2290 = 0.1575*t574*t2189*t2215;
  t2893 = -1.*t2855;
  t2906 = 1. + t2893;
  t3089 = 0.1575*t2906*t3087;
  t3095 = -1.*t574*t2189*t2215;
  t3106 = t2855*t3087;
  t3107 = t3095 + t3106;
  t3380 = Cos(var1[10]);
  t3422 = Sin(var1[10]);
  t3423 = -1.*t2855*t574*t2215;
  t3424 = -1.*t2189*t3087;
  t3426 = t3423 + t3424;
  t3166 = -0.1575*t574*t3163*t2215;
  t3259 = -1.*t3237;
  t3274 = 1. + t3259;
  t3282 = -0.1575*t3274*t3087;
  t3283 = -1.*t574*t3163*t2215;
  t3301 = t3237*t3087;
  t3310 = t3283 + t3301;
  t3493 = Cos(var1[13]);
  t3513 = Sin(var1[13]);
  t3530 = -1.*t3237*t574*t2215;
  t3532 = -1.*t3163*t3087;
  t3537 = t3530 + t3532;
  t3346 = -0.1575*t574*t3345*t2215;
  t3348 = -1.*t3347;
  t3355 = 1. + t3348;
  t3362 = -0.1575*t3355*t3087;
  t3363 = -1.*t574*t3345*t2215;
  t3370 = t3347*t3087;
  t3373 = t3363 + t3370;
  t3575 = Cos(var1[16]);
  t3598 = Sin(var1[16]);
  t3612 = -1.*t3347*t574*t2215;
  t3616 = -1.*t3345*t3087;
  t3620 = t3612 + t3616;
  t3385 = -1.*t3380;
  t3390 = 1. + t3385;
  t3393 = -0.325*t3390*t2522;
  t3394 = 0.2255*t3107;
  t3453 = 0.325*t3422*t3426;
  t3459 = t3380*t2522;
  t3465 = t3422*t3426;
  t3468 = t3459 + t3465;
  t3668 = Sin(var1[11]);
  t3670 = -1.*t3422*t2522;
  t3672 = t3380*t3426;
  t3680 = t3670 + t3672;
  t3700 = Cos(var1[11]);
  t3494 = -1.*t3493;
  t3505 = 1. + t3494;
  t3509 = 0.325*t3505*t2522;
  t3510 = -0.2255*t3310;
  t3541 = -0.325*t3513*t3537;
  t3543 = t3493*t2522;
  t3547 = t3513*t3537;
  t3550 = t3543 + t3547;
  t3749 = Sin(var1[14]);
  t3755 = -1.*t3513*t2522;
  t3757 = t3493*t3537;
  t3758 = t3755 + t3757;
  t3777 = Cos(var1[14]);
  t3579 = -1.*t3575;
  t3589 = 1. + t3579;
  t3590 = -0.325*t3589*t2522;
  t3592 = -0.2255*t3373;
  t3622 = 0.325*t3598*t3620;
  t3624 = t3575*t2522;
  t3630 = t3598*t3620;
  t3636 = t3624 + t3630;
  t3820 = Sin(var1[17]);
  t3823 = -1.*t3598*t2522;
  t3826 = t3575*t3620;
  t3830 = t3823 + t3826;
  t3836 = Cos(var1[17]);
  t3183 = 0.325*t2522;
  t3880 = Cos(var1[6]);
  t3896 = Sin(var1[6]);
  t3882 = -1.*t3880;
  t3883 = 1. + t3882;
  t3892 = 0.1575*t3883*t3087;
  t3897 = 0.1575*t574*t2215*t3896;
  t3898 = t3880*t3087;
  t3900 = -1.*t574*t2215*t3896;
  t3901 = t3898 + t3900;
  t3930 = Cos(var1[7]);
  t3943 = -1.*t574*t3880*t2215;
  t3948 = -1.*t3087*t3896;
  t3950 = t3943 + t3948;
  t3951 = Sin(var1[7]);
  t3931 = -1.*t3930;
  t3932 = 1. + t3931;
  t3933 = 0.325*t3932*t2522;
  t3939 = 0.2255*t3901;
  t3955 = -0.325*t3950*t3951;
  t3958 = t3930*t2522;
  t3959 = t3950*t3951;
  t3968 = t3958 + t3959;
  t3981 = Cos(var1[8]);
  t3989 = t3930*t3950;
  t4001 = -1.*t2522*t3951;
  t4004 = t3989 + t4001;
  t4005 = Sin(var1[8]);
  t4050 = 0.325*t2423*t574*t2291;
  t4053 = 0.1575*t2423*t2189*t2302;
  t4057 = 0.1575*t2906*t2423*t574*t2516;
  t4080 = -1.*t2423*t2189*t2302;
  t4081 = t2855*t2423*t574*t2516;
  t4094 = t4080 + t4081;
  t4212 = -1.*t2855*t2423*t2302;
  t4222 = -1.*t2423*t574*t2189*t2516;
  t4225 = t4212 + t4222;
  t4120 = -0.1575*t2423*t3163*t2302;
  t4127 = -0.1575*t3274*t2423*t574*t2516;
  t4146 = -1.*t2423*t3163*t2302;
  t4147 = t3237*t2423*t574*t2516;
  t4149 = t4146 + t4147;
  t4261 = -1.*t3237*t2423*t2302;
  t4264 = -1.*t2423*t574*t3163*t2516;
  t4268 = t4261 + t4264;
  t4180 = -0.1575*t2423*t3345*t2302;
  t4188 = -0.1575*t3355*t2423*t574*t2516;
  t4189 = -1.*t2423*t3345*t2302;
  t4191 = t3347*t2423*t574*t2516;
  t4193 = t4189 + t4191;
  t4320 = -1.*t3347*t2423*t2302;
  t4327 = -1.*t2423*t574*t3345*t2516;
  t4329 = t4320 + t4327;
  t4207 = 0.325*t3390*t2423*t574*t2291;
  t4211 = 0.2255*t4094;
  t4232 = 0.325*t3422*t4225;
  t3708 = -1.*t3700;
  t3716 = 1. + t3708;
  t4236 = -1.*t3380*t2423*t574*t2291;
  t4237 = t3422*t4225;
  t4238 = t4236 + t4237;
  t4350 = t2423*t574*t2291*t3422;
  t4351 = t3380*t4225;
  t4352 = t4350 + t4351;
  t4253 = -0.325*t3505*t2423*t574*t2291;
  t4255 = -0.2255*t4149;
  t4271 = -0.325*t3513*t4268;
  t3784 = -1.*t3777;
  t3788 = 1. + t3784;
  t4276 = -1.*t3493*t2423*t574*t2291;
  t4285 = t3513*t4268;
  t4288 = t4276 + t4285;
  t4381 = t2423*t574*t2291*t3513;
  t4390 = t3493*t4268;
  t4393 = t4381 + t4390;
  t4308 = 0.325*t3589*t2423*t574*t2291;
  t4311 = -0.2255*t4193;
  t4334 = 0.325*t3598*t4329;
  t3840 = -1.*t3836;
  t3847 = 1. + t3840;
  t4338 = -1.*t3575*t2423*t574*t2291;
  t4339 = t3598*t4329;
  t4340 = t4338 + t4339;
  t4499 = t2423*t574*t2291*t3598;
  t4503 = t3575*t4329;
  t4504 = t4499 + t4503;
  t4117 = -0.325*t2423*t574*t2291;
  t4565 = 0.1575*t2423*t574*t3883*t2516;
  t4575 = 0.1575*t2423*t2302*t3896;
  t4583 = t2423*t574*t3880*t2516;
  t4587 = -1.*t2423*t2302*t3896;
  t4590 = t4583 + t4587;
  t4602 = -1.*t2423*t3880*t2302;
  t4603 = -1.*t2423*t574*t2516*t3896;
  t4610 = t4602 + t4603;
  t4598 = -0.325*t2423*t574*t2291*t3932;
  t4601 = 0.2255*t4590;
  t4616 = -0.325*t4610*t3951;
  t3982 = -1.*t3981;
  t3983 = 1. + t3982;
  t4617 = -1.*t2423*t574*t2291*t3930;
  t4619 = t4610*t3951;
  t4620 = t4617 + t4619;
  t4633 = t3930*t4610;
  t4634 = t2423*t574*t2291*t3951;
  t4635 = t4633 + t4634;
  t4645 = t2423*t2291*t2302;
  t4648 = -1.*t2215*t2516;
  t4649 = t4645 + t4648;
  t4654 = t2291*t2215;
  t4656 = t2423*t2302*t2516;
  t4657 = t4654 + t4656;
  t4658 = -0.325*t4657;
  t4675 = 0.325*t4657;
  t4650 = 0.1575*t2906*t4649;
  t4670 = -0.1575*t3274*t4649;
  t4661 = -0.1575*t3355*t4649;
  t4710 = 0.2255*t2855*t4649;
  t4712 = -0.325*t2189*t3422*t4649;
  t4722 = -0.325*t3390*t4657;
  t4723 = -1.*t2189*t3422*t4649;
  t4726 = t3380*t4657;
  t4727 = t4723 + t4726;
  t4806 = -1.*t3380*t2189*t4649;
  t4807 = -1.*t3422*t4657;
  t4808 = t4806 + t4807;
  t4741 = -0.2255*t3237*t4649;
  t4745 = 0.325*t3163*t3513*t4649;
  t4748 = 0.325*t3505*t4657;
  t4749 = -1.*t3163*t3513*t4649;
  t4750 = t3493*t4657;
  t4755 = t4749 + t4750;
  t4842 = -1.*t3493*t3163*t4649;
  t4844 = -1.*t3513*t4657;
  t4845 = t4842 + t4844;
  t4770 = -0.2255*t3347*t4649;
  t4772 = -0.325*t3345*t3598*t4649;
  t4775 = -0.325*t3589*t4657;
  t4778 = -1.*t3345*t3598*t4649;
  t4783 = t3575*t4657;
  t4784 = t4778 + t4783;
  t4908 = -1.*t3575*t3345*t4649;
  t4913 = -1.*t3598*t4657;
  t4928 = t4908 + t4913;
  t4687 = 0.1575*t3883*t4649;
  t4953 = 0.2255*t3880*t4649;
  t4954 = 0.325*t3932*t4657;
  t4956 = 0.325*t4649*t3896*t3951;
  t4960 = t3930*t4657;
  t4973 = -1.*t4649*t3896*t3951;
  t4975 = t4960 + t4973;
  t4987 = -1.*t3930*t4649*t3896;
  t4989 = -1.*t4657*t3951;
  t4999 = t4987 + t4989;
  t5019 = -0.1575*t2423*t574*t3880;
  t5024 = 0.1575*t4657*t3896;
  t5026 = t2423*t574*t3880;
  t5031 = -1.*t4657*t3896;
  t5034 = t5026 + t5031;
  t5051 = 0.2255*t5034;
  t5068 = -1.*t3880*t4657;
  t5071 = -1.*t2423*t574*t3896;
  t5088 = t5068 + t5071;
  t5183 = -1.*t2423*t2291*t2302;
  t5188 = t2215*t2516;
  t5189 = t5183 + t5188;
  t5182 = -0.325*t3930*t5034;
  t5192 = 0.325*t5189*t3951;
  t5193 = t3930*t5034;
  t5194 = -1.*t5189*t3951;
  t5195 = t5193 + t5194;
  t5212 = -1.*t3930*t5189;
  t5214 = -1.*t5034*t3951;
  t5215 = t5212 + t5214;
  t5242 = t3930*t5189;
  t5248 = t5034*t3951;
  t5249 = t5242 + t5248;
  t5278 = -0.1575*t2855*t2423*t574;
  t5292 = 0.1575*t2189*t4657;
  t5295 = t2855*t2423*t574;
  t5297 = -1.*t2189*t4657;
  t5300 = t5295 + t5297;
  t5323 = -1.*t2423*t574*t2189;
  t5324 = -1.*t2855*t4657;
  t5325 = t5323 + t5324;
  t5319 = 0.2255*t5300;
  t5341 = -0.325*t3422*t5189;
  t5343 = 0.325*t3380*t5300;
  t5344 = -1.*t3422*t5189;
  t5345 = t3380*t5300;
  t5346 = t5344 + t5345;
  t5375 = -1.*t3380*t5189;
  t5377 = -1.*t3422*t5300;
  t5384 = t5375 + t5377;
  t5415 = t3380*t5189;
  t5417 = t3422*t5300;
  t5418 = t5415 + t5417;
  t5427 = 0.1575*t3237*t2423*t574;
  t5428 = -0.1575*t3163*t4657;
  t5429 = t3237*t2423*t574;
  t5430 = -1.*t3163*t4657;
  t5432 = t5429 + t5430;
  t5463 = -1.*t2423*t574*t3163;
  t5474 = -1.*t3237*t4657;
  t5479 = t5463 + t5474;
  t5433 = -0.2255*t5432;
  t5513 = 0.325*t3513*t5189;
  t5514 = -0.325*t3493*t5432;
  t5516 = -1.*t3513*t5189;
  t5517 = t3493*t5432;
  t5521 = t5516 + t5517;
  t5530 = -1.*t3493*t5189;
  t5531 = -1.*t3513*t5432;
  t5539 = t5530 + t5531;
  t5561 = t3493*t5189;
  t5562 = t3513*t5432;
  t5567 = t5561 + t5562;
  t5595 = 0.1575*t3347*t2423*t574;
  t5596 = -0.1575*t3345*t4657;
  t5602 = t3347*t2423*t574;
  t5603 = -1.*t3345*t4657;
  t5618 = t5602 + t5603;
  t5661 = -1.*t2423*t574*t3345;
  t5662 = -1.*t3347*t4657;
  t5671 = t5661 + t5662;
  t5619 = -0.2255*t5618;
  t5726 = -0.325*t3598*t5189;
  t5737 = 0.325*t3575*t5618;
  t5738 = -1.*t3598*t5189;
  t5739 = t3575*t5618;
  t5752 = t5738 + t5739;
  t5759 = -1.*t3575*t5189;
  t5768 = -1.*t3598*t5618;
  t5786 = t5759 + t5768;
  t5876 = t3575*t5189;
  t5886 = t3598*t5618;
  t5899 = t5876 + t5886;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=-258.00300000000004;
  p_output1[3]=-26.977500000000003*(t2290 + t2848 + t3089 + 0.1575*t3107) - 26.977500000000003*(t3166 + t3183 + t3282 - 0.1575*t3310) - 26.977500000000003*(t2848 + t3346 + t3362 - 0.1575*t3373) - 6.1312500000000005*(t2290 + t3089 + t3393 + t3394 + t3453 - 0.325*t3468) - 6.1312500000000005*(t3166 + t3282 + t3509 + t3510 + t3541 + 0.325*t3550) - 6.1312500000000005*(t3346 + t3362 + t3590 + t3592 + t3622 - 0.325*t3636) - 1.9620000000000002*(t2290 + t3089 + t3393 + t3394 + t3453 - 0.575*t3668*t3680 - 0.575*(-1.*t3668*t3680 + t3468*t3700) - 0.575*t3468*t3716) - 1.9620000000000002*(t3166 + t3282 + t3509 + t3510 + t3541 + 0.075*t3749*t3758 + 0.075*(-1.*t3749*t3758 + t3550*t3777) + 0.075*t3550*t3788) - 1.9620000000000002*(t3346 + t3362 + t3590 + t3592 + t3622 - 0.575*t3820*t3830 - 0.575*(-1.*t3820*t3830 + t3636*t3836) - 0.575*t3636*t3847) - 26.977500000000003*(t3183 + t3892 + t3897 + 0.1575*t3901) - 6.1312500000000005*(t3892 + t3897 + t3933 + t3939 + t3955 + 0.325*t3968) - 1.9620000000000002*(t3892 + t3897 + t3933 + t3939 + t3955 + 0.075*t3968*t3983 + 0.075*t4004*t4005 + 0.075*(t3968*t3981 - 1.*t4004*t4005));
  p_output1[4]=-26.977500000000003*(t4050 + t4053 + t4057 + 0.1575*t4094) - 26.977500000000003*(t4117 + t4120 + t4127 - 0.1575*t4149) - 26.977500000000003*(t4050 + t4180 + t4188 - 0.1575*t4193) - 6.1312500000000005*(t4053 + t4057 + t4207 + t4211 + t4232 - 0.325*t4238) - 6.1312500000000005*(t4120 + t4127 + t4253 + t4255 + t4271 + 0.325*t4288) - 6.1312500000000005*(t4180 + t4188 + t4308 + t4311 + t4334 - 0.325*t4340) - 1.9620000000000002*(t4053 + t4057 + t4207 + t4211 + t4232 - 0.575*t3716*t4238 - 0.575*t3668*t4352 - 0.575*(t3700*t4238 - 1.*t3668*t4352)) - 1.9620000000000002*(t4120 + t4127 + t4253 + t4255 + t4271 + 0.075*t3788*t4288 + 0.075*t3749*t4393 + 0.075*(t3777*t4288 - 1.*t3749*t4393)) - 1.9620000000000002*(t4180 + t4188 + t4308 + t4311 + t4334 - 0.575*t3847*t4340 - 0.575*t3820*t4504 - 0.575*(t3836*t4340 - 1.*t3820*t4504)) - 26.977500000000003*(t4117 + t4565 + t4575 + 0.1575*t4590) - 6.1312500000000005*(t4565 + t4575 + t4598 + t4601 + t4616 + 0.325*t4620) - 1.9620000000000002*(t4565 + t4575 + t4598 + t4601 + t4616 + 0.075*t3983*t4620 + 0.075*t4005*t4635 + 0.075*(t3981*t4620 - 1.*t4005*t4635));
  p_output1[5]=-26.977500000000003*(0.1575*t2855*t4649 + t4650 + t4658) - 26.977500000000003*(-0.1575*t3347*t4649 + t4658 + t4661) - 26.977500000000003*(-0.1575*t3237*t4649 + t4670 + t4675) - 26.977500000000003*(0.1575*t3880*t4649 + t4675 + t4687) - 6.1312500000000005*(t4650 + t4710 + t4712 + t4722 - 0.325*t4727) - 6.1312500000000005*(t4670 + t4741 + t4745 + t4748 + 0.325*t4755) - 6.1312500000000005*(t4661 + t4770 + t4772 + t4775 - 0.325*t4784) - 1.9620000000000002*(t4650 + t4710 + t4712 + t4722 - 0.575*t3716*t4727 - 0.575*t3668*t4808 - 0.575*(t3700*t4727 - 1.*t3668*t4808)) - 1.9620000000000002*(t4670 + t4741 + t4745 + t4748 + 0.075*t3788*t4755 + 0.075*t3749*t4845 + 0.075*(t3777*t4755 - 1.*t3749*t4845)) - 1.9620000000000002*(t4661 + t4770 + t4772 + t4775 - 0.575*t3847*t4784 - 0.575*t3820*t4928 - 0.575*(t3836*t4784 - 1.*t3820*t4928)) - 6.1312500000000005*(t4687 + t4953 + t4954 + t4956 + 0.325*t4975) - 1.9620000000000002*(t4687 + t4953 + t4954 + t4956 + 0.075*t3983*t4975 + 0.075*t4005*t4999 + 0.075*(t3981*t4975 - 1.*t4005*t4999));
  p_output1[6]=-26.977500000000003*(t5019 + t5024 + 0.1575*t5034) - 6.1312500000000005*(t5019 + t5024 + t5051) - 1.9620000000000002*(t5019 + t5024 + t5051 - 0.325*t3951*t5088 + 0.075*t3951*t3983*t5088 + 0.075*t3930*t4005*t5088 + 0.075*(t3951*t3981*t5088 - 1.*t3930*t4005*t5088));
  p_output1[7]=-6.1312500000000005*(t5182 + t5192 + 0.325*t5195) - 1.9620000000000002*(t5182 + t5192 + 0.075*t3983*t5195 + 0.075*t4005*t5215 + 0.075*(t3981*t5195 - 1.*t4005*t5215));
  p_output1[8]=-1.9620000000000002*(0.075*t3981*t5195 + 0.075*t4005*t5249 + 0.075*(-1.*t3981*t5195 - 1.*t4005*t5249));
  p_output1[9]=-26.977500000000003*(t5278 + t5292 + 0.1575*t5300) - 6.1312500000000005*(t5278 + t5292 + t5319) - 1.9620000000000002*(t5278 + t5292 + t5319 + 0.325*t3422*t5325 - 0.575*t3380*t3668*t5325 - 0.575*t3422*t3716*t5325 - 0.575*(-1.*t3380*t3668*t5325 + t3422*t3700*t5325));
  p_output1[10]=-6.1312500000000005*(t5341 + t5343 - 0.325*t5346) - 1.9620000000000002*(t5341 + t5343 - 0.575*t3716*t5346 - 0.575*t3668*t5384 - 0.575*(t3700*t5346 - 1.*t3668*t5384));
  p_output1[11]=-1.9620000000000002*(-0.575*t3700*t5346 - 0.575*t3668*t5418 - 0.575*(-1.*t3700*t5346 - 1.*t3668*t5418));
  p_output1[12]=-26.977500000000003*(t5427 + t5428 - 0.1575*t5432) - 6.1312500000000005*(t5427 + t5428 + t5433) - 1.9620000000000002*(t5427 + t5428 + t5433 - 0.325*t3513*t5479 + 0.075*t3493*t3749*t5479 + 0.075*t3513*t3788*t5479 + 0.075*(-1.*t3493*t3749*t5479 + t3513*t3777*t5479));
  p_output1[13]=-6.1312500000000005*(t5513 + t5514 + 0.325*t5521) - 1.9620000000000002*(t5513 + t5514 + 0.075*t3788*t5521 + 0.075*t3749*t5539 + 0.075*(t3777*t5521 - 1.*t3749*t5539));
  p_output1[14]=-1.9620000000000002*(0.075*t3777*t5521 + 0.075*t3749*t5567 + 0.075*(-1.*t3777*t5521 - 1.*t3749*t5567));
  p_output1[15]=-26.977500000000003*(t5595 + t5596 - 0.1575*t5618) - 6.1312500000000005*(t5595 + t5596 + t5619) - 1.9620000000000002*(t5595 + t5596 + t5619 + 0.325*t3598*t5671 - 0.575*t3575*t3820*t5671 - 0.575*t3598*t3847*t5671 - 0.575*(-1.*t3575*t3820*t5671 + t3598*t3836*t5671));
  p_output1[16]=-6.1312500000000005*(t5726 + t5737 - 0.325*t5752) - 1.9620000000000002*(t5726 + t5737 - 0.575*t3847*t5752 - 0.575*t3820*t5786 - 0.575*(t3836*t5752 - 1.*t3820*t5786));
  p_output1[17]=-1.9620000000000002*(-0.575*t3836*t5752 - 0.575*t3820*t5899 - 0.575*(-1.*t3836*t5752 - 1.*t3820*t5899));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ge_vec_vision60.hh"

namespace DiagonalStance
{

void Ge_vec_vision60_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
