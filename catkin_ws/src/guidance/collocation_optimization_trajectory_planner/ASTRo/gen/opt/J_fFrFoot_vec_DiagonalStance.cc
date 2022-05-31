/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 16:58:57 GMT+02:00
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
  double t201;
  double t262;
  double t219;
  double t317;
  double t327;
  double t316;
  double t332;
  double t251;
  double t353;
  double t354;
  double t366;
  double t267;
  double t315;
  double t326;
  double t335;
  double t343;
  double t1244;
  double t1306;
  double t1332;
  double t1337;
  double t1396;
  double t1404;
  double t1471;
  double t1476;
  double t1491;
  double t1502;
  double t1516;
  double t1518;
  double t1550;
  double t428;
  double t454;
  double t463;
  double t645;
  double t666;
  double t698;
  double t378;
  double t379;
  double t380;
  double t1555;
  double t1558;
  double t1578;
  double t1615;
  double t1617;
  double t1618;
  double t254;
  double t289;
  double t290;
  double t1645;
  double t1657;
  double t1663;
  double t1698;
  double t1694;
  double t344;
  double t391;
  double t417;
  double t471;
  double t723;
  double t821;
  double t1925;
  double t1941;
  double t1963;
  double t1979;
  double t1980;
  double t1986;
  double t1987;
  double t1993;
  double t1995;
  double t2009;
  double t2015;
  double t2016;
  double t2020;
  double t1586;
  double t1587;
  double t1595;
  double t1818;
  double t1830;
  double t1831;
  double t1776;
  double t1787;
  double t1788;
  double t1673;
  double t1674;
  double t1677;
  double t2063;
  double t2064;
  double t2067;
  double t1700;
  double t1747;
  double t1761;
  double t2074;
  double t2082;
  double t2083;
  double t2233;
  double t2266;
  double t2270;
  double t1856;
  double t1889;
  double t1900;
  double t1907;
  double t1908;
  double t1917;
  double t2305;
  double t2306;
  double t2318;
  double t2319;
  double t2320;
  double t2321;
  double t2322;
  double t2323;
  double t2327;
  double t2336;
  double t2342;
  double t2344;
  double t2346;
  double t2021;
  double t2025;
  double t2028;
  double t2034;
  double t2036;
  double t2043;
  double t2096;
  double t2097;
  double t2106;
  double t2115;
  double t2123;
  double t2167;
  double t2367;
  double t2409;
  double t2427;
  double t2449;
  double t2458;
  double t2463;
  double t2549;
  double t2552;
  double t2553;
  double t2554;
  double t2561;
  double t2624;
  double t2640;
  double t2656;
  double t2658;
  double t2720;
  double t2728;
  double t2780;
  double t2818;
  double t2548;
  double t2571;
  double t2592;
  double t2593;
  double t2641;
  double t2844;
  double t3009;
  double t3111;
  double t3128;
  double t3162;
  double t3170;
  double t3182;
  double t3184;
  double t3207;
  double t3229;
  double t3508;
  double t3687;
  double t3693;
  double t2609;
  double t3238;
  double t3252;
  double t3906;
  double t4049;
  double t4050;
  double t3788;
  double t3839;
  double t3840;
  double t3867;
  double t3875;
  double t4389;
  double t4392;
  double t6019;
  double t6252;
  double t6263;
  double t4579;
  double t4590;
  double t4599;
  double t4627;
  double t4763;
  double t4780;
  double t4828;
  double t4837;
  double t6015;
  double t6399;
  double t5035;
  double t5086;
  double t5133;
  double t5134;
  double t5280;
  double t5289;
  double t5337;
  double t5340;
  double t5705;
  double t5716;
  double t5864;
  double t5879;
  double t5969;
  double t6600;
  double t11569;
  double t11590;
  double t12094;
  double t12124;
  double t12152;
  double t12198;
  double t12223;
  double t6662;
  double t6744;
  double t6915;
  double t12464;
  double t12485;
  double t12488;
  double t7046;
  double t7413;
  double t7628;
  double t7939;
  double t8056;
  double t8167;
  double t8174;
  double t8463;
  double t8546;
  double t8675;
  double t9315;
  double t9736;
  double t9907;
  double t10179;
  double t10612;
  double t11010;
  double t11089;
  double t11333;
  double t11363;
  double t14477;
  double t14575;
  double t14646;
  double t14888;
  double t15081;
  double t15082;
  double t15157;
  double t1584;
  double t1598;
  double t1611;
  double t14365;
  double t14376;
  double t14378;
  double t14904;
  double t15276;
  double t15284;
  double t15541;
  double t15553;
  double t15650;
  double t18512;
  double t18564;
  double t18574;
  double t19067;
  double t19248;
  double t19276;
  double t19383;
  double t19409;
  double t18586;
  double t18718;
  double t18896;
  double t19258;
  double t19421;
  double t19851;
  double t20327;
  double t20465;
  double t20473;
  double t1669;
  double t1678;
  double t1682;
  double t6628;
  double t6994;
  double t8148;
  double t8467;
  double t9803;
  double t10630;
  double t26336;
  double t26377;
  double t26381;
  double t12492;
  double t26386;
  double t12547;
  double t26509;
  double t26571;
  double t26578;
  double t26608;
  double t26748;
  double t26805;
  double t26869;
  double t26873;
  double t12788;
  double t26965;
  double t12912;
  double t27017;
  double t27043;
  double t27056;
  double t27061;
  double t27090;
  double t13193;
  double t27109;
  double t27345;
  double t27346;
  double t27457;
  double t27512;
  double t13624;
  double t27514;
  double t27534;
  double t27538;
  double t27547;
  double t27548;
  double t14426;
  double t15931;
  double t15972;
  double t16397;
  double t16399;
  double t16687;
  double t17038;
  double t17817;
  double t18918;
  double t21736;
  double t22477;
  double t22636;
  double t22818;
  double t23356;
  double t25289;
  double t25780;
  double t28115;
  double t28116;
  double t29609;
  double t29615;
  double t28229;
  double t29468;
  double t29472;
  double t29473;
  double t29480;
  double t29481;
  double t29485;
  double t29491;
  double t29538;
  double t29583;
  double t28729;
  double t28735;
  double t28739;
  double t29682;
  double t29687;
  double t29710;
  double t30021;
  double t30040;
  double t30042;
  double t30044;
  double t30060;
  double t30092;
  double t30178;
  double t30180;
  double t30395;
  double t30401;
  t201 = Sin(var1[4]);
  t262 = Cos(var1[12]);
  t219 = Cos(var1[5]);
  t317 = Cos(var1[14]);
  t327 = Sin(var1[13]);
  t316 = Cos(var1[13]);
  t332 = Sin(var1[14]);
  t251 = Sin(var1[12]);
  t353 = t317*t327;
  t354 = -1.*t316*t332;
  t366 = t353 + t354;
  t267 = Sin(var1[5]);
  t315 = Cos(var1[4]);
  t326 = t316*t317;
  t335 = t327*t332;
  t343 = t326 + t335;
  t1244 = -1.*t262*t219;
  t1306 = t251*t267;
  t1332 = t1244 + t1306;
  t1337 = var2[1]*t315*t1332;
  t1396 = -1.*t219*t251*t366;
  t1404 = -1.*t262*t366*t267;
  t1471 = t1396 + t1404;
  t1476 = var2[2]*t315*t1471;
  t1491 = -1.*t219*t251*t343;
  t1502 = -1.*t262*t343*t267;
  t1516 = t1491 + t1502;
  t1518 = var2[0]*t315*t1516;
  t1550 = t1337 + t1476 + t1518;
  t428 = -1.*t317*t327;
  t454 = t316*t332;
  t463 = t428 + t454;
  t645 = t262*t219*t343;
  t666 = -1.*t251*t343*t267;
  t698 = t645 + t666;
  t378 = t262*t219*t366;
  t379 = -1.*t251*t366*t267;
  t380 = t378 + t379;
  t1555 = -1.*t316*t317;
  t1558 = -1.*t327*t332;
  t1578 = t1555 + t1558;
  t1615 = t463*t201;
  t1617 = t315*t698;
  t1618 = t1615 + t1617;
  t254 = -1.*t219*t251;
  t289 = -1.*t262*t267;
  t290 = t254 + t289;
  t1645 = t343*t201;
  t1657 = t315*t380;
  t1663 = t1645 + t1657;
  t1698 = Sin(var1[3]);
  t1694 = Cos(var1[3]);
  t344 = t315*t343;
  t391 = -1.*t201*t380;
  t417 = t344 + t391;
  t471 = t315*t463;
  t723 = -1.*t201*t698;
  t821 = t471 + t723;
  t1925 = t1694*t290;
  t1941 = t1698*t201*t1332;
  t1963 = t1925 + t1941;
  t1979 = var2[1]*t1963;
  t1980 = t1698*t201*t1471;
  t1986 = t1694*t380;
  t1987 = t1980 + t1986;
  t1993 = var2[2]*t1987;
  t1995 = t1698*t201*t1516;
  t2009 = t1694*t698;
  t2015 = t1995 + t2009;
  t2016 = var2[0]*t2015;
  t2020 = t1979 + t1993 + t2016;
  t1586 = t262*t219*t463;
  t1587 = -1.*t251*t463*t267;
  t1595 = t1586 + t1587;
  t1818 = t219*t251*t343;
  t1830 = t262*t343*t267;
  t1831 = t1818 + t1830;
  t1776 = t219*t251*t366;
  t1787 = t262*t366*t267;
  t1788 = t1776 + t1787;
  t1673 = t262*t219*t1578;
  t1674 = -1.*t251*t1578*t267;
  t1677 = t1673 + t1674;
  t2063 = t1694*t1831;
  t2064 = -1.*t1698*t821;
  t2067 = t2063 + t2064;
  t1700 = t262*t219;
  t1747 = -1.*t251*t267;
  t1761 = t1700 + t1747;
  t2074 = t1694*t1788;
  t2082 = -1.*t1698*t417;
  t2083 = t2074 + t2082;
  t2233 = t1698*t201*t290;
  t2266 = t1694*t1761;
  t2270 = t2233 + t2266;
  t1856 = -1.*t343*t201;
  t1889 = -1.*t315*t380;
  t1900 = t1856 + t1889;
  t1907 = -1.*t463*t201;
  t1908 = -1.*t315*t698;
  t1917 = t1907 + t1908;
  t2305 = t1698*t290;
  t2306 = -1.*t1694*t201*t1332;
  t2318 = t2305 + t2306;
  t2319 = var2[1]*t2318;
  t2320 = -1.*t1694*t201*t1471;
  t2321 = t1698*t380;
  t2322 = t2320 + t2321;
  t2323 = var2[2]*t2322;
  t2327 = -1.*t1694*t201*t1516;
  t2336 = t1698*t698;
  t2342 = t2327 + t2336;
  t2344 = var2[0]*t2342;
  t2346 = t2319 + t2323 + t2344;
  t2021 = t219*t251*t463;
  t2025 = t262*t463*t267;
  t2028 = t2021 + t2025;
  t2034 = t315*t1578;
  t2036 = -1.*t201*t1595;
  t2043 = t2034 + t2036;
  t2096 = t219*t251*t1578;
  t2097 = t262*t1578*t267;
  t2106 = t2096 + t2097;
  t2115 = t315*t366;
  t2123 = -1.*t201*t1677;
  t2167 = t2115 + t2123;
  t2367 = t1698*t1831;
  t2409 = t1694*t821;
  t2427 = t2367 + t2409;
  t2449 = t1698*t1788;
  t2458 = t1694*t417;
  t2463 = t2449 + t2458;
  t2549 = -1.*t317;
  t2552 = 1. + t2549;
  t2553 = 0.50321*t2552;
  t2554 = 0.19821*t317;
  t2561 = t2553 + t2554;
  t2624 = -1.*t262;
  t2640 = 1. + t2624;
  t2656 = -1.*t316;
  t2658 = 1. + t2656;
  t2720 = 0.28121*t2658;
  t2728 = t316*t2561;
  t2780 = -0.305*t327*t332;
  t2818 = t2720 + t2728 + t2780;
  t2548 = 0.28121*t327;
  t2571 = -1.*t2561*t327;
  t2592 = -0.305*t316*t332;
  t2593 = t2548 + t2571 + t2592;
  t2641 = 0.15121*t2640;
  t2844 = t262*t2818;
  t3009 = t2641 + t2844;
  t3111 = t219*t3009;
  t3128 = -0.15121*t2640;
  t3162 = -0.15121*t262;
  t3170 = -0.15121*t251;
  t3182 = t251*t2818;
  t3184 = t3128 + t3162 + t3170 + t3182;
  t3207 = -1.*t3184*t267;
  t3229 = t3111 + t3207;
  t3508 = t2593*t201;
  t3687 = t315*t3229;
  t3693 = t3508 + t3687;
  t2609 = -1.*t2593*t201;
  t3238 = -1.*t315*t3229;
  t3252 = t2609 + t3238;
  t3906 = t315*t2593;
  t4049 = -1.*t201*t3229;
  t4050 = t3906 + t4049;
  t3788 = t219*t3184;
  t3839 = t3009*t267;
  t3840 = t3788 + t3839;
  t3867 = -1.*t1761*t3840;
  t3875 = -1.*t315*t290*t3693;
  t4389 = t201*t290*t4050;
  t4392 = t3867 + t3875 + t4389;
  t6019 = -1.*t219*t3184;
  t6252 = -1.*t3009*t267;
  t6263 = t6019 + t6252;
  t4579 = t1788*t3840;
  t4590 = t1663*t3693;
  t4599 = t417*t4050;
  t4627 = t4579 + t4590 + t4599;
  t4763 = t1761*t3840;
  t4780 = t315*t290*t3693;
  t4828 = -1.*t201*t290*t4050;
  t4837 = t4763 + t4780 + t4828;
  t6015 = Power(t315,2);
  t6399 = Power(t201,2);
  t5035 = -1.*t1831*t3840;
  t5086 = -1.*t1618*t3693;
  t5133 = -1.*t821*t4050;
  t5134 = t5035 + t5086 + t5133;
  t5280 = -1.*t1788*t3840;
  t5289 = -1.*t1663*t3693;
  t5337 = -1.*t417*t4050;
  t5340 = t5280 + t5289 + t5337;
  t5705 = t1831*t3840;
  t5716 = t1618*t3693;
  t5864 = t821*t4050;
  t5879 = t5705 + t5716 + t5864;
  t5969 = t315*t1471*t4392;
  t6600 = -1.*t290*t3840;
  t11569 = 0.15121*t251;
  t11590 = -1.*t251*t2818;
  t12094 = t11569 + t11590;
  t12124 = t219*t12094;
  t12152 = t3162 + t2844;
  t12198 = -1.*t12152*t267;
  t12223 = t12124 + t12198;
  t6662 = -1.*t315*t1332*t3693;
  t6744 = t201*t1332*t4050;
  t6915 = t380*t3840;
  t12464 = t219*t12152;
  t12485 = t12094*t267;
  t12488 = t12464 + t12485;
  t7046 = t315*t1471*t3693;
  t7413 = -1.*t201*t1471*t4050;
  t7628 = t315*t1332*t4627;
  t7939 = t315*t1516*t4837;
  t8056 = t290*t3840;
  t8167 = t315*t1332*t3693;
  t8174 = -1.*t201*t1332*t4050;
  t8463 = -1.*t698*t3840;
  t8546 = -1.*t315*t1516*t3693;
  t8675 = t201*t1516*t4050;
  t9315 = t315*t1332*t5134;
  t9736 = -1.*t380*t3840;
  t9907 = -1.*t315*t1471*t3693;
  t10179 = t201*t1471*t4050;
  t10612 = t698*t3840;
  t11010 = t315*t1516*t3693;
  t11089 = -1.*t201*t1516*t4050;
  t11333 = t315*t1516*t5340;
  t11363 = t315*t1471*t5879;
  t14477 = 0.28121*t316;
  t14575 = -1.*t316*t2561;
  t14646 = 0.305*t327*t332;
  t14888 = t14477 + t14575 + t14646;
  t15081 = t262*t219*t2593;
  t15082 = -1.*t251*t2593*t267;
  t15157 = t15081 + t15082;
  t1584 = t1578*t201;
  t1598 = t315*t1595;
  t1611 = t1584 + t1598;
  t14365 = t219*t251*t2593;
  t14376 = t262*t2593*t267;
  t14378 = t14365 + t14376;
  t14904 = t14888*t201;
  t15276 = t315*t15157;
  t15284 = t14904 + t15276;
  t15541 = t315*t14888;
  t15553 = -1.*t201*t15157;
  t15650 = t15541 + t15553;
  t18512 = -0.305*t317*t327;
  t18564 = 0.305*t316*t332;
  t18574 = t18512 + t18564;
  t19067 = -0.305*t316*t317;
  t19248 = t19067 + t2780;
  t19276 = t262*t219*t18574;
  t19383 = -1.*t251*t18574*t267;
  t19409 = t19276 + t19383;
  t18586 = t219*t251*t18574;
  t18718 = t262*t18574*t267;
  t18896 = t18586 + t18718;
  t19258 = t19248*t201;
  t19421 = t315*t19409;
  t19851 = t19258 + t19421;
  t20327 = t315*t19248;
  t20465 = -1.*t201*t19409;
  t20473 = t20327 + t20465;
  t1669 = t366*t201;
  t1678 = t315*t1677;
  t1682 = t1669 + t1678;
  t6628 = -1.*t1761*t3229;
  t6994 = t1788*t3229;
  t8148 = t1761*t3229;
  t8467 = -1.*t1831*t3229;
  t9803 = -1.*t1788*t3229;
  t10630 = t1831*t3229;
  t26336 = -1.*t290*t3229;
  t26377 = t3867 + t26336;
  t26381 = t380*t26377;
  t12492 = -1.*t1761*t12488;
  t26386 = -1.*t1332*t3229;
  t12547 = t1788*t12488;
  t26509 = t1471*t3229;
  t26571 = t2593*t343;
  t26578 = t380*t3229;
  t26608 = t26571 + t4579 + t26578;
  t26748 = t290*t26608;
  t26805 = t290*t3229;
  t26869 = t4763 + t26805;
  t26873 = t698*t26869;
  t12788 = t1761*t12488;
  t26965 = t1332*t3229;
  t12912 = -1.*t1831*t12488;
  t27017 = -1.*t1516*t3229;
  t27043 = -1.*t2593*t463;
  t27056 = -1.*t698*t3229;
  t27061 = t27043 + t5035 + t27056;
  t27090 = t290*t27061;
  t13193 = -1.*t1788*t12488;
  t27109 = -1.*t1471*t3229;
  t27345 = -1.*t2593*t343;
  t27346 = -1.*t380*t3229;
  t27457 = t27345 + t5280 + t27346;
  t27512 = t698*t27457;
  t13624 = t1831*t12488;
  t27514 = t1516*t3229;
  t27534 = t2593*t463;
  t27538 = t698*t3229;
  t27547 = t27534 + t5705 + t27538;
  t27548 = t380*t27547;
  t14426 = t1761*t14378;
  t15931 = -1.*t14378*t1831;
  t15972 = -1.*t2028*t3840;
  t16397 = t14378*t1831;
  t16399 = t2028*t3840;
  t16687 = -1.*t1788*t14378;
  t17038 = -1.*t1761*t14378;
  t17817 = t1788*t14378;
  t18918 = t1761*t18896;
  t21736 = -1.*t18896*t1831;
  t22477 = -1.*t1761*t18896;
  t22636 = t1788*t18896;
  t22818 = t2106*t3840;
  t23356 = t18896*t1831;
  t25289 = -1.*t1788*t18896;
  t25780 = -1.*t2106*t3840;
  t28115 = t2593*t1578;
  t28116 = t463*t14888;
  t29609 = Power(t262,2);
  t29615 = Power(t251,2);
  t28229 = -1.*t14888*t343;
  t29468 = t251*t3009;
  t29472 = -1.*t262*t3184;
  t29473 = t29468 + t29472;
  t29480 = -1.*t251*t3009;
  t29481 = t262*t3184;
  t29485 = t29480 + t29481;
  t29491 = -1.*t262*t366*t3009;
  t29538 = -1.*t251*t366*t3184;
  t29583 = t27345 + t29491 + t29538;
  t28729 = t463*t19248;
  t28735 = -1.*t366*t2593;
  t28739 = -1.*t19248*t343;
  t29682 = t262*t343*t3009;
  t29687 = t251*t343*t3184;
  t29710 = t27534 + t29682 + t29687;
  t30021 = -0.15121*t1578;
  t30040 = -0.15121*t343;
  t30042 = t30021 + t30040;
  t30044 = var2[2]*t30042;
  t30060 = -1.*t366*t2818;
  t30092 = t30060 + t27345;
  t30178 = t2818*t343;
  t30180 = t27534 + t30178;
  t30395 = 0.28121*t317;
  t30401 = -1.*t2561*t317;
  p_output1[0]=t821*var2[0] - 1.*t201*t290*var2[1] + t417*var2[2];
  p_output1[1]=t1550;
  p_output1[2]=t1550;
  p_output1[3]=t1611*var2[0] + t1618*var2[2];
  p_output1[4]=t1663*var2[0] + t1682*var2[2];
  p_output1[5]=t1618;
  p_output1[6]=t290*t315;
  p_output1[7]=t1663;
  p_output1[8]=(-1.*t1698*t1831 - 1.*t1694*t821)*var2[0] + (-1.*t1698*t1761 + t1694*t201*t290)*var2[1] + (-1.*t1698*t1788 - 1.*t1694*t417)*var2[2];
  p_output1[9]=-1.*t1698*t1917*var2[0] + t1698*t290*t315*var2[1] - 1.*t1698*t1900*var2[2];
  p_output1[10]=t2020;
  p_output1[11]=t2020;
  p_output1[12]=(t1694*t2028 - 1.*t1698*t2043)*var2[0] + t2067*var2[2];
  p_output1[13]=t2083*var2[0] + (t1694*t2106 - 1.*t1698*t2167)*var2[2];
  p_output1[14]=t2067;
  p_output1[15]=t2270;
  p_output1[16]=t2083;
  p_output1[17]=t2067*var2[0] + t2270*var2[1] + t2083*var2[2];
  p_output1[18]=t1694*t1917*var2[0] - 1.*t1694*t290*t315*var2[1] + t1694*t1900*var2[2];
  p_output1[19]=t2346;
  p_output1[20]=t2346;
  p_output1[21]=(t1698*t2028 + t1694*t2043)*var2[0] + t2427*var2[2];
  p_output1[22]=t2463*var2[0] + (t1698*t2106 + t1694*t2167)*var2[2];
  p_output1[23]=t2427;
  p_output1[24]=t1698*t1761 - 1.*t1694*t201*t290;
  p_output1[25]=t2463;
  p_output1[26]=(t1663*(t201*t290*t3252 + t201*t290*t3693) + t290*t315*(t1663*t4050 + t1900*t4050 + t3252*t417 + t3693*t417) + t417*t4392 - 1.*t201*t290*t4627)*var2[0] + (t1618*(-1.*t1663*t4050 - 1.*t1900*t4050 - 1.*t3252*t417 - 1.*t3693*t417) + t417*t5879 + t5340*t821 + t1663*(t1618*t4050 + t1917*t4050 + t3252*t821 + t3693*t821))*var2[1] + (t1618*(-1.*t201*t290*t3252 - 1.*t201*t290*t3693) - 1.*t201*t290*t5134 + t4837*t821 + t290*t315*(-1.*t1618*t4050 - 1.*t1917*t4050 - 1.*t3252*t821 - 1.*t3693*t821))*var2[2];
  p_output1[27]=(t5969 + t1663*(-1.*t290*t6015*t6263 - 1.*t290*t6263*t6399 + t6600 + t6628 + t6662 + t6744) + t290*t315*(t1663*t315*t6263 - 1.*t201*t417*t6263 + t6915 + t6994 + t7046 + t7413) + t7628)*var2[0] + (t11333 + t11363 + t1663*(t10612 + t10630 + t11010 + t11089 + t1618*t315*t6263 - 1.*t201*t6263*t821) + t1618*(t10179 - 1.*t1663*t315*t6263 + t201*t417*t6263 + t9736 + t9803 + t9907))*var2[1] + (t7939 + t1618*(t290*t6015*t6263 + t290*t6263*t6399 + t8056 + t8148 + t8167 + t8174) + t290*t315*(-1.*t1618*t315*t6263 + t201*t6263*t821 + t8463 + t8467 + t8546 + t8675) + t9315)*var2[2];
  p_output1[28]=(t5969 + t1663*(t12492 - 1.*t12223*t290*t6015 - 1.*t12223*t290*t6399 + t6600 + t6662 + t6744) + t290*t315*(t12547 + t12223*t1663*t315 - 1.*t12223*t201*t417 + t6915 + t7046 + t7413) + t7628)*var2[0] + (t11333 + t11363 + t1663*(t10612 + t11010 + t11089 + t13624 + t12223*t1618*t315 - 1.*t12223*t201*t821) + t1618*(t10179 + t13193 - 1.*t12223*t1663*t315 + t12223*t201*t417 + t9736 + t9907))*var2[1] + (t7939 + t1618*(t12788 + t12223*t290*t6015 + t12223*t290*t6399 + t8056 + t8167 + t8174) + t290*t315*(t12912 - 1.*t12223*t1618*t315 + t12223*t201*t821 + t8463 + t8546 + t8675) + t9315)*var2[2];
  p_output1[29]=(t1663*(t17038 + t15650*t201*t290 - 1.*t15284*t290*t315) + t1618*t4392 + t290*t315*(t15284*t1663 + t17817 + t15650*t417 + t5705 + t5716 + t5864))*var2[0] + (t1618*(-1.*t15284*t1663 + t16687 - 1.*t15650*t417 + t5035 + t5086 + t5133) + t1611*t5340 + t1618*t5879 + t1663*(t15284*t1618 + t16397 + t16399 + t1611*t3693 + t2043*t4050 + t15650*t821))*var2[1] + (t1618*(t14426 - 1.*t15650*t201*t290 + t15284*t290*t315) + t1611*t4837 + t290*t315*(t15931 + t15972 - 1.*t15284*t1618 - 1.*t1611*t3693 - 1.*t2043*t4050 - 1.*t15650*t821))*var2[2];
  p_output1[30]=(t1663*(t22477 + t201*t20473*t290 - 1.*t19851*t290*t315) + t290*t315*(t1663*t19851 + t22636 + t22818 + t1682*t3693 + t2167*t4050 + t20473*t417) + t1682*t4392)*var2[0] + (t1618*(-1.*t1663*t19851 + t25289 + t25780 - 1.*t1682*t3693 - 1.*t2167*t4050 - 1.*t20473*t417) + t1663*t5340 + t1682*t5879 + t1663*(t1618*t19851 + t23356 + t4579 + t4590 + t4599 + t20473*t821))*var2[1] + (t1618*(t18918 - 1.*t201*t20473*t290 + t19851*t290*t315) + t1663*t4837 + t290*t315*(-1.*t1618*t19851 + t21736 + t5280 + t5289 + t5337 - 1.*t20473*t821))*var2[2];
  p_output1[31]=t1663*t4392 + t290*t315*t4627;
  p_output1[32]=t1618*t5340 + t1663*t5879;
  p_output1[33]=t1618*t4837 + t290*t315*t5134;
  p_output1[34]=(t26381 + t26748 + t1788*(t26386 - 1.*t290*t6263 + t6600 + t6628) + t1761*(t26509 + t380*t6263 + t6915 + t6994))*var2[0] + (t27512 + t27548 + t1788*(t10612 + t10630 + t27514 + t6263*t698) + t1831*(t27109 - 1.*t380*t6263 + t9736 + t9803))*var2[1] + (t26873 + t27090 + t1831*(t26965 + t290*t6263 + t8056 + t8148) + t1761*(t27017 - 1.*t6263*t698 + t8463 + t8467))*var2[2];
  p_output1[35]=(t26381 + t26748 + t1788*(t12492 + t26386 - 1.*t12223*t290 + t6600) + t1761*(t12547 + t26509 + t12223*t380 + t6915))*var2[0] + (t27512 + t27548 + t1788*(t10612 + t13624 + t27514 + t12223*t698) + t1831*(t13193 + t27109 - 1.*t12223*t380 + t9736))*var2[1] + (t26873 + t27090 + t1831*(t12788 + t26965 + t12223*t290 + t8056) + t1761*(t12912 + t27017 - 1.*t12223*t698 + t8463))*var2[2];
  p_output1[36]=(t1831*t26377 + t1788*(t17038 - 1.*t15157*t290) + t1761*(t17817 + t27534 + t27538 + t14888*t343 + t15157*t380 + t5705))*var2[0] + (t2028*t27457 + t1831*t27547 + t1831*(t16687 + t27043 + t27056 + t28229 - 1.*t15157*t380 + t5035) + t1788*(t16397 + t16399 + t28115 + t28116 + t1595*t3229 + t15157*t698))*var2[1] + (t2028*t26869 + t1831*(t14426 + t15157*t290) + t1761*(t15931 + t15972 - 1.*t1578*t2593 - 1.*t1595*t3229 - 1.*t14888*t463 - 1.*t15157*t698))*var2[2];
  p_output1[37]=(t2106*t26377 + t1788*(t22477 - 1.*t19409*t290) + t1761*(t22636 + t22818 + t1677*t3229 + t19248*t343 + t2593*t366 + t19409*t380))*var2[0] + (t1788*t27457 + t2106*t27547 + t1831*(t25289 + t25780 + t28735 + t28739 - 1.*t1677*t3229 - 1.*t19409*t380) + t1788*(t23356 + t26571 + t26578 + t28729 + t4579 + t19409*t698))*var2[1] + (t1788*t26869 + t1831*(t18918 + t19409*t290) + t1761*(t21736 + t27345 + t27346 - 1.*t19248*t463 + t5280 - 1.*t19409*t698))*var2[2];
  p_output1[38]=t1788*t26377 + t1761*t26608;
  p_output1[39]=t1831*t27457 + t1788*t27547;
  p_output1[40]=t1831*t26869 + t1761*t27061;
  p_output1[41]=(t12094*t251 - 1.*t12152*t262 + t262*t3009 + t251*t3184)*t343*var2[0] + (t343*(t12152*t251*t343 + t12094*t262*t343 - 1.*t251*t3009*t343 + t262*t3184*t343) + (-1.*t12152*t251*t366 - 1.*t12094*t262*t366 + t251*t3009*t366 - 1.*t262*t3184*t366)*t463)*var2[1] + (-1.*t12094*t251 + t12152*t262 - 1.*t262*t3009 - 1.*t251*t3184)*t463*var2[2];
  p_output1[42]=t29473*t463*var2[0] + (t1578*t29583 + t29710*t463 + (t27043 + t28229 - 1.*t262*t3009*t343 - 1.*t251*t3184*t343 - 1.*t2593*t29609*t366 - 1.*t2593*t29615*t366)*t463 + t343*(t28115 + t28116 + t2593*t29609*t343 + t2593*t29615*t343 + t262*t3009*t463 + t251*t3184*t463))*var2[1] + t1578*t29485*var2[2];
  p_output1[43]=t29473*t366*var2[0] + (t29583*t343 + t29710*t366 + t343*(t26571 + t28729 + t18574*t29609*t343 + t18574*t29615*t343 + t262*t3009*t366 + t251*t3184*t366) + (t28735 + t28739 - 1.*t1578*t262*t3009 - 1.*t1578*t251*t3184 - 1.*t18574*t29609*t366 - 1.*t18574*t29615*t366)*t463)*var2[1] + t29485*t343*var2[2];
  p_output1[44]=t29473*t343;
  p_output1[45]=t29710*t343 + t29583*t463;
  p_output1[46]=t29485*t463;
  p_output1[47]=t30044 + (t1578*t30092 + t30180*t463 + (t27043 + t28229 + t28735 - 1.*t2818*t343)*t463 + t343*(t26571 + t28115 + t28116 + t2818*t463))*var2[1];
  p_output1[48]=t30044 + (t30092*t343 + t30180*t366 + t343*(t26571 + t28729 + t18574*t343 + t2818*t366) + (-1.*t1578*t2818 + t28735 + t28739 - 1.*t18574*t366)*t463)*var2[1];
  p_output1[49]=-0.15121 + t30180*t343 + t30092*t463;
  p_output1[50]=-0.15121*t366 - 0.15121*t463;
  p_output1[51]=(t30395 + t30401 - 0.305*Power(t317,2))*var2[0] + (-0.28121*t332 + t2561*t332 + 0.305*t317*t332)*var2[2];
  p_output1[52]=0.28121*t332 - 1.*t2561*t332 - 0.305*t317*t332;
  p_output1[53]=t30395 + t30401 + 0.305*Power(t332,2);
  p_output1[54]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 55, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fFrFoot_vec_DiagonalStance.hh"

namespace DiagonalStance
{

void J_fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
