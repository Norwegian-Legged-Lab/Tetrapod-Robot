/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:09:51 GMT+01:00
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
  double t51;
  double t67;
  double t71;
  double t81;
  double t86;
  double t96;
  double t110;
  double t111;
  double t126;
  double t155;
  double t180;
  double t195;
  double t292;
  double t294;
  double t303;
  double t319;
  double t322;
  double t348;
  double t293;
  double t398;
  double t436;
  double t441;
  double t463;
  double t475;
  double t539;
  double t563;
  double t419;
  double t420;
  double t431;
  double t493;
  double t497;
  double t507;
  double t615;
  double t621;
  double t628;
  double t644;
  double t564;
  double t566;
  double t573;
  double t580;
  double t582;
  double t587;
  double t813;
  double t760;
  double t761;
  double t764;
  double t768;
  double t694;
  double t702;
  double t706;
  double t707;
  double t710;
  double t711;
  double t69;
  double t142;
  double t145;
  double t150;
  double t200;
  double t204;
  double t234;
  double t241;
  double t244;
  double t253;
  double t257;
  double t266;
  double t349;
  double t358;
  double t967;
  double t952;
  double t399;
  double t407;
  double t959;
  double t972;
  double t976;
  double t990;
  double t991;
  double t992;
  double t433;
  double t472;
  double t479;
  double t486;
  double t509;
  double t523;
  double t530;
  double t542;
  double t543;
  double t546;
  double t548;
  double t998;
  double t1005;
  double t1008;
  double t1020;
  double t1049;
  double t1058;
  double t604;
  double t636;
  double t654;
  double t685;
  double t731;
  double t738;
  double t753;
  double t771;
  double t780;
  double t783;
  double t794;
  double t815;
  double t819;
  double t1072;
  double t1082;
  double t1083;
  double t1097;
  double t1131;
  double t1132;
  double t1133;
  double t1134;
  double t1108;
  double t1113;
  double t1115;
  double t1117;
  double t874;
  double t878;
  double t1221;
  double t1223;
  double t1227;
  double t1237;
  double t1240;
  double t1242;
  double t1245;
  double t1246;
  double t1255;
  double t1264;
  double t1265;
  double t1267;
  double t1277;
  double t1281;
  double t1282;
  double t1299;
  double t1335;
  double t1340;
  double t1349;
  double t1356;
  double t1304;
  double t1311;
  double t1319;
  double t1323;
  double t1537;
  double t1539;
  double t1542;
  double t1553;
  double t1500;
  double t1507;
  double t1511;
  double t1520;
  double t1524;
  double t1565;
  double t1571;
  double t1622;
  double t1552;
  double t1730;
  double t1732;
  double t1735;
  double t1748;
  double t1700;
  double t1665;
  double t1671;
  double t1678;
  double t1714;
  double t1715;
  double t1716;
  double t1763;
  double t1575;
  double t1791;
  double t1561;
  double t1746;
  double t1873;
  double t1878;
  double t1925;
  double t1652;
  double t1806;
  double t1638;
  double t1948;
  double t1792;
  double t1799;
  double t1811;
  double t1813;
  double t1815;
  double t1824;
  double t1826;
  double t1831;
  double t1956;
  double t1909;
  double t1910;
  double t1914;
  double t1928;
  double t1929;
  double t1932;
  double t1937;
  double t1938;
  double t1983;
  double t1992;
  double t1996;
  double t1999;
  double t2000;
  double t2009;
  double t2010;
  double t2019;
  double t1857;
  double t2034;
  double t1881;
  double t2065;
  double t2021;
  double t1750;
  double t1532;
  double t1549;
  double t1562;
  double t1563;
  double t1579;
  double t1581;
  double t1591;
  double t1525;
  double t1529;
  double t1602;
  double t1605;
  double t1616;
  double t1621;
  double t1645;
  double t1646;
  double t1653;
  double t1657;
  double t1664;
  double t1684;
  double t1685;
  double t1702;
  double t1703;
  double t1704;
  double t1712;
  double t1713;
  double t1727;
  double t1741;
  double t1755;
  double t1762;
  double t1770;
  double t1782;
  double t1789;
  double t2169;
  double t2172;
  double t2173;
  double t2182;
  double t2183;
  double t2185;
  double t1847;
  double t1849;
  double t1861;
  double t1867;
  double t1889;
  double t1894;
  double t1895;
  double t1943;
  double t1946;
  double t1950;
  double t1955;
  double t1973;
  double t1975;
  double t1979;
  double t2029;
  double t2191;
  double t2197;
  double t2201;
  double t2206;
  double t2035;
  double t2216;
  double t2220;
  double t2223;
  double t2225;
  double t2045;
  double t2048;
  double t2230;
  double t2232;
  double t2238;
  double t2243;
  double t2067;
  double t2078;
  double t2081;
  double t2085;
  double t2092;
  double t2095;
  double t2097;
  double t2101;
  double t2349;
  double t2354;
  double t2360;
  double t2372;
  double t2377;
  double t2381;
  double t2387;
  double t2393;
  double t2403;
  double t2419;
  double t2427;
  double t2428;
  double t2431;
  double t2437;
  double t2443;
  double t2449;
  double t2450;
  double t2452;
  double t2642;
  double t2648;
  double t2651;
  double t2662;
  double t2681;
  double t2691;
  double t2693;
  double t2696;
  double t2709;
  double t2710;
  t51 = -1.*var4[0];
  t67 = t51 + var4[1];
  t71 = -1. + var5[0];
  t81 = -1. + var6[0];
  t86 = 1/t81;
  t96 = -1.*var1[0];
  t110 = t96 + var1[1];
  t111 = t71*t86*t110;
  t126 = t51 + var1[0] + t111;
  t155 = 1/t67;
  t180 = -1.*t155*t126;
  t195 = 1. + t180;
  t292 = Cos(var2[4]);
  t294 = Cos(var2[6]);
  t303 = -1.*t294;
  t319 = 1. + t303;
  t322 = 0.15121*t319;
  t348 = Sin(var2[6]);
  t293 = Sin(var2[5]);
  t398 = Cos(var2[5]);
  t436 = Cos(var2[7]);
  t441 = -1.*t436;
  t463 = 1. + t441;
  t475 = Sin(var2[7]);
  t539 = Sin(var2[4]);
  t563 = -1. + t436;
  t419 = -1.*t292*t294*t293;
  t420 = -1.*t292*t398*t348;
  t431 = t419 + t420;
  t493 = t292*t398*t294;
  t497 = -1.*t292*t293*t348;
  t507 = t493 + t497;
  t615 = Cos(var2[8]);
  t621 = -1.*t615;
  t628 = 1. + t621;
  t644 = Sin(var2[8]);
  t564 = 4.e-6*t563*t539;
  t566 = 1.6e-11*t563;
  t573 = 1. + t566;
  t580 = t573*t431;
  t582 = 4.e-6*t507*t475;
  t587 = t564 + t580 + t582;
  t813 = -1. + t615;
  t760 = t436*t539;
  t761 = 4.e-6*t563*t431;
  t764 = t507*t475;
  t768 = t760 + t761 + t764;
  t694 = -1.000000000016*t463;
  t702 = 1. + t694;
  t706 = t702*t507;
  t707 = -1.*t539*t475;
  t710 = -4.e-6*t431*t475;
  t711 = t706 + t707 + t710;
  t69 = Power(t67,-5);
  t142 = Power(t126,5);
  t145 = Power(t67,-4);
  t150 = Power(t126,4);
  t200 = Power(t67,-3);
  t204 = Power(t126,3);
  t234 = Power(t195,2);
  t241 = Power(t67,-2);
  t244 = Power(t126,2);
  t253 = Power(t195,3);
  t257 = Power(t195,4);
  t266 = Power(t195,5);
  t349 = -0.15121*t348;
  t358 = t322 + t349;
  t967 = Sin(var2[3]);
  t952 = Cos(var2[3]);
  t399 = 0.15121*t348;
  t407 = t322 + t399;
  t959 = t952*t398;
  t972 = -1.*t967*t539*t293;
  t976 = t959 + t972;
  t990 = t398*t967*t539;
  t991 = t952*t293;
  t992 = t990 + t991;
  t433 = -1.2484e-7*var2[7];
  t472 = -1.5499600000248e-7*t463;
  t479 = 1.124840000016e-6*t475;
  t486 = t433 + t472 + t479;
  t509 = 0.281210000008499*t463;
  t523 = 0.03874900000062*t475;
  t530 = t509 + t523;
  t542 = 4.9936e-13*var2[7];
  t543 = -0.03874900000062*t463;
  t546 = 0.281210000004*t475;
  t548 = t542 + t543 + t546;
  t998 = t294*t976;
  t1005 = -1.*t992*t348;
  t1008 = t998 + t1005;
  t1020 = t294*t992;
  t1049 = t976*t348;
  t1058 = t1020 + t1049;
  t604 = -1.284e-8*var2[8];
  t636 = -1.5499600000248e-7*t628;
  t654 = 2.012840000032e-6*t644;
  t685 = t604 + t636 + t654;
  t731 = 0.503210000016051*t628;
  t738 = 0.03874900000062*t644;
  t753 = t731 + t738;
  t771 = 5.136e-14*var2[8];
  t780 = -0.03874900000062*t628;
  t783 = 0.503210000008*t644;
  t794 = t771 + t780 + t783;
  t815 = 1.6e-11*t813;
  t819 = 1. + t815;
  t1072 = -4.e-6*t292*t563*t967;
  t1082 = t573*t1008;
  t1083 = 4.e-6*t1058*t475;
  t1097 = t1072 + t1082 + t1083;
  t1131 = -1.*t292*t436*t967;
  t1132 = 4.e-6*t563*t1008;
  t1133 = t1058*t475;
  t1134 = t1131 + t1132 + t1133;
  t1108 = t702*t1058;
  t1113 = t292*t967*t475;
  t1115 = -4.e-6*t1008*t475;
  t1117 = t1108 + t1113 + t1115;
  t874 = -1.000000000016*t628;
  t878 = 1. + t874;
  t1221 = t398*t967;
  t1223 = t952*t539*t293;
  t1227 = t1221 + t1223;
  t1237 = -1.*t952*t398*t539;
  t1240 = t967*t293;
  t1242 = t1237 + t1240;
  t1245 = t294*t1227;
  t1246 = -1.*t1242*t348;
  t1255 = t1245 + t1246;
  t1264 = t294*t1242;
  t1265 = t1227*t348;
  t1267 = t1264 + t1265;
  t1277 = 4.e-6*t952*t292*t563;
  t1281 = t573*t1255;
  t1282 = 4.e-6*t1267*t475;
  t1299 = t1277 + t1281 + t1282;
  t1335 = t952*t292*t436;
  t1340 = 4.e-6*t563*t1255;
  t1349 = t1267*t475;
  t1356 = t1335 + t1340 + t1349;
  t1304 = t702*t1267;
  t1311 = -1.*t952*t292*t475;
  t1319 = -4.e-6*t1255*t475;
  t1323 = t1304 + t1311 + t1319;
  t1537 = Cos(var2[16]);
  t1539 = -1.*t1537;
  t1542 = 1. + t1539;
  t1553 = Sin(var2[16]);
  t1500 = Cos(var2[15]);
  t1507 = -1.*t1500;
  t1511 = 1. + t1507;
  t1520 = -0.15121*t1511;
  t1524 = Sin(var2[15]);
  t1565 = -1. + t1537;
  t1571 = 4.e-6*t1565;
  t1622 = 7.e-6*t1542;
  t1552 = 2.8e-11*t1542;
  t1730 = Cos(var2[17]);
  t1732 = -1.*t1730;
  t1735 = 1. + t1732;
  t1748 = Sin(var2[17]);
  t1700 = -4.e-6*t1553;
  t1665 = -1.*t292*t398*t1524;
  t1671 = -1.*t1500*t292*t293;
  t1678 = t1665 + t1671;
  t1714 = t1500*t292*t398;
  t1715 = -1.*t292*t1524*t293;
  t1716 = t1714 + t1715;
  t1763 = 2.8e-11*t1735;
  t1575 = -7.e-6*t1553;
  t1791 = -2.8e-11*t1542;
  t1561 = -1.*t1553;
  t1746 = 7.e-6*t1735;
  t1873 = -1. + t1730;
  t1878 = 4.e-6*t1873;
  t1925 = 4.e-6*t1542;
  t1652 = 7.e-6*t1553;
  t1806 = -7.e-6*t1542;
  t1638 = 4.e-6*t1553;
  t1948 = 4.e-6*t1748;
  t1792 = t1791 + t1553;
  t1799 = t1792*t539;
  t1811 = t1806 + t1700;
  t1813 = t1811*t1678;
  t1815 = -1.000000000016*t1542;
  t1824 = 1. + t1815;
  t1826 = t1824*t1716;
  t1831 = t1799 + t1813 + t1826;
  t1956 = 7.e-6*t1748;
  t1909 = -1.000000000049*t1542;
  t1910 = 1. + t1909;
  t1914 = t1910*t539;
  t1928 = t1925 + t1575;
  t1929 = t1928*t1678;
  t1932 = t1791 + t1561;
  t1937 = t1932*t1716;
  t1938 = t1914 + t1929 + t1937;
  t1983 = t1925 + t1652;
  t1992 = t1983*t539;
  t1996 = -6.5e-11*t1542;
  t1999 = 1. + t1996;
  t2000 = t1999*t1678;
  t2009 = t1806 + t1638;
  t2010 = t2009*t1716;
  t2019 = t1992 + t2000 + t2010;
  t1857 = -1.*t1748;
  t2034 = 4.e-6*t1735;
  t1881 = -7.e-6*t1748;
  t2065 = -2.8e-11*t1735;
  t2021 = -7.e-6*t1735;
  t1750 = -4.e-6*t1748;
  t1532 = 1.5843479999999999e-12*var2[16];
  t1549 = -0.03874900000889869*t1542;
  t1562 = t1552 + t1561;
  t1563 = -0.281211000004*t1562;
  t1579 = t1571 + t1575;
  t1581 = -1.8134809999999998e-6*t1579;
  t1591 = t1532 + t1549 + t1563 + t1581;
  t1525 = -0.15121*t1524;
  t1529 = t1520 + t1525;
  t1602 = 0.15121*t1524;
  t1605 = t1520 + t1602;
  t1616 = 3.9608699999999997e-7*var2[16];
  t1621 = -1.1787626499999999e-16*t1542;
  t1645 = t1622 + t1638;
  t1646 = -0.281211000004*t1645;
  t1653 = t1571 + t1652;
  t1657 = -0.038749000006999997*t1653;
  t1664 = t1616 + t1621 + t1646 + t1657;
  t1684 = -2.7726089999999997e-12*var2[16];
  t1685 = -0.2812110000084994*t1542;
  t1702 = t1622 + t1700;
  t1703 = -1.8134809999999998e-6*t1702;
  t1704 = t1552 + t1553;
  t1712 = -0.038749000006999997*t1704;
  t1713 = t1684 + t1685 + t1703 + t1712;
  t1727 = -1.9784030000000015e-12*var2[17];
  t1741 = -0.5031510000160505*t1735;
  t1755 = t1746 + t1750;
  t1762 = -3.367757e-6*t1755;
  t1770 = t1763 + t1748;
  t1782 = -0.038575000014*t1770;
  t1789 = t1727 + t1741 + t1762 + t1782;
  t2169 = -1.*t1524*t992;
  t2172 = t1500*t976;
  t2173 = t2169 + t2172;
  t2182 = t1500*t992;
  t2183 = t1524*t976;
  t2185 = t2182 + t2183;
  t1847 = 1.1305160000000008e-12*var2[17];
  t1849 = -0.03857500001589017*t1735;
  t1861 = t1763 + t1857;
  t1867 = -0.5031510000080001*t1861;
  t1889 = t1878 + t1881;
  t1894 = -3.367757e-6*t1889;
  t1895 = t1847 + t1849 + t1867 + t1894;
  t1943 = 2.826290000000002e-7*var2[17];
  t1946 = -2.18904205e-16*t1735;
  t1950 = t1746 + t1948;
  t1955 = -0.5031510000080001*t1950;
  t1973 = t1878 + t1956;
  t1975 = -0.038575000014*t1973;
  t1979 = t1943 + t1946 + t1955 + t1975;
  t2029 = t2021 + t1948;
  t2191 = -1.*t292*t1792*t967;
  t2197 = t1811*t2173;
  t2201 = t1824*t2185;
  t2206 = t2191 + t2197 + t2201;
  t2035 = t2034 + t1956;
  t2216 = -1.*t1910*t292*t967;
  t2220 = t1928*t2173;
  t2223 = t1932*t2185;
  t2225 = t2216 + t2220 + t2223;
  t2045 = -6.5e-11*t1735;
  t2048 = 1. + t2045;
  t2230 = -1.*t292*t1983*t967;
  t2232 = t1999*t2173;
  t2238 = t2009*t2185;
  t2243 = t2230 + t2232 + t2238;
  t2067 = t2065 + t1857;
  t2078 = -1.000000000049*t1735;
  t2081 = 1. + t2078;
  t2085 = t2034 + t1881;
  t2092 = -1.000000000016*t1735;
  t2095 = 1. + t2092;
  t2097 = t2065 + t1748;
  t2101 = t2021 + t1750;
  t2349 = -1.*t1524*t1242;
  t2354 = t1500*t1227;
  t2360 = t2349 + t2354;
  t2372 = t1500*t1242;
  t2377 = t1524*t1227;
  t2381 = t2372 + t2377;
  t2387 = t952*t292*t1792;
  t2393 = t1811*t2360;
  t2403 = t1824*t2381;
  t2419 = t2387 + t2393 + t2403;
  t2427 = t1910*t952*t292;
  t2428 = t1928*t2360;
  t2431 = t1932*t2381;
  t2437 = t2427 + t2428 + t2431;
  t2443 = t952*t292*t1983;
  t2449 = t1999*t2360;
  t2450 = t2009*t2381;
  t2452 = t2443 + t2449 + t2450;
  t2642 = Cos(var2[9]);
  t2648 = -1.*t2642;
  t2651 = 1. + t2648;
  t2662 = Sin(var2[9]);
  t2681 = -0.15121*t2662;
  t2691 = Cos(var2[12]);
  t2693 = -1.*t2691;
  t2696 = 1. + t2693;
  t2709 = Sin(var2[12]);
  t2710 = 0.15121*t2709;
  p_output1[0]=-1.*t292*t293*t358 + t292*t398*t407 + t431*t486 + t507*t530 + t539*t548 + t587*t685 + t711*t753 + t768*t794 - 0.03875*(t644*t711 + t615*t768 + 4.e-6*t587*t813) + 0.14871*(4.e-6*t644*t711 + 4.e-6*t768*t813 + t587*t819) + 0.80321*(-4.e-6*t587*t644 - 1.*t644*t768 + t711*t878) + var2[0] - 1.*t266*var3[0] - 5.*t126*t155*t257*var3[10] - 10.*t241*t244*t253*var3[20] - 10.*t200*t204*t234*var3[30] - 5.*t145*t150*t195*var3[40] - 1.*t142*t69*var3[50];
  p_output1[1]=t1008*t486 + t1058*t530 + t1097*t685 + t1117*t753 + t1134*t794 - 0.03875*(t1134*t615 + t1117*t644 + 4.e-6*t1097*t813) + 0.14871*(4.e-6*t1117*t644 + 4.e-6*t1134*t813 + t1097*t819) + 0.80321*(-4.e-6*t1097*t644 - 1.*t1134*t644 + t1117*t878) - 1.*t292*t548*t967 + t358*t976 + t407*t992 + var2[1] - 1.*t266*var3[1] - 5.*t126*t155*t257*var3[11] - 10.*t241*t244*t253*var3[21] - 10.*t200*t204*t234*var3[31] - 5.*t145*t150*t195*var3[41] - 1.*t142*t69*var3[51];
  p_output1[2]=t1227*t358 + t1242*t407 + t1255*t486 + t1267*t530 + t1299*t685 + t1323*t753 + t1356*t794 - 0.03875*(t1356*t615 + t1323*t644 + 4.e-6*t1299*t813) + 0.14871*(4.e-6*t1323*t644 + 4.e-6*t1356*t813 + t1299*t819) + 0.80321*(-4.e-6*t1299*t644 - 1.*t1356*t644 + t1323*t878) + t292*t548*t952 + var2[2] - 1.*t266*var3[2] - 5.*t126*t155*t257*var3[12] - 10.*t241*t244*t253*var3[22] - 10.*t200*t204*t234*var3[32] - 5.*t145*t150*t195*var3[42] - 1.*t142*t69*var3[52];
  p_output1[3]=t1664*t1678 + t1713*t1716 + t1789*t1831 + t1895*t1938 + t1979*t2019 - 0.148715*(t1831*t2029 + t1938*t2035 + t2019*t2048) - 0.038576*(t1831*t2067 + t1938*t2081 + t2019*t2085) - 0.80315*(t1831*t2095 + t1938*t2097 + t2019*t2101) - 1.*t1605*t292*t293 + t1529*t292*t398 + t1591*t539 + var2[0] - 1.*t266*var3[3] - 5.*t126*t155*t257*var3[13] - 10.*t241*t244*t253*var3[23] - 10.*t200*t204*t234*var3[33] - 5.*t145*t150*t195*var3[43] - 1.*t142*t69*var3[53];
  p_output1[4]=t1664*t2173 + t1713*t2185 + t1789*t2206 + t1895*t2225 + t1979*t2243 - 0.148715*(t2029*t2206 + t2035*t2225 + t2048*t2243) - 0.038576*(t2067*t2206 + t2081*t2225 + t2085*t2243) - 0.80315*(t2095*t2206 + t2097*t2225 + t2101*t2243) - 1.*t1591*t292*t967 + t1605*t976 + t1529*t992 + var2[1] - 1.*t266*var3[4] - 5.*t126*t155*t257*var3[14] - 10.*t241*t244*t253*var3[24] - 10.*t200*t204*t234*var3[34] - 5.*t145*t150*t195*var3[44] - 1.*t142*t69*var3[54];
  p_output1[5]=t1242*t1529 + t1227*t1605 + t1664*t2360 + t1713*t2381 + t1789*t2419 + t1895*t2437 + t1979*t2452 - 0.148715*(t2029*t2419 + t2035*t2437 + t2048*t2452) - 0.038576*(t2067*t2419 + t2081*t2437 + t2085*t2452) - 0.80315*(t2095*t2419 + t2097*t2437 + t2101*t2452) + t1591*t292*t952 + var2[2] - 1.*t266*var3[5] - 5.*t126*t155*t257*var3[15] - 10.*t241*t244*t253*var3[25] - 10.*t200*t204*t234*var3[35] - 5.*t145*t150*t195*var3[45] - 1.*t142*t69*var3[55];
  p_output1[6]=0.024028*t292*t967 - 0.002264*t976 + 0.00183*t992 + var2[1] - 1.*t266*var3[6] - 5.*t126*t155*t257*var3[16] - 10.*t241*t244*t253*var3[26] - 10.*t200*t204*t234*var3[36] - 5.*t145*t150*t195*var3[46] - 1.*t142*t69*var3[56];
  p_output1[7]=-0.002264*t1227 + 0.00183*t1242 - 0.024028*t292*t952 + var2[2] - 1.*t266*var3[7] - 5.*t126*t155*t257*var3[17] - 10.*t241*t244*t253*var3[27] - 10.*t200*t204*t234*var3[37] - 5.*t145*t150*t195*var3[47] - 1.*t142*t69*var3[57];
  p_output1[8]=ArcTan(t292*t398,t992) - 1.*t266*var3[8] - 5.*t126*t155*t257*var3[18] - 10.*t241*t244*t253*var3[28] - 10.*t200*t204*t234*var3[38] - 5.*t145*t150*t195*var3[48] - 1.*t142*t69*var3[58];
  p_output1[9]=0.15121*(t1242*t2642 + t1227*t2662) - 0.15121*(t1227*t2642 - 1.*t1242*t2662) + t1227*(-0.15121*t2651 + t2681) + t1242*(0.15121*t2651 + t2681) + 0.15121*(t1242*t2691 + t1227*t2709) - 0.15121*(t1227*t2691 - 1.*t1242*t2709) - 1.*t1242*(-0.15121*t2696 + t2710) - 1.*t1227*(0.15121*t2696 + t2710) - 1.*t266*var3[9] - 5.*t126*t155*t257*var3[19] - 10.*t241*t244*t253*var3[29] - 10.*t200*t204*t234*var3[39] - 5.*t145*t150*t195*var3[49] - 1.*t142*t69*var3[59];
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

#include "y_position_DiagonalStance1.hh"

namespace DiagonalStance1
{

void y_position_DiagonalStance1_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
