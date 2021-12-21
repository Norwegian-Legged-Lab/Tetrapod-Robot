/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:11:16 GMT+01:00
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
  double t874;
  double t875;
  double t885;
  double t570;
  double t620;
  double t630;
  double t985;
  double t766;
  double t994;
  double t918;
  double t936;
  double t1022;
  double t1058;
  double t1083;
  double t1212;
  double t1150;
  double t1159;
  double t1163;
  double t1173;
  double t1186;
  double t1190;
  double t1194;
  double t1235;
  double t1237;
  double t1250;
  double t1262;
  double t1267;
  double t671;
  double t1306;
  double t1379;
  double t1318;
  double t1332;
  double t1334;
  double t1336;
  double t1337;
  double t1342;
  double t1348;
  double t1351;
  double t1361;
  double t1366;
  double t1302;
  double t1382;
  double t1387;
  double t1391;
  double t1398;
  double t1404;
  double t1406;
  double t1409;
  double t1411;
  double t1415;
  double t1416;
  double t1104;
  double t1139;
  double t1217;
  double t1222;
  double t852;
  double t1282;
  double t1291;
  double t1294;
  double t1509;
  double t1539;
  double t1551;
  double t1563;
  double t1576;
  double t1585;
  double t1588;
  double t1607;
  double t1613;
  double t1633;
  double t1642;
  double t1655;
  double t1658;
  double t1665;
  double t1666;
  double t1667;
  double t1670;
  double t1435;
  double t1715;
  double t1714;
  double t1718;
  double t1728;
  double t1737;
  double t1738;
  double t1739;
  double t1744;
  double t1752;
  double t1758;
  double t1761;
  double t1763;
  double t1767;
  double t1774;
  double t1778;
  double t1781;
  double t1782;
  double t1789;
  double t1791;
  double t1792;
  double t1805;
  double t1807;
  double t1820;
  double t1821;
  double t1829;
  double t1831;
  double t1832;
  double t1833;
  double t1425;
  double t1433;
  double t1434;
  double t1371;
  double t1418;
  double t1419;
  double t1098;
  double t1209;
  double t1270;
  double t1271;
  double t1420;
  double t1440;
  double t1442;
  double t1877;
  double t1678;
  double t1682;
  double t1697;
  double t1664;
  double t1671;
  double t1675;
  double t1902;
  double t1559;
  double t1605;
  double t1623;
  double t1626;
  double t1677;
  double t1700;
  double t1701;
  double t1842;
  double t1850;
  double t1851;
  double t1827;
  double t1839;
  double t1840;
  double t1741;
  double t1777;
  double t1795;
  double t1800;
  double t1841;
  double t1852;
  double t1855;
  double t1885;
  double t1888;
  double t1896;
  double t1914;
  double t1917;
  double t1919;
  double t1924;
  double t1926;
  double t1931;
  double t1934;
  double t1937;
  double t1938;
  double t1950;
  double t1953;
  double t1954;
  double t1957;
  double t1958;
  double t1959;
  double t1632;
  double t1706;
  double t1710;
  double t2015;
  double t2033;
  double t2034;
  double t2035;
  double t2036;
  double t2037;
  double t2041;
  double t2043;
  double t2044;
  double t2056;
  double t2065;
  double t2089;
  double t2099;
  double t2100;
  double t2101;
  double t2103;
  double t2105;
  double t2107;
  double t2111;
  double t2114;
  double t2116;
  double t2120;
  double t2123;
  double t2139;
  double t2145;
  double t2156;
  double t2157;
  double t2162;
  double t2163;
  double t2164;
  double t2166;
  double t2168;
  double t2180;
  double t1993;
  double t1998;
  double t2000;
  double t2003;
  double t2010;
  double t2020;
  double t2021;
  double t2026;
  double t2030;
  double t2031;
  double t2085;
  double t2137;
  double t2181;
  double t2184;
  double t2191;
  double t2192;
  double t2201;
  double t2204;
  double t2206;
  double t2210;
  double t2215;
  double t2218;
  double t2224;
  double t2227;
  double t2231;
  double t2233;
  double t1289;
  double t1447;
  double t1500;
  double t2253;
  double t2255;
  double t2262;
  double t2266;
  double t2002;
  double t2190;
  double t2237;
  double t2241;
  double t2273;
  double t2275;
  double t2279;
  double t2282;
  double t2285;
  double t2287;
  double t2288;
  double t2290;
  double t2291;
  double t2294;
  double t2298;
  double t2300;
  double t2302;
  double t2242;
  double t2267;
  double t2271;
  double t2295;
  double t2304;
  double t2306;
  double t2309;
  double t2310;
  double t2311;
  double t1802;
  double t1863;
  double t1868;
  double t2272;
  double t2335;
  double t2351;
  double t2372;
  double t2403;
  double t2414;
  double t2431;
  double t2438;
  double t2449;
  double t2455;
  double t2471;
  double t2478;
  double t2772;
  double t2776;
  double t2782;
  double t2783;
  double t2785;
  double t2786;
  double t2789;
  double t2798;
  double t2844;
  double t2847;
  double t2848;
  double t2849;
  double t2854;
  double t2859;
  double t2863;
  double t2865;
  double t2928;
  double t2929;
  double t2931;
  double t2935;
  double t2943;
  double t2945;
  double t2946;
  double t2950;
  t874 = Cos(var1[17]);
  t875 = -1.*t874;
  t885 = 1. + t875;
  t570 = Cos(var1[16]);
  t620 = -1.*t570;
  t630 = 1. + t620;
  t985 = Sin(var1[17]);
  t766 = Sin(var1[16]);
  t994 = 4.e-6*t985;
  t918 = 1.000000000016*t885;
  t936 = -7.e-6*t885;
  t1022 = t936 + t994;
  t1058 = -7.e-6*t1022;
  t1083 = -1. + t918 + t1058;
  t1212 = 4.e-6*t630;
  t1150 = 2.8e-11*t885;
  t1159 = 4.e-6*t885;
  t1163 = 7.e-6*t985;
  t1173 = t1159 + t1163;
  t1186 = -7.e-6*t1173;
  t1190 = -1.*t985;
  t1194 = t1150 + t1186 + t1190;
  t1235 = -6.5e-11*t885;
  t1237 = 1. + t1235;
  t1250 = -7.e-6*t1237;
  t1262 = 7.e-6*t885;
  t1267 = t1250 + t1262 + t994;
  t671 = -2.8e-11*t630;
  t1306 = -7.e-6*t630;
  t1379 = Cos(var1[15]);
  t1318 = -4.e-6*t766;
  t1332 = t1306 + t1318;
  t1334 = t1332*t1083;
  t1336 = -7.e-6*t766;
  t1337 = t1212 + t1336;
  t1342 = t1337*t1194;
  t1348 = -6.5e-11*t630;
  t1351 = 1. + t1348;
  t1361 = t1351*t1267;
  t1366 = t1334 + t1342 + t1361;
  t1302 = Sin(var1[15]);
  t1382 = -1.000000000016*t630;
  t1387 = 1. + t1382;
  t1391 = t1387*t1083;
  t1398 = -1.*t766;
  t1404 = t671 + t1398;
  t1406 = t1404*t1194;
  t1409 = 4.e-6*t766;
  t1411 = t1306 + t1409;
  t1415 = t1411*t1267;
  t1416 = t1391 + t1406 + t1415;
  t1104 = -1.000000000049*t630;
  t1139 = 1. + t1104;
  t1217 = 7.e-6*t766;
  t1222 = t1212 + t1217;
  t852 = t671 + t766;
  t1282 = Sin(var1[4]);
  t1291 = Cos(var1[4]);
  t1294 = Cos(var1[5]);
  t1509 = 1.000000000049*t885;
  t1539 = 4.e-6*t1173;
  t1551 = -1. + t1509 + t1539;
  t1563 = 4.e-6*t1237;
  t1576 = -1. + t874;
  t1585 = 4.e-6*t1576;
  t1588 = t1563 + t1585 + t1163;
  t1607 = 4.e-6*t1022;
  t1613 = t1150 + t1607 + t985;
  t1633 = t1404*t1551;
  t1642 = t1411*t1588;
  t1655 = t1387*t1613;
  t1658 = t1633 + t1642 + t1655;
  t1665 = t1337*t1551;
  t1666 = t1351*t1588;
  t1667 = t1332*t1613;
  t1670 = t1665 + t1666 + t1667;
  t1435 = Sin(var1[5]);
  t1715 = -4.e-6*t985;
  t1714 = 6.5e-11*t885;
  t1718 = t936 + t1715;
  t1728 = 7.e-6*t1718;
  t1737 = t1585 + t1163;
  t1738 = 4.e-6*t1737;
  t1739 = -1. + t1714 + t1728 + t1738;
  t1744 = -1. + t1509;
  t1752 = 4.e-6*t1744;
  t1758 = -7.e-6*t985;
  t1761 = -2.8e-11*t885;
  t1763 = t1761 + t985;
  t1767 = 7.e-6*t1763;
  t1774 = t1752 + t1585 + t1758 + t1767;
  t1778 = -1.000000000016*t885;
  t1781 = 1. + t1778;
  t1782 = 7.e-6*t1781;
  t1789 = t1150 + t985;
  t1791 = 4.e-6*t1789;
  t1792 = t1782 + t1262 + t1715 + t1791;
  t1805 = t1411*t1739;
  t1807 = t1404*t1774;
  t1820 = t1387*t1792;
  t1821 = t1805 + t1807 + t1820;
  t1829 = t1351*t1739;
  t1831 = t1337*t1774;
  t1832 = t1332*t1792;
  t1833 = t1829 + t1831 + t1832;
  t1425 = t1379*t1366;
  t1433 = t1302*t1416;
  t1434 = t1425 + t1433;
  t1371 = -1.*t1302*t1366;
  t1418 = t1379*t1416;
  t1419 = t1371 + t1418;
  t1098 = t852*t1083;
  t1209 = t1139*t1194;
  t1270 = t1222*t1267;
  t1271 = t1098 + t1209 + t1270;
  t1420 = t1294*t1419;
  t1440 = -1.*t1434*t1435;
  t1442 = t1420 + t1440;
  t1877 = Cos(var1[3]);
  t1678 = t1302*t1658;
  t1682 = t1379*t1670;
  t1697 = t1678 + t1682;
  t1664 = t1379*t1658;
  t1671 = -1.*t1302*t1670;
  t1675 = t1664 + t1671;
  t1902 = Sin(var1[3]);
  t1559 = t1139*t1551;
  t1605 = t1222*t1588;
  t1623 = t852*t1613;
  t1626 = t1559 + t1605 + t1623;
  t1677 = t1294*t1675;
  t1700 = -1.*t1697*t1435;
  t1701 = t1677 + t1700;
  t1842 = t1302*t1821;
  t1850 = t1379*t1833;
  t1851 = t1842 + t1850;
  t1827 = t1379*t1821;
  t1839 = -1.*t1302*t1833;
  t1840 = t1827 + t1839;
  t1741 = t1222*t1739;
  t1777 = t1139*t1774;
  t1795 = t852*t1792;
  t1800 = t1741 + t1777 + t1795;
  t1841 = t1294*t1840;
  t1852 = -1.*t1851*t1435;
  t1855 = t1841 + t1852;
  t1885 = t1294*t1434;
  t1888 = t1419*t1435;
  t1896 = t1885 + t1888;
  t1914 = t1291*t1271;
  t1917 = -1.*t1282*t1442;
  t1919 = t1914 + t1917;
  t1924 = t1294*t1697;
  t1926 = t1675*t1435;
  t1931 = t1924 + t1926;
  t1934 = t1291*t1626;
  t1937 = -1.*t1282*t1701;
  t1938 = t1934 + t1937;
  t1950 = t1294*t1851;
  t1953 = t1840*t1435;
  t1954 = t1950 + t1953;
  t1957 = t1291*t1800;
  t1958 = -1.*t1282*t1855;
  t1959 = t1957 + t1958;
  t1632 = t1626*t1282;
  t1706 = t1291*t1701;
  t1710 = t1632 + t1706;
  t2015 = 7.e-6*t630;
  t2033 = 2.826290000000002e-7*var1[17];
  t2034 = -0.148715*t1237;
  t2035 = -2.18904205e-16*t885;
  t2036 = t1159 + t1758;
  t2037 = -0.038576*t2036;
  t2041 = -0.80315*t1718;
  t2043 = t1262 + t994;
  t2044 = -0.5031510000080001*t2043;
  t2056 = -0.038575000014*t1737;
  t2065 = t2033 + t2034 + t2035 + t2037 + t2041 + t2044 + t2056;
  t2089 = 1.1305160000000008e-12*var1[17];
  t2099 = -1.000000000049*t885;
  t2100 = 1. + t2099;
  t2101 = -0.038576*t2100;
  t2103 = -0.03857500001589017*t885;
  t2105 = t1150 + t1190;
  t2107 = -0.5031510000080001*t2105;
  t2111 = t1585 + t1758;
  t2114 = -3.367757e-6*t2111;
  t2116 = -0.148715*t1173;
  t2120 = -0.80315*t1763;
  t2123 = t2089 + t2101 + t2103 + t2107 + t2114 + t2116 + t2120;
  t2139 = -1.9784030000000015e-12*var1[17];
  t2145 = -0.80315*t1781;
  t2156 = -0.5031510000160505*t885;
  t2157 = t1761 + t1190;
  t2162 = -0.038576*t2157;
  t2163 = t1262 + t1715;
  t2164 = -3.367757e-6*t2163;
  t2166 = -0.148715*t1022;
  t2168 = -0.038575000014*t1789;
  t2180 = t2139 + t2145 + t2156 + t2162 + t2164 + t2166 + t2168;
  t1993 = -1.*t1379;
  t1998 = 1. + t1993;
  t2000 = -0.15121*t1998;
  t2003 = -2.7726089999999997e-12*var1[16];
  t2010 = -0.2812110000084994*t630;
  t2020 = t2015 + t1318;
  t2021 = -1.8134809999999998e-6*t2020;
  t2026 = 2.8e-11*t630;
  t2030 = t2026 + t766;
  t2031 = -0.038749000006999997*t2030;
  t2085 = t1411*t2065;
  t2137 = t1404*t2123;
  t2181 = t1387*t2180;
  t2184 = t2003 + t2010 + t2021 + t2031 + t2085 + t2137 + t2181;
  t2191 = 3.9608699999999997e-7*var1[16];
  t2192 = -1.1787626499999999e-16*t630;
  t2201 = t2015 + t1409;
  t2204 = -0.281211000004*t2201;
  t2206 = -1. + t570;
  t2210 = 4.e-6*t2206;
  t2215 = t2210 + t1217;
  t2218 = -0.038749000006999997*t2215;
  t2224 = t1351*t2065;
  t2227 = t1337*t2123;
  t2231 = t1332*t2180;
  t2233 = t2191 + t2192 + t2204 + t2218 + t2224 + t2227 + t2231;
  t1289 = t1271*t1282;
  t1447 = t1291*t1442;
  t1500 = t1289 + t1447;
  t2253 = -0.15121*t1302;
  t2255 = t1379*t2184;
  t2262 = -1.*t1302*t2233;
  t2266 = t2000 + t2253 + t2255 + t2262;
  t2002 = 0.15121*t1302;
  t2190 = t1302*t2184;
  t2237 = t1379*t2233;
  t2241 = t2000 + t2002 + t2190 + t2237;
  t2273 = 1.5843479999999999e-12*var1[16];
  t2275 = -0.03874900000889869*t630;
  t2279 = t2026 + t1398;
  t2282 = -0.281211000004*t2279;
  t2285 = t2210 + t1336;
  t2287 = -1.8134809999999998e-6*t2285;
  t2288 = t1222*t2065;
  t2290 = t1139*t2123;
  t2291 = t852*t2180;
  t2294 = t2273 + t2275 + t2282 + t2287 + t2288 + t2290 + t2291;
  t2298 = t1294*t2266;
  t2300 = -1.*t2241*t1435;
  t2302 = t2298 + t2300;
  t2242 = t1294*t2241;
  t2267 = t2266*t1435;
  t2271 = t2242 + t2267;
  t2295 = t2294*t1282;
  t2304 = t1291*t2302;
  t2306 = t2295 + t2304;
  t2309 = t1291*t2294;
  t2310 = -1.*t1282*t2302;
  t2311 = t2309 + t2310;
  t1802 = t1800*t1282;
  t1863 = t1291*t1855;
  t1868 = t1802 + t1863;
  t2272 = -1.*t1896*t2271;
  t2335 = t1931*t2271;
  t2351 = t1896*t2271;
  t2372 = -1.*t2271*t1954;
  t2403 = -1.*t1931*t2271;
  t2414 = t2271*t1954;
  t2431 = -1.*t1271*t2294;
  t2438 = t1626*t2294;
  t2449 = t1271*t2294;
  t2455 = -1.*t2294*t1800;
  t2471 = -1.*t1626*t2294;
  t2478 = t2294*t1800;
  t2772 = -1.*t2065*t1267;
  t2776 = -1.*t1194*t2123;
  t2782 = -1.*t1083*t2180;
  t2783 = t2772 + t2776 + t2782;
  t2785 = t2065*t1588;
  t2786 = t1551*t2123;
  t2789 = t1613*t2180;
  t2798 = t2785 + t2786 + t2789;
  t2844 = t2065*t1267;
  t2847 = t1194*t2123;
  t2848 = t1083*t2180;
  t2849 = t2844 + t2847 + t2848;
  t2854 = -1.*t2065*t1739;
  t2859 = -1.*t2123*t1774;
  t2863 = -1.*t2180*t1792;
  t2865 = t2854 + t2859 + t2863;
  t2928 = -1.*t2065*t1588;
  t2929 = -1.*t1551*t2123;
  t2931 = -1.*t1613*t2180;
  t2935 = t2928 + t2929 + t2931;
  t2943 = t2065*t1739;
  t2945 = t2123*t1774;
  t2946 = t2180*t1792;
  t2950 = t2943 + t2945 + t2946;
  p_output1[0]=t1500*var2[0] + t1710*var2[1] + t1868*var2[2];
  p_output1[1]=(t1877*t1896 - 1.*t1902*t1919)*var2[0] + (t1877*t1931 - 1.*t1902*t1938)*var2[1] + (t1877*t1954 - 1.*t1902*t1959)*var2[2];
  p_output1[2]=(t1896*t1902 + t1877*t1919)*var2[0] + (t1902*t1931 + t1877*t1938)*var2[1] + (t1902*t1954 + t1877*t1959)*var2[2];
  p_output1[3]=(t1868*(-1.*t1710*t2306 - 1.*t1938*t2311 + t2403) + t1710*(t1868*t2306 + t1959*t2311 + t2414))*var2[0] + (t1868*(t1500*t2306 + t1919*t2311 + t2351) + t1500*(-1.*t1868*t2306 - 1.*t1959*t2311 + t2372))*var2[1] + (t1710*(t2272 - 1.*t1500*t2306 - 1.*t1919*t2311) + t1500*(t1710*t2306 + t1938*t2311 + t2335))*var2[2];
  p_output1[4]=(t1954*(-1.*t1701*t2302 + t2403 + t2471) + t1931*(t1855*t2302 + t2414 + t2478))*var2[0] + (t1954*(t1442*t2302 + t2351 + t2449) + t1896*(-1.*t1855*t2302 + t2372 + t2455))*var2[1] + (t1931*(t2272 - 1.*t1442*t2302 + t2431) + t1896*(t1701*t2302 + t2335 + t2438))*var2[2];
  p_output1[5]=(t1800*(-1.*t1697*t2241 - 1.*t1675*t2266 + t2471) + t1626*(t1851*t2241 + t1840*t2266 + t2478))*var2[0] + (t1800*(t1434*t2241 + t1419*t2266 + t2449) + t1271*(-1.*t1851*t2241 - 1.*t1840*t2266 + t2455))*var2[1] + (t1626*(-1.*t1434*t2241 - 1.*t1419*t2266 + t2431) + t1271*(t1697*t2241 + t1675*t2266 + t2438))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.15121*t1366 - 0.15121*t1416 + t1800*(-1.*t1658*t2184 - 1.*t1670*t2233 + t2471) + t1626*(t1821*t2184 + t1833*t2233 + t2478))*var2[0] + (-0.15121*t1658 + 0.15121*t1670 + t1800*(t1416*t2184 + t1366*t2233 + t2449) + t1271*(-1.*t1821*t2184 - 1.*t1833*t2233 + t2455))*var2[1] + (-0.15121*t1821 + 0.15121*t1833 + t1626*(-1.*t1416*t2184 - 1.*t1366*t2233 + t2431) + t1271*(t1658*t2184 + t1670*t2233 + t2438))*var2[2];
  p_output1[16]=(-0.038749*t1083 + 0.281211*t1194 - 1.*t1739*t2935 - 1.*t1588*t2950 + 4.e-6*(-1.*t1774*t2935 - 1.*t1551*t2950) + 7.e-6*(t1792*t2935 + t1613*t2950) + 1.e-6*(7.e-6*t1237 + t1715 + t936))*var2[0] + (0.281211*t1551 - 0.038749*t1613 + 1.e-6*(t1159 + 4.e-6*(-1. + t1714) + t1758) - 1.*t1739*t2849 - 1.*t1267*t2865 + 7.e-6*(t1792*t2849 + t1083*t2865) + 4.e-6*(-1.*t1774*t2849 - 1.*t1194*t2865))*var2[1] + (0.281211*t1774 - 0.038749*t1792 + 1.e-6*(1. + t1235 - 7.e-6*t1718 + 4.e-6*t2036) - 1.*t1588*t2783 - 1.*t1267*t2798 + 7.e-6*(t1613*t2783 + t1083*t2798) + 4.e-6*(-1.*t1551*t2783 - 1.*t1194*t2798))*var2[2];
  p_output1[17]=-4.051285074010787e-7*var2[0] + 0.3000000410492048*var2[1] - 2.826290000000002e-7*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRrFoot_vec_ParallelStance1.hh"

namespace ParallelStance1
{

void fRrFoot_vec_ParallelStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
