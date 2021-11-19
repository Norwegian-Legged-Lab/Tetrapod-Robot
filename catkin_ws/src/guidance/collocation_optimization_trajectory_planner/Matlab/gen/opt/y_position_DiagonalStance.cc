/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:28:43 GMT+01:00
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
  double t49;
  double t55;
  double t81;
  double t82;
  double t84;
  double t99;
  double t103;
  double t108;
  double t112;
  double t141;
  double t144;
  double t179;
  double t269;
  double t280;
  double t281;
  double t296;
  double t297;
  double t303;
  double t275;
  double t323;
  double t350;
  double t357;
  double t359;
  double t366;
  double t412;
  double t438;
  double t337;
  double t343;
  double t346;
  double t390;
  double t393;
  double t400;
  double t461;
  double t465;
  double t466;
  double t480;
  double t441;
  double t442;
  double t451;
  double t455;
  double t456;
  double t457;
  double t565;
  double t522;
  double t531;
  double t536;
  double t539;
  double t495;
  double t500;
  double t505;
  double t507;
  double t509;
  double t511;
  double t58;
  double t113;
  double t122;
  double t135;
  double t182;
  double t194;
  double t197;
  double t213;
  double t218;
  double t219;
  double t246;
  double t259;
  double t304;
  double t308;
  double t684;
  double t671;
  double t327;
  double t330;
  double t683;
  double t690;
  double t691;
  double t699;
  double t701;
  double t702;
  double t348;
  double t361;
  double t372;
  double t384;
  double t403;
  double t406;
  double t408;
  double t415;
  double t422;
  double t429;
  double t433;
  double t706;
  double t713;
  double t717;
  double t725;
  double t732;
  double t734;
  double t458;
  double t467;
  double t481;
  double t483;
  double t514;
  double t516;
  double t519;
  double t546;
  double t550;
  double t554;
  double t557;
  double t567;
  double t571;
  double t742;
  double t746;
  double t747;
  double t748;
  double t798;
  double t812;
  double t813;
  double t814;
  double t771;
  double t772;
  double t782;
  double t787;
  double t617;
  double t625;
  double t919;
  double t920;
  double t922;
  double t924;
  double t930;
  double t934;
  double t951;
  double t954;
  double t955;
  double t961;
  double t962;
  double t963;
  double t972;
  double t973;
  double t991;
  double t1004;
  double t1025;
  double t1028;
  double t1034;
  double t1043;
  double t1010;
  double t1011;
  double t1014;
  double t1017;
  double t1242;
  double t1244;
  double t1268;
  double t1284;
  double t1185;
  double t1195;
  double t1207;
  double t1209;
  double t1215;
  double t1304;
  double t1308;
  double t1366;
  double t1273;
  double t1505;
  double t1519;
  double t1520;
  double t1531;
  double t1458;
  double t1416;
  double t1424;
  double t1432;
  double t1483;
  double t1486;
  double t1493;
  double t1539;
  double t1315;
  double t1549;
  double t1292;
  double t1524;
  double t1637;
  double t1645;
  double t1680;
  double t1390;
  double t1558;
  double t1373;
  double t1721;
  double t1554;
  double t1556;
  double t1561;
  double t1580;
  double t1586;
  double t1587;
  double t1590;
  double t1595;
  double t1731;
  double t1665;
  double t1666;
  double t1678;
  double t1681;
  double t1685;
  double t1694;
  double t1696;
  double t1699;
  double t1749;
  double t1751;
  double t1757;
  double t1762;
  double t1769;
  double t1771;
  double t1781;
  double t1782;
  double t1613;
  double t1808;
  double t1648;
  double t1834;
  double t1796;
  double t1532;
  double t1232;
  double t1272;
  double t1297;
  double t1298;
  double t1318;
  double t1320;
  double t1321;
  double t1217;
  double t1223;
  double t1343;
  double t1344;
  double t1361;
  double t1364;
  double t1378;
  double t1380;
  double t1391;
  double t1397;
  double t1405;
  double t1439;
  double t1445;
  double t1462;
  double t1475;
  double t1476;
  double t1477;
  double t1479;
  double t1500;
  double t1521;
  double t1535;
  double t1537;
  double t1540;
  double t1541;
  double t1548;
  double t1933;
  double t1938;
  double t1941;
  double t1951;
  double t1952;
  double t1954;
  double t1597;
  double t1608;
  double t1622;
  double t1630;
  double t1651;
  double t1655;
  double t1664;
  double t1711;
  double t1715;
  double t1723;
  double t1726;
  double t1734;
  double t1737;
  double t1747;
  double t1804;
  double t1959;
  double t1963;
  double t1964;
  double t1965;
  double t1817;
  double t1981;
  double t1986;
  double t1991;
  double t1999;
  double t1820;
  double t1821;
  double t2005;
  double t2006;
  double t2007;
  double t2014;
  double t1836;
  double t1845;
  double t1853;
  double t1855;
  double t1863;
  double t1868;
  double t1874;
  double t1894;
  double t2096;
  double t2099;
  double t2103;
  double t2113;
  double t2115;
  double t2119;
  double t2124;
  double t2135;
  double t2138;
  double t2139;
  double t2146;
  double t2147;
  double t2149;
  double t2151;
  double t2165;
  double t2166;
  double t2168;
  double t2172;
  double t2368;
  double t2380;
  double t2383;
  double t2389;
  double t2395;
  double t2415;
  double t2417;
  double t2421;
  double t2434;
  double t2439;
  t49 = -1.*var4[0];
  t55 = t49 + var4[1];
  t81 = -1. + var5[0];
  t82 = -1. + var6[0];
  t84 = 1/t82;
  t99 = -1.*var1[0];
  t103 = t99 + var1[1];
  t108 = t81*t84*t103;
  t112 = t49 + var1[0] + t108;
  t141 = 1/t55;
  t144 = -1.*t141*t112;
  t179 = 1. + t144;
  t269 = Cos(var2[4]);
  t280 = Cos(var2[6]);
  t281 = -1.*t280;
  t296 = 1. + t281;
  t297 = 0.15121*t296;
  t303 = Sin(var2[6]);
  t275 = Sin(var2[5]);
  t323 = Cos(var2[5]);
  t350 = Cos(var2[7]);
  t357 = -1.*t350;
  t359 = 1. + t357;
  t366 = Sin(var2[7]);
  t412 = Sin(var2[4]);
  t438 = -1. + t350;
  t337 = -1.*t269*t280*t275;
  t343 = -1.*t269*t323*t303;
  t346 = t337 + t343;
  t390 = t269*t323*t280;
  t393 = -1.*t269*t275*t303;
  t400 = t390 + t393;
  t461 = Cos(var2[8]);
  t465 = -1.*t461;
  t466 = 1. + t465;
  t480 = Sin(var2[8]);
  t441 = 4.e-6*t438*t412;
  t442 = 1.6e-11*t438;
  t451 = 1. + t442;
  t455 = t451*t346;
  t456 = 4.e-6*t400*t366;
  t457 = t441 + t455 + t456;
  t565 = -1. + t461;
  t522 = t350*t412;
  t531 = 4.e-6*t438*t346;
  t536 = t400*t366;
  t539 = t522 + t531 + t536;
  t495 = -1.000000000016*t359;
  t500 = 1. + t495;
  t505 = t500*t400;
  t507 = -1.*t412*t366;
  t509 = -4.e-6*t346*t366;
  t511 = t505 + t507 + t509;
  t58 = Power(t55,-5);
  t113 = Power(t112,5);
  t122 = Power(t55,-4);
  t135 = Power(t112,4);
  t182 = Power(t55,-3);
  t194 = Power(t112,3);
  t197 = Power(t179,2);
  t213 = Power(t55,-2);
  t218 = Power(t112,2);
  t219 = Power(t179,3);
  t246 = Power(t179,4);
  t259 = Power(t179,5);
  t304 = -0.15121*t303;
  t308 = t297 + t304;
  t684 = Sin(var2[3]);
  t671 = Cos(var2[3]);
  t327 = 0.15121*t303;
  t330 = t297 + t327;
  t683 = t671*t323;
  t690 = -1.*t684*t412*t275;
  t691 = t683 + t690;
  t699 = t323*t684*t412;
  t701 = t671*t275;
  t702 = t699 + t701;
  t348 = -1.2484e-7*var2[7];
  t361 = -1.5499600000248e-7*t359;
  t372 = 1.124840000016e-6*t366;
  t384 = t348 + t361 + t372;
  t403 = 0.281210000008499*t359;
  t406 = 0.03874900000062*t366;
  t408 = t403 + t406;
  t415 = 4.9936e-13*var2[7];
  t422 = -0.03874900000062*t359;
  t429 = 0.281210000004*t366;
  t433 = t415 + t422 + t429;
  t706 = t280*t691;
  t713 = -1.*t702*t303;
  t717 = t706 + t713;
  t725 = t280*t702;
  t732 = t691*t303;
  t734 = t725 + t732;
  t458 = -1.284e-8*var2[8];
  t467 = -1.5499600000248e-7*t466;
  t481 = 2.012840000032e-6*t480;
  t483 = t458 + t467 + t481;
  t514 = 0.503210000016051*t466;
  t516 = 0.03874900000062*t480;
  t519 = t514 + t516;
  t546 = 5.136e-14*var2[8];
  t550 = -0.03874900000062*t466;
  t554 = 0.503210000008*t480;
  t557 = t546 + t550 + t554;
  t567 = 1.6e-11*t565;
  t571 = 1. + t567;
  t742 = -4.e-6*t269*t438*t684;
  t746 = t451*t717;
  t747 = 4.e-6*t734*t366;
  t748 = t742 + t746 + t747;
  t798 = -1.*t269*t350*t684;
  t812 = 4.e-6*t438*t717;
  t813 = t734*t366;
  t814 = t798 + t812 + t813;
  t771 = t500*t734;
  t772 = t269*t684*t366;
  t782 = -4.e-6*t717*t366;
  t787 = t771 + t772 + t782;
  t617 = -1.000000000016*t466;
  t625 = 1. + t617;
  t919 = t323*t684;
  t920 = t671*t412*t275;
  t922 = t919 + t920;
  t924 = -1.*t671*t323*t412;
  t930 = t684*t275;
  t934 = t924 + t930;
  t951 = t280*t922;
  t954 = -1.*t934*t303;
  t955 = t951 + t954;
  t961 = t280*t934;
  t962 = t922*t303;
  t963 = t961 + t962;
  t972 = 4.e-6*t671*t269*t438;
  t973 = t451*t955;
  t991 = 4.e-6*t963*t366;
  t1004 = t972 + t973 + t991;
  t1025 = t671*t269*t350;
  t1028 = 4.e-6*t438*t955;
  t1034 = t963*t366;
  t1043 = t1025 + t1028 + t1034;
  t1010 = t500*t963;
  t1011 = -1.*t671*t269*t366;
  t1014 = -4.e-6*t955*t366;
  t1017 = t1010 + t1011 + t1014;
  t1242 = Cos(var2[16]);
  t1244 = -1.*t1242;
  t1268 = 1. + t1244;
  t1284 = Sin(var2[16]);
  t1185 = Cos(var2[15]);
  t1195 = -1.*t1185;
  t1207 = 1. + t1195;
  t1209 = -0.15121*t1207;
  t1215 = Sin(var2[15]);
  t1304 = -1. + t1242;
  t1308 = 4.e-6*t1304;
  t1366 = 7.e-6*t1268;
  t1273 = 2.8e-11*t1268;
  t1505 = Cos(var2[17]);
  t1519 = -1.*t1505;
  t1520 = 1. + t1519;
  t1531 = Sin(var2[17]);
  t1458 = -4.e-6*t1284;
  t1416 = -1.*t269*t323*t1215;
  t1424 = -1.*t1185*t269*t275;
  t1432 = t1416 + t1424;
  t1483 = t1185*t269*t323;
  t1486 = -1.*t269*t1215*t275;
  t1493 = t1483 + t1486;
  t1539 = 2.8e-11*t1520;
  t1315 = -7.e-6*t1284;
  t1549 = -2.8e-11*t1268;
  t1292 = -1.*t1284;
  t1524 = 7.e-6*t1520;
  t1637 = -1. + t1505;
  t1645 = 4.e-6*t1637;
  t1680 = 4.e-6*t1268;
  t1390 = 7.e-6*t1284;
  t1558 = -7.e-6*t1268;
  t1373 = 4.e-6*t1284;
  t1721 = 4.e-6*t1531;
  t1554 = t1549 + t1284;
  t1556 = t1554*t412;
  t1561 = t1558 + t1458;
  t1580 = t1561*t1432;
  t1586 = -1.000000000016*t1268;
  t1587 = 1. + t1586;
  t1590 = t1587*t1493;
  t1595 = t1556 + t1580 + t1590;
  t1731 = 7.e-6*t1531;
  t1665 = -1.000000000049*t1268;
  t1666 = 1. + t1665;
  t1678 = t1666*t412;
  t1681 = t1680 + t1315;
  t1685 = t1681*t1432;
  t1694 = t1549 + t1292;
  t1696 = t1694*t1493;
  t1699 = t1678 + t1685 + t1696;
  t1749 = t1680 + t1390;
  t1751 = t1749*t412;
  t1757 = -6.5e-11*t1268;
  t1762 = 1. + t1757;
  t1769 = t1762*t1432;
  t1771 = t1558 + t1373;
  t1781 = t1771*t1493;
  t1782 = t1751 + t1769 + t1781;
  t1613 = -1.*t1531;
  t1808 = 4.e-6*t1520;
  t1648 = -7.e-6*t1531;
  t1834 = -2.8e-11*t1520;
  t1796 = -7.e-6*t1520;
  t1532 = -4.e-6*t1531;
  t1232 = 1.5843479999999999e-12*var2[16];
  t1272 = -0.03874900000889869*t1268;
  t1297 = t1273 + t1292;
  t1298 = -0.281211000004*t1297;
  t1318 = t1308 + t1315;
  t1320 = -1.8134809999999998e-6*t1318;
  t1321 = t1232 + t1272 + t1298 + t1320;
  t1217 = -0.15121*t1215;
  t1223 = t1209 + t1217;
  t1343 = 0.15121*t1215;
  t1344 = t1209 + t1343;
  t1361 = 3.9608699999999997e-7*var2[16];
  t1364 = -1.1787626499999999e-16*t1268;
  t1378 = t1366 + t1373;
  t1380 = -0.281211000004*t1378;
  t1391 = t1308 + t1390;
  t1397 = -0.038749000006999997*t1391;
  t1405 = t1361 + t1364 + t1380 + t1397;
  t1439 = -2.7726089999999997e-12*var2[16];
  t1445 = -0.2812110000084994*t1268;
  t1462 = t1366 + t1458;
  t1475 = -1.8134809999999998e-6*t1462;
  t1476 = t1273 + t1284;
  t1477 = -0.038749000006999997*t1476;
  t1479 = t1439 + t1445 + t1475 + t1477;
  t1500 = -1.9784030000000015e-12*var2[17];
  t1521 = -0.5031510000160505*t1520;
  t1535 = t1524 + t1532;
  t1537 = -3.367757e-6*t1535;
  t1540 = t1539 + t1531;
  t1541 = -0.038575000014*t1540;
  t1548 = t1500 + t1521 + t1537 + t1541;
  t1933 = -1.*t1215*t702;
  t1938 = t1185*t691;
  t1941 = t1933 + t1938;
  t1951 = t1185*t702;
  t1952 = t1215*t691;
  t1954 = t1951 + t1952;
  t1597 = 1.1305160000000008e-12*var2[17];
  t1608 = -0.03857500001589017*t1520;
  t1622 = t1539 + t1613;
  t1630 = -0.5031510000080001*t1622;
  t1651 = t1645 + t1648;
  t1655 = -3.367757e-6*t1651;
  t1664 = t1597 + t1608 + t1630 + t1655;
  t1711 = 2.826290000000002e-7*var2[17];
  t1715 = -2.18904205e-16*t1520;
  t1723 = t1524 + t1721;
  t1726 = -0.5031510000080001*t1723;
  t1734 = t1645 + t1731;
  t1737 = -0.038575000014*t1734;
  t1747 = t1711 + t1715 + t1726 + t1737;
  t1804 = t1796 + t1721;
  t1959 = -1.*t269*t1554*t684;
  t1963 = t1561*t1941;
  t1964 = t1587*t1954;
  t1965 = t1959 + t1963 + t1964;
  t1817 = t1808 + t1731;
  t1981 = -1.*t1666*t269*t684;
  t1986 = t1681*t1941;
  t1991 = t1694*t1954;
  t1999 = t1981 + t1986 + t1991;
  t1820 = -6.5e-11*t1520;
  t1821 = 1. + t1820;
  t2005 = -1.*t269*t1749*t684;
  t2006 = t1762*t1941;
  t2007 = t1771*t1954;
  t2014 = t2005 + t2006 + t2007;
  t1836 = t1834 + t1613;
  t1845 = -1.000000000049*t1520;
  t1853 = 1. + t1845;
  t1855 = t1808 + t1648;
  t1863 = -1.000000000016*t1520;
  t1868 = 1. + t1863;
  t1874 = t1834 + t1531;
  t1894 = t1796 + t1532;
  t2096 = -1.*t1215*t934;
  t2099 = t1185*t922;
  t2103 = t2096 + t2099;
  t2113 = t1185*t934;
  t2115 = t1215*t922;
  t2119 = t2113 + t2115;
  t2124 = t671*t269*t1554;
  t2135 = t1561*t2103;
  t2138 = t1587*t2119;
  t2139 = t2124 + t2135 + t2138;
  t2146 = t1666*t671*t269;
  t2147 = t1681*t2103;
  t2149 = t1694*t2119;
  t2151 = t2146 + t2147 + t2149;
  t2165 = t671*t269*t1749;
  t2166 = t1762*t2103;
  t2168 = t1771*t2119;
  t2172 = t2165 + t2166 + t2168;
  t2368 = Cos(var2[9]);
  t2380 = -1.*t2368;
  t2383 = 1. + t2380;
  t2389 = Sin(var2[9]);
  t2395 = -0.15121*t2389;
  t2415 = Cos(var2[12]);
  t2417 = -1.*t2415;
  t2421 = 1. + t2417;
  t2434 = Sin(var2[12]);
  t2439 = 0.15121*t2434;
  p_output1[0]=-1.*t269*t275*t308 + t269*t323*t330 + t346*t384 + t400*t408 + t412*t433 + t457*t483 + t511*t519 + t539*t557 - 0.03875*(t480*t511 + t461*t539 + 4.e-6*t457*t565) + 0.14871*(4.e-6*t480*t511 + 4.e-6*t539*t565 + t457*t571) + 0.80321*(-4.e-6*t457*t480 - 1.*t480*t539 + t511*t625) + var2[0] - 1.*t259*var3[0] - 5.*t112*t141*t246*var3[10] - 10.*t213*t218*t219*var3[20] - 10.*t182*t194*t197*var3[30] - 5.*t122*t135*t179*var3[40] - 1.*t113*t58*var3[50];
  p_output1[1]=-1.*t269*t433*t684 + t308*t691 + t330*t702 + t384*t717 + t408*t734 + t483*t748 + t519*t787 + t557*t814 - 0.03875*(4.e-6*t565*t748 + t480*t787 + t461*t814) + 0.80321*(-4.e-6*t480*t748 + t625*t787 - 1.*t480*t814) + 0.14871*(t571*t748 + 4.e-6*t480*t787 + 4.e-6*t565*t814) + var2[1] - 1.*t259*var3[1] - 5.*t112*t141*t246*var3[11] - 10.*t213*t218*t219*var3[21] - 10.*t182*t194*t197*var3[31] - 5.*t122*t135*t179*var3[41] - 1.*t113*t58*var3[51];
  p_output1[2]=t1004*t483 + t1017*t519 + t1043*t557 - 0.03875*(t1043*t461 + t1017*t480 + 4.e-6*t1004*t565) + 0.14871*(4.e-6*t1017*t480 + 4.e-6*t1043*t565 + t1004*t571) + 0.80321*(-4.e-6*t1004*t480 - 1.*t1043*t480 + t1017*t625) + t269*t433*t671 + t308*t922 + t330*t934 + t384*t955 + t408*t963 + var2[2] - 1.*t259*var3[2] - 5.*t112*t141*t246*var3[12] - 10.*t213*t218*t219*var3[22] - 10.*t182*t194*t197*var3[32] - 5.*t122*t135*t179*var3[42] - 1.*t113*t58*var3[52];
  p_output1[3]=t1405*t1432 + t1479*t1493 + t1548*t1595 + t1664*t1699 + t1747*t1782 - 0.148715*(t1595*t1804 + t1699*t1817 + t1782*t1821) - 0.038576*(t1595*t1836 + t1699*t1853 + t1782*t1855) - 0.80315*(t1595*t1868 + t1699*t1874 + t1782*t1894) - 1.*t1344*t269*t275 + t1223*t269*t323 + t1321*t412 + var2[0] - 1.*t259*var3[3] - 5.*t112*t141*t246*var3[13] - 10.*t213*t218*t219*var3[23] - 10.*t182*t194*t197*var3[33] - 5.*t122*t135*t179*var3[43] - 1.*t113*t58*var3[53];
  p_output1[4]=t1405*t1941 + t1479*t1954 + t1548*t1965 + t1664*t1999 + t1747*t2014 - 0.148715*(t1804*t1965 + t1817*t1999 + t1821*t2014) - 0.038576*(t1836*t1965 + t1853*t1999 + t1855*t2014) - 0.80315*(t1868*t1965 + t1874*t1999 + t1894*t2014) - 1.*t1321*t269*t684 + t1344*t691 + t1223*t702 + var2[1] - 1.*t259*var3[4] - 5.*t112*t141*t246*var3[14] - 10.*t213*t218*t219*var3[24] - 10.*t182*t194*t197*var3[34] - 5.*t122*t135*t179*var3[44] - 1.*t113*t58*var3[54];
  p_output1[5]=t1405*t2103 + t1479*t2119 + t1548*t2139 + t1664*t2151 + t1747*t2172 - 0.148715*(t1804*t2139 + t1817*t2151 + t1821*t2172) - 0.038576*(t1836*t2139 + t1853*t2151 + t1855*t2172) - 0.80315*(t1868*t2139 + t1874*t2151 + t1894*t2172) + t1321*t269*t671 + t1344*t922 + t1223*t934 + var2[2] - 1.*t259*var3[5] - 5.*t112*t141*t246*var3[15] - 10.*t213*t218*t219*var3[25] - 10.*t182*t194*t197*var3[35] - 5.*t122*t135*t179*var3[45] - 1.*t113*t58*var3[55];
  p_output1[6]=0.024028*t269*t684 - 0.002264*t691 + 0.00183*t702 + var2[1] - 1.*t259*var3[6] - 5.*t112*t141*t246*var3[16] - 10.*t213*t218*t219*var3[26] - 10.*t182*t194*t197*var3[36] - 5.*t122*t135*t179*var3[46] - 1.*t113*t58*var3[56];
  p_output1[7]=-0.024028*t269*t671 - 0.002264*t922 + 0.00183*t934 + var2[2] - 1.*t259*var3[7] - 5.*t112*t141*t246*var3[17] - 10.*t213*t218*t219*var3[27] - 10.*t182*t194*t197*var3[37] - 5.*t122*t135*t179*var3[47] - 1.*t113*t58*var3[57];
  p_output1[8]=ArcTan(t269*t323,t702) - 1.*t259*var3[8] - 5.*t112*t141*t246*var3[18] - 10.*t213*t218*t219*var3[28] - 10.*t182*t194*t197*var3[38] - 5.*t122*t135*t179*var3[48] - 1.*t113*t58*var3[58];
  p_output1[9]=(-0.15121*t2383 + t2395)*t922 - 1.*(0.15121*t2421 + t2439)*t922 + (0.15121*t2383 + t2395)*t934 - 1.*(-0.15121*t2421 + t2439)*t934 + 0.15121*(t2389*t922 + t2368*t934) - 0.15121*(t2368*t922 - 1.*t2389*t934) + 0.15121*(t2434*t922 + t2415*t934) - 0.15121*(t2415*t922 - 1.*t2434*t934) - 1.*t259*var3[9] - 5.*t112*t141*t246*var3[19] - 10.*t213*t218*t219*var3[29] - 10.*t182*t194*t197*var3[39] - 5.*t122*t135*t179*var3[49] - 1.*t113*t58*var3[59];
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

#include "y_position_DiagonalStance.hh"

namespace DiagonalStance
{

void y_position_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
