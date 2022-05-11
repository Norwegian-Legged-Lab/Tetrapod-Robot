/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:46:30 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t1534;
  double t1640;
  double t1596;
  double t1807;
  double t1848;
  double t1869;
  double t1889;
  double t1893;
  double t1940;
  double t1944;
  double t1974;
  double t2107;
  double t2111;
  double t2139;
  double t2147;
  double t224;
  double t2180;
  double t2185;
  double t2192;
  double t2194;
  double t2201;
  double t2206;
  double t2207;
  double t2221;
  double t2223;
  double t2227;
  double t2236;
  double t2235;
  double t2238;
  double t2239;
  double t2240;
  double t2241;
  double t299;
  double t300;
  double t2237;
  double t2243;
  double t2249;
  double t2277;
  double t2278;
  double t2279;
  double t2255;
  double t2256;
  double t2264;
  double t2268;
  double t2270;
  double t2272;
  double t2253;
  double t2273;
  double t2274;
  double t2280;
  double t2281;
  double t2282;
  double t2283;
  double t2286;
  double t2287;
  double t2288;
  double t2289;
  double t2297;
  double t2300;
  double t2314;
  double t1255;
  double t2325;
  double t2339;
  double t1379;
  double t2360;
  double t2361;
  double t2363;
  double t2388;
  double t2389;
  double t2390;
  double t2391;
  double t2392;
  double t2399;
  double t2368;
  double t2369;
  double t2370;
  double t2375;
  double t2382;
  double t2386;
  double t2424;
  double t2430;
  double t2434;
  double t2439;
  double t2443;
  double t2444;
  double t2448;
  double t2450;
  double t2455;
  double t2457;
  double t2458;
  double t2462;
  double t2463;
  double t2464;
  double t2491;
  double t2492;
  double t2493;
  double t2471;
  double t2472;
  double t2473;
  double t2474;
  double t2476;
  double t2482;
  double t2483;
  double t2494;
  double t2495;
  double t2496;
  double t2500;
  double t2504;
  double t2505;
  double t2521;
  double t2528;
  double t2540;
  double t2568;
  double t2569;
  double t2348;
  double t2351;
  double t2355;
  double t2599;
  double t2600;
  double t2602;
  double t2593;
  double t2594;
  double t2595;
  double t2609;
  double t2610;
  double t2611;
  double t2603;
  double t2606;
  double t2607;
  double t2608;
  double t2615;
  double t2616;
  double t2617;
  double t2618;
  double t2619;
  double t2620;
  double t2621;
  double t2622;
  double t2627;
  double t2633;
  double t2634;
  double t2637;
  double t2650;
  double t2654;
  double t2672;
  double t2676;
  double t2678;
  double t2684;
  double t2688;
  double t2694;
  double t2699;
  double t2704;
  double t2708;
  double t2743;
  double t2744;
  double t2745;
  double t2749;
  double t2750;
  double t2776;
  double t2777;
  double t2778;
  double t2747;
  double t2751;
  double t2757;
  double t2759;
  double t2793;
  double t2794;
  double t2800;
  double t2804;
  double t2805;
  double t2812;
  double t2813;
  double t2814;
  double t2816;
  double t2817;
  double t2818;
  double t2821;
  double t2823;
  double t2824;
  double t2922;
  double t2946;
  double t2947;
  double t2951;
  double t2952;
  double t2953;
  double t2988;
  double t2989;
  double t2992;
  double t3014;
  double t3015;
  double t3004;
  double t3005;
  double t3006;
  double t3007;
  double t3002;
  double t3012;
  double t3017;
  double t3048;
  double t3051;
  double t3053;
  double t3034;
  double t3035;
  double t3036;
  double t3039;
  double t3040;
  double t3046;
  double t3059;
  double t3060;
  double t3061;
  double t3055;
  double t3058;
  double t3063;
  double t3075;
  double t3099;
  double t3103;
  double t3121;
  double t3124;
  double t3152;
  double t3175;
  double t3192;
  double t3193;
  double t3218;
  double t3219;
  double t3221;
  double t3019;
  double t3239;
  double t3240;
  double t3241;
  double t3251;
  double t3252;
  double t3253;
  double t3279;
  double t3290;
  double t3291;
  double t3300;
  double t3307;
  double t3311;
  double t3233;
  double t3234;
  double t3231;
  double t3244;
  double t3379;
  double t3381;
  double t3386;
  double t3342;
  double t3353;
  double t3370;
  double t3397;
  double t3417;
  double t3418;
  double t3445;
  double t3446;
  double t3447;
  double t3459;
  double t3463;
  double t3464;
  double t3232;
  double t3238;
  double t3543;
  double t3545;
  double t3552;
  double t3559;
  double t3566;
  double t3568;
  double t3569;
  double t3573;
  double t3582;
  double t3583;
  double t3585;
  double t3587;
  double t3593;
  double t3594;
  double t3599;
  double t3686;
  double t3688;
  double t3691;
  double t3705;
  double t3707;
  double t3710;
  double t3654;
  double t3669;
  double t3672;
  double t3408;
  double t3740;
  double t3742;
  double t3743;
  double t3747;
  double t3750;
  double t3758;
  double t3761;
  double t3617;
  double t3623;
  double t3624;
  double t3731;
  double t3733;
  double t3734;
  double t3477;
  double t3479;
  double t3826;
  double t3852;
  double t3857;
  double t3859;
  double t3866;
  double t3867;
  double t3869;
  double t3794;
  double t3795;
  double t3796;
  double t3800;
  double t3801;
  double t3815;
  double t2831;
  double t2833;
  double t2834;
  double t3906;
  double t3910;
  double t3928;
  double t3942;
  double t4043;
  double t4055;
  double t2768;
  double t2769;
  double t2770;
  double t4080;
  double t4081;
  double t2849;
  double t2851;
  double t2854;
  double t4199;
  double t4203;
  double t4213;
  double t4224;
  double t2957;
  double t2958;
  double t2959;
  double t2965;
  double t2967;
  double t2968;
  double t4365;
  double t4368;
  double t4377;
  double t4375;
  double t4359;
  double t4371;
  double t4452;
  double t4468;
  double t4472;
  double t3199;
  double t3200;
  double t3201;
  double t4632;
  double t4634;
  double t4652;
  double t4664;
  double t4654;
  double t4660;
  double t4629;
  double t4638;
  double t4715;
  double t4721;
  double t3250;
  double t3255;
  double t3269;
  double t4737;
  double t4749;
  double t4874;
  double t4875;
  double t4876;
  double t4879;
  double t4630;
  double t4890;
  double t4896;
  double t4899;
  double t4902;
  double t4904;
  double t4905;
  double t4906;
  double t3025;
  double t4934;
  double t4935;
  double t4936;
  double t4736;
  double t4965;
  double t4966;
  double t4969;
  double t4976;
  double t4988;
  double t4992;
  double t5002;
  double t3026;
  double t3027;
  double t3028;
  double t3029;
  double t3030;
  double t3031;
  double t3032;
  double t3033;
  double t4924;
  double t4926;
  double t4927;
  double t4957;
  double t4962;
  double t4963;
  double t4797;
  double t4799;
  double t5049;
  double t5050;
  double t5053;
  double t5057;
  double t5061;
  double t5062;
  double t5065;
  double t5015;
  double t5024;
  double t5027;
  double t5036;
  double t5037;
  double t5042;
  double t5145;
  double t5155;
  double t5161;
  double t5242;
  double t5248;
  double t2796;
  double t5257;
  double t5264;
  double t5318;
  double t5326;
  double t5334;
  double t5337;
  double t2402;
  double t2461;
  double t2470;
  double t5501;
  double t5506;
  double t5525;
  double t5534;
  double t5545;
  double t5589;
  double t5631;
  double t5645;
  t1534 = Cos(var1[14]);
  t1640 = Sin(var1[14]);
  t1596 = -0.0641*t1534;
  t1807 = -0.28*t1640;
  t1848 = t1596 + t1807;
  t1869 = -1.*t1534*t1848;
  t1889 = 0.325*t1640;
  t1893 = -1.*t1534;
  t1940 = 1. + t1893;
  t1944 = 0.075*t1940;
  t1974 = 0.355*t1534;
  t2107 = -0.0641*t1640;
  t2111 = t1944 + t1974 + t2107;
  t2139 = -1.*t2111*t1640;
  t2147 = t1869 + t1889 + t2139;
  t224 = Cos(var1[13]);
  t2180 = Sin(var1[13]);
  t2185 = t1534*t2180;
  t2192 = -1.*t224*t1640;
  t2194 = t2185 + t2192;
  t2201 = 0.1575*t2194;
  t2206 = -1.*t1534*t2180;
  t2207 = t224*t1640;
  t2221 = t2206 + t2207;
  t2223 = 0.2255*t2221;
  t2227 = t2201 + t2223;
  t2236 = Sin(var1[12]);
  t2235 = Cos(var1[12]);
  t2238 = -0.325*t2180;
  t2239 = t224*t1848;
  t2240 = t2180*t2111;
  t2241 = t2238 + t2239 + t2240;
  t299 = -1.*t224;
  t300 = 1. + t299;
  t2237 = -0.068*t2236;
  t2243 = t2235*t2241;
  t2249 = t2237 + t2243;
  t2277 = t224*t1534;
  t2278 = t2180*t1640;
  t2279 = t2277 + t2278;
  t2255 = -1.*t2235;
  t2256 = 1. + t2255;
  t2264 = -0.1575*t2256;
  t2268 = -0.2255*t2235;
  t2270 = -1.*t2236*t2241;
  t2272 = t2264 + t2268 + t2270;
  t2253 = -1.*t2236*t2249;
  t2273 = -1.*t2235*t2272;
  t2274 = t2253 + t2273;
  t2280 = t2235*t2274*t2279;
  t2281 = 0.325*t300;
  t2282 = -1.*t2180*t1848;
  t2283 = t224*t2111;
  t2286 = t2281 + t2282 + t2283;
  t2287 = t2286*t2221;
  t2288 = t2235*t2249*t2279;
  t2289 = -1.*t2236*t2272*t2279;
  t2297 = t2287 + t2288 + t2289;
  t2300 = t2236*t2297;
  t2314 = t2280 + t2300;
  t1255 = Cos(var1[4]);
  t2325 = Sin(var1[4]);
  t2339 = Sin(var1[5]);
  t1379 = Cos(var1[5]);
  t2360 = t2235*t2325;
  t2361 = t1255*t2236*t2339;
  t2363 = t2360 + t2361;
  t2388 = t2235*t2194*t2325;
  t2389 = t1379*t2279;
  t2390 = t2236*t2194*t2339;
  t2391 = t2389 + t2390;
  t2392 = t1255*t2391;
  t2399 = t2388 + t2392;
  t2368 = -1.*t1255*t1379*t2180;
  t2369 = t224*t2363;
  t2370 = t2368 + t2369;
  t2375 = t224*t1255*t1379;
  t2382 = t2180*t2363;
  t2386 = t2375 + t2382;
  t2424 = Sin(var1[3]);
  t2430 = -1.*t1379*t2236*t2194;
  t2434 = t2279*t2339;
  t2439 = t2430 + t2434;
  t2443 = t2424*t2439;
  t2444 = Cos(var1[3]);
  t2448 = t2235*t1255*t2194;
  t2450 = -1.*t2325*t2391;
  t2455 = t2448 + t2450;
  t2457 = t2444*t2455;
  t2458 = t2443 + t2457;
  t2462 = t2444*t2439;
  t2463 = -1.*t2424*t2455;
  t2464 = t2462 + t2463;
  t2491 = t1379*t2272;
  t2492 = t2286*t2339;
  t2493 = t2491 + t2492;
  t2471 = -1.*t1379*t2236*t2279;
  t2472 = t2221*t2339;
  t2473 = t2471 + t2472;
  t2474 = t1379*t2286;
  t2476 = -1.*t2272*t2339;
  t2482 = t2474 + t2476;
  t2483 = t2235*t2339*t2482;
  t2494 = -1.*t2235*t1379*t2493;
  t2495 = t2253 + t2483 + t2494;
  t2496 = t2473*t2495;
  t2500 = t2493*t2473;
  t2504 = t1379*t2221;
  t2505 = t2236*t2279*t2339;
  t2521 = t2504 + t2505;
  t2528 = t2482*t2521;
  t2540 = t2288 + t2500 + t2528;
  t2568 = t2235*t1379*t2540;
  t2569 = t2496 + t2568;
  t2348 = t2236*t2325;
  t2351 = -1.*t2235*t1255*t2339;
  t2355 = t2348 + t2351;
  t2599 = t2249*t2325;
  t2600 = t1255*t2482;
  t2602 = t2599 + t2600;
  t2593 = t2235*t2279*t2325;
  t2594 = t1255*t2521;
  t2595 = t2593 + t2594;
  t2609 = t1255*t2249;
  t2610 = -1.*t2325*t2482;
  t2611 = t2609 + t2610;
  t2603 = -1.*t2355*t2602;
  t2606 = t1255*t2236;
  t2607 = t2235*t2325*t2339;
  t2608 = t2606 + t2607;
  t2615 = -1.*t2608*t2611;
  t2616 = t2494 + t2603 + t2615;
  t2617 = t2595*t2616;
  t2618 = t2602*t2595;
  t2619 = t2235*t1255*t2279;
  t2620 = -1.*t2325*t2521;
  t2621 = t2619 + t2620;
  t2622 = t2611*t2621;
  t2627 = t2500 + t2618 + t2622;
  t2633 = t2355*t2627;
  t2634 = t2617 + t2633;
  t2637 = t1379*t2236*t2194;
  t2650 = -1.*t2279*t2339;
  t2654 = t2637 + t2650;
  t2672 = -1.*t1379*t2272;
  t2676 = -1.*t2286*t2339;
  t2678 = t2672 + t2676;
  t2684 = t2235*t2339*t2493;
  t2688 = t1379*t2236*t2279;
  t2694 = -1.*t2221*t2339;
  t2699 = t2688 + t2694;
  t2704 = t2482*t2473;
  t2708 = t2493*t2521;
  t2743 = 0.068*t2236;
  t2744 = -1.*t2235*t2241;
  t2745 = t2743 + t2744;
  t2749 = -0.068*t2235;
  t2750 = t2749 + t2270;
  t2776 = -1.*t1255*t2236*t2194;
  t2777 = -1.*t2235*t2194*t2325*t2339;
  t2778 = t2776 + t2777;
  t2747 = -1.*t2235*t2249;
  t2751 = -1.*t2236*t2750;
  t2757 = -1.*t2236*t2249*t2279;
  t2759 = t2235*t2750*t2279;
  t2793 = Power(t1379,2);
  t2794 = -1.*t2235*t2793*t2745;
  t2800 = t1379*t2236*t2493;
  t2804 = -1.*t2235*t1379*t2279*t2493;
  t2805 = t1379*t2745*t2473;
  t2812 = -1.*t2236*t2279*t2325;
  t2813 = t2235*t1255*t2279*t2339;
  t2814 = t2812 + t2813;
  t2816 = t2750*t2325;
  t2817 = -1.*t1255*t2745*t2339;
  t2818 = t2816 + t2817;
  t2821 = t1255*t2750;
  t2823 = t2745*t2325*t2339;
  t2824 = t2821 + t2823;
  t2922 = -1.*t2235*t2194*t2325;
  t2946 = -1.*t1255*t2391;
  t2947 = t2922 + t2946;
  t2951 = -1.*t2249*t2325;
  t2952 = -1.*t1255*t2482;
  t2953 = t2951 + t2952;
  t2988 = -1.*t224*t1534;
  t2989 = -1.*t2180*t1640;
  t2992 = t2988 + t2989;
  t3014 = -0.325*t224;
  t3015 = t3014 + t2282 + t2283;
  t3004 = 0.325*t2180;
  t3005 = -1.*t224*t1848;
  t3006 = -1.*t2180*t2111;
  t3007 = t3004 + t3005 + t3006;
  t3002 = t2235*t2249*t2221;
  t3012 = Power(t2235,2);
  t3017 = t3012*t3015*t2279;
  t3048 = -1.*t1379*t2236*t3015;
  t3051 = t3007*t2339;
  t3053 = t3048 + t3051;
  t3034 = -1.*t1379*t2236*t2221;
  t3035 = t2992*t2339;
  t3036 = t3034 + t3035;
  t3039 = t1379*t3007;
  t3040 = t2236*t3015*t2339;
  t3046 = t3039 + t3040;
  t3059 = t1379*t2992;
  t3060 = t2236*t2221*t2339;
  t3061 = t3059 + t3060;
  t3055 = -1.*t2235*t1379*t3053;
  t3058 = t3053*t2473;
  t3063 = t2493*t3036;
  t3075 = t2235*t2221*t2325;
  t3099 = t1255*t3061;
  t3103 = t3075 + t3099;
  t3121 = t2235*t3015*t2325;
  t3124 = t1255*t3046;
  t3152 = t3121 + t3124;
  t3175 = t2235*t1255*t3015;
  t3192 = -1.*t2325*t3046;
  t3193 = t3175 + t3192;
  t3218 = -0.28*t1534;
  t3219 = 0.0641*t1640;
  t3221 = t3218 + t3219;
  t3019 = Power(t2236,2);
  t3239 = t2180*t1848;
  t3240 = t224*t3221;
  t3241 = t3239 + t3240;
  t3251 = t1379*t2194;
  t3252 = t2236*t2992*t2339;
  t3253 = t3251 + t3252;
  t3279 = -1.*t1379*t2236*t2992;
  t3290 = t2194*t2339;
  t3291 = t3279 + t3290;
  t3300 = t2235*t1255*t2992;
  t3307 = -1.*t2325*t3253;
  t3311 = t3300 + t3307;
  t3233 = -1.*t2180*t3221;
  t3234 = t2239 + t3233;
  t3231 = t2235*t2249*t2194;
  t3244 = t3012*t3241*t2279;
  t3379 = -1.*t1379*t2236*t3241;
  t3381 = t3234*t2339;
  t3386 = t3379 + t3381;
  t3342 = t1379*t3234;
  t3353 = t2236*t3241*t2339;
  t3370 = t3342 + t3353;
  t3397 = -1.*t2235*t1379*t3386;
  t3417 = t3386*t2473;
  t3418 = t2493*t2439;
  t3445 = t2235*t3241*t2325;
  t3446 = t1255*t3370;
  t3447 = t3445 + t3446;
  t3459 = t2235*t1255*t3241;
  t3463 = -1.*t2325*t3370;
  t3464 = t3459 + t3463;
  t3232 = -1.*t2236*t2272*t2194;
  t3238 = t2286*t2279;
  t3543 = -1.*t2286*t2221;
  t3545 = -1.*t2235*t2249*t2279;
  t3552 = t2236*t2272*t2279;
  t3559 = t3543 + t3545 + t3552;
  t3566 = t2235*t2194*t3559;
  t3568 = t3231 + t3232 + t3238;
  t3569 = t2235*t2279*t3568;
  t3573 = t3566 + t3569;
  t3582 = t2241*t2194;
  t3583 = t3582 + t3238;
  t3585 = t2221*t3583;
  t3587 = -1.*t2241*t2279;
  t3593 = t3543 + t3587;
  t3594 = t2279*t3593;
  t3599 = t3585 + t3594;
  t3686 = t2235*t1379*t2424;
  t3688 = t2444*t2608;
  t3691 = t3686 + t3688;
  t3705 = t2235*t2444*t1379;
  t3707 = -1.*t2424*t2608;
  t3710 = t3705 + t3707;
  t3654 = t2444*t1379;
  t3669 = -1.*t2424*t2325*t2339;
  t3672 = t3654 + t3669;
  t3408 = t2482*t2391;
  t3740 = t3231 + t3408 + t3418;
  t3742 = t2473*t3740;
  t3743 = -1.*t2493*t2473;
  t3747 = -1.*t2482*t2521;
  t3750 = t3545 + t3743 + t3747;
  t3758 = t2439*t3750;
  t3761 = t3742 + t3758;
  t3617 = t1379*t2424*t2325;
  t3623 = t2444*t2339;
  t3624 = t3617 + t3623;
  t3731 = -1.*t2235*t1255*t2424;
  t3733 = -1.*t2236*t3672;
  t3734 = t3731 + t3733;
  t3477 = t2602*t2399;
  t3479 = t2611*t2455;
  t3826 = t3418 + t3477 + t3479;
  t3852 = t2595*t3826;
  t3857 = -1.*t2602*t2595;
  t3859 = -1.*t2611*t2621;
  t3866 = t3743 + t3857 + t3859;
  t3867 = t2399*t3866;
  t3869 = t3852 + t3867;
  t3794 = -1.*t2180*t3624;
  t3795 = t224*t3734;
  t3796 = t3794 + t3795;
  t3800 = t224*t3624;
  t3801 = t2180*t3734;
  t3815 = t3800 + t3801;
  t2831 = t2235*t1255;
  t2833 = -1.*t2236*t2325*t2339;
  t2834 = t2831 + t2833;
  t3906 = -1.*t2236*t2249*t2194;
  t3910 = t2235*t2750*t2194;
  t3928 = t2236*t2249*t2279;
  t3942 = -1.*t2235*t2750*t2279;
  t4043 = -1.*t2235*t1379*t2194*t2493;
  t4055 = t1379*t2745*t2439;
  t2768 = -1.*t2236*t2194*t2325;
  t2769 = t2235*t1255*t2194*t2339;
  t2770 = t2768 + t2769;
  t4080 = t2235*t1379*t2279*t2493;
  t4081 = -1.*t1379*t2745*t2473;
  t2849 = -1.*t1255*t2236*t2279;
  t2851 = -1.*t2235*t2279*t2325*t2339;
  t2854 = t2849 + t2851;
  t4199 = t2493*t2391;
  t4203 = t2482*t2439;
  t4213 = -1.*t2482*t2473;
  t4224 = -1.*t2493*t2521;
  t2957 = -1.*t2236*t2325;
  t2958 = t2235*t1255*t2339;
  t2959 = t2957 + t2958;
  t2965 = -1.*t2235*t2279*t2325;
  t2967 = -1.*t1255*t2521;
  t2968 = t2965 + t2967;
  t4365 = -1.*t3007*t2221;
  t4368 = -1.*t2286*t2992;
  t4377 = t3007*t2279;
  t4375 = t3012*t3015*t2194;
  t4359 = -1.*t2235*t2249*t2221;
  t4371 = -1.*t3012*t3015*t2279;
  t4452 = t3053*t2439;
  t4468 = -1.*t3053*t2473;
  t4472 = -1.*t2493*t3036;
  t3199 = t2235*t1255*t2221;
  t3200 = -1.*t2325*t3061;
  t3201 = t3199 + t3200;
  t4632 = -1.*t3234*t2221;
  t4634 = -1.*t2286*t2279;
  t4652 = t2286*t2194;
  t4664 = t3234*t2279;
  t4654 = t3012*t3241*t2194;
  t4660 = t2235*t2249*t2992;
  t4629 = -1.*t2235*t2249*t2194;
  t4638 = -1.*t3012*t3241*t2279;
  t4715 = t2493*t3291;
  t4721 = t3386*t2439;
  t3250 = t2235*t2992*t2325;
  t3255 = t1255*t3253;
  t3269 = t3250 + t3255;
  t4737 = -1.*t3386*t2473;
  t4749 = -1.*t2493*t2439;
  t4874 = -0.325*t1534;
  t4875 = t1534*t2111;
  t4876 = -1.*t1848*t1640;
  t4879 = t4874 + t4875 + t4876;
  t4630 = t2236*t2272*t2194;
  t4890 = t2236*t2249;
  t4896 = t2235*t2272;
  t4899 = t4890 + t4896;
  t4902 = t2235*t4899*t2194;
  t4904 = t4629 + t4630 + t4634;
  t4905 = t2236*t4904;
  t4906 = t4902 + t4905;
  t3025 = var2[0]*t2595;
  t4934 = t1379*t2424;
  t4935 = t2444*t2325*t2339;
  t4936 = t4934 + t4935;
  t4736 = -1.*t2482*t2391;
  t4965 = -1.*t2235*t2339*t2482;
  t4966 = t2235*t1379*t2493;
  t4969 = t4890 + t4965 + t4966;
  t4976 = t2439*t4969;
  t4988 = t4629 + t4736 + t4749;
  t4992 = t2235*t1379*t4988;
  t5002 = t4976 + t4992;
  t3026 = t2424*t2473;
  t3027 = t2444*t2621;
  t3028 = t3026 + t3027;
  t3029 = var2[2]*t3028;
  t3030 = t2444*t2473;
  t3031 = -1.*t2424*t2621;
  t3032 = t3030 + t3031;
  t3033 = var2[1]*t3032;
  t4924 = -1.*t2444*t1379*t2325;
  t4926 = t2424*t2339;
  t4927 = t4924 + t4926;
  t4957 = t2235*t2444*t1255;
  t4962 = -1.*t2236*t4936;
  t4963 = t4957 + t4962;
  t4797 = -1.*t2602*t2399;
  t4799 = -1.*t2611*t2455;
  t5049 = t2355*t2602;
  t5050 = t2608*t2611;
  t5053 = t4966 + t5049 + t5050;
  t5057 = t2399*t5053;
  t5061 = t4749 + t4797 + t4799;
  t5062 = t2355*t5061;
  t5065 = t5057 + t5062;
  t5015 = -1.*t2180*t4927;
  t5024 = t224*t4963;
  t5027 = t5015 + t5024;
  t5036 = t224*t4927;
  t5037 = t2180*t4963;
  t5042 = t5036 + t5037;
  t5145 = -1.*t2235*t2339*t2493;
  t5155 = -1.*t2493*t2391;
  t5161 = -1.*t2482*t2439;
  t5242 = t2235*t2249;
  t5248 = t2236*t2750;
  t2796 = Power(t2339,2);
  t5257 = t2236*t2249*t2194;
  t5264 = -1.*t2235*t2750*t2194;
  t5318 = t2235*t2793*t2745;
  t5326 = -1.*t1379*t2236*t2493;
  t5334 = t2235*t1379*t2194*t2493;
  t5337 = -1.*t1379*t2745*t2439;
  t2402 = var2[0]*t2399;
  t2461 = var2[2]*t2458;
  t2470 = var2[1]*t2464;
  t5501 = -1.*t3012*t3241*t2194;
  t5506 = -1.*t2235*t2249*t2992;
  t5525 = t2235*t1379*t3386;
  t5534 = -1.*t2493*t3291;
  t5545 = -1.*t3386*t2439;
  t5589 = -1.*t3012*t3015*t2194;
  t5631 = t2235*t1379*t3053;
  t5645 = -1.*t3053*t2439;
  p_output1[0]=0.1575*t2236*t2325 + 0.1575*t1255*t2256*t2339 - 0.2255*t2355 - 0.325*t2180*t2363 + 0.075*t1640*t2370 + 0.075*t1940*t2386 + 0.355*(-1.*t1640*t2370 + t1534*t2386) - 0.0641*(t1534*t2370 + t1640*t2386) + t2402 + t2461 + t2470 + 0.325*t1255*t1379*t300 + var1[0] + t2634*var2[3] + ((-1.*t2424*t2439 - 1.*t2444*t2455)*var2[1] + t2464*var2[2])*var2[3] + t2569*var2[4] + (t2455*var2[0] - 1.*t2424*t2947*var2[1] + t2444*t2947*var2[2] + (t2616*t2621 + t2608*t2627 + t2595*(-1.*t2602*t2608 - 1.*t2355*t2611 - 1.*t2608*t2953 - 1.*t2611*t2959) + t2355*(t2595*t2611 + t2602*t2621 + t2621*t2953 + t2611*t2968))*var2[3])*var2[4] + t2314*var2[5] + (t1255*t2654*var2[0] + (t2391*t2444 + t2325*t2424*t2654)*var2[1] + (t2391*t2424 - 1.*t2325*t2444*t2654)*var2[2] + (-1.*t1255*t1379*t2235*t2627 + t2595*(-1.*t1379*t2235*t2482 + t1255*t1379*t2235*t2602 - 1.*t1379*t2235*t2325*t2611 - 1.*t1255*t2355*t2678 + t2325*t2608*t2678 + t2684) + t1255*t2616*t2699 + t2355*(t1255*t2595*t2678 - 1.*t2325*t2621*t2678 + t1255*t2602*t2699 - 1.*t2325*t2611*t2699 + t2704 + t2708))*var2[3] + (t2495*t2521 - 1.*t2235*t2339*t2540 + t2473*(t2235*t2339*t2678 + t2684) + t1379*t2235*(t2521*t2678 + t2482*t2699 + t2704 + t2708))*var2[4])*var2[5] + t2227*var2[12] + (t2770*var2[0] + (-1.*t1379*t2194*t2235*t2444 - 1.*t2424*t2778)*var2[1] + (-1.*t1379*t2194*t2235*t2424 + t2444*t2778)*var2[2] + (t2363*t2627 + t2616*t2814 + t2595*(-1.*t2363*t2602 + t2794 + t2800 - 1.*t2355*t2818 - 1.*t2608*t2824 - 1.*t2611*t2834) + t2355*(t2804 + t2805 + t2602*t2814 + t2595*t2818 + t2621*t2824 + t2611*t2854))*var2[3] + (-1.*t1379*t2235*t2279*t2495 - 1.*t1379*t2236*t2540 + t2473*(-1.*t2236*t2339*t2482 + t2747 + t2751 + t2794 - 1.*t2235*t2745*t2796 + t2800) + t1379*t2235*(t2235*t2279*t2339*t2482 - 1.*t2339*t2521*t2745 + t2757 + t2759 + t2804 + t2805))*var2[4] + (-1.*t2236*t2274*t2279 + t2235*t2297 + t2235*t2279*(t2236*t2272 - 1.*t2235*t2745 + t2747 + t2751) + t2236*(-1.*t2235*t2272*t2279 - 1.*t2236*t2279*t2745 + t2757 + t2759))*var2[5])*var2[12] + t2147*var2[13] + (t3025 + t3029 + t3033 + (t2616*t3103 + t2595*(t3055 - 1.*t2355*t3152 - 1.*t2608*t3193) + t2355*(t3058 + t3063 + t2602*t3103 + t2595*t3152 + t2621*t3193 + t2611*t3201))*var2[3] + (t2495*t3036 + t2473*(-1.*t2235*t2236*t3015 + t2235*t2339*t3046 + t3055) + t1379*t2235*(t3002 + t3017 + t2521*t3046 + t3058 + t2482*t3061 + t3063))*var2[4] + (t2221*t2235*t2274 + t2236*(-1.*t2221*t2236*t2272 + t2286*t2992 + t3002 + t2221*t3007 + t3017 + t2279*t3015*t3019))*var2[5] + (0.1575*t2279 + 0.2255*t2992)*var2[12])*var2[13] - 0.0641*var2[14] + (t3269*var2[0] + (t2444*t3291 - 1.*t2424*t3311)*var2[1] + (t2424*t3291 + t2444*t3311)*var2[2] + (t2399*t2616 + t2595*(t3397 - 1.*t2355*t3447 - 1.*t2608*t3464) + t2355*(t3417 + t3418 + t2595*t3447 + t2621*t3464 + t3477 + t3479))*var2[3] + (t2439*t2495 + t2473*(-1.*t2235*t2236*t3241 + t2235*t2339*t3370 + t3397) + t1379*t2235*(t3231 + t3244 + t2521*t3370 + t3408 + t3417 + t3418))*var2[4] + (t2194*t2235*t2274 + t2236*(t3231 + t3232 + t2221*t3234 + t3238 + t2279*t3019*t3241 + t3244))*var2[5] + (0.2255*t2279 + 0.1575*t2992)*var2[12] + (0.325*t1534 - 1.*t1534*t2111 - 1.*t1534*t3221)*var2[13])*var2[14] + t2399*var3[0] + t2464*var3[1] + t2458*var3[2] + t2634*var3[3] + t2569*var3[4] + t2314*var3[5] + t2227*var3[12] + t2147*var3[13] - 0.0641*var3[14] - 1.*var4[0];
  p_output1[1]=-0.1575*t1255*t2236*t2424 + 0.325*t300*t3624 - 0.1575*t2256*t3672 - 0.2255*(-1.*t1255*t2236*t2424 + t2235*t3672) - 0.325*t2180*t3734 + 0.075*t1640*t3796 + 0.075*t1940*t3815 + 0.355*(-1.*t1640*t3796 + t1534*t3815) - 0.0641*(t1534*t3796 + t1640*t3815) + var1[1] + t2355*var2[0] + t3710*var2[1] + t3691*var2[2] + t3869*var2[3] + ((-1.*t1379*t2235*t2424 - 1.*t2444*t2608)*var2[1] + t3710*var2[2])*var2[3] + t3761*var2[4] + (t2608*var2[0] - 1.*t2424*t2959*var2[1] + t2444*t2959*var2[2] + (t2595*(t2455*t2602 + t2399*t2611 + t2611*t2947 + t2455*t2953) + t2399*(-1.*t2595*t2611 - 1.*t2602*t2621 - 1.*t2621*t2953 - 1.*t2611*t2968) + t2621*t3826 + t2455*t3866)*var2[3])*var2[4] + t3573*var2[5] + (-1.*t1255*t1379*t2235*var2[0] + (-1.*t1379*t2235*t2325*t2424 - 1.*t2235*t2339*t2444)*var2[1] + (-1.*t2235*t2339*t2424 + t1379*t2235*t2325*t2444)*var2[2] + (t1255*t2699*t3826 + t1255*t2654*t3866 + t2595*(t1255*t2602*t2654 - 1.*t2325*t2611*t2654 + t1255*t2399*t2678 - 1.*t2325*t2455*t2678 + t4199 + t4203) + t2399*(-1.*t1255*t2595*t2678 + t2325*t2621*t2678 - 1.*t1255*t2602*t2699 + t2325*t2611*t2699 + t4213 + t4224))*var2[3] + (t2521*t3740 + t2391*t3750 + t2473*(t2482*t2654 + t2391*t2678 + t4199 + t4203) + t2439*(-1.*t2521*t2678 - 1.*t2482*t2699 + t4213 + t4224))*var2[4])*var2[5] + t3599*var2[12] + (t2363*var2[0] + (-1.*t1379*t2236*t2444 - 1.*t2424*t2834)*var2[1] + (-1.*t1379*t2236*t2424 + t2444*t2834)*var2[2] + (t2814*t3826 + t2770*t3866 + t2595*(t2602*t2770 + t2611*t2778 + t2399*t2818 + t2455*t2824 + t4043 + t4055) + t2399*(-1.*t2602*t2814 - 1.*t2595*t2818 - 1.*t2621*t2824 - 1.*t2611*t2854 + t4080 + t4081))*var2[3] + (-1.*t1379*t2235*t2279*t3740 - 1.*t1379*t2194*t2235*t3750 + t2473*(t2194*t2235*t2339*t2482 - 1.*t2339*t2391*t2745 + t3906 + t3910 + t4043 + t4055) + t2439*(-1.*t2235*t2279*t2339*t2482 + t2339*t2521*t2745 + t3928 + t3942 + t4080 + t4081))*var2[4] + (-1.*t2194*t2236*t3559 - 1.*t2236*t2279*t3568 + t2235*t2279*(-1.*t2194*t2235*t2272 - 1.*t2194*t2236*t2745 + t3906 + t3910) + t2194*t2235*(t2235*t2272*t2279 + t2236*t2279*t2745 + t3928 + t3942))*var2[5])*var2[12] + ((t3103*t3826 + t2595*t3866 + t2595*(t2500 + t2618 + t2622 + t2399*t3152 + t2455*t3193 + t4452) + t2399*(-1.*t2602*t3103 - 1.*t2595*t3152 - 1.*t2621*t3193 - 1.*t2611*t3201 + t4468 + t4472))*var2[3] + (t3036*t3740 + t2473*t3750 + t2473*(t2288 + t2500 + t2528 + t2391*t3046 + t4375 + t4452) + t2439*(-1.*t2521*t3046 - 1.*t2482*t3061 + t4359 + t4371 + t4468 + t4472))*var2[4] + (t2235*t2279*t3559 + t2221*t2235*t3568 + t2194*t2235*(t2221*t2236*t2272 - 1.*t2279*t3015*t3019 + t4359 + t4365 + t4368 + t4371) + t2235*t2279*(t2287 + t2288 + t2289 + t2194*t3015*t3019 + t4375 + t4377))*var2[5] + (t2992*t3583 + t2221*t3593 + t2279*(-1.*t2221*t2241 - 1.*t2279*t3015 + t4365 + t4368) + t2221*(t2241*t2279 + t2287 + t2194*t3015 + t4377))*var2[12])*var2[13] + ((t2399*t3826 + t3269*t3866 + t2595*(t2602*t3269 + t2611*t3311 + t2399*t3447 + t2455*t3464 + t4715 + t4721) + t2399*(-1.*t2595*t3447 - 1.*t2621*t3464 + t4737 + t4749 + t4797 + t4799))*var2[3] + (t2439*t3740 + t3291*t3750 + t2473*(t2482*t3253 + t2391*t3370 + t4654 + t4660 + t4715 + t4721) + t2439*(-1.*t2521*t3370 + t4629 + t4638 + t4736 + t4737 + t4749))*var2[4] + (t2235*t2992*t3559 + t2194*t2235*t3568 + t2194*t2235*(-1.*t2279*t3019*t3241 + t4629 + t4630 + t4632 + t4634 + t4638) + t2235*t2279*(-1.*t2236*t2272*t2992 + t2194*t3019*t3241 + t4652 + t4654 + t4660 + t4664))*var2[5] + (t2279*t3583 + t2194*t3593 + t2279*(-1.*t2194*t2241 - 1.*t2279*t3241 + t4632 + t4634) + t2221*(t2241*t2992 + t2194*t3241 + t4652 + t4664))*var2[12])*var2[14] + t2355*var3[0] + t3710*var3[1] + t3691*var3[2] + t3869*var3[3] + t3761*var3[4] + t3573*var3[5] + t3599*var3[12] - 1.*var4[1];
  p_output1[2]=0.1575*t1255*t2236*t2444 + t3025 + t3029 + t3033 + 0.325*t300*t4927 - 0.1575*t2256*t4936 - 0.2255*(t1255*t2236*t2444 + t2235*t4936) - 0.325*t2180*t4963 + 0.075*t1640*t5027 + 0.075*t1940*t5042 + 0.355*(-1.*t1640*t5027 + t1534*t5042) - 0.0641*(t1534*t5027 + t1640*t5042) + var1[2] + t5065*var2[3] + ((-1.*t2424*t2473 - 1.*t2444*t2621)*var2[1] + t3032*var2[2])*var2[3] + t5002*var2[4] + (t2621*var2[0] - 1.*t2424*t2968*var2[1] + t2444*t2968*var2[2] + (t2355*(-1.*t2455*t2602 - 1.*t2399*t2611 - 1.*t2611*t2947 - 1.*t2455*t2953) + t2399*(t2602*t2608 + t2355*t2611 + t2608*t2953 + t2611*t2959) + t2455*t5053 + t2608*t5061)*var2[3])*var2[4] + t4906*var2[5] + (t1255*t2699*var2[0] + (t2444*t2521 + t2325*t2424*t2699)*var2[1] + (t2424*t2521 - 1.*t2325*t2444*t2699)*var2[2] + (t1255*t2654*t5053 - 1.*t1255*t1379*t2235*t5061 + t2399*(t1379*t2235*t2482 - 1.*t1255*t1379*t2235*t2602 + t1379*t2235*t2325*t2611 + t1255*t2355*t2678 - 1.*t2325*t2608*t2678 + t5145) + t2355*(-1.*t1255*t2602*t2654 + t2325*t2611*t2654 - 1.*t1255*t2399*t2678 + t2325*t2455*t2678 + t5155 + t5161))*var2[3] + (t2391*t4969 - 1.*t2235*t2339*t4988 + t2439*(-1.*t2235*t2339*t2678 + t5145) + t1379*t2235*(-1.*t2482*t2654 - 1.*t2391*t2678 + t5155 + t5161))*var2[4])*var2[5] - 0.068*t2279*var2[12] + (t2814*var2[0] + (-1.*t1379*t2235*t2279*t2444 - 1.*t2424*t2854)*var2[1] + (-1.*t1379*t2235*t2279*t2424 + t2444*t2854)*var2[2] + (t2770*t5053 + t2363*t5061 + t2399*(t2363*t2602 + t2355*t2818 + t2608*t2824 + t2611*t2834 + t5318 + t5326) + t2355*(-1.*t2602*t2770 - 1.*t2611*t2778 - 1.*t2399*t2818 - 1.*t2455*t2824 + t5334 + t5337))*var2[3] + (-1.*t1379*t2194*t2235*t4969 - 1.*t1379*t2236*t4988 + t2439*(t2236*t2339*t2482 + t2235*t2745*t2796 + t5242 + t5248 + t5318 + t5326) + t1379*t2235*(-1.*t2194*t2235*t2339*t2482 + t2339*t2391*t2745 + t5257 + t5264 + t5334 + t5337))*var2[4] + (-1.*t2194*t2236*t4899 + t2235*t4904 + t2194*t2235*(-1.*t2236*t2272 + t2235*t2745 + t5242 + t5248) + t2236*(t2194*t2235*t2272 + t2194*t2236*t2745 + t5257 + t5264))*var2[5])*var2[12] + t4879*var2[13] + (t3103*var2[0] + (t2444*t3036 - 1.*t2424*t3201)*var2[1] + (t2424*t3036 + t2444*t3201)*var2[2] + (t2595*t5053 + t2399*(t2355*t3152 + t2608*t3193 + t5631) + t2355*(-1.*t2399*t3152 - 1.*t2455*t3193 + t3743 + t3857 + t3859 + t5645))*var2[3] + (t2473*t4969 + t2439*(t2235*t2236*t3015 - 1.*t2235*t2339*t3046 + t5631) + t1379*t2235*(-1.*t2391*t3046 + t3545 + t3743 + t3747 + t5589 + t5645))*var2[4] + (t2235*t2279*t4899 + t2236*(-1.*t2279*t3007 - 1.*t2194*t3015*t3019 + t3543 + t3545 + t3552 + t5589))*var2[5] - 0.068*t2221*var2[12])*var2[13] - 0.28*var2[14] + (t2402 + t2461 + t2470 + (t3269*t5053 + t2399*(t2355*t3447 + t2608*t3464 + t5525) + t2355*(-1.*t2602*t3269 - 1.*t2611*t3311 - 1.*t2399*t3447 - 1.*t2455*t3464 + t5534 + t5545))*var2[3] + (t3291*t4969 + t2439*(t2235*t2236*t3241 - 1.*t2235*t2339*t3370 + t5525) + t1379*t2235*(-1.*t2482*t3253 - 1.*t2391*t3370 + t5501 + t5506 + t5534 + t5545))*var2[4] + (t2235*t2992*t4899 + t2236*(-1.*t2194*t2286 + t2236*t2272*t2992 - 1.*t2279*t3234 - 1.*t2194*t3019*t3241 + t5501 + t5506))*var2[5] - 0.068*t2194*var2[12] + (t1889 + t2139 - 1.*t1640*t3221)*var2[13])*var2[14] + t2595*var3[0] + t3032*var3[1] + t3028*var3[2] + t5065*var3[3] + t5002*var3[4] + t4906*var3[5] - 0.068*t2279*var3[12] + t4879*var3[13] - 0.28*var3[14] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void ddh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
