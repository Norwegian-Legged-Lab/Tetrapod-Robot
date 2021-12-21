/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:19:08 GMT+01:00
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
static void output1(double *p_output1,const double *var1)
{
  double t31;
  double t15;
  double t520;
  double t538;
  double t568;
  double t582;
  double t386;
  double t992;
  double t1010;
  double t1017;
  double t1025;
  double t1031;
  double t1045;
  double t1050;
  double t871;
  double t877;
  double t906;
  double t930;
  double t954;
  double t1068;
  double t1092;
  double t1122;
  double t1179;
  double t1190;
  double t1240;
  double t1271;
  double t1272;
  double t227;
  double t258;
  double t330;
  double t370;
  double t574;
  double t749;
  double t1519;
  double t1387;
  double t1396;
  double t1402;
  double t1726;
  double t1733;
  double t1743;
  double t2055;
  double t2107;
  double t2155;
  double t2188;
  double t2454;
  double t2707;
  double t2713;
  double t2740;
  double t2774;
  double t1798;
  double t1853;
  double t1606;
  double t1613;
  double t1625;
  double t1993;
  double t1998;
  double t2025;
  double t2793;
  double t1458;
  double t2931;
  double t1529;
  double t3068;
  double t2758;
  double t3166;
  double t3171;
  double t645;
  double t2847;
  double t2262;
  double t2314;
  double t2319;
  double t2325;
  double t2328;
  double t2339;
  double t2505;
  double t2508;
  double t2533;
  double t2541;
  double t2621;
  double t2635;
  double t2643;
  double t2646;
  double t2688;
  double t2699;
  double t2869;
  double t2881;
  double t2935;
  double t2938;
  double t2951;
  double t2993;
  double t3010;
  double t3020;
  double t3299;
  double t3178;
  double t3196;
  double t3202;
  double t3224;
  double t3251;
  double t3254;
  double t3259;
  double t3260;
  double t3381;
  double t3389;
  double t3396;
  double t3399;
  double t3400;
  double t3405;
  double t3421;
  double t3425;
  double t2794;
  double t3557;
  double t2786;
  double t3696;
  double t3109;
  double t3579;
  double t3588;
  double t3070;
  double t928;
  double t979;
  double t1125;
  double t1197;
  double t27;
  double t299;
  double t357;
  double t371;
  double t381;
  double t476;
  double t572;
  double t692;
  double t746;
  double t759;
  double t795;
  double t838;
  double t1232;
  double t1233;
  double t1311;
  double t1314;
  double t1331;
  double t1337;
  double t1358;
  double t1359;
  double t1381;
  double t1419;
  double t1449;
  double t1497;
  double t1505;
  double t1565;
  double t1575;
  double t1583;
  double t1655;
  double t1656;
  double t1667;
  double t1755;
  double t1768;
  double t1805;
  double t1844;
  double t1863;
  double t1881;
  double t1961;
  double t2164;
  double t2219;
  double t2241;
  double t3816;
  double t3817;
  double t3819;
  double t3858;
  double t3875;
  double t3891;
  double t2438;
  double t2453;
  double t2476;
  double t2495;
  double t2500;
  double t2545;
  double t2549;
  double t2571;
  double t2603;
  double t2618;
  double t2706;
  double t2752;
  double t2790;
  double t2791;
  double t2812;
  double t2836;
  double t2837;
  double t3837;
  double t3838;
  double t3847;
  double t3931;
  double t3936;
  double t3947;
  double t3048;
  double t3052;
  double t3088;
  double t3099;
  double t3116;
  double t3150;
  double t3151;
  double t3291;
  double t3292;
  double t3313;
  double t3330;
  double t3336;
  double t3368;
  double t3379;
  double t3975;
  double t3984;
  double t4006;
  double t4020;
  double t4047;
  double t4049;
  double t4061;
  double t4067;
  double t3447;
  double t3463;
  double t4071;
  double t4087;
  double t4089;
  double t4101;
  double t3521;
  double t3523;
  double t3559;
  double t4108;
  double t4112;
  double t4113;
  double t4120;
  double t3603;
  double t4149;
  double t4169;
  double t4185;
  double t4189;
  double t3612;
  double t3621;
  double t4206;
  double t4234;
  double t4243;
  double t4247;
  double t3671;
  double t3679;
  double t3701;
  double t3709;
  double t3730;
  double t3733;
  double t3735;
  double t3740;
  double t4529;
  double t4533;
  double t4536;
  double t4547;
  double t4548;
  double t4558;
  double t4565;
  double t4568;
  double t4569;
  double t4591;
  double t4593;
  double t4600;
  double t4582;
  double t4583;
  double t4586;
  double t4604;
  double t4614;
  double t4633;
  double t4638;
  double t4640;
  double t4650;
  double t4681;
  double t4688;
  double t4694;
  double t4697;
  double t4698;
  double t4710;
  double t4729;
  double t4732;
  double t4735;
  double t4749;
  double t4754;
  double t4758;
  double t4766;
  double t4769;
  double t4770;
  double t4928;
  double t4935;
  double t4938;
  double t4940;
  double t4957;
  double t4960;
  double t4973;
  double t4990;
  double t5000;
  double t5003;
  double t5004;
  double t5016;
  double t5037;
  double t5045;
  double t5079;
  double t5081;
  double t5083;
  double t5241;
  double t5244;
  double t5250;
  double t5255;
  double t5258;
  double t5267;
  double t5274;
  double t5275;
  double t5279;
  double t5281;
  double t5301;
  double t5306;
  double t5307;
  double t5311;
  double t5398;
  double t5400;
  double t5402;
  double t5404;
  double t5417;
  double t5418;
  double t5419;
  double t5437;
  double t5439;
  double t5441;
  double t5444;
  double t5554;
  double t5579;
  double t5589;
  double t5592;
  double t5596;
  double t5607;
  double t5609;
  double t5617;
  double t5633;
  double t5636;
  double t5646;
  double t5652;
  double t5660;
  double t5665;
  double t5726;
  double t5767;
  double t5789;
  double t5857;
  double t5865;
  double t5866;
  double t5738;
  double t5920;
  double t5844;
  double t5873;
  double t5875;
  double t5893;
  double t5900;
  double t5902;
  double t5906;
  double t5915;
  double t5916;
  double t5919;
  double t5946;
  double t5947;
  double t5948;
  double t5967;
  double t5970;
  double t5974;
  double t5979;
  double t5984;
  double t6006;
  double t6086;
  double t6252;
  double t6129;
  double t6140;
  double t6150;
  double t6171;
  double t6271;
  double t6274;
  double t6278;
  double t6283;
  double t6231;
  double t6336;
  double t6339;
  double t6342;
  double t6345;
  double t6091;
  double t6419;
  double t6309;
  t31 = Cos(var1[10]);
  t15 = Cos(var1[4]);
  t520 = Cos(var1[13]);
  t538 = -1.*t520;
  t568 = 1. + t538;
  t582 = Sin(var1[13]);
  t386 = Sin(var1[3]);
  t992 = Cos(var1[5]);
  t1010 = Sin(var1[4]);
  t1017 = t992*t386*t1010;
  t1025 = Cos(var1[3]);
  t1031 = Sin(var1[5]);
  t1045 = t1025*t1031;
  t1050 = t1017 + t1045;
  t871 = Cos(var1[9]);
  t877 = -1.*t871;
  t906 = 1. + t877;
  t930 = Sin(var1[9]);
  t954 = -0.15121*t930;
  t1068 = Cos(var1[12]);
  t1092 = -1.*t1068;
  t1122 = 1. + t1092;
  t1179 = Sin(var1[12]);
  t1190 = 0.15121*t1179;
  t1240 = t1025*t992;
  t1271 = -1.*t386*t1010*t1031;
  t1272 = t1240 + t1271;
  t227 = -1.*t31;
  t258 = 1. + t227;
  t330 = -1. + t31;
  t370 = Sin(var1[10]);
  t574 = 4.e-6*t568;
  t749 = -2.8e-11*t568;
  t1519 = 7.e-6*t568;
  t1387 = -1.*t930*t1050;
  t1396 = t871*t1272;
  t1402 = t1387 + t1396;
  t1726 = t871*t1050;
  t1733 = t930*t1272;
  t1743 = t1726 + t1733;
  t2055 = Cos(var1[11]);
  t2107 = -1.*t2055;
  t2155 = 1. + t2107;
  t2188 = Sin(var1[11]);
  t2454 = -1. + t2055;
  t2707 = Cos(var1[14]);
  t2713 = -1.*t2707;
  t2740 = 1. + t2713;
  t2774 = Sin(var1[14]);
  t1798 = -1.*t582;
  t1853 = -4.e-6*t582;
  t1606 = -1.*t1179*t1050;
  t1613 = t1068*t1272;
  t1625 = t1606 + t1613;
  t1993 = t1068*t1050;
  t1998 = t1179*t1272;
  t2025 = t1993 + t1998;
  t2793 = 7.e-6*t2740;
  t1458 = -7.e-6*t582;
  t2931 = -7.e-6*t568;
  t1529 = 4.e-6*t582;
  t3068 = 4.e-6*t2740;
  t2758 = -2.8e-11*t2740;
  t3166 = -1. + t520;
  t3171 = 4.e-6*t3166;
  t645 = 7.e-6*t582;
  t2847 = 2.8e-11*t568;
  t2262 = -1.*t15*t370*t386;
  t2314 = -4.e-6*t370*t1402;
  t2319 = -1.000000000016*t258;
  t2325 = 1. + t2319;
  t2328 = t2325*t1743;
  t2339 = t2262 + t2314 + t2328;
  t2505 = -1.*t31*t15*t386;
  t2508 = 4.e-6*t258*t1402;
  t2533 = -1.*t370*t1743;
  t2541 = t2505 + t2508 + t2533;
  t2621 = -4.e-6*t258*t15*t386;
  t2635 = 1.6e-11*t330;
  t2643 = 1. + t2635;
  t2646 = t2643*t1402;
  t2688 = 4.e-6*t370*t1743;
  t2699 = t2621 + t2646 + t2688;
  t2869 = t2847 + t1798;
  t2881 = -1.*t15*t2869*t386;
  t2935 = t2931 + t1853;
  t2938 = t2935*t1625;
  t2951 = -1.000000000016*t568;
  t2993 = 1. + t2951;
  t3010 = t2993*t2025;
  t3020 = t2881 + t2938 + t3010;
  t3299 = 7.e-6*t2774;
  t3178 = t3171 + t1458;
  t3196 = -1.*t15*t3178*t386;
  t3202 = -6.5e-11*t568;
  t3224 = 1. + t3202;
  t3251 = t3224*t1625;
  t3254 = t2931 + t1529;
  t3259 = t3254*t2025;
  t3260 = t3196 + t3251 + t3259;
  t3381 = -1.000000000049*t568;
  t3389 = 1. + t3381;
  t3396 = -1.*t3389*t15*t386;
  t3399 = t3171 + t645;
  t3400 = t3399*t1625;
  t3405 = t2847 + t582;
  t3421 = t3405*t2025;
  t3425 = t3396 + t3400 + t3421;
  t2794 = -4.e-6*t2774;
  t3557 = 2.8e-11*t2740;
  t2786 = -1.*t2774;
  t3696 = -7.e-6*t2740;
  t3109 = 4.e-6*t2774;
  t3579 = -1. + t2707;
  t3588 = 4.e-6*t3579;
  t3070 = -7.e-6*t2774;
  t928 = 0.15121*t906;
  t979 = t928 + t954;
  t1125 = -0.15121*t1122;
  t1197 = t1125 + t1190;
  t27 = -4.9936e-13*var1[10];
  t299 = -0.038749*t258;
  t357 = 6.19984e-13*t330;
  t371 = -0.281210000004*t370;
  t381 = t27 + t299 + t357 + t371;
  t476 = 5.856279999999999e-13*var1[13];
  t572 = -0.0387489999948987*t568;
  t692 = t574 + t645;
  t746 = -2.123459e-6*t692;
  t759 = t749 + t582;
  t795 = -0.281209000004*t759;
  t838 = t476 + t572 + t746 + t795;
  t1232 = -0.15121*t906;
  t1233 = t1232 + t954;
  t1311 = 0.15121*t1122;
  t1314 = t1311 + t1190;
  t1331 = -1.2484e-7*var1[10];
  t1337 = 2.479936e-18*t258;
  t1358 = -1.54996e-7*t330;
  t1359 = 1.124840000016e-6*t370;
  t1381 = t1331 + t1337 + t1358 + t1359;
  t1419 = -1.4640699999999997e-7*var1[13];
  t1449 = -1.38024835e-16*t568;
  t1497 = t574 + t1458;
  t1505 = -0.038748999993*t1497;
  t1565 = t1519 + t1529;
  t1575 = -0.281209000004*t1565;
  t1583 = t1419 + t1449 + t1505 + t1575;
  t1655 = 0.281210000008499*t258;
  t1656 = -0.03874900000062*t370;
  t1667 = t1655 + t1656;
  t1755 = 1.0248489999999998e-12*var1[13];
  t1768 = -0.28120900000849935*t568;
  t1805 = t749 + t1798;
  t1844 = -0.038748999993*t1805;
  t1863 = t1519 + t1853;
  t1881 = -2.123459e-6*t1863;
  t1961 = t1755 + t1768 + t1844 + t1881;
  t2164 = 0.50315000001605*t2155;
  t2219 = -0.0398890000006382*t2188;
  t2241 = t2164 + t2219;
  t3816 = t1025*t15*t992*t930;
  t3817 = t871*t1025*t15*t1031;
  t3819 = t3816 + t3817;
  t3858 = -1.*t871*t1025*t15*t992;
  t3875 = t1025*t15*t930*t1031;
  t3891 = t3858 + t3875;
  t2438 = -5.04e-14*var1[11];
  t2453 = -0.039889*t2155;
  t2476 = 6.38224e-13*t2454;
  t2495 = -0.503150000008*t2188;
  t2500 = t2438 + t2453 + t2476 + t2495;
  t2545 = -1.26e-8*var1[11];
  t2549 = 2.552896e-18*t2155;
  t2571 = -1.59556e-7*t2454;
  t2603 = 2.012600000032e-6*t2188;
  t2618 = t2545 + t2549 + t2571 + t2603;
  t2706 = 1.8190549999999993e-12*var1[14];
  t2752 = -0.5031490000160505*t2740;
  t2790 = t2758 + t2786;
  t2791 = -0.038922999986*t2790;
  t2812 = t2793 + t2794;
  t2836 = -3.6777349999999994e-6*t2812;
  t2837 = t2706 + t2752 + t2791 + t2836;
  t3837 = t1025*t15*t992*t1179;
  t3838 = t1068*t1025*t15*t1031;
  t3847 = t3837 + t3838;
  t3931 = -1.*t1068*t1025*t15*t992;
  t3936 = t1025*t15*t1179*t1031;
  t3947 = t3931 + t3936;
  t3048 = -2.598649999999999e-7*var1[14];
  t3052 = -2.3905277499999995e-16*t2740;
  t3088 = t3068 + t3070;
  t3099 = -0.038922999986*t3088;
  t3116 = t2793 + t3109;
  t3150 = -0.503149000008*t3116;
  t3151 = t3048 + t3052 + t3099 + t3150;
  t3291 = 1.0394599999999997e-12*var1[14];
  t3292 = -0.03892299998790722*t2740;
  t3313 = t3068 + t3299;
  t3330 = -3.6777349999999994e-6*t3313;
  t3336 = t2758 + t2774;
  t3368 = -0.503149000008*t3336;
  t3379 = t3291 + t3292 + t3330 + t3368;
  t3975 = -1.*t1025*t370*t1010;
  t3984 = -4.e-6*t370*t3819;
  t4006 = t2325*t3891;
  t4020 = t3975 + t3984 + t4006;
  t4047 = -1.*t31*t1025*t1010;
  t4049 = 4.e-6*t258*t3819;
  t4061 = -1.*t370*t3891;
  t4067 = t4047 + t4049 + t4061;
  t3447 = 1.6e-11*t2454;
  t3463 = 1. + t3447;
  t4071 = -4.e-6*t258*t1025*t1010;
  t4087 = t2643*t3819;
  t4089 = 4.e-6*t370*t3891;
  t4101 = t4071 + t4087 + t4089;
  t3521 = -1.000000000016*t2155;
  t3523 = 1. + t3521;
  t3559 = t3557 + t2774;
  t4108 = -1.*t1025*t2869*t1010;
  t4112 = t2935*t3847;
  t4113 = t2993*t3947;
  t4120 = t4108 + t4112 + t4113;
  t3603 = t3588 + t3299;
  t4149 = -1.*t1025*t3178*t1010;
  t4169 = t3224*t3847;
  t4185 = t3254*t3947;
  t4189 = t4149 + t4169 + t4185;
  t3612 = -1.000000000049*t2740;
  t3621 = 1. + t3612;
  t4206 = -1.*t3389*t1025*t1010;
  t4234 = t3399*t3847;
  t4243 = t3405*t3947;
  t4247 = t4206 + t4234 + t4243;
  t3671 = -1.000000000016*t2740;
  t3679 = 1. + t3671;
  t3701 = t3696 + t2794;
  t3709 = t3557 + t2786;
  t3730 = t3696 + t3109;
  t3733 = -6.5e-11*t2740;
  t3735 = 1. + t3733;
  t3740 = t3588 + t3070;
  t4529 = t1025*t992*t1010;
  t4533 = -1.*t386*t1031;
  t4536 = t4529 + t4533;
  t4547 = t992*t386;
  t4548 = t1025*t1010*t1031;
  t4558 = t4547 + t4548;
  t4565 = t930*t4536;
  t4568 = t871*t4558;
  t4569 = t4565 + t4568;
  t4591 = t871*t4536;
  t4593 = -1.*t930*t4558;
  t4600 = t4591 + t4593;
  t4582 = t1179*t4536;
  t4583 = t1068*t4558;
  t4586 = t4582 + t4583;
  t4604 = t1068*t4536;
  t4614 = -1.*t1179*t4558;
  t4633 = t4604 + t4614;
  t4638 = 4.e-6*t370*t4569;
  t4640 = t2643*t4600;
  t4650 = t4638 + t4640;
  t4681 = -1.*t370*t4569;
  t4688 = 4.e-6*t258*t4600;
  t4694 = t4681 + t4688;
  t4697 = t2325*t4569;
  t4698 = -4.e-6*t370*t4600;
  t4710 = t4697 + t4698;
  t4729 = t3254*t4586;
  t4732 = t3224*t4633;
  t4735 = t4729 + t4732;
  t4749 = t2993*t4586;
  t4754 = t2935*t4633;
  t4758 = t4749 + t4754;
  t4766 = t3405*t4586;
  t4769 = t3399*t4633;
  t4770 = t4766 + t4769;
  t4928 = -0.15121*t871;
  t4935 = -1.*t1025*t992*t1010;
  t4938 = t386*t1031;
  t4940 = t4935 + t4938;
  t4957 = -1.*t930*t4940;
  t4960 = t4957 + t4568;
  t4973 = -1.*t871*t4940;
  t4990 = t4973 + t4593;
  t5000 = 4.e-6*t370*t4960;
  t5003 = t2643*t4990;
  t5004 = t5000 + t5003;
  t5016 = -1.*t370*t4960;
  t5037 = 4.e-6*t258*t4990;
  t5045 = t5016 + t5037;
  t5079 = t2325*t4960;
  t5081 = -4.e-6*t370*t4990;
  t5083 = t5079 + t5081;
  t5241 = t871*t4940;
  t5244 = t930*t4558;
  t5250 = t5241 + t5244;
  t5255 = -1.*t1025*t15*t370;
  t5258 = -1.*t31*t5250;
  t5267 = t5255 + t5000 + t5258;
  t5274 = 4.e-6*t1025*t15*t370;
  t5275 = -1.6e-11*t370*t4960;
  t5279 = 4.e-6*t31*t5250;
  t5281 = t5274 + t5275 + t5279;
  t5301 = t31*t1025*t15;
  t5306 = -4.e-6*t31*t4960;
  t5307 = -1.000000000016*t370*t5250;
  t5311 = t5301 + t5306 + t5307;
  t5398 = t1025*t15*t370;
  t5400 = -4.e-6*t370*t4960;
  t5402 = t2325*t5250;
  t5404 = t5398 + t5400 + t5402;
  t5417 = 4.e-6*t258*t4960;
  t5418 = -1.*t370*t5250;
  t5419 = t5301 + t5417 + t5418;
  t5437 = 4.e-6*t258*t1025*t15;
  t5439 = t2643*t4960;
  t5441 = 4.e-6*t370*t5250;
  t5444 = t5437 + t5439 + t5441;
  t5554 = 0.15121*t1068;
  t5579 = -1.*t1179*t4940;
  t5589 = t5579 + t4583;
  t5592 = -1.*t1068*t4940;
  t5596 = t5592 + t4614;
  t5607 = t3254*t5589;
  t5609 = t3224*t5596;
  t5617 = t5607 + t5609;
  t5633 = t2993*t5589;
  t5636 = t2935*t5596;
  t5646 = t5633 + t5636;
  t5652 = t3405*t5589;
  t5660 = t3399*t5596;
  t5665 = t5652 + t5660;
  t5726 = -2.8e-11*t582;
  t5767 = -7.e-6*t520;
  t5789 = 4.e-6*t520;
  t5857 = t1068*t4940;
  t5865 = t1179*t4558;
  t5866 = t5857 + t5865;
  t5738 = 7.e-6*t520;
  t5920 = 2.8e-11*t582;
  t5844 = -4.e-6*t520;
  t5873 = t5767 + t1853;
  t5875 = t1025*t15*t5873;
  t5893 = -6.5e-11*t582*t5589;
  t5900 = t5789 + t1458;
  t5902 = t5900*t5866;
  t5906 = t5875 + t5893 + t5902;
  t5915 = -1.000000000049*t1025*t15*t582;
  t5916 = t5738 + t1853;
  t5919 = t5916*t5589;
  t5946 = t520 + t5920;
  t5947 = t5946*t5866;
  t5948 = t5915 + t5919 + t5947;
  t5967 = t538 + t5920;
  t5970 = t1025*t15*t5967;
  t5974 = t5844 + t1458;
  t5979 = t5974*t5589;
  t5984 = -1.000000000016*t582*t5866;
  t6006 = t5970 + t5979 + t5984;
  t6086 = -2.8e-11*t2774;
  t6252 = 4.e-6*t2707;
  t6129 = t1025*t15*t2869;
  t6140 = t2935*t5589;
  t6150 = t2993*t5866;
  t6171 = t6129 + t6140 + t6150;
  t6271 = t1025*t15*t3178;
  t6274 = t3224*t5589;
  t6278 = t3254*t5866;
  t6283 = t6271 + t6274 + t6278;
  t6231 = -7.e-6*t2707;
  t6336 = t3389*t1025*t15;
  t6339 = t3399*t5589;
  t6342 = t3405*t5866;
  t6345 = t6336 + t6339 + t6342;
  t6091 = -4.e-6*t2707;
  t6419 = 2.8e-11*t2774;
  t6309 = 7.e-6*t2707;
  p_output1[0]=2.;
  p_output1[1]=t1050*t1197 + t1233*t1272 + t1272*t1314 + t1381*t1402 + t1583*t1625 + t1667*t1743 + t1961*t2025 + t2241*t2339 + t2500*t2541 + t2618*t2699 - 0.041195*(-1.*t2188*t2339 + t2055*t2541 + 4.e-6*t2155*t2699) + t2837*t3020 + t3151*t3260 + t3379*t3425 - 0.14871*(4.e-6*t2188*t2339 + 4.e-6*t2155*t2541 + t2699*t3463) + 0.803147*(t2188*t2541 - 4.e-6*t2188*t2699 + t2339*t3523) - 0.038924*(t3020*t3559 + t3260*t3603 + t3425*t3621) - 0.80315*(t3020*t3679 + t3260*t3701 + t3425*t3709) + 0.148705*(t3020*t3730 + t3260*t3735 + t3425*t3740) - 1.*t15*t381*t386 - 1.*t15*t386*t838 + t1050*t979;
  p_output1[2]=t1025*t1031*t1233*t15 + t1025*t1031*t1314*t15 - 1.*t1010*t1025*t381 + t1381*t3819 + t1583*t3847 + t1667*t3891 + t1961*t3947 + t2241*t4020 + t2500*t4067 + t2618*t4101 - 0.041195*(-1.*t2188*t4020 + t2055*t4067 + 4.e-6*t2155*t4101) + 0.803147*(t3523*t4020 + t2188*t4067 - 4.e-6*t2188*t4101) - 0.14871*(4.e-6*t2188*t4020 + 4.e-6*t2155*t4067 + t3463*t4101) + t2837*t4120 + t3151*t4189 + t3379*t4247 - 0.038924*(t3559*t4120 + t3603*t4189 + t3621*t4247) - 0.80315*(t3679*t4120 + t3701*t4189 + t3709*t4247) + 0.148705*(t3730*t4120 + t3735*t4189 + t3740*t4247) - 1.*t1010*t1025*t838 - 1.*t1025*t1197*t15*t992 - 1.*t1025*t15*t979*t992;
  p_output1[3]=t1233*t4536 + t1314*t4536 + t1197*t4558 + t1667*t4569 + t1961*t4586 + t1381*t4600 + t1583*t4633 + t2618*t4650 + t2500*t4694 + t2241*t4710 - 0.041195*(4.e-6*t2155*t4650 + t2055*t4694 - 1.*t2188*t4710) - 0.14871*(t3463*t4650 + 4.e-6*t2155*t4694 + 4.e-6*t2188*t4710) + 0.803147*(-4.e-6*t2188*t4650 + t2188*t4694 + t3523*t4710) + t3151*t4735 + t2837*t4758 + t3379*t4770 - 0.038924*(t3603*t4735 + t3559*t4758 + t3621*t4770) - 0.80315*(t3701*t4735 + t3679*t4758 + t3709*t4770) + 0.148705*(t3735*t4735 + t3730*t4758 + t3740*t4770) + t4558*t979;
  p_output1[4]=t1667*t4960 + t1381*t4990 + t2618*t5004 + t2500*t5045 + t2241*t5083 - 0.041195*(4.e-6*t2155*t5004 + t2055*t5045 - 1.*t2188*t5083) - 0.14871*(t3463*t5004 + 4.e-6*t2155*t5045 + 4.e-6*t2188*t5083) + 0.803147*(-4.e-6*t2188*t5004 + t2188*t5045 + t3523*t5083) + t4940*(t4928 + 0.15121*t930) + t4558*(t4928 + t954);
  p_output1[5]=t1025*t15*(-4.9936e-13 + t1656 - 0.281210000004*t31) + (-1.2484e-7 + 1.124840000016e-6*t31 + 1.5499600000248e-7*t370)*t4960 + (-0.03874900000062*t31 + 0.281210000008499*t370)*t5250 + t2500*t5267 + t2618*t5281 + t2241*t5311 - 0.041195*(t2055*t5267 + 4.e-6*t2155*t5281 - 1.*t2188*t5311) - 0.14871*(4.e-6*t2155*t5267 + t3463*t5281 + 4.e-6*t2188*t5311) + 0.803147*(t2188*t5267 - 4.e-6*t2188*t5281 + t3523*t5311);
  p_output1[6]=(-0.0398890000006382*t2055 + 0.50315000001605*t2188)*t5404 + (-5.04e-14 - 0.503150000008*t2055 + t2219)*t5419 + (-1.26e-8 + 2.012600000032e-6*t2055 + 1.59556000002553e-7*t2188)*t5444 + 0.803147*(-1.000000000016*t2188*t5404 + t2055*t5419 - 4.e-6*t2055*t5444) - 0.14871*(4.e-6*t2055*t5404 + 4.e-6*t2188*t5419 - 1.6e-11*t2188*t5444) - 0.041195*(-1.*t2055*t5404 - 1.*t2188*t5419 + 4.e-6*t2188*t5444);
  p_output1[7]=t4940*(-0.15121*t1179 + t5554) + t4558*(t1190 + t5554) + t1961*t5589 + t1583*t5596 + t3151*t5617 + t2837*t5646 + t3379*t5665 - 0.038924*(t3603*t5617 + t3559*t5646 + t3621*t5665) - 0.80315*(t3701*t5617 + t3679*t5646 + t3709*t5665) + 0.148705*(t3735*t5617 + t3730*t5646 + t3740*t5665);
  p_output1[8]=t1025*t15*(5.856279999999999e-13 - 0.281209000004*(t520 + t5726) - 2.123459e-6*(t1529 + t5738) - 0.0387489999948987*t582) + t3151*t5906 + t3379*t5948 + t2837*t6006 - 0.038924*(t3603*t5906 + t3621*t5948 + t3559*t6006) - 0.80315*(t3701*t5906 + t3709*t5948 + t3679*t6006) + 0.148705*(t3735*t5906 + t3740*t5948 + t3730*t6006) + t5589*(-1.4640699999999997e-7 - 0.038748999993*(t1529 + t5767) - 1.38024835e-16*t582 - 0.281209000004*(t5789 + t645)) + t5866*(1.0248489999999998e-12 - 0.038748999993*(t538 + t5726) - 0.28120900000849935*t582 - 2.123459e-6*(t5844 + t645));
  p_output1[9]=(1.8190549999999993e-12 - 0.5031490000160505*t2774 - 0.038922999986*(t2713 + t6086) - 3.6777349999999994e-6*(t3299 + t6091))*t6171 + (-2.598649999999999e-7 - 2.3905277499999995e-16*t2774 - 0.038922999986*(t3109 + t6231) - 0.503149000008*(t3299 + t6252))*t6283 + (1.0394599999999997e-12 - 0.03892299998790722*t2774 - 0.503149000008*(t2707 + t6086) - 3.6777349999999994e-6*(t3109 + t6309))*t6345 + 0.148705*(t6171*(t3070 + t6252) - 6.5e-11*t2774*t6283 + (t2794 + t6231)*t6345) - 0.038924*(t6283*(t2794 + t6309) - 1.000000000049*t2774*t6345 + t6171*(t2707 + t6419)) - 0.80315*(-1.000000000016*t2774*t6171 + (t3070 + t6091)*t6283 + t6345*(t2713 + t6419));
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 10, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_swingFootHeight2_DiagonalStance2.hh"

namespace TrotStance2
{

void J_u_swingFootHeight2_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
