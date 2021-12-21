/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:16:01 GMT+01:00
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
  double t249;
  double t770;
  double t793;
  double t804;
  double t893;
  double t932;
  double t1013;
  double t331;
  double t353;
  double t625;
  double t678;
  double t769;
  double t1174;
  double t34;
  double t1389;
  double t1395;
  double t1396;
  double t1426;
  double t1429;
  double t1438;
  double t1442;
  double t1444;
  double t1458;
  double t1474;
  double t1624;
  double t1529;
  double t1542;
  double t1567;
  double t1574;
  double t1588;
  double t1592;
  double t1668;
  double t1712;
  double t1720;
  double t1769;
  double t1827;
  double t1832;
  double t1833;
  double t1838;
  double t1849;
  double t1868;
  double t1124;
  double t1128;
  double t829;
  double t977;
  double t1402;
  double t1412;
  double t1414;
  double t1198;
  double t1306;
  double t1368;
  double t1375;
  double t1379;
  double t1787;
  double t1789;
  double t1798;
  double t1813;
  double t1817;
  double t2103;
  double t2141;
  double t2160;
  double t2188;
  double t2195;
  double t2196;
  double t1611;
  double t1623;
  double t1638;
  double t1651;
  double t1656;
  double t1468;
  double t1509;
  double t1511;
  double t2200;
  double t2204;
  double t2207;
  double t2211;
  double t2214;
  double t2220;
  double t2002;
  double t2016;
  double t2234;
  double t2252;
  double t2280;
  double t1908;
  double t1912;
  double t2449;
  double t2182;
  double t2198;
  double t2208;
  double t2225;
  double t2283;
  double t2300;
  double t2311;
  double t2312;
  double t2315;
  double t2317;
  double t2327;
  double t2343;
  double t2346;
  double t2354;
  double t2360;
  double t2374;
  double t2387;
  double t2398;
  double t2404;
  double t2431;
  double t2583;
  double t2586;
  double t2598;
  double t2605;
  double t2606;
  double t2610;
  double t2648;
  double t2655;
  double t2666;
  double t2667;
  double t2674;
  double t2684;
  double t2707;
  double t2712;
  double t2807;
  double t2817;
  double t2827;
  double t2831;
  double t2850;
  double t2851;
  double t2853;
  double t2895;
  double t2907;
  double t2915;
  double t2920;
  double t240;
  double t579;
  double t658;
  double t685;
  double t709;
  double t3046;
  double t3059;
  double t3050;
  double t3063;
  double t3066;
  double t3071;
  double t3072;
  double t3076;
  double t3079;
  double t3085;
  double t3086;
  double t3098;
  double t3099;
  double t3103;
  double t3114;
  double t3116;
  double t3120;
  double t3124;
  double t3127;
  double t3128;
  double t3130;
  double t3132;
  double t3137;
  double t3138;
  double t3145;
  double t3152;
  double t3234;
  double t3237;
  double t3242;
  double t3252;
  double t3258;
  double t3261;
  double t3273;
  double t3274;
  double t3283;
  double t3287;
  double t3297;
  double t3310;
  double t3313;
  double t3318;
  double t3321;
  double t3322;
  double t3325;
  double t3326;
  double t3386;
  double t3391;
  double t3392;
  double t3399;
  double t3401;
  double t3402;
  double t3417;
  double t3418;
  double t3420;
  double t3424;
  double t3429;
  double t3451;
  double t3454;
  double t3456;
  double t3457;
  double t3464;
  double t3466;
  double t3470;
  double t3474;
  double t3475;
  double t3476;
  double t2451;
  double t2480;
  double t2493;
  double t3559;
  double t3565;
  double t3567;
  double t3580;
  double t3584;
  double t3600;
  double t3603;
  double t3622;
  double t3625;
  double t3628;
  double t3637;
  double t3638;
  double t3639;
  double t3647;
  double t3648;
  double t3649;
  double t2519;
  double t2525;
  double t2556;
  double t2561;
  double t2564;
  double t2572;
  double t2578;
  double t2579;
  double t3712;
  double t3717;
  double t3720;
  double t3724;
  double t3730;
  double t3735;
  double t3742;
  double t3746;
  double t3748;
  double t3749;
  double t3753;
  double t3756;
  double t3760;
  double t3763;
  double t2787;
  double t2792;
  double t2793;
  double t2844;
  double t2847;
  double t2881;
  double t2890;
  double t2893;
  double t3942;
  double t3950;
  double t3955;
  double t3957;
  double t3962;
  double t3972;
  double t3974;
  double t3980;
  double t3983;
  double t3986;
  double t3987;
  double t3994;
  double t4145;
  double t4146;
  double t4158;
  double t4163;
  double t4164;
  double t4170;
  double t4175;
  double t4187;
  double t4188;
  double t4189;
  double t4191;
  double t4194;
  double t4216;
  double t4217;
  double t4221;
  double t4230;
  double t4234;
  double t4235;
  double t4293;
  double t4300;
  double t4313;
  double t4319;
  double t4323;
  double t4325;
  double t4331;
  double t4336;
  double t4341;
  double t4342;
  double t4349;
  double t4356;
  double t4359;
  double t4365;
  double t4369;
  double t4370;
  double t4386;
  double t4443;
  double t4448;
  double t4458;
  double t4463;
  double t4469;
  double t4472;
  double t4476;
  double t4481;
  double t4482;
  double t4491;
  double t4501;
  double t4503;
  double t4507;
  double t4519;
  double t4521;
  double t4523;
  double t4648;
  double t4649;
  double t4651;
  double t4654;
  double t4656;
  double t4663;
  double t4664;
  double t4684;
  double t4688;
  double t4692;
  double t4700;
  double t4702;
  double t4704;
  double t4763;
  double t4767;
  double t4768;
  double t4773;
  double t4778;
  double t4780;
  double t4781;
  double t4798;
  double t4799;
  double t4801;
  double t4803;
  t249 = Cos(var1[10]);
  t770 = Cos(var1[9]);
  t793 = -1.*t770;
  t804 = 1. + t793;
  t893 = Sin(var1[9]);
  t932 = -0.15121*t893;
  t1013 = Sin(var1[4]);
  t331 = -1.*t249;
  t353 = 1. + t331;
  t625 = -1. + t249;
  t678 = Sin(var1[10]);
  t769 = Cos(var1[5]);
  t1174 = Sin(var1[5]);
  t34 = Cos(var1[4]);
  t1389 = t769*t893*t1013;
  t1395 = t770*t1013*t1174;
  t1396 = t1389 + t1395;
  t1426 = -1.*t770*t769*t1013;
  t1429 = t893*t1013*t1174;
  t1438 = t1426 + t1429;
  t1442 = Cos(var1[11]);
  t1444 = -1.*t1442;
  t1458 = 1. + t1444;
  t1474 = Sin(var1[11]);
  t1624 = -1. + t1442;
  t1529 = t34*t678;
  t1542 = -4.e-6*t678*t1396;
  t1567 = -1.000000000016*t353;
  t1574 = 1. + t1567;
  t1588 = t1574*t1438;
  t1592 = t1529 + t1542 + t1588;
  t1668 = t249*t34;
  t1712 = 4.e-6*t353*t1396;
  t1720 = -1.*t678*t1438;
  t1769 = t1668 + t1712 + t1720;
  t1827 = 4.e-6*t353*t34;
  t1832 = 1.6e-11*t625;
  t1833 = 1. + t1832;
  t1838 = t1833*t1396;
  t1849 = 4.e-6*t678*t1438;
  t1868 = t1827 + t1838 + t1849;
  t1124 = -0.15121*t804;
  t1128 = t1124 + t932;
  t829 = 0.15121*t804;
  t977 = t829 + t932;
  t1402 = 0.281210000008499*t353;
  t1412 = -0.03874900000062*t678;
  t1414 = t1402 + t1412;
  t1198 = -1.2484e-7*var1[10];
  t1306 = 2.479936e-18*t353;
  t1368 = -1.54996e-7*t625;
  t1375 = 1.124840000016e-6*t678;
  t1379 = t1198 + t1306 + t1368 + t1375;
  t1787 = -1.26e-8*var1[11];
  t1789 = 2.552896e-18*t1458;
  t1798 = -1.59556e-7*t1624;
  t1813 = 2.012600000032e-6*t1474;
  t1817 = t1787 + t1789 + t1798 + t1813;
  t2103 = -1.*t34*t769*t893;
  t2141 = -1.*t770*t34*t1174;
  t2160 = t2103 + t2141;
  t2188 = -1.*t770*t34*t769;
  t2195 = t34*t893*t1174;
  t2196 = t2188 + t2195;
  t1611 = -5.04e-14*var1[11];
  t1623 = -0.039889*t1458;
  t1638 = 6.38224e-13*t1624;
  t1651 = -0.503150000008*t1474;
  t1656 = t1611 + t1623 + t1638 + t1651;
  t1468 = 0.50315000001605*t1458;
  t1509 = -0.0398890000006382*t1474;
  t1511 = t1468 + t1509;
  t2200 = 4.e-6*t678*t2160;
  t2204 = t1833*t2196;
  t2207 = t2200 + t2204;
  t2211 = -1.*t678*t2160;
  t2214 = 4.e-6*t353*t2196;
  t2220 = t2211 + t2214;
  t2002 = -1.000000000016*t1458;
  t2016 = 1. + t2002;
  t2234 = t1574*t2160;
  t2252 = -4.e-6*t678*t2196;
  t2280 = t2234 + t2252;
  t1908 = 1.6e-11*t1624;
  t1912 = 1. + t1908;
  t2449 = -0.15121*t770;
  t2182 = t1414*t2160;
  t2198 = t1379*t2196;
  t2208 = t1817*t2207;
  t2225 = t1656*t2220;
  t2283 = t1511*t2280;
  t2300 = -4.e-6*t1474*t2207;
  t2311 = t1474*t2220;
  t2312 = t2016*t2280;
  t2315 = t2300 + t2311 + t2312;
  t2317 = 0.803147*t2315;
  t2327 = 4.e-6*t1458*t2207;
  t2343 = t1442*t2220;
  t2346 = -1.*t1474*t2280;
  t2354 = t2327 + t2343 + t2346;
  t2360 = -0.041195*t2354;
  t2374 = t1912*t2207;
  t2387 = 4.e-6*t1458*t2220;
  t2398 = 4.e-6*t1474*t2280;
  t2404 = t2374 + t2387 + t2398;
  t2431 = -0.14871*t2404;
  t2583 = t770*t34*t769;
  t2586 = -1.*t34*t893*t1174;
  t2598 = t2583 + t2586;
  t2605 = -1.*t678*t1013;
  t2606 = -1.*t249*t2598;
  t2610 = t2605 + t2200 + t2606;
  t2648 = 4.e-6*t678*t1013;
  t2655 = -1.6e-11*t678*t2160;
  t2666 = 4.e-6*t249*t2598;
  t2667 = t2648 + t2655 + t2666;
  t2674 = t249*t1013;
  t2684 = -4.e-6*t249*t2160;
  t2707 = -1.000000000016*t678*t2598;
  t2712 = t2674 + t2684 + t2707;
  t2807 = t678*t1013;
  t2817 = -4.e-6*t678*t2160;
  t2827 = t1574*t2598;
  t2831 = t2807 + t2817 + t2827;
  t2850 = 4.e-6*t353*t2160;
  t2851 = -1.*t678*t2598;
  t2853 = t2674 + t2850 + t2851;
  t2895 = 4.e-6*t353*t1013;
  t2907 = t1833*t2160;
  t2915 = 4.e-6*t678*t2598;
  t2920 = t2895 + t2907 + t2915;
  t240 = -4.9936e-13*var1[10];
  t579 = -0.038749*t353;
  t658 = 6.19984e-13*t625;
  t685 = -0.281210000004*t678;
  t709 = t240 + t579 + t658 + t685;
  t3046 = Cos(var1[3]);
  t3059 = Sin(var1[3]);
  t3050 = t3046*t769*t1013;
  t3063 = -1.*t3059*t1174;
  t3066 = t3050 + t3063;
  t3071 = -1.*t769*t3059;
  t3072 = -1.*t3046*t1013*t1174;
  t3076 = t3071 + t3072;
  t3079 = -1.*t893*t3066;
  t3085 = t770*t3076;
  t3086 = t3079 + t3085;
  t3098 = t770*t3066;
  t3099 = t893*t3076;
  t3103 = t3098 + t3099;
  t3114 = -1.*t3046*t34*t678;
  t3116 = -4.e-6*t678*t3086;
  t3120 = t1574*t3103;
  t3124 = t3114 + t3116 + t3120;
  t3127 = -1.*t249*t3046*t34;
  t3128 = 4.e-6*t353*t3086;
  t3130 = -1.*t678*t3103;
  t3132 = t3127 + t3128 + t3130;
  t3137 = -4.e-6*t353*t3046*t34;
  t3138 = t1833*t3086;
  t3145 = 4.e-6*t678*t3103;
  t3152 = t3137 + t3138 + t3145;
  t3234 = -1.*t34*t769*t893*t3059;
  t3237 = -1.*t770*t34*t3059*t1174;
  t3242 = t3234 + t3237;
  t3252 = t770*t34*t769*t3059;
  t3258 = -1.*t34*t893*t3059*t1174;
  t3261 = t3252 + t3258;
  t3273 = t678*t3059*t1013;
  t3274 = -4.e-6*t678*t3242;
  t3283 = t1574*t3261;
  t3287 = t3273 + t3274 + t3283;
  t3297 = t249*t3059*t1013;
  t3310 = 4.e-6*t353*t3242;
  t3313 = -1.*t678*t3261;
  t3318 = t3297 + t3310 + t3313;
  t3321 = 4.e-6*t353*t3059*t1013;
  t3322 = t1833*t3242;
  t3325 = 4.e-6*t678*t3261;
  t3326 = t3321 + t3322 + t3325;
  t3386 = -1.*t769*t3059*t1013;
  t3391 = -1.*t3046*t1174;
  t3392 = t3386 + t3391;
  t3399 = t3046*t769;
  t3401 = -1.*t3059*t1013*t1174;
  t3402 = t3399 + t3401;
  t3417 = t893*t3392;
  t3418 = t770*t3402;
  t3420 = t3417 + t3418;
  t3424 = t770*t3392;
  t3429 = -1.*t893*t3402;
  t3451 = t3424 + t3429;
  t3454 = 4.e-6*t678*t3420;
  t3456 = t1833*t3451;
  t3457 = t3454 + t3456;
  t3464 = -1.*t678*t3420;
  t3466 = 4.e-6*t353*t3451;
  t3470 = t3464 + t3466;
  t3474 = t1574*t3420;
  t3475 = -4.e-6*t678*t3451;
  t3476 = t3474 + t3475;
  t2451 = 0.15121*t893;
  t2480 = t2449 + t2451;
  t2493 = t2449 + t932;
  t3559 = t769*t3059*t1013;
  t3565 = t3046*t1174;
  t3567 = t3559 + t3565;
  t3580 = -1.*t893*t3567;
  t3584 = t3580 + t3418;
  t3600 = -1.*t770*t3567;
  t3603 = t3600 + t3429;
  t3622 = 4.e-6*t678*t3584;
  t3625 = t1833*t3603;
  t3628 = t3622 + t3625;
  t3637 = -1.*t678*t3584;
  t3638 = 4.e-6*t353*t3603;
  t3639 = t3637 + t3638;
  t3647 = t1574*t3584;
  t3648 = -4.e-6*t678*t3603;
  t3649 = t3647 + t3648;
  t2519 = -0.281210000004*t249;
  t2525 = -4.9936e-13 + t2519 + t1412;
  t2556 = 1.124840000016e-6*t249;
  t2561 = 1.5499600000248e-7*t678;
  t2564 = -1.2484e-7 + t2556 + t2561;
  t2572 = -0.03874900000062*t249;
  t2578 = 0.281210000008499*t678;
  t2579 = t2572 + t2578;
  t3712 = t770*t3567;
  t3717 = t893*t3402;
  t3720 = t3712 + t3717;
  t3724 = t34*t678*t3059;
  t3730 = -1.*t249*t3720;
  t3735 = t3724 + t3622 + t3730;
  t3742 = -4.e-6*t34*t678*t3059;
  t3746 = -1.6e-11*t678*t3584;
  t3748 = 4.e-6*t249*t3720;
  t3749 = t3742 + t3746 + t3748;
  t3753 = -1.*t249*t34*t3059;
  t3756 = -4.e-6*t249*t3584;
  t3760 = -1.000000000016*t678*t3720;
  t3763 = t3753 + t3756 + t3760;
  t2787 = -0.0398890000006382*t1442;
  t2792 = 0.50315000001605*t1474;
  t2793 = t2787 + t2792;
  t2844 = -0.503150000008*t1442;
  t2847 = -5.04e-14 + t2844 + t1509;
  t2881 = 2.012600000032e-6*t1442;
  t2890 = 1.59556000002553e-7*t1474;
  t2893 = -1.26e-8 + t2881 + t2890;
  t3942 = -1.*t34*t678*t3059;
  t3950 = -4.e-6*t678*t3584;
  t3955 = t1574*t3720;
  t3957 = t3942 + t3950 + t3955;
  t3962 = 4.e-6*t353*t3584;
  t3972 = -1.*t678*t3720;
  t3974 = t3753 + t3962 + t3972;
  t3980 = -4.e-6*t353*t34*t3059;
  t3983 = t1833*t3584;
  t3986 = 4.e-6*t678*t3720;
  t3987 = t3980 + t3983 + t3986;
  t3994 = t1442*t3974;
  t4145 = t3046*t34*t769*t893;
  t4146 = t770*t3046*t34*t1174;
  t4158 = t4145 + t4146;
  t4163 = -1.*t770*t3046*t34*t769;
  t4164 = t3046*t34*t893*t1174;
  t4170 = t4163 + t4164;
  t4175 = -1.*t3046*t678*t1013;
  t4187 = -4.e-6*t678*t4158;
  t4188 = t1574*t4170;
  t4189 = t4175 + t4187 + t4188;
  t4191 = -1.*t249*t3046*t1013;
  t4194 = 4.e-6*t353*t4158;
  t4216 = -1.*t678*t4170;
  t4217 = t4191 + t4194 + t4216;
  t4221 = -4.e-6*t353*t3046*t1013;
  t4230 = t1833*t4158;
  t4234 = 4.e-6*t678*t4170;
  t4235 = t4221 + t4230 + t4234;
  t4293 = t769*t3059;
  t4300 = t3046*t1013*t1174;
  t4313 = t4293 + t4300;
  t4319 = t893*t3066;
  t4323 = t770*t4313;
  t4325 = t4319 + t4323;
  t4331 = -1.*t893*t4313;
  t4336 = t3098 + t4331;
  t4341 = 4.e-6*t678*t4325;
  t4342 = t1833*t4336;
  t4349 = t4341 + t4342;
  t4356 = -1.*t678*t4325;
  t4359 = 4.e-6*t353*t4336;
  t4365 = t4356 + t4359;
  t4369 = t1574*t4325;
  t4370 = -4.e-6*t678*t4336;
  t4386 = t4369 + t4370;
  t4443 = -1.*t3046*t769*t1013;
  t4448 = t3059*t1174;
  t4458 = t4443 + t4448;
  t4463 = -1.*t893*t4458;
  t4469 = t4463 + t4323;
  t4472 = -1.*t770*t4458;
  t4476 = t4472 + t4331;
  t4481 = 4.e-6*t678*t4469;
  t4482 = t1833*t4476;
  t4491 = t4481 + t4482;
  t4501 = -1.*t678*t4469;
  t4503 = 4.e-6*t353*t4476;
  t4507 = t4501 + t4503;
  t4519 = t1574*t4469;
  t4521 = -4.e-6*t678*t4476;
  t4523 = t4519 + t4521;
  t4648 = t770*t4458;
  t4649 = t893*t4313;
  t4651 = t4648 + t4649;
  t4654 = -1.*t249*t4651;
  t4656 = t3114 + t4481 + t4654;
  t4663 = 4.e-6*t3046*t34*t678;
  t4664 = -1.6e-11*t678*t4469;
  t4684 = 4.e-6*t249*t4651;
  t4688 = t4663 + t4664 + t4684;
  t4692 = t249*t3046*t34;
  t4700 = -4.e-6*t249*t4469;
  t4702 = -1.000000000016*t678*t4651;
  t4704 = t4692 + t4700 + t4702;
  t4763 = t3046*t34*t678;
  t4767 = -4.e-6*t678*t4469;
  t4768 = t1574*t4651;
  t4773 = t4763 + t4767 + t4768;
  t4778 = 4.e-6*t353*t4469;
  t4780 = -1.*t678*t4651;
  t4781 = t4692 + t4778 + t4780;
  t4798 = 4.e-6*t353*t3046*t34;
  t4799 = t1833*t4469;
  t4801 = 4.e-6*t678*t4651;
  t4803 = t4798 + t4799 + t4801;
  p_output1[0]=1.;
  p_output1[1]=t1013*t1128*t1174 + t1379*t1396 + t1414*t1438 + t1511*t1592 + t1656*t1769 + t1817*t1868 - 0.041195*(-1.*t1474*t1592 + t1442*t1769 + 4.e-6*t1458*t1868) - 0.14871*(4.e-6*t1474*t1592 + 4.e-6*t1458*t1769 + t1868*t1912) + 0.803147*(t1474*t1769 - 4.e-6*t1474*t1868 + t1592*t2016) + t34*t709 - 1.*t1013*t769*t977;
  p_output1[2]=t2182 + t2198 + t2208 + t2225 + t2283 + t2317 + t2360 + t2431 - 1.*t1128*t34*t769 - 1.*t1174*t34*t977;
  p_output1[3]=t2182 + t2198 + t2208 + t2225 + t2283 + t2317 + t2360 + t2431 - 1.*t1174*t2493*t34 + t2480*t34*t769;
  p_output1[4]=t1013*t2525 + t2160*t2564 + t2579*t2598 + t1656*t2610 + t1817*t2667 + t1511*t2712 - 0.041195*(t1442*t2610 + 4.e-6*t1458*t2667 - 1.*t1474*t2712) - 0.14871*(4.e-6*t1458*t2610 + t1912*t2667 + 4.e-6*t1474*t2712) + 0.803147*(t1474*t2610 - 4.e-6*t1474*t2667 + t2016*t2712);
  p_output1[5]=t2793*t2831 + t2847*t2853 + t2893*t2920 + 0.803147*(-1.000000000016*t1474*t2831 + t1442*t2853 - 4.e-6*t1442*t2920) - 0.14871*(4.e-6*t1442*t2831 + 4.e-6*t1474*t2853 - 1.6e-11*t1474*t2920) - 0.041195*(-1.*t1442*t2831 - 1.*t1474*t2853 + 4.e-6*t1474*t2920);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t1128*t3076 + t1379*t3086 + t1414*t3103 + t1511*t3124 + t1656*t3132 + t1817*t3152 - 0.041195*(-1.*t1474*t3124 + t1442*t3132 + 4.e-6*t1458*t3152) + 0.803147*(t2016*t3124 + t1474*t3132 - 4.e-6*t1474*t3152) - 0.14871*(4.e-6*t1474*t3124 + 4.e-6*t1458*t3132 + t1912*t3152) - 1.*t3046*t34*t709 + t3066*t977;
  p_output1[9]=t1379*t3242 + t1414*t3261 + t1511*t3287 + t1656*t3318 + t1817*t3326 - 0.041195*(-1.*t1474*t3287 + t1442*t3318 + 4.e-6*t1458*t3326) + 0.803147*(t2016*t3287 + t1474*t3318 - 4.e-6*t1474*t3326) - 0.14871*(4.e-6*t1474*t3287 + 4.e-6*t1458*t3318 + t1912*t3326) - 1.*t1128*t1174*t3059*t34 + t1013*t3059*t709 + t3059*t34*t769*t977;
  p_output1[10]=t1128*t3392 + t1414*t3420 + t1379*t3451 + t1817*t3457 + t1656*t3470 + t1511*t3476 - 0.041195*(4.e-6*t1458*t3457 + t1442*t3470 - 1.*t1474*t3476) - 0.14871*(t1912*t3457 + 4.e-6*t1458*t3470 + 4.e-6*t1474*t3476) + 0.803147*(-4.e-6*t1474*t3457 + t1474*t3470 + t2016*t3476) + t3402*t977;
  p_output1[11]=t2493*t3402 + t2480*t3567 + t1414*t3584 + t1379*t3603 + t1817*t3628 + t1656*t3639 + t1511*t3649 - 0.041195*(4.e-6*t1458*t3628 + t1442*t3639 - 1.*t1474*t3649) - 0.14871*(t1912*t3628 + 4.e-6*t1458*t3639 + 4.e-6*t1474*t3649) + 0.803147*(-4.e-6*t1474*t3628 + t1474*t3639 + t2016*t3649);
  p_output1[12]=-1.*t2525*t3059*t34 + t2564*t3584 + t2579*t3720 + t1656*t3735 + t1817*t3749 + t1511*t3763 - 0.041195*(t1442*t3735 + 4.e-6*t1458*t3749 - 1.*t1474*t3763) - 0.14871*(4.e-6*t1458*t3735 + t1912*t3749 + 4.e-6*t1474*t3763) + 0.803147*(t1474*t3735 - 4.e-6*t1474*t3749 + t2016*t3763);
  p_output1[13]=t2793*t3957 + t2847*t3974 + t2893*t3987 - 0.14871*(4.e-6*t1442*t3957 + 4.e-6*t1474*t3974 - 1.6e-11*t1474*t3987) - 0.041195*(-1.*t1442*t3957 - 1.*t1474*t3974 + 4.e-6*t1474*t3987) + 0.803147*(-1.000000000016*t1474*t3957 - 4.e-6*t1442*t3987 + t3994);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t1128*t3402 + t1379*t3584 + t1414*t3720 + t1511*t3957 + t1656*t3974 + t1817*t3987 + 0.803147*(t2016*t3957 + t1474*t3974 - 4.e-6*t1474*t3987) - 0.14871*(4.e-6*t1474*t3957 + 4.e-6*t1458*t3974 + t1912*t3987) - 0.041195*(-1.*t1474*t3957 + 4.e-6*t1458*t3987 + t3994) - 1.*t3059*t34*t709 + t3567*t977;
  p_output1[17]=t1128*t1174*t3046*t34 + t1379*t4158 + t1414*t4170 + t1511*t4189 + t1656*t4217 + t1817*t4235 - 0.041195*(-1.*t1474*t4189 + t1442*t4217 + 4.e-6*t1458*t4235) + 0.803147*(t2016*t4189 + t1474*t4217 - 4.e-6*t1474*t4235) - 0.14871*(4.e-6*t1474*t4189 + 4.e-6*t1458*t4217 + t1912*t4235) - 1.*t1013*t3046*t709 - 1.*t3046*t34*t769*t977;
  p_output1[18]=t1128*t3066 + t1414*t4325 + t1379*t4336 + t1817*t4349 + t1656*t4365 + t1511*t4386 - 0.041195*(4.e-6*t1458*t4349 + t1442*t4365 - 1.*t1474*t4386) - 0.14871*(t1912*t4349 + 4.e-6*t1458*t4365 + 4.e-6*t1474*t4386) + 0.803147*(-4.e-6*t1474*t4349 + t1474*t4365 + t2016*t4386) + t4313*t977;
  p_output1[19]=t2493*t4313 + t2480*t4458 + t1414*t4469 + t1379*t4476 + t1817*t4491 + t1656*t4507 + t1511*t4523 - 0.041195*(4.e-6*t1458*t4491 + t1442*t4507 - 1.*t1474*t4523) - 0.14871*(t1912*t4491 + 4.e-6*t1458*t4507 + 4.e-6*t1474*t4523) + 0.803147*(-4.e-6*t1474*t4491 + t1474*t4507 + t2016*t4523);
  p_output1[20]=t2525*t3046*t34 + t2564*t4469 + t2579*t4651 + t1656*t4656 + t1817*t4688 + t1511*t4704 - 0.041195*(t1442*t4656 + 4.e-6*t1458*t4688 - 1.*t1474*t4704) - 0.14871*(4.e-6*t1458*t4656 + t1912*t4688 + 4.e-6*t1474*t4704) + 0.803147*(t1474*t4656 - 4.e-6*t1474*t4688 + t2016*t4704);
  p_output1[21]=t2793*t4773 + t2847*t4781 + t2893*t4803 + 0.803147*(-1.000000000016*t1474*t4773 + t1442*t4781 - 4.e-6*t1442*t4803) - 0.14871*(4.e-6*t1442*t4773 + 4.e-6*t1474*t4781 - 1.6e-11*t1474*t4803) - 0.041195*(-1.*t1442*t4773 - 1.*t1474*t4781 + 4.e-6*t1474*t4803);
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

#include "J_h_FrFoot_TrotStance1.hh"

namespace TrotStance1
{

void J_h_FrFoot_TrotStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
