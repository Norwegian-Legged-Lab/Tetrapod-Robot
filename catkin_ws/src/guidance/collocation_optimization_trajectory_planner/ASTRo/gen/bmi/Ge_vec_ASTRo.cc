/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 17:40:51 GMT+02:00
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
  double t7;
  double t10;
  double t13;
  double t27;
  double t34;
  double t83;
  double t44;
  double t49;
  double t59;
  double t94;
  double t67;
  double t104;
  double t112;
  double t157;
  double t173;
  double t184;
  double t1706;
  double t1707;
  double t1708;
  double t1710;
  double t1711;
  double t1727;
  double t1728;
  double t1729;
  double t1730;
  double t1731;
  double t20;
  double t39;
  double t128;
  double t139;
  double t149;
  double t191;
  double t196;
  double t206;
  double t214;
  double t241;
  double t242;
  double t1702;
  double t1748;
  double t1749;
  double t1752;
  double t1709;
  double t1712;
  double t1713;
  double t1714;
  double t1715;
  double t1716;
  double t1717;
  double t1718;
  double t1719;
  double t1721;
  double t1722;
  double t1723;
  double t1925;
  double t1928;
  double t1732;
  double t1733;
  double t1734;
  double t1735;
  double t1736;
  double t1737;
  double t1738;
  double t1739;
  double t1740;
  double t1742;
  double t1743;
  double t1744;
  double t1938;
  double t1941;
  double t1750;
  double t230;
  double t1753;
  double t1754;
  double t1755;
  double t1756;
  double t1920;
  double t1921;
  double t1951;
  double t1955;
  double t1956;
  double t1957;
  double t1958;
  double t1926;
  double t1720;
  double t1929;
  double t1930;
  double t1931;
  double t1932;
  double t1933;
  double t1934;
  double t1966;
  double t1970;
  double t1971;
  double t1972;
  double t1973;
  double t1939;
  double t1741;
  double t1942;
  double t1943;
  double t1944;
  double t1945;
  double t1946;
  double t1947;
  double t2116;
  double t2120;
  double t2121;
  double t2122;
  double t2123;
  double t2131;
  double t2132;
  double t2133;
  double t2134;
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
  double t2146;
  double t2147;
  double t2148;
  double t2153;
  double t2157;
  double t2145;
  double t2154;
  double t2155;
  double t2156;
  double t2158;
  double t2159;
  double t2160;
  double t2161;
  double t2165;
  double t2169;
  double t2170;
  double t2171;
  double t2172;
  double t2181;
  double t2182;
  double t2183;
  double t2184;
  double t2185;
  double t2187;
  double t2188;
  double t2189;
  double t2193;
  double t2194;
  double t2195;
  double t2196;
  double t2197;
  double t2199;
  double t2200;
  double t2201;
  double t2205;
  double t2206;
  double t2207;
  double t2208;
  double t2209;
  double t2360;
  double t2361;
  double t2362;
  double t2366;
  double t2186;
  double t2368;
  double t1952;
  double t1953;
  double t2369;
  double t2370;
  double t2371;
  double t2394;
  double t2395;
  double t2396;
  double t2375;
  double t2198;
  double t2377;
  double t1967;
  double t1968;
  double t2378;
  double t2379;
  double t2380;
  double t2405;
  double t2406;
  double t2407;
  double t2384;
  double t2359;
  double t2386;
  double t2117;
  double t2118;
  double t2387;
  double t2388;
  double t2389;
  double t2416;
  double t2417;
  double t2418;
  double t2426;
  double t2427;
  double t2428;
  double t2429;
  double t2430;
  double t2432;
  double t2433;
  double t2434;
  double t2431;
  double t2439;
  double t2440;
  double t2166;
  double t2167;
  double t2441;
  double t2442;
  double t2443;
  double t2448;
  double t2449;
  double t2450;
  double t2459;
  double t2460;
  double t2461;
  double t2552;
  double t2553;
  double t2554;
  double t2551;
  double t2555;
  double t2556;
  double t2558;
  double t2559;
  double t2561;
  double t2564;
  double t2565;
  double t2579;
  double t2580;
  double t2581;
  double t2576;
  double t2577;
  double t2586;
  double t2589;
  double t2590;
  double t2601;
  double t2602;
  double t2603;
  double t2598;
  double t2600;
  double t2610;
  double t2611;
  double t2612;
  double t2571;
  double t2568;
  double t2582;
  double t2595;
  double t2606;
  double t2617;
  double t2686;
  double t2687;
  double t2688;
  double t2689;
  double t2690;
  double t2692;
  double t2693;
  double t2694;
  double t2699;
  double t2695;
  double t2717;
  double t2718;
  double t2719;
  double t2714;
  double t2715;
  double t2716;
  double t2720;
  double t2721;
  double t2722;
  double t2723;
  double t2724;
  double t2727;
  double t2728;
  double t2732;
  double t2729;
  double t2747;
  double t2748;
  double t2749;
  double t2746;
  double t2750;
  double t2751;
  double t2752;
  double t2753;
  double t2758;
  double t2759;
  double t2760;
  double t2769;
  double t2770;
  double t2771;
  double t2780;
  double t2781;
  double t2782;
  double t2783;
  double t2784;
  double t2785;
  double t2786;
  double t2787;
  double t2789;
  double t2790;
  double t2794;
  double t2791;
  double t2809;
  double t2810;
  double t2811;
  double t2808;
  double t2812;
  double t2813;
  double t2814;
  double t2815;
  double t2819;
  double t2820;
  double t2821;
  double t2831;
  double t2832;
  double t2833;
  double t2842;
  double t2848;
  double t2849;
  double t2843;
  double t2844;
  double t2845;
  double t2846;
  double t2847;
  double t2852;
  double t2853;
  double t2850;
  double t2858;
  double t2871;
  double t2872;
  double t2873;
  double t2870;
  double t2874;
  double t2875;
  double t2876;
  double t2877;
  double t2881;
  double t2882;
  double t2883;
  double t2894;
  double t2895;
  double t2896;
  double t2910;
  double t2911;
  double t2904;
  double t2905;
  double t2906;
  double t2907;
  double t2908;
  double t2909;
  double t2914;
  double t2915;
  double t2912;
  double t2920;
  double t2933;
  double t2934;
  double t2935;
  double t2932;
  double t2936;
  double t2937;
  double t2938;
  double t2939;
  double t2943;
  double t2944;
  double t2945;
  double t2955;
  double t2956;
  double t2957;
  t7 = Cos(var1[9]);
  t10 = -1.*t7;
  t13 = 1. + t10;
  t27 = Sin(var1[9]);
  t34 = 0.15121*t27;
  t83 = Cos(var1[3]);
  t44 = Cos(var1[5]);
  t49 = Sin(var1[3]);
  t59 = Sin(var1[4]);
  t94 = Sin(var1[5]);
  t67 = t44*t49*t59;
  t104 = t83*t94;
  t112 = t67 + t104;
  t157 = t83*t44;
  t173 = -1.*t49*t59*t94;
  t184 = t157 + t173;
  t1706 = Cos(var1[12]);
  t1707 = -1.*t1706;
  t1708 = 1. + t1707;
  t1710 = Sin(var1[12]);
  t1711 = -0.15121*t1710;
  t1727 = Cos(var1[15]);
  t1728 = -1.*t1727;
  t1729 = 1. + t1728;
  t1730 = -0.15121*t1729;
  t1731 = Sin(var1[15]);
  t20 = -0.15121*t13;
  t39 = t20 + t34;
  t128 = t39*t112;
  t139 = 0.15121*t13;
  t149 = t139 + t34;
  t191 = t149*t184;
  t196 = -1.*t27*t112;
  t206 = t7*t184;
  t214 = t196 + t206;
  t241 = t7*t112;
  t242 = t27*t184;
  t1702 = t241 + t242;
  t1748 = Cos(var1[4]);
  t1749 = Sin(var1[10]);
  t1752 = Cos(var1[10]);
  t1709 = 0.15121*t1708;
  t1712 = t1709 + t1711;
  t1713 = t1712*t112;
  t1714 = -0.15121*t1708;
  t1715 = t1714 + t1711;
  t1716 = t1715*t184;
  t1717 = -1.*t1710*t112;
  t1718 = t1706*t184;
  t1719 = t1717 + t1718;
  t1721 = t1706*t112;
  t1722 = t1710*t184;
  t1723 = t1721 + t1722;
  t1925 = Sin(var1[13]);
  t1928 = Cos(var1[13]);
  t1732 = -0.15121*t1731;
  t1733 = t1730 + t1732;
  t1734 = t1733*t112;
  t1735 = 0.15121*t1731;
  t1736 = t1730 + t1735;
  t1737 = t1736*t184;
  t1738 = -1.*t1731*t112;
  t1739 = t1727*t184;
  t1740 = t1738 + t1739;
  t1742 = t1727*t112;
  t1743 = t1731*t184;
  t1744 = t1742 + t1743;
  t1938 = Sin(var1[16]);
  t1941 = Cos(var1[16]);
  t1750 = -0.28121*t1748*t1749*t49;
  t230 = 0.15121*t214;
  t1753 = -1.*t1752;
  t1754 = 1. + t1753;
  t1755 = -0.28121*t1754*t1702;
  t1756 = -1.*t1748*t1749*t49;
  t1920 = t1752*t1702;
  t1921 = t1756 + t1920;
  t1951 = Cos(var1[11]);
  t1955 = Sin(var1[11]);
  t1956 = -1.*t1752*t1748*t49;
  t1957 = -1.*t1749*t1702;
  t1958 = t1956 + t1957;
  t1926 = -0.28121*t1748*t1925*t49;
  t1720 = -0.15121*t1719;
  t1929 = -1.*t1928;
  t1930 = 1. + t1929;
  t1931 = 0.28121*t1930*t1723;
  t1932 = t1748*t1925*t49;
  t1933 = t1928*t1723;
  t1934 = t1932 + t1933;
  t1966 = Cos(var1[14]);
  t1970 = Sin(var1[14]);
  t1971 = -1.*t1928*t1748*t49;
  t1972 = t1925*t1723;
  t1973 = t1971 + t1972;
  t1939 = -0.28121*t1748*t1938*t49;
  t1741 = -0.15121*t1740;
  t1942 = -1.*t1941;
  t1943 = 1. + t1942;
  t1944 = -0.28121*t1943*t1744;
  t1945 = -1.*t1748*t1938*t49;
  t1946 = t1941*t1744;
  t1947 = t1945 + t1946;
  t2116 = Cos(var1[17]);
  t2120 = Sin(var1[17]);
  t2121 = -1.*t1941*t1748*t49;
  t2122 = -1.*t1938*t1744;
  t2123 = t2121 + t2122;
  t2131 = Cos(var1[6]);
  t2132 = -1.*t2131;
  t2133 = 1. + t2132;
  t2134 = 0.15121*t2133;
  t2135 = Sin(var1[6]);
  t2136 = -0.15121*t2135;
  t2137 = t2134 + t2136;
  t2138 = t184*t2137;
  t2139 = 0.15121*t2135;
  t2140 = t2134 + t2139;
  t2141 = t112*t2140;
  t2142 = t2131*t184;
  t2143 = -1.*t112*t2135;
  t2144 = t2142 + t2143;
  t2146 = t2131*t112;
  t2147 = t184*t2135;
  t2148 = t2146 + t2147;
  t2153 = Cos(var1[7]);
  t2157 = Sin(var1[7]);
  t2145 = 0.15121*t2144;
  t2154 = -1.*t2153;
  t2155 = 1. + t2154;
  t2156 = 0.28121*t2155*t2148;
  t2158 = -0.28121*t1748*t49*t2157;
  t2159 = t2153*t2148;
  t2160 = t1748*t49*t2157;
  t2161 = t2159 + t2160;
  t2165 = Cos(var1[8]);
  t2169 = -1.*t1748*t2153*t49;
  t2170 = t2148*t2157;
  t2171 = t2169 + t2170;
  t2172 = Sin(var1[8]);
  t2181 = -1.*t83*t1748*t44*t39;
  t2182 = t83*t1748*t149*t94;
  t2183 = t83*t1748*t44*t27;
  t2184 = t7*t83*t1748*t94;
  t2185 = t2183 + t2184;
  t2187 = -1.*t7*t83*t1748*t44;
  t2188 = t83*t1748*t27*t94;
  t2189 = t2187 + t2188;
  t2193 = -1.*t83*t1748*t44*t1712;
  t2194 = t83*t1748*t1715*t94;
  t2195 = t83*t1748*t44*t1710;
  t2196 = t1706*t83*t1748*t94;
  t2197 = t2195 + t2196;
  t2199 = -1.*t1706*t83*t1748*t44;
  t2200 = t83*t1748*t1710*t94;
  t2201 = t2199 + t2200;
  t2205 = -1.*t83*t1748*t44*t1733;
  t2206 = t83*t1748*t1736*t94;
  t2207 = t83*t1748*t44*t1731;
  t2208 = t1727*t83*t1748*t94;
  t2209 = t2207 + t2208;
  t2360 = -1.*t1727*t83*t1748*t44;
  t2361 = t83*t1748*t1731*t94;
  t2362 = t2360 + t2361;
  t2366 = -0.28121*t83*t1749*t59;
  t2186 = 0.15121*t2185;
  t2368 = -0.28121*t1754*t2189;
  t1952 = -1.*t1951;
  t1953 = 1. + t1952;
  t2369 = -1.*t83*t1749*t59;
  t2370 = t1752*t2189;
  t2371 = t2369 + t2370;
  t2394 = -1.*t1752*t83*t59;
  t2395 = -1.*t1749*t2189;
  t2396 = t2394 + t2395;
  t2375 = -0.28121*t83*t1925*t59;
  t2198 = -0.15121*t2197;
  t2377 = 0.28121*t1930*t2201;
  t1967 = -1.*t1966;
  t1968 = 1. + t1967;
  t2378 = t83*t1925*t59;
  t2379 = t1928*t2201;
  t2380 = t2378 + t2379;
  t2405 = -1.*t1928*t83*t59;
  t2406 = t1925*t2201;
  t2407 = t2405 + t2406;
  t2384 = -0.28121*t83*t1938*t59;
  t2359 = -0.15121*t2209;
  t2386 = -0.28121*t1943*t2362;
  t2117 = -1.*t2116;
  t2118 = 1. + t2117;
  t2387 = -1.*t83*t1938*t59;
  t2388 = t1941*t2362;
  t2389 = t2387 + t2388;
  t2416 = -1.*t1941*t83*t59;
  t2417 = -1.*t1938*t2362;
  t2418 = t2416 + t2417;
  t2426 = t83*t1748*t94*t2137;
  t2427 = -1.*t83*t1748*t44*t2140;
  t2428 = t83*t1748*t2131*t94;
  t2429 = t83*t1748*t44*t2135;
  t2430 = t2428 + t2429;
  t2432 = -1.*t83*t1748*t44*t2131;
  t2433 = t83*t1748*t94*t2135;
  t2434 = t2432 + t2433;
  t2431 = 0.15121*t2430;
  t2439 = 0.28121*t2155*t2434;
  t2440 = -0.28121*t83*t59*t2157;
  t2166 = -1.*t2165;
  t2167 = 1. + t2166;
  t2441 = t2153*t2434;
  t2442 = t83*t59*t2157;
  t2443 = t2441 + t2442;
  t2448 = -1.*t83*t2153*t59;
  t2449 = t2434*t2157;
  t2450 = t2448 + t2449;
  t2459 = t83*t44*t59;
  t2460 = -1.*t49*t94;
  t2461 = t2459 + t2460;
  t2552 = t44*t49;
  t2553 = t83*t59*t94;
  t2554 = t2552 + t2553;
  t2551 = t149*t2461;
  t2555 = t39*t2554;
  t2556 = t27*t2461;
  t2558 = t7*t2554;
  t2559 = t2556 + t2558;
  t2561 = t7*t2461;
  t2564 = -1.*t27*t2554;
  t2565 = t2561 + t2564;
  t2579 = t1710*t2461;
  t2580 = t1706*t2554;
  t2581 = t2579 + t2580;
  t2576 = t1715*t2461;
  t2577 = t1712*t2554;
  t2586 = t1706*t2461;
  t2589 = -1.*t1710*t2554;
  t2590 = t2586 + t2589;
  t2601 = t1731*t2461;
  t2602 = t1727*t2554;
  t2603 = t2601 + t2602;
  t2598 = t1736*t2461;
  t2600 = t1733*t2554;
  t2610 = t1727*t2461;
  t2611 = -1.*t1731*t2554;
  t2612 = t2610 + t2611;
  t2571 = -0.28121*t1754*t2559;
  t2568 = 0.15121*t2565;
  t2582 = 0.28121*t1930*t2581;
  t2595 = -0.15121*t2590;
  t2606 = -0.28121*t1943*t2603;
  t2617 = -0.15121*t2612;
  t2686 = t2461*t2137;
  t2687 = t2554*t2140;
  t2688 = t2131*t2554;
  t2689 = t2461*t2135;
  t2690 = t2688 + t2689;
  t2692 = t2131*t2461;
  t2693 = -1.*t2554*t2135;
  t2694 = t2692 + t2693;
  t2699 = 0.28121*t2155*t2690;
  t2695 = 0.15121*t2694;
  t2717 = -1.*t83*t44*t59;
  t2718 = t49*t94;
  t2719 = t2717 + t2718;
  t2714 = -0.15121*t2131;
  t2715 = t2714 + t2139;
  t2716 = t2554*t2715;
  t2720 = 0.15121*t2131;
  t2721 = t2720 + t2139;
  t2722 = t2719*t2721;
  t2723 = -1.*t2719*t2135;
  t2724 = t2688 + t2723;
  t2727 = -1.*t2131*t2719;
  t2728 = t2727 + t2693;
  t2732 = 0.28121*t2155*t2724;
  t2729 = 0.15121*t2728;
  t2747 = t2131*t2719;
  t2748 = t2554*t2135;
  t2749 = t2747 + t2748;
  t2746 = 0.28121*t83*t1748*t2153;
  t2750 = 0.28121*t2749*t2157;
  t2751 = -1.*t83*t1748*t2153;
  t2752 = -1.*t2749*t2157;
  t2753 = t2751 + t2752;
  t2758 = t2153*t2749;
  t2759 = -1.*t83*t1748*t2157;
  t2760 = t2758 + t2759;
  t2769 = t83*t1748*t2153;
  t2770 = t2749*t2157;
  t2771 = t2769 + t2770;
  t2780 = 0.15121*t7;
  t2781 = -0.15121*t27;
  t2782 = t2780 + t2781;
  t2783 = t2782*t2719;
  t2784 = t2780 + t34;
  t2785 = t2784*t2554;
  t2786 = -1.*t27*t2719;
  t2787 = t2786 + t2558;
  t2789 = -1.*t7*t2719;
  t2790 = t2789 + t2564;
  t2794 = -0.28121*t1754*t2787;
  t2791 = 0.15121*t2790;
  t2809 = t7*t2719;
  t2810 = t27*t2554;
  t2811 = t2809 + t2810;
  t2808 = 0.28121*t1752*t83*t1748;
  t2812 = -0.28121*t1749*t2811;
  t2813 = t1752*t83*t1748;
  t2814 = -1.*t1749*t2811;
  t2815 = t2813 + t2814;
  t2819 = -1.*t83*t1748*t1749;
  t2820 = -1.*t1752*t2811;
  t2821 = t2819 + t2820;
  t2831 = t83*t1748*t1749;
  t2832 = t1752*t2811;
  t2833 = t2831 + t2832;
  t2842 = -0.15121*t1706;
  t2848 = -1.*t1710*t2719;
  t2849 = t2848 + t2580;
  t2843 = 0.15121*t1710;
  t2844 = t2842 + t2843;
  t2845 = t2844*t2719;
  t2846 = t2842 + t1711;
  t2847 = t2846*t2554;
  t2852 = -1.*t1706*t2719;
  t2853 = t2852 + t2589;
  t2850 = 0.28121*t1930*t2849;
  t2858 = -0.15121*t2853;
  t2871 = t1706*t2719;
  t2872 = t1710*t2554;
  t2873 = t2871 + t2872;
  t2870 = 0.28121*t1928*t83*t1748;
  t2874 = 0.28121*t1925*t2873;
  t2875 = -1.*t1928*t83*t1748;
  t2876 = -1.*t1925*t2873;
  t2877 = t2875 + t2876;
  t2881 = -1.*t83*t1748*t1925;
  t2882 = t1928*t2873;
  t2883 = t2881 + t2882;
  t2894 = t1928*t83*t1748;
  t2895 = t1925*t2873;
  t2896 = t2894 + t2895;
  t2910 = -1.*t1731*t2719;
  t2911 = t2910 + t2602;
  t2904 = -0.15121*t1727;
  t2905 = t2904 + t1732;
  t2906 = t2905*t2719;
  t2907 = 0.15121*t1727;
  t2908 = t2907 + t1732;
  t2909 = t2908*t2554;
  t2914 = -1.*t1727*t2719;
  t2915 = t2914 + t2611;
  t2912 = -0.28121*t1943*t2911;
  t2920 = -0.15121*t2915;
  t2933 = t1727*t2719;
  t2934 = t1731*t2554;
  t2935 = t2933 + t2934;
  t2932 = 0.28121*t1941*t83*t1748;
  t2936 = -0.28121*t1938*t2935;
  t2937 = t1941*t83*t1748;
  t2938 = -1.*t1938*t2935;
  t2939 = t2937 + t2938;
  t2943 = -1.*t83*t1748*t1938;
  t2944 = -1.*t1941*t2935;
  t2945 = t2943 + t2944;
  t2955 = t83*t1748*t1938;
  t2956 = t1941*t2935;
  t2957 = t2955 + t2956;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=-210.915;
  p_output1[3]=-11.5758*(t1713 + t1716 + t1720 + 0.15121*t1723) - 11.5758*(t1734 + t1737 + t1741 - 0.15121*t1744) - 13.6359*(t1713 + t1716 - 0.18121*t1719 + t1926 + t1931 + 0.28121*t1934) - 13.6359*(t1734 + t1737 - 0.18121*t1740 + t1939 + t1944 - 0.28121*t1947) - 2.7468000000000004*(t1713 + t1716 + t1720 + t1926 + t1931 + 0.50321*t1934*t1968 - 0.50321*t1970*t1973 + 0.50321*(t1934*t1966 + t1970*t1973)) - 2.7468000000000004*(t1734 + t1737 + t1741 + t1939 + t1944 - 0.50321*t1947*t2118 - 0.50321*t2120*t2123 - 0.50321*(t1947*t2116 - 1.*t2120*t2123)) - 13.6359*(t128 + t1750 + t1755 + t191 - 0.28121*t1921 + 0.18121*t214) - 11.5758*(t2138 + t2141 + t2145 + 0.15121*t2148) - 13.6359*(t2138 + t2141 + 0.18121*t2144 + t2156 + t2158 + 0.28121*t2161) - 2.7468000000000004*(t2138 + t2141 + t2145 + t2156 + t2158 + 0.50321*t2161*t2167 - 0.50321*t2171*t2172 + 0.50321*(t2161*t2165 + t2171*t2172)) - 11.5758*(t128 - 0.15121*t1702 + t191 + t230) - 2.7468000000000004*(t128 + t1750 + t1755 + t191 - 0.50321*t1921*t1953 - 0.50321*t1955*t1958 - 0.50321*(t1921*t1951 - 1.*t1955*t1958) + t230);
  p_output1[4]=-11.5758*(t2181 + t2182 + t2186 - 0.15121*t2189) - 11.5758*(t2193 + t2194 + t2198 + 0.15121*t2201) - 11.5758*(t2205 + t2206 + t2359 - 0.15121*t2362) - 13.6359*(t2181 + t2182 + 0.18121*t2185 + t2366 + t2368 - 0.28121*t2371) - 13.6359*(t2193 + t2194 - 0.18121*t2197 + t2375 + t2377 + 0.28121*t2380) - 13.6359*(t2205 + t2206 - 0.18121*t2209 + t2384 + t2386 - 0.28121*t2389) - 2.7468000000000004*(t2181 + t2182 + t2186 + t2366 + t2368 - 0.50321*t1953*t2371 - 0.50321*t1955*t2396 - 0.50321*(t1951*t2371 - 1.*t1955*t2396)) - 2.7468000000000004*(t2193 + t2194 + t2198 + t2375 + t2377 + 0.50321*t1968*t2380 - 0.50321*t1970*t2407 + 0.50321*(t1966*t2380 + t1970*t2407)) - 2.7468000000000004*(t2205 + t2206 + t2359 + t2384 + t2386 - 0.50321*t2118*t2389 - 0.50321*t2120*t2418 - 0.50321*(t2116*t2389 - 1.*t2120*t2418)) - 11.5758*(t2426 + t2427 + t2431 + 0.15121*t2434) - 13.6359*(t2426 + t2427 + 0.18121*t2430 + t2439 + t2440 + 0.28121*t2443) - 2.7468000000000004*(t2426 + t2427 + t2431 + t2439 + t2440 + 0.50321*t2167*t2443 - 0.50321*t2172*t2450 + 0.50321*(t2165*t2443 + t2172*t2450));
  p_output1[5]=-11.5758*(t2551 + t2555 - 0.15121*t2559 + t2568) - 13.6359*(t2551 + t2555 - 0.28121*t1752*t2559 + 0.18121*t2565 + t2571) - 2.7468000000000004*(t2551 + t2555 - 0.50321*t1752*t1953*t2559 + 0.50321*t1749*t1955*t2559 - 0.50321*(t1752*t1951*t2559 + t1749*t1955*t2559) + t2568 + t2571) - 13.6359*(t2576 + t2577 + 0.28121*t1928*t2581 + t2582 - 0.18121*t2590) - 11.5758*(t2576 + t2577 + 0.15121*t2581 + t2595) - 2.7468000000000004*(t2576 + t2577 + 0.50321*t1928*t1968*t2581 - 0.50321*t1925*t1970*t2581 + 0.50321*(t1928*t1966*t2581 + t1925*t1970*t2581) + t2582 + t2595) - 13.6359*(t2598 + t2600 - 0.28121*t1941*t2603 + t2606 - 0.18121*t2612) - 11.5758*(t2598 + t2600 - 0.15121*t2603 + t2617) - 2.7468000000000004*(t2598 + t2600 - 0.50321*t1941*t2118*t2603 + 0.50321*t1938*t2120*t2603 - 0.50321*(t1941*t2116*t2603 + t1938*t2120*t2603) + t2606 + t2617) - 11.5758*(t2686 + t2687 + 0.15121*t2690 + t2695) - 13.6359*(t2686 + t2687 + 0.28121*t2153*t2690 + 0.18121*t2694 + t2699) - 2.7468000000000004*(t2686 + t2687 + 0.50321*t2153*t2167*t2690 - 0.50321*t2157*t2172*t2690 + 0.50321*(t2153*t2165*t2690 + t2157*t2172*t2690) + t2695 + t2699);
  p_output1[6]=-11.5758*(t2716 + t2722 + 0.15121*t2724 + t2729) - 13.6359*(t2716 + t2722 + 0.28121*t2153*t2724 + 0.18121*t2728 + t2732) - 2.7468000000000004*(t2716 + t2722 + 0.50321*t2153*t2167*t2724 - 0.50321*t2157*t2172*t2724 + 0.50321*(t2153*t2165*t2724 + t2157*t2172*t2724) + t2729 + t2732);
  p_output1[7]=-13.6359*(t2746 + t2750 + 0.28121*t2753) - 2.7468000000000004*(t2746 + t2750 + 0.50321*t2167*t2753 - 0.50321*t2172*t2760 + 0.50321*(t2165*t2753 + t2172*t2760));
  p_output1[8]=-2.7468000000000004*(0.50321*t2172*t2760 - 0.50321*t2165*t2771 + 0.50321*(-1.*t2172*t2760 + t2165*t2771));
  p_output1[9]=-11.5758*(t2783 + t2785 - 0.15121*t2787 + t2791) - 13.6359*(t2783 + t2785 - 0.28121*t1752*t2787 + 0.18121*t2790 + t2794) - 2.7468000000000004*(t2783 + t2785 - 0.50321*t1752*t1953*t2787 + 0.50321*t1749*t1955*t2787 - 0.50321*(t1752*t1951*t2787 + t1749*t1955*t2787) + t2791 + t2794);
  p_output1[10]=-13.6359*(t2808 + t2812 - 0.28121*t2815) - 2.7468000000000004*(t2808 + t2812 - 0.50321*t1953*t2815 - 0.50321*t1955*t2821 - 0.50321*(t1951*t2815 - 1.*t1955*t2821));
  p_output1[11]=-2.7468000000000004*(-0.50321*t1951*t2815 - 0.50321*t1955*t2833 - 0.50321*(-1.*t1951*t2815 - 1.*t1955*t2833));
  p_output1[12]=-13.6359*(t2845 + t2847 + 0.28121*t1928*t2849 + t2850 - 0.18121*t2853) - 11.5758*(t2845 + t2847 + 0.15121*t2849 + t2858) - 2.7468000000000004*(t2845 + t2847 + 0.50321*t1928*t1968*t2849 - 0.50321*t1925*t1970*t2849 + 0.50321*(t1928*t1966*t2849 + t1925*t1970*t2849) + t2850 + t2858);
  p_output1[13]=-13.6359*(t2870 + t2874 + 0.28121*t2877) - 2.7468000000000004*(t2870 + t2874 + 0.50321*t1968*t2877 - 0.50321*t1970*t2883 + 0.50321*(t1966*t2877 + t1970*t2883));
  p_output1[14]=-2.7468000000000004*(0.50321*t1970*t2883 - 0.50321*t1966*t2896 + 0.50321*(-1.*t1970*t2883 + t1966*t2896));
  p_output1[15]=-13.6359*(t2906 + t2909 - 0.28121*t1941*t2911 + t2912 - 0.18121*t2915) - 11.5758*(t2906 + t2909 - 0.15121*t2911 + t2920) - 2.7468000000000004*(t2906 + t2909 - 0.50321*t1941*t2118*t2911 + 0.50321*t1938*t2120*t2911 - 0.50321*(t1941*t2116*t2911 + t1938*t2120*t2911) + t2912 + t2920);
  p_output1[16]=-13.6359*(t2932 + t2936 - 0.28121*t2939) - 2.7468000000000004*(t2932 + t2936 - 0.50321*t2118*t2939 - 0.50321*t2120*t2945 - 0.50321*(t2116*t2939 - 1.*t2120*t2945));
  p_output1[17]=-2.7468000000000004*(-0.50321*t2116*t2939 - 0.50321*t2120*t2957 - 0.50321*(-1.*t2116*t2939 - 1.*t2120*t2957));
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
