/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:10:38 GMT+01:00
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
  double t32;
  double t60;
  double t69;
  double t95;
  double t97;
  double t105;
  double t56;
  double t150;
  double t253;
  double t258;
  double t266;
  double t289;
  double t486;
  double t546;
  double t175;
  double t188;
  double t191;
  double t344;
  double t348;
  double t359;
  double t724;
  double t773;
  double t774;
  double t781;
  double t549;
  double t573;
  double t593;
  double t641;
  double t690;
  double t713;
  double t1090;
  double t959;
  double t970;
  double t1036;
  double t1041;
  double t811;
  double t824;
  double t845;
  double t853;
  double t855;
  double t866;
  double t115;
  double t123;
  double t1477;
  double t1456;
  double t159;
  double t169;
  double t1463;
  double t1484;
  double t1488;
  double t1516;
  double t1538;
  double t1557;
  double t226;
  double t270;
  double t298;
  double t317;
  double t371;
  double t373;
  double t393;
  double t494;
  double t501;
  double t516;
  double t532;
  double t1590;
  double t1595;
  double t1624;
  double t1648;
  double t1662;
  double t1677;
  double t717;
  double t776;
  double t796;
  double t797;
  double t873;
  double t906;
  double t923;
  double t1059;
  double t1062;
  double t1066;
  double t1067;
  double t1093;
  double t1103;
  double t1704;
  double t1708;
  double t1730;
  double t1742;
  double t1842;
  double t1869;
  double t1876;
  double t1884;
  double t1758;
  double t1762;
  double t1813;
  double t1818;
  double t1295;
  double t1297;
  double t2069;
  double t2085;
  double t2093;
  double t2102;
  double t2109;
  double t2118;
  double t2160;
  double t2185;
  double t2201;
  double t2240;
  double t2249;
  double t2250;
  double t2308;
  double t2323;
  double t2335;
  double t2342;
  double t2424;
  double t2425;
  double t2429;
  double t2434;
  double t2365;
  double t2378;
  double t2381;
  double t2399;
  double t2694;
  double t2711;
  double t2712;
  double t2719;
  double t2630;
  double t2631;
  double t2632;
  double t2645;
  double t2646;
  double t2734;
  double t2736;
  double t2815;
  double t2718;
  double t3023;
  double t3028;
  double t3045;
  double t3058;
  double t2954;
  double t2916;
  double t2930;
  double t2932;
  double t2986;
  double t2994;
  double t3003;
  double t3070;
  double t2737;
  double t3100;
  double t2722;
  double t3053;
  double t3210;
  double t3213;
  double t3228;
  double t2839;
  double t3134;
  double t2822;
  double t3288;
  double t3115;
  double t3126;
  double t3135;
  double t3137;
  double t3138;
  double t3148;
  double t3149;
  double t3155;
  double t3303;
  double t3221;
  double t3224;
  double t3226;
  double t3230;
  double t3231;
  double t3239;
  double t3242;
  double t3246;
  double t3315;
  double t3319;
  double t3324;
  double t3326;
  double t3327;
  double t3330;
  double t3336;
  double t3348;
  double t3179;
  double t3372;
  double t3214;
  double t3418;
  double t3358;
  double t3059;
  double t2693;
  double t2715;
  double t2729;
  double t2730;
  double t2758;
  double t2762;
  double t2786;
  double t2650;
  double t2659;
  double t2796;
  double t2797;
  double t2804;
  double t2807;
  double t2823;
  double t2832;
  double t2842;
  double t2866;
  double t2878;
  double t2936;
  double t2947;
  double t2955;
  double t2956;
  double t2957;
  double t2966;
  double t2977;
  double t3020;
  double t3052;
  double t3062;
  double t3068;
  double t3074;
  double t3075;
  double t3089;
  double t3529;
  double t3533;
  double t3537;
  double t3557;
  double t3559;
  double t3560;
  double t3157;
  double t3160;
  double t3189;
  double t3209;
  double t3215;
  double t3218;
  double t3220;
  double t3256;
  double t3261;
  double t3293;
  double t3302;
  double t3304;
  double t3310;
  double t3312;
  double t3360;
  double t3577;
  double t3578;
  double t3581;
  double t3589;
  double t3391;
  double t3596;
  double t3601;
  double t3603;
  double t3605;
  double t3395;
  double t3397;
  double t3616;
  double t3628;
  double t3631;
  double t3633;
  double t3421;
  double t3427;
  double t3434;
  double t3442;
  double t3455;
  double t3458;
  double t3462;
  double t3475;
  double t3754;
  double t3758;
  double t3759;
  double t3768;
  double t3770;
  double t3777;
  double t3794;
  double t3796;
  double t3799;
  double t3805;
  double t3823;
  double t3832;
  double t3833;
  double t3835;
  double t3843;
  double t3850;
  double t3853;
  double t3861;
  double t3966;
  double t3969;
  double t3972;
  double t3977;
  double t3979;
  double t3994;
  double t3996;
  double t3999;
  double t4008;
  double t4009;
  t32 = Cos(var1[4]);
  t60 = Cos(var1[6]);
  t69 = -1.*t60;
  t95 = 1. + t69;
  t97 = 0.15121*t95;
  t105 = Sin(var1[6]);
  t56 = Sin(var1[5]);
  t150 = Cos(var1[5]);
  t253 = Cos(var1[7]);
  t258 = -1.*t253;
  t266 = 1. + t258;
  t289 = Sin(var1[7]);
  t486 = Sin(var1[4]);
  t546 = -1. + t253;
  t175 = -1.*t32*t60*t56;
  t188 = -1.*t32*t150*t105;
  t191 = t175 + t188;
  t344 = t32*t150*t60;
  t348 = -1.*t32*t56*t105;
  t359 = t344 + t348;
  t724 = Cos(var1[8]);
  t773 = -1.*t724;
  t774 = 1. + t773;
  t781 = Sin(var1[8]);
  t549 = 4.e-6*t546*t486;
  t573 = 1.6e-11*t546;
  t593 = 1. + t573;
  t641 = t593*t191;
  t690 = 4.e-6*t359*t289;
  t713 = t549 + t641 + t690;
  t1090 = -1. + t724;
  t959 = t253*t486;
  t970 = 4.e-6*t546*t191;
  t1036 = t359*t289;
  t1041 = t959 + t970 + t1036;
  t811 = -1.000000000016*t266;
  t824 = 1. + t811;
  t845 = t824*t359;
  t853 = -1.*t486*t289;
  t855 = -4.e-6*t191*t289;
  t866 = t845 + t853 + t855;
  t115 = -0.15121*t105;
  t123 = t97 + t115;
  t1477 = Sin(var1[3]);
  t1456 = Cos(var1[3]);
  t159 = 0.15121*t105;
  t169 = t97 + t159;
  t1463 = t1456*t150;
  t1484 = -1.*t1477*t486*t56;
  t1488 = t1463 + t1484;
  t1516 = t150*t1477*t486;
  t1538 = t1456*t56;
  t1557 = t1516 + t1538;
  t226 = -1.2484e-7*var1[7];
  t270 = -1.5499600000248e-7*t266;
  t298 = 1.124840000016e-6*t289;
  t317 = t226 + t270 + t298;
  t371 = 0.281210000008499*t266;
  t373 = 0.03874900000062*t289;
  t393 = t371 + t373;
  t494 = 4.9936e-13*var1[7];
  t501 = -0.03874900000062*t266;
  t516 = 0.281210000004*t289;
  t532 = t494 + t501 + t516;
  t1590 = t60*t1488;
  t1595 = -1.*t1557*t105;
  t1624 = t1590 + t1595;
  t1648 = t60*t1557;
  t1662 = t1488*t105;
  t1677 = t1648 + t1662;
  t717 = -1.284e-8*var1[8];
  t776 = -1.5499600000248e-7*t774;
  t796 = 2.012840000032e-6*t781;
  t797 = t717 + t776 + t796;
  t873 = 0.503210000016051*t774;
  t906 = 0.03874900000062*t781;
  t923 = t873 + t906;
  t1059 = 5.136e-14*var1[8];
  t1062 = -0.03874900000062*t774;
  t1066 = 0.503210000008*t781;
  t1067 = t1059 + t1062 + t1066;
  t1093 = 1.6e-11*t1090;
  t1103 = 1. + t1093;
  t1704 = -4.e-6*t32*t546*t1477;
  t1708 = t593*t1624;
  t1730 = 4.e-6*t1677*t289;
  t1742 = t1704 + t1708 + t1730;
  t1842 = -1.*t32*t253*t1477;
  t1869 = 4.e-6*t546*t1624;
  t1876 = t1677*t289;
  t1884 = t1842 + t1869 + t1876;
  t1758 = t824*t1677;
  t1762 = t32*t1477*t289;
  t1813 = -4.e-6*t1624*t289;
  t1818 = t1758 + t1762 + t1813;
  t1295 = -1.000000000016*t774;
  t1297 = 1. + t1295;
  t2069 = t150*t1477;
  t2085 = t1456*t486*t56;
  t2093 = t2069 + t2085;
  t2102 = -1.*t1456*t150*t486;
  t2109 = t1477*t56;
  t2118 = t2102 + t2109;
  t2160 = t60*t2093;
  t2185 = -1.*t2118*t105;
  t2201 = t2160 + t2185;
  t2240 = t60*t2118;
  t2249 = t2093*t105;
  t2250 = t2240 + t2249;
  t2308 = 4.e-6*t1456*t32*t546;
  t2323 = t593*t2201;
  t2335 = 4.e-6*t2250*t289;
  t2342 = t2308 + t2323 + t2335;
  t2424 = t1456*t32*t253;
  t2425 = 4.e-6*t546*t2201;
  t2429 = t2250*t289;
  t2434 = t2424 + t2425 + t2429;
  t2365 = t824*t2250;
  t2378 = -1.*t1456*t32*t289;
  t2381 = -4.e-6*t2201*t289;
  t2399 = t2365 + t2378 + t2381;
  t2694 = Cos(var1[16]);
  t2711 = -1.*t2694;
  t2712 = 1. + t2711;
  t2719 = Sin(var1[16]);
  t2630 = Cos(var1[15]);
  t2631 = -1.*t2630;
  t2632 = 1. + t2631;
  t2645 = -0.15121*t2632;
  t2646 = Sin(var1[15]);
  t2734 = -1. + t2694;
  t2736 = 4.e-6*t2734;
  t2815 = 7.e-6*t2712;
  t2718 = 2.8e-11*t2712;
  t3023 = Cos(var1[17]);
  t3028 = -1.*t3023;
  t3045 = 1. + t3028;
  t3058 = Sin(var1[17]);
  t2954 = -4.e-6*t2719;
  t2916 = -1.*t32*t150*t2646;
  t2930 = -1.*t2630*t32*t56;
  t2932 = t2916 + t2930;
  t2986 = t2630*t32*t150;
  t2994 = -1.*t32*t2646*t56;
  t3003 = t2986 + t2994;
  t3070 = 2.8e-11*t3045;
  t2737 = -7.e-6*t2719;
  t3100 = -2.8e-11*t2712;
  t2722 = -1.*t2719;
  t3053 = 7.e-6*t3045;
  t3210 = -1. + t3023;
  t3213 = 4.e-6*t3210;
  t3228 = 4.e-6*t2712;
  t2839 = 7.e-6*t2719;
  t3134 = -7.e-6*t2712;
  t2822 = 4.e-6*t2719;
  t3288 = 4.e-6*t3058;
  t3115 = t3100 + t2719;
  t3126 = t3115*t486;
  t3135 = t3134 + t2954;
  t3137 = t3135*t2932;
  t3138 = -1.000000000016*t2712;
  t3148 = 1. + t3138;
  t3149 = t3148*t3003;
  t3155 = t3126 + t3137 + t3149;
  t3303 = 7.e-6*t3058;
  t3221 = -1.000000000049*t2712;
  t3224 = 1. + t3221;
  t3226 = t3224*t486;
  t3230 = t3228 + t2737;
  t3231 = t3230*t2932;
  t3239 = t3100 + t2722;
  t3242 = t3239*t3003;
  t3246 = t3226 + t3231 + t3242;
  t3315 = t3228 + t2839;
  t3319 = t3315*t486;
  t3324 = -6.5e-11*t2712;
  t3326 = 1. + t3324;
  t3327 = t3326*t2932;
  t3330 = t3134 + t2822;
  t3336 = t3330*t3003;
  t3348 = t3319 + t3327 + t3336;
  t3179 = -1.*t3058;
  t3372 = 4.e-6*t3045;
  t3214 = -7.e-6*t3058;
  t3418 = -2.8e-11*t3045;
  t3358 = -7.e-6*t3045;
  t3059 = -4.e-6*t3058;
  t2693 = 1.5843479999999999e-12*var1[16];
  t2715 = -0.03874900000889869*t2712;
  t2729 = t2718 + t2722;
  t2730 = -0.281211000004*t2729;
  t2758 = t2736 + t2737;
  t2762 = -1.8134809999999998e-6*t2758;
  t2786 = t2693 + t2715 + t2730 + t2762;
  t2650 = -0.15121*t2646;
  t2659 = t2645 + t2650;
  t2796 = 0.15121*t2646;
  t2797 = t2645 + t2796;
  t2804 = 3.9608699999999997e-7*var1[16];
  t2807 = -1.1787626499999999e-16*t2712;
  t2823 = t2815 + t2822;
  t2832 = -0.281211000004*t2823;
  t2842 = t2736 + t2839;
  t2866 = -0.038749000006999997*t2842;
  t2878 = t2804 + t2807 + t2832 + t2866;
  t2936 = -2.7726089999999997e-12*var1[16];
  t2947 = -0.2812110000084994*t2712;
  t2955 = t2815 + t2954;
  t2956 = -1.8134809999999998e-6*t2955;
  t2957 = t2718 + t2719;
  t2966 = -0.038749000006999997*t2957;
  t2977 = t2936 + t2947 + t2956 + t2966;
  t3020 = -1.9784030000000015e-12*var1[17];
  t3052 = -0.5031510000160505*t3045;
  t3062 = t3053 + t3059;
  t3068 = -3.367757e-6*t3062;
  t3074 = t3070 + t3058;
  t3075 = -0.038575000014*t3074;
  t3089 = t3020 + t3052 + t3068 + t3075;
  t3529 = -1.*t2646*t1557;
  t3533 = t2630*t1488;
  t3537 = t3529 + t3533;
  t3557 = t2630*t1557;
  t3559 = t2646*t1488;
  t3560 = t3557 + t3559;
  t3157 = 1.1305160000000008e-12*var1[17];
  t3160 = -0.03857500001589017*t3045;
  t3189 = t3070 + t3179;
  t3209 = -0.5031510000080001*t3189;
  t3215 = t3213 + t3214;
  t3218 = -3.367757e-6*t3215;
  t3220 = t3157 + t3160 + t3209 + t3218;
  t3256 = 2.826290000000002e-7*var1[17];
  t3261 = -2.18904205e-16*t3045;
  t3293 = t3053 + t3288;
  t3302 = -0.5031510000080001*t3293;
  t3304 = t3213 + t3303;
  t3310 = -0.038575000014*t3304;
  t3312 = t3256 + t3261 + t3302 + t3310;
  t3360 = t3358 + t3288;
  t3577 = -1.*t32*t3115*t1477;
  t3578 = t3135*t3537;
  t3581 = t3148*t3560;
  t3589 = t3577 + t3578 + t3581;
  t3391 = t3372 + t3303;
  t3596 = -1.*t3224*t32*t1477;
  t3601 = t3230*t3537;
  t3603 = t3239*t3560;
  t3605 = t3596 + t3601 + t3603;
  t3395 = -6.5e-11*t3045;
  t3397 = 1. + t3395;
  t3616 = -1.*t32*t3315*t1477;
  t3628 = t3326*t3537;
  t3631 = t3330*t3560;
  t3633 = t3616 + t3628 + t3631;
  t3421 = t3418 + t3179;
  t3427 = -1.000000000049*t3045;
  t3434 = 1. + t3427;
  t3442 = t3372 + t3214;
  t3455 = -1.000000000016*t3045;
  t3458 = 1. + t3455;
  t3462 = t3418 + t3058;
  t3475 = t3358 + t3059;
  t3754 = -1.*t2646*t2118;
  t3758 = t2630*t2093;
  t3759 = t3754 + t3758;
  t3768 = t2630*t2118;
  t3770 = t2646*t2093;
  t3777 = t3768 + t3770;
  t3794 = t1456*t32*t3115;
  t3796 = t3135*t3759;
  t3799 = t3148*t3777;
  t3805 = t3794 + t3796 + t3799;
  t3823 = t3224*t1456*t32;
  t3832 = t3230*t3759;
  t3833 = t3239*t3777;
  t3835 = t3823 + t3832 + t3833;
  t3843 = t1456*t32*t3315;
  t3850 = t3326*t3759;
  t3853 = t3330*t3777;
  t3861 = t3843 + t3850 + t3853;
  t3966 = Cos(var1[9]);
  t3969 = -1.*t3966;
  t3972 = 1. + t3969;
  t3977 = Sin(var1[9]);
  t3979 = -0.15121*t3977;
  t3994 = Cos(var1[12]);
  t3996 = -1.*t3994;
  t3999 = 1. + t3996;
  t4008 = Sin(var1[12]);
  t4009 = 0.15121*t4008;
  p_output1[0]=t1041*t1067 + t191*t317 + t150*t169*t32 + t359*t393 + t486*t532 - 1.*t123*t32*t56 + t713*t797 + 0.80321*(-1.*t1041*t781 - 4.e-6*t713*t781 + t1297*t866) + 0.14871*(4.e-6*t1041*t1090 + t1103*t713 + 4.e-6*t781*t866) - 0.03875*(4.e-6*t1090*t713 + t1041*t724 + t781*t866) + t866*t923 + var1[0];
  p_output1[1]=t123*t1488 + t1557*t169 + t1067*t1884 + t1624*t317 + t1677*t393 - 1.*t1477*t32*t532 + 0.14871*(t1103*t1742 + 4.e-6*t1090*t1884 + 4.e-6*t1818*t781) - 0.03875*(4.e-6*t1090*t1742 + t1884*t724 + t1818*t781) + 0.80321*(t1297*t1818 - 4.e-6*t1742*t781 - 1.*t1884*t781) + t1742*t797 + t1818*t923 + var1[1];
  p_output1[2]=t123*t2093 + t169*t2118 + t1067*t2434 + t2201*t317 + t2250*t393 + t1456*t32*t532 + 0.14871*(t1103*t2342 + 4.e-6*t1090*t2434 + 4.e-6*t2399*t781) - 0.03875*(4.e-6*t1090*t2342 + t2434*t724 + t2399*t781) + 0.80321*(t1297*t2399 - 4.e-6*t2342*t781 - 1.*t2434*t781) + t2342*t797 + t2399*t923 + var1[2];
  p_output1[3]=t2878*t2932 + t2977*t3003 + t3089*t3155 + t150*t2659*t32 + t3220*t3246 + t3312*t3348 - 0.148715*(t3155*t3360 + t3246*t3391 + t3348*t3397) - 0.038576*(t3155*t3421 + t3246*t3434 + t3348*t3442) - 0.80315*(t3155*t3458 + t3246*t3462 + t3348*t3475) + t2786*t486 - 1.*t2797*t32*t56 + var1[0];
  p_output1[4]=t1557*t2659 + t1488*t2797 - 1.*t1477*t2786*t32 + t2878*t3537 + t2977*t3560 + t3089*t3589 + t3220*t3605 + t3312*t3633 - 0.148715*(t3360*t3589 + t3391*t3605 + t3397*t3633) - 0.038576*(t3421*t3589 + t3434*t3605 + t3442*t3633) - 0.80315*(t3458*t3589 + t3462*t3605 + t3475*t3633) + var1[1];
  p_output1[5]=t2118*t2659 + t2093*t2797 + t1456*t2786*t32 + t2878*t3759 + t2977*t3777 + t3089*t3805 + t3220*t3835 + t3312*t3861 - 0.148715*(t3360*t3805 + t3391*t3835 + t3397*t3861) - 0.038576*(t3421*t3805 + t3434*t3835 + t3442*t3861) - 0.80315*(t3458*t3805 + t3462*t3835 + t3475*t3861) + var1[2];
  p_output1[6]=-0.002264*t1488 + 0.00183*t1557 + 0.024028*t1477*t32 + var1[1];
  p_output1[7]=-0.002264*t2093 + 0.00183*t2118 - 0.024028*t1456*t32 + var1[2];
  p_output1[8]=ArcTan(t150*t32,t1557);
  p_output1[9]=0.15121*(t2118*t3966 + t2093*t3977) - 0.15121*(t2093*t3966 - 1.*t2118*t3977) + t2093*(-0.15121*t3972 + t3979) + t2118*(0.15121*t3972 + t3979) + 0.15121*(t2118*t3994 + t2093*t4008) - 0.15121*(t2093*t3994 - 1.*t2118*t4008) - 1.*t2118*(-0.15121*t3999 + t4009) - 1.*t2093*(0.15121*t3999 + t4009);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 10, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "ya_position_DiagonalStance.hh"

namespace SymFunction
{

void ya_position_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
