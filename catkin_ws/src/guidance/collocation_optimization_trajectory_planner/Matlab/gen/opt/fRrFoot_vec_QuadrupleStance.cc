/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 17:51:14 GMT+01:00
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
  double t1069;
  double t1438;
  double t1727;
  double t5;
  double t24;
  double t254;
  double t2407;
  double t710;
  double t2445;
  double t1905;
  double t2272;
  double t2516;
  double t2587;
  double t2631;
  double t2811;
  double t2724;
  double t2729;
  double t2744;
  double t2747;
  double t2772;
  double t2776;
  double t2798;
  double t2913;
  double t2923;
  double t2925;
  double t2946;
  double t2954;
  double t595;
  double t3280;
  double t3408;
  double t3281;
  double t3293;
  double t3297;
  double t3326;
  double t3333;
  double t3343;
  double t3351;
  double t3356;
  double t3358;
  double t3380;
  double t3245;
  double t3424;
  double t3450;
  double t3493;
  double t3517;
  double t3532;
  double t3537;
  double t3540;
  double t3546;
  double t3569;
  double t3592;
  double t2681;
  double t2693;
  double t2828;
  double t2893;
  double t1002;
  double t3052;
  double t3156;
  double t3202;
  double t3723;
  double t3746;
  double t3760;
  double t3771;
  double t3777;
  double t3787;
  double t3828;
  double t3852;
  double t3853;
  double t3894;
  double t3896;
  double t3910;
  double t3918;
  double t3921;
  double t3929;
  double t3931;
  double t3932;
  double t3674;
  double t4162;
  double t4161;
  double t4171;
  double t4173;
  double t4194;
  double t4196;
  double t4200;
  double t4206;
  double t4223;
  double t4224;
  double t4239;
  double t4245;
  double t4259;
  double t4283;
  double t4309;
  double t4315;
  double t4319;
  double t4334;
  double t4354;
  double t4373;
  double t4472;
  double t4531;
  double t4538;
  double t4552;
  double t4604;
  double t4609;
  double t4630;
  double t4638;
  double t3654;
  double t3662;
  double t3664;
  double t3388;
  double t3618;
  double t3620;
  double t2662;
  double t2800;
  double t2980;
  double t3048;
  double t3651;
  double t3692;
  double t3705;
  double t4841;
  double t3965;
  double t3979;
  double t3995;
  double t3919;
  double t3948;
  double t3951;
  double t4944;
  double t3767;
  double t3835;
  double t3870;
  double t3878;
  double t3959;
  double t4005;
  double t4011;
  double t4674;
  double t4700;
  double t4735;
  double t4554;
  double t4652;
  double t4660;
  double t4205;
  double t4285;
  double t4375;
  double t4388;
  double t4671;
  double t4771;
  double t4780;
  double t4842;
  double t4907;
  double t4909;
  double t4947;
  double t4950;
  double t4957;
  double t4986;
  double t4987;
  double t4992;
  double t5000;
  double t5005;
  double t5007;
  double t5025;
  double t5026;
  double t5029;
  double t5045;
  double t5047;
  double t5048;
  double t3880;
  double t4066;
  double t4075;
  double t5184;
  double t5205;
  double t5210;
  double t5215;
  double t5221;
  double t5226;
  double t5232;
  double t5236;
  double t5242;
  double t5247;
  double t5258;
  double t5264;
  double t5273;
  double t5299;
  double t5306;
  double t5308;
  double t5316;
  double t5317;
  double t5319;
  double t5328;
  double t5331;
  double t5332;
  double t5334;
  double t5337;
  double t5341;
  double t5346;
  double t5348;
  double t5350;
  double t5351;
  double t5355;
  double t5358;
  double t5364;
  double t5367;
  double t5150;
  double t5151;
  double t5154;
  double t5162;
  double t5164;
  double t5187;
  double t5188;
  double t5189;
  double t5193;
  double t5195;
  double t5260;
  double t5336;
  double t5371;
  double t5375;
  double t5386;
  double t5393;
  double t5394;
  double t5395;
  double t5398;
  double t5401;
  double t5402;
  double t5403;
  double t5404;
  double t5407;
  double t5408;
  double t5409;
  double t3054;
  double t3707;
  double t3711;
  double t5436;
  double t5446;
  double t5452;
  double t5454;
  double t5155;
  double t5385;
  double t5412;
  double t5428;
  double t5482;
  double t5483;
  double t5487;
  double t5503;
  double t5505;
  double t5511;
  double t5536;
  double t5537;
  double t5543;
  double t5548;
  double t5555;
  double t5567;
  double t5568;
  double t5434;
  double t5464;
  double t5466;
  double t5553;
  double t5569;
  double t5570;
  double t5582;
  double t5583;
  double t5588;
  double t4437;
  double t4787;
  double t4809;
  double t5471;
  double t5613;
  double t5642;
  double t5737;
  double t5754;
  double t5765;
  double t5907;
  double t5938;
  double t5965;
  double t6000;
  double t6023;
  double t6039;
  double t6370;
  double t6382;
  double t6383;
  double t6386;
  double t6393;
  double t6400;
  double t6403;
  double t6406;
  double t6467;
  double t6468;
  double t6469;
  double t6473;
  double t6503;
  double t6514;
  double t6518;
  double t6524;
  double t6645;
  double t6646;
  double t6652;
  double t6658;
  double t6678;
  double t6682;
  double t6685;
  double t6689;
  t1069 = Cos(var1[17]);
  t1438 = -1.*t1069;
  t1727 = 1. + t1438;
  t5 = Cos(var1[16]);
  t24 = -1.*t5;
  t254 = 1. + t24;
  t2407 = Sin(var1[17]);
  t710 = Sin(var1[16]);
  t2445 = 4.e-6*t2407;
  t1905 = 1.000000000016*t1727;
  t2272 = -7.e-6*t1727;
  t2516 = t2272 + t2445;
  t2587 = -7.e-6*t2516;
  t2631 = -1. + t1905 + t2587;
  t2811 = 4.e-6*t254;
  t2724 = 2.8e-11*t1727;
  t2729 = 4.e-6*t1727;
  t2744 = 7.e-6*t2407;
  t2747 = t2729 + t2744;
  t2772 = -7.e-6*t2747;
  t2776 = -1.*t2407;
  t2798 = t2724 + t2772 + t2776;
  t2913 = -6.5e-11*t1727;
  t2923 = 1. + t2913;
  t2925 = -7.e-6*t2923;
  t2946 = 7.e-6*t1727;
  t2954 = t2925 + t2946 + t2445;
  t595 = -2.8e-11*t254;
  t3280 = -7.e-6*t254;
  t3408 = Cos(var1[15]);
  t3281 = -4.e-6*t710;
  t3293 = t3280 + t3281;
  t3297 = t3293*t2631;
  t3326 = -7.e-6*t710;
  t3333 = t2811 + t3326;
  t3343 = t3333*t2798;
  t3351 = -6.5e-11*t254;
  t3356 = 1. + t3351;
  t3358 = t3356*t2954;
  t3380 = t3297 + t3343 + t3358;
  t3245 = Sin(var1[15]);
  t3424 = -1.000000000016*t254;
  t3450 = 1. + t3424;
  t3493 = t3450*t2631;
  t3517 = -1.*t710;
  t3532 = t595 + t3517;
  t3537 = t3532*t2798;
  t3540 = 4.e-6*t710;
  t3546 = t3280 + t3540;
  t3569 = t3546*t2954;
  t3592 = t3493 + t3537 + t3569;
  t2681 = -1.000000000049*t254;
  t2693 = 1. + t2681;
  t2828 = 7.e-6*t710;
  t2893 = t2811 + t2828;
  t1002 = t595 + t710;
  t3052 = Sin(var1[4]);
  t3156 = Cos(var1[4]);
  t3202 = Cos(var1[5]);
  t3723 = 1.000000000049*t1727;
  t3746 = 4.e-6*t2747;
  t3760 = -1. + t3723 + t3746;
  t3771 = 4.e-6*t2923;
  t3777 = -1. + t1069;
  t3787 = 4.e-6*t3777;
  t3828 = t3771 + t3787 + t2744;
  t3852 = 4.e-6*t2516;
  t3853 = t2724 + t3852 + t2407;
  t3894 = t3532*t3760;
  t3896 = t3546*t3828;
  t3910 = t3450*t3853;
  t3918 = t3894 + t3896 + t3910;
  t3921 = t3333*t3760;
  t3929 = t3356*t3828;
  t3931 = t3293*t3853;
  t3932 = t3921 + t3929 + t3931;
  t3674 = Sin(var1[5]);
  t4162 = -4.e-6*t2407;
  t4161 = 6.5e-11*t1727;
  t4171 = t2272 + t4162;
  t4173 = 7.e-6*t4171;
  t4194 = t3787 + t2744;
  t4196 = 4.e-6*t4194;
  t4200 = -1. + t4161 + t4173 + t4196;
  t4206 = -1. + t3723;
  t4223 = 4.e-6*t4206;
  t4224 = -7.e-6*t2407;
  t4239 = -2.8e-11*t1727;
  t4245 = t4239 + t2407;
  t4259 = 7.e-6*t4245;
  t4283 = t4223 + t3787 + t4224 + t4259;
  t4309 = -1.000000000016*t1727;
  t4315 = 1. + t4309;
  t4319 = 7.e-6*t4315;
  t4334 = t2724 + t2407;
  t4354 = 4.e-6*t4334;
  t4373 = t4319 + t2946 + t4162 + t4354;
  t4472 = t3546*t4200;
  t4531 = t3532*t4283;
  t4538 = t3450*t4373;
  t4552 = t4472 + t4531 + t4538;
  t4604 = t3356*t4200;
  t4609 = t3333*t4283;
  t4630 = t3293*t4373;
  t4638 = t4604 + t4609 + t4630;
  t3654 = t3408*t3380;
  t3662 = t3245*t3592;
  t3664 = t3654 + t3662;
  t3388 = -1.*t3245*t3380;
  t3618 = t3408*t3592;
  t3620 = t3388 + t3618;
  t2662 = t1002*t2631;
  t2800 = t2693*t2798;
  t2980 = t2893*t2954;
  t3048 = t2662 + t2800 + t2980;
  t3651 = t3202*t3620;
  t3692 = -1.*t3664*t3674;
  t3705 = t3651 + t3692;
  t4841 = Cos(var1[3]);
  t3965 = t3245*t3918;
  t3979 = t3408*t3932;
  t3995 = t3965 + t3979;
  t3919 = t3408*t3918;
  t3948 = -1.*t3245*t3932;
  t3951 = t3919 + t3948;
  t4944 = Sin(var1[3]);
  t3767 = t2693*t3760;
  t3835 = t2893*t3828;
  t3870 = t1002*t3853;
  t3878 = t3767 + t3835 + t3870;
  t3959 = t3202*t3951;
  t4005 = -1.*t3995*t3674;
  t4011 = t3959 + t4005;
  t4674 = t3245*t4552;
  t4700 = t3408*t4638;
  t4735 = t4674 + t4700;
  t4554 = t3408*t4552;
  t4652 = -1.*t3245*t4638;
  t4660 = t4554 + t4652;
  t4205 = t2893*t4200;
  t4285 = t2693*t4283;
  t4375 = t1002*t4373;
  t4388 = t4205 + t4285 + t4375;
  t4671 = t3202*t4660;
  t4771 = -1.*t4735*t3674;
  t4780 = t4671 + t4771;
  t4842 = t3202*t3664;
  t4907 = t3620*t3674;
  t4909 = t4842 + t4907;
  t4947 = t3156*t3048;
  t4950 = -1.*t3052*t3705;
  t4957 = t4947 + t4950;
  t4986 = t3202*t3995;
  t4987 = t3951*t3674;
  t4992 = t4986 + t4987;
  t5000 = t3156*t3878;
  t5005 = -1.*t3052*t4011;
  t5007 = t5000 + t5005;
  t5025 = t3202*t4735;
  t5026 = t4660*t3674;
  t5029 = t5025 + t5026;
  t5045 = t3156*t4388;
  t5047 = -1.*t3052*t4780;
  t5048 = t5045 + t5047;
  t3880 = t3878*t3052;
  t4066 = t3156*t4011;
  t4075 = t3880 + t4066;
  t5184 = 7.e-6*t254;
  t5205 = 2.826290000000002e-7*var1[17];
  t5210 = -0.148715*t2923;
  t5215 = -2.18904205e-16*t1727;
  t5221 = t2729 + t4224;
  t5226 = -0.038576*t5221;
  t5232 = -0.80315*t4171;
  t5236 = t2946 + t2445;
  t5242 = -0.5031510000080001*t5236;
  t5247 = -0.038575000014*t4194;
  t5258 = t5205 + t5210 + t5215 + t5226 + t5232 + t5242 + t5247;
  t5264 = 1.1305160000000008e-12*var1[17];
  t5273 = -1.000000000049*t1727;
  t5299 = 1. + t5273;
  t5306 = -0.038576*t5299;
  t5308 = -0.03857500001589017*t1727;
  t5316 = t2724 + t2776;
  t5317 = -0.5031510000080001*t5316;
  t5319 = t3787 + t4224;
  t5328 = -3.367757e-6*t5319;
  t5331 = -0.148715*t2747;
  t5332 = -0.80315*t4245;
  t5334 = t5264 + t5306 + t5308 + t5317 + t5328 + t5331 + t5332;
  t5337 = -1.9784030000000015e-12*var1[17];
  t5341 = -0.80315*t4315;
  t5346 = -0.5031510000160505*t1727;
  t5348 = t4239 + t2776;
  t5350 = -0.038576*t5348;
  t5351 = t2946 + t4162;
  t5355 = -3.367757e-6*t5351;
  t5358 = -0.148715*t2516;
  t5364 = -0.038575000014*t4334;
  t5367 = t5337 + t5341 + t5346 + t5350 + t5355 + t5358 + t5364;
  t5150 = -1.*t3408;
  t5151 = 1. + t5150;
  t5154 = -0.15121*t5151;
  t5162 = -2.7726089999999997e-12*var1[16];
  t5164 = -0.2812110000084994*t254;
  t5187 = t5184 + t3281;
  t5188 = -1.8134809999999998e-6*t5187;
  t5189 = 2.8e-11*t254;
  t5193 = t5189 + t710;
  t5195 = -0.038749000006999997*t5193;
  t5260 = t3546*t5258;
  t5336 = t3532*t5334;
  t5371 = t3450*t5367;
  t5375 = t5162 + t5164 + t5188 + t5195 + t5260 + t5336 + t5371;
  t5386 = 3.9608699999999997e-7*var1[16];
  t5393 = -1.1787626499999999e-16*t254;
  t5394 = t5184 + t3540;
  t5395 = -0.281211000004*t5394;
  t5398 = -1. + t5;
  t5401 = 4.e-6*t5398;
  t5402 = t5401 + t2828;
  t5403 = -0.038749000006999997*t5402;
  t5404 = t3356*t5258;
  t5407 = t3333*t5334;
  t5408 = t3293*t5367;
  t5409 = t5386 + t5393 + t5395 + t5403 + t5404 + t5407 + t5408;
  t3054 = t3048*t3052;
  t3707 = t3156*t3705;
  t3711 = t3054 + t3707;
  t5436 = -0.15121*t3245;
  t5446 = t3408*t5375;
  t5452 = -1.*t3245*t5409;
  t5454 = t5154 + t5436 + t5446 + t5452;
  t5155 = 0.15121*t3245;
  t5385 = t3245*t5375;
  t5412 = t3408*t5409;
  t5428 = t5154 + t5155 + t5385 + t5412;
  t5482 = 1.5843479999999999e-12*var1[16];
  t5483 = -0.03874900000889869*t254;
  t5487 = t5189 + t3517;
  t5503 = -0.281211000004*t5487;
  t5505 = t5401 + t3326;
  t5511 = -1.8134809999999998e-6*t5505;
  t5536 = t2893*t5258;
  t5537 = t2693*t5334;
  t5543 = t1002*t5367;
  t5548 = t5482 + t5483 + t5503 + t5511 + t5536 + t5537 + t5543;
  t5555 = t3202*t5454;
  t5567 = -1.*t5428*t3674;
  t5568 = t5555 + t5567;
  t5434 = t3202*t5428;
  t5464 = t5454*t3674;
  t5466 = t5434 + t5464;
  t5553 = t5548*t3052;
  t5569 = t3156*t5568;
  t5570 = t5553 + t5569;
  t5582 = t3156*t5548;
  t5583 = -1.*t3052*t5568;
  t5588 = t5582 + t5583;
  t4437 = t4388*t3052;
  t4787 = t3156*t4780;
  t4809 = t4437 + t4787;
  t5471 = -1.*t4909*t5466;
  t5613 = t4992*t5466;
  t5642 = t4909*t5466;
  t5737 = -1.*t5466*t5029;
  t5754 = -1.*t4992*t5466;
  t5765 = t5466*t5029;
  t5907 = -1.*t3048*t5548;
  t5938 = t3878*t5548;
  t5965 = t3048*t5548;
  t6000 = -1.*t5548*t4388;
  t6023 = -1.*t3878*t5548;
  t6039 = t5548*t4388;
  t6370 = -1.*t5258*t2954;
  t6382 = -1.*t2798*t5334;
  t6383 = -1.*t2631*t5367;
  t6386 = t6370 + t6382 + t6383;
  t6393 = t5258*t3828;
  t6400 = t3760*t5334;
  t6403 = t3853*t5367;
  t6406 = t6393 + t6400 + t6403;
  t6467 = t5258*t2954;
  t6468 = t2798*t5334;
  t6469 = t2631*t5367;
  t6473 = t6467 + t6468 + t6469;
  t6503 = -1.*t5258*t4200;
  t6514 = -1.*t5334*t4283;
  t6518 = -1.*t5367*t4373;
  t6524 = t6503 + t6514 + t6518;
  t6645 = -1.*t5258*t3828;
  t6646 = -1.*t3760*t5334;
  t6652 = -1.*t3853*t5367;
  t6658 = t6645 + t6646 + t6652;
  t6678 = t5258*t4200;
  t6682 = t5334*t4283;
  t6685 = t5367*t4373;
  t6689 = t6678 + t6682 + t6685;
  p_output1[0]=t3711*var2[0] + t4075*var2[1] + t4809*var2[2];
  p_output1[1]=(t4841*t4909 - 1.*t4944*t4957)*var2[0] + (t4841*t4992 - 1.*t4944*t5007)*var2[1] + (t4841*t5029 - 1.*t4944*t5048)*var2[2];
  p_output1[2]=(t4909*t4944 + t4841*t4957)*var2[0] + (t4944*t4992 + t4841*t5007)*var2[1] + (t4944*t5029 + t4841*t5048)*var2[2];
  p_output1[3]=(t4809*(-1.*t4075*t5570 - 1.*t5007*t5588 + t5754) + t4075*(t4809*t5570 + t5048*t5588 + t5765))*var2[0] + (t4809*(t3711*t5570 + t4957*t5588 + t5642) + t3711*(-1.*t4809*t5570 - 1.*t5048*t5588 + t5737))*var2[1] + (t4075*(t5471 - 1.*t3711*t5570 - 1.*t4957*t5588) + t3711*(t4075*t5570 + t5007*t5588 + t5613))*var2[2];
  p_output1[4]=(t5029*(-1.*t4011*t5568 + t5754 + t6023) + t4992*(t4780*t5568 + t5765 + t6039))*var2[0] + (t5029*(t3705*t5568 + t5642 + t5965) + t4909*(-1.*t4780*t5568 + t5737 + t6000))*var2[1] + (t4992*(t5471 - 1.*t3705*t5568 + t5907) + t4909*(t4011*t5568 + t5613 + t5938))*var2[2];
  p_output1[5]=(t4388*(-1.*t3995*t5428 - 1.*t3951*t5454 + t6023) + t3878*(t4735*t5428 + t4660*t5454 + t6039))*var2[0] + (t4388*(t3664*t5428 + t3620*t5454 + t5965) + t3048*(-1.*t4735*t5428 - 1.*t4660*t5454 + t6000))*var2[1] + (t3878*(-1.*t3664*t5428 - 1.*t3620*t5454 + t5907) + t3048*(t3995*t5428 + t3951*t5454 + t5938))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.15121*t3380 - 0.15121*t3592 + t4388*(-1.*t3918*t5375 - 1.*t3932*t5409 + t6023) + t3878*(t4552*t5375 + t4638*t5409 + t6039))*var2[0] + (-0.15121*t3918 + 0.15121*t3932 + t4388*(t3592*t5375 + t3380*t5409 + t5965) + t3048*(-1.*t4552*t5375 - 1.*t4638*t5409 + t6000))*var2[1] + (-0.15121*t4552 + 0.15121*t4638 + t3878*(-1.*t3592*t5375 - 1.*t3380*t5409 + t5907) + t3048*(t3918*t5375 + t3932*t5409 + t5938))*var2[2];
  p_output1[16]=(-0.038749*t2631 + 0.281211*t2798 + 1.e-6*(t2272 + 7.e-6*t2923 + t4162) - 1.*t4200*t6658 - 1.*t3828*t6689 + 4.e-6*(-1.*t4283*t6658 - 1.*t3760*t6689) + 7.e-6*(t4373*t6658 + t3853*t6689))*var2[0] + (0.281211*t3760 - 0.038749*t3853 + 1.e-6*(t2729 + 4.e-6*(-1. + t4161) + t4224) - 1.*t4200*t6473 - 1.*t2954*t6524 + 7.e-6*(t4373*t6473 + t2631*t6524) + 4.e-6*(-1.*t4283*t6473 - 1.*t2798*t6524))*var2[1] + (0.281211*t4283 - 0.038749*t4373 + 1.e-6*(1. + t2913 - 7.e-6*t4171 + 4.e-6*t5221) - 1.*t3828*t6386 - 1.*t2954*t6406 + 7.e-6*(t3853*t6386 + t2631*t6406) + 4.e-6*(-1.*t3760*t6386 - 1.*t2798*t6406))*var2[2];
  p_output1[17]=-4.051285074010787e-7*var2[0] + 0.3000000410492048*var2[1] - 2.826290000000002e-7*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRrFoot_vec_QuadrupleStance.hh"

namespace QuadrupleStance
{

void fRrFoot_vec_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
