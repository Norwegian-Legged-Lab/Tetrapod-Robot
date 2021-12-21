/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:15:19 GMT+01:00
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
  double t387;
  double t408;
  double t411;
  double t109;
  double t186;
  double t188;
  double t451;
  double t499;
  double t208;
  double t420;
  double t425;
  double t519;
  double t523;
  double t537;
  double t203;
  double t592;
  double t622;
  double t640;
  double t649;
  double t668;
  double t785;
  double t794;
  double t833;
  double t920;
  double t934;
  double t979;
  double t985;
  double t689;
  double t703;
  double t1083;
  double t1033;
  double t1050;
  double t1109;
  double t1528;
  double t1016;
  double t1023;
  double t2051;
  double t1400;
  double t245;
  double t1640;
  double t1742;
  double t1864;
  double t1931;
  double t1354;
  double t1176;
  double t2147;
  double t2269;
  double t2277;
  double t2329;
  double t1252;
  double t1328;
  double t1813;
  double t1940;
  double t1949;
  double t1162;
  double t1172;
  double t1992;
  double t2022;
  double t2043;
  double t2209;
  double t2226;
  double t1414;
  double t2326;
  double t2333;
  double t2403;
  double t720;
  double t2511;
  double t2590;
  double t2606;
  double t2609;
  double t2640;
  double t2641;
  double t2648;
  double t2653;
  double t2654;
  double t2663;
  double t2672;
  double t2698;
  double t2704;
  double t2707;
  double t2730;
  double t2731;
  double t2733;
  double t2769;
  double t2774;
  double t2795;
  double t2832;
  double t2861;
  double t2897;
  double t2899;
  double t2913;
  double t2914;
  double t2936;
  double t2939;
  double t2956;
  double t2986;
  double t2990;
  double t2992;
  double t566;
  double t575;
  double t733;
  double t342;
  double t3108;
  double t2529;
  double t3034;
  double t3044;
  double t3076;
  double t3092;
  double t1209;
  double t1213;
  double t1337;
  double t1372;
  double t1531;
  double t1540;
  double t2444;
  double t2510;
  double t2517;
  double t2521;
  double t2538;
  double t2575;
  double t2684;
  double t2894;
  double t3005;
  double t3008;
  double t1250;
  double t1384;
  double t1579;
  double t1605;
  double t3093;
  double t3102;
  double t3112;
  double t3128;
  double t3146;
  double t3153;
  double t3165;
  double t3176;
  double t3200;
  double t3234;
  double t3301;
  double t3328;
  double t3329;
  double t3330;
  double t3343;
  double t3354;
  double t3357;
  double t3375;
  double t3381;
  double t3401;
  double t3517;
  double t3530;
  double t3537;
  double t3538;
  double t3542;
  double t3543;
  double t3550;
  double t3552;
  double t3256;
  double t1957;
  double t2261;
  double t2404;
  double t2411;
  double t3264;
  double t3272;
  double t3278;
  double t3286;
  double t3670;
  double t3652;
  double t3705;
  double t3714;
  double t3720;
  double t3470;
  double t3423;
  double t3425;
  double t3439;
  double t3454;
  double t3473;
  double t3475;
  double t3482;
  double t3483;
  double t3716;
  double t3730;
  double t3739;
  double t3741;
  double t3771;
  double t3775;
  double t3782;
  double t3783;
  double t559;
  double t673;
  double t1002;
  double t1010;
  double t1029;
  double t1077;
  double t1112;
  double t1116;
  double t3990;
  double t4020;
  double t4022;
  double t4023;
  double t4008;
  double t4010;
  double t4011;
  double t4030;
  double t3989;
  double t3898;
  double t3904;
  double t3960;
  double t3968;
  double t3980;
  double t4018;
  double t4034;
  double t4038;
  double t4128;
  double t4074;
  double t4077;
  double t4096;
  double t4061;
  double t4148;
  double t4150;
  double t4159;
  double t3852;
  double t3859;
  double t3864;
  double t3869;
  double t3872;
  double t3876;
  double t3747;
  double t3765;
  double t3766;
  double t3654;
  double t3678;
  double t3702;
  double t4263;
  double t4265;
  double t4270;
  double t4243;
  double t4251;
  double t4252;
  double t4197;
  double t4204;
  double t4208;
  double t4280;
  double t4281;
  double t4284;
  double t4298;
  double t4310;
  double t4311;
  double t4288;
  double t4214;
  double t4221;
  double t4239;
  double t4396;
  double t4405;
  double t4410;
  double t4367;
  double t4388;
  double t4393;
  double t4394;
  double t4421;
  double t4438;
  double t4449;
  double t4475;
  double t4479;
  double t4484;
  double t4890;
  double t4892;
  double t4897;
  double t4903;
  double t4908;
  double t4910;
  double t4915;
  double t4917;
  double t4718;
  double t4780;
  double t4575;
  double t4577;
  double t4644;
  double t3985;
  double t4039;
  double t4040;
  double t5455;
  double t4471;
  double t4472;
  double t4474;
  double t5600;
  double t4825;
  double t6736;
  double t6841;
  double t6860;
  double t6886;
  double t6938;
  double t6977;
  double t7027;
  double t7045;
  double t6068;
  double t6354;
  double t7499;
  double t7577;
  t387 = Cos(var1[14]);
  t408 = -1.*t387;
  t411 = 1. + t408;
  t109 = Cos(var1[13]);
  t186 = -1.*t109;
  t188 = 1. + t186;
  t451 = Sin(var1[14]);
  t499 = 4.e-6*t451;
  t208 = Sin(var1[13]);
  t420 = 1.000000000016*t411;
  t425 = -7.e-6*t411;
  t519 = t425 + t499;
  t523 = -7.e-6*t519;
  t537 = -1. + t420 + t523;
  t203 = -7.e-6*t188;
  t592 = -6.5e-11*t411;
  t622 = 1. + t592;
  t640 = -7.e-6*t622;
  t649 = 7.e-6*t411;
  t668 = t640 + t649 + t499;
  t785 = -2.8e-11*t411;
  t794 = -1. + t387;
  t833 = 4.e-6*t794;
  t920 = -7.e-6*t451;
  t934 = t833 + t920;
  t979 = -7.e-6*t934;
  t985 = t785 + t979 + t451;
  t689 = -1. + t109;
  t703 = 4.e-6*t689;
  t1083 = 2.8e-11*t188;
  t1033 = 4.e-6*t208;
  t1050 = t203 + t1033;
  t1109 = t1083 + t208;
  t1528 = 2.8e-11*t411;
  t1016 = -1.000000000016*t188;
  t1023 = 1. + t1016;
  t2051 = -1.*t451;
  t1400 = -1.*t208;
  t245 = -4.e-6*t208;
  t1640 = 4.e-6*t411;
  t1742 = t1640 + t920;
  t1864 = -4.e-6*t451;
  t1931 = t425 + t1864;
  t1354 = 7.e-6*t451;
  t1176 = -1.000000000049*t411;
  t2147 = t1528 + t2051;
  t2269 = -1.000000000016*t411;
  t2277 = 1. + t2269;
  t2329 = t785 + t2051;
  t1252 = -7.e-6*t208;
  t1328 = t703 + t1252;
  t1813 = 4.e-6*t1742;
  t1940 = -7.e-6*t1931;
  t1949 = 1. + t592 + t1813 + t1940;
  t1162 = -1.000000000049*t188;
  t1172 = 1. + t1162;
  t1992 = 1.000000000049*t411;
  t2022 = -1. + t1992;
  t2043 = 4.e-6*t2022;
  t2209 = -7.e-6*t2147;
  t2226 = t2043 + t833 + t2209 + t920;
  t1414 = t1083 + t1400;
  t2326 = -7.e-6*t2277;
  t2333 = 4.e-6*t2329;
  t2403 = t2326 + t425 + t2333 + t499;
  t720 = 7.e-6*t208;
  t2511 = -2.8e-11*t188;
  t2590 = -2.598649999999999e-7*var1[14];
  t2606 = 0.148705*t622;
  t2609 = -2.3905277499999995e-16*t411;
  t2640 = -0.038922999986*t1742;
  t2641 = -0.80315*t1931;
  t2648 = t649 + t499;
  t2653 = -0.503149000008*t2648;
  t2654 = t833 + t1354;
  t2663 = -0.038924*t2654;
  t2672 = t2590 + t2606 + t2609 + t2640 + t2641 + t2653 + t2663;
  t2698 = 1.0394599999999997e-12*var1[14];
  t2704 = 1. + t1176;
  t2707 = -0.038924*t2704;
  t2730 = -0.03892299998790722*t411;
  t2731 = -0.80315*t2147;
  t2733 = 0.148705*t934;
  t2769 = t1640 + t1354;
  t2774 = -3.6777349999999994e-6*t2769;
  t2795 = t785 + t451;
  t2832 = -0.503149000008*t2795;
  t2861 = t2698 + t2707 + t2730 + t2731 + t2733 + t2774 + t2832;
  t2897 = 1.8190549999999993e-12*var1[14];
  t2899 = -0.80315*t2277;
  t2913 = -0.5031490000160505*t411;
  t2914 = -0.038922999986*t2329;
  t2936 = t649 + t1864;
  t2939 = -3.6777349999999994e-6*t2936;
  t2956 = 0.148705*t519;
  t2986 = t1528 + t451;
  t2990 = -0.038924*t2986;
  t2992 = t2897 + t2899 + t2913 + t2914 + t2939 + t2956 + t2990;
  t566 = -6.5e-11*t188;
  t575 = 1. + t566;
  t733 = t703 + t720;
  t342 = t203 + t245;
  t3108 = 4.e-6*t188;
  t2529 = 7.e-6*t188;
  t3034 = t1328*t1949;
  t3044 = t1172*t2226;
  t3076 = t1414*t2403;
  t3092 = t3034 + t3044 + t3076;
  t1209 = 4.e-6*t934;
  t1213 = 1. + t1176 + t1209;
  t1337 = 4.e-6*t622;
  t1372 = t1337 + t833 + t1354;
  t1531 = 4.e-6*t519;
  t1540 = t1528 + t1531 + t451;
  t2444 = 1.0248489999999998e-12*var1[13];
  t2510 = -0.28120900000849935*t188;
  t2517 = t2511 + t1400;
  t2521 = -0.038748999993*t2517;
  t2538 = t2529 + t245;
  t2575 = -2.123459e-6*t2538;
  t2684 = t1050*t2672;
  t2894 = t1109*t2861;
  t3005 = t1023*t2992;
  t3008 = t2444 + t2510 + t2521 + t2575 + t2684 + t2894 + t3005;
  t1250 = t1172*t1213;
  t1384 = t1328*t1372;
  t1579 = t1414*t1540;
  t1605 = t1250 + t1384 + t1579;
  t3093 = 5.856279999999999e-13*var1[13];
  t3102 = -0.0387489999948987*t188;
  t3112 = t3108 + t720;
  t3128 = -2.123459e-6*t3112;
  t3146 = t2511 + t208;
  t3153 = -0.281209000004*t3146;
  t3165 = t1328*t2672;
  t3176 = t1172*t2861;
  t3200 = t1414*t2992;
  t3234 = t3093 + t3102 + t3128 + t3153 + t3165 + t3176 + t3200;
  t3301 = -1.4640699999999997e-7*var1[13];
  t3328 = -1.38024835e-16*t188;
  t3329 = t3108 + t1252;
  t3330 = -0.038748999993*t3329;
  t3343 = t2529 + t1033;
  t3354 = -0.281209000004*t3343;
  t3357 = t575*t2672;
  t3375 = t733*t2861;
  t3381 = t342*t2992;
  t3401 = t3301 + t3328 + t3330 + t3354 + t3357 + t3375 + t3381;
  t3517 = t1949*t2672;
  t3530 = t2226*t2861;
  t3537 = t2403*t2992;
  t3538 = t3517 + t3530 + t3537;
  t3542 = -1.*t2672*t1372;
  t3543 = -1.*t1213*t2861;
  t3550 = -1.*t1540*t2992;
  t3552 = t3542 + t3543 + t3550;
  t3256 = t3092*t3234;
  t1957 = t1050*t1949;
  t2261 = t1109*t2226;
  t2404 = t1023*t2403;
  t2411 = t1957 + t2261 + t2404;
  t3264 = t575*t1949;
  t3272 = t733*t2226;
  t3278 = t342*t2403;
  t3286 = t3264 + t3272 + t3278;
  t3670 = Cos(var1[12]);
  t3652 = Sin(var1[12]);
  t3705 = -1.*t3670;
  t3714 = 1. + t3705;
  t3720 = 0.15121*t3652;
  t3470 = -1.*t1605*t3234;
  t3423 = t1109*t1213;
  t3425 = t1050*t1372;
  t3439 = t1023*t1540;
  t3454 = t3423 + t3425 + t3439;
  t3473 = t733*t1213;
  t3475 = t575*t1372;
  t3482 = t342*t1540;
  t3483 = t3473 + t3475 + t3482;
  t3716 = 0.15121*t3714;
  t3730 = t3652*t3008;
  t3739 = t3670*t3401;
  t3741 = t3716 + t3720 + t3730 + t3739;
  t3771 = -0.15121*t3714;
  t3775 = t3670*t3008;
  t3782 = -1.*t3652*t3401;
  t3783 = t3771 + t3720 + t3775 + t3782;
  t559 = t342*t537;
  t673 = t575*t668;
  t1002 = t733*t985;
  t1010 = t559 + t673 + t1002;
  t1029 = t1023*t537;
  t1077 = t1050*t668;
  t1112 = t1109*t985;
  t1116 = t1029 + t1077 + t1112;
  t3990 = Cos(var1[5]);
  t4020 = t3670*t1010;
  t4022 = t3652*t1116;
  t4023 = t4020 + t4022;
  t4008 = -1.*t3652*t1010;
  t4010 = t3670*t1116;
  t4011 = t4008 + t4010;
  t4030 = Sin(var1[5]);
  t3989 = Cos(var1[4]);
  t3898 = t1414*t537;
  t3904 = t1328*t668;
  t3960 = t1172*t985;
  t3968 = t3898 + t3904 + t3960;
  t3980 = Sin(var1[4]);
  t4018 = t3990*t4011;
  t4034 = -1.*t4023*t4030;
  t4038 = t4018 + t4034;
  t4128 = Cos(var1[3]);
  t4074 = t3990*t4023;
  t4077 = t4011*t4030;
  t4096 = t4074 + t4077;
  t4061 = Sin(var1[3]);
  t4148 = t3989*t3968;
  t4150 = -1.*t3980*t4038;
  t4159 = t4148 + t4150;
  t3852 = t3652*t3454;
  t3859 = t3670*t3483;
  t3864 = t3852 + t3859;
  t3869 = t3670*t3454;
  t3872 = -1.*t3652*t3483;
  t3876 = t3869 + t3872;
  t3747 = t3670*t2411;
  t3765 = -1.*t3652*t3286;
  t3766 = t3747 + t3765;
  t3654 = t3652*t2411;
  t3678 = t3670*t3286;
  t3702 = t3654 + t3678;
  t4263 = t3990*t3702;
  t4265 = t3766*t4030;
  t4270 = t4263 + t4265;
  t4243 = t3990*t3783;
  t4251 = -1.*t3741*t4030;
  t4252 = t4243 + t4251;
  t4197 = t3990*t3864;
  t4204 = t3876*t4030;
  t4208 = t4197 + t4204;
  t4280 = t3990*t3741;
  t4281 = t3783*t4030;
  t4284 = t4280 + t4281;
  t4298 = t3990*t3876;
  t4310 = -1.*t3864*t4030;
  t4311 = t4298 + t4310;
  t4288 = t4270*t4284;
  t4214 = t3990*t3766;
  t4221 = -1.*t3702*t4030;
  t4239 = t4214 + t4221;
  t4396 = t3092*t3980;
  t4405 = t3989*t4239;
  t4410 = t4396 + t4405;
  t4367 = -1.*t4208*t4284;
  t4388 = t1605*t3980;
  t4393 = t3989*t4311;
  t4394 = t4388 + t4393;
  t4421 = t3234*t3980;
  t4438 = t3989*t4252;
  t4449 = t4421 + t4438;
  t4475 = t3989*t3234;
  t4479 = -1.*t3980*t4252;
  t4484 = t4475 + t4479;
  t4890 = t2672*t668;
  t4892 = t985*t2861;
  t4897 = t537*t2992;
  t4903 = t4890 + t4892 + t4897;
  t4908 = -1.*t1949*t2672;
  t4910 = -1.*t2226*t2861;
  t4915 = -1.*t2403*t2992;
  t4917 = t4908 + t4910 + t4915;
  t4718 = -1.*t3092*t3234;
  t4780 = t3968*t3234;
  t4575 = t3989*t1605;
  t4577 = -1.*t3980*t4311;
  t4644 = t4575 + t4577;
  t3985 = t3968*t3980;
  t4039 = t3989*t4038;
  t4040 = t3985 + t4039;
  t5455 = -1.*t4270*t4284;
  t4471 = t3989*t3092;
  t4472 = -1.*t3980*t4239;
  t4474 = t4471 + t4472;
  t5600 = t4096*t4284;
  t4825 = 6.5e-11*t411;
  t6736 = -1.*t2672*t668;
  t6841 = -1.*t985*t2861;
  t6860 = -1.*t537*t2992;
  t6886 = t6736 + t6841 + t6860;
  t6938 = t2672*t1372;
  t6977 = t1213*t2861;
  t7027 = t1540*t2992;
  t7045 = t6938 + t6977 + t7027;
  t6068 = -1.*t3968*t3234;
  t6354 = t1605*t3234;
  t7499 = -1.*t4096*t4284;
  t7577 = t4208*t4284;
  p_output1[0]=t4040*var2[0] + (t4096*t4128 - 1.*t4061*t4159)*var2[1] + (t4061*t4096 + t4128*t4159)*var2[2] + (t4394*(t4288 + t4410*t4449 + t4474*t4484) + t4410*(t4367 - 1.*t4394*t4449 - 1.*t4484*t4644))*var2[3] + (t4208*(t3256 + t4239*t4252 + t4288) + t4270*(t3470 - 1.*t4252*t4311 + t4367))*var2[4] + (t1605*(t3256 + t3702*t3741 + t3766*t3783) + t3092*(t3470 - 1.*t3741*t3864 - 1.*t3783*t3876))*var2[5] + (0.15121*t1010 + 0.15121*t1116 + t1605*(t2411*t3008 + t3256 + t3286*t3401) + t3092*(-1.*t3008*t3454 + t3470 - 1.*t3401*t3483))*var2[12] + (t1372*t3538 + t1949*t3552 + 4.e-6*(-1.*t1213*t3538 - 1.*t2226*t3552) - 7.e-6*(t1540*t3538 + t2403*t3552) + 0.038749*t537 + 1.e-6*(t1864 + t425 + 7.e-6*t622) - 0.281209*t985)*var2[13] + 4.0519653002457196e-7*var2[14];
  p_output1[1]=t4394*var2[0] + (t4128*t4208 - 1.*t4061*t4644)*var2[1] + (t4061*t4208 + t4128*t4644)*var2[2] + (t4040*(-1.*t4410*t4449 - 1.*t4474*t4484 + t5455) + t4410*(t4040*t4449 + t4159*t4484 + t5600))*var2[3] + (t4096*(-1.*t4239*t4252 + t4718 + t5455) + t4270*(t4038*t4252 + t4780 + t5600))*var2[4] + (t3968*(-1.*t3702*t3741 - 1.*t3766*t3783 + t4718) + t3092*(t3783*t4011 + t3741*t4023 + t4780))*var2[5] + (0.15121*t3454 + 0.15121*t3483 + t3968*(-1.*t2411*t3008 - 1.*t3286*t3401 + t4718) + t3092*(t1116*t3008 + t1010*t3401 + t4780))*var2[12] + (-0.281209*t1213 + 0.038749*t1540 + t1949*t4903 - 7.e-6*(t2403*t4903 + t4917*t537) + t4917*t668 + 1.e-6*(t1640 + 4.e-6*(-1. + t4825) + t920) + 4.e-6*(-1.*t2226*t4903 - 1.*t4917*t985))*var2[13] + 0.29999995910920463*var2[14];
  p_output1[2]=t4410*var2[0] + (t4128*t4270 - 1.*t4061*t4474)*var2[1] + (t4061*t4270 + t4128*t4474)*var2[2] + (t4394*(-1.*t4040*t4449 - 1.*t4159*t4484 + t7499) + t4040*(t4394*t4449 + t4484*t4644 + t7577))*var2[3] + (t4208*(-1.*t4038*t4252 + t6068 + t7499) + t4096*(t4252*t4311 + t6354 + t7577))*var2[4] + (t1605*(-1.*t3783*t4011 - 1.*t3741*t4023 + t6068) + t3968*(t3741*t3864 + t3783*t3876 + t6354))*var2[5] + (0.15121*t2411 + 0.15121*t3286 + t1605*(-1.*t1116*t3008 - 1.*t1010*t3401 + t6068) + t3968*(t3008*t3454 + t3401*t3483 + t6354))*var2[12] + (-0.281209*t2226 + 0.038749*t2403 + 1.e-6*(-1. + 7.e-6*t1931 + 4.e-6*t2654 + t4825) + t1372*t6886 + t668*t7045 - 7.e-6*(t1540*t6886 + t537*t7045) + 4.e-6*(-1.*t1213*t6886 - 1.*t7045*t985))*var2[13] - 2.5986500000000035e-7*var2[14];
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

#include "dh_RlFoot_ParallelStance2.hh"

namespace ParallelStance2
{

void dh_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
