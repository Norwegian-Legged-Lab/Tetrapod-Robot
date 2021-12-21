/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:16:25 GMT+01:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t39;
  double t54;
  double t87;
  double t92;
  double t94;
  double t95;
  double t120;
  double t123;
  double t124;
  double t157;
  double t173;
  double t178;
  double t264;
  double t276;
  double t279;
  double t282;
  double t289;
  double t292;
  double t265;
  double t332;
  double t365;
  double t366;
  double t367;
  double t374;
  double t408;
  double t428;
  double t350;
  double t354;
  double t359;
  double t388;
  double t398;
  double t402;
  double t472;
  double t474;
  double t476;
  double t480;
  double t432;
  double t434;
  double t435;
  double t442;
  double t444;
  double t452;
  double t600;
  double t545;
  double t564;
  double t570;
  double t575;
  double t501;
  double t503;
  double t506;
  double t510;
  double t519;
  double t521;
  double t65;
  double t138;
  double t144;
  double t154;
  double t190;
  double t191;
  double t197;
  double t203;
  double t208;
  double t211;
  double t214;
  double t251;
  double t317;
  double t318;
  double t778;
  double t765;
  double t336;
  double t337;
  double t776;
  double t779;
  double t784;
  double t789;
  double t793;
  double t801;
  double t361;
  double t373;
  double t377;
  double t383;
  double t404;
  double t405;
  double t406;
  double t410;
  double t417;
  double t421;
  double t423;
  double t807;
  double t817;
  double t845;
  double t847;
  double t848;
  double t851;
  double t454;
  double t477;
  double t481;
  double t483;
  double t526;
  double t533;
  double t535;
  double t582;
  double t587;
  double t592;
  double t595;
  double t629;
  double t633;
  double t865;
  double t868;
  double t878;
  double t888;
  double t932;
  double t937;
  double t946;
  double t947;
  double t900;
  double t905;
  double t907;
  double t917;
  double t695;
  double t696;
  double t1056;
  double t1061;
  double t1062;
  double t1069;
  double t1071;
  double t1076;
  double t1080;
  double t1082;
  double t1086;
  double t1099;
  double t1103;
  double t1105;
  double t1122;
  double t1126;
  double t1127;
  double t1134;
  double t1175;
  double t1180;
  double t1184;
  double t1185;
  double t1146;
  double t1150;
  double t1152;
  double t1155;
  double t1374;
  double t1375;
  double t1377;
  double t1395;
  double t1319;
  double t1320;
  double t1322;
  double t1337;
  double t1338;
  double t1434;
  double t1443;
  double t1497;
  double t1384;
  double t1634;
  double t1637;
  double t1639;
  double t1652;
  double t1588;
  double t1562;
  double t1564;
  double t1571;
  double t1611;
  double t1618;
  double t1620;
  double t1672;
  double t1444;
  double t1691;
  double t1416;
  double t1651;
  double t1757;
  double t1766;
  double t1811;
  double t1521;
  double t1719;
  double t1512;
  double t1859;
  double t1694;
  double t1699;
  double t1727;
  double t1728;
  double t1729;
  double t1732;
  double t1735;
  double t1736;
  double t1868;
  double t1791;
  double t1794;
  double t1805;
  double t1816;
  double t1837;
  double t1838;
  double t1839;
  double t1845;
  double t1888;
  double t1892;
  double t1894;
  double t1897;
  double t1898;
  double t1903;
  double t1905;
  double t1906;
  double t1750;
  double t1933;
  double t1769;
  double t1967;
  double t1924;
  double t1655;
  double t1358;
  double t1382;
  double t1430;
  double t1432;
  double t1456;
  double t1460;
  double t1462;
  double t1339;
  double t1340;
  double t1469;
  double t1480;
  double t1492;
  double t1496;
  double t1514;
  double t1516;
  double t1529;
  double t1531;
  double t1540;
  double t1583;
  double t1585;
  double t1589;
  double t1592;
  double t1594;
  double t1607;
  double t1610;
  double t1632;
  double t1644;
  double t1657;
  double t1669;
  double t1683;
  double t1685;
  double t1689;
  double t2127;
  double t2132;
  double t2134;
  double t2139;
  double t2141;
  double t2143;
  double t1743;
  double t1746;
  double t1752;
  double t1754;
  double t1781;
  double t1785;
  double t1787;
  double t1852;
  double t1858;
  double t1862;
  double t1867;
  double t1870;
  double t1883;
  double t1884;
  double t1926;
  double t2157;
  double t2161;
  double t2162;
  double t2163;
  double t1934;
  double t2166;
  double t2167;
  double t2169;
  double t2171;
  double t1945;
  double t1948;
  double t2177;
  double t2180;
  double t2184;
  double t2185;
  double t1974;
  double t1998;
  double t1999;
  double t2008;
  double t2048;
  double t2050;
  double t2060;
  double t2072;
  double t2305;
  double t2314;
  double t2316;
  double t2323;
  double t2324;
  double t2325;
  double t2328;
  double t2329;
  double t2332;
  double t2342;
  double t2345;
  double t2346;
  double t2349;
  double t2350;
  double t2361;
  double t2368;
  double t2374;
  double t2379;
  double t2601;
  double t2607;
  double t2609;
  double t2616;
  double t2617;
  double t2629;
  double t2630;
  double t2632;
  double t2643;
  double t2646;
  t39 = -1.*var4[0];
  t54 = t39 + var4[1];
  t87 = -1. + var5[0];
  t92 = -1. + var6[0];
  t94 = 1/t92;
  t95 = -1.*var1[0];
  t120 = t95 + var1[1];
  t123 = t87*t94*t120;
  t124 = t39 + var1[0] + t123;
  t157 = 1/t54;
  t173 = -1.*t157*t124;
  t178 = 1. + t173;
  t264 = Cos(var2[4]);
  t276 = Cos(var2[6]);
  t279 = -1.*t276;
  t282 = 1. + t279;
  t289 = 0.15121*t282;
  t292 = Sin(var2[6]);
  t265 = Sin(var2[5]);
  t332 = Cos(var2[5]);
  t365 = Cos(var2[7]);
  t366 = -1.*t365;
  t367 = 1. + t366;
  t374 = Sin(var2[7]);
  t408 = Sin(var2[4]);
  t428 = -1. + t365;
  t350 = -1.*t264*t276*t265;
  t354 = -1.*t264*t332*t292;
  t359 = t350 + t354;
  t388 = t264*t332*t276;
  t398 = -1.*t264*t265*t292;
  t402 = t388 + t398;
  t472 = Cos(var2[8]);
  t474 = -1.*t472;
  t476 = 1. + t474;
  t480 = Sin(var2[8]);
  t432 = 4.e-6*t428*t408;
  t434 = 1.6e-11*t428;
  t435 = 1. + t434;
  t442 = t435*t359;
  t444 = 4.e-6*t402*t374;
  t452 = t432 + t442 + t444;
  t600 = -1. + t472;
  t545 = t365*t408;
  t564 = 4.e-6*t428*t359;
  t570 = t402*t374;
  t575 = t545 + t564 + t570;
  t501 = -1.000000000016*t367;
  t503 = 1. + t501;
  t506 = t503*t402;
  t510 = -1.*t408*t374;
  t519 = -4.e-6*t359*t374;
  t521 = t506 + t510 + t519;
  t65 = Power(t54,-5);
  t138 = Power(t124,5);
  t144 = Power(t54,-4);
  t154 = Power(t124,4);
  t190 = Power(t54,-3);
  t191 = Power(t124,3);
  t197 = Power(t178,2);
  t203 = Power(t54,-2);
  t208 = Power(t124,2);
  t211 = Power(t178,3);
  t214 = Power(t178,4);
  t251 = Power(t178,5);
  t317 = -0.15121*t292;
  t318 = t289 + t317;
  t778 = Sin(var2[3]);
  t765 = Cos(var2[3]);
  t336 = 0.15121*t292;
  t337 = t289 + t336;
  t776 = t765*t332;
  t779 = -1.*t778*t408*t265;
  t784 = t776 + t779;
  t789 = t332*t778*t408;
  t793 = t765*t265;
  t801 = t789 + t793;
  t361 = -1.2484e-7*var2[7];
  t373 = -1.5499600000248e-7*t367;
  t377 = 1.124840000016e-6*t374;
  t383 = t361 + t373 + t377;
  t404 = 0.281210000008499*t367;
  t405 = 0.03874900000062*t374;
  t406 = t404 + t405;
  t410 = 4.9936e-13*var2[7];
  t417 = -0.03874900000062*t367;
  t421 = 0.281210000004*t374;
  t423 = t410 + t417 + t421;
  t807 = t276*t784;
  t817 = -1.*t801*t292;
  t845 = t807 + t817;
  t847 = t276*t801;
  t848 = t784*t292;
  t851 = t847 + t848;
  t454 = -1.284e-8*var2[8];
  t477 = -1.5499600000248e-7*t476;
  t481 = 2.012840000032e-6*t480;
  t483 = t454 + t477 + t481;
  t526 = 0.503210000016051*t476;
  t533 = 0.03874900000062*t480;
  t535 = t526 + t533;
  t582 = 5.136e-14*var2[8];
  t587 = -0.03874900000062*t476;
  t592 = 0.503210000008*t480;
  t595 = t582 + t587 + t592;
  t629 = 1.6e-11*t600;
  t633 = 1. + t629;
  t865 = -4.e-6*t264*t428*t778;
  t868 = t435*t845;
  t878 = 4.e-6*t851*t374;
  t888 = t865 + t868 + t878;
  t932 = -1.*t264*t365*t778;
  t937 = 4.e-6*t428*t845;
  t946 = t851*t374;
  t947 = t932 + t937 + t946;
  t900 = t503*t851;
  t905 = t264*t778*t374;
  t907 = -4.e-6*t845*t374;
  t917 = t900 + t905 + t907;
  t695 = -1.000000000016*t476;
  t696 = 1. + t695;
  t1056 = t332*t778;
  t1061 = t765*t408*t265;
  t1062 = t1056 + t1061;
  t1069 = -1.*t765*t332*t408;
  t1071 = t778*t265;
  t1076 = t1069 + t1071;
  t1080 = t276*t1062;
  t1082 = -1.*t1076*t292;
  t1086 = t1080 + t1082;
  t1099 = t276*t1076;
  t1103 = t1062*t292;
  t1105 = t1099 + t1103;
  t1122 = 4.e-6*t765*t264*t428;
  t1126 = t435*t1086;
  t1127 = 4.e-6*t1105*t374;
  t1134 = t1122 + t1126 + t1127;
  t1175 = t765*t264*t365;
  t1180 = 4.e-6*t428*t1086;
  t1184 = t1105*t374;
  t1185 = t1175 + t1180 + t1184;
  t1146 = t503*t1105;
  t1150 = -1.*t765*t264*t374;
  t1152 = -4.e-6*t1086*t374;
  t1155 = t1146 + t1150 + t1152;
  t1374 = Cos(var2[16]);
  t1375 = -1.*t1374;
  t1377 = 1. + t1375;
  t1395 = Sin(var2[16]);
  t1319 = Cos(var2[15]);
  t1320 = -1.*t1319;
  t1322 = 1. + t1320;
  t1337 = -0.15121*t1322;
  t1338 = Sin(var2[15]);
  t1434 = -1. + t1374;
  t1443 = 4.e-6*t1434;
  t1497 = 7.e-6*t1377;
  t1384 = 2.8e-11*t1377;
  t1634 = Cos(var2[17]);
  t1637 = -1.*t1634;
  t1639 = 1. + t1637;
  t1652 = Sin(var2[17]);
  t1588 = -4.e-6*t1395;
  t1562 = -1.*t264*t332*t1338;
  t1564 = -1.*t1319*t264*t265;
  t1571 = t1562 + t1564;
  t1611 = t1319*t264*t332;
  t1618 = -1.*t264*t1338*t265;
  t1620 = t1611 + t1618;
  t1672 = 2.8e-11*t1639;
  t1444 = -7.e-6*t1395;
  t1691 = -2.8e-11*t1377;
  t1416 = -1.*t1395;
  t1651 = 7.e-6*t1639;
  t1757 = -1. + t1634;
  t1766 = 4.e-6*t1757;
  t1811 = 4.e-6*t1377;
  t1521 = 7.e-6*t1395;
  t1719 = -7.e-6*t1377;
  t1512 = 4.e-6*t1395;
  t1859 = 4.e-6*t1652;
  t1694 = t1691 + t1395;
  t1699 = t1694*t408;
  t1727 = t1719 + t1588;
  t1728 = t1727*t1571;
  t1729 = -1.000000000016*t1377;
  t1732 = 1. + t1729;
  t1735 = t1732*t1620;
  t1736 = t1699 + t1728 + t1735;
  t1868 = 7.e-6*t1652;
  t1791 = -1.000000000049*t1377;
  t1794 = 1. + t1791;
  t1805 = t1794*t408;
  t1816 = t1811 + t1444;
  t1837 = t1816*t1571;
  t1838 = t1691 + t1416;
  t1839 = t1838*t1620;
  t1845 = t1805 + t1837 + t1839;
  t1888 = t1811 + t1521;
  t1892 = t1888*t408;
  t1894 = -6.5e-11*t1377;
  t1897 = 1. + t1894;
  t1898 = t1897*t1571;
  t1903 = t1719 + t1512;
  t1905 = t1903*t1620;
  t1906 = t1892 + t1898 + t1905;
  t1750 = -1.*t1652;
  t1933 = 4.e-6*t1639;
  t1769 = -7.e-6*t1652;
  t1967 = -2.8e-11*t1639;
  t1924 = -7.e-6*t1639;
  t1655 = -4.e-6*t1652;
  t1358 = 1.5843479999999999e-12*var2[16];
  t1382 = -0.03874900000889869*t1377;
  t1430 = t1384 + t1416;
  t1432 = -0.281211000004*t1430;
  t1456 = t1443 + t1444;
  t1460 = -1.8134809999999998e-6*t1456;
  t1462 = t1358 + t1382 + t1432 + t1460;
  t1339 = -0.15121*t1338;
  t1340 = t1337 + t1339;
  t1469 = 0.15121*t1338;
  t1480 = t1337 + t1469;
  t1492 = 3.9608699999999997e-7*var2[16];
  t1496 = -1.1787626499999999e-16*t1377;
  t1514 = t1497 + t1512;
  t1516 = -0.281211000004*t1514;
  t1529 = t1443 + t1521;
  t1531 = -0.038749000006999997*t1529;
  t1540 = t1492 + t1496 + t1516 + t1531;
  t1583 = -2.7726089999999997e-12*var2[16];
  t1585 = -0.2812110000084994*t1377;
  t1589 = t1497 + t1588;
  t1592 = -1.8134809999999998e-6*t1589;
  t1594 = t1384 + t1395;
  t1607 = -0.038749000006999997*t1594;
  t1610 = t1583 + t1585 + t1592 + t1607;
  t1632 = -1.9784030000000015e-12*var2[17];
  t1644 = -0.5031510000160505*t1639;
  t1657 = t1651 + t1655;
  t1669 = -3.367757e-6*t1657;
  t1683 = t1672 + t1652;
  t1685 = -0.038575000014*t1683;
  t1689 = t1632 + t1644 + t1669 + t1685;
  t2127 = -1.*t1338*t801;
  t2132 = t1319*t784;
  t2134 = t2127 + t2132;
  t2139 = t1319*t801;
  t2141 = t1338*t784;
  t2143 = t2139 + t2141;
  t1743 = 1.1305160000000008e-12*var2[17];
  t1746 = -0.03857500001589017*t1639;
  t1752 = t1672 + t1750;
  t1754 = -0.5031510000080001*t1752;
  t1781 = t1766 + t1769;
  t1785 = -3.367757e-6*t1781;
  t1787 = t1743 + t1746 + t1754 + t1785;
  t1852 = 2.826290000000002e-7*var2[17];
  t1858 = -2.18904205e-16*t1639;
  t1862 = t1651 + t1859;
  t1867 = -0.5031510000080001*t1862;
  t1870 = t1766 + t1868;
  t1883 = -0.038575000014*t1870;
  t1884 = t1852 + t1858 + t1867 + t1883;
  t1926 = t1924 + t1859;
  t2157 = -1.*t264*t1694*t778;
  t2161 = t1727*t2134;
  t2162 = t1732*t2143;
  t2163 = t2157 + t2161 + t2162;
  t1934 = t1933 + t1868;
  t2166 = -1.*t1794*t264*t778;
  t2167 = t1816*t2134;
  t2169 = t1838*t2143;
  t2171 = t2166 + t2167 + t2169;
  t1945 = -6.5e-11*t1639;
  t1948 = 1. + t1945;
  t2177 = -1.*t264*t1888*t778;
  t2180 = t1897*t2134;
  t2184 = t1903*t2143;
  t2185 = t2177 + t2180 + t2184;
  t1974 = t1967 + t1750;
  t1998 = -1.000000000049*t1639;
  t1999 = 1. + t1998;
  t2008 = t1933 + t1769;
  t2048 = -1.000000000016*t1639;
  t2050 = 1. + t2048;
  t2060 = t1967 + t1652;
  t2072 = t1924 + t1655;
  t2305 = -1.*t1338*t1076;
  t2314 = t1319*t1062;
  t2316 = t2305 + t2314;
  t2323 = t1319*t1076;
  t2324 = t1338*t1062;
  t2325 = t2323 + t2324;
  t2328 = t765*t264*t1694;
  t2329 = t1727*t2316;
  t2332 = t1732*t2325;
  t2342 = t2328 + t2329 + t2332;
  t2345 = t1794*t765*t264;
  t2346 = t1816*t2316;
  t2349 = t1838*t2325;
  t2350 = t2345 + t2346 + t2349;
  t2361 = t765*t264*t1888;
  t2368 = t1897*t2316;
  t2374 = t1903*t2325;
  t2379 = t2361 + t2368 + t2374;
  t2601 = Cos(var2[9]);
  t2607 = -1.*t2601;
  t2609 = 1. + t2607;
  t2616 = Sin(var2[9]);
  t2617 = -0.15121*t2616;
  t2629 = Cos(var2[12]);
  t2630 = -1.*t2629;
  t2632 = 1. + t2630;
  t2643 = Sin(var2[12]);
  t2646 = 0.15121*t2643;
  p_output1[0]=-1.*t264*t265*t318 + t264*t332*t337 + t359*t383 + t402*t406 + t408*t423 + t452*t483 + t521*t535 + t575*t595 - 0.03875*(t480*t521 + t472*t575 + 4.e-6*t452*t600) + 0.14871*(4.e-6*t480*t521 + 4.e-6*t575*t600 + t452*t633) + 0.80321*(-4.e-6*t452*t480 - 1.*t480*t575 + t521*t696) + var2[0] - 1.*t251*var3[0] - 5.*t124*t157*t214*var3[10] - 10.*t203*t208*t211*var3[20] - 10.*t190*t191*t197*var3[30] - 5.*t144*t154*t178*var3[40] - 1.*t138*t65*var3[50];
  p_output1[1]=-1.*t264*t423*t778 + t318*t784 + t337*t801 + t383*t845 + t406*t851 + t483*t888 + t535*t917 + t595*t947 - 0.03875*(4.e-6*t600*t888 + t480*t917 + t472*t947) + 0.80321*(-4.e-6*t480*t888 + t696*t917 - 1.*t480*t947) + 0.14871*(t633*t888 + 4.e-6*t480*t917 + 4.e-6*t600*t947) + var2[1] - 1.*t251*var3[1] - 5.*t124*t157*t214*var3[11] - 10.*t203*t208*t211*var3[21] - 10.*t190*t191*t197*var3[31] - 5.*t144*t154*t178*var3[41] - 1.*t138*t65*var3[51];
  p_output1[2]=t1062*t318 + t1076*t337 + t1086*t383 + t1105*t406 + t1134*t483 + t1155*t535 + t1185*t595 - 0.03875*(t1185*t472 + t1155*t480 + 4.e-6*t1134*t600) + 0.14871*(4.e-6*t1155*t480 + 4.e-6*t1185*t600 + t1134*t633) + 0.80321*(-4.e-6*t1134*t480 - 1.*t1185*t480 + t1155*t696) + t264*t423*t765 + var2[2] - 1.*t251*var3[2] - 5.*t124*t157*t214*var3[12] - 10.*t203*t208*t211*var3[22] - 10.*t190*t191*t197*var3[32] - 5.*t144*t154*t178*var3[42] - 1.*t138*t65*var3[52];
  p_output1[3]=t1540*t1571 + t1610*t1620 + t1689*t1736 + t1787*t1845 + t1884*t1906 - 0.148715*(t1736*t1926 + t1845*t1934 + t1906*t1948) - 0.038576*(t1736*t1974 + t1845*t1999 + t1906*t2008) - 0.80315*(t1736*t2050 + t1845*t2060 + t1906*t2072) - 1.*t1480*t264*t265 + t1340*t264*t332 + t1462*t408 + var2[0] - 1.*t251*var3[3] - 5.*t124*t157*t214*var3[13] - 10.*t203*t208*t211*var3[23] - 10.*t190*t191*t197*var3[33] - 5.*t144*t154*t178*var3[43] - 1.*t138*t65*var3[53];
  p_output1[4]=t1540*t2134 + t1610*t2143 + t1689*t2163 + t1787*t2171 + t1884*t2185 - 0.148715*(t1926*t2163 + t1934*t2171 + t1948*t2185) - 0.038576*(t1974*t2163 + t1999*t2171 + t2008*t2185) - 0.80315*(t2050*t2163 + t2060*t2171 + t2072*t2185) - 1.*t1462*t264*t778 + t1480*t784 + t1340*t801 + var2[1] - 1.*t251*var3[4] - 5.*t124*t157*t214*var3[14] - 10.*t203*t208*t211*var3[24] - 10.*t190*t191*t197*var3[34] - 5.*t144*t154*t178*var3[44] - 1.*t138*t65*var3[54];
  p_output1[5]=t1076*t1340 + t1062*t1480 + t1540*t2316 + t1610*t2325 + t1689*t2342 + t1787*t2350 + t1884*t2379 - 0.148715*(t1926*t2342 + t1934*t2350 + t1948*t2379) - 0.038576*(t1974*t2342 + t1999*t2350 + t2008*t2379) - 0.80315*(t2050*t2342 + t2060*t2350 + t2072*t2379) + t1462*t264*t765 + var2[2] - 1.*t251*var3[5] - 5.*t124*t157*t214*var3[15] - 10.*t203*t208*t211*var3[25] - 10.*t190*t191*t197*var3[35] - 5.*t144*t154*t178*var3[45] - 1.*t138*t65*var3[55];
  p_output1[6]=0.024028*t264*t778 - 0.002264*t784 + 0.00183*t801 + var2[1] - 1.*t251*var3[6] - 5.*t124*t157*t214*var3[16] - 10.*t203*t208*t211*var3[26] - 10.*t190*t191*t197*var3[36] - 5.*t144*t154*t178*var3[46] - 1.*t138*t65*var3[56];
  p_output1[7]=-0.002264*t1062 + 0.00183*t1076 - 0.024028*t264*t765 + var2[2] - 1.*t251*var3[7] - 5.*t124*t157*t214*var3[17] - 10.*t203*t208*t211*var3[27] - 10.*t190*t191*t197*var3[37] - 5.*t144*t154*t178*var3[47] - 1.*t138*t65*var3[57];
  p_output1[8]=ArcTan(t264*t332,t801) - 1.*t251*var3[8] - 5.*t124*t157*t214*var3[18] - 10.*t203*t208*t211*var3[28] - 10.*t190*t191*t197*var3[38] - 5.*t144*t154*t178*var3[48] - 1.*t138*t65*var3[58];
  p_output1[9]=0.15121*(t1076*t2601 + t1062*t2616) - 0.15121*(t1062*t2601 - 1.*t1076*t2616) + t1062*(-0.15121*t2609 + t2617) + t1076*(0.15121*t2609 + t2617) + 0.15121*(t1076*t2629 + t1062*t2643) - 0.15121*(t1062*t2629 - 1.*t1076*t2643) - 1.*t1076*(-0.15121*t2632 + t2646) - 1.*t1062*(0.15121*t2632 + t2646) - 1.*t251*var3[9] - 5.*t124*t157*t214*var3[19] - 10.*t203*t208*t211*var3[29] - 10.*t190*t191*t197*var3[39] - 5.*t144*t154*t178*var3[49] - 1.*t138*t65*var3[59];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 60 && ncols == 1) && 
      !(mrows == 1 && ncols == 60))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 10, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "y_position_TrotStance1.hh"

namespace TrotStance1
{

void y_position_TrotStance1_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
