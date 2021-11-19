/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:30:52 GMT+01:00
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
  double t30;
  double t32;
  double t50;
  double t55;
  double t63;
  double t68;
  double t70;
  double t73;
  double t74;
  double t98;
  double t105;
  double t106;
  double t197;
  double t161;
  double t170;
  double t175;
  double t177;
  double t182;
  double t188;
  double t199;
  double t201;
  double t207;
  double t216;
  double t166;
  double t231;
  double t222;
  double t252;
  double t253;
  double t254;
  double t269;
  double t270;
  double t272;
  double t278;
  double t285;
  double t286;
  double t291;
  double t323;
  double t295;
  double t301;
  double t303;
  double t307;
  double t310;
  double t314;
  double t335;
  double t336;
  double t338;
  double t339;
  double t357;
  double t363;
  double t364;
  double t368;
  double t374;
  double t375;
  double t42;
  double t76;
  double t86;
  double t94;
  double t119;
  double t128;
  double t129;
  double t134;
  double t138;
  double t139;
  double t147;
  double t157;
  double t193;
  double t205;
  double t210;
  double t218;
  double t221;
  double t180;
  double t191;
  double t541;
  double t229;
  double t230;
  double t556;
  double t234;
  double t236;
  double t239;
  double t247;
  double t248;
  double t548;
  double t557;
  double t567;
  double t593;
  double t603;
  double t611;
  double t259;
  double t266;
  double t268;
  double t290;
  double t293;
  double t294;
  double t622;
  double t623;
  double t630;
  double t652;
  double t654;
  double t657;
  double t319;
  double t322;
  double t324;
  double t328;
  double t333;
  double t344;
  double t345;
  double t348;
  double t351;
  double t356;
  double t671;
  double t678;
  double t683;
  double t684;
  double t691;
  double t696;
  double t698;
  double t703;
  double t386;
  double t388;
  double t712;
  double t715;
  double t724;
  double t729;
  double t440;
  double t453;
  double t942;
  double t971;
  double t973;
  double t984;
  double t986;
  double t999;
  double t1011;
  double t1034;
  double t1037;
  double t1056;
  double t1059;
  double t1071;
  double t1084;
  double t1086;
  double t1093;
  double t1100;
  double t1119;
  double t1121;
  double t1124;
  double t1127;
  double t1136;
  double t1137;
  double t1141;
  double t1147;
  double t1325;
  double t1327;
  double t1333;
  double t1358;
  double t1296;
  double t1299;
  double t1301;
  double t1305;
  double t1307;
  double t1339;
  double t1381;
  double t1453;
  double t1508;
  double t1510;
  double t1511;
  double t1520;
  double t1477;
  double t1483;
  double t1468;
  double t1470;
  double t1471;
  double t1494;
  double t1496;
  double t1503;
  double t1542;
  double t1444;
  double t1581;
  double t1456;
  double t1613;
  double t1516;
  double t1656;
  double t1667;
  double t1361;
  double t1560;
  double t1565;
  double t1577;
  double t1585;
  double t1588;
  double t1591;
  double t1593;
  double t1594;
  double t1597;
  double t1697;
  double t1669;
  double t1672;
  double t1673;
  double t1681;
  double t1682;
  double t1683;
  double t1684;
  double t1688;
  double t1716;
  double t1717;
  double t1720;
  double t1722;
  double t1728;
  double t1736;
  double t1741;
  double t1742;
  double t1547;
  double t1747;
  double t1527;
  double t1785;
  double t1638;
  double t1757;
  double t1758;
  double t1624;
  double t1323;
  double t1335;
  double t1366;
  double t1369;
  double t1382;
  double t1383;
  double t1392;
  double t1302;
  double t1318;
  double t1407;
  double t1413;
  double t1435;
  double t1437;
  double t1446;
  double t1448;
  double t1460;
  double t1465;
  double t1467;
  double t1474;
  double t1476;
  double t1478;
  double t1480;
  double t1486;
  double t1490;
  double t1493;
  double t1507;
  double t1513;
  double t1536;
  double t1541;
  double t1548;
  double t1552;
  double t1553;
  double t1872;
  double t1873;
  double t1874;
  double t1879;
  double t1881;
  double t1882;
  double t1606;
  double t1609;
  double t1625;
  double t1626;
  double t1646;
  double t1647;
  double t1653;
  double t1693;
  double t1694;
  double t1700;
  double t1702;
  double t1710;
  double t1711;
  double t1715;
  double t1750;
  double t1902;
  double t1904;
  double t1907;
  double t1909;
  double t1760;
  double t1911;
  double t1915;
  double t1918;
  double t1920;
  double t1764;
  double t1765;
  double t1926;
  double t1929;
  double t1933;
  double t1938;
  double t1773;
  double t1776;
  double t1787;
  double t1794;
  double t1810;
  double t1816;
  double t1817;
  double t1824;
  double t2037;
  double t2042;
  double t2047;
  double t2061;
  double t2068;
  double t2074;
  double t2083;
  double t2086;
  double t2088;
  double t2091;
  double t2107;
  double t2110;
  double t2112;
  double t2122;
  double t2129;
  double t2130;
  double t2134;
  double t2137;
  double t977;
  double t1001;
  t30 = -1.*var4[0];
  t32 = t30 + var4[1];
  t50 = -1. + var5[0];
  t55 = -1. + var6[0];
  t63 = 1/t55;
  t68 = -1.*var1[0];
  t70 = t68 + var1[1];
  t73 = t50*t63*t70;
  t74 = t30 + var1[0] + t73;
  t98 = 1/t32;
  t105 = -1.*t98*t74;
  t106 = 1. + t105;
  t197 = Cos(var2[10]);
  t161 = Cos(var2[4]);
  t170 = Cos(var2[9]);
  t175 = -1.*t170;
  t177 = 1. + t175;
  t182 = Sin(var2[9]);
  t188 = -0.15121*t182;
  t199 = -1.*t197;
  t201 = 1. + t199;
  t207 = -1. + t197;
  t216 = Sin(var2[10]);
  t166 = Cos(var2[5]);
  t231 = Sin(var2[5]);
  t222 = Sin(var2[4]);
  t252 = -1.*t161*t166*t182;
  t253 = -1.*t170*t161*t231;
  t254 = t252 + t253;
  t269 = t170*t161*t166;
  t270 = -1.*t161*t182*t231;
  t272 = t269 + t270;
  t278 = Cos(var2[11]);
  t285 = -1.*t278;
  t286 = 1. + t285;
  t291 = Sin(var2[11]);
  t323 = -1. + t278;
  t295 = t216*t222;
  t301 = -4.e-6*t216*t254;
  t303 = -1.000000000016*t201;
  t307 = 1. + t303;
  t310 = t307*t272;
  t314 = t295 + t301 + t310;
  t335 = t197*t222;
  t336 = 4.e-6*t201*t254;
  t338 = -1.*t216*t272;
  t339 = t335 + t336 + t338;
  t357 = 4.e-6*t201*t222;
  t363 = 1.6e-11*t207;
  t364 = 1. + t363;
  t368 = t364*t254;
  t374 = 4.e-6*t216*t272;
  t375 = t357 + t368 + t374;
  t42 = Power(t32,-5);
  t76 = Power(t74,5);
  t86 = Power(t32,-4);
  t94 = Power(t74,4);
  t119 = Power(t32,-3);
  t128 = Power(t74,3);
  t129 = Power(t106,2);
  t134 = Power(t32,-2);
  t138 = Power(t74,2);
  t139 = Power(t106,3);
  t147 = Power(t106,4);
  t157 = Power(t106,5);
  t193 = -4.9936e-13*var2[10];
  t205 = -0.038749*t201;
  t210 = 6.19984e-13*t207;
  t218 = -0.281210000004*t216;
  t221 = t193 + t205 + t210 + t218;
  t180 = 0.15121*t177;
  t191 = t180 + t188;
  t541 = Sin(var2[3]);
  t229 = -0.15121*t177;
  t230 = t229 + t188;
  t556 = Cos(var2[3]);
  t234 = -1.2484e-7*var2[10];
  t236 = 2.479936e-18*t201;
  t239 = -1.54996e-7*t207;
  t247 = 1.124840000016e-6*t216;
  t248 = t234 + t236 + t239 + t247;
  t548 = t166*t541*t222;
  t557 = t556*t231;
  t567 = t548 + t557;
  t593 = t556*t166;
  t603 = -1.*t541*t222*t231;
  t611 = t593 + t603;
  t259 = 0.281210000008499*t201;
  t266 = -0.03874900000062*t216;
  t268 = t259 + t266;
  t290 = 0.50315000001605*t286;
  t293 = -0.0398890000006382*t291;
  t294 = t290 + t293;
  t622 = -1.*t182*t567;
  t623 = t170*t611;
  t630 = t622 + t623;
  t652 = t170*t567;
  t654 = t182*t611;
  t657 = t652 + t654;
  t319 = -5.04e-14*var2[11];
  t322 = -0.039889*t286;
  t324 = 6.38224e-13*t323;
  t328 = -0.503150000008*t291;
  t333 = t319 + t322 + t324 + t328;
  t344 = -1.26e-8*var2[11];
  t345 = 2.552896e-18*t286;
  t348 = -1.59556e-7*t323;
  t351 = 2.012600000032e-6*t291;
  t356 = t344 + t345 + t348 + t351;
  t671 = -1.*t161*t216*t541;
  t678 = -4.e-6*t216*t630;
  t683 = t307*t657;
  t684 = t671 + t678 + t683;
  t691 = -1.*t197*t161*t541;
  t696 = 4.e-6*t201*t630;
  t698 = -1.*t216*t657;
  t703 = t691 + t696 + t698;
  t386 = 1.6e-11*t323;
  t388 = 1. + t386;
  t712 = -4.e-6*t201*t161*t541;
  t715 = t364*t630;
  t724 = 4.e-6*t216*t657;
  t729 = t712 + t715 + t724;
  t440 = -1.000000000016*t286;
  t453 = 1. + t440;
  t942 = -1.*t556*t166*t222;
  t971 = t541*t231;
  t973 = t942 + t971;
  t984 = t166*t541;
  t986 = t556*t222*t231;
  t999 = t984 + t986;
  t1011 = -1.*t182*t973;
  t1034 = t170*t999;
  t1037 = t1011 + t1034;
  t1056 = t170*t973;
  t1059 = t182*t999;
  t1071 = t1056 + t1059;
  t1084 = t556*t161*t216;
  t1086 = -4.e-6*t216*t1037;
  t1093 = t307*t1071;
  t1100 = t1084 + t1086 + t1093;
  t1119 = t197*t556*t161;
  t1121 = 4.e-6*t201*t1037;
  t1124 = -1.*t216*t1071;
  t1127 = t1119 + t1121 + t1124;
  t1136 = 4.e-6*t201*t556*t161;
  t1137 = t364*t1037;
  t1141 = 4.e-6*t216*t1071;
  t1147 = t1136 + t1137 + t1141;
  t1325 = Cos(var2[13]);
  t1327 = -1.*t1325;
  t1333 = 1. + t1327;
  t1358 = Sin(var2[13]);
  t1296 = Cos(var2[12]);
  t1299 = -1.*t1296;
  t1301 = 1. + t1299;
  t1305 = Sin(var2[12]);
  t1307 = 0.15121*t1305;
  t1339 = 4.e-6*t1333;
  t1381 = -2.8e-11*t1333;
  t1453 = 7.e-6*t1333;
  t1508 = Cos(var2[14]);
  t1510 = -1.*t1508;
  t1511 = 1. + t1510;
  t1520 = Sin(var2[14]);
  t1477 = -1.*t1358;
  t1483 = -4.e-6*t1358;
  t1468 = -1.*t161*t166*t1305;
  t1470 = -1.*t1296*t161*t231;
  t1471 = t1468 + t1470;
  t1494 = t1296*t161*t166;
  t1496 = -1.*t161*t1305*t231;
  t1503 = t1494 + t1496;
  t1542 = 7.e-6*t1511;
  t1444 = -7.e-6*t1358;
  t1581 = -7.e-6*t1333;
  t1456 = 4.e-6*t1358;
  t1613 = 4.e-6*t1511;
  t1516 = -2.8e-11*t1511;
  t1656 = -1. + t1325;
  t1667 = 4.e-6*t1656;
  t1361 = 7.e-6*t1358;
  t1560 = 2.8e-11*t1333;
  t1565 = t1560 + t1477;
  t1577 = t1565*t222;
  t1585 = t1581 + t1483;
  t1588 = t1585*t1471;
  t1591 = -1.000000000016*t1333;
  t1593 = 1. + t1591;
  t1594 = t1593*t1503;
  t1597 = t1577 + t1588 + t1594;
  t1697 = 7.e-6*t1520;
  t1669 = t1667 + t1444;
  t1672 = t1669*t222;
  t1673 = -6.5e-11*t1333;
  t1681 = 1. + t1673;
  t1682 = t1681*t1471;
  t1683 = t1581 + t1456;
  t1684 = t1683*t1503;
  t1688 = t1672 + t1682 + t1684;
  t1716 = -1.000000000049*t1333;
  t1717 = 1. + t1716;
  t1720 = t1717*t222;
  t1722 = t1667 + t1361;
  t1728 = t1722*t1471;
  t1736 = t1560 + t1358;
  t1741 = t1736*t1503;
  t1742 = t1720 + t1728 + t1741;
  t1547 = -4.e-6*t1520;
  t1747 = 2.8e-11*t1511;
  t1527 = -1.*t1520;
  t1785 = -7.e-6*t1511;
  t1638 = 4.e-6*t1520;
  t1757 = -1. + t1508;
  t1758 = 4.e-6*t1757;
  t1624 = -7.e-6*t1520;
  t1323 = 5.856279999999999e-13*var2[13];
  t1335 = -0.0387489999948987*t1333;
  t1366 = t1339 + t1361;
  t1369 = -2.123459e-6*t1366;
  t1382 = t1381 + t1358;
  t1383 = -0.281209000004*t1382;
  t1392 = t1323 + t1335 + t1369 + t1383;
  t1302 = -0.15121*t1301;
  t1318 = t1302 + t1307;
  t1407 = 0.15121*t1301;
  t1413 = t1407 + t1307;
  t1435 = -1.4640699999999997e-7*var2[13];
  t1437 = -1.38024835e-16*t1333;
  t1446 = t1339 + t1444;
  t1448 = -0.038748999993*t1446;
  t1460 = t1453 + t1456;
  t1465 = -0.281209000004*t1460;
  t1467 = t1435 + t1437 + t1448 + t1465;
  t1474 = 1.0248489999999998e-12*var2[13];
  t1476 = -0.28120900000849935*t1333;
  t1478 = t1381 + t1477;
  t1480 = -0.038748999993*t1478;
  t1486 = t1453 + t1483;
  t1490 = -2.123459e-6*t1486;
  t1493 = t1474 + t1476 + t1480 + t1490;
  t1507 = 1.8190549999999993e-12*var2[14];
  t1513 = -0.5031490000160505*t1511;
  t1536 = t1516 + t1527;
  t1541 = -0.038922999986*t1536;
  t1548 = t1542 + t1547;
  t1552 = -3.6777349999999994e-6*t1548;
  t1553 = t1507 + t1513 + t1541 + t1552;
  t1872 = -1.*t1305*t567;
  t1873 = t1296*t611;
  t1874 = t1872 + t1873;
  t1879 = t1296*t567;
  t1881 = t1305*t611;
  t1882 = t1879 + t1881;
  t1606 = -2.598649999999999e-7*var2[14];
  t1609 = -2.3905277499999995e-16*t1511;
  t1625 = t1613 + t1624;
  t1626 = -0.038922999986*t1625;
  t1646 = t1542 + t1638;
  t1647 = -0.503149000008*t1646;
  t1653 = t1606 + t1609 + t1626 + t1647;
  t1693 = 1.0394599999999997e-12*var2[14];
  t1694 = -0.03892299998790722*t1511;
  t1700 = t1613 + t1697;
  t1702 = -3.6777349999999994e-6*t1700;
  t1710 = t1516 + t1520;
  t1711 = -0.503149000008*t1710;
  t1715 = t1693 + t1694 + t1702 + t1711;
  t1750 = t1747 + t1520;
  t1902 = -1.*t161*t1565*t541;
  t1904 = t1585*t1874;
  t1907 = t1593*t1882;
  t1909 = t1902 + t1904 + t1907;
  t1760 = t1758 + t1697;
  t1911 = -1.*t161*t1669*t541;
  t1915 = t1681*t1874;
  t1918 = t1683*t1882;
  t1920 = t1911 + t1915 + t1918;
  t1764 = -1.000000000049*t1511;
  t1765 = 1. + t1764;
  t1926 = -1.*t1717*t161*t541;
  t1929 = t1722*t1874;
  t1933 = t1736*t1882;
  t1938 = t1926 + t1929 + t1933;
  t1773 = -1.000000000016*t1511;
  t1776 = 1. + t1773;
  t1787 = t1785 + t1547;
  t1794 = t1747 + t1527;
  t1810 = t1785 + t1638;
  t1816 = -6.5e-11*t1511;
  t1817 = 1. + t1816;
  t1824 = t1758 + t1624;
  t2037 = -1.*t1305*t973;
  t2042 = t1296*t999;
  t2047 = t2037 + t2042;
  t2061 = t1296*t973;
  t2068 = t1305*t999;
  t2074 = t2061 + t2068;
  t2083 = t556*t161*t1565;
  t2086 = t1585*t2047;
  t2088 = t1593*t2074;
  t2091 = t2083 + t2086 + t2088;
  t2107 = t556*t161*t1669;
  t2110 = t1681*t2047;
  t2112 = t1683*t2074;
  t2122 = t2107 + t2110 + t2112;
  t2129 = t1717*t556*t161;
  t2130 = t1722*t2047;
  t2134 = t1736*t2074;
  t2137 = t2129 + t2130 + t2134;
  t977 = t191*t973;
  t1001 = t230*t999;
  p_output1[0]=t161*t166*t191 + t221*t222 - 1.*t161*t230*t231 + t248*t254 + t268*t272 + t294*t314 + t333*t339 + t356*t375 - 0.041195*(-1.*t291*t314 + t278*t339 + 4.e-6*t286*t375) - 0.14871*(4.e-6*t291*t314 + 4.e-6*t286*t339 + t375*t388) + 0.803147*(t291*t339 - 4.e-6*t291*t375 + t314*t453) + var2[0] - 1.*t157*var3[0] - 5.*t147*t74*t98*var3[10] - 10.*t134*t138*t139*var3[20] - 10.*t119*t128*t129*var3[30] - 5.*t106*t86*t94*var3[40] - 1.*t42*t76*var3[50];
  p_output1[1]=-1.*t161*t221*t541 + t191*t567 + t230*t611 + t248*t630 + t268*t657 + t294*t684 + t333*t703 + t356*t729 - 0.041195*(-1.*t291*t684 + t278*t703 + 4.e-6*t286*t729) + 0.803147*(t453*t684 + t291*t703 - 4.e-6*t291*t729) - 0.14871*(4.e-6*t291*t684 + 4.e-6*t286*t703 + t388*t729) + var2[1] - 1.*t157*var3[1] - 5.*t147*t74*t98*var3[11] - 10.*t134*t138*t139*var3[21] - 10.*t119*t128*t129*var3[31] - 5.*t106*t86*t94*var3[41] - 1.*t42*t76*var3[51];
  p_output1[2]=t1001 + t1037*t248 + t1071*t268 - 0.041195*(t1127*t278 + 4.e-6*t1147*t286 - 1.*t1100*t291) + t1100*t294 + t1127*t333 + t1147*t356 - 0.14871*(4.e-6*t1127*t286 + 4.e-6*t1100*t291 + t1147*t388) + 0.803147*(t1127*t291 - 4.e-6*t1147*t291 + t1100*t453) + t161*t221*t556 + t977 + var2[2] - 1.*t157*var3[2] - 5.*t147*t74*t98*var3[12] - 10.*t134*t138*t139*var3[22] - 10.*t119*t128*t129*var3[32] - 5.*t106*t86*t94*var3[42] - 1.*t42*t76*var3[52];
  p_output1[3]=t1467*t1471 + t1493*t1503 + t1553*t1597 + t1318*t161*t166 + t1653*t1688 + t1715*t1742 - 0.038924*(t1597*t1750 + t1688*t1760 + t1742*t1765) - 0.80315*(t1597*t1776 + t1688*t1787 + t1742*t1794) + 0.148705*(t1597*t1810 + t1688*t1817 + t1742*t1824) + t1392*t222 - 1.*t1413*t161*t231 + var2[0] - 1.*t157*var3[3] - 5.*t147*t74*t98*var3[13] - 10.*t134*t138*t139*var3[23] - 10.*t119*t128*t129*var3[33] - 5.*t106*t86*t94*var3[43] - 1.*t42*t76*var3[53];
  p_output1[4]=t1467*t1874 + t1493*t1882 + t1553*t1909 + t1653*t1920 + t1715*t1938 - 0.038924*(t1750*t1909 + t1760*t1920 + t1765*t1938) - 0.80315*(t1776*t1909 + t1787*t1920 + t1794*t1938) + 0.148705*(t1810*t1909 + t1817*t1920 + t1824*t1938) - 1.*t1392*t161*t541 + t1318*t567 + t1413*t611 + var2[1] - 1.*t157*var3[4] - 5.*t147*t74*t98*var3[14] - 10.*t134*t138*t139*var3[24] - 10.*t119*t128*t129*var3[34] - 5.*t106*t86*t94*var3[44] - 1.*t42*t76*var3[54];
  p_output1[5]=t1467*t2047 + t1493*t2074 + t1553*t2091 + t1653*t2122 + t1715*t2137 - 0.038924*(t1750*t2091 + t1760*t2122 + t1765*t2137) - 0.80315*(t1776*t2091 + t1787*t2122 + t1794*t2137) + 0.148705*(t1810*t2091 + t1817*t2122 + t1824*t2137) + t1392*t161*t556 + t1318*t973 + t1413*t999 + var2[2] - 1.*t157*var3[5] - 5.*t147*t74*t98*var3[15] - 10.*t134*t138*t139*var3[25] - 10.*t119*t128*t129*var3[35] - 5.*t106*t86*t94*var3[45] - 1.*t42*t76*var3[55];
  p_output1[6]=0.024028*t161*t541 + 0.00183*t567 - 0.002264*t611 + var2[1] - 1.*t157*var3[6] - 5.*t147*t74*t98*var3[16] - 10.*t134*t138*t139*var3[26] - 10.*t119*t128*t129*var3[36] - 5.*t106*t86*t94*var3[46] - 1.*t42*t76*var3[56];
  p_output1[7]=-0.024028*t161*t556 + 0.00183*t973 - 0.002264*t999 + var2[2] - 1.*t157*var3[7] - 5.*t147*t74*t98*var3[17] - 10.*t134*t138*t139*var3[27] - 10.*t119*t128*t129*var3[37] - 5.*t106*t86*t94*var3[47] - 1.*t42*t76*var3[57];
  p_output1[8]=ArcTan(t161*t166,t567) - 1.*t157*var3[8] - 5.*t147*t74*t98*var3[18] - 10.*t134*t138*t139*var3[28] - 10.*t119*t128*t129*var3[38] - 5.*t106*t86*t94*var3[48] - 1.*t42*t76*var3[58];
  p_output1[9]=t1001 - 0.15121*t1037 + 0.15121*t1071 - 0.15121*t2047 + 0.15121*t2074 - 1.*t1318*t973 + t977 - 1.*t1413*t999 - 1.*t157*var3[9] - 5.*t147*t74*t98*var3[19] - 10.*t134*t138*t139*var3[29] - 10.*t119*t128*t129*var3[39] - 5.*t106*t86*t94*var3[49] - 1.*t42*t76*var3[59];
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

#include "y_position_DiagonalStance2.hh"

namespace DiagonalStance2
{

void y_position_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
