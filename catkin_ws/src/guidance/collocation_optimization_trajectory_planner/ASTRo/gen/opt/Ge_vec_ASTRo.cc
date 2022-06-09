/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:52:23 GMT+02:00
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
  double t268;
  double t343;
  double t418;
  double t476;
  double t525;
  double t578;
  double t570;
  double t572;
  double t574;
  double t580;
  double t576;
  double t585;
  double t590;
  double t601;
  double t603;
  double t605;
  double t647;
  double t649;
  double t650;
  double t685;
  double t931;
  double t2070;
  double t2071;
  double t2072;
  double t2073;
  double t2074;
  double t434;
  double t567;
  double t595;
  double t597;
  double t599;
  double t607;
  double t609;
  double t611;
  double t613;
  double t617;
  double t619;
  double t624;
  double t2091;
  double t2092;
  double t2095;
  double t651;
  double t1148;
  double t1255;
  double t1615;
  double t1961;
  double t1962;
  double t1966;
  double t1973;
  double t1980;
  double t1988;
  double t1995;
  double t2002;
  double t2105;
  double t2108;
  double t2075;
  double t2076;
  double t2077;
  double t2078;
  double t2079;
  double t2080;
  double t2081;
  double t2082;
  double t2083;
  double t2085;
  double t2086;
  double t2087;
  double t2118;
  double t2121;
  double t2093;
  double t615;
  double t2096;
  double t2097;
  double t2098;
  double t2099;
  double t2100;
  double t2101;
  double t2206;
  double t2228;
  double t2235;
  double t2239;
  double t2273;
  double t2106;
  double t1984;
  double t2109;
  double t2110;
  double t2111;
  double t2112;
  double t2113;
  double t2114;
  double t2281;
  double t2285;
  double t2286;
  double t2287;
  double t2288;
  double t2119;
  double t2084;
  double t2122;
  double t2123;
  double t2124;
  double t2125;
  double t2126;
  double t2156;
  double t2296;
  double t2300;
  double t2301;
  double t2302;
  double t2303;
  double t2311;
  double t2312;
  double t2313;
  double t2314;
  double t2315;
  double t2316;
  double t2317;
  double t2318;
  double t2319;
  double t2320;
  double t2321;
  double t2322;
  double t2323;
  double t2324;
  double t2326;
  double t2327;
  double t2328;
  double t2399;
  double t2403;
  double t2325;
  double t2400;
  double t2401;
  double t2402;
  double t2408;
  double t2420;
  double t2425;
  double t2436;
  double t2458;
  double t2472;
  double t2507;
  double t2562;
  double t2563;
  double t2572;
  double t2573;
  double t2574;
  double t2575;
  double t2576;
  double t2578;
  double t2579;
  double t2580;
  double t2584;
  double t2585;
  double t2586;
  double t2587;
  double t2588;
  double t2590;
  double t2591;
  double t2592;
  double t2596;
  double t2597;
  double t2598;
  double t2599;
  double t2600;
  double t2602;
  double t2603;
  double t2604;
  double t2608;
  double t2577;
  double t2610;
  double t2213;
  double t2217;
  double t2611;
  double t2612;
  double t2613;
  double t2636;
  double t2637;
  double t2638;
  double t2617;
  double t2589;
  double t2619;
  double t2282;
  double t2283;
  double t2620;
  double t2621;
  double t2622;
  double t2647;
  double t2648;
  double t2649;
  double t2626;
  double t2601;
  double t2628;
  double t2297;
  double t2298;
  double t2629;
  double t2630;
  double t2631;
  double t2658;
  double t2659;
  double t2660;
  double t2672;
  double t2683;
  double t2688;
  double t2699;
  double t2704;
  double t2716;
  double t2721;
  double t2722;
  double t2715;
  double t2762;
  double t2763;
  double t2459;
  double t2460;
  double t2764;
  double t2765;
  double t2766;
  double t2771;
  double t2772;
  double t2773;
  double t2782;
  double t2783;
  double t2784;
  double t2786;
  double t2787;
  double t2788;
  double t2785;
  double t2789;
  double t2790;
  double t2791;
  double t2792;
  double t2794;
  double t2795;
  double t2796;
  double t2807;
  double t2808;
  double t2809;
  double t2805;
  double t2806;
  double t2812;
  double t2813;
  double t2814;
  double t2824;
  double t2825;
  double t2826;
  double t2822;
  double t2823;
  double t2829;
  double t2830;
  double t2831;
  double t2800;
  double t2797;
  double t2810;
  double t2819;
  double t2827;
  double t2836;
  double t2863;
  double t2864;
  double t2865;
  double t2866;
  double t2867;
  double t2884;
  double t2888;
  double t2901;
  double t2923;
  double t2905;
  double t2952;
  double t2953;
  double t2954;
  double t2949;
  double t2950;
  double t2951;
  double t2955;
  double t2956;
  double t2957;
  double t2958;
  double t2959;
  double t2961;
  double t2962;
  double t2966;
  double t2963;
  double t2981;
  double t2982;
  double t2983;
  double t2980;
  double t2984;
  double t2985;
  double t2986;
  double t2987;
  double t2992;
  double t2993;
  double t2994;
  double t3003;
  double t3004;
  double t3005;
  double t3014;
  double t3015;
  double t3016;
  double t3017;
  double t3018;
  double t3019;
  double t3020;
  double t3021;
  double t3023;
  double t3024;
  double t3028;
  double t3025;
  double t3043;
  double t3044;
  double t3045;
  double t3042;
  double t3046;
  double t3047;
  double t3048;
  double t3049;
  double t3053;
  double t3054;
  double t3055;
  double t3065;
  double t3066;
  double t3067;
  double t3076;
  double t3082;
  double t3083;
  double t3077;
  double t3078;
  double t3079;
  double t3080;
  double t3081;
  double t3086;
  double t3087;
  double t3084;
  double t3092;
  double t3105;
  double t3106;
  double t3107;
  double t3104;
  double t3108;
  double t3109;
  double t3110;
  double t3111;
  double t3115;
  double t3116;
  double t3117;
  double t3128;
  double t3129;
  double t3130;
  double t3144;
  double t3145;
  double t3138;
  double t3139;
  double t3140;
  double t3141;
  double t3142;
  double t3143;
  double t3148;
  double t3149;
  double t3146;
  double t3154;
  double t3167;
  double t3168;
  double t3169;
  double t3166;
  double t3170;
  double t3171;
  double t3172;
  double t3173;
  double t3177;
  double t3178;
  double t3179;
  double t3189;
  double t3190;
  double t3191;
  t268 = Cos(var1[9]);
  t343 = -1.*t268;
  t418 = 1. + t343;
  t476 = Sin(var1[9]);
  t525 = 0.15121*t476;
  t578 = Cos(var1[3]);
  t570 = Cos(var1[5]);
  t572 = Sin(var1[3]);
  t574 = Sin(var1[4]);
  t580 = Sin(var1[5]);
  t576 = t570*t572*t574;
  t585 = t578*t580;
  t590 = t576 + t585;
  t601 = t578*t570;
  t603 = -1.*t572*t574*t580;
  t605 = t601 + t603;
  t647 = Cos(var1[12]);
  t649 = -1.*t647;
  t650 = 1. + t649;
  t685 = Sin(var1[12]);
  t931 = -0.15121*t685;
  t2070 = Cos(var1[15]);
  t2071 = -1.*t2070;
  t2072 = 1. + t2071;
  t2073 = -0.15121*t2072;
  t2074 = Sin(var1[15]);
  t434 = -0.15121*t418;
  t567 = t434 + t525;
  t595 = t567*t590;
  t597 = 0.15121*t418;
  t599 = t597 + t525;
  t607 = t599*t605;
  t609 = -1.*t476*t590;
  t611 = t268*t605;
  t613 = t609 + t611;
  t617 = t268*t590;
  t619 = t476*t605;
  t624 = t617 + t619;
  t2091 = Cos(var1[4]);
  t2092 = Sin(var1[10]);
  t2095 = Cos(var1[10]);
  t651 = 0.15121*t650;
  t1148 = t651 + t931;
  t1255 = t1148*t590;
  t1615 = -0.15121*t650;
  t1961 = t1615 + t931;
  t1962 = t1961*t605;
  t1966 = -1.*t685*t590;
  t1973 = t647*t605;
  t1980 = t1966 + t1973;
  t1988 = t647*t590;
  t1995 = t685*t605;
  t2002 = t1988 + t1995;
  t2105 = Sin(var1[13]);
  t2108 = Cos(var1[13]);
  t2075 = -0.15121*t2074;
  t2076 = t2073 + t2075;
  t2077 = t2076*t590;
  t2078 = 0.15121*t2074;
  t2079 = t2073 + t2078;
  t2080 = t2079*t605;
  t2081 = -1.*t2074*t590;
  t2082 = t2070*t605;
  t2083 = t2081 + t2082;
  t2085 = t2070*t590;
  t2086 = t2074*t605;
  t2087 = t2085 + t2086;
  t2118 = Sin(var1[16]);
  t2121 = Cos(var1[16]);
  t2093 = -0.28121*t2091*t2092*t572;
  t615 = 0.15121*t613;
  t2096 = -1.*t2095;
  t2097 = 1. + t2096;
  t2098 = -0.28121*t2097*t624;
  t2099 = -1.*t2091*t2092*t572;
  t2100 = t2095*t624;
  t2101 = t2099 + t2100;
  t2206 = Cos(var1[11]);
  t2228 = Sin(var1[11]);
  t2235 = -1.*t2095*t2091*t572;
  t2239 = -1.*t2092*t624;
  t2273 = t2235 + t2239;
  t2106 = -0.28121*t2091*t2105*t572;
  t1984 = -0.15121*t1980;
  t2109 = -1.*t2108;
  t2110 = 1. + t2109;
  t2111 = 0.28121*t2110*t2002;
  t2112 = t2091*t2105*t572;
  t2113 = t2108*t2002;
  t2114 = t2112 + t2113;
  t2281 = Cos(var1[14]);
  t2285 = Sin(var1[14]);
  t2286 = -1.*t2108*t2091*t572;
  t2287 = t2105*t2002;
  t2288 = t2286 + t2287;
  t2119 = -0.28121*t2091*t2118*t572;
  t2084 = -0.15121*t2083;
  t2122 = -1.*t2121;
  t2123 = 1. + t2122;
  t2124 = -0.28121*t2123*t2087;
  t2125 = -1.*t2091*t2118*t572;
  t2126 = t2121*t2087;
  t2156 = t2125 + t2126;
  t2296 = Cos(var1[17]);
  t2300 = Sin(var1[17]);
  t2301 = -1.*t2121*t2091*t572;
  t2302 = -1.*t2118*t2087;
  t2303 = t2301 + t2302;
  t2311 = Cos(var1[6]);
  t2312 = -1.*t2311;
  t2313 = 1. + t2312;
  t2314 = 0.15121*t2313;
  t2315 = Sin(var1[6]);
  t2316 = -0.15121*t2315;
  t2317 = t2314 + t2316;
  t2318 = t605*t2317;
  t2319 = 0.15121*t2315;
  t2320 = t2314 + t2319;
  t2321 = t590*t2320;
  t2322 = t2311*t605;
  t2323 = -1.*t590*t2315;
  t2324 = t2322 + t2323;
  t2326 = t2311*t590;
  t2327 = t605*t2315;
  t2328 = t2326 + t2327;
  t2399 = Cos(var1[7]);
  t2403 = Sin(var1[7]);
  t2325 = 0.15121*t2324;
  t2400 = -1.*t2399;
  t2401 = 1. + t2400;
  t2402 = 0.28121*t2401*t2328;
  t2408 = -0.28121*t2091*t572*t2403;
  t2420 = t2399*t2328;
  t2425 = t2091*t572*t2403;
  t2436 = t2420 + t2425;
  t2458 = Cos(var1[8]);
  t2472 = -1.*t2091*t2399*t572;
  t2507 = t2328*t2403;
  t2562 = t2472 + t2507;
  t2563 = Sin(var1[8]);
  t2572 = -1.*t578*t2091*t570*t567;
  t2573 = t578*t2091*t599*t580;
  t2574 = t578*t2091*t570*t476;
  t2575 = t268*t578*t2091*t580;
  t2576 = t2574 + t2575;
  t2578 = -1.*t268*t578*t2091*t570;
  t2579 = t578*t2091*t476*t580;
  t2580 = t2578 + t2579;
  t2584 = -1.*t578*t2091*t570*t1148;
  t2585 = t578*t2091*t1961*t580;
  t2586 = t578*t2091*t570*t685;
  t2587 = t647*t578*t2091*t580;
  t2588 = t2586 + t2587;
  t2590 = -1.*t647*t578*t2091*t570;
  t2591 = t578*t2091*t685*t580;
  t2592 = t2590 + t2591;
  t2596 = -1.*t578*t2091*t570*t2076;
  t2597 = t578*t2091*t2079*t580;
  t2598 = t578*t2091*t570*t2074;
  t2599 = t2070*t578*t2091*t580;
  t2600 = t2598 + t2599;
  t2602 = -1.*t2070*t578*t2091*t570;
  t2603 = t578*t2091*t2074*t580;
  t2604 = t2602 + t2603;
  t2608 = -0.28121*t578*t2092*t574;
  t2577 = 0.15121*t2576;
  t2610 = -0.28121*t2097*t2580;
  t2213 = -1.*t2206;
  t2217 = 1. + t2213;
  t2611 = -1.*t578*t2092*t574;
  t2612 = t2095*t2580;
  t2613 = t2611 + t2612;
  t2636 = -1.*t2095*t578*t574;
  t2637 = -1.*t2092*t2580;
  t2638 = t2636 + t2637;
  t2617 = -0.28121*t578*t2105*t574;
  t2589 = -0.15121*t2588;
  t2619 = 0.28121*t2110*t2592;
  t2282 = -1.*t2281;
  t2283 = 1. + t2282;
  t2620 = t578*t2105*t574;
  t2621 = t2108*t2592;
  t2622 = t2620 + t2621;
  t2647 = -1.*t2108*t578*t574;
  t2648 = t2105*t2592;
  t2649 = t2647 + t2648;
  t2626 = -0.28121*t578*t2118*t574;
  t2601 = -0.15121*t2600;
  t2628 = -0.28121*t2123*t2604;
  t2297 = -1.*t2296;
  t2298 = 1. + t2297;
  t2629 = -1.*t578*t2118*t574;
  t2630 = t2121*t2604;
  t2631 = t2629 + t2630;
  t2658 = -1.*t2121*t578*t574;
  t2659 = -1.*t2118*t2604;
  t2660 = t2658 + t2659;
  t2672 = t578*t2091*t580*t2317;
  t2683 = -1.*t578*t2091*t570*t2320;
  t2688 = t578*t2091*t2311*t580;
  t2699 = t578*t2091*t570*t2315;
  t2704 = t2688 + t2699;
  t2716 = -1.*t578*t2091*t570*t2311;
  t2721 = t578*t2091*t580*t2315;
  t2722 = t2716 + t2721;
  t2715 = 0.15121*t2704;
  t2762 = 0.28121*t2401*t2722;
  t2763 = -0.28121*t578*t574*t2403;
  t2459 = -1.*t2458;
  t2460 = 1. + t2459;
  t2764 = t2399*t2722;
  t2765 = t578*t574*t2403;
  t2766 = t2764 + t2765;
  t2771 = -1.*t578*t2399*t574;
  t2772 = t2722*t2403;
  t2773 = t2771 + t2772;
  t2782 = t578*t570*t574;
  t2783 = -1.*t572*t580;
  t2784 = t2782 + t2783;
  t2786 = t570*t572;
  t2787 = t578*t574*t580;
  t2788 = t2786 + t2787;
  t2785 = t599*t2784;
  t2789 = t567*t2788;
  t2790 = t476*t2784;
  t2791 = t268*t2788;
  t2792 = t2790 + t2791;
  t2794 = t268*t2784;
  t2795 = -1.*t476*t2788;
  t2796 = t2794 + t2795;
  t2807 = t685*t2784;
  t2808 = t647*t2788;
  t2809 = t2807 + t2808;
  t2805 = t1961*t2784;
  t2806 = t1148*t2788;
  t2812 = t647*t2784;
  t2813 = -1.*t685*t2788;
  t2814 = t2812 + t2813;
  t2824 = t2074*t2784;
  t2825 = t2070*t2788;
  t2826 = t2824 + t2825;
  t2822 = t2079*t2784;
  t2823 = t2076*t2788;
  t2829 = t2070*t2784;
  t2830 = -1.*t2074*t2788;
  t2831 = t2829 + t2830;
  t2800 = -0.28121*t2097*t2792;
  t2797 = 0.15121*t2796;
  t2810 = 0.28121*t2110*t2809;
  t2819 = -0.15121*t2814;
  t2827 = -0.28121*t2123*t2826;
  t2836 = -0.15121*t2831;
  t2863 = t2784*t2317;
  t2864 = t2788*t2320;
  t2865 = t2311*t2788;
  t2866 = t2784*t2315;
  t2867 = t2865 + t2866;
  t2884 = t2311*t2784;
  t2888 = -1.*t2788*t2315;
  t2901 = t2884 + t2888;
  t2923 = 0.28121*t2401*t2867;
  t2905 = 0.15121*t2901;
  t2952 = -1.*t578*t570*t574;
  t2953 = t572*t580;
  t2954 = t2952 + t2953;
  t2949 = -0.15121*t2311;
  t2950 = t2949 + t2319;
  t2951 = t2788*t2950;
  t2955 = 0.15121*t2311;
  t2956 = t2955 + t2319;
  t2957 = t2954*t2956;
  t2958 = -1.*t2954*t2315;
  t2959 = t2865 + t2958;
  t2961 = -1.*t2311*t2954;
  t2962 = t2961 + t2888;
  t2966 = 0.28121*t2401*t2959;
  t2963 = 0.15121*t2962;
  t2981 = t2311*t2954;
  t2982 = t2788*t2315;
  t2983 = t2981 + t2982;
  t2980 = 0.28121*t578*t2091*t2399;
  t2984 = 0.28121*t2983*t2403;
  t2985 = -1.*t578*t2091*t2399;
  t2986 = -1.*t2983*t2403;
  t2987 = t2985 + t2986;
  t2992 = t2399*t2983;
  t2993 = -1.*t578*t2091*t2403;
  t2994 = t2992 + t2993;
  t3003 = t578*t2091*t2399;
  t3004 = t2983*t2403;
  t3005 = t3003 + t3004;
  t3014 = 0.15121*t268;
  t3015 = -0.15121*t476;
  t3016 = t3014 + t3015;
  t3017 = t3016*t2954;
  t3018 = t3014 + t525;
  t3019 = t3018*t2788;
  t3020 = -1.*t476*t2954;
  t3021 = t3020 + t2791;
  t3023 = -1.*t268*t2954;
  t3024 = t3023 + t2795;
  t3028 = -0.28121*t2097*t3021;
  t3025 = 0.15121*t3024;
  t3043 = t268*t2954;
  t3044 = t476*t2788;
  t3045 = t3043 + t3044;
  t3042 = 0.28121*t2095*t578*t2091;
  t3046 = -0.28121*t2092*t3045;
  t3047 = t2095*t578*t2091;
  t3048 = -1.*t2092*t3045;
  t3049 = t3047 + t3048;
  t3053 = -1.*t578*t2091*t2092;
  t3054 = -1.*t2095*t3045;
  t3055 = t3053 + t3054;
  t3065 = t578*t2091*t2092;
  t3066 = t2095*t3045;
  t3067 = t3065 + t3066;
  t3076 = -0.15121*t647;
  t3082 = -1.*t685*t2954;
  t3083 = t3082 + t2808;
  t3077 = 0.15121*t685;
  t3078 = t3076 + t3077;
  t3079 = t3078*t2954;
  t3080 = t3076 + t931;
  t3081 = t3080*t2788;
  t3086 = -1.*t647*t2954;
  t3087 = t3086 + t2813;
  t3084 = 0.28121*t2110*t3083;
  t3092 = -0.15121*t3087;
  t3105 = t647*t2954;
  t3106 = t685*t2788;
  t3107 = t3105 + t3106;
  t3104 = 0.28121*t2108*t578*t2091;
  t3108 = 0.28121*t2105*t3107;
  t3109 = -1.*t2108*t578*t2091;
  t3110 = -1.*t2105*t3107;
  t3111 = t3109 + t3110;
  t3115 = -1.*t578*t2091*t2105;
  t3116 = t2108*t3107;
  t3117 = t3115 + t3116;
  t3128 = t2108*t578*t2091;
  t3129 = t2105*t3107;
  t3130 = t3128 + t3129;
  t3144 = -1.*t2074*t2954;
  t3145 = t3144 + t2825;
  t3138 = -0.15121*t2070;
  t3139 = t3138 + t2075;
  t3140 = t3139*t2954;
  t3141 = 0.15121*t2070;
  t3142 = t3141 + t2075;
  t3143 = t3142*t2788;
  t3148 = -1.*t2070*t2954;
  t3149 = t3148 + t2830;
  t3146 = -0.28121*t2123*t3145;
  t3154 = -0.15121*t3149;
  t3167 = t2070*t2954;
  t3168 = t2074*t2788;
  t3169 = t3167 + t3168;
  t3166 = 0.28121*t2121*t578*t2091;
  t3170 = -0.28121*t2118*t3169;
  t3171 = t2121*t578*t2091;
  t3172 = -1.*t2118*t3169;
  t3173 = t3171 + t3172;
  t3177 = -1.*t578*t2091*t2118;
  t3178 = -1.*t2121*t3169;
  t3179 = t3177 + t3178;
  t3189 = t578*t2091*t2118;
  t3190 = t2121*t3169;
  t3191 = t3189 + t3190;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=-210.915;
  p_output1[3]=-11.5758*(t1255 + t1962 + t1984 + 0.15121*t2002) - 11.5758*(t2077 + t2080 + t2084 - 0.15121*t2087) - 13.6359*(t1255 + t1962 - 0.18121*t1980 + t2106 + t2111 + 0.28121*t2114) - 13.6359*(t2077 + t2080 - 0.18121*t2083 + t2119 + t2124 - 0.28121*t2156) - 2.7468000000000004*(t1255 + t1962 + t1984 + t2106 + t2111 + 0.50321*t2114*t2283 - 0.50321*t2285*t2288 + 0.50321*(t2114*t2281 + t2285*t2288)) - 2.7468000000000004*(t2077 + t2080 + t2084 + t2119 + t2124 - 0.50321*t2156*t2298 - 0.50321*t2300*t2303 - 0.50321*(t2156*t2296 - 1.*t2300*t2303)) - 11.5758*(t2318 + t2321 + t2325 + 0.15121*t2328) - 13.6359*(t2318 + t2321 + 0.18121*t2324 + t2402 + t2408 + 0.28121*t2436) - 2.7468000000000004*(t2318 + t2321 + t2325 + t2402 + t2408 + 0.50321*t2436*t2460 - 0.50321*t2562*t2563 + 0.50321*(t2436*t2458 + t2562*t2563)) - 13.6359*(t2093 + t2098 - 0.28121*t2101 + t595 + t607 + 0.18121*t613) - 2.7468000000000004*(t2093 + t2098 - 0.50321*t2101*t2217 - 0.50321*t2228*t2273 - 0.50321*(t2101*t2206 - 1.*t2228*t2273) + t595 + t607 + t615) - 11.5758*(t595 + t607 + t615 - 0.15121*t624);
  p_output1[4]=-11.5758*(t2572 + t2573 + t2577 - 0.15121*t2580) - 11.5758*(t2584 + t2585 + t2589 + 0.15121*t2592) - 11.5758*(t2596 + t2597 + t2601 - 0.15121*t2604) - 13.6359*(t2572 + t2573 + 0.18121*t2576 + t2608 + t2610 - 0.28121*t2613) - 13.6359*(t2584 + t2585 - 0.18121*t2588 + t2617 + t2619 + 0.28121*t2622) - 13.6359*(t2596 + t2597 - 0.18121*t2600 + t2626 + t2628 - 0.28121*t2631) - 2.7468000000000004*(t2572 + t2573 + t2577 + t2608 + t2610 - 0.50321*t2217*t2613 - 0.50321*t2228*t2638 - 0.50321*(t2206*t2613 - 1.*t2228*t2638)) - 2.7468000000000004*(t2584 + t2585 + t2589 + t2617 + t2619 + 0.50321*t2283*t2622 - 0.50321*t2285*t2649 + 0.50321*(t2281*t2622 + t2285*t2649)) - 2.7468000000000004*(t2596 + t2597 + t2601 + t2626 + t2628 - 0.50321*t2298*t2631 - 0.50321*t2300*t2660 - 0.50321*(t2296*t2631 - 1.*t2300*t2660)) - 11.5758*(t2672 + t2683 + t2715 + 0.15121*t2722) - 13.6359*(t2672 + t2683 + 0.18121*t2704 + t2762 + t2763 + 0.28121*t2766) - 2.7468000000000004*(t2672 + t2683 + t2715 + t2762 + t2763 + 0.50321*t2460*t2766 - 0.50321*t2563*t2773 + 0.50321*(t2458*t2766 + t2563*t2773));
  p_output1[5]=-11.5758*(t2785 + t2789 - 0.15121*t2792 + t2797) - 13.6359*(t2785 + t2789 - 0.28121*t2095*t2792 + 0.18121*t2796 + t2800) - 2.7468000000000004*(t2785 + t2789 - 0.50321*t2095*t2217*t2792 + 0.50321*t2092*t2228*t2792 - 0.50321*(t2095*t2206*t2792 + t2092*t2228*t2792) + t2797 + t2800) - 13.6359*(t2805 + t2806 + 0.28121*t2108*t2809 + t2810 - 0.18121*t2814) - 11.5758*(t2805 + t2806 + 0.15121*t2809 + t2819) - 2.7468000000000004*(t2805 + t2806 + 0.50321*t2108*t2283*t2809 - 0.50321*t2105*t2285*t2809 + 0.50321*(t2108*t2281*t2809 + t2105*t2285*t2809) + t2810 + t2819) - 13.6359*(t2822 + t2823 - 0.28121*t2121*t2826 + t2827 - 0.18121*t2831) - 11.5758*(t2822 + t2823 - 0.15121*t2826 + t2836) - 2.7468000000000004*(t2822 + t2823 - 0.50321*t2121*t2298*t2826 + 0.50321*t2118*t2300*t2826 - 0.50321*(t2121*t2296*t2826 + t2118*t2300*t2826) + t2827 + t2836) - 11.5758*(t2863 + t2864 + 0.15121*t2867 + t2905) - 13.6359*(t2863 + t2864 + 0.28121*t2399*t2867 + 0.18121*t2901 + t2923) - 2.7468000000000004*(t2863 + t2864 + 0.50321*t2399*t2460*t2867 - 0.50321*t2403*t2563*t2867 + 0.50321*(t2399*t2458*t2867 + t2403*t2563*t2867) + t2905 + t2923);
  p_output1[6]=-11.5758*(t2951 + t2957 + 0.15121*t2959 + t2963) - 13.6359*(t2951 + t2957 + 0.28121*t2399*t2959 + 0.18121*t2962 + t2966) - 2.7468000000000004*(t2951 + t2957 + 0.50321*t2399*t2460*t2959 - 0.50321*t2403*t2563*t2959 + 0.50321*(t2399*t2458*t2959 + t2403*t2563*t2959) + t2963 + t2966);
  p_output1[7]=-13.6359*(t2980 + t2984 + 0.28121*t2987) - 2.7468000000000004*(t2980 + t2984 + 0.50321*t2460*t2987 - 0.50321*t2563*t2994 + 0.50321*(t2458*t2987 + t2563*t2994));
  p_output1[8]=-2.7468000000000004*(0.50321*t2563*t2994 - 0.50321*t2458*t3005 + 0.50321*(-1.*t2563*t2994 + t2458*t3005));
  p_output1[9]=-11.5758*(t3017 + t3019 - 0.15121*t3021 + t3025) - 13.6359*(t3017 + t3019 - 0.28121*t2095*t3021 + 0.18121*t3024 + t3028) - 2.7468000000000004*(t3017 + t3019 - 0.50321*t2095*t2217*t3021 + 0.50321*t2092*t2228*t3021 - 0.50321*(t2095*t2206*t3021 + t2092*t2228*t3021) + t3025 + t3028);
  p_output1[10]=-13.6359*(t3042 + t3046 - 0.28121*t3049) - 2.7468000000000004*(t3042 + t3046 - 0.50321*t2217*t3049 - 0.50321*t2228*t3055 - 0.50321*(t2206*t3049 - 1.*t2228*t3055));
  p_output1[11]=-2.7468000000000004*(-0.50321*t2206*t3049 - 0.50321*t2228*t3067 - 0.50321*(-1.*t2206*t3049 - 1.*t2228*t3067));
  p_output1[12]=-13.6359*(t3079 + t3081 + 0.28121*t2108*t3083 + t3084 - 0.18121*t3087) - 11.5758*(t3079 + t3081 + 0.15121*t3083 + t3092) - 2.7468000000000004*(t3079 + t3081 + 0.50321*t2108*t2283*t3083 - 0.50321*t2105*t2285*t3083 + 0.50321*(t2108*t2281*t3083 + t2105*t2285*t3083) + t3084 + t3092);
  p_output1[13]=-13.6359*(t3104 + t3108 + 0.28121*t3111) - 2.7468000000000004*(t3104 + t3108 + 0.50321*t2283*t3111 - 0.50321*t2285*t3117 + 0.50321*(t2281*t3111 + t2285*t3117));
  p_output1[14]=-2.7468000000000004*(0.50321*t2285*t3117 - 0.50321*t2281*t3130 + 0.50321*(-1.*t2285*t3117 + t2281*t3130));
  p_output1[15]=-13.6359*(t3140 + t3143 - 0.28121*t2121*t3145 + t3146 - 0.18121*t3149) - 11.5758*(t3140 + t3143 - 0.15121*t3145 + t3154) - 2.7468000000000004*(t3140 + t3143 - 0.50321*t2121*t2298*t3145 + 0.50321*t2118*t2300*t3145 - 0.50321*(t2121*t2296*t3145 + t2118*t2300*t3145) + t3146 + t3154);
  p_output1[16]=-13.6359*(t3166 + t3170 - 0.28121*t3173) - 2.7468000000000004*(t3166 + t3170 - 0.50321*t2298*t3173 - 0.50321*t2300*t3179 - 0.50321*(t2296*t3173 - 1.*t2300*t3179));
  p_output1[17]=-2.7468000000000004*(-0.50321*t2296*t3173 - 0.50321*t2300*t3191 - 0.50321*(-1.*t2296*t3173 - 1.*t2300*t3191));
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

namespace DiagonalStance
{

void Ge_vec_ASTRo_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
