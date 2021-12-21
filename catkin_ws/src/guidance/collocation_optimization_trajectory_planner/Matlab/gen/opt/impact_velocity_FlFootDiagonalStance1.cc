/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:10:16 GMT+01:00
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
  double t238;
  double t83;
  double t176;
  double t342;
  double t273;
  double t287;
  double t362;
  double t601;
  double t614;
  double t617;
  double t10;
  double t336;
  double t392;
  double t410;
  double t1271;
  double t1286;
  double t1291;
  double t1314;
  double t1455;
  double t1457;
  double t1558;
  double t1595;
  double t1829;
  double t1833;
  double t1897;
  double t1931;
  double t912;
  double t950;
  double t957;
  double t985;
  double t2122;
  double t2612;
  double t2972;
  double t3058;
  double t3097;
  double t3099;
  double t3101;
  double t3109;
  double t2610;
  double t2657;
  double t2723;
  double t2729;
  double t3159;
  double t3160;
  double t3168;
  double t3187;
  double t3196;
  double t3260;
  double t3702;
  double t3719;
  double t3734;
  double t3783;
  double t3787;
  double t3794;
  double t1079;
  double t1306;
  double t1318;
  double t1387;
  double t1686;
  double t1714;
  double t1758;
  double t1954;
  double t1957;
  double t1967;
  double t1991;
  double t2000;
  double t2002;
  double t3861;
  double t3881;
  double t3886;
  double t3831;
  double t3834;
  double t3836;
  double t3906;
  double t3908;
  double t3920;
  double t2206;
  double t2218;
  double t3760;
  double t3796;
  double t3803;
  double t3804;
  double t3805;
  double t3811;
  double t3813;
  double t3815;
  double t3823;
  double t3829;
  double t3854;
  double t3901;
  double t3933;
  double t3950;
  double t3953;
  double t3962;
  double t3975;
  double t3985;
  double t3994;
  double t4005;
  double t4013;
  double t4030;
  double t4042;
  double t4078;
  double t4083;
  double t4087;
  double t4099;
  double t4102;
  double t3739;
  double t3752;
  double t3765;
  double t4235;
  double t4236;
  double t4238;
  double t4242;
  double t4243;
  double t4245;
  double t4267;
  double t4268;
  double t4270;
  double t4274;
  double t4324;
  double t4328;
  double t4340;
  double t4341;
  double t4278;
  double t4281;
  double t4296;
  double t4301;
  double t4417;
  double t4247;
  double t4253;
  double t4256;
  double t4259;
  double t4454;
  double t4461;
  double t4466;
  double t4479;
  double t4484;
  double t4491;
  double t4506;
  double t4508;
  double t4510;
  double t4516;
  double t4543;
  double t4544;
  double t4545;
  double t4546;
  double t4522;
  double t4524;
  double t4533;
  double t4534;
  double t4632;
  double t4631;
  double t4634;
  double t4635;
  double t4642;
  double t4645;
  double t4652;
  double t4658;
  double t4659;
  double t4674;
  double t4685;
  double t4701;
  double t4703;
  double t4710;
  double t4712;
  double t4723;
  double t4735;
  double t4767;
  double t4769;
  double t4774;
  double t4775;
  double t4749;
  double t4755;
  double t4759;
  double t4762;
  double t4864;
  double t4876;
  double t4877;
  double t4880;
  double t4885;
  double t4887;
  double t4896;
  double t4904;
  double t4908;
  double t4915;
  double t4919;
  double t4922;
  double t4948;
  double t4951;
  double t4954;
  double t4927;
  double t4935;
  double t4940;
  double t4959;
  double t4963;
  double t4971;
  double t4111;
  double t4118;
  double t4144;
  double t4167;
  double t5076;
  double t5083;
  double t5087;
  double t5096;
  double t5097;
  double t5100;
  double t5102;
  double t5116;
  double t5126;
  double t5133;
  double t5105;
  double t5107;
  double t5109;
  double t5140;
  double t5144;
  double t5152;
  double t88;
  double t218;
  double t225;
  double t521;
  double t554;
  double t555;
  double t630;
  double t748;
  double t814;
  double t5221;
  double t5230;
  double t5240;
  double t5268;
  double t5271;
  double t5277;
  double t5286;
  double t5297;
  double t5300;
  double t5304;
  double t5306;
  double t5246;
  double t5248;
  double t5249;
  double t5251;
  double t2786;
  double t2847;
  double t2920;
  double t3111;
  double t3114;
  double t3115;
  double t3281;
  double t3282;
  double t3283;
  double t5382;
  double t5384;
  double t5385;
  double t5389;
  double t5358;
  double t5359;
  double t5370;
  double t5371;
  double t5402;
  double t5405;
  double t5462;
  double t5469;
  double t5479;
  double t5484;
  double t5495;
  double t5496;
  double t5511;
  double t5517;
  double t5521;
  double t5523;
  double t5542;
  double t5543;
  double t5547;
  double t5550;
  double t5529;
  double t5533;
  double t5536;
  double t5540;
  double t5602;
  double t5603;
  double t5608;
  double t5614;
  double t5618;
  double t5624;
  double t5631;
  double t5632;
  double t5654;
  double t5686;
  double t5700;
  double t5642;
  double t5646;
  double t5648;
  double t5715;
  double t5720;
  double t5724;
  double t5790;
  double t5791;
  double t5800;
  double t5812;
  double t5814;
  double t5825;
  double t5830;
  double t5843;
  double t5844;
  double t5848;
  double t5834;
  double t5837;
  double t5839;
  double t5851;
  double t5864;
  double t5865;
  double t5952;
  double t5958;
  double t5959;
  double t5984;
  double t5985;
  double t5987;
  double t6010;
  double t6021;
  double t6025;
  double t6029;
  double t5966;
  double t5972;
  double t5977;
  double t5980;
  double t6114;
  double t6115;
  double t6116;
  double t6119;
  double t6095;
  double t6103;
  double t6105;
  double t6107;
  double t6129;
  double t6131;
  double t5432;
  double t5433;
  t238 = Cos(var1[4]);
  t83 = Cos(var1[7]);
  t176 = Sin(var1[7]);
  t342 = Cos(var1[5]);
  t273 = Cos(var1[6]);
  t287 = Sin(var1[5]);
  t362 = Sin(var1[6]);
  t601 = t238*t342*t273;
  t614 = -1.*t238*t287*t362;
  t617 = t601 + t614;
  t10 = Sin(var1[4]);
  t336 = -1.*t238*t273*t287;
  t392 = -1.*t238*t342*t362;
  t410 = t336 + t392;
  t1271 = Cos(var1[8]);
  t1286 = -1.*t1271;
  t1291 = 1. + t1286;
  t1314 = Sin(var1[8]);
  t1455 = -1.*t83*t10;
  t1457 = -4.e-6*t83*t410;
  t1558 = -1.000000000016*t617*t176;
  t1595 = t1455 + t1457 + t1558;
  t1829 = t83*t617;
  t1833 = -1.*t10*t176;
  t1897 = -4.e-6*t410*t176;
  t1931 = t1829 + t1833 + t1897;
  t912 = 4.e-6*t83*t617;
  t950 = -4.e-6*t10*t176;
  t957 = -1.6e-11*t410*t176;
  t985 = t912 + t950 + t957;
  t2122 = -1. + t1271;
  t2612 = -1. + t83;
  t2972 = 4.e-6*t2612*t10;
  t3058 = 1.6e-11*t2612;
  t3097 = 1. + t3058;
  t3099 = t3097*t410;
  t3101 = 4.e-6*t617*t176;
  t3109 = t2972 + t3099 + t3101;
  t2610 = t83*t10;
  t2657 = 4.e-6*t2612*t410;
  t2723 = t617*t176;
  t2729 = t2610 + t2657 + t2723;
  t3159 = -1.*t83;
  t3160 = 1. + t3159;
  t3168 = -1.000000000016*t3160;
  t3187 = 1. + t3168;
  t3196 = t3187*t617;
  t3260 = t3196 + t1833 + t1897;
  t3702 = -1.*t273;
  t3719 = 1. + t3702;
  t3734 = 0.15121*t3719;
  t3783 = -1.*t238*t342*t273;
  t3787 = t238*t287*t362;
  t3794 = t3783 + t3787;
  t1079 = -1.284e-8*var1[8];
  t1306 = -1.5499600000248e-7*t1291;
  t1318 = 2.012840000032e-6*t1314;
  t1387 = t1079 + t1306 + t1318;
  t1686 = 0.503210000016051*t1291;
  t1714 = 0.03874900000062*t1314;
  t1758 = t1686 + t1714;
  t1954 = 5.136e-14*var1[8];
  t1957 = -0.03874900000062*t1291;
  t1967 = 0.503210000008*t1314;
  t1991 = t1954 + t1957 + t1967;
  t2000 = -1.000000000016*t1291;
  t2002 = 1. + t2000;
  t3861 = t3187*t410;
  t3881 = -4.e-6*t3794*t176;
  t3886 = t3861 + t3881;
  t3831 = t3097*t3794;
  t3834 = 4.e-6*t410*t176;
  t3836 = t3831 + t3834;
  t3906 = 4.e-6*t2612*t3794;
  t3908 = t410*t176;
  t3920 = t3906 + t3908;
  t2206 = 1.6e-11*t2122;
  t2218 = 1. + t2206;
  t3760 = 0.15121*t362;
  t3796 = -1.2484e-7*var1[7];
  t3803 = -1.5499600000248e-7*t3160;
  t3804 = 1.124840000016e-6*t176;
  t3805 = t3796 + t3803 + t3804;
  t3811 = t3794*t3805;
  t3813 = 0.281210000008499*t3160;
  t3815 = 0.03874900000062*t176;
  t3823 = t3813 + t3815;
  t3829 = t410*t3823;
  t3854 = t3836*t1387;
  t3901 = t3886*t1758;
  t3933 = t3920*t1991;
  t3950 = t2002*t3886;
  t3953 = -4.e-6*t3836*t1314;
  t3962 = -1.*t3920*t1314;
  t3975 = t3950 + t3953 + t3962;
  t3985 = 0.80321*t3975;
  t3994 = t2218*t3836;
  t4005 = 4.e-6*t2122*t3920;
  t4013 = 4.e-6*t3886*t1314;
  t4030 = t3994 + t4005 + t4013;
  t4042 = 0.14871*t4030;
  t4078 = 4.e-6*t2122*t3836;
  t4083 = t1271*t3920;
  t4087 = t3886*t1314;
  t4099 = t4078 + t4083 + t4087;
  t4102 = -0.03875*t4099;
  t3739 = -0.15121*t362;
  t3752 = t3734 + t3739;
  t3765 = t3734 + t3760;
  t4235 = t273*t10*t287;
  t4236 = t342*t10*t362;
  t4238 = t4235 + t4236;
  t4242 = -1.*t342*t273*t10;
  t4243 = t10*t287*t362;
  t4245 = t4242 + t4243;
  t4267 = 4.e-6*t238*t2612;
  t4268 = t3097*t4238;
  t4270 = 4.e-6*t4245*t176;
  t4274 = t4267 + t4268 + t4270;
  t4324 = t238*t83;
  t4328 = 4.e-6*t2612*t4238;
  t4340 = t4245*t176;
  t4341 = t4324 + t4328 + t4340;
  t4278 = t3187*t4245;
  t4281 = -1.*t238*t176;
  t4296 = -4.e-6*t4238*t176;
  t4301 = t4278 + t4281 + t4296;
  t4417 = Sin(var1[3]);
  t4247 = 4.9936e-13*var1[7];
  t4253 = -0.03874900000062*t3160;
  t4256 = 0.281210000004*t176;
  t4259 = t4247 + t4253 + t4256;
  t4454 = -1.*t238*t273*t4417*t287;
  t4461 = -1.*t238*t342*t4417*t362;
  t4466 = t4454 + t4461;
  t4479 = t238*t342*t273*t4417;
  t4484 = -1.*t238*t4417*t287*t362;
  t4491 = t4479 + t4484;
  t4506 = 4.e-6*t2612*t4417*t10;
  t4508 = t3097*t4466;
  t4510 = 4.e-6*t4491*t176;
  t4516 = t4506 + t4508 + t4510;
  t4543 = t83*t4417*t10;
  t4544 = 4.e-6*t2612*t4466;
  t4545 = t4491*t176;
  t4546 = t4543 + t4544 + t4545;
  t4522 = t3187*t4491;
  t4524 = -1.*t4417*t10*t176;
  t4533 = -4.e-6*t4466*t176;
  t4534 = t4522 + t4524 + t4533;
  t4632 = Cos(var1[3]);
  t4631 = -1.*t342*t4417;
  t4634 = -1.*t4632*t10*t287;
  t4635 = t4631 + t4634;
  t4642 = t4632*t342*t10;
  t4645 = -1.*t4417*t287;
  t4652 = t4642 + t4645;
  t4658 = t273*t4635;
  t4659 = -1.*t4652*t362;
  t4674 = t4658 + t4659;
  t4685 = t273*t4652;
  t4701 = t4635*t362;
  t4703 = t4685 + t4701;
  t4710 = -4.e-6*t4632*t238*t2612;
  t4712 = t3097*t4674;
  t4723 = 4.e-6*t4703*t176;
  t4735 = t4710 + t4712 + t4723;
  t4767 = -1.*t4632*t238*t83;
  t4769 = 4.e-6*t2612*t4674;
  t4774 = t4703*t176;
  t4775 = t4767 + t4769 + t4774;
  t4749 = t3187*t4703;
  t4755 = t4632*t238*t176;
  t4759 = -4.e-6*t4674*t176;
  t4762 = t4749 + t4755 + t4759;
  t4864 = -1.*t342*t4417*t10;
  t4876 = -1.*t4632*t287;
  t4877 = t4864 + t4876;
  t4880 = t4632*t342;
  t4885 = -1.*t4417*t10*t287;
  t4887 = t4880 + t4885;
  t4896 = t273*t4877;
  t4904 = -1.*t4887*t362;
  t4908 = t4896 + t4904;
  t4915 = t273*t4887;
  t4919 = t4877*t362;
  t4922 = t4915 + t4919;
  t4948 = t3187*t4922;
  t4951 = -4.e-6*t4908*t176;
  t4954 = t4948 + t4951;
  t4927 = t3097*t4908;
  t4935 = 4.e-6*t4922*t176;
  t4940 = t4927 + t4935;
  t4959 = 4.e-6*t2612*t4908;
  t4963 = t4922*t176;
  t4971 = t4959 + t4963;
  t4111 = -0.15121*t273;
  t4118 = t4111 + t3760;
  t4144 = 0.15121*t273;
  t4167 = t4144 + t3760;
  t5076 = t342*t4417*t10;
  t5083 = t4632*t287;
  t5087 = t5076 + t5083;
  t5096 = -1.*t273*t5087;
  t5097 = t5096 + t4904;
  t5100 = -1.*t5087*t362;
  t5102 = t4915 + t5100;
  t5116 = t3187*t5102;
  t5126 = -4.e-6*t5097*t176;
  t5133 = t5116 + t5126;
  t5105 = t3097*t5097;
  t5107 = 4.e-6*t5102*t176;
  t5109 = t5105 + t5107;
  t5140 = 4.e-6*t2612*t5097;
  t5144 = t5102*t176;
  t5152 = t5140 + t5144;
  t88 = 0.281210000004*t83;
  t218 = -0.03874900000062*t176;
  t225 = 4.9936e-13 + t88 + t218;
  t521 = 1.124840000016e-6*t83;
  t554 = -1.5499600000248e-7*t176;
  t555 = -1.2484e-7 + t521 + t554;
  t630 = 0.03874900000062*t83;
  t748 = 0.281210000008499*t176;
  t814 = t630 + t748;
  t5221 = t273*t5087;
  t5230 = t4887*t362;
  t5240 = t5221 + t5230;
  t5268 = t238*t83*t4417;
  t5271 = -4.e-6*t83*t5102;
  t5277 = -1.000000000016*t5240*t176;
  t5286 = t5268 + t5271 + t5277;
  t5297 = t83*t5240;
  t5300 = t238*t4417*t176;
  t5304 = -4.e-6*t5102*t176;
  t5306 = t5297 + t5300 + t5304;
  t5246 = 4.e-6*t83*t5240;
  t5248 = 4.e-6*t238*t4417*t176;
  t5249 = -1.6e-11*t5102*t176;
  t5251 = t5246 + t5248 + t5249;
  t2786 = 0.503210000008*t1271;
  t2847 = -0.03874900000062*t1314;
  t2920 = 5.136e-14 + t2786 + t2847;
  t3111 = 2.012840000032e-6*t1271;
  t3114 = -1.5499600000248e-7*t1314;
  t3115 = -1.284e-8 + t3111 + t3114;
  t3281 = 0.03874900000062*t1271;
  t3282 = 0.503210000016051*t1314;
  t3283 = t3281 + t3282;
  t5382 = -4.e-6*t238*t2612*t4417;
  t5384 = t3097*t5102;
  t5385 = 4.e-6*t5240*t176;
  t5389 = t5382 + t5384 + t5385;
  t5358 = -1.*t238*t83*t4417;
  t5359 = 4.e-6*t2612*t5102;
  t5370 = t5240*t176;
  t5371 = t5358 + t5359 + t5370;
  t5402 = t3187*t5240;
  t5405 = t5402 + t5300 + t5304;
  t5462 = t4632*t238*t273*t287;
  t5469 = t4632*t238*t342*t362;
  t5479 = t5462 + t5469;
  t5484 = -1.*t4632*t238*t342*t273;
  t5495 = t4632*t238*t287*t362;
  t5496 = t5484 + t5495;
  t5511 = -4.e-6*t4632*t2612*t10;
  t5517 = t3097*t5479;
  t5521 = 4.e-6*t5496*t176;
  t5523 = t5511 + t5517 + t5521;
  t5542 = -1.*t4632*t83*t10;
  t5543 = 4.e-6*t2612*t5479;
  t5547 = t5496*t176;
  t5550 = t5542 + t5543 + t5547;
  t5529 = t3187*t5496;
  t5533 = t4632*t10*t176;
  t5536 = -4.e-6*t5479*t176;
  t5540 = t5529 + t5533 + t5536;
  t5602 = t342*t4417;
  t5603 = t4632*t10*t287;
  t5608 = t5602 + t5603;
  t5614 = -1.*t5608*t362;
  t5618 = t4685 + t5614;
  t5624 = t273*t5608;
  t5631 = t4652*t362;
  t5632 = t5624 + t5631;
  t5654 = t3187*t5632;
  t5686 = -4.e-6*t5618*t176;
  t5700 = t5654 + t5686;
  t5642 = t3097*t5618;
  t5646 = 4.e-6*t5632*t176;
  t5648 = t5642 + t5646;
  t5715 = 4.e-6*t2612*t5618;
  t5720 = t5632*t176;
  t5724 = t5715 + t5720;
  t5790 = -1.*t4632*t342*t10;
  t5791 = t4417*t287;
  t5800 = t5790 + t5791;
  t5812 = -1.*t273*t5800;
  t5814 = t5812 + t5614;
  t5825 = -1.*t5800*t362;
  t5830 = t5624 + t5825;
  t5843 = t3187*t5830;
  t5844 = -4.e-6*t5814*t176;
  t5848 = t5843 + t5844;
  t5834 = t3097*t5814;
  t5837 = 4.e-6*t5830*t176;
  t5839 = t5834 + t5837;
  t5851 = 4.e-6*t2612*t5814;
  t5864 = t5830*t176;
  t5865 = t5851 + t5864;
  t5952 = t273*t5800;
  t5958 = t5608*t362;
  t5959 = t5952 + t5958;
  t5984 = -4.e-6*t83*t5830;
  t5985 = -1.000000000016*t5959*t176;
  t5987 = t4767 + t5984 + t5985;
  t6010 = t83*t5959;
  t6021 = -1.*t4632*t238*t176;
  t6025 = -4.e-6*t5830*t176;
  t6029 = t6010 + t6021 + t6025;
  t5966 = 4.e-6*t83*t5959;
  t5972 = -4.e-6*t4632*t238*t176;
  t5977 = -1.6e-11*t5830*t176;
  t5980 = t5966 + t5972 + t5977;
  t6114 = 4.e-6*t4632*t238*t2612;
  t6115 = t3097*t5830;
  t6116 = 4.e-6*t5959*t176;
  t6119 = t6114 + t6115 + t6116;
  t6095 = t4632*t238*t83;
  t6103 = 4.e-6*t2612*t5830;
  t6105 = t5959*t176;
  t6107 = t6095 + t6103 + t6105;
  t6129 = t3187*t5959;
  t6131 = t6129 + t6021 + t6025;
  t5432 = -4.e-6*t5389*t1314;
  t5433 = -1.*t5371*t1314;
  p_output1[0]=var2[0] + (t10*t287*t3752 - 1.*t10*t342*t3765 + t3805*t4238 + t3823*t4245 + t238*t4259 + t1387*t4274 + t1758*t4301 + t1991*t4341 - 0.03875*(4.e-6*t2122*t4274 + t1314*t4301 + t1271*t4341) + 0.80321*(-4.e-6*t1314*t4274 + t2002*t4301 - 1.*t1314*t4341) + 0.14871*(t2218*t4274 + 4.e-6*t1314*t4301 + 4.e-6*t2122*t4341))*var2[4] + (-1.*t238*t342*t3752 - 1.*t238*t287*t3765 + t3811 + t3829 + t3854 + t3901 + t3933 + t3985 + t4042 + t4102)*var2[5] + (t3811 + t3829 + t3854 + t3901 + t3933 + t3985 + t4042 + t4102 - 1.*t238*t287*t4118 + t238*t342*t4167)*var2[6] + (t1595*t1758 + t1931*t1991 + t10*t225 + t410*t555 + t617*t814 + t1387*t985 + 0.80321*(-1.*t1314*t1931 + t1595*t2002 - 4.e-6*t1314*t985) - 0.03875*(t1314*t1595 + t1271*t1931 + 4.e-6*t2122*t985) + 0.14871*(4.e-6*t1314*t1595 + 4.e-6*t1931*t2122 + t2218*t985))*var2[7] + (t2729*t2920 + t3109*t3115 + 0.14871*(-4.e-6*t1314*t2729 - 1.6e-11*t1314*t3109 + 4.e-6*t1271*t3260) - 0.03875*(-1.*t1314*t2729 - 4.e-6*t1314*t3109 + t1271*t3260) + 0.80321*(-1.*t1271*t2729 - 4.e-6*t1271*t3109 - 1.000000000016*t1314*t3260) + t3260*t3283)*var2[8];
  p_output1[1]=var2[1] + (-1.*t238*t4259*t4632 + t3752*t4635 + t3765*t4652 + t3805*t4674 + t3823*t4703 + t1387*t4735 + t1758*t4762 + t1991*t4775 - 0.03875*(4.e-6*t2122*t4735 + t1314*t4762 + t1271*t4775) + 0.80321*(-4.e-6*t1314*t4735 + t2002*t4762 - 1.*t1314*t4775) + 0.14871*(t2218*t4735 + 4.e-6*t1314*t4762 + 4.e-6*t2122*t4775))*var2[3] + (-1.*t238*t287*t3752*t4417 + t238*t342*t3765*t4417 + t10*t4259*t4417 + t3805*t4466 + t3823*t4491 + t1387*t4516 + t1758*t4534 + t1991*t4546 - 0.03875*(4.e-6*t2122*t4516 + t1314*t4534 + t1271*t4546) + 0.80321*(-4.e-6*t1314*t4516 + t2002*t4534 - 1.*t1314*t4546) + 0.14871*(t2218*t4516 + 4.e-6*t1314*t4534 + 4.e-6*t2122*t4546))*var2[4] + (t3752*t4877 + t3765*t4887 + t3805*t4908 + t3823*t4922 + t1387*t4940 + t1758*t4954 + t1991*t4971 - 0.03875*(4.e-6*t2122*t4940 + t1314*t4954 + t1271*t4971) + 0.80321*(-4.e-6*t1314*t4940 + t2002*t4954 - 1.*t1314*t4971) + 0.14871*(t2218*t4940 + 4.e-6*t1314*t4954 + 4.e-6*t2122*t4971))*var2[5] + (t4118*t4887 + t4167*t5087 + t3805*t5097 + t3823*t5102 + t1387*t5109 + t1758*t5133 + t1991*t5152 - 0.03875*(4.e-6*t2122*t5109 + t1314*t5133 + t1271*t5152) + 0.80321*(-4.e-6*t1314*t5109 + t2002*t5133 - 1.*t1314*t5152) + 0.14871*(t2218*t5109 + 4.e-6*t1314*t5133 + 4.e-6*t2122*t5152))*var2[6] + (-1.*t225*t238*t4417 + t1387*t5251 + t1758*t5286 + t1991*t5306 - 0.03875*(4.e-6*t2122*t5251 + t1314*t5286 + t1271*t5306) + 0.80321*(-4.e-6*t1314*t5251 + t2002*t5286 - 1.*t1314*t5306) + 0.14871*(t2218*t5251 + 4.e-6*t1314*t5286 + 4.e-6*t2122*t5306) + t5102*t555 + t5240*t814)*var2[7] + (t2920*t5371 + t3115*t5389 + t3283*t5405 + 0.14871*(-4.e-6*t1314*t5371 - 1.6e-11*t1314*t5389 + 4.e-6*t1271*t5405) + 0.80321*(-1.*t1271*t5371 - 4.e-6*t1271*t5389 - 1.000000000016*t1314*t5405) - 0.03875*(t1271*t5405 + t5432 + t5433))*var2[8];
  p_output1[2]=var2[2] + (-1.*t238*t4259*t4417 + t3752*t4887 + t3765*t5087 + t3805*t5102 + t3823*t5240 + t1991*t5371 + t1387*t5389 + t1758*t5405 + 0.14871*(4.e-6*t2122*t5371 + t2218*t5389 + 4.e-6*t1314*t5405) - 0.03875*(t1271*t5371 + 4.e-6*t2122*t5389 + t1314*t5405) + 0.80321*(t2002*t5405 + t5432 + t5433))*var2[3] + (t238*t287*t3752*t4632 - 1.*t238*t342*t3765*t4632 - 1.*t10*t4259*t4632 + t3805*t5479 + t3823*t5496 + t1387*t5523 + t1758*t5540 + t1991*t5550 - 0.03875*(4.e-6*t2122*t5523 + t1314*t5540 + t1271*t5550) + 0.80321*(-4.e-6*t1314*t5523 + t2002*t5540 - 1.*t1314*t5550) + 0.14871*(t2218*t5523 + 4.e-6*t1314*t5540 + 4.e-6*t2122*t5550))*var2[4] + (t3752*t4652 + t3765*t5608 + t3805*t5618 + t3823*t5632 + t1387*t5648 + t1758*t5700 + t1991*t5724 - 0.03875*(4.e-6*t2122*t5648 + t1314*t5700 + t1271*t5724) + 0.80321*(-4.e-6*t1314*t5648 + t2002*t5700 - 1.*t1314*t5724) + 0.14871*(t2218*t5648 + 4.e-6*t1314*t5700 + 4.e-6*t2122*t5724))*var2[5] + (t4118*t5608 + t4167*t5800 + t3805*t5814 + t3823*t5830 + t1387*t5839 + t1758*t5848 + t1991*t5865 - 0.03875*(4.e-6*t2122*t5839 + t1314*t5848 + t1271*t5865) + 0.80321*(-4.e-6*t1314*t5839 + t2002*t5848 - 1.*t1314*t5865) + 0.14871*(t2218*t5839 + 4.e-6*t1314*t5848 + 4.e-6*t2122*t5865))*var2[6] + (t225*t238*t4632 + t555*t5830 + t1387*t5980 + t1758*t5987 + t1991*t6029 - 0.03875*(4.e-6*t2122*t5980 + t1314*t5987 + t1271*t6029) + 0.80321*(-4.e-6*t1314*t5980 + t2002*t5987 - 1.*t1314*t6029) + 0.14871*(t2218*t5980 + 4.e-6*t1314*t5987 + 4.e-6*t2122*t6029) + t5959*t814)*var2[7] + (t2920*t6107 + t3115*t6119 + t3283*t6131 + 0.14871*(-4.e-6*t1314*t6107 - 1.6e-11*t1314*t6119 + 4.e-6*t1271*t6131) - 0.03875*(-1.*t1314*t6107 - 4.e-6*t1314*t6119 + t1271*t6131) + 0.80321*(-1.*t1271*t6107 - 4.e-6*t1271*t6119 - 1.000000000016*t1314*t6131))*var2[8];
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

#include "impact_velocity_FlFootDiagonalStance1.hh"

namespace DiagonalStance1
{

void impact_velocity_FlFootDiagonalStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
