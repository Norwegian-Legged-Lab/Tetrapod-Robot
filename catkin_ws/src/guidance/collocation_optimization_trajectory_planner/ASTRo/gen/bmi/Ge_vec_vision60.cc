/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:23:37 GMT+02:00
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
  double t13;
  double t44;
  double t27;
  double t34;
  double t49;
  double t7;
  double t10;
  double t94;
  double t128;
  double t139;
  double t149;
  double t39;
  double t59;
  double t67;
  double t230;
  double t1928;
  double t83;
  double t1938;
  double t1940;
  double t20;
  double t104;
  double t112;
  double t157;
  double t173;
  double t184;
  double t191;
  double t1950;
  double t1955;
  double t1956;
  double t1957;
  double t1958;
  double t241;
  double t1929;
  double t1930;
  double t1931;
  double t1932;
  double t1933;
  double t1934;
  double t1966;
  double t1971;
  double t1972;
  double t1973;
  double t1974;
  double t1939;
  double t1941;
  double t1942;
  double t1943;
  double t1944;
  double t1945;
  double t1946;
  double t1982;
  double t2162;
  double t2163;
  double t2164;
  double t2165;
  double t1951;
  double t1952;
  double t1953;
  double t1954;
  double t1959;
  double t1960;
  double t1961;
  double t1962;
  double t2173;
  double t2174;
  double t2175;
  double t2176;
  double t2178;
  double t1967;
  double t1968;
  double t1969;
  double t1970;
  double t1975;
  double t1976;
  double t1977;
  double t1978;
  double t2188;
  double t2189;
  double t2190;
  double t2191;
  double t2193;
  double t2158;
  double t2159;
  double t2160;
  double t2161;
  double t2166;
  double t2167;
  double t2168;
  double t2169;
  double t2203;
  double t2204;
  double t2205;
  double t2206;
  double t2208;
  double t242;
  double t2365;
  double t2369;
  double t2366;
  double t2367;
  double t2368;
  double t2370;
  double t2371;
  double t2372;
  double t2373;
  double t2377;
  double t2382;
  double t2383;
  double t2384;
  double t2385;
  double t2378;
  double t2379;
  double t2380;
  double t2381;
  double t2386;
  double t2387;
  double t2388;
  double t2389;
  double t2393;
  double t2397;
  double t2398;
  double t2399;
  double t2400;
  double t2409;
  double t2410;
  double t2411;
  double t2412;
  double t2413;
  double t2414;
  double t2437;
  double t2438;
  double t2439;
  double t2419;
  double t2420;
  double t2421;
  double t2422;
  double t2423;
  double t2449;
  double t2450;
  double t2451;
  double t2427;
  double t2428;
  double t2429;
  double t2430;
  double t2431;
  double t2646;
  double t2647;
  double t2648;
  double t2435;
  double t2436;
  double t2440;
  double t2179;
  double t2180;
  double t2441;
  double t2442;
  double t2443;
  double t2656;
  double t2657;
  double t2658;
  double t2447;
  double t2448;
  double t2452;
  double t2194;
  double t2195;
  double t2453;
  double t2454;
  double t2455;
  double t2667;
  double t2668;
  double t2669;
  double t2459;
  double t2645;
  double t2649;
  double t2209;
  double t2210;
  double t2650;
  double t2651;
  double t2652;
  double t2678;
  double t2679;
  double t2680;
  double t2418;
  double t2689;
  double t2690;
  double t2691;
  double t2692;
  double t2693;
  double t2699;
  double t2700;
  double t2701;
  double t2697;
  double t2698;
  double t2702;
  double t2394;
  double t2395;
  double t2703;
  double t2704;
  double t2705;
  double t2710;
  double t2711;
  double t2712;
  double t2721;
  double t2722;
  double t2723;
  double t2726;
  double t2727;
  double t2728;
  double t2729;
  double t2738;
  double t2724;
  double t2736;
  double t2732;
  double t2745;
  double t2746;
  double t2747;
  double t2748;
  double t2749;
  double t2750;
  double t2896;
  double t2897;
  double t2898;
  double t2754;
  double t2755;
  double t2756;
  double t2757;
  double t2758;
  double t2759;
  double t2908;
  double t2909;
  double t2910;
  double t2883;
  double t2884;
  double t2886;
  double t2887;
  double t2889;
  double t2890;
  double t2920;
  double t2921;
  double t2922;
  double t2741;
  double t2931;
  double t2932;
  double t2933;
  double t2934;
  double t2936;
  double t2937;
  double t2942;
  double t2943;
  double t2944;
  double t2954;
  double t2955;
  double t2957;
  double t2958;
  double t2959;
  double t2963;
  double t2967;
  double t2968;
  double t2969;
  double t3037;
  double t3038;
  double t3039;
  double t3036;
  double t3040;
  double t3044;
  double t3045;
  double t3046;
  double t3051;
  double t3052;
  double t3053;
  double t3066;
  double t3067;
  double t3068;
  double t3076;
  double t3080;
  double t3081;
  double t3082;
  double t3083;
  double t3090;
  double t3091;
  double t3092;
  double t3087;
  double t3106;
  double t3107;
  double t3108;
  double t3109;
  double t3110;
  double t3115;
  double t3116;
  double t3117;
  double t3127;
  double t3128;
  double t3129;
  double t3137;
  double t3138;
  double t3139;
  double t3140;
  double t3141;
  double t3148;
  double t3149;
  double t3150;
  double t3142;
  double t3161;
  double t3162;
  double t3163;
  double t3164;
  double t3165;
  double t3170;
  double t3171;
  double t3172;
  double t3182;
  double t3183;
  double t3184;
  double t3192;
  double t3193;
  double t3194;
  double t3195;
  double t3196;
  double t3203;
  double t3204;
  double t3205;
  double t3197;
  double t3216;
  double t3217;
  double t3218;
  double t3219;
  double t3220;
  double t3225;
  double t3226;
  double t3227;
  double t3237;
  double t3238;
  double t3239;
  t13 = Sin(var1[3]);
  t44 = Cos(var1[3]);
  t27 = Cos(var1[5]);
  t34 = Sin(var1[4]);
  t49 = Sin(var1[5]);
  t7 = Cos(var1[4]);
  t10 = Sin(var1[9]);
  t94 = Cos(var1[9]);
  t128 = t44*t27;
  t139 = -1.*t13*t34*t49;
  t149 = t128 + t139;
  t39 = t27*t13*t34;
  t59 = t44*t49;
  t67 = t39 + t59;
  t230 = Sin(var1[12]);
  t1928 = Cos(var1[12]);
  t83 = -0.325*t67;
  t1938 = Sin(var1[15]);
  t1940 = Cos(var1[15]);
  t20 = 0.1575*t7*t10*t13;
  t104 = -1.*t94;
  t112 = 1. + t104;
  t157 = 0.1575*t112*t149;
  t173 = -1.*t7*t10*t13;
  t184 = t94*t149;
  t191 = t173 + t184;
  t1950 = Cos(var1[10]);
  t1955 = Sin(var1[10]);
  t1956 = -1.*t94*t7*t13;
  t1957 = -1.*t10*t149;
  t1958 = t1956 + t1957;
  t241 = -0.1575*t7*t230*t13;
  t1929 = -1.*t1928;
  t1930 = 1. + t1929;
  t1931 = -0.1575*t1930*t149;
  t1932 = -1.*t7*t230*t13;
  t1933 = t1928*t149;
  t1934 = t1932 + t1933;
  t1966 = Cos(var1[13]);
  t1971 = Sin(var1[13]);
  t1972 = -1.*t1928*t7*t13;
  t1973 = -1.*t230*t149;
  t1974 = t1972 + t1973;
  t1939 = -0.1575*t7*t1938*t13;
  t1941 = -1.*t1940;
  t1942 = 1. + t1941;
  t1943 = -0.1575*t1942*t149;
  t1944 = -1.*t7*t1938*t13;
  t1945 = t1940*t149;
  t1946 = t1944 + t1945;
  t1982 = Cos(var1[16]);
  t2162 = Sin(var1[16]);
  t2163 = -1.*t1940*t7*t13;
  t2164 = -1.*t1938*t149;
  t2165 = t2163 + t2164;
  t1951 = -1.*t1950;
  t1952 = 1. + t1951;
  t1953 = -0.325*t1952*t67;
  t1954 = 0.2255*t191;
  t1959 = 0.325*t1955*t1958;
  t1960 = t1950*t67;
  t1961 = t1955*t1958;
  t1962 = t1960 + t1961;
  t2173 = Sin(var1[11]);
  t2174 = -1.*t1955*t67;
  t2175 = t1950*t1958;
  t2176 = t2174 + t2175;
  t2178 = Cos(var1[11]);
  t1967 = -1.*t1966;
  t1968 = 1. + t1967;
  t1969 = 0.325*t1968*t67;
  t1970 = -0.2255*t1934;
  t1975 = -0.325*t1971*t1974;
  t1976 = t1966*t67;
  t1977 = t1971*t1974;
  t1978 = t1976 + t1977;
  t2188 = Sin(var1[14]);
  t2189 = -1.*t1971*t67;
  t2190 = t1966*t1974;
  t2191 = t2189 + t2190;
  t2193 = Cos(var1[14]);
  t2158 = -1.*t1982;
  t2159 = 1. + t2158;
  t2160 = -0.325*t2159*t67;
  t2161 = -0.2255*t1946;
  t2166 = 0.325*t2162*t2165;
  t2167 = t1982*t67;
  t2168 = t2162*t2165;
  t2169 = t2167 + t2168;
  t2203 = Sin(var1[17]);
  t2204 = -1.*t2162*t67;
  t2205 = t1982*t2165;
  t2206 = t2204 + t2205;
  t2208 = Cos(var1[17]);
  t242 = 0.325*t67;
  t2365 = Cos(var1[6]);
  t2369 = Sin(var1[6]);
  t2366 = -1.*t2365;
  t2367 = 1. + t2366;
  t2368 = 0.1575*t2367*t149;
  t2370 = 0.1575*t7*t13*t2369;
  t2371 = t2365*t149;
  t2372 = -1.*t7*t13*t2369;
  t2373 = t2371 + t2372;
  t2377 = Cos(var1[7]);
  t2382 = -1.*t7*t2365*t13;
  t2383 = -1.*t149*t2369;
  t2384 = t2382 + t2383;
  t2385 = Sin(var1[7]);
  t2378 = -1.*t2377;
  t2379 = 1. + t2378;
  t2380 = 0.325*t2379*t67;
  t2381 = 0.2255*t2373;
  t2386 = -0.325*t2384*t2385;
  t2387 = t2377*t67;
  t2388 = t2384*t2385;
  t2389 = t2387 + t2388;
  t2393 = Cos(var1[8]);
  t2397 = t2377*t2384;
  t2398 = -1.*t67*t2385;
  t2399 = t2397 + t2398;
  t2400 = Sin(var1[8]);
  t2409 = 0.325*t44*t7*t27;
  t2410 = 0.1575*t44*t10*t34;
  t2411 = 0.1575*t112*t44*t7*t49;
  t2412 = -1.*t44*t10*t34;
  t2413 = t94*t44*t7*t49;
  t2414 = t2412 + t2413;
  t2437 = -1.*t94*t44*t34;
  t2438 = -1.*t44*t7*t10*t49;
  t2439 = t2437 + t2438;
  t2419 = -0.1575*t44*t230*t34;
  t2420 = -0.1575*t1930*t44*t7*t49;
  t2421 = -1.*t44*t230*t34;
  t2422 = t1928*t44*t7*t49;
  t2423 = t2421 + t2422;
  t2449 = -1.*t1928*t44*t34;
  t2450 = -1.*t44*t7*t230*t49;
  t2451 = t2449 + t2450;
  t2427 = -0.1575*t44*t1938*t34;
  t2428 = -0.1575*t1942*t44*t7*t49;
  t2429 = -1.*t44*t1938*t34;
  t2430 = t1940*t44*t7*t49;
  t2431 = t2429 + t2430;
  t2646 = -1.*t1940*t44*t34;
  t2647 = -1.*t44*t7*t1938*t49;
  t2648 = t2646 + t2647;
  t2435 = 0.325*t1952*t44*t7*t27;
  t2436 = 0.2255*t2414;
  t2440 = 0.325*t1955*t2439;
  t2179 = -1.*t2178;
  t2180 = 1. + t2179;
  t2441 = -1.*t1950*t44*t7*t27;
  t2442 = t1955*t2439;
  t2443 = t2441 + t2442;
  t2656 = t44*t7*t27*t1955;
  t2657 = t1950*t2439;
  t2658 = t2656 + t2657;
  t2447 = -0.325*t1968*t44*t7*t27;
  t2448 = -0.2255*t2423;
  t2452 = -0.325*t1971*t2451;
  t2194 = -1.*t2193;
  t2195 = 1. + t2194;
  t2453 = -1.*t1966*t44*t7*t27;
  t2454 = t1971*t2451;
  t2455 = t2453 + t2454;
  t2667 = t44*t7*t27*t1971;
  t2668 = t1966*t2451;
  t2669 = t2667 + t2668;
  t2459 = 0.325*t2159*t44*t7*t27;
  t2645 = -0.2255*t2431;
  t2649 = 0.325*t2162*t2648;
  t2209 = -1.*t2208;
  t2210 = 1. + t2209;
  t2650 = -1.*t1982*t44*t7*t27;
  t2651 = t2162*t2648;
  t2652 = t2650 + t2651;
  t2678 = t44*t7*t27*t2162;
  t2679 = t1982*t2648;
  t2680 = t2678 + t2679;
  t2418 = -0.325*t44*t7*t27;
  t2689 = 0.1575*t44*t7*t2367*t49;
  t2690 = 0.1575*t44*t34*t2369;
  t2691 = t44*t7*t2365*t49;
  t2692 = -1.*t44*t34*t2369;
  t2693 = t2691 + t2692;
  t2699 = -1.*t44*t2365*t34;
  t2700 = -1.*t44*t7*t49*t2369;
  t2701 = t2699 + t2700;
  t2697 = -0.325*t44*t7*t27*t2379;
  t2698 = 0.2255*t2693;
  t2702 = -0.325*t2701*t2385;
  t2394 = -1.*t2393;
  t2395 = 1. + t2394;
  t2703 = -1.*t44*t7*t27*t2377;
  t2704 = t2701*t2385;
  t2705 = t2703 + t2704;
  t2710 = t2377*t2701;
  t2711 = t44*t7*t27*t2385;
  t2712 = t2710 + t2711;
  t2721 = t44*t27*t34;
  t2722 = -1.*t13*t49;
  t2723 = t2721 + t2722;
  t2726 = t27*t13;
  t2727 = t44*t34*t49;
  t2728 = t2726 + t2727;
  t2729 = -0.325*t2728;
  t2738 = 0.325*t2728;
  t2724 = 0.1575*t112*t2723;
  t2736 = -0.1575*t1930*t2723;
  t2732 = -0.1575*t1942*t2723;
  t2745 = 0.2255*t94*t2723;
  t2746 = -0.325*t10*t1955*t2723;
  t2747 = -0.325*t1952*t2728;
  t2748 = -1.*t10*t1955*t2723;
  t2749 = t1950*t2728;
  t2750 = t2748 + t2749;
  t2896 = -1.*t1950*t10*t2723;
  t2897 = -1.*t1955*t2728;
  t2898 = t2896 + t2897;
  t2754 = -0.2255*t1928*t2723;
  t2755 = 0.325*t230*t1971*t2723;
  t2756 = 0.325*t1968*t2728;
  t2757 = -1.*t230*t1971*t2723;
  t2758 = t1966*t2728;
  t2759 = t2757 + t2758;
  t2908 = -1.*t1966*t230*t2723;
  t2909 = -1.*t1971*t2728;
  t2910 = t2908 + t2909;
  t2883 = -0.2255*t1940*t2723;
  t2884 = -0.325*t1938*t2162*t2723;
  t2886 = -0.325*t2159*t2728;
  t2887 = -1.*t1938*t2162*t2723;
  t2889 = t1982*t2728;
  t2890 = t2887 + t2889;
  t2920 = -1.*t1982*t1938*t2723;
  t2921 = -1.*t2162*t2728;
  t2922 = t2920 + t2921;
  t2741 = 0.1575*t2367*t2723;
  t2931 = 0.2255*t2365*t2723;
  t2932 = 0.325*t2379*t2728;
  t2933 = 0.325*t2723*t2369*t2385;
  t2934 = t2377*t2728;
  t2936 = -1.*t2723*t2369*t2385;
  t2937 = t2934 + t2936;
  t2942 = -1.*t2377*t2723*t2369;
  t2943 = -1.*t2728*t2385;
  t2944 = t2942 + t2943;
  t2954 = -0.1575*t44*t7*t2365;
  t2955 = 0.1575*t2728*t2369;
  t2957 = t44*t7*t2365;
  t2958 = -1.*t2728*t2369;
  t2959 = t2957 + t2958;
  t2963 = 0.2255*t2959;
  t2967 = -1.*t2365*t2728;
  t2968 = -1.*t44*t7*t2369;
  t2969 = t2967 + t2968;
  t3037 = -1.*t44*t27*t34;
  t3038 = t13*t49;
  t3039 = t3037 + t3038;
  t3036 = -0.325*t2377*t2959;
  t3040 = 0.325*t3039*t2385;
  t3044 = t2377*t2959;
  t3045 = -1.*t3039*t2385;
  t3046 = t3044 + t3045;
  t3051 = -1.*t2377*t3039;
  t3052 = -1.*t2959*t2385;
  t3053 = t3051 + t3052;
  t3066 = t2377*t3039;
  t3067 = t2959*t2385;
  t3068 = t3066 + t3067;
  t3076 = -0.1575*t94*t44*t7;
  t3080 = 0.1575*t10*t2728;
  t3081 = t94*t44*t7;
  t3082 = -1.*t10*t2728;
  t3083 = t3081 + t3082;
  t3090 = -1.*t44*t7*t10;
  t3091 = -1.*t94*t2728;
  t3092 = t3090 + t3091;
  t3087 = 0.2255*t3083;
  t3106 = -0.325*t1955*t3039;
  t3107 = 0.325*t1950*t3083;
  t3108 = -1.*t1955*t3039;
  t3109 = t1950*t3083;
  t3110 = t3108 + t3109;
  t3115 = -1.*t1950*t3039;
  t3116 = -1.*t1955*t3083;
  t3117 = t3115 + t3116;
  t3127 = t1950*t3039;
  t3128 = t1955*t3083;
  t3129 = t3127 + t3128;
  t3137 = 0.1575*t1928*t44*t7;
  t3138 = -0.1575*t230*t2728;
  t3139 = t1928*t44*t7;
  t3140 = -1.*t230*t2728;
  t3141 = t3139 + t3140;
  t3148 = -1.*t44*t7*t230;
  t3149 = -1.*t1928*t2728;
  t3150 = t3148 + t3149;
  t3142 = -0.2255*t3141;
  t3161 = 0.325*t1971*t3039;
  t3162 = -0.325*t1966*t3141;
  t3163 = -1.*t1971*t3039;
  t3164 = t1966*t3141;
  t3165 = t3163 + t3164;
  t3170 = -1.*t1966*t3039;
  t3171 = -1.*t1971*t3141;
  t3172 = t3170 + t3171;
  t3182 = t1966*t3039;
  t3183 = t1971*t3141;
  t3184 = t3182 + t3183;
  t3192 = 0.1575*t1940*t44*t7;
  t3193 = -0.1575*t1938*t2728;
  t3194 = t1940*t44*t7;
  t3195 = -1.*t1938*t2728;
  t3196 = t3194 + t3195;
  t3203 = -1.*t44*t7*t1938;
  t3204 = -1.*t1940*t2728;
  t3205 = t3203 + t3204;
  t3197 = -0.2255*t3196;
  t3216 = -0.325*t2162*t3039;
  t3217 = 0.325*t1982*t3196;
  t3218 = -1.*t2162*t3039;
  t3219 = t1982*t3196;
  t3220 = t3218 + t3219;
  t3225 = -1.*t1982*t3039;
  t3226 = -1.*t2162*t3196;
  t3227 = t3225 + t3226;
  t3237 = t1982*t3039;
  t3238 = t2162*t3196;
  t3239 = t3237 + t3238;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=-258.00300000000004;
  p_output1[3]=-6.1312500000000005*(t157 + t1953 + t1954 + t1959 - 0.325*t1962 + t20) - 6.1312500000000005*(t1939 + t1943 + t2160 + t2161 + t2166 - 0.325*t2169) - 1.9620000000000002*(t157 + t1953 + t1954 + t1959 + t20 - 0.575*t2173*t2176 - 0.575*(-1.*t2173*t2176 + t1962*t2178) - 0.575*t1962*t2180) - 1.9620000000000002*(t1939 + t1943 + t2160 + t2161 + t2166 - 0.575*t2203*t2206 - 0.575*(-1.*t2203*t2206 + t2169*t2208) - 0.575*t2169*t2210) - 6.1312500000000005*(t2368 + t2370 + t2380 + t2381 + t2386 + 0.325*t2389) - 1.9620000000000002*(t2368 + t2370 + t2380 + t2381 + t2386 + 0.075*t2389*t2395 + 0.075*t2399*t2400 + 0.075*(t2389*t2393 - 1.*t2399*t2400)) - 6.1312500000000005*(t1931 + t1969 + t1970 + t1975 + 0.325*t1978 + t241) - 1.9620000000000002*(t1931 + t1969 + t1970 + t1975 + 0.075*t2188*t2191 + 0.075*(-1.*t2188*t2191 + t1978*t2193) + 0.075*t1978*t2195 + t241) - 26.977500000000003*(t2368 + t2370 + 0.1575*t2373 + t242) - 26.977500000000003*(t1931 - 0.1575*t1934 + t241 + t242) - 26.977500000000003*(t1939 + t1943 - 0.1575*t1946 + t83) - 26.977500000000003*(t157 + 0.1575*t191 + t20 + t83);
  p_output1[4]=-26.977500000000003*(t2409 + t2410 + t2411 + 0.1575*t2414) - 26.977500000000003*(t2418 + t2419 + t2420 - 0.1575*t2423) - 26.977500000000003*(t2409 + t2427 + t2428 - 0.1575*t2431) - 6.1312500000000005*(t2410 + t2411 + t2435 + t2436 + t2440 - 0.325*t2443) - 6.1312500000000005*(t2419 + t2420 + t2447 + t2448 + t2452 + 0.325*t2455) - 6.1312500000000005*(t2427 + t2428 + t2459 + t2645 + t2649 - 0.325*t2652) - 1.9620000000000002*(t2410 + t2411 + t2435 + t2436 + t2440 - 0.575*t2180*t2443 - 0.575*t2173*t2658 - 0.575*(t2178*t2443 - 1.*t2173*t2658)) - 1.9620000000000002*(t2419 + t2420 + t2447 + t2448 + t2452 + 0.075*t2195*t2455 + 0.075*t2188*t2669 + 0.075*(t2193*t2455 - 1.*t2188*t2669)) - 1.9620000000000002*(t2427 + t2428 + t2459 + t2645 + t2649 - 0.575*t2210*t2652 - 0.575*t2203*t2680 - 0.575*(t2208*t2652 - 1.*t2203*t2680)) - 26.977500000000003*(t2418 + t2689 + t2690 + 0.1575*t2693) - 6.1312500000000005*(t2689 + t2690 + t2697 + t2698 + t2702 + 0.325*t2705) - 1.9620000000000002*(t2689 + t2690 + t2697 + t2698 + t2702 + 0.075*t2395*t2705 + 0.075*t2400*t2712 + 0.075*(t2393*t2705 - 1.*t2400*t2712));
  p_output1[5]=-26.977500000000003*(-0.1575*t1940*t2723 + t2729 + t2732) - 26.977500000000003*(-0.1575*t1928*t2723 + t2736 + t2738) - 26.977500000000003*(0.1575*t2365*t2723 + t2738 + t2741) - 6.1312500000000005*(t2724 + t2745 + t2746 + t2747 - 0.325*t2750) - 6.1312500000000005*(t2736 + t2754 + t2755 + t2756 + 0.325*t2759) - 6.1312500000000005*(t2732 + t2883 + t2884 + t2886 - 0.325*t2890) - 1.9620000000000002*(t2724 + t2745 + t2746 + t2747 - 0.575*t2180*t2750 - 0.575*t2173*t2898 - 0.575*(t2178*t2750 - 1.*t2173*t2898)) - 1.9620000000000002*(t2736 + t2754 + t2755 + t2756 + 0.075*t2195*t2759 + 0.075*t2188*t2910 + 0.075*(t2193*t2759 - 1.*t2188*t2910)) - 1.9620000000000002*(t2732 + t2883 + t2884 + t2886 - 0.575*t2210*t2890 - 0.575*t2203*t2922 - 0.575*(t2208*t2890 - 1.*t2203*t2922)) - 6.1312500000000005*(t2741 + t2931 + t2932 + t2933 + 0.325*t2937) - 1.9620000000000002*(t2741 + t2931 + t2932 + t2933 + 0.075*t2395*t2937 + 0.075*t2400*t2944 + 0.075*(t2393*t2937 - 1.*t2400*t2944)) - 26.977500000000003*(t2724 + t2729 + 0.1575*t2723*t94);
  p_output1[6]=-26.977500000000003*(t2954 + t2955 + 0.1575*t2959) - 6.1312500000000005*(t2954 + t2955 + t2963) - 1.9620000000000002*(t2954 + t2955 + t2963 - 0.325*t2385*t2969 + 0.075*t2385*t2395*t2969 + 0.075*t2377*t2400*t2969 + 0.075*(t2385*t2393*t2969 - 1.*t2377*t2400*t2969));
  p_output1[7]=-6.1312500000000005*(t3036 + t3040 + 0.325*t3046) - 1.9620000000000002*(t3036 + t3040 + 0.075*t2395*t3046 + 0.075*t2400*t3053 + 0.075*(t2393*t3046 - 1.*t2400*t3053));
  p_output1[8]=-1.9620000000000002*(0.075*t2393*t3046 + 0.075*t2400*t3068 + 0.075*(-1.*t2393*t3046 - 1.*t2400*t3068));
  p_output1[9]=-26.977500000000003*(t3076 + t3080 + 0.1575*t3083) - 6.1312500000000005*(t3076 + t3080 + t3087) - 1.9620000000000002*(t3076 + t3080 + t3087 + 0.325*t1955*t3092 - 0.575*t1950*t2173*t3092 - 0.575*t1955*t2180*t3092 - 0.575*(-1.*t1950*t2173*t3092 + t1955*t2178*t3092));
  p_output1[10]=-6.1312500000000005*(t3106 + t3107 - 0.325*t3110) - 1.9620000000000002*(t3106 + t3107 - 0.575*t2180*t3110 - 0.575*t2173*t3117 - 0.575*(t2178*t3110 - 1.*t2173*t3117));
  p_output1[11]=-1.9620000000000002*(-0.575*t2178*t3110 - 0.575*t2173*t3129 - 0.575*(-1.*t2178*t3110 - 1.*t2173*t3129));
  p_output1[12]=-26.977500000000003*(t3137 + t3138 - 0.1575*t3141) - 6.1312500000000005*(t3137 + t3138 + t3142) - 1.9620000000000002*(t3137 + t3138 + t3142 - 0.325*t1971*t3150 + 0.075*t1966*t2188*t3150 + 0.075*t1971*t2195*t3150 + 0.075*(-1.*t1966*t2188*t3150 + t1971*t2193*t3150));
  p_output1[13]=-6.1312500000000005*(t3161 + t3162 + 0.325*t3165) - 1.9620000000000002*(t3161 + t3162 + 0.075*t2195*t3165 + 0.075*t2188*t3172 + 0.075*(t2193*t3165 - 1.*t2188*t3172));
  p_output1[14]=-1.9620000000000002*(0.075*t2193*t3165 + 0.075*t2188*t3184 + 0.075*(-1.*t2193*t3165 - 1.*t2188*t3184));
  p_output1[15]=-26.977500000000003*(t3192 + t3193 - 0.1575*t3196) - 6.1312500000000005*(t3192 + t3193 + t3197) - 1.9620000000000002*(t3192 + t3193 + t3197 + 0.325*t2162*t3205 - 0.575*t1982*t2203*t3205 - 0.575*t2162*t2210*t3205 - 0.575*(-1.*t1982*t2203*t3205 + t2162*t2208*t3205));
  p_output1[16]=-6.1312500000000005*(t3216 + t3217 - 0.325*t3220) - 1.9620000000000002*(t3216 + t3217 - 0.575*t2210*t3220 - 0.575*t2203*t3227 - 0.575*(t2208*t3220 - 1.*t2203*t3227));
  p_output1[17]=-1.9620000000000002*(-0.575*t2208*t3220 - 0.575*t2203*t3239 - 0.575*(-1.*t2208*t3220 - 1.*t2203*t3239));
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

#include "Ge_vec_vision60.hh"

namespace SymFunction
{

void Ge_vec_vision60_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
