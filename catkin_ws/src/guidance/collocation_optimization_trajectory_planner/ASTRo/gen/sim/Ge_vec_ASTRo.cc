/*
 * Automatically Generated from Mathematica.
 * Fri 27 May 2022 16:02:51 GMT+02:00
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
  double t9;
  double t14;
  double t17;
  double t31;
  double t38;
  double t87;
  double t48;
  double t53;
  double t63;
  double t98;
  double t71;
  double t108;
  double t116;
  double t161;
  double t177;
  double t188;
  double t1710;
  double t1711;
  double t1712;
  double t1714;
  double t1715;
  double t1731;
  double t1732;
  double t1733;
  double t1734;
  double t1735;
  double t24;
  double t43;
  double t132;
  double t143;
  double t153;
  double t195;
  double t200;
  double t210;
  double t218;
  double t245;
  double t246;
  double t1706;
  double t1752;
  double t1753;
  double t1756;
  double t1713;
  double t1716;
  double t1717;
  double t1718;
  double t1719;
  double t1720;
  double t1721;
  double t1722;
  double t1723;
  double t1725;
  double t1726;
  double t1727;
  double t1929;
  double t1932;
  double t1736;
  double t1737;
  double t1738;
  double t1739;
  double t1740;
  double t1741;
  double t1742;
  double t1743;
  double t1744;
  double t1746;
  double t1747;
  double t1748;
  double t1942;
  double t1945;
  double t1754;
  double t234;
  double t1757;
  double t1758;
  double t1759;
  double t1760;
  double t1924;
  double t1925;
  double t1955;
  double t1959;
  double t1960;
  double t1961;
  double t1962;
  double t1930;
  double t1724;
  double t1933;
  double t1934;
  double t1935;
  double t1936;
  double t1937;
  double t1938;
  double t1970;
  double t1974;
  double t1975;
  double t1976;
  double t1977;
  double t1943;
  double t1745;
  double t1946;
  double t1947;
  double t1948;
  double t1949;
  double t1950;
  double t1951;
  double t2120;
  double t2124;
  double t2125;
  double t2126;
  double t2127;
  double t2135;
  double t2136;
  double t2137;
  double t2138;
  double t2139;
  double t2140;
  double t2141;
  double t2142;
  double t2143;
  double t2144;
  double t2145;
  double t2146;
  double t2147;
  double t2148;
  double t2150;
  double t2151;
  double t2152;
  double t2157;
  double t2161;
  double t2149;
  double t2158;
  double t2159;
  double t2160;
  double t2162;
  double t2163;
  double t2164;
  double t2165;
  double t2169;
  double t2173;
  double t2174;
  double t2175;
  double t2176;
  double t2185;
  double t2186;
  double t2187;
  double t2188;
  double t2189;
  double t2191;
  double t2192;
  double t2193;
  double t2197;
  double t2198;
  double t2199;
  double t2200;
  double t2201;
  double t2203;
  double t2204;
  double t2205;
  double t2209;
  double t2210;
  double t2211;
  double t2212;
  double t2213;
  double t2364;
  double t2365;
  double t2366;
  double t2370;
  double t2190;
  double t2372;
  double t1956;
  double t1957;
  double t2373;
  double t2374;
  double t2375;
  double t2398;
  double t2399;
  double t2400;
  double t2379;
  double t2202;
  double t2381;
  double t1971;
  double t1972;
  double t2382;
  double t2383;
  double t2384;
  double t2409;
  double t2410;
  double t2411;
  double t2388;
  double t2363;
  double t2390;
  double t2121;
  double t2122;
  double t2391;
  double t2392;
  double t2393;
  double t2420;
  double t2421;
  double t2422;
  double t2430;
  double t2431;
  double t2432;
  double t2433;
  double t2434;
  double t2436;
  double t2437;
  double t2438;
  double t2435;
  double t2443;
  double t2444;
  double t2170;
  double t2171;
  double t2445;
  double t2446;
  double t2447;
  double t2452;
  double t2453;
  double t2454;
  double t2463;
  double t2464;
  double t2465;
  double t2556;
  double t2557;
  double t2558;
  double t2555;
  double t2559;
  double t2560;
  double t2562;
  double t2563;
  double t2565;
  double t2568;
  double t2569;
  double t2583;
  double t2584;
  double t2585;
  double t2580;
  double t2581;
  double t2590;
  double t2593;
  double t2594;
  double t2605;
  double t2606;
  double t2607;
  double t2602;
  double t2604;
  double t2614;
  double t2615;
  double t2616;
  double t2575;
  double t2572;
  double t2586;
  double t2599;
  double t2610;
  double t2621;
  double t2690;
  double t2691;
  double t2692;
  double t2693;
  double t2694;
  double t2696;
  double t2697;
  double t2698;
  double t2703;
  double t2699;
  double t2721;
  double t2722;
  double t2723;
  double t2718;
  double t2719;
  double t2720;
  double t2724;
  double t2725;
  double t2726;
  double t2727;
  double t2728;
  double t2731;
  double t2732;
  double t2736;
  double t2733;
  double t2751;
  double t2752;
  double t2753;
  double t2750;
  double t2754;
  double t2755;
  double t2756;
  double t2757;
  double t2762;
  double t2763;
  double t2764;
  double t2773;
  double t2774;
  double t2775;
  double t2784;
  double t2785;
  double t2786;
  double t2787;
  double t2788;
  double t2789;
  double t2790;
  double t2791;
  double t2793;
  double t2794;
  double t2798;
  double t2795;
  double t2813;
  double t2814;
  double t2815;
  double t2812;
  double t2816;
  double t2817;
  double t2818;
  double t2819;
  double t2823;
  double t2824;
  double t2825;
  double t2835;
  double t2836;
  double t2837;
  double t2846;
  double t2852;
  double t2853;
  double t2847;
  double t2848;
  double t2849;
  double t2850;
  double t2851;
  double t2856;
  double t2857;
  double t2854;
  double t2862;
  double t2875;
  double t2876;
  double t2877;
  double t2874;
  double t2878;
  double t2879;
  double t2880;
  double t2881;
  double t2885;
  double t2886;
  double t2887;
  double t2898;
  double t2899;
  double t2900;
  double t2914;
  double t2915;
  double t2908;
  double t2909;
  double t2910;
  double t2911;
  double t2912;
  double t2913;
  double t2918;
  double t2919;
  double t2916;
  double t2924;
  double t2937;
  double t2938;
  double t2939;
  double t2936;
  double t2940;
  double t2941;
  double t2942;
  double t2943;
  double t2947;
  double t2948;
  double t2949;
  double t2959;
  double t2960;
  double t2961;
  t9 = Cos(var1[9]);
  t14 = -1.*t9;
  t17 = 1. + t14;
  t31 = Sin(var1[9]);
  t38 = 0.15121*t31;
  t87 = Cos(var1[3]);
  t48 = Cos(var1[5]);
  t53 = Sin(var1[3]);
  t63 = Sin(var1[4]);
  t98 = Sin(var1[5]);
  t71 = t48*t53*t63;
  t108 = t87*t98;
  t116 = t71 + t108;
  t161 = t87*t48;
  t177 = -1.*t53*t63*t98;
  t188 = t161 + t177;
  t1710 = Cos(var1[12]);
  t1711 = -1.*t1710;
  t1712 = 1. + t1711;
  t1714 = Sin(var1[12]);
  t1715 = -0.15121*t1714;
  t1731 = Cos(var1[15]);
  t1732 = -1.*t1731;
  t1733 = 1. + t1732;
  t1734 = -0.15121*t1733;
  t1735 = Sin(var1[15]);
  t24 = -0.15121*t17;
  t43 = t24 + t38;
  t132 = t43*t116;
  t143 = 0.15121*t17;
  t153 = t143 + t38;
  t195 = t153*t188;
  t200 = -1.*t31*t116;
  t210 = t9*t188;
  t218 = t200 + t210;
  t245 = t9*t116;
  t246 = t31*t188;
  t1706 = t245 + t246;
  t1752 = Cos(var1[4]);
  t1753 = Sin(var1[10]);
  t1756 = Cos(var1[10]);
  t1713 = 0.15121*t1712;
  t1716 = t1713 + t1715;
  t1717 = t1716*t116;
  t1718 = -0.15121*t1712;
  t1719 = t1718 + t1715;
  t1720 = t1719*t188;
  t1721 = -1.*t1714*t116;
  t1722 = t1710*t188;
  t1723 = t1721 + t1722;
  t1725 = t1710*t116;
  t1726 = t1714*t188;
  t1727 = t1725 + t1726;
  t1929 = Sin(var1[13]);
  t1932 = Cos(var1[13]);
  t1736 = -0.15121*t1735;
  t1737 = t1734 + t1736;
  t1738 = t1737*t116;
  t1739 = 0.15121*t1735;
  t1740 = t1734 + t1739;
  t1741 = t1740*t188;
  t1742 = -1.*t1735*t116;
  t1743 = t1731*t188;
  t1744 = t1742 + t1743;
  t1746 = t1731*t116;
  t1747 = t1735*t188;
  t1748 = t1746 + t1747;
  t1942 = Sin(var1[16]);
  t1945 = Cos(var1[16]);
  t1754 = -0.28121*t1752*t1753*t53;
  t234 = 0.15121*t218;
  t1757 = -1.*t1756;
  t1758 = 1. + t1757;
  t1759 = -0.28121*t1758*t1706;
  t1760 = -1.*t1752*t1753*t53;
  t1924 = t1756*t1706;
  t1925 = t1760 + t1924;
  t1955 = Cos(var1[11]);
  t1959 = Sin(var1[11]);
  t1960 = -1.*t1756*t1752*t53;
  t1961 = -1.*t1753*t1706;
  t1962 = t1960 + t1961;
  t1930 = -0.28121*t1752*t1929*t53;
  t1724 = -0.15121*t1723;
  t1933 = -1.*t1932;
  t1934 = 1. + t1933;
  t1935 = 0.28121*t1934*t1727;
  t1936 = t1752*t1929*t53;
  t1937 = t1932*t1727;
  t1938 = t1936 + t1937;
  t1970 = Cos(var1[14]);
  t1974 = Sin(var1[14]);
  t1975 = -1.*t1932*t1752*t53;
  t1976 = t1929*t1727;
  t1977 = t1975 + t1976;
  t1943 = -0.28121*t1752*t1942*t53;
  t1745 = -0.15121*t1744;
  t1946 = -1.*t1945;
  t1947 = 1. + t1946;
  t1948 = -0.28121*t1947*t1748;
  t1949 = -1.*t1752*t1942*t53;
  t1950 = t1945*t1748;
  t1951 = t1949 + t1950;
  t2120 = Cos(var1[17]);
  t2124 = Sin(var1[17]);
  t2125 = -1.*t1945*t1752*t53;
  t2126 = -1.*t1942*t1748;
  t2127 = t2125 + t2126;
  t2135 = Cos(var1[6]);
  t2136 = -1.*t2135;
  t2137 = 1. + t2136;
  t2138 = 0.15121*t2137;
  t2139 = Sin(var1[6]);
  t2140 = -0.15121*t2139;
  t2141 = t2138 + t2140;
  t2142 = t188*t2141;
  t2143 = 0.15121*t2139;
  t2144 = t2138 + t2143;
  t2145 = t116*t2144;
  t2146 = t2135*t188;
  t2147 = -1.*t116*t2139;
  t2148 = t2146 + t2147;
  t2150 = t2135*t116;
  t2151 = t188*t2139;
  t2152 = t2150 + t2151;
  t2157 = Cos(var1[7]);
  t2161 = Sin(var1[7]);
  t2149 = 0.15121*t2148;
  t2158 = -1.*t2157;
  t2159 = 1. + t2158;
  t2160 = 0.28121*t2159*t2152;
  t2162 = -0.28121*t1752*t53*t2161;
  t2163 = t2157*t2152;
  t2164 = t1752*t53*t2161;
  t2165 = t2163 + t2164;
  t2169 = Cos(var1[8]);
  t2173 = -1.*t1752*t2157*t53;
  t2174 = t2152*t2161;
  t2175 = t2173 + t2174;
  t2176 = Sin(var1[8]);
  t2185 = -1.*t87*t1752*t48*t43;
  t2186 = t87*t1752*t153*t98;
  t2187 = t87*t1752*t48*t31;
  t2188 = t9*t87*t1752*t98;
  t2189 = t2187 + t2188;
  t2191 = -1.*t9*t87*t1752*t48;
  t2192 = t87*t1752*t31*t98;
  t2193 = t2191 + t2192;
  t2197 = -1.*t87*t1752*t48*t1716;
  t2198 = t87*t1752*t1719*t98;
  t2199 = t87*t1752*t48*t1714;
  t2200 = t1710*t87*t1752*t98;
  t2201 = t2199 + t2200;
  t2203 = -1.*t1710*t87*t1752*t48;
  t2204 = t87*t1752*t1714*t98;
  t2205 = t2203 + t2204;
  t2209 = -1.*t87*t1752*t48*t1737;
  t2210 = t87*t1752*t1740*t98;
  t2211 = t87*t1752*t48*t1735;
  t2212 = t1731*t87*t1752*t98;
  t2213 = t2211 + t2212;
  t2364 = -1.*t1731*t87*t1752*t48;
  t2365 = t87*t1752*t1735*t98;
  t2366 = t2364 + t2365;
  t2370 = -0.28121*t87*t1753*t63;
  t2190 = 0.15121*t2189;
  t2372 = -0.28121*t1758*t2193;
  t1956 = -1.*t1955;
  t1957 = 1. + t1956;
  t2373 = -1.*t87*t1753*t63;
  t2374 = t1756*t2193;
  t2375 = t2373 + t2374;
  t2398 = -1.*t1756*t87*t63;
  t2399 = -1.*t1753*t2193;
  t2400 = t2398 + t2399;
  t2379 = -0.28121*t87*t1929*t63;
  t2202 = -0.15121*t2201;
  t2381 = 0.28121*t1934*t2205;
  t1971 = -1.*t1970;
  t1972 = 1. + t1971;
  t2382 = t87*t1929*t63;
  t2383 = t1932*t2205;
  t2384 = t2382 + t2383;
  t2409 = -1.*t1932*t87*t63;
  t2410 = t1929*t2205;
  t2411 = t2409 + t2410;
  t2388 = -0.28121*t87*t1942*t63;
  t2363 = -0.15121*t2213;
  t2390 = -0.28121*t1947*t2366;
  t2121 = -1.*t2120;
  t2122 = 1. + t2121;
  t2391 = -1.*t87*t1942*t63;
  t2392 = t1945*t2366;
  t2393 = t2391 + t2392;
  t2420 = -1.*t1945*t87*t63;
  t2421 = -1.*t1942*t2366;
  t2422 = t2420 + t2421;
  t2430 = t87*t1752*t98*t2141;
  t2431 = -1.*t87*t1752*t48*t2144;
  t2432 = t87*t1752*t2135*t98;
  t2433 = t87*t1752*t48*t2139;
  t2434 = t2432 + t2433;
  t2436 = -1.*t87*t1752*t48*t2135;
  t2437 = t87*t1752*t98*t2139;
  t2438 = t2436 + t2437;
  t2435 = 0.15121*t2434;
  t2443 = 0.28121*t2159*t2438;
  t2444 = -0.28121*t87*t63*t2161;
  t2170 = -1.*t2169;
  t2171 = 1. + t2170;
  t2445 = t2157*t2438;
  t2446 = t87*t63*t2161;
  t2447 = t2445 + t2446;
  t2452 = -1.*t87*t2157*t63;
  t2453 = t2438*t2161;
  t2454 = t2452 + t2453;
  t2463 = t87*t48*t63;
  t2464 = -1.*t53*t98;
  t2465 = t2463 + t2464;
  t2556 = t48*t53;
  t2557 = t87*t63*t98;
  t2558 = t2556 + t2557;
  t2555 = t153*t2465;
  t2559 = t43*t2558;
  t2560 = t31*t2465;
  t2562 = t9*t2558;
  t2563 = t2560 + t2562;
  t2565 = t9*t2465;
  t2568 = -1.*t31*t2558;
  t2569 = t2565 + t2568;
  t2583 = t1714*t2465;
  t2584 = t1710*t2558;
  t2585 = t2583 + t2584;
  t2580 = t1719*t2465;
  t2581 = t1716*t2558;
  t2590 = t1710*t2465;
  t2593 = -1.*t1714*t2558;
  t2594 = t2590 + t2593;
  t2605 = t1735*t2465;
  t2606 = t1731*t2558;
  t2607 = t2605 + t2606;
  t2602 = t1740*t2465;
  t2604 = t1737*t2558;
  t2614 = t1731*t2465;
  t2615 = -1.*t1735*t2558;
  t2616 = t2614 + t2615;
  t2575 = -0.28121*t1758*t2563;
  t2572 = 0.15121*t2569;
  t2586 = 0.28121*t1934*t2585;
  t2599 = -0.15121*t2594;
  t2610 = -0.28121*t1947*t2607;
  t2621 = -0.15121*t2616;
  t2690 = t2465*t2141;
  t2691 = t2558*t2144;
  t2692 = t2135*t2558;
  t2693 = t2465*t2139;
  t2694 = t2692 + t2693;
  t2696 = t2135*t2465;
  t2697 = -1.*t2558*t2139;
  t2698 = t2696 + t2697;
  t2703 = 0.28121*t2159*t2694;
  t2699 = 0.15121*t2698;
  t2721 = -1.*t87*t48*t63;
  t2722 = t53*t98;
  t2723 = t2721 + t2722;
  t2718 = -0.15121*t2135;
  t2719 = t2718 + t2143;
  t2720 = t2558*t2719;
  t2724 = 0.15121*t2135;
  t2725 = t2724 + t2143;
  t2726 = t2723*t2725;
  t2727 = -1.*t2723*t2139;
  t2728 = t2692 + t2727;
  t2731 = -1.*t2135*t2723;
  t2732 = t2731 + t2697;
  t2736 = 0.28121*t2159*t2728;
  t2733 = 0.15121*t2732;
  t2751 = t2135*t2723;
  t2752 = t2558*t2139;
  t2753 = t2751 + t2752;
  t2750 = 0.28121*t87*t1752*t2157;
  t2754 = 0.28121*t2753*t2161;
  t2755 = -1.*t87*t1752*t2157;
  t2756 = -1.*t2753*t2161;
  t2757 = t2755 + t2756;
  t2762 = t2157*t2753;
  t2763 = -1.*t87*t1752*t2161;
  t2764 = t2762 + t2763;
  t2773 = t87*t1752*t2157;
  t2774 = t2753*t2161;
  t2775 = t2773 + t2774;
  t2784 = 0.15121*t9;
  t2785 = -0.15121*t31;
  t2786 = t2784 + t2785;
  t2787 = t2786*t2723;
  t2788 = t2784 + t38;
  t2789 = t2788*t2558;
  t2790 = -1.*t31*t2723;
  t2791 = t2790 + t2562;
  t2793 = -1.*t9*t2723;
  t2794 = t2793 + t2568;
  t2798 = -0.28121*t1758*t2791;
  t2795 = 0.15121*t2794;
  t2813 = t9*t2723;
  t2814 = t31*t2558;
  t2815 = t2813 + t2814;
  t2812 = 0.28121*t1756*t87*t1752;
  t2816 = -0.28121*t1753*t2815;
  t2817 = t1756*t87*t1752;
  t2818 = -1.*t1753*t2815;
  t2819 = t2817 + t2818;
  t2823 = -1.*t87*t1752*t1753;
  t2824 = -1.*t1756*t2815;
  t2825 = t2823 + t2824;
  t2835 = t87*t1752*t1753;
  t2836 = t1756*t2815;
  t2837 = t2835 + t2836;
  t2846 = -0.15121*t1710;
  t2852 = -1.*t1714*t2723;
  t2853 = t2852 + t2584;
  t2847 = 0.15121*t1714;
  t2848 = t2846 + t2847;
  t2849 = t2848*t2723;
  t2850 = t2846 + t1715;
  t2851 = t2850*t2558;
  t2856 = -1.*t1710*t2723;
  t2857 = t2856 + t2593;
  t2854 = 0.28121*t1934*t2853;
  t2862 = -0.15121*t2857;
  t2875 = t1710*t2723;
  t2876 = t1714*t2558;
  t2877 = t2875 + t2876;
  t2874 = 0.28121*t1932*t87*t1752;
  t2878 = 0.28121*t1929*t2877;
  t2879 = -1.*t1932*t87*t1752;
  t2880 = -1.*t1929*t2877;
  t2881 = t2879 + t2880;
  t2885 = -1.*t87*t1752*t1929;
  t2886 = t1932*t2877;
  t2887 = t2885 + t2886;
  t2898 = t1932*t87*t1752;
  t2899 = t1929*t2877;
  t2900 = t2898 + t2899;
  t2914 = -1.*t1735*t2723;
  t2915 = t2914 + t2606;
  t2908 = -0.15121*t1731;
  t2909 = t2908 + t1736;
  t2910 = t2909*t2723;
  t2911 = 0.15121*t1731;
  t2912 = t2911 + t1736;
  t2913 = t2912*t2558;
  t2918 = -1.*t1731*t2723;
  t2919 = t2918 + t2615;
  t2916 = -0.28121*t1947*t2915;
  t2924 = -0.15121*t2919;
  t2937 = t1731*t2723;
  t2938 = t1735*t2558;
  t2939 = t2937 + t2938;
  t2936 = 0.28121*t1945*t87*t1752;
  t2940 = -0.28121*t1942*t2939;
  t2941 = t1945*t87*t1752;
  t2942 = -1.*t1942*t2939;
  t2943 = t2941 + t2942;
  t2947 = -1.*t87*t1752*t1942;
  t2948 = -1.*t1945*t2939;
  t2949 = t2947 + t2948;
  t2959 = t87*t1752*t1942;
  t2960 = t1945*t2939;
  t2961 = t2959 + t2960;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=-210.915;
  p_output1[3]=-11.5758*(t1717 + t1720 + t1724 + 0.15121*t1727) - 11.5758*(t1738 + t1741 + t1745 - 0.15121*t1748) - 13.6359*(t1717 + t1720 - 0.18121*t1723 + t1930 + t1935 + 0.28121*t1938) - 13.6359*(t1738 + t1741 - 0.18121*t1744 + t1943 + t1948 - 0.28121*t1951) - 2.7468000000000004*(t1717 + t1720 + t1724 + t1930 + t1935 + 0.50321*t1938*t1972 - 0.50321*t1974*t1977 + 0.50321*(t1938*t1970 + t1974*t1977)) - 2.7468000000000004*(t1738 + t1741 + t1745 + t1943 + t1948 - 0.50321*t1951*t2122 - 0.50321*t2124*t2127 - 0.50321*(t1951*t2120 - 1.*t2124*t2127)) - 11.5758*(t2142 + t2145 + t2149 + 0.15121*t2152) - 13.6359*(t2142 + t2145 + 0.18121*t2148 + t2160 + t2162 + 0.28121*t2165) - 2.7468000000000004*(t2142 + t2145 + t2149 + t2160 + t2162 + 0.50321*t2165*t2171 - 0.50321*t2175*t2176 + 0.50321*(t2165*t2169 + t2175*t2176)) - 13.6359*(t132 + t1754 + t1759 - 0.28121*t1925 + t195 + 0.18121*t218) - 11.5758*(t132 - 0.15121*t1706 + t195 + t234) - 2.7468000000000004*(t132 + t1754 + t1759 + t195 - 0.50321*t1925*t1957 - 0.50321*t1959*t1962 - 0.50321*(t1925*t1955 - 1.*t1959*t1962) + t234);
  p_output1[4]=-11.5758*(t2185 + t2186 + t2190 - 0.15121*t2193) - 11.5758*(t2197 + t2198 + t2202 + 0.15121*t2205) - 11.5758*(t2209 + t2210 + t2363 - 0.15121*t2366) - 13.6359*(t2185 + t2186 + 0.18121*t2189 + t2370 + t2372 - 0.28121*t2375) - 13.6359*(t2197 + t2198 - 0.18121*t2201 + t2379 + t2381 + 0.28121*t2384) - 13.6359*(t2209 + t2210 - 0.18121*t2213 + t2388 + t2390 - 0.28121*t2393) - 2.7468000000000004*(t2185 + t2186 + t2190 + t2370 + t2372 - 0.50321*t1957*t2375 - 0.50321*t1959*t2400 - 0.50321*(t1955*t2375 - 1.*t1959*t2400)) - 2.7468000000000004*(t2197 + t2198 + t2202 + t2379 + t2381 + 0.50321*t1972*t2384 - 0.50321*t1974*t2411 + 0.50321*(t1970*t2384 + t1974*t2411)) - 2.7468000000000004*(t2209 + t2210 + t2363 + t2388 + t2390 - 0.50321*t2122*t2393 - 0.50321*t2124*t2422 - 0.50321*(t2120*t2393 - 1.*t2124*t2422)) - 11.5758*(t2430 + t2431 + t2435 + 0.15121*t2438) - 13.6359*(t2430 + t2431 + 0.18121*t2434 + t2443 + t2444 + 0.28121*t2447) - 2.7468000000000004*(t2430 + t2431 + t2435 + t2443 + t2444 + 0.50321*t2171*t2447 - 0.50321*t2176*t2454 + 0.50321*(t2169*t2447 + t2176*t2454));
  p_output1[5]=-11.5758*(t2555 + t2559 - 0.15121*t2563 + t2572) - 13.6359*(t2555 + t2559 - 0.28121*t1756*t2563 + 0.18121*t2569 + t2575) - 2.7468000000000004*(t2555 + t2559 - 0.50321*t1756*t1957*t2563 + 0.50321*t1753*t1959*t2563 - 0.50321*(t1756*t1955*t2563 + t1753*t1959*t2563) + t2572 + t2575) - 13.6359*(t2580 + t2581 + 0.28121*t1932*t2585 + t2586 - 0.18121*t2594) - 11.5758*(t2580 + t2581 + 0.15121*t2585 + t2599) - 2.7468000000000004*(t2580 + t2581 + 0.50321*t1932*t1972*t2585 - 0.50321*t1929*t1974*t2585 + 0.50321*(t1932*t1970*t2585 + t1929*t1974*t2585) + t2586 + t2599) - 13.6359*(t2602 + t2604 - 0.28121*t1945*t2607 + t2610 - 0.18121*t2616) - 11.5758*(t2602 + t2604 - 0.15121*t2607 + t2621) - 2.7468000000000004*(t2602 + t2604 - 0.50321*t1945*t2122*t2607 + 0.50321*t1942*t2124*t2607 - 0.50321*(t1945*t2120*t2607 + t1942*t2124*t2607) + t2610 + t2621) - 11.5758*(t2690 + t2691 + 0.15121*t2694 + t2699) - 13.6359*(t2690 + t2691 + 0.28121*t2157*t2694 + 0.18121*t2698 + t2703) - 2.7468000000000004*(t2690 + t2691 + 0.50321*t2157*t2171*t2694 - 0.50321*t2161*t2176*t2694 + 0.50321*(t2157*t2169*t2694 + t2161*t2176*t2694) + t2699 + t2703);
  p_output1[6]=-11.5758*(t2720 + t2726 + 0.15121*t2728 + t2733) - 13.6359*(t2720 + t2726 + 0.28121*t2157*t2728 + 0.18121*t2732 + t2736) - 2.7468000000000004*(t2720 + t2726 + 0.50321*t2157*t2171*t2728 - 0.50321*t2161*t2176*t2728 + 0.50321*(t2157*t2169*t2728 + t2161*t2176*t2728) + t2733 + t2736);
  p_output1[7]=-13.6359*(t2750 + t2754 + 0.28121*t2757) - 2.7468000000000004*(t2750 + t2754 + 0.50321*t2171*t2757 - 0.50321*t2176*t2764 + 0.50321*(t2169*t2757 + t2176*t2764));
  p_output1[8]=-2.7468000000000004*(0.50321*t2176*t2764 - 0.50321*t2169*t2775 + 0.50321*(-1.*t2176*t2764 + t2169*t2775));
  p_output1[9]=-11.5758*(t2787 + t2789 - 0.15121*t2791 + t2795) - 13.6359*(t2787 + t2789 - 0.28121*t1756*t2791 + 0.18121*t2794 + t2798) - 2.7468000000000004*(t2787 + t2789 - 0.50321*t1756*t1957*t2791 + 0.50321*t1753*t1959*t2791 - 0.50321*(t1756*t1955*t2791 + t1753*t1959*t2791) + t2795 + t2798);
  p_output1[10]=-13.6359*(t2812 + t2816 - 0.28121*t2819) - 2.7468000000000004*(t2812 + t2816 - 0.50321*t1957*t2819 - 0.50321*t1959*t2825 - 0.50321*(t1955*t2819 - 1.*t1959*t2825));
  p_output1[11]=-2.7468000000000004*(-0.50321*t1955*t2819 - 0.50321*t1959*t2837 - 0.50321*(-1.*t1955*t2819 - 1.*t1959*t2837));
  p_output1[12]=-13.6359*(t2849 + t2851 + 0.28121*t1932*t2853 + t2854 - 0.18121*t2857) - 11.5758*(t2849 + t2851 + 0.15121*t2853 + t2862) - 2.7468000000000004*(t2849 + t2851 + 0.50321*t1932*t1972*t2853 - 0.50321*t1929*t1974*t2853 + 0.50321*(t1932*t1970*t2853 + t1929*t1974*t2853) + t2854 + t2862);
  p_output1[13]=-13.6359*(t2874 + t2878 + 0.28121*t2881) - 2.7468000000000004*(t2874 + t2878 + 0.50321*t1972*t2881 - 0.50321*t1974*t2887 + 0.50321*(t1970*t2881 + t1974*t2887));
  p_output1[14]=-2.7468000000000004*(0.50321*t1974*t2887 - 0.50321*t1970*t2900 + 0.50321*(-1.*t1974*t2887 + t1970*t2900));
  p_output1[15]=-13.6359*(t2910 + t2913 - 0.28121*t1945*t2915 + t2916 - 0.18121*t2919) - 11.5758*(t2910 + t2913 - 0.15121*t2915 + t2924) - 2.7468000000000004*(t2910 + t2913 - 0.50321*t1945*t2122*t2915 + 0.50321*t1942*t2124*t2915 - 0.50321*(t1945*t2120*t2915 + t1942*t2124*t2915) + t2916 + t2924);
  p_output1[16]=-13.6359*(t2936 + t2940 - 0.28121*t2943) - 2.7468000000000004*(t2936 + t2940 - 0.50321*t2122*t2943 - 0.50321*t2124*t2949 - 0.50321*(t2120*t2943 - 1.*t2124*t2949));
  p_output1[17]=-2.7468000000000004*(-0.50321*t2120*t2943 - 0.50321*t2124*t2961 - 0.50321*(-1.*t2120*t2943 - 1.*t2124*t2961));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ge_vec_ASTRo.hh"

namespace SymFunction
{

void Ge_vec_ASTRo_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
