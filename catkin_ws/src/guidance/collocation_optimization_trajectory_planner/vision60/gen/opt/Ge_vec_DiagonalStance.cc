/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 20:55:49 GMT+02:00
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
  double t368;
  double t539;
  double t452;
  double t494;
  double t541;
  double t258;
  double t326;
  double t549;
  double t564;
  double t566;
  double t568;
  double t536;
  double t543;
  double t545;
  double t584;
  double t593;
  double t547;
  double t1230;
  double t1767;
  double t410;
  double t554;
  double t559;
  double t570;
  double t572;
  double t574;
  double t576;
  double t2222;
  double t2292;
  double t2293;
  double t2294;
  double t2295;
  double t586;
  double t598;
  double t606;
  double t614;
  double t616;
  double t618;
  double t619;
  double t2303;
  double t2308;
  double t2309;
  double t2310;
  double t2311;
  double t1337;
  double t2177;
  double t2178;
  double t2182;
  double t2189;
  double t2193;
  double t2200;
  double t2319;
  double t2324;
  double t2325;
  double t2326;
  double t2327;
  double t2260;
  double t2261;
  double t2290;
  double t2291;
  double t2296;
  double t2297;
  double t2298;
  double t2299;
  double t2335;
  double t2336;
  double t2337;
  double t2338;
  double t2340;
  double t2304;
  double t2305;
  double t2306;
  double t2307;
  double t2312;
  double t2313;
  double t2314;
  double t2315;
  double t2427;
  double t2434;
  double t2438;
  double t2445;
  double t2456;
  double t2320;
  double t2321;
  double t2322;
  double t2323;
  double t2328;
  double t2329;
  double t2330;
  double t2331;
  double t2512;
  double t2513;
  double t2514;
  double t2515;
  double t2517;
  double t588;
  double t2527;
  double t2531;
  double t2528;
  double t2529;
  double t2530;
  double t2532;
  double t2533;
  double t2534;
  double t2535;
  double t2539;
  double t2544;
  double t2545;
  double t2546;
  double t2547;
  double t2540;
  double t2541;
  double t2542;
  double t2543;
  double t2548;
  double t2549;
  double t2550;
  double t2551;
  double t2555;
  double t2559;
  double t2560;
  double t2561;
  double t2562;
  double t2660;
  double t2665;
  double t2676;
  double t2681;
  double t2692;
  double t2693;
  double t2854;
  double t2855;
  double t2856;
  double t2774;
  double t2775;
  double t2838;
  double t2839;
  double t2840;
  double t2866;
  double t2867;
  double t2868;
  double t2844;
  double t2845;
  double t2846;
  double t2847;
  double t2848;
  double t2878;
  double t2879;
  double t2880;
  double t2852;
  double t2853;
  double t2857;
  double t2341;
  double t2342;
  double t2858;
  double t2859;
  double t2860;
  double t2888;
  double t2889;
  double t2890;
  double t2864;
  double t2865;
  double t2869;
  double t2460;
  double t2467;
  double t2870;
  double t2871;
  double t2872;
  double t2899;
  double t2900;
  double t2901;
  double t2876;
  double t2877;
  double t2881;
  double t2518;
  double t2519;
  double t2882;
  double t2883;
  double t2884;
  double t2910;
  double t2911;
  double t2912;
  double t2773;
  double t2921;
  double t2922;
  double t2923;
  double t2924;
  double t2925;
  double t2931;
  double t2932;
  double t2933;
  double t2929;
  double t2930;
  double t2934;
  double t2556;
  double t2557;
  double t2935;
  double t2936;
  double t2937;
  double t2942;
  double t2943;
  double t2944;
  double t3010;
  double t3068;
  double t3069;
  double t3072;
  double t3073;
  double t3074;
  double t3075;
  double t3084;
  double t3070;
  double t3082;
  double t3078;
  double t3091;
  double t3092;
  double t3093;
  double t3094;
  double t3095;
  double t3096;
  double t3119;
  double t3120;
  double t3121;
  double t3100;
  double t3101;
  double t3102;
  double t3103;
  double t3104;
  double t3105;
  double t3130;
  double t3131;
  double t3132;
  double t3109;
  double t3110;
  double t3111;
  double t3112;
  double t3113;
  double t3114;
  double t3141;
  double t3142;
  double t3143;
  double t3087;
  double t3151;
  double t3152;
  double t3153;
  double t3154;
  double t3155;
  double t3156;
  double t3161;
  double t3162;
  double t3163;
  double t3172;
  double t3173;
  double t3174;
  double t3175;
  double t3176;
  double t3180;
  double t3183;
  double t3184;
  double t3185;
  double t3236;
  double t3237;
  double t3242;
  double t3226;
  double t3243;
  double t3253;
  double t3254;
  double t3256;
  double t3263;
  double t3265;
  double t3266;
  double t3277;
  double t3278;
  double t3280;
  double t3288;
  double t3289;
  double t3291;
  double t3292;
  double t3293;
  double t3301;
  double t3302;
  double t3303;
  double t3297;
  double t3315;
  double t3316;
  double t3317;
  double t3318;
  double t3319;
  double t3325;
  double t3326;
  double t3327;
  double t3338;
  double t3339;
  double t3340;
  double t3349;
  double t3350;
  double t3351;
  double t3352;
  double t3353;
  double t3363;
  double t3364;
  double t3365;
  double t3354;
  double t3376;
  double t3377;
  double t3378;
  double t3379;
  double t3380;
  double t3385;
  double t3386;
  double t3387;
  double t3397;
  double t3398;
  double t3399;
  double t3410;
  double t3411;
  double t3412;
  double t3413;
  double t3414;
  double t3421;
  double t3422;
  double t3423;
  double t3415;
  double t3434;
  double t3435;
  double t3436;
  double t3437;
  double t3438;
  double t3446;
  double t3447;
  double t3448;
  double t3458;
  double t3459;
  double t3460;
  t368 = Sin(var1[3]);
  t539 = Cos(var1[3]);
  t452 = Cos(var1[5]);
  t494 = Sin(var1[4]);
  t541 = Sin(var1[5]);
  t258 = Cos(var1[4]);
  t326 = Sin(var1[9]);
  t549 = Cos(var1[9]);
  t564 = t539*t452;
  t566 = -1.*t368*t494*t541;
  t568 = t564 + t566;
  t536 = t452*t368*t494;
  t543 = t539*t541;
  t545 = t536 + t543;
  t584 = Sin(var1[12]);
  t593 = Cos(var1[12]);
  t547 = -0.325*t545;
  t1230 = Sin(var1[15]);
  t1767 = Cos(var1[15]);
  t410 = 0.1575*t258*t326*t368;
  t554 = -1.*t549;
  t559 = 1. + t554;
  t570 = 0.1575*t559*t568;
  t572 = -1.*t258*t326*t368;
  t574 = t549*t568;
  t576 = t572 + t574;
  t2222 = Cos(var1[10]);
  t2292 = Sin(var1[10]);
  t2293 = -1.*t549*t258*t368;
  t2294 = -1.*t326*t568;
  t2295 = t2293 + t2294;
  t586 = -0.1575*t258*t584*t368;
  t598 = -1.*t593;
  t606 = 1. + t598;
  t614 = -0.1575*t606*t568;
  t616 = -1.*t258*t584*t368;
  t618 = t593*t568;
  t619 = t616 + t618;
  t2303 = Cos(var1[13]);
  t2308 = Sin(var1[13]);
  t2309 = -1.*t593*t258*t368;
  t2310 = -1.*t584*t568;
  t2311 = t2309 + t2310;
  t1337 = -0.1575*t258*t1230*t368;
  t2177 = -1.*t1767;
  t2178 = 1. + t2177;
  t2182 = -0.1575*t2178*t568;
  t2189 = -1.*t258*t1230*t368;
  t2193 = t1767*t568;
  t2200 = t2189 + t2193;
  t2319 = Cos(var1[16]);
  t2324 = Sin(var1[16]);
  t2325 = -1.*t1767*t258*t368;
  t2326 = -1.*t1230*t568;
  t2327 = t2325 + t2326;
  t2260 = -1.*t2222;
  t2261 = 1. + t2260;
  t2290 = -0.325*t2261*t545;
  t2291 = 0.2255*t576;
  t2296 = 0.325*t2292*t2295;
  t2297 = t2222*t545;
  t2298 = t2292*t2295;
  t2299 = t2297 + t2298;
  t2335 = Sin(var1[11]);
  t2336 = -1.*t2292*t545;
  t2337 = t2222*t2295;
  t2338 = t2336 + t2337;
  t2340 = Cos(var1[11]);
  t2304 = -1.*t2303;
  t2305 = 1. + t2304;
  t2306 = 0.325*t2305*t545;
  t2307 = -0.2255*t619;
  t2312 = -0.325*t2308*t2311;
  t2313 = t2303*t545;
  t2314 = t2308*t2311;
  t2315 = t2313 + t2314;
  t2427 = Sin(var1[14]);
  t2434 = -1.*t2308*t545;
  t2438 = t2303*t2311;
  t2445 = t2434 + t2438;
  t2456 = Cos(var1[14]);
  t2320 = -1.*t2319;
  t2321 = 1. + t2320;
  t2322 = -0.325*t2321*t545;
  t2323 = -0.2255*t2200;
  t2328 = 0.325*t2324*t2327;
  t2329 = t2319*t545;
  t2330 = t2324*t2327;
  t2331 = t2329 + t2330;
  t2512 = Sin(var1[17]);
  t2513 = -1.*t2324*t545;
  t2514 = t2319*t2327;
  t2515 = t2513 + t2514;
  t2517 = Cos(var1[17]);
  t588 = 0.325*t545;
  t2527 = Cos(var1[6]);
  t2531 = Sin(var1[6]);
  t2528 = -1.*t2527;
  t2529 = 1. + t2528;
  t2530 = 0.1575*t2529*t568;
  t2532 = 0.1575*t258*t368*t2531;
  t2533 = t2527*t568;
  t2534 = -1.*t258*t368*t2531;
  t2535 = t2533 + t2534;
  t2539 = Cos(var1[7]);
  t2544 = -1.*t258*t2527*t368;
  t2545 = -1.*t568*t2531;
  t2546 = t2544 + t2545;
  t2547 = Sin(var1[7]);
  t2540 = -1.*t2539;
  t2541 = 1. + t2540;
  t2542 = 0.325*t2541*t545;
  t2543 = 0.2255*t2535;
  t2548 = -0.325*t2546*t2547;
  t2549 = t2539*t545;
  t2550 = t2546*t2547;
  t2551 = t2549 + t2550;
  t2555 = Cos(var1[8]);
  t2559 = t2539*t2546;
  t2560 = -1.*t545*t2547;
  t2561 = t2559 + t2560;
  t2562 = Sin(var1[8]);
  t2660 = 0.325*t539*t258*t452;
  t2665 = 0.1575*t539*t326*t494;
  t2676 = 0.1575*t559*t539*t258*t541;
  t2681 = -1.*t539*t326*t494;
  t2692 = t549*t539*t258*t541;
  t2693 = t2681 + t2692;
  t2854 = -1.*t549*t539*t494;
  t2855 = -1.*t539*t258*t326*t541;
  t2856 = t2854 + t2855;
  t2774 = -0.1575*t539*t584*t494;
  t2775 = -0.1575*t606*t539*t258*t541;
  t2838 = -1.*t539*t584*t494;
  t2839 = t593*t539*t258*t541;
  t2840 = t2838 + t2839;
  t2866 = -1.*t593*t539*t494;
  t2867 = -1.*t539*t258*t584*t541;
  t2868 = t2866 + t2867;
  t2844 = -0.1575*t539*t1230*t494;
  t2845 = -0.1575*t2178*t539*t258*t541;
  t2846 = -1.*t539*t1230*t494;
  t2847 = t1767*t539*t258*t541;
  t2848 = t2846 + t2847;
  t2878 = -1.*t1767*t539*t494;
  t2879 = -1.*t539*t258*t1230*t541;
  t2880 = t2878 + t2879;
  t2852 = 0.325*t2261*t539*t258*t452;
  t2853 = 0.2255*t2693;
  t2857 = 0.325*t2292*t2856;
  t2341 = -1.*t2340;
  t2342 = 1. + t2341;
  t2858 = -1.*t2222*t539*t258*t452;
  t2859 = t2292*t2856;
  t2860 = t2858 + t2859;
  t2888 = t539*t258*t452*t2292;
  t2889 = t2222*t2856;
  t2890 = t2888 + t2889;
  t2864 = -0.325*t2305*t539*t258*t452;
  t2865 = -0.2255*t2840;
  t2869 = -0.325*t2308*t2868;
  t2460 = -1.*t2456;
  t2467 = 1. + t2460;
  t2870 = -1.*t2303*t539*t258*t452;
  t2871 = t2308*t2868;
  t2872 = t2870 + t2871;
  t2899 = t539*t258*t452*t2308;
  t2900 = t2303*t2868;
  t2901 = t2899 + t2900;
  t2876 = 0.325*t2321*t539*t258*t452;
  t2877 = -0.2255*t2848;
  t2881 = 0.325*t2324*t2880;
  t2518 = -1.*t2517;
  t2519 = 1. + t2518;
  t2882 = -1.*t2319*t539*t258*t452;
  t2883 = t2324*t2880;
  t2884 = t2882 + t2883;
  t2910 = t539*t258*t452*t2324;
  t2911 = t2319*t2880;
  t2912 = t2910 + t2911;
  t2773 = -0.325*t539*t258*t452;
  t2921 = 0.1575*t539*t258*t2529*t541;
  t2922 = 0.1575*t539*t494*t2531;
  t2923 = t539*t258*t2527*t541;
  t2924 = -1.*t539*t494*t2531;
  t2925 = t2923 + t2924;
  t2931 = -1.*t539*t2527*t494;
  t2932 = -1.*t539*t258*t541*t2531;
  t2933 = t2931 + t2932;
  t2929 = -0.325*t539*t258*t452*t2541;
  t2930 = 0.2255*t2925;
  t2934 = -0.325*t2933*t2547;
  t2556 = -1.*t2555;
  t2557 = 1. + t2556;
  t2935 = -1.*t539*t258*t452*t2539;
  t2936 = t2933*t2547;
  t2937 = t2935 + t2936;
  t2942 = t2539*t2933;
  t2943 = t539*t258*t452*t2547;
  t2944 = t2942 + t2943;
  t3010 = t539*t452*t494;
  t3068 = -1.*t368*t541;
  t3069 = t3010 + t3068;
  t3072 = t452*t368;
  t3073 = t539*t494*t541;
  t3074 = t3072 + t3073;
  t3075 = -0.325*t3074;
  t3084 = 0.325*t3074;
  t3070 = 0.1575*t559*t3069;
  t3082 = -0.1575*t606*t3069;
  t3078 = -0.1575*t2178*t3069;
  t3091 = 0.2255*t549*t3069;
  t3092 = -0.325*t326*t2292*t3069;
  t3093 = -0.325*t2261*t3074;
  t3094 = -1.*t326*t2292*t3069;
  t3095 = t2222*t3074;
  t3096 = t3094 + t3095;
  t3119 = -1.*t2222*t326*t3069;
  t3120 = -1.*t2292*t3074;
  t3121 = t3119 + t3120;
  t3100 = -0.2255*t593*t3069;
  t3101 = 0.325*t584*t2308*t3069;
  t3102 = 0.325*t2305*t3074;
  t3103 = -1.*t584*t2308*t3069;
  t3104 = t2303*t3074;
  t3105 = t3103 + t3104;
  t3130 = -1.*t2303*t584*t3069;
  t3131 = -1.*t2308*t3074;
  t3132 = t3130 + t3131;
  t3109 = -0.2255*t1767*t3069;
  t3110 = -0.325*t1230*t2324*t3069;
  t3111 = -0.325*t2321*t3074;
  t3112 = -1.*t1230*t2324*t3069;
  t3113 = t2319*t3074;
  t3114 = t3112 + t3113;
  t3141 = -1.*t2319*t1230*t3069;
  t3142 = -1.*t2324*t3074;
  t3143 = t3141 + t3142;
  t3087 = 0.1575*t2529*t3069;
  t3151 = 0.2255*t2527*t3069;
  t3152 = 0.325*t2541*t3074;
  t3153 = 0.325*t3069*t2531*t2547;
  t3154 = t2539*t3074;
  t3155 = -1.*t3069*t2531*t2547;
  t3156 = t3154 + t3155;
  t3161 = -1.*t2539*t3069*t2531;
  t3162 = -1.*t3074*t2547;
  t3163 = t3161 + t3162;
  t3172 = -0.1575*t539*t258*t2527;
  t3173 = 0.1575*t3074*t2531;
  t3174 = t539*t258*t2527;
  t3175 = -1.*t3074*t2531;
  t3176 = t3174 + t3175;
  t3180 = 0.2255*t3176;
  t3183 = -1.*t2527*t3074;
  t3184 = -1.*t539*t258*t2531;
  t3185 = t3183 + t3184;
  t3236 = -1.*t539*t452*t494;
  t3237 = t368*t541;
  t3242 = t3236 + t3237;
  t3226 = -0.325*t2539*t3176;
  t3243 = 0.325*t3242*t2547;
  t3253 = t2539*t3176;
  t3254 = -1.*t3242*t2547;
  t3256 = t3253 + t3254;
  t3263 = -1.*t2539*t3242;
  t3265 = -1.*t3176*t2547;
  t3266 = t3263 + t3265;
  t3277 = t2539*t3242;
  t3278 = t3176*t2547;
  t3280 = t3277 + t3278;
  t3288 = -0.1575*t549*t539*t258;
  t3289 = 0.1575*t326*t3074;
  t3291 = t549*t539*t258;
  t3292 = -1.*t326*t3074;
  t3293 = t3291 + t3292;
  t3301 = -1.*t539*t258*t326;
  t3302 = -1.*t549*t3074;
  t3303 = t3301 + t3302;
  t3297 = 0.2255*t3293;
  t3315 = -0.325*t2292*t3242;
  t3316 = 0.325*t2222*t3293;
  t3317 = -1.*t2292*t3242;
  t3318 = t2222*t3293;
  t3319 = t3317 + t3318;
  t3325 = -1.*t2222*t3242;
  t3326 = -1.*t2292*t3293;
  t3327 = t3325 + t3326;
  t3338 = t2222*t3242;
  t3339 = t2292*t3293;
  t3340 = t3338 + t3339;
  t3349 = 0.1575*t593*t539*t258;
  t3350 = -0.1575*t584*t3074;
  t3351 = t593*t539*t258;
  t3352 = -1.*t584*t3074;
  t3353 = t3351 + t3352;
  t3363 = -1.*t539*t258*t584;
  t3364 = -1.*t593*t3074;
  t3365 = t3363 + t3364;
  t3354 = -0.2255*t3353;
  t3376 = 0.325*t2308*t3242;
  t3377 = -0.325*t2303*t3353;
  t3378 = -1.*t2308*t3242;
  t3379 = t2303*t3353;
  t3380 = t3378 + t3379;
  t3385 = -1.*t2303*t3242;
  t3386 = -1.*t2308*t3353;
  t3387 = t3385 + t3386;
  t3397 = t2303*t3242;
  t3398 = t2308*t3353;
  t3399 = t3397 + t3398;
  t3410 = 0.1575*t1767*t539*t258;
  t3411 = -0.1575*t1230*t3074;
  t3412 = t1767*t539*t258;
  t3413 = -1.*t1230*t3074;
  t3414 = t3412 + t3413;
  t3421 = -1.*t539*t258*t1230;
  t3422 = -1.*t1767*t3074;
  t3423 = t3421 + t3422;
  t3415 = -0.2255*t3414;
  t3434 = -0.325*t2324*t3242;
  t3435 = 0.325*t2319*t3414;
  t3436 = -1.*t2324*t3242;
  t3437 = t2319*t3414;
  t3438 = t3436 + t3437;
  t3446 = -1.*t2319*t3242;
  t3447 = -1.*t2324*t3414;
  t3448 = t3446 + t3447;
  t3458 = t2319*t3242;
  t3459 = t2324*t3414;
  t3460 = t3458 + t3459;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=-258.00300000000004;
  p_output1[3]=-6.1312500000000005*(t1337 + t2182 + t2322 + t2323 + t2328 - 0.325*t2331) - 1.9620000000000002*(t1337 + t2182 + t2322 + t2323 + t2328 - 0.575*t2512*t2515 - 0.575*(-1.*t2512*t2515 + t2331*t2517) - 0.575*t2331*t2519) - 6.1312500000000005*(t2530 + t2532 + t2542 + t2543 + t2548 + 0.325*t2551) - 1.9620000000000002*(t2530 + t2532 + t2542 + t2543 + t2548 + 0.075*t2551*t2557 + 0.075*t2561*t2562 + 0.075*(t2551*t2555 - 1.*t2561*t2562)) - 26.977500000000003*(t1337 + t2182 - 0.1575*t2200 + t547) - 6.1312500000000005*(t2290 + t2291 + t2296 - 0.325*t2299 + t410 + t570) - 1.9620000000000002*(t2290 + t2291 + t2296 - 0.575*t2335*t2338 - 0.575*(-1.*t2335*t2338 + t2299*t2340) - 0.575*t2299*t2342 + t410 + t570) - 26.977500000000003*(t410 + t547 + t570 + 0.1575*t576) - 26.977500000000003*(t2530 + t2532 + 0.1575*t2535 + t588) - 6.1312500000000005*(t2306 + t2307 + t2312 + 0.325*t2315 + t586 + t614) - 1.9620000000000002*(t2306 + t2307 + t2312 + 0.075*t2427*t2445 + 0.075*(-1.*t2427*t2445 + t2315*t2456) + 0.075*t2315*t2467 + t586 + t614) - 26.977500000000003*(t586 + t588 + t614 - 0.1575*t619);
  p_output1[4]=-26.977500000000003*(t2660 + t2665 + t2676 + 0.1575*t2693) - 26.977500000000003*(t2773 + t2774 + t2775 - 0.1575*t2840) - 26.977500000000003*(t2660 + t2844 + t2845 - 0.1575*t2848) - 6.1312500000000005*(t2665 + t2676 + t2852 + t2853 + t2857 - 0.325*t2860) - 6.1312500000000005*(t2774 + t2775 + t2864 + t2865 + t2869 + 0.325*t2872) - 6.1312500000000005*(t2844 + t2845 + t2876 + t2877 + t2881 - 0.325*t2884) - 1.9620000000000002*(t2665 + t2676 + t2852 + t2853 + t2857 - 0.575*t2342*t2860 - 0.575*t2335*t2890 - 0.575*(t2340*t2860 - 1.*t2335*t2890)) - 1.9620000000000002*(t2774 + t2775 + t2864 + t2865 + t2869 + 0.075*t2467*t2872 + 0.075*t2427*t2901 + 0.075*(t2456*t2872 - 1.*t2427*t2901)) - 1.9620000000000002*(t2844 + t2845 + t2876 + t2877 + t2881 - 0.575*t2519*t2884 - 0.575*t2512*t2912 - 0.575*(t2517*t2884 - 1.*t2512*t2912)) - 26.977500000000003*(t2773 + t2921 + t2922 + 0.1575*t2925) - 6.1312500000000005*(t2921 + t2922 + t2929 + t2930 + t2934 + 0.325*t2937) - 1.9620000000000002*(t2921 + t2922 + t2929 + t2930 + t2934 + 0.075*t2557*t2937 + 0.075*t2562*t2944 + 0.075*(t2555*t2937 - 1.*t2562*t2944));
  p_output1[5]=-26.977500000000003*(-0.1575*t1767*t3069 + t3075 + t3078) - 26.977500000000003*(0.1575*t2527*t3069 + t3084 + t3087) - 6.1312500000000005*(t3070 + t3091 + t3092 + t3093 - 0.325*t3096) - 6.1312500000000005*(t3082 + t3100 + t3101 + t3102 + 0.325*t3105) - 6.1312500000000005*(t3078 + t3109 + t3110 + t3111 - 0.325*t3114) - 1.9620000000000002*(t3070 + t3091 + t3092 + t3093 - 0.575*t2342*t3096 - 0.575*t2335*t3121 - 0.575*(t2340*t3096 - 1.*t2335*t3121)) - 1.9620000000000002*(t3082 + t3100 + t3101 + t3102 + 0.075*t2467*t3105 + 0.075*t2427*t3132 + 0.075*(t2456*t3105 - 1.*t2427*t3132)) - 1.9620000000000002*(t3078 + t3109 + t3110 + t3111 - 0.575*t2519*t3114 - 0.575*t2512*t3143 - 0.575*(t2517*t3114 - 1.*t2512*t3143)) - 6.1312500000000005*(t3087 + t3151 + t3152 + t3153 + 0.325*t3156) - 1.9620000000000002*(t3087 + t3151 + t3152 + t3153 + 0.075*t2557*t3156 + 0.075*t2562*t3163 + 0.075*(t2555*t3156 - 1.*t2562*t3163)) - 26.977500000000003*(t3070 + t3075 + 0.1575*t3069*t549) - 26.977500000000003*(t3082 + t3084 - 0.1575*t3069*t593);
  p_output1[6]=-26.977500000000003*(t3172 + t3173 + 0.1575*t3176) - 6.1312500000000005*(t3172 + t3173 + t3180) - 1.9620000000000002*(t3172 + t3173 + t3180 - 0.325*t2547*t3185 + 0.075*t2547*t2557*t3185 + 0.075*t2539*t2562*t3185 + 0.075*(t2547*t2555*t3185 - 1.*t2539*t2562*t3185));
  p_output1[7]=-6.1312500000000005*(t3226 + t3243 + 0.325*t3256) - 1.9620000000000002*(t3226 + t3243 + 0.075*t2557*t3256 + 0.075*t2562*t3266 + 0.075*(t2555*t3256 - 1.*t2562*t3266));
  p_output1[8]=-1.9620000000000002*(0.075*t2555*t3256 + 0.075*t2562*t3280 + 0.075*(-1.*t2555*t3256 - 1.*t2562*t3280));
  p_output1[9]=-26.977500000000003*(t3288 + t3289 + 0.1575*t3293) - 6.1312500000000005*(t3288 + t3289 + t3297) - 1.9620000000000002*(t3288 + t3289 + t3297 + 0.325*t2292*t3303 - 0.575*t2222*t2335*t3303 - 0.575*t2292*t2342*t3303 - 0.575*(-1.*t2222*t2335*t3303 + t2292*t2340*t3303));
  p_output1[10]=-6.1312500000000005*(t3315 + t3316 - 0.325*t3319) - 1.9620000000000002*(t3315 + t3316 - 0.575*t2342*t3319 - 0.575*t2335*t3327 - 0.575*(t2340*t3319 - 1.*t2335*t3327));
  p_output1[11]=-1.9620000000000002*(-0.575*t2340*t3319 - 0.575*t2335*t3340 - 0.575*(-1.*t2340*t3319 - 1.*t2335*t3340));
  p_output1[12]=-26.977500000000003*(t3349 + t3350 - 0.1575*t3353) - 6.1312500000000005*(t3349 + t3350 + t3354) - 1.9620000000000002*(t3349 + t3350 + t3354 - 0.325*t2308*t3365 + 0.075*t2303*t2427*t3365 + 0.075*t2308*t2467*t3365 + 0.075*(-1.*t2303*t2427*t3365 + t2308*t2456*t3365));
  p_output1[13]=-6.1312500000000005*(t3376 + t3377 + 0.325*t3380) - 1.9620000000000002*(t3376 + t3377 + 0.075*t2467*t3380 + 0.075*t2427*t3387 + 0.075*(t2456*t3380 - 1.*t2427*t3387));
  p_output1[14]=-1.9620000000000002*(0.075*t2456*t3380 + 0.075*t2427*t3399 + 0.075*(-1.*t2456*t3380 - 1.*t2427*t3399));
  p_output1[15]=-26.977500000000003*(t3410 + t3411 - 0.1575*t3414) - 6.1312500000000005*(t3410 + t3411 + t3415) - 1.9620000000000002*(t3410 + t3411 + t3415 + 0.325*t2324*t3423 - 0.575*t2319*t2512*t3423 - 0.575*t2324*t2519*t3423 - 0.575*(-1.*t2319*t2512*t3423 + t2324*t2517*t3423));
  p_output1[16]=-6.1312500000000005*(t3434 + t3435 - 0.325*t3438) - 1.9620000000000002*(t3434 + t3435 - 0.575*t2519*t3438 - 0.575*t2512*t3448 - 0.575*(t2517*t3438 - 1.*t2512*t3448));
  p_output1[17]=-1.9620000000000002*(-0.575*t2517*t3438 - 0.575*t2512*t3460 - 0.575*(-1.*t2517*t3438 - 1.*t2512*t3460));
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

#include "Ge_vec_DiagonalStance.hh"

namespace DiagonalStance
{

void Ge_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
