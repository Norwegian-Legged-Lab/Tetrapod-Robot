/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 17:52:12 GMT+01:00
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
  double t241;
  double t257;
  double t74;
  double t117;
  double t157;
  double t183;
  double t349;
  double t387;
  double t307;
  double t332;
  double t388;
  double t389;
  double t419;
  double t511;
  double t529;
  double t533;
  double t537;
  double t546;
  double t557;
  double t576;
  double t181;
  double t615;
  double t636;
  double t640;
  double t641;
  double t648;
  double t474;
  double t980;
  double t990;
  double t676;
  double t901;
  double t703;
  double t705;
  double t1109;
  double t729;
  double t737;
  double t665;
  double t666;
  double t190;
  double t1160;
  double t909;
  double t1020;
  double t1169;
  double t1191;
  double t1223;
  double t1225;
  double t1235;
  double t487;
  double t490;
  double t1260;
  double t1281;
  double t597;
  double t601;
  double t1289;
  double t1302;
  double t197;
  double t1315;
  double t1383;
  double t1430;
  double t848;
  double t1469;
  double t1472;
  double t1483;
  double t1492;
  double t1493;
  double t1498;
  double t1500;
  double t1519;
  double t1522;
  double t1530;
  double t1537;
  double t1546;
  double t1551;
  double t1555;
  double t1558;
  double t1569;
  double t1571;
  double t1587;
  double t1598;
  double t1607;
  double t1612;
  double t1620;
  double t1637;
  double t1660;
  double t1669;
  double t1691;
  double t1700;
  double t1703;
  double t1719;
  double t1720;
  double t1726;
  double t1730;
  double t1083;
  double t1098;
  double t853;
  double t1217;
  double t1451;
  double t1827;
  double t1829;
  double t1873;
  double t1881;
  double t1886;
  double t1887;
  double t1401;
  double t1424;
  double t1438;
  double t1449;
  double t1461;
  double t1467;
  double t1535;
  double t1627;
  double t1740;
  double t1747;
  double t898;
  double t940;
  double t1062;
  double t1071;
  double t1117;
  double t1136;
  double t1210;
  double t1212;
  double t1229;
  double t1244;
  double t1246;
  double t1804;
  double t1814;
  double t1820;
  double t1822;
  double t1832;
  double t1835;
  double t1837;
  double t1846;
  double t1852;
  double t1857;
  double t1891;
  double t1895;
  double t1898;
  double t1904;
  double t1905;
  double t1906;
  double t1909;
  double t1911;
  double t1917;
  double t1920;
  double t1079;
  double t1215;
  double t1247;
  double t1257;
  double t2032;
  double t2033;
  double t2045;
  double t2061;
  double t2072;
  double t2085;
  double t2092;
  double t2102;
  double t1921;
  double t1288;
  double t1306;
  double t1392;
  double t1397;
  double t1752;
  double t1774;
  double t1778;
  double t1783;
  double t2192;
  double t2163;
  double t2210;
  double t2218;
  double t2219;
  double t1968;
  double t2229;
  double t2230;
  double t2231;
  double t2236;
  double t1926;
  double t1934;
  double t1948;
  double t1949;
  double t1955;
  double t1957;
  double t1961;
  double t1962;
  double t2247;
  double t2251;
  double t2257;
  double t2259;
  double t433;
  double t587;
  double t651;
  double t652;
  double t668;
  double t723;
  double t739;
  double t743;
  double t2355;
  double t2378;
  double t2379;
  double t2383;
  double t2357;
  double t2371;
  double t2374;
  double t2389;
  double t2353;
  double t2337;
  double t2338;
  double t2344;
  double t2345;
  double t2348;
  double t2375;
  double t2391;
  double t2393;
  double t2438;
  double t2426;
  double t2427;
  double t2428;
  double t2419;
  double t2439;
  double t2441;
  double t2442;
  double t2296;
  double t2300;
  double t2306;
  double t2312;
  double t2313;
  double t2315;
  double t2242;
  double t2243;
  double t2244;
  double t2167;
  double t2207;
  double t2208;
  double t2537;
  double t2538;
  double t2545;
  double t2515;
  double t2518;
  double t2526;
  double t2546;
  double t2548;
  double t2561;
  double t2496;
  double t2501;
  double t2503;
  double t2576;
  double t2585;
  double t2588;
  double t2563;
  double t2504;
  double t2505;
  double t2511;
  double t2623;
  double t2629;
  double t2634;
  double t2596;
  double t2638;
  double t2644;
  double t2646;
  double t2619;
  double t2620;
  double t2622;
  double t2659;
  double t2665;
  double t2668;
  double t2791;
  double t2792;
  double t2794;
  double t2796;
  double t2802;
  double t2805;
  double t2810;
  double t2813;
  double t2739;
  double t2759;
  double t2651;
  double t2655;
  double t2658;
  double t2966;
  double t2351;
  double t2394;
  double t2401;
  double t2991;
  double t2681;
  double t2685;
  double t2687;
  double t3109;
  double t3112;
  double t3114;
  double t3115;
  double t3118;
  double t3119;
  double t3124;
  double t3125;
  double t3061;
  double t3071;
  double t3215;
  double t3220;
  t201 = Cos(var1[17]);
  t241 = -1.*t201;
  t257 = 1. + t241;
  t74 = Cos(var1[16]);
  t117 = -1.*t74;
  t157 = 1. + t117;
  t183 = Sin(var1[16]);
  t349 = Sin(var1[17]);
  t387 = 4.e-6*t349;
  t307 = 1.000000000016*t257;
  t332 = -7.e-6*t257;
  t388 = t332 + t387;
  t389 = -7.e-6*t388;
  t419 = -1. + t307 + t389;
  t511 = 2.8e-11*t257;
  t529 = 4.e-6*t257;
  t533 = 7.e-6*t349;
  t537 = t529 + t533;
  t546 = -7.e-6*t537;
  t557 = -1.*t349;
  t576 = t511 + t546 + t557;
  t181 = -7.e-6*t157;
  t615 = -6.5e-11*t257;
  t636 = 1. + t615;
  t640 = -7.e-6*t636;
  t641 = 7.e-6*t257;
  t648 = t640 + t641 + t387;
  t474 = 4.e-6*t157;
  t980 = -1. + t201;
  t990 = 4.e-6*t980;
  t676 = -2.8e-11*t157;
  t901 = -4.e-6*t349;
  t703 = -1.*t183;
  t705 = t676 + t703;
  t1109 = 1.000000000049*t257;
  t729 = 4.e-6*t183;
  t737 = t181 + t729;
  t665 = -1.000000000016*t157;
  t666 = 1. + t665;
  t190 = -4.e-6*t183;
  t1160 = -7.e-6*t349;
  t909 = t332 + t901;
  t1020 = t990 + t533;
  t1169 = -2.8e-11*t257;
  t1191 = t1169 + t349;
  t1223 = -1.000000000016*t257;
  t1225 = 1. + t1223;
  t1235 = t511 + t349;
  t487 = -7.e-6*t183;
  t490 = t474 + t487;
  t1260 = 4.e-6*t537;
  t1281 = -1. + t1109 + t1260;
  t597 = -6.5e-11*t157;
  t601 = 1. + t597;
  t1289 = 4.e-6*t636;
  t1302 = t1289 + t990 + t533;
  t197 = t181 + t190;
  t1315 = 4.e-6*t388;
  t1383 = t511 + t1315 + t349;
  t1430 = 7.e-6*t157;
  t848 = 7.e-6*t183;
  t1469 = 2.826290000000002e-7*var1[17];
  t1472 = -0.148715*t636;
  t1483 = -2.18904205e-16*t257;
  t1492 = t529 + t1160;
  t1493 = -0.038576*t1492;
  t1498 = -0.80315*t909;
  t1500 = t641 + t387;
  t1519 = -0.5031510000080001*t1500;
  t1522 = -0.038575000014*t1020;
  t1530 = t1469 + t1472 + t1483 + t1493 + t1498 + t1519 + t1522;
  t1537 = 1.1305160000000008e-12*var1[17];
  t1546 = -1.000000000049*t257;
  t1551 = 1. + t1546;
  t1555 = -0.038576*t1551;
  t1558 = -0.03857500001589017*t257;
  t1569 = t511 + t557;
  t1571 = -0.5031510000080001*t1569;
  t1587 = t990 + t1160;
  t1598 = -3.367757e-6*t1587;
  t1607 = -0.148715*t537;
  t1612 = -0.80315*t1191;
  t1620 = t1537 + t1555 + t1558 + t1571 + t1598 + t1607 + t1612;
  t1637 = -1.9784030000000015e-12*var1[17];
  t1660 = -0.80315*t1225;
  t1669 = -0.5031510000160505*t257;
  t1691 = t1169 + t557;
  t1700 = -0.038576*t1691;
  t1703 = t641 + t901;
  t1719 = -3.367757e-6*t1703;
  t1720 = -0.148715*t388;
  t1726 = -0.038575000014*t1235;
  t1730 = t1637 + t1660 + t1669 + t1700 + t1719 + t1720 + t1726;
  t1083 = -1.000000000049*t157;
  t1098 = 1. + t1083;
  t853 = t474 + t848;
  t1217 = t676 + t183;
  t1451 = 2.8e-11*t157;
  t1827 = -1. + t74;
  t1829 = 4.e-6*t1827;
  t1873 = t1098*t1281;
  t1881 = t853*t1302;
  t1886 = t1217*t1383;
  t1887 = t1873 + t1881 + t1886;
  t1401 = -2.7726089999999997e-12*var1[16];
  t1424 = -0.2812110000084994*t157;
  t1438 = t1430 + t190;
  t1449 = -1.8134809999999998e-6*t1438;
  t1461 = t1451 + t183;
  t1467 = -0.038749000006999997*t1461;
  t1535 = t737*t1530;
  t1627 = t705*t1620;
  t1740 = t666*t1730;
  t1747 = t1401 + t1424 + t1449 + t1467 + t1535 + t1627 + t1740;
  t898 = 6.5e-11*t257;
  t940 = 7.e-6*t909;
  t1062 = 4.e-6*t1020;
  t1071 = -1. + t898 + t940 + t1062;
  t1117 = -1. + t1109;
  t1136 = 4.e-6*t1117;
  t1210 = 7.e-6*t1191;
  t1212 = t1136 + t990 + t1160 + t1210;
  t1229 = 7.e-6*t1225;
  t1244 = 4.e-6*t1235;
  t1246 = t1229 + t641 + t901 + t1244;
  t1804 = 3.9608699999999997e-7*var1[16];
  t1814 = -1.1787626499999999e-16*t157;
  t1820 = t1430 + t729;
  t1822 = -0.281211000004*t1820;
  t1832 = t1829 + t848;
  t1835 = -0.038749000006999997*t1832;
  t1837 = t601*t1530;
  t1846 = t490*t1620;
  t1852 = t197*t1730;
  t1857 = t1804 + t1814 + t1822 + t1835 + t1837 + t1846 + t1852;
  t1891 = 1.5843479999999999e-12*var1[16];
  t1895 = -0.03874900000889869*t157;
  t1898 = t1451 + t703;
  t1904 = -0.281211000004*t1898;
  t1905 = t1829 + t487;
  t1906 = -1.8134809999999998e-6*t1905;
  t1909 = t853*t1530;
  t1911 = t1098*t1620;
  t1917 = t1217*t1730;
  t1920 = t1891 + t1895 + t1904 + t1906 + t1909 + t1911 + t1917;
  t1079 = t853*t1071;
  t1215 = t1098*t1212;
  t1247 = t1217*t1246;
  t1257 = t1079 + t1215 + t1247;
  t2032 = -1.*t1530*t1302;
  t2033 = -1.*t1281*t1620;
  t2045 = -1.*t1383*t1730;
  t2061 = t2032 + t2033 + t2045;
  t2072 = t1530*t1071;
  t2085 = t1620*t1212;
  t2092 = t1730*t1246;
  t2102 = t2072 + t2085 + t2092;
  t1921 = -1.*t1887*t1920;
  t1288 = t705*t1281;
  t1306 = t737*t1302;
  t1392 = t666*t1383;
  t1397 = t1288 + t1306 + t1392;
  t1752 = t490*t1281;
  t1774 = t601*t1302;
  t1778 = t197*t1383;
  t1783 = t1752 + t1774 + t1778;
  t2192 = Cos(var1[15]);
  t2163 = Sin(var1[15]);
  t2210 = -1.*t2192;
  t2218 = 1. + t2210;
  t2219 = -0.15121*t2218;
  t1968 = t1920*t1257;
  t2229 = 0.15121*t2163;
  t2230 = t2163*t1747;
  t2231 = t2192*t1857;
  t2236 = t2219 + t2229 + t2230 + t2231;
  t1926 = t737*t1071;
  t1934 = t705*t1212;
  t1948 = t666*t1246;
  t1949 = t1926 + t1934 + t1948;
  t1955 = t601*t1071;
  t1957 = t490*t1212;
  t1961 = t197*t1246;
  t1962 = t1955 + t1957 + t1961;
  t2247 = -0.15121*t2163;
  t2251 = t2192*t1747;
  t2257 = -1.*t2163*t1857;
  t2259 = t2219 + t2247 + t2251 + t2257;
  t433 = t197*t419;
  t587 = t490*t576;
  t651 = t601*t648;
  t652 = t433 + t587 + t651;
  t668 = t666*t419;
  t723 = t705*t576;
  t739 = t737*t648;
  t743 = t668 + t723 + t739;
  t2355 = Cos(var1[5]);
  t2378 = t2192*t652;
  t2379 = t2163*t743;
  t2383 = t2378 + t2379;
  t2357 = -1.*t2163*t652;
  t2371 = t2192*t743;
  t2374 = t2357 + t2371;
  t2389 = Sin(var1[5]);
  t2353 = Cos(var1[4]);
  t2337 = t1217*t419;
  t2338 = t1098*t576;
  t2344 = t853*t648;
  t2345 = t2337 + t2338 + t2344;
  t2348 = Sin(var1[4]);
  t2375 = t2355*t2374;
  t2391 = -1.*t2383*t2389;
  t2393 = t2375 + t2391;
  t2438 = Cos(var1[3]);
  t2426 = t2355*t2383;
  t2427 = t2374*t2389;
  t2428 = t2426 + t2427;
  t2419 = Sin(var1[3]);
  t2439 = t2353*t2345;
  t2441 = -1.*t2348*t2393;
  t2442 = t2439 + t2441;
  t2296 = t2163*t1949;
  t2300 = t2192*t1962;
  t2306 = t2296 + t2300;
  t2312 = t2192*t1949;
  t2313 = -1.*t2163*t1962;
  t2315 = t2312 + t2313;
  t2242 = t2192*t1397;
  t2243 = -1.*t2163*t1783;
  t2244 = t2242 + t2243;
  t2167 = t2163*t1397;
  t2207 = t2192*t1783;
  t2208 = t2167 + t2207;
  t2537 = t2355*t2208;
  t2538 = t2244*t2389;
  t2545 = t2537 + t2538;
  t2515 = t2355*t2259;
  t2518 = -1.*t2236*t2389;
  t2526 = t2515 + t2518;
  t2546 = t2355*t2236;
  t2548 = t2259*t2389;
  t2561 = t2546 + t2548;
  t2496 = t2355*t2306;
  t2501 = t2315*t2389;
  t2503 = t2496 + t2501;
  t2576 = t2355*t2315;
  t2585 = -1.*t2306*t2389;
  t2588 = t2576 + t2585;
  t2563 = -1.*t2545*t2561;
  t2504 = t2355*t2244;
  t2505 = -1.*t2208*t2389;
  t2511 = t2504 + t2505;
  t2623 = t1887*t2348;
  t2629 = t2353*t2511;
  t2634 = t2623 + t2629;
  t2596 = t2561*t2503;
  t2638 = t1920*t2348;
  t2644 = t2353*t2526;
  t2646 = t2638 + t2644;
  t2619 = t1257*t2348;
  t2620 = t2353*t2588;
  t2622 = t2619 + t2620;
  t2659 = t2353*t1920;
  t2665 = -1.*t2348*t2526;
  t2668 = t2659 + t2665;
  t2791 = t1530*t648;
  t2792 = t576*t1620;
  t2794 = t419*t1730;
  t2796 = t2791 + t2792 + t2794;
  t2802 = -1.*t1530*t1071;
  t2805 = -1.*t1620*t1212;
  t2810 = -1.*t1730*t1246;
  t2813 = t2802 + t2805 + t2810;
  t2739 = t2345*t1920;
  t2759 = -1.*t1920*t1257;
  t2651 = t2353*t1887;
  t2655 = -1.*t2348*t2511;
  t2658 = t2651 + t2655;
  t2966 = t2428*t2561;
  t2351 = t2345*t2348;
  t2394 = t2353*t2393;
  t2401 = t2351 + t2394;
  t2991 = -1.*t2561*t2503;
  t2681 = t2353*t1257;
  t2685 = -1.*t2348*t2588;
  t2687 = t2681 + t2685;
  t3109 = -1.*t1530*t648;
  t3112 = -1.*t576*t1620;
  t3114 = -1.*t419*t1730;
  t3115 = t3109 + t3112 + t3114;
  t3118 = t1530*t1302;
  t3119 = t1281*t1620;
  t3124 = t1383*t1730;
  t3125 = t3118 + t3119 + t3124;
  t3061 = -1.*t2345*t1920;
  t3071 = t1887*t1920;
  t3215 = -1.*t2428*t2561;
  t3220 = t2545*t2561;
  p_output1[0]=t2401*var2[0] + (t2428*t2438 - 1.*t2419*t2442)*var2[1] + (t2419*t2428 + t2438*t2442)*var2[2] + (t2622*(t2563 - 1.*t2634*t2646 - 1.*t2658*t2668) + t2634*(t2596 + t2622*t2646 + t2668*t2687))*var2[3] + (t2503*(t1921 - 1.*t2511*t2526 + t2563) + t2545*(t1968 + t2526*t2588 + t2596))*var2[4] + (t1257*(t1921 - 1.*t2208*t2236 - 1.*t2244*t2259) + t1887*(t1968 + t2236*t2306 + t2259*t2315))*var2[5] + (t1257*(-1.*t1397*t1747 - 1.*t1783*t1857 + t1921) + t1887*(t1747*t1949 + t1857*t1962 + t1968) + 0.15121*t652 - 0.15121*t743)*var2[15] + (-1.*t1071*t2061 - 1.*t1302*t2102 + 4.e-6*(-1.*t1212*t2061 - 1.*t1281*t2102) + 7.e-6*(t1246*t2061 + t1383*t2102) - 0.038749*t419 + 0.281211*t576 + 1.e-6*(t332 + 7.e-6*t636 + t901))*var2[16] - 4.051285074010787e-7*var2[17];
  p_output1[1]=t2634*var2[0] + (t2438*t2545 - 1.*t2419*t2658)*var2[1] + (t2419*t2545 + t2438*t2658)*var2[2] + (t2622*(t2401*t2646 + t2442*t2668 + t2966) + t2401*(-1.*t2622*t2646 - 1.*t2668*t2687 + t2991))*var2[3] + (t2503*(t2393*t2526 + t2739 + t2966) + t2428*(-1.*t2526*t2588 + t2759 + t2991))*var2[4] + (t1257*(t2259*t2374 + t2236*t2383 + t2739) + t2345*(-1.*t2236*t2306 - 1.*t2259*t2315 + t2759))*var2[5] + (-0.15121*t1397 + 0.15121*t1783 + t2345*(-1.*t1747*t1949 - 1.*t1857*t1962 + t2759) + t1257*(t2739 + t1857*t652 + t1747*t743))*var2[15] + (0.281211*t1281 - 0.038749*t1383 - 1.*t1071*t2796 + 7.e-6*(t1246*t2796 + t2813*t419) + 4.e-6*(-1.*t1212*t2796 - 1.*t2813*t576) - 1.*t2813*t648 + 1.e-6*(t1160 + t529 + 4.e-6*(-1. + t898)))*var2[16] + 0.3000000410492048*var2[17];
  p_output1[2]=t2622*var2[0] + (t2438*t2503 - 1.*t2419*t2687)*var2[1] + (t2419*t2503 + t2438*t2687)*var2[2] + (t2634*(-1.*t2401*t2646 - 1.*t2442*t2668 + t3215) + t2401*(t2634*t2646 + t2658*t2668 + t3220))*var2[3] + (t2545*(-1.*t2393*t2526 + t3061 + t3215) + t2428*(t2511*t2526 + t3071 + t3220))*var2[4] + (t1887*(-1.*t2259*t2374 - 1.*t2236*t2383 + t3061) + t2345*(t2208*t2236 + t2244*t2259 + t3071))*var2[5] + (-0.15121*t1949 + 0.15121*t1962 + t2345*(t1397*t1747 + t1783*t1857 + t3071) + t1887*(t3061 - 1.*t1857*t652 - 1.*t1747*t743))*var2[15] + (0.281211*t1212 - 0.038749*t1246 - 1.*t1302*t3115 + 7.e-6*(t1383*t3115 + t3125*t419) + 4.e-6*(-1.*t1281*t3115 - 1.*t3125*t576) - 1.*t3125*t648 + 1.e-6*(1. + 4.e-6*t1492 + t615 - 7.e-6*t909))*var2[16] - 2.826290000000002e-7*var2[17];
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

#include "dh_RrFoot_QuadrupleStance.hh"

namespace QuadrupleStance
{

void dh_RrFoot_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
