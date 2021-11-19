/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:28:22 GMT+01:00
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
  double t172;
  double t694;
  double t778;
  double t879;
  double t915;
  double t964;
  double t1031;
  double t233;
  double t271;
  double t284;
  double t477;
  double t687;
  double t1130;
  double t13;
  double t1314;
  double t1373;
  double t1380;
  double t1426;
  double t1435;
  double t1441;
  double t1460;
  double t1490;
  double t1501;
  double t1525;
  double t1636;
  double t1543;
  double t1545;
  double t1549;
  double t1556;
  double t1571;
  double t1596;
  double t1664;
  double t1681;
  double t1685;
  double t1694;
  double t1831;
  double t1854;
  double t1856;
  double t1866;
  double t1867;
  double t1870;
  double t1099;
  double t1123;
  double t890;
  double t975;
  double t1405;
  double t1407;
  double t1415;
  double t1170;
  double t1185;
  double t1206;
  double t1261;
  double t1274;
  double t1759;
  double t1792;
  double t1806;
  double t1818;
  double t1821;
  double t2139;
  double t2178;
  double t2185;
  double t2218;
  double t2222;
  double t2225;
  double t1621;
  double t1626;
  double t1640;
  double t1645;
  double t1647;
  double t1514;
  double t1535;
  double t1537;
  double t2231;
  double t2234;
  double t2235;
  double t2248;
  double t2257;
  double t2266;
  double t1983;
  double t1984;
  double t2276;
  double t2280;
  double t2283;
  double t1910;
  double t1920;
  double t2407;
  double t2196;
  double t2230;
  double t2246;
  double t2271;
  double t2285;
  double t2289;
  double t2302;
  double t2342;
  double t2343;
  double t2346;
  double t2348;
  double t2360;
  double t2368;
  double t2369;
  double t2374;
  double t2379;
  double t2397;
  double t2400;
  double t2401;
  double t2403;
  double t2522;
  double t2524;
  double t2527;
  double t2545;
  double t2548;
  double t2552;
  double t2565;
  double t2566;
  double t2578;
  double t2584;
  double t2590;
  double t2598;
  double t2602;
  double t2608;
  double t2789;
  double t2795;
  double t2798;
  double t2801;
  double t2820;
  double t2829;
  double t2832;
  double t2853;
  double t2855;
  double t2864;
  double t2866;
  double t143;
  double t280;
  double t464;
  double t513;
  double t589;
  double t2929;
  double t2945;
  double t2944;
  double t2948;
  double t2964;
  double t2972;
  double t2982;
  double t2984;
  double t2994;
  double t3001;
  double t3003;
  double t3007;
  double t3010;
  double t3013;
  double t3021;
  double t3024;
  double t3030;
  double t3031;
  double t3067;
  double t3069;
  double t3084;
  double t3091;
  double t3138;
  double t3140;
  double t3151;
  double t3159;
  double t3398;
  double t3402;
  double t3403;
  double t3419;
  double t3438;
  double t3458;
  double t3466;
  double t3470;
  double t3471;
  double t3477;
  double t3483;
  double t3488;
  double t3494;
  double t3498;
  double t3515;
  double t3522;
  double t3532;
  double t3533;
  double t3616;
  double t3627;
  double t3628;
  double t3656;
  double t3670;
  double t3694;
  double t3712;
  double t3715;
  double t3727;
  double t3739;
  double t3741;
  double t3743;
  double t3756;
  double t3759;
  double t3760;
  double t3768;
  double t3771;
  double t3772;
  double t3791;
  double t3793;
  double t3794;
  double t2411;
  double t2422;
  double t2432;
  double t3845;
  double t3854;
  double t3856;
  double t3867;
  double t3870;
  double t3876;
  double t3884;
  double t3901;
  double t3903;
  double t3904;
  double t3906;
  double t3907;
  double t3908;
  double t3920;
  double t3922;
  double t3924;
  double t2445;
  double t2446;
  double t2469;
  double t2471;
  double t2474;
  double t2489;
  double t2490;
  double t2497;
  double t4021;
  double t4025;
  double t4030;
  double t4045;
  double t4048;
  double t4051;
  double t4055;
  double t4065;
  double t4072;
  double t4075;
  double t4079;
  double t4087;
  double t4088;
  double t4090;
  double t2731;
  double t2740;
  double t2773;
  double t2809;
  double t2816;
  double t2839;
  double t2847;
  double t2850;
  double t4150;
  double t4153;
  double t4174;
  double t4175;
  double t4183;
  double t4194;
  double t4195;
  double t4203;
  double t4215;
  double t4216;
  double t4217;
  double t4227;
  double t4328;
  double t4331;
  double t4332;
  double t4341;
  double t4344;
  double t4346;
  double t4352;
  double t4371;
  double t4372;
  double t4373;
  double t4378;
  double t4382;
  double t4393;
  double t4406;
  double t4409;
  double t4423;
  double t4436;
  double t4439;
  double t4500;
  double t4503;
  double t4505;
  double t4520;
  double t4521;
  double t4523;
  double t4526;
  double t4528;
  double t4537;
  double t4540;
  double t4541;
  double t4545;
  double t4551;
  double t4552;
  double t4558;
  double t4561;
  double t4562;
  double t4724;
  double t4725;
  double t4726;
  double t4742;
  double t4783;
  double t4792;
  double t4801;
  double t4812;
  double t4814;
  double t4815;
  double t4828;
  double t4832;
  double t4836;
  double t4838;
  double t4840;
  double t4845;
  double t4902;
  double t4905;
  double t4906;
  double t4913;
  double t4917;
  double t4920;
  double t4923;
  double t4925;
  double t4928;
  double t4939;
  double t4944;
  double t4945;
  double t4948;
  double t5019;
  double t5021;
  double t5022;
  double t5024;
  double t5031;
  double t5032;
  double t5033;
  double t5035;
  double t5041;
  double t5042;
  double t5048;
  t172 = Cos(var1[10]);
  t694 = Cos(var1[9]);
  t778 = -1.*t694;
  t879 = 1. + t778;
  t915 = Sin(var1[9]);
  t964 = -0.15121*t915;
  t1031 = Sin(var1[4]);
  t233 = -1.*t172;
  t271 = 1. + t233;
  t284 = -1. + t172;
  t477 = Sin(var1[10]);
  t687 = Cos(var1[5]);
  t1130 = Sin(var1[5]);
  t13 = Cos(var1[4]);
  t1314 = t687*t915*t1031;
  t1373 = t694*t1031*t1130;
  t1380 = t1314 + t1373;
  t1426 = -1.*t694*t687*t1031;
  t1435 = t915*t1031*t1130;
  t1441 = t1426 + t1435;
  t1460 = Cos(var1[11]);
  t1490 = -1.*t1460;
  t1501 = 1. + t1490;
  t1525 = Sin(var1[11]);
  t1636 = -1. + t1460;
  t1543 = t13*t477;
  t1545 = -4.e-6*t477*t1380;
  t1549 = -1.000000000016*t271;
  t1556 = 1. + t1549;
  t1571 = t1556*t1441;
  t1596 = t1543 + t1545 + t1571;
  t1664 = t172*t13;
  t1681 = 4.e-6*t271*t1380;
  t1685 = -1.*t477*t1441;
  t1694 = t1664 + t1681 + t1685;
  t1831 = 4.e-6*t271*t13;
  t1854 = 1.6e-11*t284;
  t1856 = 1. + t1854;
  t1866 = t1856*t1380;
  t1867 = 4.e-6*t477*t1441;
  t1870 = t1831 + t1866 + t1867;
  t1099 = -0.15121*t879;
  t1123 = t1099 + t964;
  t890 = 0.15121*t879;
  t975 = t890 + t964;
  t1405 = 0.281210000008499*t271;
  t1407 = -0.03874900000062*t477;
  t1415 = t1405 + t1407;
  t1170 = -1.2484e-7*var1[10];
  t1185 = 2.479936e-18*t271;
  t1206 = -1.54996e-7*t284;
  t1261 = 1.124840000016e-6*t477;
  t1274 = t1170 + t1185 + t1206 + t1261;
  t1759 = -1.26e-8*var1[11];
  t1792 = 2.552896e-18*t1501;
  t1806 = -1.59556e-7*t1636;
  t1818 = 2.012600000032e-6*t1525;
  t1821 = t1759 + t1792 + t1806 + t1818;
  t2139 = -1.*t13*t687*t915;
  t2178 = -1.*t694*t13*t1130;
  t2185 = t2139 + t2178;
  t2218 = -1.*t694*t13*t687;
  t2222 = t13*t915*t1130;
  t2225 = t2218 + t2222;
  t1621 = -5.04e-14*var1[11];
  t1626 = -0.039889*t1501;
  t1640 = 6.38224e-13*t1636;
  t1645 = -0.503150000008*t1525;
  t1647 = t1621 + t1626 + t1640 + t1645;
  t1514 = 0.50315000001605*t1501;
  t1535 = -0.0398890000006382*t1525;
  t1537 = t1514 + t1535;
  t2231 = 4.e-6*t477*t2185;
  t2234 = t1856*t2225;
  t2235 = t2231 + t2234;
  t2248 = -1.*t477*t2185;
  t2257 = 4.e-6*t271*t2225;
  t2266 = t2248 + t2257;
  t1983 = -1.000000000016*t1501;
  t1984 = 1. + t1983;
  t2276 = t1556*t2185;
  t2280 = -4.e-6*t477*t2225;
  t2283 = t2276 + t2280;
  t1910 = 1.6e-11*t1636;
  t1920 = 1. + t1910;
  t2407 = -0.15121*t694;
  t2196 = t1415*t2185;
  t2230 = t1274*t2225;
  t2246 = t1821*t2235;
  t2271 = t1647*t2266;
  t2285 = t1537*t2283;
  t2289 = -4.e-6*t1525*t2235;
  t2302 = t1525*t2266;
  t2342 = t1984*t2283;
  t2343 = t2289 + t2302 + t2342;
  t2346 = 0.803147*t2343;
  t2348 = 4.e-6*t1501*t2235;
  t2360 = t1460*t2266;
  t2368 = -1.*t1525*t2283;
  t2369 = t2348 + t2360 + t2368;
  t2374 = -0.041195*t2369;
  t2379 = t1920*t2235;
  t2397 = 4.e-6*t1501*t2266;
  t2400 = 4.e-6*t1525*t2283;
  t2401 = t2379 + t2397 + t2400;
  t2403 = -0.14871*t2401;
  t2522 = t694*t13*t687;
  t2524 = -1.*t13*t915*t1130;
  t2527 = t2522 + t2524;
  t2545 = -1.*t477*t1031;
  t2548 = -1.*t172*t2527;
  t2552 = t2545 + t2231 + t2548;
  t2565 = 4.e-6*t477*t1031;
  t2566 = -1.6e-11*t477*t2185;
  t2578 = 4.e-6*t172*t2527;
  t2584 = t2565 + t2566 + t2578;
  t2590 = t172*t1031;
  t2598 = -4.e-6*t172*t2185;
  t2602 = -1.000000000016*t477*t2527;
  t2608 = t2590 + t2598 + t2602;
  t2789 = t477*t1031;
  t2795 = -4.e-6*t477*t2185;
  t2798 = t1556*t2527;
  t2801 = t2789 + t2795 + t2798;
  t2820 = 4.e-6*t271*t2185;
  t2829 = -1.*t477*t2527;
  t2832 = t2590 + t2820 + t2829;
  t2853 = 4.e-6*t271*t1031;
  t2855 = t1856*t2185;
  t2864 = 4.e-6*t477*t2527;
  t2866 = t2853 + t2855 + t2864;
  t143 = -4.9936e-13*var1[10];
  t280 = -0.038749*t271;
  t464 = 6.19984e-13*t284;
  t513 = -0.281210000004*t477;
  t589 = t143 + t280 + t464 + t513;
  t2929 = Cos(var1[3]);
  t2945 = Sin(var1[3]);
  t2944 = t2929*t687*t1031;
  t2948 = -1.*t2945*t1130;
  t2964 = t2944 + t2948;
  t2972 = -1.*t687*t2945;
  t2982 = -1.*t2929*t1031*t1130;
  t2984 = t2972 + t2982;
  t2994 = -1.*t915*t2964;
  t3001 = t694*t2984;
  t3003 = t2994 + t3001;
  t3007 = t694*t2964;
  t3010 = t915*t2984;
  t3013 = t3007 + t3010;
  t3021 = -1.*t2929*t13*t477;
  t3024 = -4.e-6*t477*t3003;
  t3030 = t1556*t3013;
  t3031 = t3021 + t3024 + t3030;
  t3067 = -1.*t172*t2929*t13;
  t3069 = 4.e-6*t271*t3003;
  t3084 = -1.*t477*t3013;
  t3091 = t3067 + t3069 + t3084;
  t3138 = -4.e-6*t271*t2929*t13;
  t3140 = t1856*t3003;
  t3151 = 4.e-6*t477*t3013;
  t3159 = t3138 + t3140 + t3151;
  t3398 = -1.*t13*t687*t915*t2945;
  t3402 = -1.*t694*t13*t2945*t1130;
  t3403 = t3398 + t3402;
  t3419 = t694*t13*t687*t2945;
  t3438 = -1.*t13*t915*t2945*t1130;
  t3458 = t3419 + t3438;
  t3466 = t477*t2945*t1031;
  t3470 = -4.e-6*t477*t3403;
  t3471 = t1556*t3458;
  t3477 = t3466 + t3470 + t3471;
  t3483 = t172*t2945*t1031;
  t3488 = 4.e-6*t271*t3403;
  t3494 = -1.*t477*t3458;
  t3498 = t3483 + t3488 + t3494;
  t3515 = 4.e-6*t271*t2945*t1031;
  t3522 = t1856*t3403;
  t3532 = 4.e-6*t477*t3458;
  t3533 = t3515 + t3522 + t3532;
  t3616 = -1.*t687*t2945*t1031;
  t3627 = -1.*t2929*t1130;
  t3628 = t3616 + t3627;
  t3656 = t2929*t687;
  t3670 = -1.*t2945*t1031*t1130;
  t3694 = t3656 + t3670;
  t3712 = t915*t3628;
  t3715 = t694*t3694;
  t3727 = t3712 + t3715;
  t3739 = t694*t3628;
  t3741 = -1.*t915*t3694;
  t3743 = t3739 + t3741;
  t3756 = 4.e-6*t477*t3727;
  t3759 = t1856*t3743;
  t3760 = t3756 + t3759;
  t3768 = -1.*t477*t3727;
  t3771 = 4.e-6*t271*t3743;
  t3772 = t3768 + t3771;
  t3791 = t1556*t3727;
  t3793 = -4.e-6*t477*t3743;
  t3794 = t3791 + t3793;
  t2411 = 0.15121*t915;
  t2422 = t2407 + t2411;
  t2432 = t2407 + t964;
  t3845 = t687*t2945*t1031;
  t3854 = t2929*t1130;
  t3856 = t3845 + t3854;
  t3867 = -1.*t915*t3856;
  t3870 = t3867 + t3715;
  t3876 = -1.*t694*t3856;
  t3884 = t3876 + t3741;
  t3901 = 4.e-6*t477*t3870;
  t3903 = t1856*t3884;
  t3904 = t3901 + t3903;
  t3906 = -1.*t477*t3870;
  t3907 = 4.e-6*t271*t3884;
  t3908 = t3906 + t3907;
  t3920 = t1556*t3870;
  t3922 = -4.e-6*t477*t3884;
  t3924 = t3920 + t3922;
  t2445 = -0.281210000004*t172;
  t2446 = -4.9936e-13 + t2445 + t1407;
  t2469 = 1.124840000016e-6*t172;
  t2471 = 1.5499600000248e-7*t477;
  t2474 = -1.2484e-7 + t2469 + t2471;
  t2489 = -0.03874900000062*t172;
  t2490 = 0.281210000008499*t477;
  t2497 = t2489 + t2490;
  t4021 = t694*t3856;
  t4025 = t915*t3694;
  t4030 = t4021 + t4025;
  t4045 = t13*t477*t2945;
  t4048 = -1.*t172*t4030;
  t4051 = t4045 + t3901 + t4048;
  t4055 = -4.e-6*t13*t477*t2945;
  t4065 = -1.6e-11*t477*t3870;
  t4072 = 4.e-6*t172*t4030;
  t4075 = t4055 + t4065 + t4072;
  t4079 = -1.*t172*t13*t2945;
  t4087 = -4.e-6*t172*t3870;
  t4088 = -1.000000000016*t477*t4030;
  t4090 = t4079 + t4087 + t4088;
  t2731 = -0.0398890000006382*t1460;
  t2740 = 0.50315000001605*t1525;
  t2773 = t2731 + t2740;
  t2809 = -0.503150000008*t1460;
  t2816 = -5.04e-14 + t2809 + t1535;
  t2839 = 2.012600000032e-6*t1460;
  t2847 = 1.59556000002553e-7*t1525;
  t2850 = -1.26e-8 + t2839 + t2847;
  t4150 = -1.*t13*t477*t2945;
  t4153 = -4.e-6*t477*t3870;
  t4174 = t1556*t4030;
  t4175 = t4150 + t4153 + t4174;
  t4183 = 4.e-6*t271*t3870;
  t4194 = -1.*t477*t4030;
  t4195 = t4079 + t4183 + t4194;
  t4203 = -4.e-6*t271*t13*t2945;
  t4215 = t1856*t3870;
  t4216 = 4.e-6*t477*t4030;
  t4217 = t4203 + t4215 + t4216;
  t4227 = t1460*t4195;
  t4328 = t2929*t13*t687*t915;
  t4331 = t694*t2929*t13*t1130;
  t4332 = t4328 + t4331;
  t4341 = -1.*t694*t2929*t13*t687;
  t4344 = t2929*t13*t915*t1130;
  t4346 = t4341 + t4344;
  t4352 = -1.*t2929*t477*t1031;
  t4371 = -4.e-6*t477*t4332;
  t4372 = t1556*t4346;
  t4373 = t4352 + t4371 + t4372;
  t4378 = -1.*t172*t2929*t1031;
  t4382 = 4.e-6*t271*t4332;
  t4393 = -1.*t477*t4346;
  t4406 = t4378 + t4382 + t4393;
  t4409 = -4.e-6*t271*t2929*t1031;
  t4423 = t1856*t4332;
  t4436 = 4.e-6*t477*t4346;
  t4439 = t4409 + t4423 + t4436;
  t4500 = t687*t2945;
  t4503 = t2929*t1031*t1130;
  t4505 = t4500 + t4503;
  t4520 = t915*t2964;
  t4521 = t694*t4505;
  t4523 = t4520 + t4521;
  t4526 = -1.*t915*t4505;
  t4528 = t3007 + t4526;
  t4537 = 4.e-6*t477*t4523;
  t4540 = t1856*t4528;
  t4541 = t4537 + t4540;
  t4545 = -1.*t477*t4523;
  t4551 = 4.e-6*t271*t4528;
  t4552 = t4545 + t4551;
  t4558 = t1556*t4523;
  t4561 = -4.e-6*t477*t4528;
  t4562 = t4558 + t4561;
  t4724 = -1.*t2929*t687*t1031;
  t4725 = t2945*t1130;
  t4726 = t4724 + t4725;
  t4742 = -1.*t915*t4726;
  t4783 = t4742 + t4521;
  t4792 = -1.*t694*t4726;
  t4801 = t4792 + t4526;
  t4812 = 4.e-6*t477*t4783;
  t4814 = t1856*t4801;
  t4815 = t4812 + t4814;
  t4828 = -1.*t477*t4783;
  t4832 = 4.e-6*t271*t4801;
  t4836 = t4828 + t4832;
  t4838 = t1556*t4783;
  t4840 = -4.e-6*t477*t4801;
  t4845 = t4838 + t4840;
  t4902 = t694*t4726;
  t4905 = t915*t4505;
  t4906 = t4902 + t4905;
  t4913 = -1.*t172*t4906;
  t4917 = t3021 + t4812 + t4913;
  t4920 = 4.e-6*t2929*t13*t477;
  t4923 = -1.6e-11*t477*t4783;
  t4925 = 4.e-6*t172*t4906;
  t4928 = t4920 + t4923 + t4925;
  t4939 = t172*t2929*t13;
  t4944 = -4.e-6*t172*t4783;
  t4945 = -1.000000000016*t477*t4906;
  t4948 = t4939 + t4944 + t4945;
  t5019 = t2929*t13*t477;
  t5021 = -4.e-6*t477*t4783;
  t5022 = t1556*t4906;
  t5024 = t5019 + t5021 + t5022;
  t5031 = 4.e-6*t271*t4783;
  t5032 = -1.*t477*t4906;
  t5033 = t4939 + t5031 + t5032;
  t5035 = 4.e-6*t271*t2929*t13;
  t5041 = t1856*t4783;
  t5042 = 4.e-6*t477*t4906;
  t5048 = t5035 + t5041 + t5042;
  p_output1[0]=1.;
  p_output1[1]=t1031*t1123*t1130 + t1274*t1380 + t1415*t1441 + t1537*t1596 + t1647*t1694 + t1821*t1870 - 0.041195*(-1.*t1525*t1596 + t1460*t1694 + 4.e-6*t1501*t1870) - 0.14871*(4.e-6*t1525*t1596 + 4.e-6*t1501*t1694 + t1870*t1920) + 0.803147*(t1525*t1694 - 4.e-6*t1525*t1870 + t1596*t1984) + t13*t589 - 1.*t1031*t687*t975;
  p_output1[2]=t2196 + t2230 + t2246 + t2271 + t2285 + t2346 + t2374 + t2403 - 1.*t1123*t13*t687 - 1.*t1130*t13*t975;
  p_output1[3]=t2196 + t2230 + t2246 + t2271 + t2285 + t2346 + t2374 + t2403 - 1.*t1130*t13*t2432 + t13*t2422*t687;
  p_output1[4]=t1031*t2446 + t2185*t2474 + t2497*t2527 + t1647*t2552 + t1821*t2584 + t1537*t2608 - 0.041195*(t1460*t2552 + 4.e-6*t1501*t2584 - 1.*t1525*t2608) - 0.14871*(4.e-6*t1501*t2552 + t1920*t2584 + 4.e-6*t1525*t2608) + 0.803147*(t1525*t2552 - 4.e-6*t1525*t2584 + t1984*t2608);
  p_output1[5]=t2773*t2801 + t2816*t2832 + t2850*t2866 + 0.803147*(-1.000000000016*t1525*t2801 + t1460*t2832 - 4.e-6*t1460*t2866) - 0.14871*(4.e-6*t1460*t2801 + 4.e-6*t1525*t2832 - 1.6e-11*t1525*t2866) - 0.041195*(-1.*t1460*t2801 - 1.*t1525*t2832 + 4.e-6*t1525*t2866);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t1123*t2984 + t1274*t3003 + t1415*t3013 + t1537*t3031 + t1647*t3091 + t1821*t3159 - 0.041195*(-1.*t1525*t3031 + t1460*t3091 + 4.e-6*t1501*t3159) + 0.803147*(t1984*t3031 + t1525*t3091 - 4.e-6*t1525*t3159) - 0.14871*(4.e-6*t1525*t3031 + 4.e-6*t1501*t3091 + t1920*t3159) - 1.*t13*t2929*t589 + t2964*t975;
  p_output1[9]=-1.*t1123*t1130*t13*t2945 + t1274*t3403 + t1415*t3458 + t1537*t3477 + t1647*t3498 + t1821*t3533 - 0.041195*(-1.*t1525*t3477 + t1460*t3498 + 4.e-6*t1501*t3533) + 0.803147*(t1984*t3477 + t1525*t3498 - 4.e-6*t1525*t3533) - 0.14871*(4.e-6*t1525*t3477 + 4.e-6*t1501*t3498 + t1920*t3533) + t1031*t2945*t589 + t13*t2945*t687*t975;
  p_output1[10]=t1123*t3628 + t1415*t3727 + t1274*t3743 + t1821*t3760 + t1647*t3772 + t1537*t3794 - 0.041195*(4.e-6*t1501*t3760 + t1460*t3772 - 1.*t1525*t3794) - 0.14871*(t1920*t3760 + 4.e-6*t1501*t3772 + 4.e-6*t1525*t3794) + 0.803147*(-4.e-6*t1525*t3760 + t1525*t3772 + t1984*t3794) + t3694*t975;
  p_output1[11]=t2432*t3694 + t2422*t3856 + t1415*t3870 + t1274*t3884 + t1821*t3904 + t1647*t3908 + t1537*t3924 - 0.041195*(4.e-6*t1501*t3904 + t1460*t3908 - 1.*t1525*t3924) - 0.14871*(t1920*t3904 + 4.e-6*t1501*t3908 + 4.e-6*t1525*t3924) + 0.803147*(-4.e-6*t1525*t3904 + t1525*t3908 + t1984*t3924);
  p_output1[12]=-1.*t13*t2446*t2945 + t2474*t3870 + t2497*t4030 + t1647*t4051 + t1821*t4075 + t1537*t4090 - 0.041195*(t1460*t4051 + 4.e-6*t1501*t4075 - 1.*t1525*t4090) - 0.14871*(4.e-6*t1501*t4051 + t1920*t4075 + 4.e-6*t1525*t4090) + 0.803147*(t1525*t4051 - 4.e-6*t1525*t4075 + t1984*t4090);
  p_output1[13]=t2773*t4175 + t2816*t4195 + t2850*t4217 - 0.14871*(4.e-6*t1460*t4175 + 4.e-6*t1525*t4195 - 1.6e-11*t1525*t4217) - 0.041195*(-1.*t1460*t4175 - 1.*t1525*t4195 + 4.e-6*t1525*t4217) + 0.803147*(-1.000000000016*t1525*t4175 - 4.e-6*t1460*t4217 + t4227);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t1123*t3694 + t1274*t3870 + t1415*t4030 + t1537*t4175 + t1647*t4195 + t1821*t4217 + 0.803147*(t1984*t4175 + t1525*t4195 - 4.e-6*t1525*t4217) - 0.14871*(4.e-6*t1525*t4175 + 4.e-6*t1501*t4195 + t1920*t4217) - 0.041195*(-1.*t1525*t4175 + 4.e-6*t1501*t4217 + t4227) - 1.*t13*t2945*t589 + t3856*t975;
  p_output1[17]=t1123*t1130*t13*t2929 + t1274*t4332 + t1415*t4346 + t1537*t4373 + t1647*t4406 + t1821*t4439 - 0.041195*(-1.*t1525*t4373 + t1460*t4406 + 4.e-6*t1501*t4439) + 0.803147*(t1984*t4373 + t1525*t4406 - 4.e-6*t1525*t4439) - 0.14871*(4.e-6*t1525*t4373 + 4.e-6*t1501*t4406 + t1920*t4439) - 1.*t1031*t2929*t589 - 1.*t13*t2929*t687*t975;
  p_output1[18]=t1123*t2964 + t1415*t4523 + t1274*t4528 + t1821*t4541 + t1647*t4552 + t1537*t4562 - 0.041195*(4.e-6*t1501*t4541 + t1460*t4552 - 1.*t1525*t4562) - 0.14871*(t1920*t4541 + 4.e-6*t1501*t4552 + 4.e-6*t1525*t4562) + 0.803147*(-4.e-6*t1525*t4541 + t1525*t4552 + t1984*t4562) + t4505*t975;
  p_output1[19]=t2432*t4505 + t2422*t4726 + t1415*t4783 + t1274*t4801 + t1821*t4815 + t1647*t4836 + t1537*t4845 - 0.041195*(4.e-6*t1501*t4815 + t1460*t4836 - 1.*t1525*t4845) - 0.14871*(t1920*t4815 + 4.e-6*t1501*t4836 + 4.e-6*t1525*t4845) + 0.803147*(-4.e-6*t1525*t4815 + t1525*t4836 + t1984*t4845);
  p_output1[20]=t13*t2446*t2929 + t2474*t4783 + t2497*t4906 + t1647*t4917 + t1821*t4928 + t1537*t4948 - 0.041195*(t1460*t4917 + 4.e-6*t1501*t4928 - 1.*t1525*t4948) - 0.14871*(4.e-6*t1501*t4917 + t1920*t4928 + 4.e-6*t1525*t4948) + 0.803147*(t1525*t4917 - 4.e-6*t1525*t4928 + t1984*t4948);
  p_output1[21]=t2773*t5024 + t2816*t5033 + t2850*t5048 + 0.803147*(-1.000000000016*t1525*t5024 + t1460*t5033 - 4.e-6*t1460*t5048) - 0.14871*(4.e-6*t1460*t5024 + 4.e-6*t1525*t5033 - 1.6e-11*t1525*t5048) - 0.041195*(-1.*t1460*t5024 - 1.*t1525*t5033 + 4.e-6*t1525*t5048);
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

#include "J_h_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_h_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
