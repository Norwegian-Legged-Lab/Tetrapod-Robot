/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:46:24 GMT+02:00
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
  double t275;
  double t105;
  double t277;
  double t355;
  double t320;
  double t337;
  double t362;
  double t240;
  double t338;
  double t366;
  double t377;
  double t286;
  double t399;
  double t404;
  double t408;
  double t393;
  double t443;
  double t444;
  double t446;
  double t451;
  double t463;
  double t471;
  double t409;
  double t413;
  double t421;
  double t632;
  double t642;
  double t646;
  double t715;
  double t721;
  double t725;
  double t694;
  double t695;
  double t701;
  double t270;
  double t297;
  double t301;
  double t756;
  double t761;
  double t392;
  double t422;
  double t424;
  double t440;
  double t478;
  double t482;
  double t504;
  double t508;
  double t509;
  double t495;
  double t499;
  double t500;
  double t648;
  double t655;
  double t659;
  double t792;
  double t793;
  double t800;
  double t770;
  double t776;
  double t780;
  double t729;
  double t730;
  double t737;
  double t1110;
  double t1117;
  double t1118;
  double t1090;
  double t1091;
  double t1094;
  double t1161;
  double t1162;
  double t1165;
  double t821;
  double t824;
  double t836;
  double t839;
  double t840;
  double t847;
  double t853;
  double t854;
  double t855;
  double t961;
  double t962;
  double t963;
  double t982;
  double t986;
  double t989;
  double t1019;
  double t1020;
  double t1026;
  double t1041;
  double t1042;
  double t1061;
  double t1063;
  double t1070;
  double t1071;
  double t1126;
  double t1128;
  double t1136;
  double t1141;
  double t1142;
  double t1145;
  double t1310;
  double t1315;
  double t1316;
  double t1295;
  double t1302;
  double t1303;
  double t1336;
  double t1338;
  double t1341;
  double t1343;
  double t1344;
  double t1345;
  double t1346;
  double t1348;
  double t1353;
  double t1335;
  double t1342;
  double t1354;
  double t1355;
  double t1334;
  double t1356;
  double t1359;
  double t1363;
  double t1364;
  double t1365;
  double t1366;
  double t1367;
  double t1373;
  double t1376;
  double t1377;
  double t1378;
  double t1380;
  double t1424;
  double t1439;
  double t1442;
  double t1443;
  double t1446;
  double t748;
  double t749;
  double t750;
  double t1475;
  double t1476;
  double t1482;
  double t1462;
  double t1465;
  double t1466;
  double t1362;
  double t1454;
  double t1455;
  double t1499;
  double t1505;
  double t1508;
  double t1692;
  double t1700;
  double t1701;
  double t1509;
  double t1510;
  double t1517;
  double t1519;
  double t1546;
  double t1547;
  double t1549;
  double t1550;
  double t1606;
  double t1608;
  double t1616;
  double t1617;
  double t1628;
  double t1632;
  double t1633;
  double t1636;
  double t1648;
  double t1652;
  double t1653;
  double t1654;
  double t1677;
  double t1678;
  double t1679;
  double t1682;
  double t542;
  double t544;
  double t569;
  double t1852;
  double t1853;
  double t1854;
  double t1856;
  double t1857;
  double t518;
  double t521;
  double t531;
  double t1858;
  double t1859;
  double t1861;
  double t1873;
  double t1875;
  double t1876;
  double t579;
  double t590;
  double t605;
  double t1851;
  double t1946;
  double t1947;
  double t1949;
  double t1950;
  double t1951;
  double t1952;
  double t1959;
  double t1960;
  double t1961;
  double t1948;
  double t1953;
  double t1954;
  double t1958;
  double t1965;
  double t1966;
  double t1968;
  double t1969;
  double t1970;
  double t622;
  double t671;
  double t682;
  double t727;
  double t738;
  double t744;
  double t2031;
  double t2032;
  double t2033;
  double t2030;
  double t2035;
  double t2036;
  double t2038;
  double t2039;
  double t2044;
  double t2045;
  double t2046;
  double t2037;
  double t2040;
  double t2041;
  double t2043;
  double t2047;
  double t2048;
  double t2050;
  double t2051;
  double t2052;
  double t1703;
  double t1718;
  double t1719;
  double t1750;
  double t1751;
  double t1772;
  double t1773;
  double t1802;
  double t1814;
  double t1815;
  double t2113;
  double t2114;
  double t2115;
  double t1855;
  double t1870;
  double t1883;
  double t1884;
  double t2124;
  double t2125;
  double t2126;
  double t1896;
  double t1897;
  double t2136;
  double t2137;
  double t2138;
  double t1907;
  double t1908;
  double t2140;
  double t2141;
  double t2142;
  double t2150;
  double t2151;
  double t2152;
  double t1923;
  double t2171;
  double t1925;
  double t1932;
  double t1933;
  double t2157;
  double t2158;
  double t2159;
  double t1957;
  double t1976;
  double t2233;
  double t1988;
  double t1996;
  double t1997;
  double t2010;
  double t2016;
  double t2017;
  double t2042;
  double t2056;
  double t2057;
  double t2070;
  double t2071;
  double t2079;
  double t2089;
  double t2096;
  double t2209;
  double t2210;
  double t2217;
  double t2218;
  double t2169;
  double t2170;
  double t2176;
  double t2179;
  double t2188;
  double t2190;
  double t2197;
  double t2198;
  double t2366;
  double t2367;
  double t2259;
  double t2262;
  double t2383;
  double t2385;
  double t2234;
  double t2426;
  double t2409;
  double t2410;
  double t2411;
  double t2413;
  double t2414;
  double t2415;
  double t2246;
  double t2247;
  double t2242;
  double t2377;
  double t2378;
  double t2350;
  double t2275;
  double t2276;
  double t2395;
  double t2396;
  double t2304;
  double t2284;
  double t2285;
  double t2379;
  double t2397;
  double t2446;
  double t2447;
  double t2453;
  double t2517;
  double t2519;
  double t2546;
  double t2564;
  double t2480;
  double t2484;
  double t2487;
  double t2604;
  double t2605;
  t275 = Cos(var1[9]);
  t105 = Cos(var1[4]);
  t277 = Sin(var1[4]);
  t355 = Cos(var1[10]);
  t320 = Cos(var1[11]);
  t337 = Sin(var1[10]);
  t362 = Sin(var1[11]);
  t240 = Sin(var1[9]);
  t338 = t320*t337;
  t366 = -1.*t355*t362;
  t377 = t338 + t366;
  t286 = Sin(var1[5]);
  t399 = t355*t320;
  t404 = t337*t362;
  t408 = t399 + t404;
  t393 = Cos(var1[5]);
  t443 = -1.*t320*t337;
  t444 = t355*t362;
  t446 = t443 + t444;
  t451 = t393*t446;
  t463 = t240*t408*t286;
  t471 = t451 + t463;
  t409 = t393*t408;
  t413 = t240*t377*t286;
  t421 = t409 + t413;
  t632 = -1.*t355*t320;
  t642 = -1.*t337*t362;
  t646 = t632 + t642;
  t715 = t275*t377*t277;
  t721 = t105*t421;
  t725 = t715 + t721;
  t694 = t275*t408*t277;
  t695 = t105*t471;
  t701 = t694 + t695;
  t270 = t105*t240;
  t297 = t275*t277*t286;
  t301 = t270 + t297;
  t756 = Sin(var1[3]);
  t761 = Cos(var1[3]);
  t392 = t275*t105*t377;
  t422 = -1.*t277*t421;
  t424 = t392 + t422;
  t440 = t275*t105*t408;
  t478 = -1.*t277*t471;
  t482 = t440 + t478;
  t504 = t393*t240*t377;
  t508 = -1.*t408*t286;
  t509 = t504 + t508;
  t495 = t393*t240*t408;
  t499 = -1.*t446*t286;
  t500 = t495 + t499;
  t648 = t393*t646;
  t655 = t240*t446*t286;
  t659 = t648 + t655;
  t792 = -1.*t393*t240*t408;
  t793 = t446*t286;
  t800 = t792 + t793;
  t770 = -1.*t393*t240*t377;
  t776 = t408*t286;
  t780 = t770 + t776;
  t729 = t393*t377;
  t730 = t240*t646*t286;
  t737 = t729 + t730;
  t1110 = t761*t780;
  t1117 = -1.*t756*t424;
  t1118 = t1110 + t1117;
  t1090 = t761*t800;
  t1091 = -1.*t756*t482;
  t1094 = t1090 + t1091;
  t1161 = t275*t761*t393;
  t1162 = -1.*t756*t301;
  t1165 = t1161 + t1162;
  t821 = -1.*t240*t277;
  t824 = t275*t105*t286;
  t836 = t821 + t824;
  t839 = -1.*t275*t377*t277;
  t840 = -1.*t105*t421;
  t847 = t839 + t840;
  t853 = -1.*t275*t408*t277;
  t854 = -1.*t105*t471;
  t855 = t853 + t854;
  t961 = t275*t105;
  t962 = -1.*t240*t277*t286;
  t963 = t961 + t962;
  t982 = -1.*t105*t240*t377;
  t986 = -1.*t275*t377*t277*t286;
  t989 = t982 + t986;
  t1019 = -1.*t105*t240*t408;
  t1020 = -1.*t275*t408*t277*t286;
  t1026 = t1019 + t1020;
  t1041 = -1.*t393*t240*t446;
  t1042 = t646*t286;
  t1061 = t1041 + t1042;
  t1063 = t275*t105*t446;
  t1070 = -1.*t277*t659;
  t1071 = t1063 + t1070;
  t1126 = -1.*t393*t240*t646;
  t1128 = t377*t286;
  t1136 = t1126 + t1128;
  t1141 = t275*t105*t646;
  t1142 = -1.*t277*t737;
  t1145 = t1141 + t1142;
  t1310 = t756*t780;
  t1315 = t761*t424;
  t1316 = t1310 + t1315;
  t1295 = t756*t800;
  t1302 = t761*t482;
  t1303 = t1295 + t1302;
  t1336 = -0.0641*t320;
  t1338 = -0.28*t362;
  t1341 = t1336 + t1338;
  t1343 = -1.*t320;
  t1344 = 1. + t1343;
  t1345 = -0.575*t1344;
  t1346 = -0.295*t320;
  t1348 = -0.0641*t362;
  t1353 = t1345 + t1346 + t1348;
  t1335 = 0.325*t337;
  t1342 = t355*t1341;
  t1354 = t337*t1353;
  t1355 = t1335 + t1342 + t1354;
  t1334 = 0.068*t240;
  t1356 = t275*t1355;
  t1359 = t1334 + t1356;
  t1363 = -1.*t355;
  t1364 = 1. + t1363;
  t1365 = -0.325*t1364;
  t1366 = -1.*t337*t1341;
  t1367 = t355*t1353;
  t1373 = t1365 + t1366 + t1367;
  t1376 = t393*t1373;
  t1377 = -1.*t275;
  t1378 = 1. + t1377;
  t1380 = 0.1575*t1378;
  t1424 = 0.2255*t275;
  t1439 = -1.*t240*t1355;
  t1442 = t1380 + t1424 + t1439;
  t1443 = -1.*t1442*t286;
  t1446 = t1376 + t1443;
  t748 = t240*t277;
  t749 = -1.*t275*t105*t286;
  t750 = t748 + t749;
  t1475 = t105*t1359;
  t1476 = -1.*t277*t1446;
  t1482 = t1475 + t1476;
  t1462 = t1359*t277;
  t1465 = t105*t1446;
  t1466 = t1462 + t1465;
  t1362 = -1.*t1359*t277;
  t1454 = -1.*t105*t1446;
  t1455 = t1362 + t1454;
  t1499 = t393*t1442;
  t1505 = t1373*t286;
  t1508 = t1499 + t1505;
  t1692 = -1.*t393*t1442;
  t1700 = -1.*t1373*t286;
  t1701 = t1692 + t1700;
  t1509 = t275*t393*t1508;
  t1510 = t750*t1466;
  t1517 = t301*t1482;
  t1519 = t1509 + t1510 + t1517;
  t1546 = -1.*t1508*t780;
  t1547 = -1.*t1466*t725;
  t1549 = -1.*t1482*t424;
  t1550 = t1546 + t1547 + t1549;
  t1606 = t1508*t780;
  t1608 = t1466*t725;
  t1616 = t1482*t424;
  t1617 = t1606 + t1608 + t1616;
  t1628 = -1.*t1508*t800;
  t1632 = -1.*t1466*t701;
  t1633 = -1.*t1482*t482;
  t1636 = t1628 + t1632 + t1633;
  t1648 = -1.*t275*t393*t1508;
  t1652 = -1.*t750*t1466;
  t1653 = -1.*t301*t1482;
  t1654 = t1648 + t1652 + t1653;
  t1677 = t1508*t800;
  t1678 = t1466*t701;
  t1679 = t1482*t482;
  t1682 = t1677 + t1678 + t1679;
  t542 = -1.*t240*t377*t277;
  t544 = t275*t105*t377*t286;
  t569 = t542 + t544;
  t1852 = -0.068*t240;
  t1853 = -1.*t275*t1355;
  t1854 = t1852 + t1853;
  t1856 = 0.068*t275;
  t1857 = t1856 + t1439;
  t518 = t275*t277;
  t521 = t105*t240*t286;
  t531 = t518 + t521;
  t1858 = t1857*t277;
  t1859 = -1.*t105*t1854*t286;
  t1861 = t1858 + t1859;
  t1873 = t105*t1857;
  t1875 = t1854*t277*t286;
  t1876 = t1873 + t1875;
  t579 = -1.*t240*t408*t277;
  t590 = t275*t105*t408*t286;
  t605 = t579 + t590;
  t1851 = Power(t393,2);
  t1946 = 0.325*t355;
  t1947 = t1946 + t1366 + t1367;
  t1949 = -0.325*t337;
  t1950 = -1.*t355*t1341;
  t1951 = -1.*t337*t1353;
  t1952 = t1949 + t1950 + t1951;
  t1959 = t393*t1952;
  t1960 = t240*t1947*t286;
  t1961 = t1959 + t1960;
  t1948 = -1.*t393*t240*t1947;
  t1953 = t1952*t286;
  t1954 = t1948 + t1953;
  t1958 = t275*t1947*t277;
  t1965 = t105*t1961;
  t1966 = t1958 + t1965;
  t1968 = t275*t105*t1947;
  t1969 = -1.*t277*t1961;
  t1970 = t1968 + t1969;
  t622 = t275*t446*t277;
  t671 = t105*t659;
  t682 = t622 + t671;
  t727 = t275*t646*t277;
  t738 = t105*t737;
  t744 = t727 + t738;
  t2031 = -0.28*t320;
  t2032 = 0.0641*t362;
  t2033 = t2031 + t2032;
  t2030 = t337*t1341;
  t2035 = t355*t2033;
  t2036 = t2030 + t2035;
  t2038 = -1.*t337*t2033;
  t2039 = t1342 + t2038;
  t2044 = t393*t2039;
  t2045 = t240*t2036*t286;
  t2046 = t2044 + t2045;
  t2037 = -1.*t393*t240*t2036;
  t2040 = t2039*t286;
  t2041 = t2037 + t2040;
  t2043 = t275*t2036*t277;
  t2047 = t105*t2046;
  t2048 = t2043 + t2047;
  t2050 = t275*t105*t2036;
  t2051 = -1.*t277*t2046;
  t2052 = t2050 + t2051;
  t1703 = -1.*t275*t286*t1508;
  t1718 = -1.*t1508*t421;
  t1719 = -1.*t1446*t780;
  t1750 = t1508*t421;
  t1751 = t1446*t780;
  t1772 = -1.*t1446*t800;
  t1773 = -1.*t1508*t471;
  t1802 = t275*t286*t1508;
  t1814 = t1446*t800;
  t1815 = t1508*t471;
  t2113 = t240*t1359;
  t2114 = -1.*t275*t286*t1446;
  t2115 = t2113 + t2114 + t1509;
  t1855 = t275*t1851*t1854;
  t1870 = -1.*t393*t240*t1508;
  t1883 = t275*t393*t377*t1508;
  t1884 = -1.*t393*t1854*t780;
  t2124 = -1.*t275*t1359*t377;
  t2125 = -1.*t1446*t421;
  t2126 = t2124 + t2125 + t1546;
  t1896 = -1.*t275*t393*t377*t1508;
  t1897 = t393*t1854*t780;
  t2136 = t275*t1359*t377;
  t2137 = t1446*t421;
  t2138 = t2136 + t2137 + t1606;
  t1907 = t275*t393*t408*t1508;
  t1908 = -1.*t393*t1854*t800;
  t2140 = -1.*t275*t1359*t408;
  t2141 = -1.*t1446*t471;
  t2142 = t2140 + t1628 + t2141;
  t2150 = -1.*t240*t1359;
  t2151 = t275*t286*t1446;
  t2152 = t2150 + t2151 + t1648;
  t1923 = -1.*t275*t1851*t1854;
  t2171 = Power(t286,2);
  t1925 = t393*t240*t1508;
  t1932 = -1.*t275*t393*t408*t1508;
  t1933 = t393*t1854*t800;
  t2157 = t275*t1359*t408;
  t2158 = t1446*t471;
  t2159 = t2157 + t1677 + t2158;
  t1957 = t275*t393*t1954;
  t1976 = -1.*t1954*t780;
  t2233 = Power(t275,2);
  t1988 = t1954*t780;
  t1996 = -1.*t1954*t800;
  t1997 = -1.*t1508*t1061;
  t2010 = -1.*t275*t393*t1954;
  t2016 = t1954*t800;
  t2017 = t1508*t1061;
  t2042 = t275*t393*t2041;
  t2056 = -1.*t1508*t1136;
  t2057 = -1.*t2041*t780;
  t2070 = t1508*t1136;
  t2071 = t2041*t780;
  t2079 = -1.*t2041*t800;
  t2089 = -1.*t275*t393*t2041;
  t2096 = t2041*t800;
  t2209 = -1.*t275*t1359;
  t2210 = -1.*t240*t1857;
  t2217 = -1.*t240*t1359*t408;
  t2218 = t275*t1857*t408;
  t2169 = t275*t1359;
  t2170 = t240*t1857;
  t2176 = t240*t1359*t377;
  t2179 = -1.*t275*t1857*t377;
  t2188 = -1.*t240*t1359*t377;
  t2190 = t275*t1857*t377;
  t2197 = t240*t1359*t408;
  t2198 = -1.*t275*t1857*t408;
  t2366 = -1.*t275*t1442;
  t2367 = t2150 + t2366;
  t2259 = t275*t1359*t446;
  t2262 = t2233*t1947*t408;
  t2383 = t275*t1442;
  t2385 = t2113 + t2383;
  t2234 = -1.*t2233*t1947*t377;
  t2426 = Power(t240,2);
  t2409 = -1.*t1373*t446;
  t2410 = t240*t1442*t408;
  t2411 = t2409 + t2140 + t2410;
  t2413 = -1.*t240*t1442*t377;
  t2414 = t1373*t408;
  t2415 = t2136 + t2413 + t2414;
  t2246 = -1.*t275*t1359*t446;
  t2247 = -1.*t2233*t1947*t408;
  t2242 = t2233*t1947*t377;
  t2377 = t1373*t446;
  t2378 = -1.*t240*t1442*t408;
  t2350 = t2233*t2036*t408;
  t2275 = -1.*t2233*t2036*t377;
  t2276 = -1.*t275*t1359*t646;
  t2395 = t240*t1442*t377;
  t2396 = -1.*t1373*t408;
  t2304 = -1.*t2233*t2036*t408;
  t2284 = t2233*t2036*t377;
  t2285 = t275*t1359*t646;
  t2379 = t2377 + t2157 + t2378;
  t2397 = t2124 + t2395 + t2396;
  t2446 = -1.*t1952*t446;
  t2447 = -1.*t1373*t646;
  t2453 = t1952*t408;
  t2517 = t1355*t377;
  t2519 = t2517 + t2414;
  t2546 = -1.*t1355*t408;
  t2564 = t2409 + t2546;
  t2480 = -1.*t2039*t446;
  t2484 = t1373*t377;
  t2487 = t2039*t408;
  t2604 = -0.325*t362;
  t2605 = -1.*t1353*t362;
  p_output1[0]=t424*var2[0] + t301*var2[1] + t482*var2[2];
  p_output1[1]=t105*t509*var2[0] - 1.*t105*t275*t393*var2[1] + t105*t500*var2[2];
  p_output1[2]=t569*var2[0] + t531*var2[1] + t605*var2[2];
  p_output1[3]=t701*var2[0] + t682*var2[2];
  p_output1[4]=t744*var2[0] + t725*var2[2];
  p_output1[5]=t725;
  p_output1[6]=t750;
  p_output1[7]=t701;
  p_output1[8]=(-1.*t424*t761 - 1.*t756*t780)*var2[0] + (-1.*t275*t393*t756 - 1.*t301*t761)*var2[1] + (-1.*t482*t761 - 1.*t756*t800)*var2[2];
  p_output1[9]=-1.*t756*t847*var2[0] - 1.*t756*t836*var2[1] - 1.*t756*t855*var2[2];
  p_output1[10]=(t277*t509*t756 + t421*t761)*var2[0] + (-1.*t275*t277*t393*t756 - 1.*t275*t286*t761)*var2[1] + (t277*t500*t756 + t471*t761)*var2[2];
  p_output1[11]=(-1.*t275*t377*t393*t761 - 1.*t756*t989)*var2[0] + (-1.*t240*t393*t761 - 1.*t756*t963)*var2[1] + (-1.*t1026*t756 - 1.*t275*t393*t408*t761)*var2[2];
  p_output1[12]=t1094*var2[0] + (-1.*t1071*t756 + t1061*t761)*var2[2];
  p_output1[13]=(-1.*t1145*t756 + t1136*t761)*var2[0] + t1118*var2[2];
  p_output1[14]=t1118;
  p_output1[15]=t1165;
  p_output1[16]=t1094;
  p_output1[17]=t1118*var2[0] + t1165*var2[1] + t1094*var2[2];
  p_output1[18]=t761*t847*var2[0] + t761*t836*var2[1] + t761*t855*var2[2];
  p_output1[19]=(t421*t756 - 1.*t277*t509*t761)*var2[0] + (-1.*t275*t286*t756 + t275*t277*t393*t761)*var2[1] + (t471*t756 - 1.*t277*t500*t761)*var2[2];
  p_output1[20]=(-1.*t275*t377*t393*t756 + t761*t989)*var2[0] + (-1.*t240*t393*t756 + t761*t963)*var2[1] + (-1.*t275*t393*t408*t756 + t1026*t761)*var2[2];
  p_output1[21]=t1303*var2[0] + (t1061*t756 + t1071*t761)*var2[2];
  p_output1[22]=(t1136*t756 + t1145*t761)*var2[0] + t1316*var2[2];
  p_output1[23]=t1316;
  p_output1[24]=t275*t393*t756 + t301*t761;
  p_output1[25]=t1303;
  p_output1[26]=(t1682*t301 + t1654*t482 + t701*(-1.*t1455*t301 - 1.*t1466*t301 - 1.*t1482*t750 - 1.*t1482*t836) + t750*(t1455*t482 + t1466*t482 + t1482*t701 + t1482*t855))*var2[0] + (t1636*t424 + t1617*t482 + t701*(t1455*t424 + t1466*t424 + t1482*t725 + t1482*t847) + t725*(-1.*t1455*t482 - 1.*t1466*t482 - 1.*t1482*t701 - 1.*t1482*t855))*var2[1] + (t1550*t301 + t1519*t424 + t725*(t1455*t301 + t1466*t301 + t1482*t750 + t1482*t836) + t750*(-1.*t1455*t424 - 1.*t1466*t424 - 1.*t1482*t725 - 1.*t1482*t847))*var2[2];
  p_output1[27]=(-1.*t105*t1682*t275*t393 + t105*t1654*t500 + (t1814 + t1815 - 1.*t1701*t277*t482 + t105*t1466*t500 - 1.*t1482*t277*t500 + t105*t1701*t701)*t750 + t701*(t1802 + t1701*t277*t301 - 1.*t1446*t275*t393 + t105*t1466*t275*t393 - 1.*t1482*t275*t277*t393 - 1.*t105*t1701*t750))*var2[0] + (t105*t1617*t500 + t105*t1636*t509 + (t1772 + t1773 + t1701*t277*t482 - 1.*t105*t1466*t500 + t1482*t277*t500 - 1.*t105*t1701*t701)*t725 + t701*(t1750 + t1751 - 1.*t1701*t277*t424 + t105*t1466*t509 - 1.*t1482*t277*t509 + t105*t1701*t725))*var2[1] + (-1.*t105*t1550*t275*t393 + t105*t1519*t509 + (t1718 + t1719 + t1701*t277*t424 - 1.*t105*t1466*t509 + t1482*t277*t509 - 1.*t105*t1701*t725)*t750 + t725*(t1703 - 1.*t1701*t277*t301 + t1446*t275*t393 - 1.*t105*t1466*t275*t393 + t1482*t275*t277*t393 + t105*t1701*t750))*var2[2];
  p_output1[28]=(t1682*t531 + t1654*t605 + (t1026*t1482 + t1932 + t1933 + t1876*t482 + t1466*t605 + t1861*t701)*t750 + t701*(t1923 + t1925 - 1.*t1876*t301 - 1.*t1466*t531 - 1.*t1861*t750 - 1.*t1482*t963))*var2[0] + (t1636*t569 + t1617*t605 + (-1.*t1026*t1482 + t1907 + t1908 - 1.*t1876*t482 - 1.*t1466*t605 - 1.*t1861*t701)*t725 + t701*(t1896 + t1897 + t1876*t424 + t1466*t569 + t1861*t725 + t1482*t989))*var2[1] + (t1550*t531 + t1519*t569 + t725*(t1855 + t1870 + t1876*t301 + t1466*t531 + t1861*t750 + t1482*t963) + t750*(t1883 + t1884 - 1.*t1876*t424 - 1.*t1466*t569 - 1.*t1861*t725 - 1.*t1482*t989))*var2[2];
  p_output1[29]=(t1654*t682 + (t1071*t1482 + t2016 + t2017 + t1970*t482 + t1466*t682 + t1966*t701)*t750 + t701*(t2010 - 1.*t1970*t301 - 1.*t1966*t750))*var2[0] + (t1617*t682 + t1636*t701 + (-1.*t1071*t1482 + t1996 + t1997 - 1.*t1970*t482 - 1.*t1466*t682 - 1.*t1966*t701)*t725 + t701*(t1677 + t1678 + t1679 + t1988 + t1970*t424 + t1966*t725))*var2[1] + (t1519*t701 + (t1628 + t1632 + t1633 + t1976 - 1.*t1970*t424 - 1.*t1966*t725)*t750 + t725*(t1957 + t1970*t301 + t1966*t750))*var2[2];
  p_output1[30]=(t1654*t725 + (t1606 + t1608 + t1616 + t2096 + t2052*t482 + t2048*t701)*t750 + t701*(t2089 - 1.*t2052*t301 - 1.*t2048*t750))*var2[0] + (t1617*t725 + (t1546 + t1547 + t1549 + t2079 - 1.*t2052*t482 - 1.*t2048*t701)*t725 + t1636*t744 + t701*(t1145*t1482 + t2070 + t2071 + t2052*t424 + t2048*t725 + t1466*t744))*var2[1] + (t1519*t744 + (-1.*t1145*t1482 + t2056 + t2057 - 1.*t2052*t424 - 1.*t2048*t725 - 1.*t1466*t744)*t750 + t725*(t2042 + t2052*t301 + t2048*t750))*var2[2];
  p_output1[31]=t1654*t701 + t1682*t750;
  p_output1[32]=t1617*t701 + t1636*t725;
  p_output1[33]=t1519*t725 + t1550*t750;
  p_output1[34]=(-1.*t2159*t275*t286 + t2152*t471 + t275*t393*(t1814 + t1815 + t1701*t471 + t1446*t500) + (t1802 + t1701*t275*t286)*t800)*var2[0] + (t2142*t421 + t2138*t471 + (t1772 + t1773 - 1.*t1701*t471 - 1.*t1446*t500)*t780 + (t1750 + t1751 + t1701*t421 + t1446*t509)*t800)*var2[1] + (-1.*t2126*t275*t286 + t2115*t421 + t275*t393*(t1718 + t1719 - 1.*t1701*t421 - 1.*t1446*t509) + (t1703 - 1.*t1701*t275*t286)*t780)*var2[2];
  p_output1[35]=(-1.*t2159*t240*t393 - 1.*t2152*t275*t393*t408 + t275*t393*(t1932 + t1933 + t2217 + t2218 + t1446*t275*t286*t408 - 1.*t1854*t286*t471) + (t1923 + t1925 + t2209 + t2210 - 1.*t1854*t2171*t275 - 1.*t1446*t240*t286)*t800)*var2[0] + (-1.*t2142*t275*t377*t393 - 1.*t2138*t275*t393*t408 + (t1907 + t1908 + t2197 + t2198 - 1.*t1446*t275*t286*t408 + t1854*t286*t471)*t780 + (t1896 + t1897 + t2188 + t2190 + t1446*t275*t286*t377 - 1.*t1854*t286*t421)*t800)*var2[1] + (-1.*t2126*t240*t393 - 1.*t2115*t275*t377*t393 + t275*t393*(t1883 + t1884 + t2176 + t2179 - 1.*t1446*t275*t286*t377 + t1854*t286*t421) + (t1855 + t1870 + t2169 + t2170 + t1854*t2171*t275 + t1446*t240*t286)*t780)*var2[2];
  p_output1[36]=(t1061*t2152 + t275*t393*(t2016 + t2017 + t2259 + t2262 + t1961*t471 + t1446*t659) + (t2010 - 1.*t1947*t240*t275 + t1961*t275*t286)*t800)*var2[0] + (t1061*t2138 + (t1996 + t1997 + t2246 + t2247 - 1.*t1961*t471 - 1.*t1446*t659)*t780 + t2142*t800 + (t1677 + t1988 + t2157 + t2158 + t2242 + t1961*t421)*t800)*var2[1] + (t275*t393*(t1628 + t1976 + t2140 + t2141 + t2234 - 1.*t1961*t421) + (t1957 + t1947*t240*t275 - 1.*t1961*t275*t286)*t780 + t2115*t800)*var2[2];
  p_output1[37]=(t275*t393*(t1606 + t2096 + t2136 + t2137 + t2350 + t2046*t471) + t2152*t780 + (t2089 - 1.*t2036*t240*t275 + t2046*t275*t286)*t800)*var2[0] + (t1136*t2142 + t2138*t780 + (t1546 + t2079 + t2124 + t2125 + t2304 - 1.*t2046*t471)*t780 + (t2070 + t2071 + t2284 + t2285 + t2046*t421 + t1446*t737)*t800)*var2[1] + (t1136*t2115 + t275*t393*(t2056 + t2057 + t2275 + t2276 - 1.*t2046*t421 - 1.*t1446*t737) + (t2042 + t2036*t240*t275 - 1.*t2046*t275*t286)*t780)*var2[2];
  p_output1[38]=t2159*t275*t393 + t2152*t800;
  p_output1[39]=t2142*t780 + t2138*t800;
  p_output1[40]=t2126*t275*t393 + t2115*t780;
  p_output1[41]=(t2379*t275 - 1.*t2367*t240*t408 + t275*(t2209 + t2210 + t1442*t240 - 1.*t1854*t275)*t408 + t240*(t2217 + t2218 - 1.*t1854*t240*t408 - 1.*t1442*t275*t408))*var2[0] + (-1.*t240*t2411*t377 - 1.*t240*t2415*t408 + t275*(t2188 + t2190 - 1.*t1854*t240*t377 - 1.*t1442*t275*t377)*t408 + t275*t377*(t2197 + t2198 + t1854*t240*t408 + t1442*t275*t408))*var2[1] + (t2397*t275 - 1.*t2385*t240*t377 + t275*(t2169 + t2170 - 1.*t1442*t240 + t1854*t275)*t377 + t240*(t2176 + t2179 + t1854*t240*t377 + t1442*t275*t377))*var2[2];
  p_output1[42]=(t2367*t275*t446 + t240*(t2259 + t2262 + t1947*t2426*t408 + t1952*t446 - 1.*t1442*t240*t446 + t1373*t646))*var2[0] + (t2411*t275*t408 + t275*(t2157 + t2242 + t2377 + t2378 + t2453 + t1947*t2426*t377)*t408 + t2415*t275*t446 + t275*t377*(t2246 + t2247 + t2446 + t2447 - 1.*t1947*t2426*t408 + t1442*t240*t446))*var2[1] + (t2385*t275*t408 + t240*(t2140 + t2234 + t2409 + t2410 - 1.*t1947*t2426*t377 - 1.*t1952*t408))*var2[2];
  p_output1[43]=(t2367*t275*t377 + t240*(t2136 + t2350 + t2413 + t2414 + t2036*t2426*t408 + t2039*t446))*var2[0] + (t2415*t275*t377 + t275*t377*(t2124 + t2304 + t2395 + t2396 + t2480 - 1.*t2036*t2426*t408) + t2411*t275*t646 + t275*t408*(t2284 + t2285 + t2484 + t2487 + t2036*t2426*t377 - 1.*t1442*t240*t646))*var2[1] + (t2385*t275*t646 + t240*(t2275 + t2276 - 1.*t1373*t377 - 1.*t2036*t2426*t377 - 1.*t2039*t408 + t1442*t240*t646))*var2[2];
  p_output1[44]=t2379*t240 + t2367*t275*t408;
  p_output1[45]=t2411*t275*t377 + t2415*t275*t408;
  p_output1[46]=t2397*t240 + t2385*t275*t377;
  p_output1[47]=(-0.1575*t408 - 0.2255*t646)*var2[0] + (t2564*t446 + (t2377 + t2453 + t1947*t377 + t1355*t408)*t446 + t408*(t2446 + t2447 - 1.*t1947*t408 - 1.*t1355*t446) + t2519*t646)*var2[1] + 0.068*t446*var2[2];
  p_output1[48]=(-0.2255*t408 - 0.1575*t646)*var2[0] + (t2564*t377 + t2519*t408 + t408*(t2396 + t2480 - 1.*t1355*t377 - 1.*t2036*t408) + t446*(t2484 + t2487 + t2036*t377 + t1355*t646))*var2[1] + 0.068*t377*var2[2];
  p_output1[49]=-0.1575*t377 - 0.2255*t446;
  p_output1[50]=t2564*t408 + t2519*t446;
  p_output1[51]=0.068*t408;
  p_output1[52]=(-0.325*t320 - 1.*t1353*t320 - 1.*t2033*t320)*var2[0] + (t2604 + t2605 - 1.*t2033*t362)*var2[2];
  p_output1[53]=t2604 + t2605 - 1.*t1341*t320;
  p_output1[54]=0.325*t320 + t1353*t320 - 1.*t1341*t362;
  p_output1[55]=-0.0641;
  p_output1[56]=-0.28;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 57, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRlFoot_vec_DiagonalStance.hh"

namespace DiagonalStance
{

void J_fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
