/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:32:52 GMT+01:00
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
  double t89;
  double t194;
  double t1377;
  double t1379;
  double t1382;
  double t1420;
  double t1567;
  double t1586;
  double t1587;
  double t1617;
  double t1498;
  double t577;
  double t728;
  double t837;
  double t950;
  double t1054;
  double t1071;
  double t1092;
  double t1188;
  double t1202;
  double t1293;
  double t1769;
  double t1408;
  double t1675;
  double t1683;
  double t1465;
  double t1829;
  double t1856;
  double t1616;
  double t1979;
  double t1981;
  double t1990;
  double t2005;
  double t1920;
  double t1925;
  double t1846;
  double t1847;
  double t1848;
  double t1930;
  double t1931;
  double t1932;
  double t2014;
  double t1819;
  double t2041;
  double t1837;
  double t2066;
  double t1997;
  double t2113;
  double t2121;
  double t1437;
  double t2031;
  double t2233;
  double t2238;
  double t2254;
  double t2270;
  double t1938;
  double t1889;
  double t1893;
  double t1903;
  double t1949;
  double t1954;
  double t1961;
  double t2305;
  double t1694;
  double t2324;
  double t1622;
  double t2266;
  double t2382;
  double t2388;
  double t2435;
  double t1867;
  double t2330;
  double t1857;
  double t2038;
  double t2039;
  double t2042;
  double t2045;
  double t2047;
  double t2049;
  double t2051;
  double t2053;
  double t2185;
  double t2126;
  double t2129;
  double t2144;
  double t2146;
  double t2157;
  double t2168;
  double t2171;
  double t2178;
  double t2201;
  double t2203;
  double t2204;
  double t2207;
  double t2212;
  double t2218;
  double t2221;
  double t2225;
  double t2018;
  double t2527;
  double t2006;
  double t2573;
  double t2083;
  double t2532;
  double t2533;
  double t2068;
  double t2470;
  double t2326;
  double t2328;
  double t2341;
  double t2353;
  double t2354;
  double t2357;
  double t2358;
  double t2362;
  double t2476;
  double t2421;
  double t2425;
  double t2431;
  double t2439;
  double t2440;
  double t2446;
  double t2457;
  double t2461;
  double t2495;
  double t2498;
  double t2507;
  double t2511;
  double t2513;
  double t2514;
  double t2516;
  double t2520;
  double t2376;
  double t2631;
  double t2391;
  double t2661;
  double t2624;
  double t2280;
  double t1360;
  double t1383;
  double t1440;
  double t1442;
  double t1470;
  double t1483;
  double t1494;
  double t1551;
  double t1609;
  double t1628;
  double t1669;
  double t1707;
  double t1717;
  double t1725;
  double t2736;
  double t872;
  double t1058;
  double t1308;
  double t1317;
  double t2742;
  double t2746;
  double t2748;
  double t2750;
  double t1743;
  double t1762;
  double t1787;
  double t1788;
  double t2757;
  double t2758;
  double t2762;
  double t1813;
  double t1815;
  double t1824;
  double t1826;
  double t1843;
  double t1844;
  double t1845;
  double t1851;
  double t1854;
  double t1859;
  double t1865;
  double t1874;
  double t1877;
  double t1879;
  double t1910;
  double t1916;
  double t1921;
  double t1923;
  double t1926;
  double t1928;
  double t1929;
  double t1934;
  double t1935;
  double t1939;
  double t1940;
  double t1941;
  double t1943;
  double t1946;
  double t1972;
  double t1993;
  double t2007;
  double t2013;
  double t2023;
  double t2026;
  double t2027;
  double t2774;
  double t2779;
  double t2781;
  double t2792;
  double t2793;
  double t2796;
  double t2062;
  double t2065;
  double t2072;
  double t2073;
  double t2099;
  double t2105;
  double t2112;
  double t2180;
  double t2181;
  double t2191;
  double t2193;
  double t2198;
  double t2199;
  double t2200;
  double t2230;
  double t2261;
  double t2292;
  double t2303;
  double t2315;
  double t2317;
  double t2318;
  double t2785;
  double t2786;
  double t2787;
  double t2800;
  double t2802;
  double t2803;
  double t2369;
  double t2370;
  double t2379;
  double t2381;
  double t2397;
  double t2410;
  double t2415;
  double t2464;
  double t2469;
  double t2471;
  double t2475;
  double t2482;
  double t2488;
  double t2494;
  double t2529;
  double t2809;
  double t2812;
  double t2813;
  double t2814;
  double t2534;
  double t2821;
  double t2824;
  double t2826;
  double t2828;
  double t2546;
  double t2547;
  double t2833;
  double t2834;
  double t2835;
  double t2838;
  double t2567;
  double t2569;
  double t2575;
  double t2579;
  double t2593;
  double t2595;
  double t2598;
  double t2606;
  double t2626;
  double t2852;
  double t2860;
  double t2863;
  double t2864;
  double t2632;
  double t2867;
  double t2871;
  double t2874;
  double t2875;
  double t2640;
  double t2645;
  double t2883;
  double t2886;
  double t2889;
  double t2892;
  double t2663;
  double t2667;
  double t2673;
  double t2678;
  double t2696;
  double t2699;
  double t2712;
  double t2720;
  t89 = Cos(var1[4]);
  t194 = Cos(var1[5]);
  t1377 = Cos(var1[13]);
  t1379 = -1.*t1377;
  t1382 = 1. + t1379;
  t1420 = Sin(var1[13]);
  t1567 = Cos(var1[16]);
  t1586 = -1.*t1567;
  t1587 = 1. + t1586;
  t1617 = Sin(var1[16]);
  t1498 = Sin(var1[4]);
  t577 = Cos(var1[12]);
  t728 = -1.*t577;
  t837 = 1. + t728;
  t950 = Sin(var1[12]);
  t1054 = 0.15121*t950;
  t1071 = Cos(var1[15]);
  t1092 = -1.*t1071;
  t1188 = 1. + t1092;
  t1202 = -0.15121*t1188;
  t1293 = Sin(var1[15]);
  t1769 = Sin(var1[5]);
  t1408 = 4.e-6*t1382;
  t1675 = -1. + t1567;
  t1683 = 4.e-6*t1675;
  t1465 = -2.8e-11*t1382;
  t1829 = 7.e-6*t1382;
  t1856 = 7.e-6*t1587;
  t1616 = 2.8e-11*t1587;
  t1979 = Cos(var1[14]);
  t1981 = -1.*t1979;
  t1990 = 1. + t1981;
  t2005 = Sin(var1[14]);
  t1920 = -1.*t1420;
  t1925 = -4.e-6*t1420;
  t1846 = -1.*t89*t194*t950;
  t1847 = -1.*t577*t89*t1769;
  t1848 = t1846 + t1847;
  t1930 = t577*t89*t194;
  t1931 = -1.*t89*t950*t1769;
  t1932 = t1930 + t1931;
  t2014 = 7.e-6*t1990;
  t1819 = -7.e-6*t1420;
  t2041 = -7.e-6*t1382;
  t1837 = 4.e-6*t1420;
  t2066 = 4.e-6*t1990;
  t1997 = -2.8e-11*t1990;
  t2113 = -1. + t1377;
  t2121 = 4.e-6*t2113;
  t1437 = 7.e-6*t1420;
  t2031 = 2.8e-11*t1382;
  t2233 = Cos(var1[17]);
  t2238 = -1.*t2233;
  t2254 = 1. + t2238;
  t2270 = Sin(var1[17]);
  t1938 = -4.e-6*t1617;
  t1889 = -1.*t89*t194*t1293;
  t1893 = -1.*t1071*t89*t1769;
  t1903 = t1889 + t1893;
  t1949 = t1071*t89*t194;
  t1954 = -1.*t89*t1293*t1769;
  t1961 = t1949 + t1954;
  t2305 = 2.8e-11*t2254;
  t1694 = -7.e-6*t1617;
  t2324 = -2.8e-11*t1587;
  t1622 = -1.*t1617;
  t2266 = 7.e-6*t2254;
  t2382 = -1. + t2233;
  t2388 = 4.e-6*t2382;
  t2435 = 4.e-6*t1587;
  t1867 = 7.e-6*t1617;
  t2330 = -7.e-6*t1587;
  t1857 = 4.e-6*t1617;
  t2038 = t2031 + t1920;
  t2039 = t2038*t1498;
  t2042 = t2041 + t1925;
  t2045 = t2042*t1848;
  t2047 = -1.000000000016*t1382;
  t2049 = 1. + t2047;
  t2051 = t2049*t1932;
  t2053 = t2039 + t2045 + t2051;
  t2185 = 7.e-6*t2005;
  t2126 = t2121 + t1819;
  t2129 = t2126*t1498;
  t2144 = -6.5e-11*t1382;
  t2146 = 1. + t2144;
  t2157 = t2146*t1848;
  t2168 = t2041 + t1837;
  t2171 = t2168*t1932;
  t2178 = t2129 + t2157 + t2171;
  t2201 = -1.000000000049*t1382;
  t2203 = 1. + t2201;
  t2204 = t2203*t1498;
  t2207 = t2121 + t1437;
  t2212 = t2207*t1848;
  t2218 = t2031 + t1420;
  t2221 = t2218*t1932;
  t2225 = t2204 + t2212 + t2221;
  t2018 = -4.e-6*t2005;
  t2527 = 2.8e-11*t1990;
  t2006 = -1.*t2005;
  t2573 = -7.e-6*t1990;
  t2083 = 4.e-6*t2005;
  t2532 = -1. + t1979;
  t2533 = 4.e-6*t2532;
  t2068 = -7.e-6*t2005;
  t2470 = 4.e-6*t2270;
  t2326 = t2324 + t1617;
  t2328 = t2326*t1498;
  t2341 = t2330 + t1938;
  t2353 = t2341*t1903;
  t2354 = -1.000000000016*t1587;
  t2357 = 1. + t2354;
  t2358 = t2357*t1961;
  t2362 = t2328 + t2353 + t2358;
  t2476 = 7.e-6*t2270;
  t2421 = -1.000000000049*t1587;
  t2425 = 1. + t2421;
  t2431 = t2425*t1498;
  t2439 = t2435 + t1694;
  t2440 = t2439*t1903;
  t2446 = t2324 + t1622;
  t2457 = t2446*t1961;
  t2461 = t2431 + t2440 + t2457;
  t2495 = t2435 + t1867;
  t2498 = t2495*t1498;
  t2507 = -6.5e-11*t1587;
  t2511 = 1. + t2507;
  t2513 = t2511*t1903;
  t2514 = t2330 + t1857;
  t2516 = t2514*t1961;
  t2520 = t2498 + t2513 + t2516;
  t2376 = -1.*t2270;
  t2631 = 4.e-6*t2254;
  t2391 = -7.e-6*t2270;
  t2661 = -2.8e-11*t2254;
  t2624 = -7.e-6*t2254;
  t2280 = -4.e-6*t2270;
  t1360 = 5.856279999999999e-13*var1[13];
  t1383 = -0.0387489999948987*t1382;
  t1440 = t1408 + t1437;
  t1442 = -2.123459e-6*t1440;
  t1470 = t1465 + t1420;
  t1483 = -0.281209000004*t1470;
  t1494 = t1360 + t1383 + t1442 + t1483;
  t1551 = 1.5843479999999999e-12*var1[16];
  t1609 = -0.03874900000889869*t1587;
  t1628 = t1616 + t1622;
  t1669 = -0.281211000004*t1628;
  t1707 = t1683 + t1694;
  t1717 = -1.8134809999999998e-6*t1707;
  t1725 = t1551 + t1609 + t1669 + t1717;
  t2736 = Sin(var1[3]);
  t872 = -0.15121*t837;
  t1058 = t872 + t1054;
  t1308 = -0.15121*t1293;
  t1317 = t1202 + t1308;
  t2742 = t194*t2736*t1498;
  t2746 = Cos(var1[3]);
  t2748 = t2746*t1769;
  t2750 = t2742 + t2748;
  t1743 = 0.15121*t837;
  t1762 = t1743 + t1054;
  t1787 = 0.15121*t1293;
  t1788 = t1202 + t1787;
  t2757 = t2746*t194;
  t2758 = -1.*t2736*t1498*t1769;
  t2762 = t2757 + t2758;
  t1813 = -1.4640699999999997e-7*var1[13];
  t1815 = -1.38024835e-16*t1382;
  t1824 = t1408 + t1819;
  t1826 = -0.038748999993*t1824;
  t1843 = t1829 + t1837;
  t1844 = -0.281209000004*t1843;
  t1845 = t1813 + t1815 + t1826 + t1844;
  t1851 = 3.9608699999999997e-7*var1[16];
  t1854 = -1.1787626499999999e-16*t1587;
  t1859 = t1856 + t1857;
  t1865 = -0.281211000004*t1859;
  t1874 = t1683 + t1867;
  t1877 = -0.038749000006999997*t1874;
  t1879 = t1851 + t1854 + t1865 + t1877;
  t1910 = 1.0248489999999998e-12*var1[13];
  t1916 = -0.28120900000849935*t1382;
  t1921 = t1465 + t1920;
  t1923 = -0.038748999993*t1921;
  t1926 = t1829 + t1925;
  t1928 = -2.123459e-6*t1926;
  t1929 = t1910 + t1916 + t1923 + t1928;
  t1934 = -2.7726089999999997e-12*var1[16];
  t1935 = -0.2812110000084994*t1587;
  t1939 = t1856 + t1938;
  t1940 = -1.8134809999999998e-6*t1939;
  t1941 = t1616 + t1617;
  t1943 = -0.038749000006999997*t1941;
  t1946 = t1934 + t1935 + t1940 + t1943;
  t1972 = 1.8190549999999993e-12*var1[14];
  t1993 = -0.5031490000160505*t1990;
  t2007 = t1997 + t2006;
  t2013 = -0.038922999986*t2007;
  t2023 = t2014 + t2018;
  t2026 = -3.6777349999999994e-6*t2023;
  t2027 = t1972 + t1993 + t2013 + t2026;
  t2774 = -1.*t950*t2750;
  t2779 = t577*t2762;
  t2781 = t2774 + t2779;
  t2792 = t577*t2750;
  t2793 = t950*t2762;
  t2796 = t2792 + t2793;
  t2062 = -2.598649999999999e-7*var1[14];
  t2065 = -2.3905277499999995e-16*t1990;
  t2072 = t2066 + t2068;
  t2073 = -0.038922999986*t2072;
  t2099 = t2014 + t2083;
  t2105 = -0.503149000008*t2099;
  t2112 = t2062 + t2065 + t2073 + t2105;
  t2180 = 1.0394599999999997e-12*var1[14];
  t2181 = -0.03892299998790722*t1990;
  t2191 = t2066 + t2185;
  t2193 = -3.6777349999999994e-6*t2191;
  t2198 = t1997 + t2005;
  t2199 = -0.503149000008*t2198;
  t2200 = t2180 + t2181 + t2193 + t2199;
  t2230 = -1.9784030000000015e-12*var1[17];
  t2261 = -0.5031510000160505*t2254;
  t2292 = t2266 + t2280;
  t2303 = -3.367757e-6*t2292;
  t2315 = t2305 + t2270;
  t2317 = -0.038575000014*t2315;
  t2318 = t2230 + t2261 + t2303 + t2317;
  t2785 = -1.*t1293*t2750;
  t2786 = t1071*t2762;
  t2787 = t2785 + t2786;
  t2800 = t1071*t2750;
  t2802 = t1293*t2762;
  t2803 = t2800 + t2802;
  t2369 = 1.1305160000000008e-12*var1[17];
  t2370 = -0.03857500001589017*t2254;
  t2379 = t2305 + t2376;
  t2381 = -0.5031510000080001*t2379;
  t2397 = t2388 + t2391;
  t2410 = -3.367757e-6*t2397;
  t2415 = t2369 + t2370 + t2381 + t2410;
  t2464 = 2.826290000000002e-7*var1[17];
  t2469 = -2.18904205e-16*t2254;
  t2471 = t2266 + t2470;
  t2475 = -0.5031510000080001*t2471;
  t2482 = t2388 + t2476;
  t2488 = -0.038575000014*t2482;
  t2494 = t2464 + t2469 + t2475 + t2488;
  t2529 = t2527 + t2005;
  t2809 = -1.*t89*t2038*t2736;
  t2812 = t2042*t2781;
  t2813 = t2049*t2796;
  t2814 = t2809 + t2812 + t2813;
  t2534 = t2533 + t2185;
  t2821 = -1.*t89*t2126*t2736;
  t2824 = t2146*t2781;
  t2826 = t2168*t2796;
  t2828 = t2821 + t2824 + t2826;
  t2546 = -1.000000000049*t1990;
  t2547 = 1. + t2546;
  t2833 = -1.*t2203*t89*t2736;
  t2834 = t2207*t2781;
  t2835 = t2218*t2796;
  t2838 = t2833 + t2834 + t2835;
  t2567 = -1.000000000016*t1990;
  t2569 = 1. + t2567;
  t2575 = t2573 + t2018;
  t2579 = t2527 + t2006;
  t2593 = t2573 + t2083;
  t2595 = -6.5e-11*t1990;
  t2598 = 1. + t2595;
  t2606 = t2533 + t2068;
  t2626 = t2624 + t2470;
  t2852 = -1.*t89*t2326*t2736;
  t2860 = t2341*t2787;
  t2863 = t2357*t2803;
  t2864 = t2852 + t2860 + t2863;
  t2632 = t2631 + t2476;
  t2867 = -1.*t2425*t89*t2736;
  t2871 = t2439*t2787;
  t2874 = t2446*t2803;
  t2875 = t2867 + t2871 + t2874;
  t2640 = -6.5e-11*t2254;
  t2645 = 1. + t2640;
  t2883 = -1.*t89*t2495*t2736;
  t2886 = t2511*t2787;
  t2889 = t2514*t2803;
  t2892 = t2883 + t2886 + t2889;
  t2663 = t2661 + t2376;
  t2667 = -1.000000000049*t2254;
  t2673 = 1. + t2667;
  t2678 = t2631 + t2391;
  t2696 = -1.000000000016*t2254;
  t2699 = 1. + t2696;
  t2712 = t2661 + t2270;
  t2720 = t2624 + t2280;
  p_output1[0]=t1494*t1498 - 1.*t1498*t1725 + t1845*t1848 - 1.*t1879*t1903 + t1929*t1932 - 1.*t1946*t1961 + t2027*t2053 + t2112*t2178 + t2200*t2225 - 1.*t2318*t2362 - 1.*t2415*t2461 - 1.*t2494*t2520 - 0.038924*(t2053*t2529 + t2178*t2534 + t2225*t2547) - 0.80315*(t2053*t2569 + t2178*t2575 + t2225*t2579) + 0.148705*(t2053*t2593 + t2178*t2598 + t2225*t2606) + 0.148715*(t2362*t2626 + t2461*t2632 + t2520*t2645) + 0.038576*(t2362*t2663 + t2461*t2673 + t2520*t2678) + 0.80315*(t2362*t2699 + t2461*t2712 + t2520*t2720) - 1.*t1762*t1769*t89 + t1769*t1788*t89 + t1058*t194*t89 - 1.*t1317*t194*t89;
  p_output1[1]=t1058*t2750 - 1.*t1317*t2750 + t1762*t2762 - 1.*t1788*t2762 + t1845*t2781 - 1.*t1879*t2787 + t1929*t2796 - 1.*t1946*t2803 + t2027*t2814 + t2112*t2828 + t2200*t2838 - 0.038924*(t2529*t2814 + t2534*t2828 + t2547*t2838) - 0.80315*(t2569*t2814 + t2575*t2828 + t2579*t2838) + 0.148705*(t2593*t2814 + t2598*t2828 + t2606*t2838) - 1.*t2318*t2864 - 1.*t2415*t2875 - 1.*t2494*t2892 + 0.148715*(t2626*t2864 + t2632*t2875 + t2645*t2892) + 0.038576*(t2663*t2864 + t2673*t2875 + t2678*t2892) + 0.80315*(t2699*t2864 + t2712*t2875 + t2720*t2892) - 1.*t1494*t2736*t89 + t1725*t2736*t89;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "step_distance_ParallelStance2.hh"

namespace ParallelStance2
{

void step_distance_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
