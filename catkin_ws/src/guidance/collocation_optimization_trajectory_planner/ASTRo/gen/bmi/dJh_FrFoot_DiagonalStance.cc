/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 17:40:53 GMT+02:00
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
  double t2367;
  double t2370;
  double t2376;
  double t2378;
  double t2383;
  double t2391;
  double t2392;
  double t2397;
  double t2190;
  double t2365;
  double t2398;
  double t2402;
  double t2393;
  double t2399;
  double t2400;
  double t2147;
  double t2403;
  double t2404;
  double t2456;
  double t2461;
  double t2552;
  double t2553;
  double t2558;
  double t2560;
  double t2561;
  double t2569;
  double t2570;
  double t2593;
  double t2596;
  double t2597;
  double t2602;
  double t2610;
  double t2613;
  double t2624;
  double t2627;
  double t2628;
  double t2632;
  double t2633;
  double t2634;
  double t2673;
  double t2674;
  double t2675;
  double t2676;
  double t2677;
  double t2678;
  double t2691;
  double t2692;
  double t2697;
  double t2706;
  double t2707;
  double t2708;
  double t2709;
  double t2710;
  double t2721;
  double t2725;
  double t2731;
  double t2733;
  double t2734;
  double t2735;
  double t2736;
  double t2737;
  double t2705;
  double t2712;
  double t2713;
  double t2715;
  double t2730;
  double t2738;
  double t2739;
  double t2740;
  double t2741;
  double t2742;
  double t2743;
  double t2744;
  double t2745;
  double t2747;
  double t2748;
  double t2757;
  double t2758;
  double t2761;
  double t2718;
  double t2754;
  double t2755;
  double t2770;
  double t2772;
  double t2773;
  double t2702;
  double t2703;
  double t2704;
  double t2765;
  double t2766;
  double t2767;
  double t2779;
  double t2782;
  double t2784;
  double t2807;
  double t2809;
  double t2810;
  double t2888;
  double t2889;
  double t2890;
  double t2768;
  double t2905;
  double t2908;
  double t2913;
  double t2796;
  double t2928;
  double t2929;
  double t2930;
  double t2769;
  double t2774;
  double t2775;
  double t2917;
  double t2918;
  double t2919;
  double t2921;
  double t2922;
  double t2927;
  double t2933;
  double t2797;
  double t2798;
  double t2799;
  double t2824;
  double t2836;
  double t2979;
  double t2981;
  double t2989;
  double t2991;
  double t2825;
  double t2826;
  double t2827;
  double t2837;
  double t2838;
  double t2839;
  double t2861;
  double t2878;
  double t2862;
  double t2863;
  double t2864;
  double t2950;
  double t2952;
  double t3030;
  double t3031;
  double t3036;
  double t3038;
  double t2879;
  double t2880;
  double t2882;
  double t2891;
  double t2892;
  double t2893;
  double t2894;
  double t2895;
  double t2897;
  double t2898;
  double t2899;
  double t2900;
  double t2901;
  double t2902;
  double t2903;
  double t3067;
  double t3068;
  double t3069;
  double t3065;
  double t2923;
  double t3074;
  double t3075;
  double t3076;
  double t3078;
  double t3079;
  double t3080;
  double t2931;
  double t2940;
  double t2941;
  double t2942;
  double t2946;
  double t2949;
  double t3081;
  double t2954;
  double t2955;
  double t3085;
  double t2961;
  double t2962;
  double t2965;
  double t2969;
  double t2970;
  double t2971;
  double t2972;
  double t2973;
  double t2974;
  double t2975;
  double t2976;
  double t2977;
  double t2980;
  double t2984;
  double t2985;
  double t2986;
  double t2987;
  double t2990;
  double t2994;
  double t2995;
  double t2996;
  double t2997;
  double t3116;
  double t3002;
  double t3003;
  double t3120;
  double t3008;
  double t3009;
  double t3012;
  double t3013;
  double t3017;
  double t3018;
  double t3019;
  double t3020;
  double t3021;
  double t3022;
  double t3023;
  double t3024;
  double t3025;
  double t3026;
  double t3027;
  double t3028;
  double t3032;
  double t3037;
  double t3041;
  double t3042;
  double t3043;
  double t3044;
  double t3047;
  double t3143;
  double t3050;
  double t3051;
  double t3147;
  double t3056;
  double t3057;
  double t3060;
  double t3167;
  double t3168;
  double t3169;
  double t3171;
  double t3172;
  double t3173;
  double t3177;
  double t3178;
  double t3179;
  double t3181;
  double t3182;
  double t3183;
  double t3191;
  double t3192;
  double t3193;
  double t3195;
  double t3196;
  double t3197;
  double t3194;
  double t3202;
  double t3203;
  double t3204;
  double t3205;
  double t3207;
  double t3213;
  double t3214;
  double t3215;
  double t3217;
  double t3218;
  double t3219;
  double t3234;
  double t3236;
  double t3253;
  double t3255;
  double t3244;
  double t3170;
  double t3174;
  double t3175;
  double t3274;
  double t3276;
  double t3280;
  double t2579;
  double t2585;
  double t2586;
  double t3316;
  double t3323;
  double t3325;
  double t3163;
  double t3164;
  double t3165;
  double t2683;
  double t2684;
  double t2685;
  double t3358;
  double t3359;
  double t3360;
  double t3361;
  double t3362;
  double t3363;
  double t3365;
  double t3366;
  double t3367;
  double t3371;
  double t3372;
  double t3373;
  double t3364;
  double t3376;
  double t3377;
  double t3382;
  double t3383;
  double t3384;
  double t3379;
  double t3381;
  double t3390;
  double t3391;
  double t3392;
  double t3394;
  double t3395;
  double t3396;
  double t3400;
  double t3401;
  double t3402;
  double t3231;
  double t3232;
  double t3239;
  double t3240;
  double t3242;
  double t3249;
  double t3250;
  double t3251;
  double t3418;
  double t3425;
  double t3267;
  double t3268;
  double t3269;
  double t3447;
  double t3451;
  double t3453;
  double t3407;
  double t3408;
  double t3409;
  double t3302;
  double t3303;
  double t3304;
  double t3305;
  double t3306;
  double t3307;
  double t3308;
  double t3490;
  double t3496;
  t2367 = Cos(var1[13]);
  t2370 = Cos(var1[14]);
  t2376 = t2367*t2370;
  t2378 = Sin(var1[13]);
  t2383 = Sin(var1[14]);
  t2391 = t2378*t2383;
  t2392 = t2376 + t2391;
  t2397 = Cos(var1[12]);
  t2190 = Cos(var1[5]);
  t2365 = Sin(var1[12]);
  t2398 = Sin(var1[5]);
  t2402 = Cos(var1[3]);
  t2393 = t2190*t2365*t2392;
  t2399 = t2397*t2392*t2398;
  t2400 = t2393 + t2399;
  t2147 = Sin(var1[3]);
  t2403 = Cos(var1[4]);
  t2404 = -1.*t2370*t2378;
  t2456 = t2367*t2383;
  t2461 = t2404 + t2456;
  t2552 = t2403*t2461;
  t2553 = Sin(var1[4]);
  t2558 = t2397*t2190*t2392;
  t2560 = -1.*t2365*t2392*t2398;
  t2561 = t2558 + t2560;
  t2569 = -1.*t2553*t2561;
  t2570 = t2552 + t2569;
  t2593 = -1.*t2190*t2365;
  t2596 = -1.*t2397*t2398;
  t2597 = t2593 + t2596;
  t2602 = t2397*t2190;
  t2610 = -1.*t2365*t2398;
  t2613 = t2602 + t2610;
  t2624 = t2370*t2378;
  t2627 = -1.*t2367*t2383;
  t2628 = t2624 + t2627;
  t2632 = t2190*t2365*t2628;
  t2633 = t2397*t2628*t2398;
  t2634 = t2632 + t2633;
  t2673 = t2403*t2392;
  t2674 = t2397*t2190*t2628;
  t2675 = -1.*t2365*t2628*t2398;
  t2676 = t2674 + t2675;
  t2677 = -1.*t2553*t2676;
  t2678 = t2673 + t2677;
  t2691 = -1.*t2461*t2553;
  t2692 = -1.*t2403*t2561;
  t2697 = t2691 + t2692;
  t2706 = -1.*t2370;
  t2707 = 1. + t2706;
  t2708 = 0.50321*t2707;
  t2709 = 0.19821*t2370;
  t2710 = t2708 + t2709;
  t2721 = -1.*t2397;
  t2725 = 1. + t2721;
  t2731 = -1.*t2367;
  t2733 = 1. + t2731;
  t2734 = 0.28121*t2733;
  t2735 = t2367*t2710;
  t2736 = -0.305*t2378*t2383;
  t2737 = t2734 + t2735 + t2736;
  t2705 = 0.28121*t2378;
  t2712 = -1.*t2710*t2378;
  t2713 = -0.305*t2367*t2383;
  t2715 = t2705 + t2712 + t2713;
  t2730 = 0.15121*t2725;
  t2738 = t2397*t2737;
  t2739 = t2730 + t2738;
  t2740 = t2190*t2739;
  t2741 = -0.15121*t2725;
  t2742 = -0.15121*t2397;
  t2743 = -0.15121*t2365;
  t2744 = t2365*t2737;
  t2745 = t2741 + t2742 + t2743 + t2744;
  t2747 = -1.*t2745*t2398;
  t2748 = t2740 + t2747;
  t2757 = t2715*t2553;
  t2758 = t2403*t2748;
  t2761 = t2757 + t2758;
  t2718 = -1.*t2715*t2553;
  t2754 = -1.*t2403*t2748;
  t2755 = t2718 + t2754;
  t2770 = t2403*t2715;
  t2772 = -1.*t2553*t2748;
  t2773 = t2770 + t2772;
  t2702 = t2392*t2553;
  t2703 = t2403*t2676;
  t2704 = t2702 + t2703;
  t2765 = t2190*t2745;
  t2766 = t2739*t2398;
  t2767 = t2765 + t2766;
  t2779 = -1.*t2392*t2553;
  t2782 = -1.*t2403*t2676;
  t2784 = t2779 + t2782;
  t2807 = t2461*t2553;
  t2809 = t2403*t2561;
  t2810 = t2807 + t2809;
  t2888 = -1.*t2190*t2365*t2392;
  t2889 = -1.*t2397*t2392*t2398;
  t2890 = t2888 + t2889;
  t2768 = -1.*t2613*t2767;
  t2905 = -1.*t2190*t2745;
  t2908 = -1.*t2739*t2398;
  t2913 = t2905 + t2908;
  t2796 = t2634*t2767;
  t2928 = -1.*t2190*t2365*t2628;
  t2929 = -1.*t2397*t2628*t2398;
  t2930 = t2928 + t2929;
  t2769 = -1.*t2403*t2597*t2761;
  t2774 = t2553*t2597*t2773;
  t2775 = t2768 + t2769 + t2774;
  t2917 = -1.*t2597*t2767;
  t2918 = -1.*t2613*t2748;
  t2919 = -1.*t2397*t2190;
  t2921 = t2365*t2398;
  t2922 = t2919 + t2921;
  t2927 = t2676*t2767;
  t2933 = t2634*t2748;
  t2797 = t2704*t2761;
  t2798 = t2678*t2773;
  t2799 = t2796 + t2797 + t2798;
  t2824 = -1.*t2634*t2767;
  t2836 = t2400*t2767;
  t2979 = -1.*t2676*t2767;
  t2981 = -1.*t2634*t2748;
  t2989 = t2561*t2767;
  t2991 = t2400*t2748;
  t2825 = -1.*t2704*t2761;
  t2826 = -1.*t2678*t2773;
  t2827 = t2824 + t2825 + t2826;
  t2837 = t2810*t2761;
  t2838 = t2570*t2773;
  t2839 = t2836 + t2837 + t2838;
  t2861 = t2613*t2767;
  t2878 = -1.*t2400*t2767;
  t2862 = t2403*t2597*t2761;
  t2863 = -1.*t2553*t2597*t2773;
  t2864 = t2861 + t2862 + t2863;
  t2950 = Power(t2403,2);
  t2952 = Power(t2553,2);
  t3030 = t2597*t2767;
  t3031 = t2613*t2748;
  t3036 = -1.*t2561*t2767;
  t3038 = -1.*t2400*t2748;
  t2879 = -1.*t2810*t2761;
  t2880 = -1.*t2570*t2773;
  t2882 = t2878 + t2879 + t2880;
  t2891 = var2[0]*t2403*t2890;
  t2892 = t2147*t2553*t2890;
  t2893 = t2402*t2561;
  t2894 = t2892 + t2893;
  t2895 = var2[1]*t2894;
  t2897 = -1.*t2402*t2553*t2890;
  t2898 = t2147*t2561;
  t2899 = t2897 + t2898;
  t2900 = var2[2]*t2899;
  t2901 = -1.*t2597*t2748;
  t2902 = t2768 + t2901;
  t2903 = t2676*t2902;
  t3067 = 0.15121*t2365;
  t3068 = -1.*t2365*t2737;
  t3069 = t3067 + t3068;
  t3065 = t2742 + t2738;
  t2923 = -1.*t2922*t2748;
  t3074 = t2190*t3069;
  t3075 = -1.*t3065*t2398;
  t3076 = t3074 + t3075;
  t3078 = t2190*t3065;
  t3079 = t3069*t2398;
  t3080 = t3078 + t3079;
  t2931 = t2930*t2748;
  t2940 = t2715*t2392;
  t2941 = t2676*t2748;
  t2942 = t2940 + t2796 + t2941;
  t2946 = t2597*t2942;
  t2949 = t2403*t2930*t2775;
  t3081 = -1.*t2613*t3080;
  t2954 = -1.*t2403*t2922*t2761;
  t2955 = t2553*t2922*t2773;
  t3085 = t2634*t3080;
  t2961 = t2403*t2930*t2761;
  t2962 = -1.*t2553*t2930*t2773;
  t2965 = t2403*t2922*t2799;
  t2969 = var2[0]*t2403*t2922;
  t2970 = t2147*t2597;
  t2971 = -1.*t2402*t2553*t2922;
  t2972 = t2970 + t2971;
  t2973 = var2[2]*t2972;
  t2974 = t2402*t2597;
  t2975 = t2147*t2553*t2922;
  t2976 = t2974 + t2975;
  t2977 = var2[1]*t2976;
  t2980 = -1.*t2930*t2748;
  t2984 = -1.*t2715*t2392;
  t2985 = -1.*t2676*t2748;
  t2986 = t2984 + t2824 + t2985;
  t2987 = t2561*t2986;
  t2990 = t2890*t2748;
  t2994 = t2715*t2461;
  t2995 = t2561*t2748;
  t2996 = t2994 + t2836 + t2995;
  t2997 = t2676*t2996;
  t3116 = -1.*t2634*t3080;
  t3002 = -1.*t2403*t2930*t2761;
  t3003 = t2553*t2930*t2773;
  t3120 = t2400*t3080;
  t3008 = t2403*t2890*t2761;
  t3009 = -1.*t2553*t2890*t2773;
  t3012 = t2403*t2890*t2827;
  t3013 = t2403*t2930*t2839;
  t3017 = var2[0]*t2403*t2930;
  t3018 = t2147*t2553*t2930;
  t3019 = t2402*t2676;
  t3020 = t3018 + t3019;
  t3021 = var2[1]*t3020;
  t3022 = -1.*t2402*t2553*t2930;
  t3023 = t2147*t2676;
  t3024 = t3022 + t3023;
  t3025 = var2[2]*t3024;
  t3026 = t2597*t2748;
  t3027 = t2861 + t3026;
  t3028 = t2561*t3027;
  t3032 = t2922*t2748;
  t3037 = -1.*t2890*t2748;
  t3041 = -1.*t2715*t2461;
  t3042 = -1.*t2561*t2748;
  t3043 = t3041 + t2878 + t3042;
  t3044 = t2597*t3043;
  t3047 = t2403*t2890*t2864;
  t3143 = t2613*t3080;
  t3050 = t2403*t2922*t2761;
  t3051 = -1.*t2553*t2922*t2773;
  t3147 = -1.*t2400*t3080;
  t3056 = -1.*t2403*t2890*t2761;
  t3057 = t2553*t2890*t2773;
  t3060 = t2403*t2922*t2882;
  t3167 = -1.*t2367*t2370;
  t3168 = -1.*t2378*t2383;
  t3169 = t3167 + t3168;
  t3171 = t2397*t2190*t2461;
  t3172 = -1.*t2365*t2461*t2398;
  t3173 = t3171 + t3172;
  t3177 = t2190*t2365*t2461;
  t3178 = t2397*t2461*t2398;
  t3179 = t3177 + t3178;
  t3181 = t2403*t3169;
  t3182 = -1.*t2553*t3173;
  t3183 = t3181 + t3182;
  t3191 = t2190*t2365*t2715;
  t3192 = t2397*t2715*t2398;
  t3193 = t3191 + t3192;
  t3195 = t2397*t2190*t2715;
  t3196 = -1.*t2365*t2715*t2398;
  t3197 = t3195 + t3196;
  t3194 = -1.*t2613*t3193;
  t3202 = 0.28121*t2367;
  t3203 = -1.*t2367*t2710;
  t3204 = 0.305*t2378*t2383;
  t3205 = t3202 + t3203 + t3204;
  t3207 = t2634*t3193;
  t3213 = t3205*t2553;
  t3214 = t2403*t3197;
  t3215 = t3213 + t3214;
  t3217 = t2403*t3205;
  t3218 = -1.*t2553*t3197;
  t3219 = t3217 + t3218;
  t3234 = t2715*t3169;
  t3236 = t2461*t3205;
  t3253 = Power(t2397,2);
  t3255 = Power(t2365,2);
  t3244 = -1.*t3205*t2392;
  t3170 = t3169*t2553;
  t3174 = t2403*t3173;
  t3175 = t3170 + t3174;
  t3274 = t3193*t2400;
  t3276 = t3179*t2767;
  t3280 = -1.*t2634*t3193;
  t2579 = t2402*t2400;
  t2585 = -1.*t2147*t2570;
  t2586 = t2579 + t2585;
  t3316 = t2613*t3193;
  t3323 = -1.*t3193*t2400;
  t3325 = -1.*t3179*t2767;
  t3163 = t2365*t2739;
  t3164 = -1.*t2397*t2745;
  t3165 = t3163 + t3164;
  t2683 = t2402*t2634;
  t2684 = -1.*t2147*t2678;
  t2685 = t2683 + t2684;
  t3358 = -0.305*t2370*t2378;
  t3359 = 0.305*t2367*t2383;
  t3360 = t3358 + t3359;
  t3361 = t2190*t2365*t3360;
  t3362 = t2397*t3360*t2398;
  t3363 = t3361 + t3362;
  t3365 = t2397*t2190*t3360;
  t3366 = -1.*t2365*t3360*t2398;
  t3367 = t3365 + t3366;
  t3371 = t2190*t2365*t3169;
  t3372 = t2397*t3169*t2398;
  t3373 = t3371 + t3372;
  t3364 = -1.*t2613*t3363;
  t3376 = -0.305*t2367*t2370;
  t3377 = t3376 + t2736;
  t3382 = t2397*t2190*t3169;
  t3383 = -1.*t2365*t3169*t2398;
  t3384 = t3382 + t3383;
  t3379 = t2634*t3363;
  t3381 = t3373*t2767;
  t3390 = t3377*t2553;
  t3391 = t2403*t3367;
  t3392 = t3390 + t3391;
  t3394 = t2403*t3377;
  t3395 = -1.*t2553*t3367;
  t3396 = t3394 + t3395;
  t3400 = t2628*t2553;
  t3401 = t2403*t3384;
  t3402 = t3400 + t3401;
  t3231 = -1.*t2628*t2737;
  t3232 = t3231 + t2984;
  t3239 = t2737*t2392;
  t3240 = t2994 + t3239;
  t3242 = -1.*t2628*t2715;
  t3249 = -1.*t2397*t2628*t2739;
  t3250 = -1.*t2365*t2628*t2745;
  t3251 = t2984 + t3249 + t3250;
  t3418 = t2461*t3377;
  t3425 = -1.*t3377*t2392;
  t3267 = t2397*t2392*t2739;
  t3268 = t2365*t2392*t2745;
  t3269 = t2994 + t3267 + t3268;
  t3447 = t3363*t2400;
  t3451 = -1.*t2634*t3363;
  t3453 = -1.*t3373*t2767;
  t3407 = t2403*t2628;
  t3408 = -1.*t2553*t3384;
  t3409 = t3407 + t3408;
  t3302 = -0.15121*t3169;
  t3303 = -0.15121*t2392;
  t3304 = t3302 + t3303;
  t3305 = var2[12]*t3304;
  t3306 = -1.*t2365*t2739;
  t3307 = t2397*t2745;
  t3308 = t3306 + t3307;
  t3490 = t2613*t3363;
  t3496 = -1.*t3363*t2400;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t2147*t2400 - 1.*t2402*t2570)*var2[1] + t2586*var2[2];
  p_output1[10]=(t2402*t2553*t2597 - 1.*t2147*t2613)*var2[1] + (t2147*t2553*t2597 + t2402*t2613)*var2[2];
  p_output1[11]=(-1.*t2147*t2634 - 1.*t2402*t2678)*var2[1] + t2685*var2[2];
  p_output1[12]=t2570*var2[0] - 1.*t2147*t2697*var2[1] + t2402*t2697*var2[2] + (t2704*(t2553*t2597*t2755 + t2553*t2597*t2761) + t2678*t2775 + t2403*t2597*(t2678*t2755 + t2678*t2761 + t2704*t2773 + t2773*t2784) - 1.*t2553*t2597*t2799)*var2[3];
  p_output1[13]=-1.*t2553*t2597*var2[0] + t2147*t2403*t2597*var2[1] - 1.*t2402*t2403*t2597*var2[2] + ((-1.*t2678*t2755 - 1.*t2678*t2761 - 1.*t2704*t2773 - 1.*t2773*t2784)*t2810 + t2704*(t2570*t2755 + t2570*t2761 + t2697*t2773 + t2773*t2810) + t2570*t2827 + t2678*t2839)*var2[3];
  p_output1[14]=t2678*var2[0] - 1.*t2147*t2784*var2[1] + t2402*t2784*var2[2] + ((-1.*t2553*t2597*t2755 - 1.*t2553*t2597*t2761)*t2810 + t2403*t2597*(-1.*t2570*t2755 - 1.*t2570*t2761 - 1.*t2697*t2773 - 1.*t2773*t2810) + t2570*t2864 - 1.*t2553*t2597*t2882)*var2[3];
  p_output1[15]=t2891 + t2895 + t2900 + (t2949 + t2704*(t2917 + t2918 - 1.*t2597*t2913*t2950 - 1.*t2597*t2913*t2952 + t2954 + t2955) + t2403*t2597*(-1.*t2553*t2678*t2913 + t2403*t2704*t2913 + t2927 + t2933 + t2961 + t2962) + t2965)*var2[3] + (t2903 + t2634*(-1.*t2597*t2913 + t2917 + t2918 + t2923) + t2613*(t2676*t2913 + t2927 + t2931 + t2933) + t2946)*var2[4];
  p_output1[16]=t2969 + t2973 + t2977 + (t2810*(t2553*t2678*t2913 - 1.*t2403*t2704*t2913 + t2979 + t2981 + t3002 + t3003) + t2704*(-1.*t2553*t2570*t2913 + t2403*t2810*t2913 + t2989 + t2991 + t3008 + t3009) + t3012 + t3013)*var2[3] + (t2400*(-1.*t2676*t2913 + t2979 + t2980 + t2981) + t2987 + t2634*(t2561*t2913 + t2989 + t2990 + t2991) + t2997)*var2[4];
  p_output1[17]=t3017 + t3021 + t3025 + (t3047 + t2810*(t2597*t2913*t2950 + t2597*t2913*t2952 + t3030 + t3031 + t3050 + t3051) + t2403*t2597*(t2553*t2570*t2913 - 1.*t2403*t2810*t2913 + t3036 + t3038 + t3056 + t3057) + t3060)*var2[3] + (t3028 + t2400*(t2597*t2913 + t3030 + t3031 + t3032) + t2613*(-1.*t2561*t2913 + t3036 + t3037 + t3038) + t3044)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t2891 + t2895 + t2900 + (t2949 + t2965 + t2704*(t2917 + t2954 + t2955 - 1.*t2597*t2950*t3076 - 1.*t2597*t2952*t3076 + t3081) + t2403*t2597*(t2927 + t2961 + t2962 - 1.*t2553*t2678*t3076 + t2403*t2704*t3076 + t3085))*var2[3] + (t2903 + t2946 + t2634*(t2917 + t2923 - 1.*t2597*t3076 + t3081) + t2613*(t2927 + t2931 + t2676*t3076 + t3085))*var2[4] + t2392*(t2397*t2739 + t2365*t2745 - 1.*t2397*t3065 + t2365*t3069)*var2[5];
  p_output1[37]=t2969 + t2973 + t2977 + (t3012 + t3013 + t2810*(t2979 + t3002 + t3003 + t2553*t2678*t3076 - 1.*t2403*t2704*t3076 + t3116) + t2704*(t2989 + t3008 + t3009 - 1.*t2553*t2570*t3076 + t2403*t2810*t3076 + t3120))*var2[3] + (t2987 + t2997 + t2400*(t2979 + t2980 - 1.*t2676*t3076 + t3116) + t2634*(t2989 + t2990 + t2561*t3076 + t3120))*var2[4] + (t2392*(-1.*t2365*t2392*t2739 + t2392*t2397*t2745 + t2365*t2392*t3065 + t2392*t2397*t3069) + t2461*(t2365*t2628*t2739 - 1.*t2397*t2628*t2745 - 1.*t2365*t2628*t3065 - 1.*t2397*t2628*t3069))*var2[5];
  p_output1[38]=t3017 + t3021 + t3025 + (t3047 + t3060 + t2810*(t3030 + t3050 + t3051 + t2597*t2950*t3076 + t2597*t2952*t3076 + t3143) + t2403*t2597*(t3036 + t3056 + t3057 + t2553*t2570*t3076 - 1.*t2403*t2810*t3076 + t3147))*var2[3] + (t3028 + t3044 + t2400*(t3030 + t3032 + t2597*t3076 + t3143) + t2613*(t3036 + t3037 - 1.*t2561*t3076 + t3147))*var2[4] + t2461*(-1.*t2397*t2739 - 1.*t2365*t2745 + t2397*t3065 - 1.*t2365*t3069)*var2[5];
  p_output1[39]=t3175*var2[0] + (t2402*t3179 - 1.*t2147*t3183)*var2[1] + (t2147*t3179 + t2402*t3183)*var2[2] + (t2775*t2810 + t2704*(t3194 - 1.*t2403*t2597*t3215 + t2553*t2597*t3219) + t2403*t2597*(t2836 + t2837 + t2838 + t3207 + t2704*t3215 + t2678*t3219))*var2[3] + (t2400*t2902 + t2634*(t3194 - 1.*t2597*t3197) + t2613*(t2836 + t2994 + t2995 + t2676*t3197 + t2392*t3205 + t3207))*var2[4] + t2461*t3165*var2[5];
  p_output1[40]=(t2810*t2839 + t2827*t3175 + t2704*(t2761*t3175 + t2773*t3183 + t2810*t3215 + t2570*t3219 + t3274 + t3276) + t2810*(t2878 + t2879 + t2880 - 1.*t2704*t3215 - 1.*t2678*t3219 + t3280))*var2[3] + (t2400*t2996 + t2986*t3179 + t2634*(t2748*t3173 + t2561*t3197 + t3234 + t3236 + t3274 + t3276) + t2400*(t2878 + t3041 + t3042 - 1.*t2676*t3197 + t3244 + t3280))*var2[4] + (t3169*t3251 + t2392*(t2397*t2461*t2739 + t2365*t2461*t2745 + t3234 + t3236 + t2392*t2715*t3253 + t2392*t2715*t3255) + t2461*(-1.*t2392*t2397*t2739 - 1.*t2365*t2392*t2745 + t3041 + t3244 - 1.*t2628*t2715*t3253 - 1.*t2628*t2715*t3255) + t2461*t3269)*var2[5] + (t3169*t3232 + t2392*(t2461*t2737 + t2940 + t3234 + t3236) + t2461*t3240 + t2461*(-1.*t2392*t2737 + t3041 + t3242 + t3244))*var2[12];
  p_output1[41]=t3305 + t2810*var2[0] + t2586*var2[1] + (t2147*t2400 + t2402*t2570)*var2[2] + (t2864*t3175 + t2810*(t2403*t2597*t3215 - 1.*t2553*t2597*t3219 + t3316) + t2403*t2597*(-1.*t2761*t3175 - 1.*t2773*t3183 - 1.*t2810*t3215 - 1.*t2570*t3219 + t3323 + t3325))*var2[3] + (t3027*t3179 + t2400*(t2597*t3197 + t3316) + t2613*(-1.*t2715*t3169 - 1.*t2748*t3173 - 1.*t2561*t3197 - 1.*t2461*t3205 + t3323 + t3325))*var2[4] + t3169*t3308*var2[5];
  p_output1[42]=t2704*var2[0] + t2685*var2[1] + (t2147*t2634 + t2402*t2678)*var2[2] + (t2704*(t3364 - 1.*t2403*t2597*t3392 + t2553*t2597*t3396) + t2775*t3402 + t2403*t2597*(t3379 + t3381 + t2704*t3392 + t2678*t3396 + t2761*t3402 + t2773*t3409))*var2[3] + (t2634*(t3364 - 1.*t2597*t3367) + t2902*t3373 + t2613*(t2628*t2715 + t2676*t3367 + t2392*t3377 + t3379 + t3381 + t2748*t3384))*var2[4] + t2628*t3165*var2[5] + (0.28121*t2370 - 0.305*Power(t2370,2) - 1.*t2370*t2710)*var2[13];
  p_output1[43]=(t2704*t2827 + t2839*t3402 + t2704*(t2796 + t2797 + t2798 + t2810*t3392 + t2570*t3396 + t3447) + t2810*(-1.*t2704*t3392 - 1.*t2678*t3396 - 1.*t2761*t3402 - 1.*t2773*t3409 + t3451 + t3453))*var2[3] + (t2634*t2986 + t2996*t3373 + t2634*(t2796 + t2940 + t2941 + t2561*t3367 + t3418 + t3447) + t2400*(t3242 - 1.*t2676*t3367 - 1.*t2748*t3384 + t3425 + t3451 + t3453))*var2[4] + (t2392*t3251 + t2628*t3269 + t2392*(t2397*t2628*t2739 + t2365*t2628*t2745 + t2940 + t2392*t3253*t3360 + t2392*t3255*t3360 + t3418) + t2461*(-1.*t2397*t2739*t3169 - 1.*t2365*t2745*t3169 + t3242 - 1.*t2628*t3253*t3360 - 1.*t2628*t3255*t3360 + t3425))*var2[5] + (t2392*t3232 + t2628*t3240 + t2392*(t2628*t2737 + t2940 + t2392*t3360 + t3418) + t2461*(-1.*t2737*t3169 + t3242 - 1.*t2628*t3360 + t3425))*var2[12];
  p_output1[44]=t3305 + t3402*var2[0] + (t2402*t3373 - 1.*t2147*t3409)*var2[1] + (t2147*t3373 + t2402*t3409)*var2[2] + (t2704*t2864 + t2810*(t2403*t2597*t3392 - 1.*t2553*t2597*t3396 + t3490) + t2403*t2597*(t2824 + t2825 + t2826 - 1.*t2810*t3392 - 1.*t2570*t3396 + t3496))*var2[3] + (t2634*t3027 + t2400*(t2597*t3367 + t3490) + t2613*(t2824 + t2984 + t2985 - 1.*t2561*t3367 - 1.*t2461*t3377 + t3496))*var2[4] + t2392*t3308*var2[5] + (-0.28121*t2383 + 0.305*t2370*t2383 + t2383*t2710)*var2[13];
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJh_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void dJh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
