/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:15:08 GMT+01:00
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
  double t74;
  double t355;
  double t907;
  double t1640;
  double t1901;
  double t2015;
  double t240;
  double t2245;
  double t2523;
  double t2530;
  double t2533;
  double t2540;
  double t2711;
  double t2831;
  double t2510;
  double t2511;
  double t2517;
  double t2590;
  double t2606;
  double t2609;
  double t2928;
  double t2966;
  double t2979;
  double t2984;
  double t2851;
  double t2871;
  double t2890;
  double t2894;
  double t2897;
  double t2899;
  double t3312;
  double t3256;
  double t3264;
  double t3272;
  double t3273;
  double t3034;
  double t3044;
  double t3066;
  double t3081;
  double t3092;
  double t3093;
  double t2068;
  double t2096;
  double t2277;
  double t2458;
  double t2521;
  double t2538;
  double t2575;
  double t2577;
  double t2615;
  double t2648;
  double t2669;
  double t3401;
  double t3402;
  double t3422;
  double t3431;
  double t3432;
  double t3438;
  double t2902;
  double t2980;
  double t2991;
  double t2995;
  double t3108;
  double t3153;
  double t3251;
  double t3276;
  double t3290;
  double t3292;
  double t3294;
  double t3376;
  double t3377;
  double t3482;
  double t3483;
  double t3491;
  double t3461;
  double t3470;
  double t3472;
  double t3496;
  double t3501;
  double t3502;
  double t3329;
  double t3332;
  double t3423;
  double t3439;
  double t3475;
  double t3493;
  double t3503;
  double t3504;
  double t3505;
  double t3506;
  double t3512;
  double t3514;
  double t3516;
  double t3519;
  double t3530;
  double t3531;
  double t3536;
  double t3537;
  double t3538;
  double t3541;
  double t3542;
  double t3543;
  double t3602;
  double t3603;
  double t3605;
  double t3634;
  double t3641;
  double t3643;
  double t3645;
  double t3653;
  double t3654;
  double t3655;
  double t3657;
  double t3621;
  double t3622;
  double t3623;
  double t3625;
  double t3739;
  double t3742;
  double t3747;
  double t3748;
  double t3714;
  double t3716;
  double t3717;
  double t3723;
  double t3765;
  double t3771;
  double t3846;
  double t3840;
  double t3842;
  double t3847;
  double t3848;
  double t3851;
  double t3852;
  double t3856;
  double t2719;
  double t2744;
  double t2798;
  double t2825;
  double t3859;
  double t3860;
  double t3863;
  double t3868;
  double t3869;
  double t3872;
  double t3875;
  double t3878;
  double t3879;
  double t3880;
  double t3898;
  double t3900;
  double t3904;
  double t3906;
  double t3885;
  double t3887;
  double t3889;
  double t3892;
  double t3959;
  double t3960;
  double t3961;
  double t3968;
  double t3979;
  double t3983;
  double t3989;
  double t3990;
  double t4010;
  double t4014;
  double t4034;
  double t4039;
  double t4040;
  double t4046;
  double t4018;
  double t4020;
  double t4023;
  double t4031;
  double t4119;
  double t4124;
  double t4125;
  double t4127;
  double t4128;
  double t4129;
  double t4137;
  double t4138;
  double t4140;
  double t4146;
  double t4150;
  double t4151;
  double t4180;
  double t4186;
  double t4190;
  double t4159;
  double t4162;
  double t4165;
  double t4197;
  double t4204;
  double t4207;
  double t3550;
  double t3556;
  double t3559;
  double t3565;
  double t4263;
  double t4270;
  double t4275;
  double t4280;
  double t4281;
  double t4284;
  double t4286;
  double t4297;
  double t4298;
  double t4307;
  double t4288;
  double t4289;
  double t4292;
  double t4310;
  double t4311;
  double t4322;
  double t3571;
  double t3572;
  double t3573;
  double t3582;
  double t3587;
  double t3594;
  double t3608;
  double t3610;
  double t3613;
  double t4367;
  double t4368;
  double t4373;
  double t4390;
  double t4393;
  double t4394;
  double t4396;
  double t4404;
  double t4405;
  double t4408;
  double t4410;
  double t4376;
  double t4377;
  double t4386;
  double t4388;
  double t3725;
  double t3730;
  double t3731;
  double t3753;
  double t3754;
  double t3756;
  double t3775;
  double t3782;
  double t3783;
  double t4471;
  double t4472;
  double t4475;
  double t4477;
  double t4457;
  double t4460;
  double t4464;
  double t4465;
  double t4484;
  double t4485;
  double t4514;
  double t4515;
  double t4679;
  double t4683;
  double t4688;
  double t4692;
  double t4693;
  double t4694;
  double t4708;
  double t4709;
  double t4710;
  double t4711;
  double t4735;
  double t4736;
  double t4741;
  double t4742;
  double t4718;
  double t4725;
  double t4729;
  double t4731;
  double t4779;
  double t4780;
  double t4782;
  double t4788;
  double t4791;
  double t4796;
  double t4797;
  double t4799;
  double t4824;
  double t4826;
  double t4828;
  double t4802;
  double t4804;
  double t4812;
  double t4833;
  double t4835;
  double t4837;
  double t4890;
  double t4892;
  double t4893;
  double t4897;
  double t4898;
  double t4903;
  double t4904;
  double t4917;
  double t4918;
  double t4919;
  double t4906;
  double t4908;
  double t4909;
  double t4923;
  double t4926;
  double t4929;
  double t4976;
  double t4977;
  double t4980;
  double t4994;
  double t4999;
  double t5000;
  double t5004;
  double t5012;
  double t5013;
  double t5016;
  double t4984;
  double t4987;
  double t4988;
  double t4989;
  double t5078;
  double t5079;
  double t5080;
  double t5081;
  double t5064;
  double t5070;
  double t5071;
  double t5074;
  double t5083;
  double t5092;
  t74 = Sin(var1[4]);
  t355 = Cos(var1[6]);
  t907 = -1.*t355;
  t1640 = 1. + t907;
  t1901 = 0.15121*t1640;
  t2015 = Sin(var1[6]);
  t240 = Sin(var1[5]);
  t2245 = Cos(var1[5]);
  t2523 = Cos(var1[7]);
  t2530 = -1.*t2523;
  t2533 = 1. + t2530;
  t2540 = Sin(var1[7]);
  t2711 = Cos(var1[4]);
  t2831 = -1. + t2523;
  t2510 = t355*t74*t240;
  t2511 = t2245*t74*t2015;
  t2517 = t2510 + t2511;
  t2590 = -1.*t2245*t355*t74;
  t2606 = t74*t240*t2015;
  t2609 = t2590 + t2606;
  t2928 = Cos(var1[8]);
  t2966 = -1.*t2928;
  t2979 = 1. + t2966;
  t2984 = Sin(var1[8]);
  t2851 = 4.e-6*t2711*t2831;
  t2871 = 1.6e-11*t2831;
  t2890 = 1. + t2871;
  t2894 = t2890*t2517;
  t2897 = 4.e-6*t2609*t2540;
  t2899 = t2851 + t2894 + t2897;
  t3312 = -1. + t2928;
  t3256 = t2711*t2523;
  t3264 = 4.e-6*t2831*t2517;
  t3272 = t2609*t2540;
  t3273 = t3256 + t3264 + t3272;
  t3034 = -1.000000000016*t2533;
  t3044 = 1. + t3034;
  t3066 = t3044*t2609;
  t3081 = -1.*t2711*t2540;
  t3092 = -4.e-6*t2517*t2540;
  t3093 = t3066 + t3081 + t3092;
  t2068 = -0.15121*t2015;
  t2096 = t1901 + t2068;
  t2277 = 0.15121*t2015;
  t2458 = t1901 + t2277;
  t2521 = -1.2484e-7*var1[7];
  t2538 = -1.5499600000248e-7*t2533;
  t2575 = 1.124840000016e-6*t2540;
  t2577 = t2521 + t2538 + t2575;
  t2615 = 0.281210000008499*t2533;
  t2648 = 0.03874900000062*t2540;
  t2669 = t2615 + t2648;
  t3401 = -1.*t2711*t2245*t355;
  t3402 = t2711*t240*t2015;
  t3422 = t3401 + t3402;
  t3431 = -1.*t2711*t355*t240;
  t3432 = -1.*t2711*t2245*t2015;
  t3438 = t3431 + t3432;
  t2902 = -1.284e-8*var1[8];
  t2980 = -1.5499600000248e-7*t2979;
  t2991 = 2.012840000032e-6*t2984;
  t2995 = t2902 + t2980 + t2991;
  t3108 = 0.503210000016051*t2979;
  t3153 = 0.03874900000062*t2984;
  t3251 = t3108 + t3153;
  t3276 = 5.136e-14*var1[8];
  t3290 = -0.03874900000062*t2979;
  t3292 = 0.503210000008*t2984;
  t3294 = t3276 + t3290 + t3292;
  t3376 = -1.000000000016*t2979;
  t3377 = 1. + t3376;
  t3482 = t3044*t3438;
  t3483 = -4.e-6*t3422*t2540;
  t3491 = t3482 + t3483;
  t3461 = t2890*t3422;
  t3470 = 4.e-6*t3438*t2540;
  t3472 = t3461 + t3470;
  t3496 = 4.e-6*t2831*t3422;
  t3501 = t3438*t2540;
  t3502 = t3496 + t3501;
  t3329 = 1.6e-11*t3312;
  t3332 = 1. + t3329;
  t3423 = t3422*t2577;
  t3439 = t3438*t2669;
  t3475 = t3472*t2995;
  t3493 = t3491*t3251;
  t3503 = t3502*t3294;
  t3504 = t3377*t3491;
  t3505 = -4.e-6*t3472*t2984;
  t3506 = -1.*t3502*t2984;
  t3512 = t3504 + t3505 + t3506;
  t3514 = 0.80321*t3512;
  t3516 = t3332*t3472;
  t3519 = 4.e-6*t3312*t3502;
  t3530 = 4.e-6*t3491*t2984;
  t3531 = t3516 + t3519 + t3530;
  t3536 = 0.14871*t3531;
  t3537 = 4.e-6*t3312*t3472;
  t3538 = t2928*t3502;
  t3541 = t3491*t2984;
  t3542 = t3537 + t3538 + t3541;
  t3543 = -0.03875*t3542;
  t3602 = t2711*t2245*t355;
  t3603 = -1.*t2711*t240*t2015;
  t3605 = t3602 + t3603;
  t3634 = -1.*t2523*t74;
  t3641 = -4.e-6*t2523*t3438;
  t3643 = -1.000000000016*t3605*t2540;
  t3645 = t3634 + t3641 + t3643;
  t3653 = t2523*t3605;
  t3654 = -1.*t74*t2540;
  t3655 = -4.e-6*t3438*t2540;
  t3657 = t3653 + t3654 + t3655;
  t3621 = 4.e-6*t2523*t3605;
  t3622 = -4.e-6*t74*t2540;
  t3623 = -1.6e-11*t3438*t2540;
  t3625 = t3621 + t3622 + t3623;
  t3739 = 4.e-6*t2831*t74;
  t3742 = t2890*t3438;
  t3747 = 4.e-6*t3605*t2540;
  t3748 = t3739 + t3742 + t3747;
  t3714 = t2523*t74;
  t3716 = 4.e-6*t2831*t3438;
  t3717 = t3605*t2540;
  t3723 = t3714 + t3716 + t3717;
  t3765 = t3044*t3605;
  t3771 = t3765 + t3654 + t3655;
  t3846 = Cos(var1[3]);
  t3840 = Sin(var1[3]);
  t3842 = -1.*t2245*t3840;
  t3847 = -1.*t3846*t74*t240;
  t3848 = t3842 + t3847;
  t3851 = t3846*t2245*t74;
  t3852 = -1.*t3840*t240;
  t3856 = t3851 + t3852;
  t2719 = 4.9936e-13*var1[7];
  t2744 = -0.03874900000062*t2533;
  t2798 = 0.281210000004*t2540;
  t2825 = t2719 + t2744 + t2798;
  t3859 = t355*t3848;
  t3860 = -1.*t3856*t2015;
  t3863 = t3859 + t3860;
  t3868 = t355*t3856;
  t3869 = t3848*t2015;
  t3872 = t3868 + t3869;
  t3875 = -4.e-6*t3846*t2711*t2831;
  t3878 = t2890*t3863;
  t3879 = 4.e-6*t3872*t2540;
  t3880 = t3875 + t3878 + t3879;
  t3898 = -1.*t3846*t2711*t2523;
  t3900 = 4.e-6*t2831*t3863;
  t3904 = t3872*t2540;
  t3906 = t3898 + t3900 + t3904;
  t3885 = t3044*t3872;
  t3887 = t3846*t2711*t2540;
  t3889 = -4.e-6*t3863*t2540;
  t3892 = t3885 + t3887 + t3889;
  t3959 = -1.*t2711*t355*t3840*t240;
  t3960 = -1.*t2711*t2245*t3840*t2015;
  t3961 = t3959 + t3960;
  t3968 = t2711*t2245*t355*t3840;
  t3979 = -1.*t2711*t3840*t240*t2015;
  t3983 = t3968 + t3979;
  t3989 = 4.e-6*t2831*t3840*t74;
  t3990 = t2890*t3961;
  t4010 = 4.e-6*t3983*t2540;
  t4014 = t3989 + t3990 + t4010;
  t4034 = t2523*t3840*t74;
  t4039 = 4.e-6*t2831*t3961;
  t4040 = t3983*t2540;
  t4046 = t4034 + t4039 + t4040;
  t4018 = t3044*t3983;
  t4020 = -1.*t3840*t74*t2540;
  t4023 = -4.e-6*t3961*t2540;
  t4031 = t4018 + t4020 + t4023;
  t4119 = -1.*t2245*t3840*t74;
  t4124 = -1.*t3846*t240;
  t4125 = t4119 + t4124;
  t4127 = t3846*t2245;
  t4128 = -1.*t3840*t74*t240;
  t4129 = t4127 + t4128;
  t4137 = t355*t4125;
  t4138 = -1.*t4129*t2015;
  t4140 = t4137 + t4138;
  t4146 = t355*t4129;
  t4150 = t4125*t2015;
  t4151 = t4146 + t4150;
  t4180 = t3044*t4151;
  t4186 = -4.e-6*t4140*t2540;
  t4190 = t4180 + t4186;
  t4159 = t2890*t4140;
  t4162 = 4.e-6*t4151*t2540;
  t4165 = t4159 + t4162;
  t4197 = 4.e-6*t2831*t4140;
  t4204 = t4151*t2540;
  t4207 = t4197 + t4204;
  t3550 = -0.15121*t355;
  t3556 = t3550 + t2277;
  t3559 = 0.15121*t355;
  t3565 = t3559 + t2277;
  t4263 = t2245*t3840*t74;
  t4270 = t3846*t240;
  t4275 = t4263 + t4270;
  t4280 = -1.*t355*t4275;
  t4281 = t4280 + t4138;
  t4284 = -1.*t4275*t2015;
  t4286 = t4146 + t4284;
  t4297 = t3044*t4286;
  t4298 = -4.e-6*t4281*t2540;
  t4307 = t4297 + t4298;
  t4288 = t2890*t4281;
  t4289 = 4.e-6*t4286*t2540;
  t4292 = t4288 + t4289;
  t4310 = 4.e-6*t2831*t4281;
  t4311 = t4286*t2540;
  t4322 = t4310 + t4311;
  t3571 = 0.281210000004*t2523;
  t3572 = -0.03874900000062*t2540;
  t3573 = 4.9936e-13 + t3571 + t3572;
  t3582 = 1.124840000016e-6*t2523;
  t3587 = -1.5499600000248e-7*t2540;
  t3594 = -1.2484e-7 + t3582 + t3587;
  t3608 = 0.03874900000062*t2523;
  t3610 = 0.281210000008499*t2540;
  t3613 = t3608 + t3610;
  t4367 = t355*t4275;
  t4368 = t4129*t2015;
  t4373 = t4367 + t4368;
  t4390 = t2711*t2523*t3840;
  t4393 = -4.e-6*t2523*t4286;
  t4394 = -1.000000000016*t4373*t2540;
  t4396 = t4390 + t4393 + t4394;
  t4404 = t2523*t4373;
  t4405 = t2711*t3840*t2540;
  t4408 = -4.e-6*t4286*t2540;
  t4410 = t4404 + t4405 + t4408;
  t4376 = 4.e-6*t2523*t4373;
  t4377 = 4.e-6*t2711*t3840*t2540;
  t4386 = -1.6e-11*t4286*t2540;
  t4388 = t4376 + t4377 + t4386;
  t3725 = 0.503210000008*t2928;
  t3730 = -0.03874900000062*t2984;
  t3731 = 5.136e-14 + t3725 + t3730;
  t3753 = 2.012840000032e-6*t2928;
  t3754 = -1.5499600000248e-7*t2984;
  t3756 = -1.284e-8 + t3753 + t3754;
  t3775 = 0.03874900000062*t2928;
  t3782 = 0.503210000016051*t2984;
  t3783 = t3775 + t3782;
  t4471 = -4.e-6*t2711*t2831*t3840;
  t4472 = t2890*t4286;
  t4475 = 4.e-6*t4373*t2540;
  t4477 = t4471 + t4472 + t4475;
  t4457 = -1.*t2711*t2523*t3840;
  t4460 = 4.e-6*t2831*t4286;
  t4464 = t4373*t2540;
  t4465 = t4457 + t4460 + t4464;
  t4484 = t3044*t4373;
  t4485 = t4484 + t4405 + t4408;
  t4514 = -4.e-6*t4477*t2984;
  t4515 = -1.*t4465*t2984;
  t4679 = t3846*t2711*t355*t240;
  t4683 = t3846*t2711*t2245*t2015;
  t4688 = t4679 + t4683;
  t4692 = -1.*t3846*t2711*t2245*t355;
  t4693 = t3846*t2711*t240*t2015;
  t4694 = t4692 + t4693;
  t4708 = -4.e-6*t3846*t2831*t74;
  t4709 = t2890*t4688;
  t4710 = 4.e-6*t4694*t2540;
  t4711 = t4708 + t4709 + t4710;
  t4735 = -1.*t3846*t2523*t74;
  t4736 = 4.e-6*t2831*t4688;
  t4741 = t4694*t2540;
  t4742 = t4735 + t4736 + t4741;
  t4718 = t3044*t4694;
  t4725 = t3846*t74*t2540;
  t4729 = -4.e-6*t4688*t2540;
  t4731 = t4718 + t4725 + t4729;
  t4779 = t2245*t3840;
  t4780 = t3846*t74*t240;
  t4782 = t4779 + t4780;
  t4788 = -1.*t4782*t2015;
  t4791 = t3868 + t4788;
  t4796 = t355*t4782;
  t4797 = t3856*t2015;
  t4799 = t4796 + t4797;
  t4824 = t3044*t4799;
  t4826 = -4.e-6*t4791*t2540;
  t4828 = t4824 + t4826;
  t4802 = t2890*t4791;
  t4804 = 4.e-6*t4799*t2540;
  t4812 = t4802 + t4804;
  t4833 = 4.e-6*t2831*t4791;
  t4835 = t4799*t2540;
  t4837 = t4833 + t4835;
  t4890 = -1.*t3846*t2245*t74;
  t4892 = t3840*t240;
  t4893 = t4890 + t4892;
  t4897 = -1.*t355*t4893;
  t4898 = t4897 + t4788;
  t4903 = -1.*t4893*t2015;
  t4904 = t4796 + t4903;
  t4917 = t3044*t4904;
  t4918 = -4.e-6*t4898*t2540;
  t4919 = t4917 + t4918;
  t4906 = t2890*t4898;
  t4908 = 4.e-6*t4904*t2540;
  t4909 = t4906 + t4908;
  t4923 = 4.e-6*t2831*t4898;
  t4926 = t4904*t2540;
  t4929 = t4923 + t4926;
  t4976 = t355*t4893;
  t4977 = t4782*t2015;
  t4980 = t4976 + t4977;
  t4994 = -4.e-6*t2523*t4904;
  t4999 = -1.000000000016*t4980*t2540;
  t5000 = t3898 + t4994 + t4999;
  t5004 = t2523*t4980;
  t5012 = -1.*t3846*t2711*t2540;
  t5013 = -4.e-6*t4904*t2540;
  t5016 = t5004 + t5012 + t5013;
  t4984 = 4.e-6*t2523*t4980;
  t4987 = -4.e-6*t3846*t2711*t2540;
  t4988 = -1.6e-11*t4904*t2540;
  t4989 = t4984 + t4987 + t4988;
  t5078 = 4.e-6*t3846*t2711*t2831;
  t5079 = t2890*t4904;
  t5080 = 4.e-6*t4980*t2540;
  t5081 = t5078 + t5079 + t5080;
  t5064 = t3846*t2711*t2523;
  t5070 = 4.e-6*t2831*t4904;
  t5071 = t4980*t2540;
  t5074 = t5064 + t5070 + t5071;
  t5083 = t3044*t4980;
  t5092 = t5083 + t5012 + t5013;
  p_output1[0]=1.;
  p_output1[1]=t2517*t2577 + t2609*t2669 + t2711*t2825 + t2899*t2995 + t3093*t3251 + t3273*t3294 - 0.03875*(t2984*t3093 + t2928*t3273 + 4.e-6*t2899*t3312) + 0.14871*(4.e-6*t2984*t3093 + 4.e-6*t3273*t3312 + t2899*t3332) + 0.80321*(-4.e-6*t2899*t2984 - 1.*t2984*t3273 + t3093*t3377) + t2096*t240*t74 - 1.*t2245*t2458*t74;
  p_output1[2]=-1.*t2096*t2245*t2711 - 1.*t240*t2458*t2711 + t3423 + t3439 + t3475 + t3493 + t3503 + t3514 + t3536 + t3543;
  p_output1[3]=t3423 + t3439 + t3475 + t3493 + t3503 + t3514 + t3536 + t3543 - 1.*t240*t2711*t3556 + t2245*t2711*t3565;
  p_output1[4]=t3438*t3594 + t3605*t3613 + t2995*t3625 + t3251*t3645 + t3294*t3657 - 0.03875*(4.e-6*t3312*t3625 + t2984*t3645 + t2928*t3657) + 0.80321*(-4.e-6*t2984*t3625 + t3377*t3645 - 1.*t2984*t3657) + 0.14871*(t3332*t3625 + 4.e-6*t2984*t3645 + 4.e-6*t3312*t3657) + t3573*t74;
  p_output1[5]=t3723*t3731 + t3748*t3756 + 0.14871*(-4.e-6*t2984*t3723 - 1.6e-11*t2984*t3748 + 4.e-6*t2928*t3771) - 0.03875*(-1.*t2984*t3723 - 4.e-6*t2984*t3748 + t2928*t3771) + 0.80321*(-1.*t2928*t3723 - 4.e-6*t2928*t3748 - 1.000000000016*t2984*t3771) + t3771*t3783;
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=-1.*t2711*t2825*t3846 + t2096*t3848 + t2458*t3856 + t2577*t3863 + t2669*t3872 + t2995*t3880 + t3251*t3892 + t3294*t3906 - 0.03875*(4.e-6*t3312*t3880 + t2984*t3892 + t2928*t3906) + 0.80321*(-4.e-6*t2984*t3880 + t3377*t3892 - 1.*t2984*t3906) + 0.14871*(t3332*t3880 + 4.e-6*t2984*t3892 + 4.e-6*t3312*t3906);
  p_output1[9]=-1.*t2096*t240*t2711*t3840 + t2245*t2458*t2711*t3840 + t2577*t3961 + t2669*t3983 + t2995*t4014 + t3251*t4031 + t3294*t4046 - 0.03875*(4.e-6*t3312*t4014 + t2984*t4031 + t2928*t4046) + 0.80321*(-4.e-6*t2984*t4014 + t3377*t4031 - 1.*t2984*t4046) + 0.14871*(t3332*t4014 + 4.e-6*t2984*t4031 + 4.e-6*t3312*t4046) + t2825*t3840*t74;
  p_output1[10]=t2096*t4125 + t2458*t4129 + t2577*t4140 + t2669*t4151 + t2995*t4165 + t3251*t4190 + t3294*t4207 - 0.03875*(4.e-6*t3312*t4165 + t2984*t4190 + t2928*t4207) + 0.80321*(-4.e-6*t2984*t4165 + t3377*t4190 - 1.*t2984*t4207) + 0.14871*(t3332*t4165 + 4.e-6*t2984*t4190 + 4.e-6*t3312*t4207);
  p_output1[11]=t3556*t4129 + t3565*t4275 + t2577*t4281 + t2669*t4286 + t2995*t4292 + t3251*t4307 + t3294*t4322 - 0.03875*(4.e-6*t3312*t4292 + t2984*t4307 + t2928*t4322) + 0.80321*(-4.e-6*t2984*t4292 + t3377*t4307 - 1.*t2984*t4322) + 0.14871*(t3332*t4292 + 4.e-6*t2984*t4307 + 4.e-6*t3312*t4322);
  p_output1[12]=-1.*t2711*t3573*t3840 + t3594*t4286 + t3613*t4373 + t2995*t4388 + t3251*t4396 + t3294*t4410 - 0.03875*(4.e-6*t3312*t4388 + t2984*t4396 + t2928*t4410) + 0.80321*(-4.e-6*t2984*t4388 + t3377*t4396 - 1.*t2984*t4410) + 0.14871*(t3332*t4388 + 4.e-6*t2984*t4396 + 4.e-6*t3312*t4410);
  p_output1[13]=t3731*t4465 + t3756*t4477 + t3783*t4485 + 0.14871*(-4.e-6*t2984*t4465 - 1.6e-11*t2984*t4477 + 4.e-6*t2928*t4485) + 0.80321*(-1.*t2928*t4465 - 4.e-6*t2928*t4477 - 1.000000000016*t2984*t4485) - 0.03875*(t2928*t4485 + t4514 + t4515);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-1.*t2711*t2825*t3840 + t2096*t4129 + t2458*t4275 + t2577*t4286 + t2669*t4373 + t3294*t4465 + t2995*t4477 + t3251*t4485 + 0.14871*(4.e-6*t3312*t4465 + t3332*t4477 + 4.e-6*t2984*t4485) - 0.03875*(t2928*t4465 + 4.e-6*t3312*t4477 + t2984*t4485) + 0.80321*(t3377*t4485 + t4514 + t4515);
  p_output1[17]=t2096*t240*t2711*t3846 - 1.*t2245*t2458*t2711*t3846 + t2577*t4688 + t2669*t4694 + t2995*t4711 + t3251*t4731 + t3294*t4742 - 0.03875*(4.e-6*t3312*t4711 + t2984*t4731 + t2928*t4742) + 0.80321*(-4.e-6*t2984*t4711 + t3377*t4731 - 1.*t2984*t4742) + 0.14871*(t3332*t4711 + 4.e-6*t2984*t4731 + 4.e-6*t3312*t4742) - 1.*t2825*t3846*t74;
  p_output1[18]=t2096*t3856 + t2458*t4782 + t2577*t4791 + t2669*t4799 + t2995*t4812 + t3251*t4828 + t3294*t4837 - 0.03875*(4.e-6*t3312*t4812 + t2984*t4828 + t2928*t4837) + 0.80321*(-4.e-6*t2984*t4812 + t3377*t4828 - 1.*t2984*t4837) + 0.14871*(t3332*t4812 + 4.e-6*t2984*t4828 + 4.e-6*t3312*t4837);
  p_output1[19]=t3556*t4782 + t3565*t4893 + t2577*t4898 + t2669*t4904 + t2995*t4909 + t3251*t4919 + t3294*t4929 - 0.03875*(4.e-6*t3312*t4909 + t2984*t4919 + t2928*t4929) + 0.80321*(-4.e-6*t2984*t4909 + t3377*t4919 - 1.*t2984*t4929) + 0.14871*(t3332*t4909 + 4.e-6*t2984*t4919 + 4.e-6*t3312*t4929);
  p_output1[20]=t2711*t3573*t3846 + t3594*t4904 + t3613*t4980 + t2995*t4989 + t3251*t5000 + t3294*t5016 - 0.03875*(4.e-6*t3312*t4989 + t2984*t5000 + t2928*t5016) + 0.80321*(-4.e-6*t2984*t4989 + t3377*t5000 - 1.*t2984*t5016) + 0.14871*(t3332*t4989 + 4.e-6*t2984*t5000 + 4.e-6*t3312*t5016);
  p_output1[21]=t3731*t5074 + t3756*t5081 + t3783*t5092 + 0.14871*(-4.e-6*t2984*t5074 - 1.6e-11*t2984*t5081 + 4.e-6*t2928*t5092) - 0.03875*(-1.*t2984*t5074 - 4.e-6*t2984*t5081 + t2928*t5092) + 0.80321*(-1.*t2928*t5074 - 4.e-6*t2928*t5081 - 1.000000000016*t2984*t5092);
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

#include "J_h_FlFoot_ParallelStance2.hh"

namespace ParallelStance2
{

void J_h_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
