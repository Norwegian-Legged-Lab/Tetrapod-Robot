/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:11:03 GMT+01:00
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
  double t535;
  double t572;
  double t620;
  double t78;
  double t217;
  double t327;
  double t696;
  double t453;
  double t702;
  double t683;
  double t685;
  double t769;
  double t819;
  double t833;
  double t1196;
  double t981;
  double t1003;
  double t1004;
  double t1029;
  double t1103;
  double t1149;
  double t1177;
  double t1246;
  double t1280;
  double t1354;
  double t1400;
  double t1415;
  double t354;
  double t1670;
  double t1966;
  double t1706;
  double t1754;
  double t1770;
  double t1787;
  double t1819;
  double t1826;
  double t1856;
  double t1886;
  double t1891;
  double t1893;
  double t1644;
  double t1990;
  double t1998;
  double t2012;
  double t2020;
  double t2023;
  double t2034;
  double t2046;
  double t2055;
  double t2078;
  double t2116;
  double t900;
  double t970;
  double t1209;
  double t1217;
  double t505;
  double t1491;
  double t1533;
  double t1552;
  double t2218;
  double t2237;
  double t2248;
  double t2292;
  double t2293;
  double t2297;
  double t2315;
  double t2331;
  double t2332;
  double t2366;
  double t2370;
  double t2396;
  double t2407;
  double t2417;
  double t2418;
  double t2433;
  double t2437;
  double t2186;
  double t2514;
  double t2504;
  double t2519;
  double t2521;
  double t2538;
  double t2540;
  double t2557;
  double t2565;
  double t2576;
  double t2588;
  double t2589;
  double t2599;
  double t2629;
  double t2630;
  double t2654;
  double t2656;
  double t2666;
  double t2684;
  double t2704;
  double t2717;
  double t2771;
  double t2775;
  double t2783;
  double t2794;
  double t2807;
  double t2810;
  double t2818;
  double t2845;
  double t2155;
  double t2156;
  double t2164;
  double t1960;
  double t2129;
  double t2139;
  double t869;
  double t1183;
  double t1439;
  double t1465;
  double t2141;
  double t2196;
  double t2202;
  double t2932;
  double t2477;
  double t2479;
  double t2484;
  double t2414;
  double t2463;
  double t2465;
  double t2967;
  double t2270;
  double t2320;
  double t2334;
  double t2337;
  double t2472;
  double t2487;
  double t2488;
  double t2878;
  double t2890;
  double t2891;
  double t2797;
  double t2849;
  double t2856;
  double t2562;
  double t2637;
  double t2745;
  double t2753;
  double t2863;
  double t2897;
  double t2901;
  double t2935;
  double t2939;
  double t2949;
  double t2968;
  double t2971;
  double t2976;
  double t2981;
  double t2988;
  double t2995;
  double t3005;
  double t3013;
  double t3020;
  double t3035;
  double t3040;
  double t3042;
  double t3051;
  double t3052;
  double t3062;
  double t2362;
  double t2495;
  double t2496;
  double t3148;
  double t3173;
  double t3174;
  double t3180;
  double t3181;
  double t3184;
  double t3194;
  double t3196;
  double t3199;
  double t3202;
  double t3205;
  double t3209;
  double t3210;
  double t3218;
  double t3220;
  double t3224;
  double t3226;
  double t3229;
  double t3230;
  double t3231;
  double t3240;
  double t3244;
  double t3247;
  double t3251;
  double t3255;
  double t3256;
  double t3259;
  double t3266;
  double t3267;
  double t3268;
  double t3273;
  double t3274;
  double t3277;
  double t3137;
  double t3138;
  double t3143;
  double t3146;
  double t3147;
  double t3149;
  double t3155;
  double t3160;
  double t3161;
  double t3167;
  double t3208;
  double t3250;
  double t3279;
  double t3285;
  double t3293;
  double t3297;
  double t3310;
  double t3312;
  double t3315;
  double t3327;
  double t3330;
  double t3332;
  double t3334;
  double t3335;
  double t3337;
  double t3351;
  double t1523;
  double t2211;
  double t2214;
  double t3367;
  double t3368;
  double t3371;
  double t3372;
  double t3144;
  double t3290;
  double t3352;
  double t3359;
  double t3383;
  double t3387;
  double t3391;
  double t3392;
  double t3404;
  double t3411;
  double t3412;
  double t3413;
  double t3416;
  double t3421;
  double t3433;
  double t3442;
  double t3464;
  double t3360;
  double t3373;
  double t3374;
  double t3422;
  double t3465;
  double t3469;
  double t3475;
  double t3483;
  double t3484;
  double t2756;
  double t2909;
  double t2918;
  double t3379;
  double t3492;
  double t3519;
  double t3550;
  double t3596;
  double t3610;
  double t3661;
  double t3683;
  double t3705;
  double t3738;
  double t3765;
  double t3789;
  double t4065;
  double t4073;
  double t4075;
  double t4080;
  double t4090;
  double t4092;
  double t4094;
  double t4095;
  double t4159;
  double t4170;
  double t4171;
  double t4173;
  double t4193;
  double t4197;
  double t4201;
  double t4206;
  double t4279;
  double t4280;
  double t4286;
  double t4292;
  double t4304;
  double t4306;
  double t4311;
  double t4317;
  t535 = Cos(var1[17]);
  t572 = -1.*t535;
  t620 = 1. + t572;
  t78 = Cos(var1[16]);
  t217 = -1.*t78;
  t327 = 1. + t217;
  t696 = Sin(var1[17]);
  t453 = Sin(var1[16]);
  t702 = 4.e-6*t696;
  t683 = 1.000000000016*t620;
  t685 = -7.e-6*t620;
  t769 = t685 + t702;
  t819 = -7.e-6*t769;
  t833 = -1. + t683 + t819;
  t1196 = 4.e-6*t327;
  t981 = 2.8e-11*t620;
  t1003 = 4.e-6*t620;
  t1004 = 7.e-6*t696;
  t1029 = t1003 + t1004;
  t1103 = -7.e-6*t1029;
  t1149 = -1.*t696;
  t1177 = t981 + t1103 + t1149;
  t1246 = -6.5e-11*t620;
  t1280 = 1. + t1246;
  t1354 = -7.e-6*t1280;
  t1400 = 7.e-6*t620;
  t1415 = t1354 + t1400 + t702;
  t354 = -2.8e-11*t327;
  t1670 = -7.e-6*t327;
  t1966 = Cos(var1[15]);
  t1706 = -4.e-6*t453;
  t1754 = t1670 + t1706;
  t1770 = t1754*t833;
  t1787 = -7.e-6*t453;
  t1819 = t1196 + t1787;
  t1826 = t1819*t1177;
  t1856 = -6.5e-11*t327;
  t1886 = 1. + t1856;
  t1891 = t1886*t1415;
  t1893 = t1770 + t1826 + t1891;
  t1644 = Sin(var1[15]);
  t1990 = -1.000000000016*t327;
  t1998 = 1. + t1990;
  t2012 = t1998*t833;
  t2020 = -1.*t453;
  t2023 = t354 + t2020;
  t2034 = t2023*t1177;
  t2046 = 4.e-6*t453;
  t2055 = t1670 + t2046;
  t2078 = t2055*t1415;
  t2116 = t2012 + t2034 + t2078;
  t900 = -1.000000000049*t327;
  t970 = 1. + t900;
  t1209 = 7.e-6*t453;
  t1217 = t1196 + t1209;
  t505 = t354 + t453;
  t1491 = Sin(var1[4]);
  t1533 = Cos(var1[4]);
  t1552 = Cos(var1[5]);
  t2218 = 1.000000000049*t620;
  t2237 = 4.e-6*t1029;
  t2248 = -1. + t2218 + t2237;
  t2292 = 4.e-6*t1280;
  t2293 = -1. + t535;
  t2297 = 4.e-6*t2293;
  t2315 = t2292 + t2297 + t1004;
  t2331 = 4.e-6*t769;
  t2332 = t981 + t2331 + t696;
  t2366 = t2023*t2248;
  t2370 = t2055*t2315;
  t2396 = t1998*t2332;
  t2407 = t2366 + t2370 + t2396;
  t2417 = t1819*t2248;
  t2418 = t1886*t2315;
  t2433 = t1754*t2332;
  t2437 = t2417 + t2418 + t2433;
  t2186 = Sin(var1[5]);
  t2514 = -4.e-6*t696;
  t2504 = 6.5e-11*t620;
  t2519 = t685 + t2514;
  t2521 = 7.e-6*t2519;
  t2538 = t2297 + t1004;
  t2540 = 4.e-6*t2538;
  t2557 = -1. + t2504 + t2521 + t2540;
  t2565 = -1. + t2218;
  t2576 = 4.e-6*t2565;
  t2588 = -7.e-6*t696;
  t2589 = -2.8e-11*t620;
  t2599 = t2589 + t696;
  t2629 = 7.e-6*t2599;
  t2630 = t2576 + t2297 + t2588 + t2629;
  t2654 = -1.000000000016*t620;
  t2656 = 1. + t2654;
  t2666 = 7.e-6*t2656;
  t2684 = t981 + t696;
  t2704 = 4.e-6*t2684;
  t2717 = t2666 + t1400 + t2514 + t2704;
  t2771 = t2055*t2557;
  t2775 = t2023*t2630;
  t2783 = t1998*t2717;
  t2794 = t2771 + t2775 + t2783;
  t2807 = t1886*t2557;
  t2810 = t1819*t2630;
  t2818 = t1754*t2717;
  t2845 = t2807 + t2810 + t2818;
  t2155 = t1966*t1893;
  t2156 = t1644*t2116;
  t2164 = t2155 + t2156;
  t1960 = -1.*t1644*t1893;
  t2129 = t1966*t2116;
  t2139 = t1960 + t2129;
  t869 = t505*t833;
  t1183 = t970*t1177;
  t1439 = t1217*t1415;
  t1465 = t869 + t1183 + t1439;
  t2141 = t1552*t2139;
  t2196 = -1.*t2164*t2186;
  t2202 = t2141 + t2196;
  t2932 = Cos(var1[3]);
  t2477 = t1644*t2407;
  t2479 = t1966*t2437;
  t2484 = t2477 + t2479;
  t2414 = t1966*t2407;
  t2463 = -1.*t1644*t2437;
  t2465 = t2414 + t2463;
  t2967 = Sin(var1[3]);
  t2270 = t970*t2248;
  t2320 = t1217*t2315;
  t2334 = t505*t2332;
  t2337 = t2270 + t2320 + t2334;
  t2472 = t1552*t2465;
  t2487 = -1.*t2484*t2186;
  t2488 = t2472 + t2487;
  t2878 = t1644*t2794;
  t2890 = t1966*t2845;
  t2891 = t2878 + t2890;
  t2797 = t1966*t2794;
  t2849 = -1.*t1644*t2845;
  t2856 = t2797 + t2849;
  t2562 = t1217*t2557;
  t2637 = t970*t2630;
  t2745 = t505*t2717;
  t2753 = t2562 + t2637 + t2745;
  t2863 = t1552*t2856;
  t2897 = -1.*t2891*t2186;
  t2901 = t2863 + t2897;
  t2935 = t1552*t2164;
  t2939 = t2139*t2186;
  t2949 = t2935 + t2939;
  t2968 = t1533*t1465;
  t2971 = -1.*t1491*t2202;
  t2976 = t2968 + t2971;
  t2981 = t1552*t2484;
  t2988 = t2465*t2186;
  t2995 = t2981 + t2988;
  t3005 = t1533*t2337;
  t3013 = -1.*t1491*t2488;
  t3020 = t3005 + t3013;
  t3035 = t1552*t2891;
  t3040 = t2856*t2186;
  t3042 = t3035 + t3040;
  t3051 = t1533*t2753;
  t3052 = -1.*t1491*t2901;
  t3062 = t3051 + t3052;
  t2362 = t2337*t1491;
  t2495 = t1533*t2488;
  t2496 = t2362 + t2495;
  t3148 = 7.e-6*t327;
  t3173 = 2.826290000000002e-7*var1[17];
  t3174 = -0.148715*t1280;
  t3180 = -2.18904205e-16*t620;
  t3181 = t1003 + t2588;
  t3184 = -0.038576*t3181;
  t3194 = -0.80315*t2519;
  t3196 = t1400 + t702;
  t3199 = -0.5031510000080001*t3196;
  t3202 = -0.038575000014*t2538;
  t3205 = t3173 + t3174 + t3180 + t3184 + t3194 + t3199 + t3202;
  t3209 = 1.1305160000000008e-12*var1[17];
  t3210 = -1.000000000049*t620;
  t3218 = 1. + t3210;
  t3220 = -0.038576*t3218;
  t3224 = -0.03857500001589017*t620;
  t3226 = t981 + t1149;
  t3229 = -0.5031510000080001*t3226;
  t3230 = t2297 + t2588;
  t3231 = -3.367757e-6*t3230;
  t3240 = -0.148715*t1029;
  t3244 = -0.80315*t2599;
  t3247 = t3209 + t3220 + t3224 + t3229 + t3231 + t3240 + t3244;
  t3251 = -1.9784030000000015e-12*var1[17];
  t3255 = -0.80315*t2656;
  t3256 = -0.5031510000160505*t620;
  t3259 = t2589 + t1149;
  t3266 = -0.038576*t3259;
  t3267 = t1400 + t2514;
  t3268 = -3.367757e-6*t3267;
  t3273 = -0.148715*t769;
  t3274 = -0.038575000014*t2684;
  t3277 = t3251 + t3255 + t3256 + t3266 + t3268 + t3273 + t3274;
  t3137 = -1.*t1966;
  t3138 = 1. + t3137;
  t3143 = -0.15121*t3138;
  t3146 = -2.7726089999999997e-12*var1[16];
  t3147 = -0.2812110000084994*t327;
  t3149 = t3148 + t1706;
  t3155 = -1.8134809999999998e-6*t3149;
  t3160 = 2.8e-11*t327;
  t3161 = t3160 + t453;
  t3167 = -0.038749000006999997*t3161;
  t3208 = t2055*t3205;
  t3250 = t2023*t3247;
  t3279 = t1998*t3277;
  t3285 = t3146 + t3147 + t3155 + t3167 + t3208 + t3250 + t3279;
  t3293 = 3.9608699999999997e-7*var1[16];
  t3297 = -1.1787626499999999e-16*t327;
  t3310 = t3148 + t2046;
  t3312 = -0.281211000004*t3310;
  t3315 = -1. + t78;
  t3327 = 4.e-6*t3315;
  t3330 = t3327 + t1209;
  t3332 = -0.038749000006999997*t3330;
  t3334 = t1886*t3205;
  t3335 = t1819*t3247;
  t3337 = t1754*t3277;
  t3351 = t3293 + t3297 + t3312 + t3332 + t3334 + t3335 + t3337;
  t1523 = t1465*t1491;
  t2211 = t1533*t2202;
  t2214 = t1523 + t2211;
  t3367 = -0.15121*t1644;
  t3368 = t1966*t3285;
  t3371 = -1.*t1644*t3351;
  t3372 = t3143 + t3367 + t3368 + t3371;
  t3144 = 0.15121*t1644;
  t3290 = t1644*t3285;
  t3352 = t1966*t3351;
  t3359 = t3143 + t3144 + t3290 + t3352;
  t3383 = 1.5843479999999999e-12*var1[16];
  t3387 = -0.03874900000889869*t327;
  t3391 = t3160 + t2020;
  t3392 = -0.281211000004*t3391;
  t3404 = t3327 + t1787;
  t3411 = -1.8134809999999998e-6*t3404;
  t3412 = t1217*t3205;
  t3413 = t970*t3247;
  t3416 = t505*t3277;
  t3421 = t3383 + t3387 + t3392 + t3411 + t3412 + t3413 + t3416;
  t3433 = t1552*t3372;
  t3442 = -1.*t3359*t2186;
  t3464 = t3433 + t3442;
  t3360 = t1552*t3359;
  t3373 = t3372*t2186;
  t3374 = t3360 + t3373;
  t3422 = t3421*t1491;
  t3465 = t1533*t3464;
  t3469 = t3422 + t3465;
  t3475 = t1533*t3421;
  t3483 = -1.*t1491*t3464;
  t3484 = t3475 + t3483;
  t2756 = t2753*t1491;
  t2909 = t1533*t2901;
  t2918 = t2756 + t2909;
  t3379 = -1.*t2949*t3374;
  t3492 = t2995*t3374;
  t3519 = t2949*t3374;
  t3550 = -1.*t3374*t3042;
  t3596 = -1.*t2995*t3374;
  t3610 = t3374*t3042;
  t3661 = -1.*t1465*t3421;
  t3683 = t2337*t3421;
  t3705 = t1465*t3421;
  t3738 = -1.*t3421*t2753;
  t3765 = -1.*t2337*t3421;
  t3789 = t3421*t2753;
  t4065 = -1.*t3205*t1415;
  t4073 = -1.*t1177*t3247;
  t4075 = -1.*t833*t3277;
  t4080 = t4065 + t4073 + t4075;
  t4090 = t3205*t2315;
  t4092 = t2248*t3247;
  t4094 = t2332*t3277;
  t4095 = t4090 + t4092 + t4094;
  t4159 = t3205*t1415;
  t4170 = t1177*t3247;
  t4171 = t833*t3277;
  t4173 = t4159 + t4170 + t4171;
  t4193 = -1.*t3205*t2557;
  t4197 = -1.*t3247*t2630;
  t4201 = -1.*t3277*t2717;
  t4206 = t4193 + t4197 + t4201;
  t4279 = -1.*t3205*t2315;
  t4280 = -1.*t2248*t3247;
  t4286 = -1.*t2332*t3277;
  t4292 = t4279 + t4280 + t4286;
  t4304 = t3205*t2557;
  t4306 = t3247*t2630;
  t4311 = t3277*t2717;
  t4317 = t4304 + t4306 + t4311;
  p_output1[0]=t2214*var2[0] + t2496*var2[1] + t2918*var2[2];
  p_output1[1]=(t2932*t2949 - 1.*t2967*t2976)*var2[0] + (t2932*t2995 - 1.*t2967*t3020)*var2[1] + (t2932*t3042 - 1.*t2967*t3062)*var2[2];
  p_output1[2]=(t2949*t2967 + t2932*t2976)*var2[0] + (t2967*t2995 + t2932*t3020)*var2[1] + (t2967*t3042 + t2932*t3062)*var2[2];
  p_output1[3]=(t2918*(-1.*t2496*t3469 - 1.*t3020*t3484 + t3596) + t2496*(t2918*t3469 + t3062*t3484 + t3610))*var2[0] + (t2918*(t2214*t3469 + t2976*t3484 + t3519) + t2214*(-1.*t2918*t3469 - 1.*t3062*t3484 + t3550))*var2[1] + (t2496*(t3379 - 1.*t2214*t3469 - 1.*t2976*t3484) + t2214*(t2496*t3469 + t3020*t3484 + t3492))*var2[2];
  p_output1[4]=(t3042*(-1.*t2488*t3464 + t3596 + t3765) + t2995*(t2901*t3464 + t3610 + t3789))*var2[0] + (t3042*(t2202*t3464 + t3519 + t3705) + t2949*(-1.*t2901*t3464 + t3550 + t3738))*var2[1] + (t2995*(t3379 - 1.*t2202*t3464 + t3661) + t2949*(t2488*t3464 + t3492 + t3683))*var2[2];
  p_output1[5]=(t2753*(-1.*t2484*t3359 - 1.*t2465*t3372 + t3765) + t2337*(t2891*t3359 + t2856*t3372 + t3789))*var2[0] + (t2753*(t2164*t3359 + t2139*t3372 + t3705) + t1465*(-1.*t2891*t3359 - 1.*t2856*t3372 + t3738))*var2[1] + (t2337*(-1.*t2164*t3359 - 1.*t2139*t3372 + t3661) + t1465*(t2484*t3359 + t2465*t3372 + t3683))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.15121*t1893 - 0.15121*t2116 + t2753*(-1.*t2407*t3285 - 1.*t2437*t3351 + t3765) + t2337*(t2794*t3285 + t2845*t3351 + t3789))*var2[0] + (-0.15121*t2407 + 0.15121*t2437 + t2753*(t2116*t3285 + t1893*t3351 + t3705) + t1465*(-1.*t2794*t3285 - 1.*t2845*t3351 + t3738))*var2[1] + (-0.15121*t2794 + 0.15121*t2845 + t2337*(-1.*t2116*t3285 - 1.*t1893*t3351 + t3661) + t1465*(t2407*t3285 + t2437*t3351 + t3683))*var2[2];
  p_output1[16]=(0.281211*t1177 - 1.*t2557*t4292 - 1.*t2315*t4317 + 4.e-6*(-1.*t2630*t4292 - 1.*t2248*t4317) + 7.e-6*(t2717*t4292 + t2332*t4317) + 1.e-6*(7.e-6*t1280 + t2514 + t685) - 0.038749*t833)*var2[0] + (0.281211*t2248 - 0.038749*t2332 + 1.e-6*(t1003 + 4.e-6*(-1. + t2504) + t2588) - 1.*t2557*t4173 - 1.*t1415*t4206 + 4.e-6*(-1.*t2630*t4173 - 1.*t1177*t4206) + 7.e-6*(t2717*t4173 + t4206*t833))*var2[1] + (0.281211*t2630 - 0.038749*t2717 + 1.e-6*(1. + t1246 - 7.e-6*t2519 + 4.e-6*t3181) - 1.*t2315*t4080 - 1.*t1415*t4095 + 4.e-6*(-1.*t2248*t4080 - 1.*t1177*t4095) + 7.e-6*(t2332*t4080 + t4095*t833))*var2[2];
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

#include "fRrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
