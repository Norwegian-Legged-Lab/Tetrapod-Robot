/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 12:55:39 GMT+01:00
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
  double t13;
  double t20;
  double t37;
  double t121;
  double t23;
  double t98;
  double t152;
  double t132;
  double t135;
  double t167;
  double t312;
  double t315;
  double t318;
  double t372;
  double t79;
  double t67;
  double t143;
  double t186;
  double t196;
  double t92;
  double t243;
  double t249;
  double t280;
  double t366;
  double t36;
  double t469;
  double t671;
  double t415;
  double t198;
  double t751;
  double t213;
  double t521;
  double t838;
  double t479;
  double t486;
  double t508;
  double t574;
  double t577;
  double t606;
  double t785;
  double t721;
  double t733;
  double t742;
  double t759;
  double t763;
  double t775;
  double t875;
  double t877;
  double t900;
  double t926;
  double t932;
  double t935;
  double t385;
  double t955;
  double t441;
  double t1081;
  double t1084;
  double t635;
  double t981;
  double t1308;
  double t1342;
  double t1247;
  double t1449;
  double t1451;
  double t1312;
  double t1424;
  double t1326;
  double t1338;
  double t1341;
  double t1347;
  double t1349;
  double t1351;
  double t1353;
  double t1354;
  double t1396;
  double t1456;
  double t1464;
  double t1467;
  double t1473;
  double t1477;
  double t1483;
  double t1486;
  double t1503;
  double t1403;
  double t1554;
  double t1556;
  double t1561;
  double t1571;
  double t1575;
  double t1582;
  double t1592;
  double t1603;
  double t1269;
  double t1714;
  double t1525;
  double t1860;
  double t1896;
  double t1926;
  double t2026;
  double t308;
  double t345;
  double t412;
  double t414;
  double t455;
  double t458;
  double t463;
  double t2109;
  double t2118;
  double t2123;
  double t777;
  double t782;
  double t788;
  double t804;
  double t849;
  double t857;
  double t871;
  double t614;
  double t624;
  double t644;
  double t650;
  double t688;
  double t693;
  double t709;
  double t1170;
  double t2128;
  double t2129;
  double t2130;
  double t1198;
  double t2150;
  double t2162;
  double t2178;
  double t1180;
  double t1189;
  double t2190;
  double t2212;
  double t2215;
  double t970;
  double t1021;
  double t1033;
  double t996;
  double t1058;
  double t1063;
  double t1144;
  double t1106;
  double t2420;
  double t1981;
  double t2001;
  double t2002;
  double t2009;
  double t2015;
  double t2027;
  double t2033;
  double t2043;
  double t2048;
  double t2053;
  double t2064;
  double t2069;
  double t2070;
  double t2076;
  double t2078;
  double t2089;
  double t2105;
  double t2127;
  double t2149;
  double t2189;
  double t2226;
  double t2236;
  double t2240;
  double t2244;
  double t2246;
  double t2262;
  double t2269;
  double t2281;
  double t2293;
  double t2299;
  double t2309;
  double t2319;
  double t2345;
  double t2375;
  double t2386;
  double t2396;
  double t1934;
  double t1954;
  double t1910;
  double t1928;
  double t2574;
  double t2582;
  double t2583;
  double t2603;
  double t2605;
  double t2616;
  double t2634;
  double t2635;
  double t2639;
  double t2651;
  double t2668;
  double t2680;
  double t2681;
  double t2684;
  double t2686;
  double t2690;
  double t2702;
  double t2707;
  double t2479;
  double t2500;
  double t2501;
  double t2502;
  double t2503;
  double t2514;
  double t2528;
  double t2876;
  double t2887;
  double t2892;
  double t2898;
  double t2906;
  double t2907;
  double t2917;
  double t2929;
  double t2930;
  double t2934;
  double t2935;
  double t2963;
  double t2966;
  double t2989;
  double t2995;
  double t3004;
  double t3009;
  double t3011;
  double t3014;
  double t3194;
  double t3199;
  double t3206;
  double t3213;
  double t3221;
  double t3229;
  double t3242;
  double t3261;
  double t3283;
  double t3300;
  double t3312;
  double t3317;
  double t3330;
  double t3336;
  double t3354;
  double t3366;
  double t3368;
  double t3391;
  double t3396;
  double t3397;
  double t3398;
  double t3408;
  double t3415;
  double t3419;
  double t3433;
  double t3555;
  double t3558;
  double t3560;
  double t3579;
  double t3581;
  double t3588;
  double t3592;
  double t3593;
  double t3594;
  double t3599;
  double t3602;
  double t3612;
  double t3622;
  double t3639;
  double t3649;
  double t3666;
  double t3682;
  double t3686;
  double t3691;
  double t3703;
  double t3709;
  double t2427;
  double t2432;
  double t2446;
  double t3799;
  double t3811;
  double t3822;
  double t3833;
  double t3835;
  double t3845;
  double t3849;
  double t3859;
  double t3864;
  double t3872;
  double t3879;
  double t3886;
  double t3887;
  double t3911;
  double t3921;
  double t3925;
  double t27;
  double t35;
  double t41;
  double t42;
  double t45;
  double t54;
  double t80;
  double t86;
  double t106;
  double t111;
  double t116;
  double t119;
  double t206;
  double t207;
  double t223;
  double t231;
  double t235;
  double t239;
  double t4055;
  double t4063;
  double t4071;
  double t4089;
  double t4096;
  double t4098;
  double t4120;
  double t4140;
  double t4143;
  double t4152;
  double t4157;
  double t4168;
  double t4169;
  double t4172;
  double t4175;
  double t1248;
  double t1253;
  double t1271;
  double t1278;
  double t1292;
  double t1295;
  double t1410;
  double t1421;
  double t1426;
  double t1428;
  double t1440;
  double t1442;
  double t1515;
  double t1523;
  double t1530;
  double t1543;
  double t1549;
  double t1552;
  double t1615;
  double t4288;
  double t4289;
  double t4290;
  double t4292;
  double t4297;
  double t4298;
  double t4299;
  double t4301;
  double t1664;
  double t4303;
  double t4307;
  double t4316;
  double t4349;
  double t1703;
  double t1720;
  double t1759;
  double t1764;
  double t4491;
  double t4494;
  double t4496;
  double t4498;
  double t4500;
  double t4501;
  double t4503;
  double t4505;
  double t4506;
  double t4507;
  double t4511;
  double t4514;
  double t4517;
  double t4518;
  double t4539;
  double t4544;
  double t4547;
  double t4551;
  double t4630;
  double t4632;
  double t4633;
  double t4642;
  double t4646;
  double t4648;
  double t4650;
  double t4651;
  double t4657;
  double t4658;
  double t4660;
  double t4666;
  double t4670;
  double t4684;
  double t4690;
  double t4691;
  double t4692;
  double t4752;
  double t4753;
  double t4754;
  double t4762;
  double t4764;
  double t4767;
  double t4769;
  double t4771;
  double t4787;
  double t4788;
  double t4802;
  double t4814;
  double t4817;
  double t4822;
  double t4823;
  double t4825;
  double t4883;
  double t4884;
  double t4886;
  double t4890;
  double t4891;
  double t4892;
  double t4893;
  double t4897;
  double t4899;
  double t4906;
  double t4908;
  double t4911;
  double t4914;
  double t4915;
  double t4916;
  double t5005;
  double t5013;
  double t5015;
  double t5021;
  double t5026;
  double t5029;
  double t5030;
  double t5031;
  double t5038;
  double t5039;
  double t5040;
  double t5046;
  t13 = Cos(var1[13]);
  t20 = Sin(var1[13]);
  t37 = 4.e-6*t20;
  t121 = Cos(var1[4]);
  t23 = -2.8e-11*t20;
  t98 = 7.e-6*t20;
  t152 = Cos(var1[12]);
  t132 = Cos(var1[5]);
  t135 = Sin(var1[12]);
  t167 = Sin(var1[5]);
  t312 = Cos(var1[14]);
  t315 = -1.*t312;
  t318 = 1. + t315;
  t372 = Sin(var1[14]);
  t79 = -7.e-6*t13;
  t67 = Sin(var1[4]);
  t143 = -1.*t121*t132*t135;
  t186 = -1.*t152*t121*t167;
  t196 = t143 + t186;
  t92 = 4.e-6*t13;
  t243 = t152*t121*t132;
  t249 = -1.*t121*t135*t167;
  t280 = t243 + t249;
  t366 = 4.e-6*t318;
  t36 = 7.e-6*t13;
  t469 = -4.e-6*t20;
  t671 = -2.8e-11*t318;
  t415 = 7.e-6*t318;
  t198 = -1.*t13;
  t751 = 2.8e-11*t20;
  t213 = -4.e-6*t13;
  t521 = -7.e-6*t20;
  t838 = -4.e-6*t372;
  t479 = t79 + t469;
  t486 = t479*t67;
  t508 = -6.5e-11*t20*t196;
  t574 = t92 + t521;
  t577 = t574*t280;
  t606 = t486 + t508 + t577;
  t785 = -1.*t372;
  t721 = -1.000000000049*t20*t67;
  t733 = t36 + t469;
  t742 = t733*t196;
  t759 = t13 + t751;
  t763 = t759*t280;
  t775 = t721 + t742 + t763;
  t875 = t198 + t751;
  t877 = t875*t67;
  t900 = t213 + t521;
  t926 = t900*t196;
  t932 = -1.000000000016*t20*t280;
  t935 = t877 + t926 + t932;
  t385 = -7.e-6*t372;
  t955 = -7.e-6*t318;
  t441 = 4.e-6*t372;
  t1081 = -1. + t312;
  t1084 = 4.e-6*t1081;
  t635 = 7.e-6*t372;
  t981 = 2.8e-11*t318;
  t1308 = 1. + t198;
  t1342 = -7.e-6*t1308;
  t1247 = -2.8e-11*t372;
  t1449 = -1. + t13;
  t1451 = 4.e-6*t1449;
  t1312 = 2.8e-11*t1308;
  t1424 = 4.e-6*t312;
  t1326 = -1.*t20;
  t1338 = t1312 + t1326;
  t1341 = t1338*t67;
  t1347 = t1342 + t469;
  t1349 = t1347*t196;
  t1351 = -1.000000000016*t1308;
  t1353 = 1. + t1351;
  t1354 = t1353*t280;
  t1396 = t1341 + t1349 + t1354;
  t1456 = t1451 + t521;
  t1464 = t1456*t67;
  t1467 = -6.5e-11*t1308;
  t1473 = 1. + t1467;
  t1477 = t1473*t196;
  t1483 = t1342 + t37;
  t1486 = t1483*t280;
  t1503 = t1464 + t1477 + t1486;
  t1403 = -7.e-6*t312;
  t1554 = -1.000000000049*t1308;
  t1556 = 1. + t1554;
  t1561 = t1556*t67;
  t1571 = t1451 + t98;
  t1575 = t1571*t196;
  t1582 = t1312 + t20;
  t1592 = t1582*t280;
  t1603 = t1561 + t1575 + t1592;
  t1269 = -4.e-6*t312;
  t1714 = 2.8e-11*t372;
  t1525 = 7.e-6*t312;
  t1860 = -1.*t152;
  t1896 = 1. + t1860;
  t1926 = 0.15121*t135;
  t2026 = 7.e-6*t1308;
  t308 = -2.598649999999999e-7*var1[14];
  t345 = -2.3905277499999995e-16*t318;
  t412 = t366 + t385;
  t414 = -0.038922999986*t412;
  t455 = t415 + t441;
  t458 = -0.503149000008*t455;
  t463 = t308 + t345 + t414 + t458;
  t2109 = -1.*t152*t121*t132;
  t2118 = t121*t135*t167;
  t2123 = t2109 + t2118;
  t777 = 1.8190549999999993e-12*var1[14];
  t782 = -0.5031490000160505*t318;
  t788 = t671 + t785;
  t804 = -0.038922999986*t788;
  t849 = t415 + t838;
  t857 = -3.6777349999999994e-6*t849;
  t871 = t777 + t782 + t804 + t857;
  t614 = 1.0394599999999997e-12*var1[14];
  t624 = -0.03892299998790722*t318;
  t644 = t366 + t635;
  t650 = -3.6777349999999994e-6*t644;
  t688 = t671 + t372;
  t693 = -0.503149000008*t688;
  t709 = t614 + t624 + t650 + t693;
  t1170 = t1084 + t635;
  t2128 = t1483*t196;
  t2129 = t1473*t2123;
  t2130 = t2128 + t2129;
  t1198 = t981 + t372;
  t2150 = t1353*t196;
  t2162 = t1347*t2123;
  t2178 = t2150 + t2162;
  t1180 = -1.000000000049*t318;
  t1189 = 1. + t1180;
  t2190 = t1582*t196;
  t2212 = t1571*t2123;
  t2215 = t2190 + t2212;
  t970 = t955 + t838;
  t1021 = -1.000000000016*t318;
  t1033 = 1. + t1021;
  t996 = t981 + t785;
  t1058 = -6.5e-11*t318;
  t1063 = 1. + t1058;
  t1144 = t955 + t441;
  t1106 = t1084 + t385;
  t2420 = 0.15121*t152;
  t1981 = 1.0248489999999998e-12*var1[13];
  t2001 = -0.28120900000849935*t1308;
  t2002 = -2.8e-11*t1308;
  t2009 = t2002 + t1326;
  t2015 = -0.038748999993*t2009;
  t2027 = t2026 + t469;
  t2033 = -2.123459e-6*t2027;
  t2043 = t1981 + t2001 + t2015 + t2033;
  t2048 = t2043*t196;
  t2053 = -1.4640699999999997e-7*var1[13];
  t2064 = -1.38024835e-16*t1308;
  t2069 = 4.e-6*t1308;
  t2070 = t2069 + t521;
  t2076 = -0.038748999993*t2070;
  t2078 = t2026 + t37;
  t2089 = -0.281209000004*t2078;
  t2105 = t2053 + t2064 + t2076 + t2089;
  t2127 = t2105*t2123;
  t2149 = t463*t2130;
  t2189 = t871*t2178;
  t2226 = t709*t2215;
  t2236 = t1170*t2130;
  t2240 = t1198*t2178;
  t2244 = t1189*t2215;
  t2246 = t2236 + t2240 + t2244;
  t2262 = -0.038924*t2246;
  t2269 = t970*t2130;
  t2281 = t1033*t2178;
  t2293 = t996*t2215;
  t2299 = t2269 + t2281 + t2293;
  t2309 = -0.80315*t2299;
  t2319 = t1063*t2130;
  t2345 = t1144*t2178;
  t2375 = t1106*t2215;
  t2386 = t2319 + t2345 + t2375;
  t2396 = 0.148705*t2386;
  t1934 = -0.15121*t1896;
  t1954 = t1934 + t1926;
  t1910 = 0.15121*t1896;
  t1928 = t1910 + t1926;
  t2574 = t132*t135*t67;
  t2582 = t152*t67*t167;
  t2583 = t2574 + t2582;
  t2603 = -1.*t152*t132*t67;
  t2605 = t135*t67*t167;
  t2616 = t2603 + t2605;
  t2634 = t121*t1338;
  t2635 = t1347*t2583;
  t2639 = t1353*t2616;
  t2651 = t2634 + t2635 + t2639;
  t2668 = t121*t1456;
  t2680 = t1473*t2583;
  t2681 = t1483*t2616;
  t2684 = t2668 + t2680 + t2681;
  t2686 = t1556*t121;
  t2690 = t1571*t2583;
  t2702 = t1582*t2616;
  t2707 = t2686 + t2690 + t2702;
  t2479 = 5.856279999999999e-13*var1[13];
  t2500 = -0.0387489999948987*t1308;
  t2501 = t2069 + t98;
  t2502 = -2.123459e-6*t2501;
  t2503 = t2002 + t20;
  t2514 = -0.281209000004*t2503;
  t2528 = t2479 + t2500 + t2502 + t2514;
  t2876 = Sin(var1[3]);
  t2887 = -1.*t121*t132*t135*t2876;
  t2892 = -1.*t152*t121*t2876*t167;
  t2898 = t2887 + t2892;
  t2906 = t152*t121*t132*t2876;
  t2907 = -1.*t121*t135*t2876*t167;
  t2917 = t2906 + t2907;
  t2929 = t1338*t2876*t67;
  t2930 = t1347*t2898;
  t2934 = t1353*t2917;
  t2935 = t2929 + t2930 + t2934;
  t2963 = t1456*t2876*t67;
  t2966 = t1473*t2898;
  t2989 = t1483*t2917;
  t2995 = t2963 + t2966 + t2989;
  t3004 = t1556*t2876*t67;
  t3009 = t1571*t2898;
  t3011 = t1582*t2917;
  t3014 = t3004 + t3009 + t3011;
  t3194 = Cos(var1[3]);
  t3199 = t3194*t132*t67;
  t3206 = -1.*t2876*t167;
  t3213 = t3199 + t3206;
  t3221 = -1.*t132*t2876;
  t3229 = -1.*t3194*t67*t167;
  t3242 = t3221 + t3229;
  t3261 = -1.*t135*t3213;
  t3283 = t152*t3242;
  t3300 = t3261 + t3283;
  t3312 = t152*t3213;
  t3317 = t135*t3242;
  t3330 = t3312 + t3317;
  t3336 = -1.*t3194*t121*t1338;
  t3354 = t1347*t3300;
  t3366 = t1353*t3330;
  t3368 = t3336 + t3354 + t3366;
  t3391 = -1.*t3194*t121*t1456;
  t3396 = t1473*t3300;
  t3397 = t1483*t3330;
  t3398 = t3391 + t3396 + t3397;
  t3408 = -1.*t1556*t3194*t121;
  t3415 = t1571*t3300;
  t3419 = t1582*t3330;
  t3433 = t3408 + t3415 + t3419;
  t3555 = -1.*t132*t2876*t67;
  t3558 = -1.*t3194*t167;
  t3560 = t3555 + t3558;
  t3579 = t3194*t132;
  t3581 = -1.*t2876*t67*t167;
  t3588 = t3579 + t3581;
  t3592 = t135*t3560;
  t3593 = t152*t3588;
  t3594 = t3592 + t3593;
  t3599 = t152*t3560;
  t3602 = -1.*t135*t3588;
  t3612 = t3599 + t3602;
  t3622 = t1483*t3594;
  t3639 = t1473*t3612;
  t3649 = t3622 + t3639;
  t3666 = t1353*t3594;
  t3682 = t1347*t3612;
  t3686 = t3666 + t3682;
  t3691 = t1582*t3594;
  t3703 = t1571*t3612;
  t3709 = t3691 + t3703;
  t2427 = -0.15121*t135;
  t2432 = t2420 + t2427;
  t2446 = t2420 + t1926;
  t3799 = t132*t2876*t67;
  t3811 = t3194*t167;
  t3822 = t3799 + t3811;
  t3833 = -1.*t135*t3822;
  t3835 = t3833 + t3593;
  t3845 = -1.*t152*t3822;
  t3849 = t3845 + t3602;
  t3859 = t1483*t3835;
  t3864 = t1473*t3849;
  t3872 = t3859 + t3864;
  t3879 = t1353*t3835;
  t3886 = t1347*t3849;
  t3887 = t3879 + t3886;
  t3911 = t1582*t3835;
  t3921 = t1571*t3849;
  t3925 = t3911 + t3921;
  t27 = t13 + t23;
  t35 = -0.281209000004*t27;
  t41 = t36 + t37;
  t42 = -2.123459e-6*t41;
  t45 = -0.0387489999948987*t20;
  t54 = 5.856279999999999e-13 + t35 + t42 + t45;
  t80 = t79 + t37;
  t86 = -0.038748999993*t80;
  t106 = t92 + t98;
  t111 = -0.281209000004*t106;
  t116 = -1.38024835e-16*t20;
  t119 = -1.4640699999999997e-7 + t86 + t111 + t116;
  t206 = t198 + t23;
  t207 = -0.038748999993*t206;
  t223 = t213 + t98;
  t231 = -2.123459e-6*t223;
  t235 = -0.28120900000849935*t20;
  t239 = 1.0248489999999998e-12 + t207 + t231 + t235;
  t4055 = t152*t3822;
  t4063 = t135*t3588;
  t4071 = t4055 + t4063;
  t4089 = -1.*t121*t479*t2876;
  t4096 = -6.5e-11*t20*t3835;
  t4098 = t574*t4071;
  t4120 = t4089 + t4096 + t4098;
  t4140 = 1.000000000049*t121*t20*t2876;
  t4143 = t733*t3835;
  t4152 = t759*t4071;
  t4157 = t4140 + t4143 + t4152;
  t4168 = -1.*t121*t875*t2876;
  t4169 = t900*t3835;
  t4172 = -1.000000000016*t20*t4071;
  t4175 = t4168 + t4169 + t4172;
  t1248 = t315 + t1247;
  t1253 = -0.038922999986*t1248;
  t1271 = t1269 + t635;
  t1278 = -3.6777349999999994e-6*t1271;
  t1292 = -0.5031490000160505*t372;
  t1295 = 1.8190549999999993e-12 + t1253 + t1278 + t1292;
  t1410 = t1403 + t441;
  t1421 = -0.038922999986*t1410;
  t1426 = t1424 + t635;
  t1428 = -0.503149000008*t1426;
  t1440 = -2.3905277499999995e-16*t372;
  t1442 = -2.598649999999999e-7 + t1421 + t1428 + t1440;
  t1515 = t312 + t1247;
  t1523 = -0.503149000008*t1515;
  t1530 = t1525 + t441;
  t1543 = -3.6777349999999994e-6*t1530;
  t1549 = -0.03892299998790722*t372;
  t1552 = 1.0394599999999997e-12 + t1523 + t1543 + t1549;
  t1615 = t1424 + t385;
  t4288 = -1.*t121*t1338*t2876;
  t4289 = t1347*t3835;
  t4290 = t1353*t4071;
  t4292 = t4288 + t4289 + t4290;
  t4297 = -1.*t121*t1456*t2876;
  t4298 = t1473*t3835;
  t4299 = t1483*t4071;
  t4301 = t4297 + t4298 + t4299;
  t1664 = t1403 + t838;
  t4303 = -1.*t1556*t121*t2876;
  t4307 = t1571*t3835;
  t4316 = t1582*t4071;
  t4349 = t4303 + t4307 + t4316;
  t1703 = t1269 + t385;
  t1720 = t315 + t1714;
  t1759 = t312 + t1714;
  t1764 = t1525 + t838;
  t4491 = t3194*t121*t132*t135;
  t4494 = t152*t3194*t121*t167;
  t4496 = t4491 + t4494;
  t4498 = -1.*t152*t3194*t121*t132;
  t4500 = t3194*t121*t135*t167;
  t4501 = t4498 + t4500;
  t4503 = -1.*t3194*t1338*t67;
  t4505 = t1347*t4496;
  t4506 = t1353*t4501;
  t4507 = t4503 + t4505 + t4506;
  t4511 = -1.*t3194*t1456*t67;
  t4514 = t1473*t4496;
  t4517 = t1483*t4501;
  t4518 = t4511 + t4514 + t4517;
  t4539 = -1.*t1556*t3194*t67;
  t4544 = t1571*t4496;
  t4547 = t1582*t4501;
  t4551 = t4539 + t4544 + t4547;
  t4630 = t132*t2876;
  t4632 = t3194*t67*t167;
  t4633 = t4630 + t4632;
  t4642 = t135*t3213;
  t4646 = t152*t4633;
  t4648 = t4642 + t4646;
  t4650 = -1.*t135*t4633;
  t4651 = t3312 + t4650;
  t4657 = t1483*t4648;
  t4658 = t1473*t4651;
  t4660 = t4657 + t4658;
  t4666 = t1353*t4648;
  t4670 = t1347*t4651;
  t4684 = t4666 + t4670;
  t4690 = t1582*t4648;
  t4691 = t1571*t4651;
  t4692 = t4690 + t4691;
  t4752 = -1.*t3194*t132*t67;
  t4753 = t2876*t167;
  t4754 = t4752 + t4753;
  t4762 = -1.*t135*t4754;
  t4764 = t4762 + t4646;
  t4767 = -1.*t152*t4754;
  t4769 = t4767 + t4650;
  t4771 = t1483*t4764;
  t4787 = t1473*t4769;
  t4788 = t4771 + t4787;
  t4802 = t1353*t4764;
  t4814 = t1347*t4769;
  t4817 = t4802 + t4814;
  t4822 = t1582*t4764;
  t4823 = t1571*t4769;
  t4825 = t4822 + t4823;
  t4883 = t152*t4754;
  t4884 = t135*t4633;
  t4886 = t4883 + t4884;
  t4890 = t3194*t121*t479;
  t4891 = -6.5e-11*t20*t4764;
  t4892 = t574*t4886;
  t4893 = t4890 + t4891 + t4892;
  t4897 = -1.000000000049*t3194*t121*t20;
  t4899 = t733*t4764;
  t4906 = t759*t4886;
  t4908 = t4897 + t4899 + t4906;
  t4911 = t3194*t121*t875;
  t4914 = t900*t4764;
  t4915 = -1.000000000016*t20*t4886;
  t4916 = t4911 + t4914 + t4915;
  t5005 = t3194*t121*t1338;
  t5013 = t1347*t4764;
  t5015 = t1353*t4886;
  t5021 = t5005 + t5013 + t5015;
  t5026 = t3194*t121*t1456;
  t5029 = t1473*t4764;
  t5030 = t1483*t4886;
  t5031 = t5026 + t5029 + t5030;
  t5038 = t1556*t3194*t121;
  t5039 = t1571*t4764;
  t5040 = t1582*t4886;
  t5046 = t5038 + t5039 + t5040;
  p_output1[0]=var2[0] + (t121*t2528 + t2105*t2583 + t2043*t2616 + 0.148705*(t1144*t2651 + t1063*t2684 + t1106*t2707) - 0.038924*(t1198*t2651 + t1170*t2684 + t1189*t2707) + t2684*t463 + t167*t1928*t67 - 1.*t132*t1954*t67 + t2707*t709 + t2651*t871 - 0.80315*(t1033*t2651 + t2684*t970 + t2707*t996))*var2[4] + (-1.*t121*t132*t1928 - 1.*t121*t167*t1954 + t2048 + t2127 + t2149 + t2189 + t2226 + t2262 + t2309 + t2396)*var2[5] + (t2048 + t2127 + t2149 + t2189 + t2226 + t2262 + t2309 + t2396 + t121*t132*t2432 - 1.*t121*t167*t2446)*var2[12] + (t119*t196 + t239*t280 + t463*t606 + t54*t67 + t709*t775 + t871*t935 + 0.148705*(t1063*t606 + t1106*t775 + t1144*t935) - 0.038924*(t1170*t606 + t1189*t775 + t1198*t935) - 0.80315*(t1033*t935 + t606*t970 + t775*t996))*var2[13] + (t1295*t1396 + t1442*t1503 + t1552*t1603 - 0.80315*(t1503*t1703 + t1603*t1720 - 1.000000000016*t1396*t372) + 0.148705*(t1396*t1615 + t1603*t1664 - 6.5e-11*t1503*t372) - 0.038924*(t1396*t1759 + t1503*t1764 - 1.000000000049*t1603*t372))*var2[14];
  p_output1[1]=var2[1] + (-1.*t121*t2528*t3194 + t1954*t3213 + t1928*t3242 + t2105*t3300 + t2043*t3330 + 0.148705*(t1144*t3368 + t1063*t3398 + t1106*t3433) - 0.038924*(t1198*t3368 + t1170*t3398 + t1189*t3433) + t3398*t463 + t3433*t709 + t3368*t871 - 0.80315*(t1033*t3368 + t3398*t970 + t3433*t996))*var2[3] + (-1.*t121*t167*t1928*t2876 + t121*t132*t1954*t2876 + t2105*t2898 + t2043*t2917 + 0.148705*(t1144*t2935 + t1063*t2995 + t1106*t3014) - 0.038924*(t1198*t2935 + t1170*t2995 + t1189*t3014) + t2995*t463 + t2528*t2876*t67 + t3014*t709 + t2935*t871 - 0.80315*(t1033*t2935 + t2995*t970 + t3014*t996))*var2[4] + (t1928*t3560 + t1954*t3588 + t2043*t3594 + t2105*t3612 + 0.148705*(t1063*t3649 + t1144*t3686 + t1106*t3709) - 0.038924*(t1170*t3649 + t1198*t3686 + t1189*t3709) + t3649*t463 + t3709*t709 + t3686*t871 - 0.80315*(t1033*t3686 + t3649*t970 + t3709*t996))*var2[5] + (t2446*t3588 + t2432*t3822 + t2043*t3835 + t2105*t3849 + 0.148705*(t1063*t3872 + t1144*t3887 + t1106*t3925) - 0.038924*(t1170*t3872 + t1198*t3887 + t1189*t3925) + t3872*t463 + t3925*t709 + t3887*t871 - 0.80315*(t1033*t3887 + t3872*t970 + t3925*t996))*var2[12] + (t119*t3835 + t239*t4071 + 0.148705*(t1063*t4120 + t1106*t4157 + t1144*t4175) - 0.038924*(t1170*t4120 + t1189*t4157 + t1198*t4175) + t4120*t463 - 1.*t121*t2876*t54 + t4157*t709 + t4175*t871 - 0.80315*(t1033*t4175 + t4120*t970 + t4157*t996))*var2[13] + (t1295*t4292 + t1442*t4301 + t1552*t4349 + 0.148705*(t1615*t4292 - 6.5e-11*t372*t4301 + t1664*t4349) - 0.80315*(-1.000000000016*t372*t4292 + t1703*t4301 + t1720*t4349) - 0.038924*(t1759*t4292 + t1764*t4301 - 1.000000000049*t372*t4349))*var2[14];
  p_output1[2]=var2[2] + (-1.*t121*t2528*t2876 + t1928*t3588 + t1954*t3822 + t2105*t3835 + t2043*t4071 + 0.148705*(t1144*t4292 + t1063*t4301 + t1106*t4349) - 0.038924*(t1198*t4292 + t1170*t4301 + t1189*t4349) + t4301*t463 + t4349*t709 + t4292*t871 - 0.80315*(t1033*t4292 + t4301*t970 + t4349*t996))*var2[3] + (t121*t167*t1928*t3194 - 1.*t121*t132*t1954*t3194 + t2105*t4496 + t2043*t4501 + 0.148705*(t1144*t4507 + t1063*t4518 + t1106*t4551) - 0.038924*(t1198*t4507 + t1170*t4518 + t1189*t4551) + t4518*t463 - 1.*t2528*t3194*t67 + t4551*t709 + t4507*t871 - 0.80315*(t1033*t4507 + t4518*t970 + t4551*t996))*var2[4] + (t1928*t3213 + t1954*t4633 + t2043*t4648 + t2105*t4651 + t463*t4660 + 0.148705*(t1063*t4660 + t1144*t4684 + t1106*t4692) - 0.038924*(t1170*t4660 + t1198*t4684 + t1189*t4692) + t4692*t709 + t4684*t871 - 0.80315*(t1033*t4684 + t4660*t970 + t4692*t996))*var2[5] + (t2446*t4633 + t2432*t4754 + t2043*t4764 + t2105*t4769 + t463*t4788 + 0.148705*(t1063*t4788 + t1144*t4817 + t1106*t4825) - 0.038924*(t1170*t4788 + t1198*t4817 + t1189*t4825) + t4825*t709 + t4817*t871 - 0.80315*(t1033*t4817 + t4788*t970 + t4825*t996))*var2[12] + (t119*t4764 + t239*t4886 + t463*t4893 + 0.148705*(t1063*t4893 + t1106*t4908 + t1144*t4916) - 0.038924*(t1170*t4893 + t1189*t4908 + t1198*t4916) + t121*t3194*t54 + t4908*t709 + t4916*t871 - 0.80315*(t1033*t4916 + t4893*t970 + t4908*t996))*var2[13] + (t1295*t5021 + t1442*t5031 + t1552*t5046 + 0.148705*(t1615*t5021 - 6.5e-11*t372*t5031 + t1664*t5046) - 0.80315*(-1.000000000016*t372*t5021 + t1703*t5031 + t1720*t5046) - 0.038924*(t1759*t5021 + t1764*t5031 - 1.000000000049*t372*t5046))*var2[14];
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

#include "impact_velocity_RlFootDiagonalStance2.hh"

namespace TrotStance2
{

void impact_velocity_RlFootDiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
