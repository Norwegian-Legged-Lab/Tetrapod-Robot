/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:30:49 GMT+01:00
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
  double t241;
  double t250;
  double t1824;
  double t1866;
  double t1892;
  double t1897;
  double t1942;
  double t1944;
  double t1947;
  double t1955;
  double t1933;
  double t297;
  double t388;
  double t408;
  double t582;
  double t618;
  double t1280;
  double t1325;
  double t1545;
  double t1556;
  double t1602;
  double t2086;
  double t1896;
  double t2031;
  double t2037;
  double t1910;
  double t2117;
  double t2254;
  double t1951;
  double t2434;
  double t2438;
  double t2439;
  double t2461;
  double t2293;
  double t2320;
  double t2173;
  double t2189;
  double t2194;
  double t2350;
  double t2356;
  double t2368;
  double t2485;
  double t2101;
  double t2546;
  double t2126;
  double t2634;
  double t2458;
  double t2677;
  double t2681;
  double t1901;
  double t2517;
  double t2813;
  double t2818;
  double t2821;
  double t2846;
  double t2409;
  double t2275;
  double t2276;
  double t2279;
  double t2428;
  double t2429;
  double t2431;
  double t2860;
  double t2058;
  double t2883;
  double t1963;
  double t2835;
  double t2936;
  double t2937;
  double t2960;
  double t2263;
  double t2891;
  double t2257;
  double t2518;
  double t2524;
  double t2571;
  double t2599;
  double t2614;
  double t2618;
  double t2619;
  double t2624;
  double t2755;
  double t2691;
  double t2692;
  double t2694;
  double t2696;
  double t2723;
  double t2725;
  double t2731;
  double t2732;
  double t2778;
  double t2780;
  double t2785;
  double t2790;
  double t2792;
  double t2803;
  double t2806;
  double t2807;
  double t2493;
  double t3028;
  double t2463;
  double t3063;
  double t2643;
  double t3033;
  double t3037;
  double t2635;
  double t2983;
  double t2885;
  double t2886;
  double t2895;
  double t2896;
  double t2897;
  double t2903;
  double t2909;
  double t2912;
  double t2988;
  double t2948;
  double t2954;
  double t2955;
  double t2961;
  double t2962;
  double t2963;
  double t2966;
  double t2974;
  double t2998;
  double t2999;
  double t3002;
  double t3008;
  double t3009;
  double t3012;
  double t3016;
  double t3017;
  double t2930;
  double t3101;
  double t2940;
  double t3114;
  double t3093;
  double t2853;
  double t1799;
  double t1895;
  double t1907;
  double t1908;
  double t1913;
  double t1915;
  double t1918;
  double t1939;
  double t1950;
  double t1969;
  double t1991;
  double t2059;
  double t2066;
  double t2067;
  double t3160;
  double t420;
  double t690;
  double t1648;
  double t1666;
  double t3166;
  double t3168;
  double t3169;
  double t3170;
  double t2076;
  double t2081;
  double t2092;
  double t2094;
  double t3179;
  double t3181;
  double t3184;
  double t2097;
  double t2098;
  double t2104;
  double t2109;
  double t2137;
  double t2143;
  double t2165;
  double t2240;
  double t2250;
  double t2259;
  double t2260;
  double t2264;
  double t2270;
  double t2274;
  double t2284;
  double t2289;
  double t2304;
  double t2313;
  double t2335;
  double t2342;
  double t2343;
  double t2406;
  double t2408;
  double t2414;
  double t2416;
  double t2417;
  double t2421;
  double t2427;
  double t2433;
  double t2449;
  double t2464;
  double t2467;
  double t2499;
  double t2502;
  double t2515;
  double t3188;
  double t3192;
  double t3197;
  double t3211;
  double t3214;
  double t3219;
  double t2627;
  double t2628;
  double t2638;
  double t2641;
  double t2657;
  double t2659;
  double t2668;
  double t2749;
  double t2754;
  double t2756;
  double t2761;
  double t2770;
  double t2773;
  double t2777;
  double t2809;
  double t2834;
  double t2855;
  double t2857;
  double t2865;
  double t2870;
  double t2876;
  double t3203;
  double t3207;
  double t3208;
  double t3221;
  double t3224;
  double t3226;
  double t2923;
  double t2927;
  double t2933;
  double t2935;
  double t2942;
  double t2943;
  double t2944;
  double t2980;
  double t2981;
  double t2984;
  double t2985;
  double t2992;
  double t2995;
  double t2997;
  double t3029;
  double t3235;
  double t3237;
  double t3238;
  double t3239;
  double t3038;
  double t3244;
  double t3246;
  double t3252;
  double t3253;
  double t3043;
  double t3044;
  double t3255;
  double t3256;
  double t3257;
  double t3260;
  double t3056;
  double t3058;
  double t3064;
  double t3067;
  double t3073;
  double t3078;
  double t3080;
  double t3083;
  double t3097;
  double t3265;
  double t3266;
  double t3277;
  double t3283;
  double t3103;
  double t3288;
  double t3292;
  double t3298;
  double t3299;
  double t3106;
  double t3109;
  double t3302;
  double t3303;
  double t3305;
  double t3307;
  double t3117;
  double t3121;
  double t3122;
  double t3125;
  double t3140;
  double t3142;
  double t3145;
  double t3147;
  t241 = Cos(var1[4]);
  t250 = Cos(var1[5]);
  t1824 = Cos(var1[13]);
  t1866 = -1.*t1824;
  t1892 = 1. + t1866;
  t1897 = Sin(var1[13]);
  t1942 = Cos(var1[16]);
  t1944 = -1.*t1942;
  t1947 = 1. + t1944;
  t1955 = Sin(var1[16]);
  t1933 = Sin(var1[4]);
  t297 = Cos(var1[12]);
  t388 = -1.*t297;
  t408 = 1. + t388;
  t582 = Sin(var1[12]);
  t618 = 0.15121*t582;
  t1280 = Cos(var1[15]);
  t1325 = -1.*t1280;
  t1545 = 1. + t1325;
  t1556 = -0.15121*t1545;
  t1602 = Sin(var1[15]);
  t2086 = Sin(var1[5]);
  t1896 = 4.e-6*t1892;
  t2031 = -1. + t1942;
  t2037 = 4.e-6*t2031;
  t1910 = -2.8e-11*t1892;
  t2117 = 7.e-6*t1892;
  t2254 = 7.e-6*t1947;
  t1951 = 2.8e-11*t1947;
  t2434 = Cos(var1[14]);
  t2438 = -1.*t2434;
  t2439 = 1. + t2438;
  t2461 = Sin(var1[14]);
  t2293 = -1.*t1897;
  t2320 = -4.e-6*t1897;
  t2173 = -1.*t241*t250*t582;
  t2189 = -1.*t297*t241*t2086;
  t2194 = t2173 + t2189;
  t2350 = t297*t241*t250;
  t2356 = -1.*t241*t582*t2086;
  t2368 = t2350 + t2356;
  t2485 = 7.e-6*t2439;
  t2101 = -7.e-6*t1897;
  t2546 = -7.e-6*t1892;
  t2126 = 4.e-6*t1897;
  t2634 = 4.e-6*t2439;
  t2458 = -2.8e-11*t2439;
  t2677 = -1. + t1824;
  t2681 = 4.e-6*t2677;
  t1901 = 7.e-6*t1897;
  t2517 = 2.8e-11*t1892;
  t2813 = Cos(var1[17]);
  t2818 = -1.*t2813;
  t2821 = 1. + t2818;
  t2846 = Sin(var1[17]);
  t2409 = -4.e-6*t1955;
  t2275 = -1.*t241*t250*t1602;
  t2276 = -1.*t1280*t241*t2086;
  t2279 = t2275 + t2276;
  t2428 = t1280*t241*t250;
  t2429 = -1.*t241*t1602*t2086;
  t2431 = t2428 + t2429;
  t2860 = 2.8e-11*t2821;
  t2058 = -7.e-6*t1955;
  t2883 = -2.8e-11*t1947;
  t1963 = -1.*t1955;
  t2835 = 7.e-6*t2821;
  t2936 = -1. + t2813;
  t2937 = 4.e-6*t2936;
  t2960 = 4.e-6*t1947;
  t2263 = 7.e-6*t1955;
  t2891 = -7.e-6*t1947;
  t2257 = 4.e-6*t1955;
  t2518 = t2517 + t2293;
  t2524 = t2518*t1933;
  t2571 = t2546 + t2320;
  t2599 = t2571*t2194;
  t2614 = -1.000000000016*t1892;
  t2618 = 1. + t2614;
  t2619 = t2618*t2368;
  t2624 = t2524 + t2599 + t2619;
  t2755 = 7.e-6*t2461;
  t2691 = t2681 + t2101;
  t2692 = t2691*t1933;
  t2694 = -6.5e-11*t1892;
  t2696 = 1. + t2694;
  t2723 = t2696*t2194;
  t2725 = t2546 + t2126;
  t2731 = t2725*t2368;
  t2732 = t2692 + t2723 + t2731;
  t2778 = -1.000000000049*t1892;
  t2780 = 1. + t2778;
  t2785 = t2780*t1933;
  t2790 = t2681 + t1901;
  t2792 = t2790*t2194;
  t2803 = t2517 + t1897;
  t2806 = t2803*t2368;
  t2807 = t2785 + t2792 + t2806;
  t2493 = -4.e-6*t2461;
  t3028 = 2.8e-11*t2439;
  t2463 = -1.*t2461;
  t3063 = -7.e-6*t2439;
  t2643 = 4.e-6*t2461;
  t3033 = -1. + t2434;
  t3037 = 4.e-6*t3033;
  t2635 = -7.e-6*t2461;
  t2983 = 4.e-6*t2846;
  t2885 = t2883 + t1955;
  t2886 = t2885*t1933;
  t2895 = t2891 + t2409;
  t2896 = t2895*t2279;
  t2897 = -1.000000000016*t1947;
  t2903 = 1. + t2897;
  t2909 = t2903*t2431;
  t2912 = t2886 + t2896 + t2909;
  t2988 = 7.e-6*t2846;
  t2948 = -1.000000000049*t1947;
  t2954 = 1. + t2948;
  t2955 = t2954*t1933;
  t2961 = t2960 + t2058;
  t2962 = t2961*t2279;
  t2963 = t2883 + t1963;
  t2966 = t2963*t2431;
  t2974 = t2955 + t2962 + t2966;
  t2998 = t2960 + t2263;
  t2999 = t2998*t1933;
  t3002 = -6.5e-11*t1947;
  t3008 = 1. + t3002;
  t3009 = t3008*t2279;
  t3012 = t2891 + t2257;
  t3016 = t3012*t2431;
  t3017 = t2999 + t3009 + t3016;
  t2930 = -1.*t2846;
  t3101 = 4.e-6*t2821;
  t2940 = -7.e-6*t2846;
  t3114 = -2.8e-11*t2821;
  t3093 = -7.e-6*t2821;
  t2853 = -4.e-6*t2846;
  t1799 = 5.856279999999999e-13*var1[13];
  t1895 = -0.0387489999948987*t1892;
  t1907 = t1896 + t1901;
  t1908 = -2.123459e-6*t1907;
  t1913 = t1910 + t1897;
  t1915 = -0.281209000004*t1913;
  t1918 = t1799 + t1895 + t1908 + t1915;
  t1939 = 1.5843479999999999e-12*var1[16];
  t1950 = -0.03874900000889869*t1947;
  t1969 = t1951 + t1963;
  t1991 = -0.281211000004*t1969;
  t2059 = t2037 + t2058;
  t2066 = -1.8134809999999998e-6*t2059;
  t2067 = t1939 + t1950 + t1991 + t2066;
  t3160 = Sin(var1[3]);
  t420 = -0.15121*t408;
  t690 = t420 + t618;
  t1648 = -0.15121*t1602;
  t1666 = t1556 + t1648;
  t3166 = t250*t3160*t1933;
  t3168 = Cos(var1[3]);
  t3169 = t3168*t2086;
  t3170 = t3166 + t3169;
  t2076 = 0.15121*t408;
  t2081 = t2076 + t618;
  t2092 = 0.15121*t1602;
  t2094 = t1556 + t2092;
  t3179 = t3168*t250;
  t3181 = -1.*t3160*t1933*t2086;
  t3184 = t3179 + t3181;
  t2097 = -1.4640699999999997e-7*var1[13];
  t2098 = -1.38024835e-16*t1892;
  t2104 = t1896 + t2101;
  t2109 = -0.038748999993*t2104;
  t2137 = t2117 + t2126;
  t2143 = -0.281209000004*t2137;
  t2165 = t2097 + t2098 + t2109 + t2143;
  t2240 = 3.9608699999999997e-7*var1[16];
  t2250 = -1.1787626499999999e-16*t1947;
  t2259 = t2254 + t2257;
  t2260 = -0.281211000004*t2259;
  t2264 = t2037 + t2263;
  t2270 = -0.038749000006999997*t2264;
  t2274 = t2240 + t2250 + t2260 + t2270;
  t2284 = 1.0248489999999998e-12*var1[13];
  t2289 = -0.28120900000849935*t1892;
  t2304 = t1910 + t2293;
  t2313 = -0.038748999993*t2304;
  t2335 = t2117 + t2320;
  t2342 = -2.123459e-6*t2335;
  t2343 = t2284 + t2289 + t2313 + t2342;
  t2406 = -2.7726089999999997e-12*var1[16];
  t2408 = -0.2812110000084994*t1947;
  t2414 = t2254 + t2409;
  t2416 = -1.8134809999999998e-6*t2414;
  t2417 = t1951 + t1955;
  t2421 = -0.038749000006999997*t2417;
  t2427 = t2406 + t2408 + t2416 + t2421;
  t2433 = 1.8190549999999993e-12*var1[14];
  t2449 = -0.5031490000160505*t2439;
  t2464 = t2458 + t2463;
  t2467 = -0.038922999986*t2464;
  t2499 = t2485 + t2493;
  t2502 = -3.6777349999999994e-6*t2499;
  t2515 = t2433 + t2449 + t2467 + t2502;
  t3188 = -1.*t582*t3170;
  t3192 = t297*t3184;
  t3197 = t3188 + t3192;
  t3211 = t297*t3170;
  t3214 = t582*t3184;
  t3219 = t3211 + t3214;
  t2627 = -2.598649999999999e-7*var1[14];
  t2628 = -2.3905277499999995e-16*t2439;
  t2638 = t2634 + t2635;
  t2641 = -0.038922999986*t2638;
  t2657 = t2485 + t2643;
  t2659 = -0.503149000008*t2657;
  t2668 = t2627 + t2628 + t2641 + t2659;
  t2749 = 1.0394599999999997e-12*var1[14];
  t2754 = -0.03892299998790722*t2439;
  t2756 = t2634 + t2755;
  t2761 = -3.6777349999999994e-6*t2756;
  t2770 = t2458 + t2461;
  t2773 = -0.503149000008*t2770;
  t2777 = t2749 + t2754 + t2761 + t2773;
  t2809 = -1.9784030000000015e-12*var1[17];
  t2834 = -0.5031510000160505*t2821;
  t2855 = t2835 + t2853;
  t2857 = -3.367757e-6*t2855;
  t2865 = t2860 + t2846;
  t2870 = -0.038575000014*t2865;
  t2876 = t2809 + t2834 + t2857 + t2870;
  t3203 = -1.*t1602*t3170;
  t3207 = t1280*t3184;
  t3208 = t3203 + t3207;
  t3221 = t1280*t3170;
  t3224 = t1602*t3184;
  t3226 = t3221 + t3224;
  t2923 = 1.1305160000000008e-12*var1[17];
  t2927 = -0.03857500001589017*t2821;
  t2933 = t2860 + t2930;
  t2935 = -0.5031510000080001*t2933;
  t2942 = t2937 + t2940;
  t2943 = -3.367757e-6*t2942;
  t2944 = t2923 + t2927 + t2935 + t2943;
  t2980 = 2.826290000000002e-7*var1[17];
  t2981 = -2.18904205e-16*t2821;
  t2984 = t2835 + t2983;
  t2985 = -0.5031510000080001*t2984;
  t2992 = t2937 + t2988;
  t2995 = -0.038575000014*t2992;
  t2997 = t2980 + t2981 + t2985 + t2995;
  t3029 = t3028 + t2461;
  t3235 = -1.*t241*t2518*t3160;
  t3237 = t2571*t3197;
  t3238 = t2618*t3219;
  t3239 = t3235 + t3237 + t3238;
  t3038 = t3037 + t2755;
  t3244 = -1.*t241*t2691*t3160;
  t3246 = t2696*t3197;
  t3252 = t2725*t3219;
  t3253 = t3244 + t3246 + t3252;
  t3043 = -1.000000000049*t2439;
  t3044 = 1. + t3043;
  t3255 = -1.*t2780*t241*t3160;
  t3256 = t2790*t3197;
  t3257 = t2803*t3219;
  t3260 = t3255 + t3256 + t3257;
  t3056 = -1.000000000016*t2439;
  t3058 = 1. + t3056;
  t3064 = t3063 + t2493;
  t3067 = t3028 + t2463;
  t3073 = t3063 + t2643;
  t3078 = -6.5e-11*t2439;
  t3080 = 1. + t3078;
  t3083 = t3037 + t2635;
  t3097 = t3093 + t2983;
  t3265 = -1.*t241*t2885*t3160;
  t3266 = t2895*t3208;
  t3277 = t2903*t3226;
  t3283 = t3265 + t3266 + t3277;
  t3103 = t3101 + t2988;
  t3288 = -1.*t2954*t241*t3160;
  t3292 = t2961*t3208;
  t3298 = t2963*t3226;
  t3299 = t3288 + t3292 + t3298;
  t3106 = -6.5e-11*t2821;
  t3109 = 1. + t3106;
  t3302 = -1.*t241*t2998*t3160;
  t3303 = t3008*t3208;
  t3305 = t3012*t3226;
  t3307 = t3302 + t3303 + t3305;
  t3117 = t3114 + t2930;
  t3121 = -1.000000000049*t2821;
  t3122 = 1. + t3121;
  t3125 = t3101 + t2940;
  t3140 = -1.000000000016*t2821;
  t3142 = 1. + t3140;
  t3145 = t3114 + t2846;
  t3147 = t3093 + t2853;
  p_output1[0]=-1.*t1918*t1933 + t1933*t2067 - 1.*t2165*t2194 + t2274*t2279 - 1.*t2343*t2368 + t2081*t2086*t241 - 1.*t2086*t2094*t241 + t2427*t2431 + t1666*t241*t250 - 1.*t2515*t2624 - 1.*t2668*t2732 - 1.*t2777*t2807 + t2876*t2912 + t2944*t2974 + t2997*t3017 + 0.038924*(t2624*t3029 + t2732*t3038 + t2807*t3044) + 0.80315*(t2624*t3058 + t2732*t3064 + t2807*t3067) - 0.148705*(t2624*t3073 + t2732*t3080 + t2807*t3083) - 0.148715*(t2912*t3097 + t2974*t3103 + t3017*t3109) - 0.038576*(t2912*t3117 + t2974*t3122 + t3017*t3125) - 0.80315*(t2912*t3142 + t2974*t3145 + t3017*t3147) - 1.*t241*t250*t690;
  p_output1[1]=t1918*t241*t3160 - 1.*t2067*t241*t3160 + t1666*t3170 - 1.*t2081*t3184 + t2094*t3184 - 1.*t2165*t3197 + t2274*t3208 - 1.*t2343*t3219 + t2427*t3226 - 1.*t2515*t3239 - 1.*t2668*t3253 - 1.*t2777*t3260 + 0.038924*(t3029*t3239 + t3038*t3253 + t3044*t3260) + 0.80315*(t3058*t3239 + t3064*t3253 + t3067*t3260) - 0.148705*(t3073*t3239 + t3080*t3253 + t3083*t3260) + t2876*t3283 + t2944*t3299 + t2997*t3307 - 0.148715*(t3097*t3283 + t3103*t3299 + t3109*t3307) - 0.038576*(t3117*t3283 + t3122*t3299 + t3125*t3307) - 0.80315*(t3142*t3283 + t3145*t3299 + t3147*t3307) - 1.*t3170*t690;
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

#include "step_distance_ParallelStance.hh"

namespace ParallelStance
{

void step_distance_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
