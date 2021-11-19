/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:10:47 GMT+01:00
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
static void output1(double *p_output1,const double *var1)
{
  double t384;
  double t398;
  double t443;
  double t16;
  double t242;
  double t475;
  double t487;
  double t23;
  double t77;
  double t455;
  double t458;
  double t499;
  double t551;
  double t560;
  double t637;
  double t642;
  double t679;
  double t685;
  double t732;
  double t591;
  double t603;
  double t771;
  double t780;
  double t792;
  double t813;
  double t904;
  double t920;
  double t934;
  double t1045;
  double t168;
  double t1232;
  double t1057;
  double t1081;
  double t1137;
  double t1141;
  double t1155;
  double t1158;
  double t1174;
  double t1189;
  double t1218;
  double t1219;
  double t1030;
  double t1236;
  double t1283;
  double t1301;
  double t1337;
  double t1368;
  double t1373;
  double t1375;
  double t1380;
  double t1417;
  double t1026;
  double t1467;
  double t1481;
  double t1496;
  double t1231;
  double t1434;
  double t1437;
  double t1534;
  double t1006;
  double t334;
  double t355;
  double t568;
  double t619;
  double t621;
  double t735;
  double t748;
  double t759;
  double t945;
  double t972;
  double t994;
  double t1449;
  double t1568;
  double t1569;
  double t1637;
  double t1600;
  double t1613;
  double t1632;
  double t1591;
  double t1647;
  double t1649;
  double t1652;
  double t1705;
  double t1707;
  double t1731;
  double t1739;
  double t1743;
  double t1755;
  double t1772;
  double t1778;
  double t1784;
  double t1798;
  double t1806;
  double t1811;
  double t1829;
  double t1837;
  double t1838;
  double t1844;
  double t1845;
  double t1959;
  double t1894;
  double t1896;
  double t1901;
  double t1904;
  double t1906;
  double t1921;
  double t1931;
  double t1937;
  double t1945;
  double t1946;
  double t1967;
  double t1968;
  double t1969;
  double t1973;
  double t2003;
  double t2007;
  double t2009;
  double t2012;
  double t2024;
  double t1934;
  double t1971;
  double t2026;
  double t2031;
  double t2036;
  double t2038;
  double t2040;
  double t2044;
  double t2103;
  double t2120;
  double t2123;
  double t2131;
  double t2135;
  double t2145;
  double t2148;
  double t2150;
  double t2151;
  double t2154;
  double t2161;
  double t2179;
  double t2180;
  double t2181;
  double t2191;
  double t2193;
  double t2194;
  double t2195;
  double t2197;
  double t2198;
  double t2199;
  double t2204;
  double t2212;
  double t2215;
  double t2221;
  double t2222;
  double t2223;
  double t2225;
  double t2226;
  double t2240;
  double t2244;
  double t2245;
  double t2071;
  double t2072;
  double t2081;
  double t2082;
  double t2083;
  double t2089;
  double t2097;
  double t2102;
  double t2105;
  double t2116;
  double t2162;
  double t2210;
  double t2246;
  double t2247;
  double t2252;
  double t2270;
  double t2277;
  double t2278;
  double t2279;
  double t2280;
  double t2285;
  double t2287;
  double t2297;
  double t2299;
  double t2307;
  double t2051;
  double t2053;
  double t2060;
  double t2033;
  double t2045;
  double t2049;
  double t2315;
  double t2323;
  double t2325;
  double t2329;
  double t2073;
  double t2249;
  double t2311;
  double t2313;
  double t2350;
  double t2354;
  double t2356;
  double t2358;
  double t2364;
  double t2369;
  double t2379;
  double t2387;
  double t2388;
  double t2405;
  double t2415;
  double t2428;
  double t2433;
  double t2438;
  double t2441;
  double t2445;
  double t2458;
  double t2466;
  double t2468;
  double t2470;
  double t2362;
  double t2385;
  double t2386;
  double t1873;
  double t1874;
  double t1875;
  double t1834;
  double t1849;
  double t1861;
  double t2314;
  double t2331;
  double t2344;
  double t1738;
  double t1757;
  double t1787;
  double t1793;
  double t1794;
  double t1870;
  double t1880;
  double t1882;
  double t1887;
  double t1891;
  double t2465;
  double t2476;
  double t2478;
  double t2516;
  double t2519;
  double t2525;
  double t2542;
  double t2543;
  double t2545;
  double t2050;
  double t2061;
  double t2063;
  double t2347;
  double t2549;
  double t2619;
  double t2642;
  double t2752;
  double t2753;
  double t2764;
  double t2769;
  double t2774;
  double t2776;
  double t2777;
  double t2788;
  double t2555;
  double t2561;
  double t2604;
  double t1002;
  double t1576;
  double t1577;
  double t2491;
  double t2513;
  double t2514;
  double t2840;
  double t2851;
  double t2864;
  double t2876;
  double t3011;
  double t3014;
  double t3024;
  double t3033;
  double t3040;
  double t3042;
  double t3046;
  double t3050;
  double t3118;
  double t3132;
  double t3182;
  double t3190;
  double t2986;
  double t3311;
  double t3322;
  double t3327;
  double t3329;
  double t3333;
  double t3338;
  double t3343;
  double t3346;
  t384 = Cos(var1[14]);
  t398 = -1.*t384;
  t443 = 1. + t398;
  t16 = Cos(var1[13]);
  t242 = Sin(var1[13]);
  t475 = Sin(var1[14]);
  t487 = 4.e-6*t475;
  t23 = -1.*t16;
  t77 = 1. + t23;
  t455 = 1.000000000016*t443;
  t458 = -7.e-6*t443;
  t499 = t458 + t487;
  t551 = -7.e-6*t499;
  t560 = -1. + t455 + t551;
  t637 = -6.5e-11*t443;
  t642 = 1. + t637;
  t679 = -7.e-6*t642;
  t685 = 7.e-6*t443;
  t732 = t679 + t685 + t487;
  t591 = -1. + t16;
  t603 = 4.e-6*t591;
  t771 = -2.8e-11*t443;
  t780 = -1. + t384;
  t792 = 4.e-6*t780;
  t813 = -7.e-6*t475;
  t904 = t792 + t813;
  t920 = -7.e-6*t904;
  t934 = t771 + t920 + t475;
  t1045 = -7.e-6*t77;
  t168 = 2.8e-11*t77;
  t1232 = Cos(var1[12]);
  t1057 = -4.e-6*t242;
  t1081 = t1045 + t1057;
  t1137 = t1081*t560;
  t1141 = -6.5e-11*t77;
  t1155 = 1. + t1141;
  t1158 = t1155*t732;
  t1174 = 7.e-6*t242;
  t1189 = t603 + t1174;
  t1218 = t1189*t934;
  t1219 = t1137 + t1158 + t1218;
  t1030 = Sin(var1[12]);
  t1236 = -1.000000000016*t77;
  t1283 = 1. + t1236;
  t1301 = t1283*t560;
  t1337 = 4.e-6*t242;
  t1368 = t1045 + t1337;
  t1373 = t1368*t732;
  t1375 = t168 + t242;
  t1380 = t1375*t934;
  t1417 = t1301 + t1373 + t1380;
  t1026 = Cos(var1[5]);
  t1467 = t1232*t1219;
  t1481 = t1030*t1417;
  t1496 = t1467 + t1481;
  t1231 = -1.*t1030*t1219;
  t1434 = t1232*t1417;
  t1437 = t1231 + t1434;
  t1534 = Sin(var1[5]);
  t1006 = Cos(var1[4]);
  t334 = -1.*t242;
  t355 = t168 + t334;
  t568 = t355*t560;
  t619 = -7.e-6*t242;
  t621 = t603 + t619;
  t735 = t621*t732;
  t748 = -1.000000000049*t77;
  t759 = 1. + t748;
  t945 = t759*t934;
  t972 = t568 + t735 + t945;
  t994 = Sin(var1[4]);
  t1449 = t1026*t1437;
  t1568 = -1.*t1496*t1534;
  t1569 = t1449 + t1568;
  t1637 = Sin(var1[3]);
  t1600 = t1026*t1496;
  t1613 = t1437*t1534;
  t1632 = t1600 + t1613;
  t1591 = Cos(var1[3]);
  t1647 = t1006*t972;
  t1649 = -1.*t994*t1569;
  t1652 = t1647 + t1649;
  t1705 = -1.000000000049*t443;
  t1707 = 4.e-6*t904;
  t1731 = 1. + t1705 + t1707;
  t1739 = 4.e-6*t642;
  t1743 = 7.e-6*t475;
  t1755 = t1739 + t792 + t1743;
  t1772 = 2.8e-11*t443;
  t1778 = 4.e-6*t499;
  t1784 = t1772 + t1778 + t475;
  t1798 = t1375*t1731;
  t1806 = t1368*t1755;
  t1811 = t1283*t1784;
  t1829 = t1798 + t1806 + t1811;
  t1837 = t1189*t1731;
  t1838 = t1155*t1755;
  t1844 = t1081*t1784;
  t1845 = t1837 + t1838 + t1844;
  t1959 = -1.*t475;
  t1894 = 4.e-6*t443;
  t1896 = t1894 + t813;
  t1901 = 4.e-6*t1896;
  t1904 = -4.e-6*t475;
  t1906 = t458 + t1904;
  t1921 = -7.e-6*t1906;
  t1931 = 1. + t637 + t1901 + t1921;
  t1937 = 1.000000000049*t443;
  t1945 = -1. + t1937;
  t1946 = 4.e-6*t1945;
  t1967 = t1772 + t1959;
  t1968 = -7.e-6*t1967;
  t1969 = t1946 + t792 + t1968 + t813;
  t1973 = -1.000000000016*t443;
  t2003 = 1. + t1973;
  t2007 = -7.e-6*t2003;
  t2009 = t771 + t1959;
  t2012 = 4.e-6*t2009;
  t2024 = t2007 + t458 + t2012 + t487;
  t1934 = t1368*t1931;
  t1971 = t1375*t1969;
  t2026 = t1283*t2024;
  t2031 = t1934 + t1971 + t2026;
  t2036 = t1155*t1931;
  t2038 = t1189*t1969;
  t2040 = t1081*t2024;
  t2044 = t2036 + t2038 + t2040;
  t2103 = 7.e-6*t77;
  t2120 = -2.598649999999999e-7*var1[14];
  t2123 = 0.148705*t642;
  t2131 = -2.3905277499999995e-16*t443;
  t2135 = -0.038922999986*t1896;
  t2145 = -0.80315*t1906;
  t2148 = t685 + t487;
  t2150 = -0.503149000008*t2148;
  t2151 = t792 + t1743;
  t2154 = -0.038924*t2151;
  t2161 = t2120 + t2123 + t2131 + t2135 + t2145 + t2150 + t2154;
  t2179 = 1.0394599999999997e-12*var1[14];
  t2180 = 1. + t1705;
  t2181 = -0.038924*t2180;
  t2191 = -0.03892299998790722*t443;
  t2193 = -0.80315*t1967;
  t2194 = 0.148705*t904;
  t2195 = t1894 + t1743;
  t2197 = -3.6777349999999994e-6*t2195;
  t2198 = t771 + t475;
  t2199 = -0.503149000008*t2198;
  t2204 = t2179 + t2181 + t2191 + t2193 + t2194 + t2197 + t2199;
  t2212 = 1.8190549999999993e-12*var1[14];
  t2215 = -0.80315*t2003;
  t2221 = -0.5031490000160505*t443;
  t2222 = -0.038922999986*t2009;
  t2223 = t685 + t1904;
  t2225 = -3.6777349999999994e-6*t2223;
  t2226 = 0.148705*t499;
  t2240 = t1772 + t475;
  t2244 = -0.038924*t2240;
  t2245 = t2212 + t2215 + t2221 + t2222 + t2225 + t2226 + t2244;
  t2071 = -1.*t1232;
  t2072 = 1. + t2071;
  t2081 = 0.15121*t1030;
  t2082 = 1.0248489999999998e-12*var1[13];
  t2083 = -0.28120900000849935*t77;
  t2089 = -2.8e-11*t77;
  t2097 = t2089 + t334;
  t2102 = -0.038748999993*t2097;
  t2105 = t2103 + t1057;
  t2116 = -2.123459e-6*t2105;
  t2162 = t1368*t2161;
  t2210 = t1375*t2204;
  t2246 = t1283*t2245;
  t2247 = t2082 + t2083 + t2102 + t2116 + t2162 + t2210 + t2246;
  t2252 = -1.4640699999999997e-7*var1[13];
  t2270 = -1.38024835e-16*t77;
  t2277 = 4.e-6*t77;
  t2278 = t2277 + t619;
  t2279 = -0.038748999993*t2278;
  t2280 = t2103 + t1337;
  t2285 = -0.281209000004*t2280;
  t2287 = t1155*t2161;
  t2297 = t1189*t2204;
  t2299 = t1081*t2245;
  t2307 = t2252 + t2270 + t2279 + t2285 + t2287 + t2297 + t2299;
  t2051 = t1232*t2031;
  t2053 = -1.*t1030*t2044;
  t2060 = t2051 + t2053;
  t2033 = t1030*t2031;
  t2045 = t1232*t2044;
  t2049 = t2033 + t2045;
  t2315 = -0.15121*t2072;
  t2323 = t1232*t2247;
  t2325 = -1.*t1030*t2307;
  t2329 = t2315 + t2081 + t2323 + t2325;
  t2073 = 0.15121*t2072;
  t2249 = t1030*t2247;
  t2311 = t1232*t2307;
  t2313 = t2073 + t2081 + t2249 + t2311;
  t2350 = t621*t1931;
  t2354 = t759*t1969;
  t2356 = t355*t2024;
  t2358 = t2350 + t2354 + t2356;
  t2364 = t1026*t2060;
  t2369 = -1.*t2049*t1534;
  t2379 = t2364 + t2369;
  t2387 = 5.856279999999999e-13*var1[13];
  t2388 = -0.0387489999948987*t77;
  t2405 = t2277 + t1174;
  t2415 = -2.123459e-6*t2405;
  t2428 = t2089 + t242;
  t2433 = -0.281209000004*t2428;
  t2438 = t621*t2161;
  t2441 = t759*t2204;
  t2445 = t355*t2245;
  t2458 = t2387 + t2388 + t2415 + t2433 + t2438 + t2441 + t2445;
  t2466 = t1026*t2329;
  t2468 = -1.*t2313*t1534;
  t2470 = t2466 + t2468;
  t2362 = t2358*t994;
  t2385 = t1006*t2379;
  t2386 = t2362 + t2385;
  t1873 = t1030*t1829;
  t1874 = t1232*t1845;
  t1875 = t1873 + t1874;
  t1834 = t1232*t1829;
  t1849 = -1.*t1030*t1845;
  t1861 = t1834 + t1849;
  t2314 = t1026*t2313;
  t2331 = t2329*t1534;
  t2344 = t2314 + t2331;
  t1738 = t759*t1731;
  t1757 = t621*t1755;
  t1787 = t355*t1784;
  t1793 = t1738 + t1757 + t1787;
  t1794 = t1793*t994;
  t1870 = t1026*t1861;
  t1880 = -1.*t1875*t1534;
  t1882 = t1870 + t1880;
  t1887 = t1006*t1882;
  t1891 = t1794 + t1887;
  t2465 = t2458*t994;
  t2476 = t1006*t2470;
  t2478 = t2465 + t2476;
  t2516 = t1006*t2458;
  t2519 = -1.*t994*t2470;
  t2525 = t2516 + t2519;
  t2542 = t1026*t1875;
  t2543 = t1861*t1534;
  t2545 = t2542 + t2543;
  t2050 = t1026*t2049;
  t2061 = t2060*t1534;
  t2063 = t2050 + t2061;
  t2347 = t2063*t2344;
  t2549 = -1.*t2545*t2344;
  t2619 = t2358*t2458;
  t2642 = -1.*t1793*t2458;
  t2752 = t1931*t2161;
  t2753 = t1969*t2204;
  t2764 = t2024*t2245;
  t2769 = t2752 + t2753 + t2764;
  t2774 = -1.*t2161*t1755;
  t2776 = -1.*t1731*t2204;
  t2777 = -1.*t1784*t2245;
  t2788 = t2774 + t2776 + t2777;
  t2555 = t1006*t1793;
  t2561 = -1.*t994*t1882;
  t2604 = t2555 + t2561;
  t1002 = t972*t994;
  t1576 = t1006*t1569;
  t1577 = t1002 + t1576;
  t2491 = t1006*t2358;
  t2513 = -1.*t994*t2379;
  t2514 = t2491 + t2513;
  t2840 = -1.*t2063*t2344;
  t2851 = t1632*t2344;
  t2864 = -1.*t2358*t2458;
  t2876 = t972*t2458;
  t3011 = t2161*t732;
  t3014 = t934*t2204;
  t3024 = t560*t2245;
  t3033 = t3011 + t3014 + t3024;
  t3040 = -1.*t1931*t2161;
  t3042 = -1.*t1969*t2204;
  t3046 = -1.*t2024*t2245;
  t3050 = t3040 + t3042 + t3046;
  t3118 = -1.*t1632*t2344;
  t3132 = t2545*t2344;
  t3182 = -1.*t972*t2458;
  t3190 = t1793*t2458;
  t2986 = 6.5e-11*t443;
  t3311 = -1.*t2161*t732;
  t3322 = -1.*t934*t2204;
  t3327 = -1.*t560*t2245;
  t3329 = t3311 + t3322 + t3327;
  t3333 = t2161*t1755;
  t3338 = t1731*t2204;
  t3343 = t1784*t2245;
  t3346 = t3333 + t3338 + t3343;
  p_output1[0]=t1577;
  p_output1[1]=t1591*t1632 - 1.*t1637*t1652;
  p_output1[2]=t1632*t1637 + t1591*t1652;
  p_output1[3]=t1891*(t2347 + t2386*t2478 + t2514*t2525) + t2386*(-1.*t1891*t2478 + t2549 - 1.*t2525*t2604);
  p_output1[4]=t2545*(t2347 + t2379*t2470 + t2619) + t2063*(-1.*t1882*t2470 + t2549 + t2642);
  p_output1[5]=t1793*(t2049*t2313 + t2060*t2329 + t2619) + t2358*(-1.*t1875*t2313 - 1.*t1861*t2329 + t2642);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.15121*t1219 + 0.15121*t1417 + t1793*(t2031*t2247 + t2044*t2307 + t2619) + t2358*(-1.*t1829*t2247 - 1.*t1845*t2307 + t2642);
  p_output1[13]=t1755*t2769 + t1931*t2788 + 4.e-6*(-1.*t1731*t2769 - 1.*t1969*t2788) - 7.e-6*(t1784*t2769 + t2024*t2788) + 0.038749*t560 + 1.e-6*(t1904 + t458 + 7.e-6*t642) - 0.281209*t934;
  p_output1[14]=4.0519653002457196e-7;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1891;
  p_output1[19]=t1591*t2545 - 1.*t1637*t2604;
  p_output1[20]=t1637*t2545 + t1591*t2604;
  p_output1[21]=t1577*(-1.*t2386*t2478 - 1.*t2514*t2525 + t2840) + t2386*(t1577*t2478 + t1652*t2525 + t2851);
  p_output1[22]=t1632*(-1.*t2379*t2470 + t2840 + t2864) + t2063*(t1569*t2470 + t2851 + t2876);
  p_output1[23]=t2358*(t1496*t2313 + t1437*t2329 + t2876) + (-1.*t2049*t2313 - 1.*t2060*t2329 + t2864)*t972;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0.15121*t1829 + 0.15121*t1845 + t2358*(t1417*t2247 + t1219*t2307 + t2876) + (-1.*t2031*t2247 - 1.*t2044*t2307 + t2864)*t972;
  p_output1[31]=-0.281209*t1731 + 0.038749*t1784 + t1931*t3033 - 7.e-6*(t2024*t3033 + t3050*t560) + t3050*t732 + 1.e-6*(t1894 + 4.e-6*(-1. + t2986) + t813) + 4.e-6*(-1.*t1969*t3033 - 1.*t3050*t934);
  p_output1[32]=0.29999995910920463;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t2386;
  p_output1[37]=t1591*t2063 - 1.*t1637*t2514;
  p_output1[38]=t1637*t2063 + t1591*t2514;
  p_output1[39]=t1891*(-1.*t1577*t2478 - 1.*t1652*t2525 + t3118) + t1577*(t1891*t2478 + t2525*t2604 + t3132);
  p_output1[40]=t2545*(-1.*t1569*t2470 + t3118 + t3182) + t1632*(t1882*t2470 + t3132 + t3190);
  p_output1[41]=t1793*(-1.*t1496*t2313 - 1.*t1437*t2329 + t3182) + (t1875*t2313 + t1861*t2329 + t3190)*t972;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0.15121*t2031 + 0.15121*t2044 + t1793*(-1.*t1417*t2247 - 1.*t1219*t2307 + t3182) + (t1829*t2247 + t1845*t2307 + t3190)*t972;
  p_output1[49]=-0.281209*t1969 + 0.038749*t2024 + 1.e-6*(-1. + 7.e-6*t1906 + 4.e-6*t2151 + t2986) + t1755*t3329 - 7.e-6*(t1784*t3329 + t3346*t560) + t3346*t732 + 4.e-6*(-1.*t1731*t3329 - 1.*t3346*t934);
  p_output1[50]=-2.5986500000000035e-7;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRlFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
