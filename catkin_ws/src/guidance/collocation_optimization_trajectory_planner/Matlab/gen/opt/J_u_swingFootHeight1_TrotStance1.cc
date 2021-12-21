/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:17:00 GMT+01:00
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
  double t247;
  double t509;
  double t514;
  double t795;
  double t1130;
  double t1134;
  double t1173;
  double t1174;
  double t1178;
  double t1210;
  double t1334;
  double t1275;
  double t1304;
  double t1359;
  double t958;
  double t965;
  double t1328;
  double t1361;
  double t1380;
  double t1473;
  double t1530;
  double t1533;
  double t1576;
  double t760;
  double t2034;
  double t2054;
  double t2111;
  double t2146;
  double t85;
  double t1883;
  double t1702;
  double t1787;
  double t1791;
  double t1986;
  double t1995;
  double t2012;
  double t2277;
  double t978;
  double t2309;
  double t808;
  double t2144;
  double t2645;
  double t2676;
  double t2775;
  double t1656;
  double t2331;
  double t1604;
  double t2875;
  double t2316;
  double t2323;
  double t2347;
  double t2385;
  double t2397;
  double t2414;
  double t2425;
  double t2449;
  double t2890;
  double t2731;
  double t2771;
  double t2773;
  double t2779;
  double t2786;
  double t2790;
  double t2794;
  double t2802;
  double t2942;
  double t2966;
  double t3092;
  double t3100;
  double t3106;
  double t3109;
  double t3112;
  double t3135;
  double t2581;
  double t3251;
  double t2685;
  double t3391;
  double t3161;
  double t2155;
  double t3860;
  double t3930;
  double t3944;
  double t3969;
  double t3972;
  double t4234;
  double t4235;
  double t4247;
  double t4269;
  double t4506;
  double t4149;
  double t4170;
  double t4217;
  double t4306;
  double t4319;
  double t4333;
  double t4637;
  double t4646;
  double t4653;
  double t4749;
  double t4508;
  double t4535;
  double t4555;
  double t4559;
  double t4570;
  double t4588;
  double t4979;
  double t4921;
  double t4923;
  double t4924;
  double t4925;
  double t4785;
  double t4788;
  double t4823;
  double t4824;
  double t4827;
  double t4844;
  double t1249;
  double t1255;
  double t184;
  double t648;
  double t925;
  double t954;
  double t1080;
  double t1084;
  double t1115;
  double t1419;
  double t1457;
  double t1564;
  double t1566;
  double t1616;
  double t1626;
  double t1673;
  double t1678;
  double t1689;
  double t1866;
  double t1880;
  double t1909;
  double t1918;
  double t1931;
  double t1954;
  double t1957;
  double t2026;
  double t2117;
  double t2237;
  double t2243;
  double t2286;
  double t2289;
  double t2303;
  double t5187;
  double t5189;
  double t5191;
  double t5206;
  double t5207;
  double t5208;
  double t2545;
  double t2556;
  double t2601;
  double t2614;
  double t2701;
  double t2711;
  double t2714;
  double t2819;
  double t2855;
  double t2877;
  double t2881;
  double t2899;
  double t2904;
  double t2929;
  double t3180;
  double t5212;
  double t5213;
  double t5214;
  double t5221;
  double t3276;
  double t5232;
  double t5233;
  double t5237;
  double t5240;
  double t3345;
  double t3355;
  double t5255;
  double t5263;
  double t5265;
  double t5277;
  double t3394;
  double t3504;
  double t3532;
  double t3540;
  double t3691;
  double t3717;
  double t3790;
  double t3840;
  double t3979;
  double t4060;
  double t4105;
  double t4131;
  double t4230;
  double t4265;
  double t4285;
  double t4287;
  double t4348;
  double t4374;
  double t4385;
  double t4410;
  double t4458;
  double t4460;
  double t4463;
  double t5412;
  double t5420;
  double t5423;
  double t5439;
  double t5442;
  double t5454;
  double t4621;
  double t4722;
  double t4758;
  double t4770;
  double t4848;
  double t4864;
  double t4889;
  double t4945;
  double t4964;
  double t4965;
  double t4966;
  double t4984;
  double t4988;
  double t5486;
  double t5487;
  double t5488;
  double t5491;
  double t5567;
  double t5584;
  double t5588;
  double t5591;
  double t5511;
  double t5513;
  double t5520;
  double t5521;
  double t5135;
  double t5146;
  double t5858;
  double t5889;
  double t5948;
  double t6006;
  double t6025;
  double t6037;
  double t6065;
  double t6070;
  double t6072;
  double t6087;
  double t6090;
  double t6093;
  double t6100;
  double t6123;
  double t6134;
  double t6150;
  double t6164;
  double t6172;
  double t6228;
  double t6229;
  double t6237;
  double t6348;
  double t6349;
  double t6353;
  double t6356;
  double t6357;
  double t6360;
  double t6371;
  double t6373;
  double t6380;
  double t6363;
  double t6364;
  double t6365;
  double t6399;
  double t6410;
  double t6425;
  double t6595;
  double t6599;
  double t6601;
  double t6611;
  double t6617;
  double t6634;
  double t6665;
  double t6730;
  double t6735;
  double t6741;
  double t6689;
  double t6698;
  double t6701;
  double t6762;
  double t6775;
  double t6776;
  double t6876;
  double t6877;
  double t6880;
  double t6935;
  double t6939;
  double t6940;
  double t6941;
  double t6951;
  double t6957;
  double t6959;
  double t6962;
  double t6917;
  double t6922;
  double t6923;
  double t6930;
  double t7161;
  double t7176;
  double t7205;
  double t7211;
  double t7070;
  double t7107;
  double t7132;
  double t7133;
  double t7277;
  double t7280;
  double t7468;
  double t7486;
  double t7497;
  double t7498;
  double t7504;
  double t7509;
  double t7514;
  double t7518;
  double t7520;
  double t7523;
  double t7526;
  double t7530;
  double t7531;
  double t7581;
  double t7614;
  double t7632;
  double t7810;
  double t7813;
  double t7853;
  double t7577;
  double t7941;
  double t7726;
  double t7891;
  double t7892;
  double t7899;
  double t7900;
  double t7907;
  double t7920;
  double t7924;
  double t7927;
  double t7938;
  double t7946;
  double t7948;
  double t7952;
  double t7957;
  double t7959;
  double t7960;
  double t7962;
  double t7967;
  double t7969;
  double t8048;
  double t8067;
  double t8068;
  double t8069;
  double t8072;
  double t8088;
  double t8090;
  double t8091;
  double t8092;
  double t8055;
  double t8122;
  double t8127;
  double t8128;
  double t8131;
  double t8153;
  double t8074;
  double t8114;
  double t8101;
  t247 = Cos(var1[16]);
  t509 = -1.*t247;
  t514 = 1. + t509;
  t795 = Sin(var1[16]);
  t1130 = Sin(var1[3]);
  t1134 = Cos(var1[15]);
  t1173 = -1.*t1134;
  t1174 = 1. + t1173;
  t1178 = -0.15121*t1174;
  t1210 = Sin(var1[15]);
  t1334 = Cos(var1[3]);
  t1275 = Cos(var1[5]);
  t1304 = Sin(var1[4]);
  t1359 = Sin(var1[5]);
  t958 = -1. + t247;
  t965 = 4.e-6*t958;
  t1328 = t1275*t1130*t1304;
  t1361 = t1334*t1359;
  t1380 = t1328 + t1361;
  t1473 = t1334*t1275;
  t1530 = -1.*t1130*t1304*t1359;
  t1533 = t1473 + t1530;
  t1576 = 7.e-6*t514;
  t760 = 2.8e-11*t514;
  t2034 = Cos(var1[17]);
  t2054 = -1.*t2034;
  t2111 = 1. + t2054;
  t2146 = Sin(var1[17]);
  t85 = Cos(var1[4]);
  t1883 = -4.e-6*t795;
  t1702 = -1.*t1210*t1380;
  t1787 = t1134*t1533;
  t1791 = t1702 + t1787;
  t1986 = t1134*t1380;
  t1995 = t1210*t1533;
  t2012 = t1986 + t1995;
  t2277 = 2.8e-11*t2111;
  t978 = -7.e-6*t795;
  t2309 = -2.8e-11*t514;
  t808 = -1.*t795;
  t2144 = 7.e-6*t2111;
  t2645 = -1. + t2034;
  t2676 = 4.e-6*t2645;
  t2775 = 4.e-6*t514;
  t1656 = 7.e-6*t795;
  t2331 = -7.e-6*t514;
  t1604 = 4.e-6*t795;
  t2875 = 4.e-6*t2146;
  t2316 = t2309 + t795;
  t2323 = -1.*t85*t2316*t1130;
  t2347 = t2331 + t1883;
  t2385 = t2347*t1791;
  t2397 = -1.000000000016*t514;
  t2414 = 1. + t2397;
  t2425 = t2414*t2012;
  t2449 = t2323 + t2385 + t2425;
  t2890 = 7.e-6*t2146;
  t2731 = -1.000000000049*t514;
  t2771 = 1. + t2731;
  t2773 = -1.*t2771*t85*t1130;
  t2779 = t2775 + t978;
  t2786 = t2779*t1791;
  t2790 = t2309 + t808;
  t2794 = t2790*t2012;
  t2802 = t2773 + t2786 + t2794;
  t2942 = t2775 + t1656;
  t2966 = -1.*t85*t2942*t1130;
  t3092 = -6.5e-11*t514;
  t3100 = 1. + t3092;
  t3106 = t3100*t1791;
  t3109 = t2331 + t1604;
  t3112 = t3109*t2012;
  t3135 = t2966 + t3106 + t3112;
  t2581 = -1.*t2146;
  t3251 = 4.e-6*t2111;
  t2685 = -7.e-6*t2146;
  t3391 = -2.8e-11*t2111;
  t3161 = -7.e-6*t2111;
  t2155 = -4.e-6*t2146;
  t3860 = Cos(var1[6]);
  t3930 = -1.*t3860;
  t3944 = 1. + t3930;
  t3969 = 0.15121*t3944;
  t3972 = Sin(var1[6]);
  t4234 = Cos(var1[7]);
  t4235 = -1.*t4234;
  t4247 = 1. + t4235;
  t4269 = Sin(var1[7]);
  t4506 = -1. + t4234;
  t4149 = t3860*t1533;
  t4170 = -1.*t1380*t3972;
  t4217 = t4149 + t4170;
  t4306 = t3860*t1380;
  t4319 = t1533*t3972;
  t4333 = t4306 + t4319;
  t4637 = Cos(var1[8]);
  t4646 = -1.*t4637;
  t4653 = 1. + t4646;
  t4749 = Sin(var1[8]);
  t4508 = -4.e-6*t85*t4506*t1130;
  t4535 = 1.6e-11*t4506;
  t4555 = 1. + t4535;
  t4559 = t4555*t4217;
  t4570 = 4.e-6*t4333*t4269;
  t4588 = t4508 + t4559 + t4570;
  t4979 = -1. + t4637;
  t4921 = -1.*t85*t4234*t1130;
  t4923 = 4.e-6*t4506*t4217;
  t4924 = t4333*t4269;
  t4925 = t4921 + t4923 + t4924;
  t4785 = -1.000000000016*t4247;
  t4788 = 1. + t4785;
  t4823 = t4788*t4333;
  t4824 = t85*t1130*t4269;
  t4827 = -4.e-6*t4217*t4269;
  t4844 = t4823 + t4824 + t4827;
  t1249 = -0.15121*t1210;
  t1255 = t1178 + t1249;
  t184 = 1.5843479999999999e-12*var1[16];
  t648 = -0.03874900000889869*t514;
  t925 = t760 + t808;
  t954 = -0.281211000004*t925;
  t1080 = t965 + t978;
  t1084 = -1.8134809999999998e-6*t1080;
  t1115 = t184 + t648 + t954 + t1084;
  t1419 = 0.15121*t1210;
  t1457 = t1178 + t1419;
  t1564 = 3.9608699999999997e-7*var1[16];
  t1566 = -1.1787626499999999e-16*t514;
  t1616 = t1576 + t1604;
  t1626 = -0.281211000004*t1616;
  t1673 = t965 + t1656;
  t1678 = -0.038749000006999997*t1673;
  t1689 = t1564 + t1566 + t1626 + t1678;
  t1866 = -2.7726089999999997e-12*var1[16];
  t1880 = -0.2812110000084994*t514;
  t1909 = t1576 + t1883;
  t1918 = -1.8134809999999998e-6*t1909;
  t1931 = t760 + t795;
  t1954 = -0.038749000006999997*t1931;
  t1957 = t1866 + t1880 + t1918 + t1954;
  t2026 = -1.9784030000000015e-12*var1[17];
  t2117 = -0.5031510000160505*t2111;
  t2237 = t2144 + t2155;
  t2243 = -3.367757e-6*t2237;
  t2286 = t2277 + t2146;
  t2289 = -0.038575000014*t2286;
  t2303 = t2026 + t2117 + t2243 + t2289;
  t5187 = t1334*t85*t1275*t1210;
  t5189 = t1134*t1334*t85*t1359;
  t5191 = t5187 + t5189;
  t5206 = -1.*t1134*t1334*t85*t1275;
  t5207 = t1334*t85*t1210*t1359;
  t5208 = t5206 + t5207;
  t2545 = 1.1305160000000008e-12*var1[17];
  t2556 = -0.03857500001589017*t2111;
  t2601 = t2277 + t2581;
  t2614 = -0.5031510000080001*t2601;
  t2701 = t2676 + t2685;
  t2711 = -3.367757e-6*t2701;
  t2714 = t2545 + t2556 + t2614 + t2711;
  t2819 = 2.826290000000002e-7*var1[17];
  t2855 = -2.18904205e-16*t2111;
  t2877 = t2144 + t2875;
  t2881 = -0.5031510000080001*t2877;
  t2899 = t2676 + t2890;
  t2904 = -0.038575000014*t2899;
  t2929 = t2819 + t2855 + t2881 + t2904;
  t3180 = t3161 + t2875;
  t5212 = -1.*t1334*t2316*t1304;
  t5213 = t2347*t5191;
  t5214 = t2414*t5208;
  t5221 = t5212 + t5213 + t5214;
  t3276 = t3251 + t2890;
  t5232 = -1.*t2771*t1334*t1304;
  t5233 = t2779*t5191;
  t5237 = t2790*t5208;
  t5240 = t5232 + t5233 + t5237;
  t3345 = -6.5e-11*t2111;
  t3355 = 1. + t3345;
  t5255 = -1.*t1334*t2942*t1304;
  t5263 = t3100*t5191;
  t5265 = t3109*t5208;
  t5277 = t5255 + t5263 + t5265;
  t3394 = t3391 + t2581;
  t3504 = -1.000000000049*t2111;
  t3532 = 1. + t3504;
  t3540 = t3251 + t2685;
  t3691 = -1.000000000016*t2111;
  t3717 = 1. + t3691;
  t3790 = t3391 + t2146;
  t3840 = t3161 + t2155;
  t3979 = -0.15121*t3972;
  t4060 = t3969 + t3979;
  t4105 = 0.15121*t3972;
  t4131 = t3969 + t4105;
  t4230 = -1.2484e-7*var1[7];
  t4265 = -1.5499600000248e-7*t4247;
  t4285 = 1.124840000016e-6*t4269;
  t4287 = t4230 + t4265 + t4285;
  t4348 = 0.281210000008499*t4247;
  t4374 = 0.03874900000062*t4269;
  t4385 = t4348 + t4374;
  t4410 = 4.9936e-13*var1[7];
  t4458 = -0.03874900000062*t4247;
  t4460 = 0.281210000004*t4269;
  t4463 = t4410 + t4458 + t4460;
  t5412 = t1334*t85*t3860*t1359;
  t5420 = t1334*t85*t1275*t3972;
  t5423 = t5412 + t5420;
  t5439 = -1.*t1334*t85*t1275*t3860;
  t5442 = t1334*t85*t1359*t3972;
  t5454 = t5439 + t5442;
  t4621 = -1.284e-8*var1[8];
  t4722 = -1.5499600000248e-7*t4653;
  t4758 = 2.012840000032e-6*t4749;
  t4770 = t4621 + t4722 + t4758;
  t4848 = 0.503210000016051*t4653;
  t4864 = 0.03874900000062*t4749;
  t4889 = t4848 + t4864;
  t4945 = 5.136e-14*var1[8];
  t4964 = -0.03874900000062*t4653;
  t4965 = 0.503210000008*t4749;
  t4966 = t4945 + t4964 + t4965;
  t4984 = 1.6e-11*t4979;
  t4988 = 1. + t4984;
  t5486 = -4.e-6*t1334*t4506*t1304;
  t5487 = t4555*t5423;
  t5488 = 4.e-6*t5454*t4269;
  t5491 = t5486 + t5487 + t5488;
  t5567 = -1.*t1334*t4234*t1304;
  t5584 = 4.e-6*t4506*t5423;
  t5588 = t5454*t4269;
  t5591 = t5567 + t5584 + t5588;
  t5511 = t4788*t5454;
  t5513 = t1334*t1304*t4269;
  t5520 = -4.e-6*t5423*t4269;
  t5521 = t5511 + t5513 + t5520;
  t5135 = -1.000000000016*t4653;
  t5146 = 1. + t5135;
  t5858 = t1334*t1275*t1304;
  t5889 = -1.*t1130*t1359;
  t5948 = t5858 + t5889;
  t6006 = t1275*t1130;
  t6025 = t1334*t1304*t1359;
  t6037 = t6006 + t6025;
  t6065 = t1210*t5948;
  t6070 = t1134*t6037;
  t6072 = t6065 + t6070;
  t6087 = t1134*t5948;
  t6090 = -1.*t1210*t6037;
  t6093 = t6087 + t6090;
  t6100 = t3109*t6072;
  t6123 = t3100*t6093;
  t6134 = t6100 + t6123;
  t6150 = t2790*t6072;
  t6164 = t2779*t6093;
  t6172 = t6150 + t6164;
  t6228 = t2414*t6072;
  t6229 = t2347*t6093;
  t6237 = t6228 + t6229;
  t6348 = t3860*t5948;
  t6349 = -1.*t6037*t3972;
  t6353 = t6348 + t6349;
  t6356 = t3860*t6037;
  t6357 = t5948*t3972;
  t6360 = t6356 + t6357;
  t6371 = t4788*t6360;
  t6373 = -4.e-6*t6353*t4269;
  t6380 = t6371 + t6373;
  t6363 = t4555*t6353;
  t6364 = 4.e-6*t6360*t4269;
  t6365 = t6363 + t6364;
  t6399 = 4.e-6*t4506*t6353;
  t6410 = t6360*t4269;
  t6425 = t6399 + t6410;
  t6595 = -1.*t1334*t1275*t1304;
  t6599 = t1130*t1359;
  t6601 = t6595 + t6599;
  t6611 = -1.*t3860*t6601;
  t6617 = t6611 + t6349;
  t6634 = -1.*t6601*t3972;
  t6665 = t6356 + t6634;
  t6730 = t4788*t6665;
  t6735 = -4.e-6*t6617*t4269;
  t6741 = t6730 + t6735;
  t6689 = t4555*t6617;
  t6698 = 4.e-6*t6665*t4269;
  t6701 = t6689 + t6698;
  t6762 = 4.e-6*t4506*t6617;
  t6775 = t6665*t4269;
  t6776 = t6762 + t6775;
  t6876 = t3860*t6601;
  t6877 = t6037*t3972;
  t6880 = t6876 + t6877;
  t6935 = -1.*t1334*t85*t4234;
  t6939 = -4.e-6*t4234*t6665;
  t6940 = -1.000000000016*t6880*t4269;
  t6941 = t6935 + t6939 + t6940;
  t6951 = t4234*t6880;
  t6957 = -1.*t1334*t85*t4269;
  t6959 = -4.e-6*t6665*t4269;
  t6962 = t6951 + t6957 + t6959;
  t6917 = 4.e-6*t4234*t6880;
  t6922 = -4.e-6*t1334*t85*t4269;
  t6923 = -1.6e-11*t6665*t4269;
  t6930 = t6917 + t6922 + t6923;
  t7161 = 4.e-6*t1334*t85*t4506;
  t7176 = t4555*t6665;
  t7205 = 4.e-6*t6880*t4269;
  t7211 = t7161 + t7176 + t7205;
  t7070 = t1334*t85*t4234;
  t7107 = 4.e-6*t4506*t6665;
  t7132 = t6880*t4269;
  t7133 = t7070 + t7107 + t7132;
  t7277 = t4788*t6880;
  t7280 = t7277 + t6957 + t6959;
  t7468 = -1.*t1210*t6601;
  t7486 = t7468 + t6070;
  t7497 = -1.*t1134*t6601;
  t7498 = t7497 + t6090;
  t7504 = t3109*t7486;
  t7509 = t3100*t7498;
  t7514 = t7504 + t7509;
  t7518 = t2790*t7486;
  t7520 = t2779*t7498;
  t7523 = t7518 + t7520;
  t7526 = t2414*t7486;
  t7530 = t2347*t7498;
  t7531 = t7526 + t7530;
  t7581 = 2.8e-11*t795;
  t7614 = 7.e-6*t247;
  t7632 = 4.e-6*t247;
  t7810 = t1134*t6601;
  t7813 = t1210*t6037;
  t7853 = t7810 + t7813;
  t7577 = -7.e-6*t247;
  t7941 = -2.8e-11*t795;
  t7726 = -4.e-6*t247;
  t7891 = t7614 + t1604;
  t7892 = t1334*t85*t7891;
  t7899 = -6.5e-11*t795*t7486;
  t7900 = t7632 + t978;
  t7907 = t7900*t7853;
  t7920 = t7892 + t7899 + t7907;
  t7924 = -1.000000000049*t1334*t85*t795;
  t7927 = t7577 + t1604;
  t7938 = t7927*t7486;
  t7946 = t509 + t7941;
  t7948 = t7946*t7853;
  t7952 = t7924 + t7938 + t7948;
  t7957 = t247 + t7941;
  t7959 = t1334*t85*t7957;
  t7960 = t7726 + t978;
  t7962 = t7960*t7486;
  t7967 = -1.000000000016*t795*t7853;
  t7969 = t7959 + t7962 + t7967;
  t8048 = 2.8e-11*t2146;
  t8067 = t1334*t85*t2316;
  t8068 = t2347*t7486;
  t8069 = t2414*t7853;
  t8072 = t8067 + t8068 + t8069;
  t8088 = t2771*t1334*t85;
  t8090 = t2779*t7486;
  t8091 = t2790*t7853;
  t8092 = t8088 + t8090 + t8091;
  t8055 = -4.e-6*t2034;
  t8122 = t1334*t85*t2942;
  t8127 = t3100*t7486;
  t8128 = t3109*t7853;
  t8131 = t8122 + t8127 + t8128;
  t8153 = -2.8e-11*t2146;
  t8074 = -7.e-6*t2034;
  t8114 = 4.e-6*t2034;
  t8101 = 7.e-6*t2034;
  p_output1[0]=2.;
  p_output1[1]=t1255*t1380 + t1457*t1533 + t1689*t1791 + t1957*t2012 + t2303*t2449 + t2714*t2802 + t2929*t3135 - 0.148715*(t2449*t3180 + t2802*t3276 + t3135*t3355) - 0.038576*(t2449*t3394 + t2802*t3532 + t3135*t3540) - 0.80315*(t2449*t3717 + t2802*t3790 + t3135*t3840) + t1533*t4060 + t1380*t4131 + t4217*t4287 + t4333*t4385 + t4588*t4770 + t4844*t4889 + t4925*t4966 - 0.03875*(t4749*t4844 + t4637*t4925 + 4.e-6*t4588*t4979) + 0.14871*(4.e-6*t4749*t4844 + 4.e-6*t4925*t4979 + t4588*t4988) + 0.80321*(-4.e-6*t4588*t4749 - 1.*t4749*t4925 + t4844*t5146) - 1.*t1115*t1130*t85 - 1.*t1130*t4463*t85;
  p_output1[2]=-1.*t1115*t1304*t1334 - 1.*t1304*t1334*t4463 + t1689*t5191 + t1957*t5208 + t2303*t5221 + t2714*t5240 + t2929*t5277 - 0.148715*(t3180*t5221 + t3276*t5240 + t3355*t5277) - 0.038576*(t3394*t5221 + t3532*t5240 + t3540*t5277) - 0.80315*(t3717*t5221 + t3790*t5240 + t3840*t5277) + t4287*t5423 + t4385*t5454 + t4770*t5491 + t4889*t5521 + t4966*t5591 - 0.03875*(4.e-6*t4979*t5491 + t4749*t5521 + t4637*t5591) + 0.80321*(-4.e-6*t4749*t5491 + t5146*t5521 - 1.*t4749*t5591) + 0.14871*(t4988*t5491 + 4.e-6*t4749*t5521 + 4.e-6*t4979*t5591) - 1.*t1255*t1275*t1334*t85 + t1334*t1359*t1457*t85 + t1334*t1359*t4060*t85 - 1.*t1275*t1334*t4131*t85;
  p_output1[3]=t1457*t5948 + t4060*t5948 + t1255*t6037 + t4131*t6037 + t1957*t6072 + t1689*t6093 + t2929*t6134 + t2714*t6172 + t2303*t6237 - 0.148715*(t3355*t6134 + t3276*t6172 + t3180*t6237) - 0.038576*(t3540*t6134 + t3532*t6172 + t3394*t6237) - 0.80315*(t3840*t6134 + t3790*t6172 + t3717*t6237) + t4287*t6353 + t4385*t6360 + t4770*t6365 + t4889*t6380 + t4966*t6425 - 0.03875*(4.e-6*t4979*t6365 + t4749*t6380 + t4637*t6425) + 0.80321*(-4.e-6*t4749*t6365 + t5146*t6380 - 1.*t4749*t6425) + 0.14871*(t4988*t6365 + 4.e-6*t4749*t6380 + 4.e-6*t4979*t6425);
  p_output1[4]=(-0.15121*t3860 + t4105)*t6037 + (0.15121*t3860 + t4105)*t6601 + t4287*t6617 + t4385*t6665 + t4770*t6701 + t4889*t6741 + t4966*t6776 - 0.03875*(4.e-6*t4979*t6701 + t4749*t6741 + t4637*t6776) + 0.80321*(-4.e-6*t4749*t6701 + t5146*t6741 - 1.*t4749*t6776) + 0.14871*(t4988*t6701 + 4.e-6*t4749*t6741 + 4.e-6*t4979*t6776);
  p_output1[5]=(-1.2484e-7 + 1.124840000016e-6*t4234 - 1.5499600000248e-7*t4269)*t6665 + (0.03874900000062*t4234 + 0.281210000008499*t4269)*t6880 + t4770*t6930 + t4889*t6941 + t4966*t6962 - 0.03875*(4.e-6*t4979*t6930 + t4749*t6941 + t4637*t6962) + 0.80321*(-4.e-6*t4749*t6930 + t5146*t6941 - 1.*t4749*t6962) + 0.14871*(t4988*t6930 + 4.e-6*t4749*t6941 + 4.e-6*t4979*t6962) + t1334*(4.9936e-13 + 0.281210000004*t4234 - 0.03874900000062*t4269)*t85;
  p_output1[6]=(5.136e-14 + 0.503210000008*t4637 - 0.03874900000062*t4749)*t7133 + (-1.284e-8 + 2.012840000032e-6*t4637 - 1.5499600000248e-7*t4749)*t7211 + (0.03874900000062*t4637 + 0.503210000016051*t4749)*t7280 + 0.14871*(-4.e-6*t4749*t7133 - 1.6e-11*t4749*t7211 + 4.e-6*t4637*t7280) - 0.03875*(-1.*t4749*t7133 - 4.e-6*t4749*t7211 + t4637*t7280) + 0.80321*(-1.*t4637*t7133 - 4.e-6*t4637*t7211 - 1.000000000016*t4749*t7280);
  p_output1[7]=(0.15121*t1134 + t1249)*t6037 + (-0.15121*t1134 + t1249)*t6601 + t1957*t7486 + t1689*t7498 + t2929*t7514 + t2714*t7523 + t2303*t7531 - 0.148715*(t3355*t7514 + t3276*t7523 + t3180*t7531) - 0.038576*(t3540*t7514 + t3532*t7523 + t3394*t7531) - 0.80315*(t3840*t7514 + t3790*t7523 + t3717*t7531);
  p_output1[8]=t2929*t7920 + t7853*(-2.7726089999999997e-12 - 0.038749000006999997*(t247 + t7581) - 1.8134809999999998e-6*(t1656 + t7726) - 0.2812110000084994*t795) + t7486*(3.9608699999999997e-7 - 0.038749000006999997*(t1883 + t7614) - 0.281211000004*(t1656 + t7632) - 1.1787626499999999e-16*t795) + t2714*t7952 + t2303*t7969 - 0.148715*(t3355*t7920 + t3276*t7952 + t3180*t7969) - 0.038576*(t3540*t7920 + t3532*t7952 + t3394*t7969) - 0.80315*(t3840*t7920 + t3790*t7952 + t3717*t7969) + t1334*(1.5843479999999999e-12 - 1.8134809999999998e-6*(t1883 + t7577) - 0.281211000004*(t509 + t7581) - 0.03874900000889869*t795)*t85;
  p_output1[9]=(-1.9784030000000015e-12 - 0.5031510000160505*t2146 - 0.038575000014*(t2034 + t8048) - 3.367757e-6*(t2890 + t8055))*t8072 + (1.1305160000000008e-12 - 0.03857500001589017*t2146 - 0.5031510000080001*(t2054 + t8048) - 3.367757e-6*(t2155 + t8074))*t8092 + (2.826290000000002e-7 - 2.18904205e-16*t2146 - 0.038575000014*(t2155 + t8101) - 0.5031510000080001*(t2890 + t8114))*t8131 - 0.148715*(t8092*(t2875 + t8101) + t8072*(t2685 + t8114) - 6.5e-11*t2146*t8131) - 0.80315*(-1.000000000016*t2146*t8072 + (t2685 + t8055)*t8131 + t8092*(t2034 + t8153)) - 0.038576*(-1.000000000049*t2146*t8092 + (t2875 + t8074)*t8131 + t8072*(t2054 + t8153));
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

#include "J_u_swingFootHeight1_TrotStance1.hh"

namespace TrotStance1
{

void J_u_swingFootHeight1_TrotStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
