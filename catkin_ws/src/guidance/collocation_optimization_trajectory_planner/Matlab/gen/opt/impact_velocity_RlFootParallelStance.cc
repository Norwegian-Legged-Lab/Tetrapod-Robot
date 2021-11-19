/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:30:51 GMT+01:00
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
  double t28;
  double t280;
  double t528;
  double t1498;
  double t296;
  double t1255;
  double t1707;
  double t1526;
  double t1544;
  double t1751;
  double t2388;
  double t2408;
  double t2417;
  double t2433;
  double t1040;
  double t889;
  double t1673;
  double t1791;
  double t1799;
  double t1222;
  double t2098;
  double t2109;
  double t2259;
  double t2428;
  double t468;
  double t2626;
  double t2803;
  double t2491;
  double t1907;
  double t2870;
  double t1939;
  double t2692;
  double t2981;
  double t2627;
  double t2641;
  double t2657;
  double t2723;
  double t2731;
  double t2743;
  double t2943;
  double t2857;
  double t2861;
  double t2864;
  double t2882;
  double t2886;
  double t2895;
  double t3012;
  double t3016;
  double t3041;
  double t3051;
  double t3055;
  double t3060;
  double t2435;
  double t3069;
  double t2499;
  double t3155;
  double t3166;
  double t2773;
  double t3096;
  double t3324;
  double t3339;
  double t3284;
  double t3430;
  double t3431;
  double t3326;
  double t3389;
  double t3333;
  double t3335;
  double t3338;
  double t3340;
  double t3347;
  double t3354;
  double t3355;
  double t3357;
  double t3361;
  double t3434;
  double t3442;
  double t3447;
  double t3454;
  double t3455;
  double t3457;
  double t3461;
  double t3470;
  double t3367;
  double t3527;
  double t3533;
  double t3536;
  double t3538;
  double t3540;
  double t3547;
  double t3551;
  double t3553;
  double t3298;
  double t3625;
  double t3508;
  double t3696;
  double t3719;
  double t3726;
  double t3768;
  double t2342;
  double t2421;
  double t2437;
  double t2467;
  double t2524;
  double t2571;
  double t2619;
  double t3822;
  double t3827;
  double t3828;
  double t2923;
  double t2927;
  double t2963;
  double t2966;
  double t2984;
  double t2999;
  double t3011;
  double t2756;
  double t2761;
  double t2785;
  double t2792;
  double t2809;
  double t2837;
  double t2855;
  double t3187;
  double t3834;
  double t3845;
  double t3850;
  double t3232;
  double t3856;
  double t3859;
  double t3868;
  double t3209;
  double t3221;
  double t3870;
  double t3873;
  double t3874;
  double t3075;
  double t3112;
  double t3119;
  double t3100;
  double t3146;
  double t3148;
  double t3175;
  double t3168;
  double t3947;
  double t3744;
  double t3749;
  double t3750;
  double t3752;
  double t3766;
  double t3769;
  double t3782;
  double t3783;
  double t3786;
  double t3791;
  double t3792;
  double t3793;
  double t3800;
  double t3805;
  double t3810;
  double t3813;
  double t3819;
  double t3831;
  double t3854;
  double t3869;
  double t3878;
  double t3884;
  double t3894;
  double t3897;
  double t3899;
  double t3901;
  double t3906;
  double t3908;
  double t3910;
  double t3912;
  double t3914;
  double t3917;
  double t3930;
  double t3931;
  double t3932;
  double t3940;
  double t3734;
  double t3740;
  double t3720;
  double t3728;
  double t3980;
  double t3991;
  double t3998;
  double t4009;
  double t4011;
  double t4014;
  double t4020;
  double t4021;
  double t4026;
  double t4028;
  double t4036;
  double t4038;
  double t4040;
  double t4043;
  double t4046;
  double t4047;
  double t4052;
  double t4062;
  double t3965;
  double t3967;
  double t3968;
  double t3969;
  double t3970;
  double t3971;
  double t3975;
  double t4133;
  double t4151;
  double t4159;
  double t4161;
  double t4165;
  double t4171;
  double t4173;
  double t4181;
  double t4182;
  double t4190;
  double t4194;
  double t4200;
  double t4201;
  double t4207;
  double t4211;
  double t4223;
  double t4227;
  double t4229;
  double t4234;
  double t4295;
  double t4298;
  double t4301;
  double t4303;
  double t4308;
  double t4309;
  double t4313;
  double t4316;
  double t4318;
  double t4324;
  double t4344;
  double t4346;
  double t4349;
  double t4367;
  double t4369;
  double t4372;
  double t4375;
  double t4389;
  double t4390;
  double t4395;
  double t4400;
  double t4416;
  double t4420;
  double t4421;
  double t4422;
  double t4485;
  double t4487;
  double t4489;
  double t4494;
  double t4500;
  double t4501;
  double t4506;
  double t4509;
  double t4512;
  double t4522;
  double t4523;
  double t4524;
  double t4531;
  double t4532;
  double t4534;
  double t4538;
  double t4542;
  double t4545;
  double t4551;
  double t4553;
  double t4554;
  double t3948;
  double t3955;
  double t3960;
  double t4606;
  double t4608;
  double t4612;
  double t4618;
  double t4621;
  double t4625;
  double t4627;
  double t4632;
  double t4633;
  double t4634;
  double t4636;
  double t4638;
  double t4640;
  double t4645;
  double t4647;
  double t4648;
  double t311;
  double t410;
  double t552;
  double t698;
  double t824;
  double t888;
  double t1177;
  double t1184;
  double t1286;
  double t1304;
  double t1311;
  double t1493;
  double t1908;
  double t1924;
  double t1948;
  double t2059;
  double t2066;
  double t2097;
  double t4708;
  double t4711;
  double t4714;
  double t4718;
  double t4719;
  double t4720;
  double t4721;
  double t4725;
  double t4726;
  double t4728;
  double t4731;
  double t4735;
  double t4736;
  double t4737;
  double t4741;
  double t3295;
  double t3297;
  double t3301;
  double t3303;
  double t3312;
  double t3315;
  double t3376;
  double t3388;
  double t3392;
  double t3397;
  double t3411;
  double t3421;
  double t3492;
  double t3499;
  double t3512;
  double t3517;
  double t3520;
  double t3522;
  double t3558;
  double t4775;
  double t4777;
  double t4779;
  double t4780;
  double t4783;
  double t4784;
  double t4785;
  double t4786;
  double t3565;
  double t4789;
  double t4792;
  double t4793;
  double t4797;
  double t3614;
  double t3628;
  double t3656;
  double t3663;
  double t4881;
  double t4882;
  double t4883;
  double t4894;
  double t4895;
  double t4900;
  double t4903;
  double t4905;
  double t4908;
  double t4909;
  double t4914;
  double t4917;
  double t4921;
  double t4923;
  double t4925;
  double t4928;
  double t4929;
  double t4933;
  double t4978;
  double t4982;
  double t4985;
  double t4990;
  double t4991;
  double t4993;
  double t4996;
  double t4998;
  double t5002;
  double t5006;
  double t5007;
  double t5011;
  double t5012;
  double t5013;
  double t5022;
  double t5024;
  double t5026;
  double t5058;
  double t5059;
  double t5060;
  double t5068;
  double t5071;
  double t5076;
  double t5078;
  double t5083;
  double t5084;
  double t5086;
  double t5088;
  double t5089;
  double t5090;
  double t5093;
  double t5096;
  double t5097;
  double t5156;
  double t5159;
  double t5160;
  double t5165;
  double t5168;
  double t5170;
  double t5171;
  double t5174;
  double t5179;
  double t5183;
  double t5185;
  double t5188;
  double t5196;
  double t5202;
  double t5208;
  double t5252;
  double t5253;
  double t5256;
  double t5257;
  double t5263;
  double t5264;
  double t5268;
  double t5269;
  double t5273;
  double t5275;
  double t5284;
  double t5288;
  t28 = Cos(var1[13]);
  t280 = Sin(var1[13]);
  t528 = 4.e-6*t280;
  t1498 = Cos(var1[4]);
  t296 = -2.8e-11*t280;
  t1255 = 7.e-6*t280;
  t1707 = Cos(var1[12]);
  t1526 = Cos(var1[5]);
  t1544 = Sin(var1[12]);
  t1751 = Sin(var1[5]);
  t2388 = Cos(var1[14]);
  t2408 = -1.*t2388;
  t2417 = 1. + t2408;
  t2433 = Sin(var1[14]);
  t1040 = -7.e-6*t28;
  t889 = Sin(var1[4]);
  t1673 = -1.*t1498*t1526*t1544;
  t1791 = -1.*t1707*t1498*t1751;
  t1799 = t1673 + t1791;
  t1222 = 4.e-6*t28;
  t2098 = t1707*t1498*t1526;
  t2109 = -1.*t1498*t1544*t1751;
  t2259 = t2098 + t2109;
  t2428 = 4.e-6*t2417;
  t468 = 7.e-6*t28;
  t2626 = -4.e-6*t280;
  t2803 = -2.8e-11*t2417;
  t2491 = 7.e-6*t2417;
  t1907 = -1.*t28;
  t2870 = 2.8e-11*t280;
  t1939 = -4.e-6*t28;
  t2692 = -7.e-6*t280;
  t2981 = -4.e-6*t2433;
  t2627 = t1040 + t2626;
  t2641 = t2627*t889;
  t2657 = -6.5e-11*t280*t1799;
  t2723 = t1222 + t2692;
  t2731 = t2723*t2259;
  t2743 = t2641 + t2657 + t2731;
  t2943 = -1.*t2433;
  t2857 = -1.000000000049*t280*t889;
  t2861 = t468 + t2626;
  t2864 = t2861*t1799;
  t2882 = t28 + t2870;
  t2886 = t2882*t2259;
  t2895 = t2857 + t2864 + t2886;
  t3012 = t1907 + t2870;
  t3016 = t3012*t889;
  t3041 = t1939 + t2692;
  t3051 = t3041*t1799;
  t3055 = -1.000000000016*t280*t2259;
  t3060 = t3016 + t3051 + t3055;
  t2435 = -7.e-6*t2433;
  t3069 = -7.e-6*t2417;
  t2499 = 4.e-6*t2433;
  t3155 = -1. + t2388;
  t3166 = 4.e-6*t3155;
  t2773 = 7.e-6*t2433;
  t3096 = 2.8e-11*t2417;
  t3324 = 1. + t1907;
  t3339 = -7.e-6*t3324;
  t3284 = -2.8e-11*t2433;
  t3430 = -1. + t28;
  t3431 = 4.e-6*t3430;
  t3326 = 2.8e-11*t3324;
  t3389 = 4.e-6*t2388;
  t3333 = -1.*t280;
  t3335 = t3326 + t3333;
  t3338 = t3335*t889;
  t3340 = t3339 + t2626;
  t3347 = t3340*t1799;
  t3354 = -1.000000000016*t3324;
  t3355 = 1. + t3354;
  t3357 = t3355*t2259;
  t3361 = t3338 + t3347 + t3357;
  t3434 = t3431 + t2692;
  t3442 = t3434*t889;
  t3447 = -6.5e-11*t3324;
  t3454 = 1. + t3447;
  t3455 = t3454*t1799;
  t3457 = t3339 + t528;
  t3461 = t3457*t2259;
  t3470 = t3442 + t3455 + t3461;
  t3367 = -7.e-6*t2388;
  t3527 = -1.000000000049*t3324;
  t3533 = 1. + t3527;
  t3536 = t3533*t889;
  t3538 = t3431 + t1255;
  t3540 = t3538*t1799;
  t3547 = t3326 + t280;
  t3551 = t3547*t2259;
  t3553 = t3536 + t3540 + t3551;
  t3298 = -4.e-6*t2388;
  t3625 = 2.8e-11*t2433;
  t3508 = 7.e-6*t2388;
  t3696 = -1.*t1707;
  t3719 = 1. + t3696;
  t3726 = 0.15121*t1544;
  t3768 = 7.e-6*t3324;
  t2342 = -2.598649999999999e-7*var1[14];
  t2421 = -2.3905277499999995e-16*t2417;
  t2437 = t2428 + t2435;
  t2467 = -0.038922999986*t2437;
  t2524 = t2491 + t2499;
  t2571 = -0.503149000008*t2524;
  t2619 = t2342 + t2421 + t2467 + t2571;
  t3822 = -1.*t1707*t1498*t1526;
  t3827 = t1498*t1544*t1751;
  t3828 = t3822 + t3827;
  t2923 = 1.8190549999999993e-12*var1[14];
  t2927 = -0.5031490000160505*t2417;
  t2963 = t2803 + t2943;
  t2966 = -0.038922999986*t2963;
  t2984 = t2491 + t2981;
  t2999 = -3.6777349999999994e-6*t2984;
  t3011 = t2923 + t2927 + t2966 + t2999;
  t2756 = 1.0394599999999997e-12*var1[14];
  t2761 = -0.03892299998790722*t2417;
  t2785 = t2428 + t2773;
  t2792 = -3.6777349999999994e-6*t2785;
  t2809 = t2803 + t2433;
  t2837 = -0.503149000008*t2809;
  t2855 = t2756 + t2761 + t2792 + t2837;
  t3187 = t3166 + t2773;
  t3834 = t3457*t1799;
  t3845 = t3454*t3828;
  t3850 = t3834 + t3845;
  t3232 = t3096 + t2433;
  t3856 = t3355*t1799;
  t3859 = t3340*t3828;
  t3868 = t3856 + t3859;
  t3209 = -1.000000000049*t2417;
  t3221 = 1. + t3209;
  t3870 = t3547*t1799;
  t3873 = t3538*t3828;
  t3874 = t3870 + t3873;
  t3075 = t3069 + t2981;
  t3112 = -1.000000000016*t2417;
  t3119 = 1. + t3112;
  t3100 = t3096 + t2943;
  t3146 = -6.5e-11*t2417;
  t3148 = 1. + t3146;
  t3175 = t3069 + t2499;
  t3168 = t3166 + t2435;
  t3947 = 0.15121*t1707;
  t3744 = 1.0248489999999998e-12*var1[13];
  t3749 = -0.28120900000849935*t3324;
  t3750 = -2.8e-11*t3324;
  t3752 = t3750 + t3333;
  t3766 = -0.038748999993*t3752;
  t3769 = t3768 + t2626;
  t3782 = -2.123459e-6*t3769;
  t3783 = t3744 + t3749 + t3766 + t3782;
  t3786 = t3783*t1799;
  t3791 = -1.4640699999999997e-7*var1[13];
  t3792 = -1.38024835e-16*t3324;
  t3793 = 4.e-6*t3324;
  t3800 = t3793 + t2692;
  t3805 = -0.038748999993*t3800;
  t3810 = t3768 + t528;
  t3813 = -0.281209000004*t3810;
  t3819 = t3791 + t3792 + t3805 + t3813;
  t3831 = t3819*t3828;
  t3854 = t2619*t3850;
  t3869 = t3011*t3868;
  t3878 = t2855*t3874;
  t3884 = t3187*t3850;
  t3894 = t3232*t3868;
  t3897 = t3221*t3874;
  t3899 = t3884 + t3894 + t3897;
  t3901 = -0.038924*t3899;
  t3906 = t3075*t3850;
  t3908 = t3119*t3868;
  t3910 = t3100*t3874;
  t3912 = t3906 + t3908 + t3910;
  t3914 = -0.80315*t3912;
  t3917 = t3148*t3850;
  t3930 = t3175*t3868;
  t3931 = t3168*t3874;
  t3932 = t3917 + t3930 + t3931;
  t3940 = 0.148705*t3932;
  t3734 = -0.15121*t3719;
  t3740 = t3734 + t3726;
  t3720 = 0.15121*t3719;
  t3728 = t3720 + t3726;
  t3980 = t1526*t1544*t889;
  t3991 = t1707*t889*t1751;
  t3998 = t3980 + t3991;
  t4009 = -1.*t1707*t1526*t889;
  t4011 = t1544*t889*t1751;
  t4014 = t4009 + t4011;
  t4020 = t1498*t3335;
  t4021 = t3340*t3998;
  t4026 = t3355*t4014;
  t4028 = t4020 + t4021 + t4026;
  t4036 = t1498*t3434;
  t4038 = t3454*t3998;
  t4040 = t3457*t4014;
  t4043 = t4036 + t4038 + t4040;
  t4046 = t3533*t1498;
  t4047 = t3538*t3998;
  t4052 = t3547*t4014;
  t4062 = t4046 + t4047 + t4052;
  t3965 = 5.856279999999999e-13*var1[13];
  t3967 = -0.0387489999948987*t3324;
  t3968 = t3793 + t1255;
  t3969 = -2.123459e-6*t3968;
  t3970 = t3750 + t280;
  t3971 = -0.281209000004*t3970;
  t3975 = t3965 + t3967 + t3969 + t3971;
  t4133 = Sin(var1[3]);
  t4151 = -1.*t1498*t1526*t1544*t4133;
  t4159 = -1.*t1707*t1498*t4133*t1751;
  t4161 = t4151 + t4159;
  t4165 = t1707*t1498*t1526*t4133;
  t4171 = -1.*t1498*t1544*t4133*t1751;
  t4173 = t4165 + t4171;
  t4181 = t3335*t4133*t889;
  t4182 = t3340*t4161;
  t4190 = t3355*t4173;
  t4194 = t4181 + t4182 + t4190;
  t4200 = t3434*t4133*t889;
  t4201 = t3454*t4161;
  t4207 = t3457*t4173;
  t4211 = t4200 + t4201 + t4207;
  t4223 = t3533*t4133*t889;
  t4227 = t3538*t4161;
  t4229 = t3547*t4173;
  t4234 = t4223 + t4227 + t4229;
  t4295 = Cos(var1[3]);
  t4298 = t4295*t1526*t889;
  t4301 = -1.*t4133*t1751;
  t4303 = t4298 + t4301;
  t4308 = -1.*t1526*t4133;
  t4309 = -1.*t4295*t889*t1751;
  t4313 = t4308 + t4309;
  t4316 = -1.*t1544*t4303;
  t4318 = t1707*t4313;
  t4324 = t4316 + t4318;
  t4344 = t1707*t4303;
  t4346 = t1544*t4313;
  t4349 = t4344 + t4346;
  t4367 = -1.*t4295*t1498*t3335;
  t4369 = t3340*t4324;
  t4372 = t3355*t4349;
  t4375 = t4367 + t4369 + t4372;
  t4389 = -1.*t4295*t1498*t3434;
  t4390 = t3454*t4324;
  t4395 = t3457*t4349;
  t4400 = t4389 + t4390 + t4395;
  t4416 = -1.*t3533*t4295*t1498;
  t4420 = t3538*t4324;
  t4421 = t3547*t4349;
  t4422 = t4416 + t4420 + t4421;
  t4485 = -1.*t1526*t4133*t889;
  t4487 = -1.*t4295*t1751;
  t4489 = t4485 + t4487;
  t4494 = t4295*t1526;
  t4500 = -1.*t4133*t889*t1751;
  t4501 = t4494 + t4500;
  t4506 = t1544*t4489;
  t4509 = t1707*t4501;
  t4512 = t4506 + t4509;
  t4522 = t1707*t4489;
  t4523 = -1.*t1544*t4501;
  t4524 = t4522 + t4523;
  t4531 = t3457*t4512;
  t4532 = t3454*t4524;
  t4534 = t4531 + t4532;
  t4538 = t3355*t4512;
  t4542 = t3340*t4524;
  t4545 = t4538 + t4542;
  t4551 = t3547*t4512;
  t4553 = t3538*t4524;
  t4554 = t4551 + t4553;
  t3948 = -0.15121*t1544;
  t3955 = t3947 + t3948;
  t3960 = t3947 + t3726;
  t4606 = t1526*t4133*t889;
  t4608 = t4295*t1751;
  t4612 = t4606 + t4608;
  t4618 = -1.*t1544*t4612;
  t4621 = t4618 + t4509;
  t4625 = -1.*t1707*t4612;
  t4627 = t4625 + t4523;
  t4632 = t3457*t4621;
  t4633 = t3454*t4627;
  t4634 = t4632 + t4633;
  t4636 = t3355*t4621;
  t4638 = t3340*t4627;
  t4640 = t4636 + t4638;
  t4645 = t3547*t4621;
  t4647 = t3538*t4627;
  t4648 = t4645 + t4647;
  t311 = t28 + t296;
  t410 = -0.281209000004*t311;
  t552 = t468 + t528;
  t698 = -2.123459e-6*t552;
  t824 = -0.0387489999948987*t280;
  t888 = 5.856279999999999e-13 + t410 + t698 + t824;
  t1177 = t1040 + t528;
  t1184 = -0.038748999993*t1177;
  t1286 = t1222 + t1255;
  t1304 = -0.281209000004*t1286;
  t1311 = -1.38024835e-16*t280;
  t1493 = -1.4640699999999997e-7 + t1184 + t1304 + t1311;
  t1908 = t1907 + t296;
  t1924 = -0.038748999993*t1908;
  t1948 = t1939 + t1255;
  t2059 = -2.123459e-6*t1948;
  t2066 = -0.28120900000849935*t280;
  t2097 = 1.0248489999999998e-12 + t1924 + t2059 + t2066;
  t4708 = t1707*t4612;
  t4711 = t1544*t4501;
  t4714 = t4708 + t4711;
  t4718 = -1.*t1498*t2627*t4133;
  t4719 = -6.5e-11*t280*t4621;
  t4720 = t2723*t4714;
  t4721 = t4718 + t4719 + t4720;
  t4725 = 1.000000000049*t1498*t280*t4133;
  t4726 = t2861*t4621;
  t4728 = t2882*t4714;
  t4731 = t4725 + t4726 + t4728;
  t4735 = -1.*t1498*t3012*t4133;
  t4736 = t3041*t4621;
  t4737 = -1.000000000016*t280*t4714;
  t4741 = t4735 + t4736 + t4737;
  t3295 = t2408 + t3284;
  t3297 = -0.038922999986*t3295;
  t3301 = t3298 + t2773;
  t3303 = -3.6777349999999994e-6*t3301;
  t3312 = -0.5031490000160505*t2433;
  t3315 = 1.8190549999999993e-12 + t3297 + t3303 + t3312;
  t3376 = t3367 + t2499;
  t3388 = -0.038922999986*t3376;
  t3392 = t3389 + t2773;
  t3397 = -0.503149000008*t3392;
  t3411 = -2.3905277499999995e-16*t2433;
  t3421 = -2.598649999999999e-7 + t3388 + t3397 + t3411;
  t3492 = t2388 + t3284;
  t3499 = -0.503149000008*t3492;
  t3512 = t3508 + t2499;
  t3517 = -3.6777349999999994e-6*t3512;
  t3520 = -0.03892299998790722*t2433;
  t3522 = 1.0394599999999997e-12 + t3499 + t3517 + t3520;
  t3558 = t3389 + t2435;
  t4775 = -1.*t1498*t3335*t4133;
  t4777 = t3340*t4621;
  t4779 = t3355*t4714;
  t4780 = t4775 + t4777 + t4779;
  t4783 = -1.*t1498*t3434*t4133;
  t4784 = t3454*t4621;
  t4785 = t3457*t4714;
  t4786 = t4783 + t4784 + t4785;
  t3565 = t3367 + t2981;
  t4789 = -1.*t3533*t1498*t4133;
  t4792 = t3538*t4621;
  t4793 = t3547*t4714;
  t4797 = t4789 + t4792 + t4793;
  t3614 = t3298 + t2435;
  t3628 = t2408 + t3625;
  t3656 = t2388 + t3625;
  t3663 = t3508 + t2981;
  t4881 = t4295*t1498*t1526*t1544;
  t4882 = t1707*t4295*t1498*t1751;
  t4883 = t4881 + t4882;
  t4894 = -1.*t1707*t4295*t1498*t1526;
  t4895 = t4295*t1498*t1544*t1751;
  t4900 = t4894 + t4895;
  t4903 = -1.*t4295*t3335*t889;
  t4905 = t3340*t4883;
  t4908 = t3355*t4900;
  t4909 = t4903 + t4905 + t4908;
  t4914 = -1.*t4295*t3434*t889;
  t4917 = t3454*t4883;
  t4921 = t3457*t4900;
  t4923 = t4914 + t4917 + t4921;
  t4925 = -1.*t3533*t4295*t889;
  t4928 = t3538*t4883;
  t4929 = t3547*t4900;
  t4933 = t4925 + t4928 + t4929;
  t4978 = t1526*t4133;
  t4982 = t4295*t889*t1751;
  t4985 = t4978 + t4982;
  t4990 = t1544*t4303;
  t4991 = t1707*t4985;
  t4993 = t4990 + t4991;
  t4996 = -1.*t1544*t4985;
  t4998 = t4344 + t4996;
  t5002 = t3457*t4993;
  t5006 = t3454*t4998;
  t5007 = t5002 + t5006;
  t5011 = t3355*t4993;
  t5012 = t3340*t4998;
  t5013 = t5011 + t5012;
  t5022 = t3547*t4993;
  t5024 = t3538*t4998;
  t5026 = t5022 + t5024;
  t5058 = -1.*t4295*t1526*t889;
  t5059 = t4133*t1751;
  t5060 = t5058 + t5059;
  t5068 = -1.*t1544*t5060;
  t5071 = t5068 + t4991;
  t5076 = -1.*t1707*t5060;
  t5078 = t5076 + t4996;
  t5083 = t3457*t5071;
  t5084 = t3454*t5078;
  t5086 = t5083 + t5084;
  t5088 = t3355*t5071;
  t5089 = t3340*t5078;
  t5090 = t5088 + t5089;
  t5093 = t3547*t5071;
  t5096 = t3538*t5078;
  t5097 = t5093 + t5096;
  t5156 = t1707*t5060;
  t5159 = t1544*t4985;
  t5160 = t5156 + t5159;
  t5165 = t4295*t1498*t2627;
  t5168 = -6.5e-11*t280*t5071;
  t5170 = t2723*t5160;
  t5171 = t5165 + t5168 + t5170;
  t5174 = -1.000000000049*t4295*t1498*t280;
  t5179 = t2861*t5071;
  t5183 = t2882*t5160;
  t5185 = t5174 + t5179 + t5183;
  t5188 = t4295*t1498*t3012;
  t5196 = t3041*t5071;
  t5202 = -1.000000000016*t280*t5160;
  t5208 = t5188 + t5196 + t5202;
  t5252 = t4295*t1498*t3335;
  t5253 = t3340*t5071;
  t5256 = t3355*t5160;
  t5257 = t5252 + t5253 + t5256;
  t5263 = t4295*t1498*t3434;
  t5264 = t3454*t5071;
  t5268 = t3457*t5160;
  t5269 = t5263 + t5264 + t5268;
  t5273 = t3533*t4295*t1498;
  t5275 = t3538*t5071;
  t5284 = t3547*t5160;
  t5288 = t5273 + t5275 + t5284;
  p_output1[0]=var2[0] + (t1498*t3975 + t3819*t3998 + t3783*t4014 + t3011*t4028 + t2619*t4043 + t2855*t4062 - 0.80315*(t3119*t4028 + t3075*t4043 + t3100*t4062) + 0.148705*(t3175*t4028 + t3148*t4043 + t3168*t4062) - 0.038924*(t3232*t4028 + t3187*t4043 + t3221*t4062) + t1751*t3728*t889 - 1.*t1526*t3740*t889)*var2[4] + (-1.*t1498*t1526*t3728 - 1.*t1498*t1751*t3740 + t3786 + t3831 + t3854 + t3869 + t3878 + t3901 + t3914 + t3940)*var2[5] + (t3786 + t3831 + t3854 + t3869 + t3878 + t3901 + t3914 + t3940 + t1498*t1526*t3955 - 1.*t1498*t1751*t3960)*var2[12] + (t1493*t1799 + t2097*t2259 + t2619*t2743 + t2855*t2895 + t3011*t3060 - 0.80315*(t2743*t3075 + t2895*t3100 + t3060*t3119) + 0.148705*(t2743*t3148 + t2895*t3168 + t3060*t3175) - 0.038924*(t2743*t3187 + t2895*t3221 + t3060*t3232) + t888*t889)*var2[13] + (t3315*t3361 + t3421*t3470 + t3522*t3553 + 0.148705*(-6.5e-11*t2433*t3470 + t3361*t3558 + t3553*t3565) - 0.80315*(-1.000000000016*t2433*t3361 + t3470*t3614 + t3553*t3628) - 0.038924*(-1.000000000049*t2433*t3553 + t3361*t3656 + t3470*t3663))*var2[14];
  p_output1[1]=var2[1] + (-1.*t1498*t3975*t4295 + t3740*t4303 + t3728*t4313 + t3819*t4324 + t3783*t4349 + t3011*t4375 + t2619*t4400 + t2855*t4422 - 0.80315*(t3119*t4375 + t3075*t4400 + t3100*t4422) + 0.148705*(t3175*t4375 + t3148*t4400 + t3168*t4422) - 0.038924*(t3232*t4375 + t3187*t4400 + t3221*t4422))*var2[3] + (-1.*t1498*t1751*t3728*t4133 + t1498*t1526*t3740*t4133 + t3819*t4161 + t3783*t4173 + t3011*t4194 + t2619*t4211 + t2855*t4234 - 0.80315*(t3119*t4194 + t3075*t4211 + t3100*t4234) + 0.148705*(t3175*t4194 + t3148*t4211 + t3168*t4234) - 0.038924*(t3232*t4194 + t3187*t4211 + t3221*t4234) + t3975*t4133*t889)*var2[4] + (t3728*t4489 + t3740*t4501 + t3783*t4512 + t3819*t4524 + t2619*t4534 + t3011*t4545 + t2855*t4554 - 0.80315*(t3075*t4534 + t3119*t4545 + t3100*t4554) + 0.148705*(t3148*t4534 + t3175*t4545 + t3168*t4554) - 0.038924*(t3187*t4534 + t3232*t4545 + t3221*t4554))*var2[5] + (t3960*t4501 + t3955*t4612 + t3783*t4621 + t3819*t4627 + t2619*t4634 + t3011*t4640 + t2855*t4648 - 0.80315*(t3075*t4634 + t3119*t4640 + t3100*t4648) + 0.148705*(t3148*t4634 + t3175*t4640 + t3168*t4648) - 0.038924*(t3187*t4634 + t3232*t4640 + t3221*t4648))*var2[12] + (t1493*t4621 + t2097*t4714 + t2619*t4721 + t2855*t4731 + t3011*t4741 - 0.80315*(t3075*t4721 + t3100*t4731 + t3119*t4741) + 0.148705*(t3148*t4721 + t3168*t4731 + t3175*t4741) - 0.038924*(t3187*t4721 + t3221*t4731 + t3232*t4741) - 1.*t1498*t4133*t888)*var2[13] + (t3315*t4780 + t3421*t4786 + t3522*t4797 - 0.038924*(t3656*t4780 + t3663*t4786 - 1.000000000049*t2433*t4797) + 0.148705*(t3558*t4780 - 6.5e-11*t2433*t4786 + t3565*t4797) - 0.80315*(-1.000000000016*t2433*t4780 + t3614*t4786 + t3628*t4797))*var2[14];
  p_output1[2]=var2[2] + (-1.*t1498*t3975*t4133 + t3728*t4501 + t3740*t4612 + t3819*t4621 + t3783*t4714 + t3011*t4780 + t2619*t4786 + t2855*t4797 - 0.80315*(t3119*t4780 + t3075*t4786 + t3100*t4797) + 0.148705*(t3175*t4780 + t3148*t4786 + t3168*t4797) - 0.038924*(t3232*t4780 + t3187*t4786 + t3221*t4797))*var2[3] + (t1498*t1751*t3728*t4295 - 1.*t1498*t1526*t3740*t4295 + t3819*t4883 + t3783*t4900 + t3011*t4909 + t2619*t4923 + t2855*t4933 - 0.80315*(t3119*t4909 + t3075*t4923 + t3100*t4933) + 0.148705*(t3175*t4909 + t3148*t4923 + t3168*t4933) - 0.038924*(t3232*t4909 + t3187*t4923 + t3221*t4933) - 1.*t3975*t4295*t889)*var2[4] + (t3728*t4303 + t3740*t4985 + t3783*t4993 + t3819*t4998 + t2619*t5007 + t3011*t5013 + t2855*t5026 - 0.80315*(t3075*t5007 + t3119*t5013 + t3100*t5026) + 0.148705*(t3148*t5007 + t3175*t5013 + t3168*t5026) - 0.038924*(t3187*t5007 + t3232*t5013 + t3221*t5026))*var2[5] + (t3960*t4985 + t3955*t5060 + t3783*t5071 + t3819*t5078 + t2619*t5086 + t3011*t5090 + t2855*t5097 - 0.80315*(t3075*t5086 + t3119*t5090 + t3100*t5097) + 0.148705*(t3148*t5086 + t3175*t5090 + t3168*t5097) - 0.038924*(t3187*t5086 + t3232*t5090 + t3221*t5097))*var2[12] + (t1493*t5071 + t2097*t5160 + t2619*t5171 + t2855*t5185 + t3011*t5208 - 0.80315*(t3075*t5171 + t3100*t5185 + t3119*t5208) + 0.148705*(t3148*t5171 + t3168*t5185 + t3175*t5208) - 0.038924*(t3187*t5171 + t3221*t5185 + t3232*t5208) + t1498*t4295*t888)*var2[13] + (t3315*t5257 + t3421*t5269 + t3522*t5288 - 0.038924*(t3656*t5257 + t3663*t5269 - 1.000000000049*t2433*t5288) + 0.148705*(t3558*t5257 - 6.5e-11*t2433*t5269 + t3565*t5288) - 0.80315*(-1.000000000016*t2433*t5257 + t3614*t5269 + t3628*t5288))*var2[14];
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

#include "impact_velocity_RlFootParallelStance.hh"

namespace ParallelStance
{

void impact_velocity_RlFootParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
