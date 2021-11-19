/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:11:06 GMT+01:00
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
  double t341;
  double t390;
  double t396;
  double t25;
  double t116;
  double t122;
  double t498;
  double t249;
  double t508;
  double t417;
  double t424;
  double t592;
  double t618;
  double t670;
  double t1171;
  double t800;
  double t838;
  double t847;
  double t941;
  double t950;
  double t995;
  double t1083;
  double t1243;
  double t1248;
  double t1269;
  double t1271;
  double t1398;
  double t234;
  double t1609;
  double t1827;
  double t1614;
  double t1632;
  double t1698;
  double t1712;
  double t1722;
  double t1726;
  double t1743;
  double t1751;
  double t1759;
  double t1760;
  double t1590;
  double t1882;
  double t1883;
  double t1891;
  double t1919;
  double t1992;
  double t2063;
  double t2106;
  double t2129;
  double t2150;
  double t2152;
  double t707;
  double t748;
  double t1174;
  double t1201;
  double t281;
  double t1456;
  double t1569;
  double t1585;
  double t2494;
  double t2495;
  double t2520;
  double t2561;
  double t2571;
  double t2580;
  double t2631;
  double t2637;
  double t2643;
  double t2972;
  double t2982;
  double t2984;
  double t3024;
  double t3039;
  double t3059;
  double t3091;
  double t3118;
  double t2301;
  double t3293;
  double t3292;
  double t3325;
  double t3347;
  double t3356;
  double t3386;
  double t3390;
  double t3419;
  double t3422;
  double t3440;
  double t3448;
  double t3470;
  double t3495;
  double t3496;
  double t3546;
  double t3577;
  double t3604;
  double t3612;
  double t3639;
  double t3641;
  double t3669;
  double t3680;
  double t3686;
  double t3694;
  double t3741;
  double t3750;
  double t3775;
  double t3777;
  double t2231;
  double t2232;
  double t2235;
  double t1823;
  double t2184;
  double t2196;
  double t672;
  double t1140;
  double t1401;
  double t1426;
  double t2213;
  double t2339;
  double t2344;
  double t3845;
  double t3197;
  double t3207;
  double t3229;
  double t3030;
  double t3132;
  double t3151;
  double t3862;
  double t2545;
  double t2632;
  double t2702;
  double t2816;
  double t3170;
  double t3235;
  double t3261;
  double t3806;
  double t3810;
  double t3822;
  double t3701;
  double t3793;
  double t3796;
  double t3398;
  double t3545;
  double t3644;
  double t3648;
  double t3803;
  double t3824;
  double t3827;
  double t3848;
  double t3849;
  double t3851;
  double t3871;
  double t3887;
  double t3896;
  double t3960;
  double t3975;
  double t3994;
  double t4022;
  double t4037;
  double t4054;
  double t4107;
  double t4108;
  double t4123;
  double t4155;
  double t4166;
  double t4170;
  double t2842;
  double t3267;
  double t3278;
  double t4304;
  double t4332;
  double t4334;
  double t4340;
  double t4345;
  double t4347;
  double t4350;
  double t4351;
  double t4356;
  double t4361;
  double t4365;
  double t4369;
  double t4372;
  double t4373;
  double t4374;
  double t4378;
  double t4379;
  double t4382;
  double t4385;
  double t4389;
  double t4393;
  double t4394;
  double t4396;
  double t4399;
  double t4416;
  double t4417;
  double t4422;
  double t4432;
  double t4436;
  double t4438;
  double t4440;
  double t4442;
  double t4446;
  double t4266;
  double t4270;
  double t4271;
  double t4283;
  double t4295;
  double t4306;
  double t4311;
  double t4319;
  double t4322;
  double t4328;
  double t4368;
  double t4398;
  double t4448;
  double t4454;
  double t4458;
  double t4462;
  double t4466;
  double t4469;
  double t4475;
  double t4485;
  double t4491;
  double t4500;
  double t4508;
  double t4510;
  double t4512;
  double t4516;
  double t1556;
  double t2381;
  double t2449;
  double t4533;
  double t4538;
  double t4539;
  double t4540;
  double t4272;
  double t4456;
  double t4519;
  double t4520;
  double t4577;
  double t4588;
  double t4592;
  double t4595;
  double t4596;
  double t4600;
  double t4601;
  double t4605;
  double t4612;
  double t4621;
  double t4630;
  double t4638;
  double t4639;
  double t4527;
  double t4552;
  double t4554;
  double t4627;
  double t4640;
  double t4642;
  double t4650;
  double t4651;
  double t4653;
  double t3664;
  double t3828;
  double t3829;
  double t4572;
  double t4668;
  double t4685;
  double t4699;
  double t4717;
  double t4758;
  double t4786;
  double t4792;
  double t4801;
  double t4809;
  double t4845;
  double t4853;
  double t5060;
  double t5061;
  double t5062;
  double t5066;
  double t5068;
  double t5069;
  double t5076;
  double t5078;
  double t5110;
  double t5111;
  double t5113;
  double t5115;
  double t5119;
  double t5120;
  double t5121;
  double t5124;
  double t5152;
  double t5154;
  double t5155;
  double t5159;
  double t5166;
  double t5168;
  double t5169;
  double t5171;
  t341 = Cos(var1[17]);
  t390 = -1.*t341;
  t396 = 1. + t390;
  t25 = Cos(var1[16]);
  t116 = -1.*t25;
  t122 = 1. + t116;
  t498 = Sin(var1[17]);
  t249 = Sin(var1[16]);
  t508 = 4.e-6*t498;
  t417 = 1.000000000016*t396;
  t424 = -7.e-6*t396;
  t592 = t424 + t508;
  t618 = -7.e-6*t592;
  t670 = -1. + t417 + t618;
  t1171 = 4.e-6*t122;
  t800 = 2.8e-11*t396;
  t838 = 4.e-6*t396;
  t847 = 7.e-6*t498;
  t941 = t838 + t847;
  t950 = -7.e-6*t941;
  t995 = -1.*t498;
  t1083 = t800 + t950 + t995;
  t1243 = -6.5e-11*t396;
  t1248 = 1. + t1243;
  t1269 = -7.e-6*t1248;
  t1271 = 7.e-6*t396;
  t1398 = t1269 + t1271 + t508;
  t234 = -2.8e-11*t122;
  t1609 = -7.e-6*t122;
  t1827 = Cos(var1[15]);
  t1614 = -4.e-6*t249;
  t1632 = t1609 + t1614;
  t1698 = t1632*t670;
  t1712 = -7.e-6*t249;
  t1722 = t1171 + t1712;
  t1726 = t1722*t1083;
  t1743 = -6.5e-11*t122;
  t1751 = 1. + t1743;
  t1759 = t1751*t1398;
  t1760 = t1698 + t1726 + t1759;
  t1590 = Sin(var1[15]);
  t1882 = -1.000000000016*t122;
  t1883 = 1. + t1882;
  t1891 = t1883*t670;
  t1919 = -1.*t249;
  t1992 = t234 + t1919;
  t2063 = t1992*t1083;
  t2106 = 4.e-6*t249;
  t2129 = t1609 + t2106;
  t2150 = t2129*t1398;
  t2152 = t1891 + t2063 + t2150;
  t707 = -1.000000000049*t122;
  t748 = 1. + t707;
  t1174 = 7.e-6*t249;
  t1201 = t1171 + t1174;
  t281 = t234 + t249;
  t1456 = Sin(var1[4]);
  t1569 = Cos(var1[4]);
  t1585 = Cos(var1[5]);
  t2494 = 1.000000000049*t396;
  t2495 = 4.e-6*t941;
  t2520 = -1. + t2494 + t2495;
  t2561 = 4.e-6*t1248;
  t2571 = -1. + t341;
  t2580 = 4.e-6*t2571;
  t2631 = t2561 + t2580 + t847;
  t2637 = 4.e-6*t592;
  t2643 = t800 + t2637 + t498;
  t2972 = t1992*t2520;
  t2982 = t2129*t2631;
  t2984 = t1883*t2643;
  t3024 = t2972 + t2982 + t2984;
  t3039 = t1722*t2520;
  t3059 = t1751*t2631;
  t3091 = t1632*t2643;
  t3118 = t3039 + t3059 + t3091;
  t2301 = Sin(var1[5]);
  t3293 = -4.e-6*t498;
  t3292 = 6.5e-11*t396;
  t3325 = t424 + t3293;
  t3347 = 7.e-6*t3325;
  t3356 = t2580 + t847;
  t3386 = 4.e-6*t3356;
  t3390 = -1. + t3292 + t3347 + t3386;
  t3419 = -1. + t2494;
  t3422 = 4.e-6*t3419;
  t3440 = -7.e-6*t498;
  t3448 = -2.8e-11*t396;
  t3470 = t3448 + t498;
  t3495 = 7.e-6*t3470;
  t3496 = t3422 + t2580 + t3440 + t3495;
  t3546 = -1.000000000016*t396;
  t3577 = 1. + t3546;
  t3604 = 7.e-6*t3577;
  t3612 = t800 + t498;
  t3639 = 4.e-6*t3612;
  t3641 = t3604 + t1271 + t3293 + t3639;
  t3669 = t2129*t3390;
  t3680 = t1992*t3496;
  t3686 = t1883*t3641;
  t3694 = t3669 + t3680 + t3686;
  t3741 = t1751*t3390;
  t3750 = t1722*t3496;
  t3775 = t1632*t3641;
  t3777 = t3741 + t3750 + t3775;
  t2231 = t1827*t1760;
  t2232 = t1590*t2152;
  t2235 = t2231 + t2232;
  t1823 = -1.*t1590*t1760;
  t2184 = t1827*t2152;
  t2196 = t1823 + t2184;
  t672 = t281*t670;
  t1140 = t748*t1083;
  t1401 = t1201*t1398;
  t1426 = t672 + t1140 + t1401;
  t2213 = t1585*t2196;
  t2339 = -1.*t2235*t2301;
  t2344 = t2213 + t2339;
  t3845 = Cos(var1[3]);
  t3197 = t1590*t3024;
  t3207 = t1827*t3118;
  t3229 = t3197 + t3207;
  t3030 = t1827*t3024;
  t3132 = -1.*t1590*t3118;
  t3151 = t3030 + t3132;
  t3862 = Sin(var1[3]);
  t2545 = t748*t2520;
  t2632 = t1201*t2631;
  t2702 = t281*t2643;
  t2816 = t2545 + t2632 + t2702;
  t3170 = t1585*t3151;
  t3235 = -1.*t3229*t2301;
  t3261 = t3170 + t3235;
  t3806 = t1590*t3694;
  t3810 = t1827*t3777;
  t3822 = t3806 + t3810;
  t3701 = t1827*t3694;
  t3793 = -1.*t1590*t3777;
  t3796 = t3701 + t3793;
  t3398 = t1201*t3390;
  t3545 = t748*t3496;
  t3644 = t281*t3641;
  t3648 = t3398 + t3545 + t3644;
  t3803 = t1585*t3796;
  t3824 = -1.*t3822*t2301;
  t3827 = t3803 + t3824;
  t3848 = t1585*t2235;
  t3849 = t2196*t2301;
  t3851 = t3848 + t3849;
  t3871 = t1569*t1426;
  t3887 = -1.*t1456*t2344;
  t3896 = t3871 + t3887;
  t3960 = t1585*t3229;
  t3975 = t3151*t2301;
  t3994 = t3960 + t3975;
  t4022 = t1569*t2816;
  t4037 = -1.*t1456*t3261;
  t4054 = t4022 + t4037;
  t4107 = t1585*t3822;
  t4108 = t3796*t2301;
  t4123 = t4107 + t4108;
  t4155 = t1569*t3648;
  t4166 = -1.*t1456*t3827;
  t4170 = t4155 + t4166;
  t2842 = t2816*t1456;
  t3267 = t1569*t3261;
  t3278 = t2842 + t3267;
  t4304 = 7.e-6*t122;
  t4332 = 2.826290000000002e-7*var1[17];
  t4334 = -0.148715*t1248;
  t4340 = -2.18904205e-16*t396;
  t4345 = t838 + t3440;
  t4347 = -0.038576*t4345;
  t4350 = -0.80315*t3325;
  t4351 = t1271 + t508;
  t4356 = -0.5031510000080001*t4351;
  t4361 = -0.038575000014*t3356;
  t4365 = t4332 + t4334 + t4340 + t4347 + t4350 + t4356 + t4361;
  t4369 = 1.1305160000000008e-12*var1[17];
  t4372 = -1.000000000049*t396;
  t4373 = 1. + t4372;
  t4374 = -0.038576*t4373;
  t4378 = -0.03857500001589017*t396;
  t4379 = t800 + t995;
  t4382 = -0.5031510000080001*t4379;
  t4385 = t2580 + t3440;
  t4389 = -3.367757e-6*t4385;
  t4393 = -0.148715*t941;
  t4394 = -0.80315*t3470;
  t4396 = t4369 + t4374 + t4378 + t4382 + t4389 + t4393 + t4394;
  t4399 = -1.9784030000000015e-12*var1[17];
  t4416 = -0.80315*t3577;
  t4417 = -0.5031510000160505*t396;
  t4422 = t3448 + t995;
  t4432 = -0.038576*t4422;
  t4436 = t1271 + t3293;
  t4438 = -3.367757e-6*t4436;
  t4440 = -0.148715*t592;
  t4442 = -0.038575000014*t3612;
  t4446 = t4399 + t4416 + t4417 + t4432 + t4438 + t4440 + t4442;
  t4266 = -1.*t1827;
  t4270 = 1. + t4266;
  t4271 = -0.15121*t4270;
  t4283 = -2.7726089999999997e-12*var1[16];
  t4295 = -0.2812110000084994*t122;
  t4306 = t4304 + t1614;
  t4311 = -1.8134809999999998e-6*t4306;
  t4319 = 2.8e-11*t122;
  t4322 = t4319 + t249;
  t4328 = -0.038749000006999997*t4322;
  t4368 = t2129*t4365;
  t4398 = t1992*t4396;
  t4448 = t1883*t4446;
  t4454 = t4283 + t4295 + t4311 + t4328 + t4368 + t4398 + t4448;
  t4458 = 3.9608699999999997e-7*var1[16];
  t4462 = -1.1787626499999999e-16*t122;
  t4466 = t4304 + t2106;
  t4469 = -0.281211000004*t4466;
  t4475 = -1. + t25;
  t4485 = 4.e-6*t4475;
  t4491 = t4485 + t1174;
  t4500 = -0.038749000006999997*t4491;
  t4508 = t1751*t4365;
  t4510 = t1722*t4396;
  t4512 = t1632*t4446;
  t4516 = t4458 + t4462 + t4469 + t4500 + t4508 + t4510 + t4512;
  t1556 = t1426*t1456;
  t2381 = t1569*t2344;
  t2449 = t1556 + t2381;
  t4533 = -0.15121*t1590;
  t4538 = t1827*t4454;
  t4539 = -1.*t1590*t4516;
  t4540 = t4271 + t4533 + t4538 + t4539;
  t4272 = 0.15121*t1590;
  t4456 = t1590*t4454;
  t4519 = t1827*t4516;
  t4520 = t4271 + t4272 + t4456 + t4519;
  t4577 = 1.5843479999999999e-12*var1[16];
  t4588 = -0.03874900000889869*t122;
  t4592 = t4319 + t1919;
  t4595 = -0.281211000004*t4592;
  t4596 = t4485 + t1712;
  t4600 = -1.8134809999999998e-6*t4596;
  t4601 = t1201*t4365;
  t4605 = t748*t4396;
  t4612 = t281*t4446;
  t4621 = t4577 + t4588 + t4595 + t4600 + t4601 + t4605 + t4612;
  t4630 = t1585*t4540;
  t4638 = -1.*t4520*t2301;
  t4639 = t4630 + t4638;
  t4527 = t1585*t4520;
  t4552 = t4540*t2301;
  t4554 = t4527 + t4552;
  t4627 = t4621*t1456;
  t4640 = t1569*t4639;
  t4642 = t4627 + t4640;
  t4650 = t1569*t4621;
  t4651 = -1.*t1456*t4639;
  t4653 = t4650 + t4651;
  t3664 = t3648*t1456;
  t3828 = t1569*t3827;
  t3829 = t3664 + t3828;
  t4572 = -1.*t3851*t4554;
  t4668 = t3994*t4554;
  t4685 = t3851*t4554;
  t4699 = -1.*t4554*t4123;
  t4717 = -1.*t3994*t4554;
  t4758 = t4554*t4123;
  t4786 = -1.*t1426*t4621;
  t4792 = t2816*t4621;
  t4801 = t1426*t4621;
  t4809 = -1.*t4621*t3648;
  t4845 = -1.*t2816*t4621;
  t4853 = t4621*t3648;
  t5060 = -1.*t4365*t1398;
  t5061 = -1.*t1083*t4396;
  t5062 = -1.*t670*t4446;
  t5066 = t5060 + t5061 + t5062;
  t5068 = t4365*t2631;
  t5069 = t2520*t4396;
  t5076 = t2643*t4446;
  t5078 = t5068 + t5069 + t5076;
  t5110 = t4365*t1398;
  t5111 = t1083*t4396;
  t5113 = t670*t4446;
  t5115 = t5110 + t5111 + t5113;
  t5119 = -1.*t4365*t3390;
  t5120 = -1.*t4396*t3496;
  t5121 = -1.*t4446*t3641;
  t5124 = t5119 + t5120 + t5121;
  t5152 = -1.*t4365*t2631;
  t5154 = -1.*t2520*t4396;
  t5155 = -1.*t2643*t4446;
  t5159 = t5152 + t5154 + t5155;
  t5166 = t4365*t3390;
  t5168 = t4396*t3496;
  t5169 = t4446*t3641;
  t5171 = t5166 + t5168 + t5169;
  p_output1[0]=t2449*var2[0] + t3278*var2[1] + t3829*var2[2];
  p_output1[1]=(t3845*t3851 - 1.*t3862*t3896)*var2[0] + (t3845*t3994 - 1.*t3862*t4054)*var2[1] + (t3845*t4123 - 1.*t3862*t4170)*var2[2];
  p_output1[2]=(t3851*t3862 + t3845*t3896)*var2[0] + (t3862*t3994 + t3845*t4054)*var2[1] + (t3862*t4123 + t3845*t4170)*var2[2];
  p_output1[3]=(t3829*(-1.*t3278*t4642 - 1.*t4054*t4653 + t4717) + t3278*(t3829*t4642 + t4170*t4653 + t4758))*var2[0] + (t3829*(t2449*t4642 + t3896*t4653 + t4685) + t2449*(-1.*t3829*t4642 - 1.*t4170*t4653 + t4699))*var2[1] + (t3278*(t4572 - 1.*t2449*t4642 - 1.*t3896*t4653) + t2449*(t3278*t4642 + t4054*t4653 + t4668))*var2[2];
  p_output1[4]=(t4123*(-1.*t3261*t4639 + t4717 + t4845) + t3994*(t3827*t4639 + t4758 + t4853))*var2[0] + (t4123*(t2344*t4639 + t4685 + t4801) + t3851*(-1.*t3827*t4639 + t4699 + t4809))*var2[1] + (t3994*(t4572 - 1.*t2344*t4639 + t4786) + t3851*(t3261*t4639 + t4668 + t4792))*var2[2];
  p_output1[5]=(t3648*(-1.*t3229*t4520 - 1.*t3151*t4540 + t4845) + t2816*(t3822*t4520 + t3796*t4540 + t4853))*var2[0] + (t3648*(t2235*t4520 + t2196*t4540 + t4801) + t1426*(-1.*t3822*t4520 - 1.*t3796*t4540 + t4809))*var2[1] + (t2816*(-1.*t2235*t4520 - 1.*t2196*t4540 + t4786) + t1426*(t3229*t4520 + t3151*t4540 + t4792))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.15121*t1760 - 0.15121*t2152 + t3648*(-1.*t3024*t4454 - 1.*t3118*t4516 + t4845) + t2816*(t3694*t4454 + t3777*t4516 + t4853))*var2[0] + (-0.15121*t3024 + 0.15121*t3118 + t3648*(t2152*t4454 + t1760*t4516 + t4801) + t1426*(-1.*t3694*t4454 - 1.*t3777*t4516 + t4809))*var2[1] + (-0.15121*t3694 + 0.15121*t3777 + t2816*(-1.*t2152*t4454 - 1.*t1760*t4516 + t4786) + t1426*(t3024*t4454 + t3118*t4516 + t4792))*var2[2];
  p_output1[16]=(0.281211*t1083 + 1.e-6*(7.e-6*t1248 + t3293 + t424) - 1.*t3390*t5159 - 1.*t2631*t5171 + 4.e-6*(-1.*t3496*t5159 - 1.*t2520*t5171) + 7.e-6*(t3641*t5159 + t2643*t5171) - 0.038749*t670)*var2[0] + (0.281211*t2520 - 0.038749*t2643 - 1.*t3390*t5115 - 1.*t1398*t5124 + 4.e-6*(-1.*t3496*t5115 - 1.*t1083*t5124) + 7.e-6*(t3641*t5115 + t5124*t670) + 1.e-6*(4.e-6*(-1. + t3292) + t3440 + t838))*var2[1] + (0.281211*t3496 - 0.038749*t3641 + 1.e-6*(1. + t1243 - 7.e-6*t3325 + 4.e-6*t4345) - 1.*t2631*t5066 - 1.*t1398*t5078 + 4.e-6*(-1.*t2520*t5066 - 1.*t1083*t5078) + 7.e-6*(t2643*t5066 + t5078*t670))*var2[2];
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

#include "fRrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
