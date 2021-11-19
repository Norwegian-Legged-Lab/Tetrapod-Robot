/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:32:32 GMT+01:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t28;
  double t33;
  double t64;
  double t66;
  double t69;
  double t72;
  double t73;
  double t78;
  double t81;
  double t114;
  double t120;
  double t141;
  double t352;
  double t250;
  double t270;
  double t279;
  double t292;
  double t308;
  double t338;
  double t358;
  double t366;
  double t372;
  double t377;
  double t261;
  double t416;
  double t387;
  double t466;
  double t469;
  double t471;
  double t507;
  double t536;
  double t550;
  double t590;
  double t604;
  double t622;
  double t636;
  double t738;
  double t667;
  double t689;
  double t704;
  double t706;
  double t711;
  double t714;
  double t764;
  double t789;
  double t801;
  double t808;
  double t897;
  double t899;
  double t911;
  double t948;
  double t951;
  double t966;
  double t39;
  double t87;
  double t98;
  double t105;
  double t146;
  double t150;
  double t168;
  double t204;
  double t213;
  double t224;
  double t232;
  double t248;
  double t351;
  double t368;
  double t373;
  double t382;
  double t386;
  double t299;
  double t342;
  double t1225;
  double t397;
  double t400;
  double t1239;
  double t422;
  double t425;
  double t439;
  double t455;
  double t463;
  double t1235;
  double t1244;
  double t1246;
  double t1261;
  double t1263;
  double t1264;
  double t486;
  double t493;
  double t494;
  double t630;
  double t643;
  double t645;
  double t1282;
  double t1286;
  double t1287;
  double t1290;
  double t1299;
  double t1304;
  double t724;
  double t725;
  double t741;
  double t745;
  double t759;
  double t834;
  double t856;
  double t860;
  double t865;
  double t873;
  double t1331;
  double t1333;
  double t1345;
  double t1349;
  double t1366;
  double t1367;
  double t1369;
  double t1381;
  double t1005;
  double t1055;
  double t1389;
  double t1397;
  double t1402;
  double t1419;
  double t1104;
  double t1105;
  double t1655;
  double t1657;
  double t1662;
  double t1677;
  double t1705;
  double t1708;
  double t1723;
  double t1735;
  double t1740;
  double t1747;
  double t1750;
  double t1763;
  double t1772;
  double t1775;
  double t1799;
  double t1802;
  double t1808;
  double t1831;
  double t1837;
  double t1846;
  double t1871;
  double t1878;
  double t1886;
  double t1893;
  double t2158;
  double t2163;
  double t2174;
  double t2184;
  double t2135;
  double t2136;
  double t2137;
  double t2138;
  double t2141;
  double t2202;
  double t2215;
  double t2295;
  double t2182;
  double t2483;
  double t2490;
  double t2496;
  double t2524;
  double t2410;
  double t2344;
  double t2352;
  double t2367;
  double t2445;
  double t2458;
  double t2463;
  double t2534;
  double t2218;
  double t2565;
  double t2187;
  double t2523;
  double t2667;
  double t2669;
  double t2714;
  double t2310;
  double t2593;
  double t2300;
  double t2749;
  double t2574;
  double t2579;
  double t2597;
  double t2601;
  double t2607;
  double t2613;
  double t2626;
  double t2628;
  double t2754;
  double t2691;
  double t2701;
  double t2708;
  double t2718;
  double t2726;
  double t2729;
  double t2735;
  double t2739;
  double t2780;
  double t2783;
  double t2787;
  double t2790;
  double t2795;
  double t2800;
  double t2810;
  double t2814;
  double t2647;
  double t2834;
  double t2680;
  double t2876;
  double t2824;
  double t2525;
  double t2154;
  double t2175;
  double t2191;
  double t2194;
  double t2235;
  double t2238;
  double t2253;
  double t2143;
  double t2148;
  double t2276;
  double t2281;
  double t2290;
  double t2293;
  double t2303;
  double t2304;
  double t2315;
  double t2326;
  double t2331;
  double t2381;
  double t2407;
  double t2414;
  double t2416;
  double t2418;
  double t2429;
  double t2438;
  double t2480;
  double t2522;
  double t2526;
  double t2530;
  double t2540;
  double t2552;
  double t2563;
  double t3105;
  double t3107;
  double t3111;
  double t3118;
  double t3119;
  double t3120;
  double t2637;
  double t2641;
  double t2649;
  double t2666;
  double t2684;
  double t2686;
  double t2688;
  double t2747;
  double t2748;
  double t2752;
  double t2753;
  double t2760;
  double t2768;
  double t2776;
  double t2830;
  double t3129;
  double t3146;
  double t3159;
  double t3166;
  double t2847;
  double t3170;
  double t3174;
  double t3189;
  double t3190;
  double t2851;
  double t2857;
  double t3220;
  double t3222;
  double t3227;
  double t3230;
  double t2881;
  double t2895;
  double t2896;
  double t2898;
  double t2931;
  double t2940;
  double t2953;
  double t2969;
  double t3353;
  double t3355;
  double t3369;
  double t3380;
  double t3403;
  double t3411;
  double t3416;
  double t3432;
  double t3437;
  double t3442;
  double t3450;
  double t3452;
  double t3465;
  double t3466;
  double t3472;
  double t3473;
  double t3474;
  double t3479;
  double t1676;
  double t1718;
  t28 = -1.*var4[0];
  t33 = t28 + var4[1];
  t64 = -1. + var5[0];
  t66 = -1. + var6[0];
  t69 = 1/t66;
  t72 = -1.*var1[0];
  t73 = t72 + var1[1];
  t78 = t64*t69*t73;
  t81 = t28 + var1[0] + t78;
  t114 = 1/t33;
  t120 = -1.*t114*t81;
  t141 = 1. + t120;
  t352 = Cos(var2[10]);
  t250 = Cos(var2[4]);
  t270 = Cos(var2[9]);
  t279 = -1.*t270;
  t292 = 1. + t279;
  t308 = Sin(var2[9]);
  t338 = -0.15121*t308;
  t358 = -1.*t352;
  t366 = 1. + t358;
  t372 = -1. + t352;
  t377 = Sin(var2[10]);
  t261 = Cos(var2[5]);
  t416 = Sin(var2[5]);
  t387 = Sin(var2[4]);
  t466 = -1.*t250*t261*t308;
  t469 = -1.*t270*t250*t416;
  t471 = t466 + t469;
  t507 = t270*t250*t261;
  t536 = -1.*t250*t308*t416;
  t550 = t507 + t536;
  t590 = Cos(var2[11]);
  t604 = -1.*t590;
  t622 = 1. + t604;
  t636 = Sin(var2[11]);
  t738 = -1. + t590;
  t667 = t377*t387;
  t689 = -4.e-6*t377*t471;
  t704 = -1.000000000016*t366;
  t706 = 1. + t704;
  t711 = t706*t550;
  t714 = t667 + t689 + t711;
  t764 = t352*t387;
  t789 = 4.e-6*t366*t471;
  t801 = -1.*t377*t550;
  t808 = t764 + t789 + t801;
  t897 = 4.e-6*t366*t387;
  t899 = 1.6e-11*t372;
  t911 = 1. + t899;
  t948 = t911*t471;
  t951 = 4.e-6*t377*t550;
  t966 = t897 + t948 + t951;
  t39 = Power(t33,-5);
  t87 = Power(t81,5);
  t98 = Power(t33,-4);
  t105 = Power(t81,4);
  t146 = Power(t33,-3);
  t150 = Power(t81,3);
  t168 = Power(t141,2);
  t204 = Power(t33,-2);
  t213 = Power(t81,2);
  t224 = Power(t141,3);
  t232 = Power(t141,4);
  t248 = Power(t141,5);
  t351 = -4.9936e-13*var2[10];
  t368 = -0.038749*t366;
  t373 = 6.19984e-13*t372;
  t382 = -0.281210000004*t377;
  t386 = t351 + t368 + t373 + t382;
  t299 = 0.15121*t292;
  t342 = t299 + t338;
  t1225 = Sin(var2[3]);
  t397 = -0.15121*t292;
  t400 = t397 + t338;
  t1239 = Cos(var2[3]);
  t422 = -1.2484e-7*var2[10];
  t425 = 2.479936e-18*t366;
  t439 = -1.54996e-7*t372;
  t455 = 1.124840000016e-6*t377;
  t463 = t422 + t425 + t439 + t455;
  t1235 = t261*t1225*t387;
  t1244 = t1239*t416;
  t1246 = t1235 + t1244;
  t1261 = t1239*t261;
  t1263 = -1.*t1225*t387*t416;
  t1264 = t1261 + t1263;
  t486 = 0.281210000008499*t366;
  t493 = -0.03874900000062*t377;
  t494 = t486 + t493;
  t630 = 0.50315000001605*t622;
  t643 = -0.0398890000006382*t636;
  t645 = t630 + t643;
  t1282 = -1.*t308*t1246;
  t1286 = t270*t1264;
  t1287 = t1282 + t1286;
  t1290 = t270*t1246;
  t1299 = t308*t1264;
  t1304 = t1290 + t1299;
  t724 = -5.04e-14*var2[11];
  t725 = -0.039889*t622;
  t741 = 6.38224e-13*t738;
  t745 = -0.503150000008*t636;
  t759 = t724 + t725 + t741 + t745;
  t834 = -1.26e-8*var2[11];
  t856 = 2.552896e-18*t622;
  t860 = -1.59556e-7*t738;
  t865 = 2.012600000032e-6*t636;
  t873 = t834 + t856 + t860 + t865;
  t1331 = -1.*t250*t377*t1225;
  t1333 = -4.e-6*t377*t1287;
  t1345 = t706*t1304;
  t1349 = t1331 + t1333 + t1345;
  t1366 = -1.*t352*t250*t1225;
  t1367 = 4.e-6*t366*t1287;
  t1369 = -1.*t377*t1304;
  t1381 = t1366 + t1367 + t1369;
  t1005 = 1.6e-11*t738;
  t1055 = 1. + t1005;
  t1389 = -4.e-6*t366*t250*t1225;
  t1397 = t911*t1287;
  t1402 = 4.e-6*t377*t1304;
  t1419 = t1389 + t1397 + t1402;
  t1104 = -1.000000000016*t622;
  t1105 = 1. + t1104;
  t1655 = -1.*t1239*t261*t387;
  t1657 = t1225*t416;
  t1662 = t1655 + t1657;
  t1677 = t261*t1225;
  t1705 = t1239*t387*t416;
  t1708 = t1677 + t1705;
  t1723 = -1.*t308*t1662;
  t1735 = t270*t1708;
  t1740 = t1723 + t1735;
  t1747 = t270*t1662;
  t1750 = t308*t1708;
  t1763 = t1747 + t1750;
  t1772 = t1239*t250*t377;
  t1775 = -4.e-6*t377*t1740;
  t1799 = t706*t1763;
  t1802 = t1772 + t1775 + t1799;
  t1808 = t352*t1239*t250;
  t1831 = 4.e-6*t366*t1740;
  t1837 = -1.*t377*t1763;
  t1846 = t1808 + t1831 + t1837;
  t1871 = 4.e-6*t366*t1239*t250;
  t1878 = t911*t1740;
  t1886 = 4.e-6*t377*t1763;
  t1893 = t1871 + t1878 + t1886;
  t2158 = Cos(var2[16]);
  t2163 = -1.*t2158;
  t2174 = 1. + t2163;
  t2184 = Sin(var2[16]);
  t2135 = Cos(var2[15]);
  t2136 = -1.*t2135;
  t2137 = 1. + t2136;
  t2138 = -0.15121*t2137;
  t2141 = Sin(var2[15]);
  t2202 = -1. + t2158;
  t2215 = 4.e-6*t2202;
  t2295 = 7.e-6*t2174;
  t2182 = 2.8e-11*t2174;
  t2483 = Cos(var2[17]);
  t2490 = -1.*t2483;
  t2496 = 1. + t2490;
  t2524 = Sin(var2[17]);
  t2410 = -4.e-6*t2184;
  t2344 = -1.*t250*t261*t2141;
  t2352 = -1.*t2135*t250*t416;
  t2367 = t2344 + t2352;
  t2445 = t2135*t250*t261;
  t2458 = -1.*t250*t2141*t416;
  t2463 = t2445 + t2458;
  t2534 = 2.8e-11*t2496;
  t2218 = -7.e-6*t2184;
  t2565 = -2.8e-11*t2174;
  t2187 = -1.*t2184;
  t2523 = 7.e-6*t2496;
  t2667 = -1. + t2483;
  t2669 = 4.e-6*t2667;
  t2714 = 4.e-6*t2174;
  t2310 = 7.e-6*t2184;
  t2593 = -7.e-6*t2174;
  t2300 = 4.e-6*t2184;
  t2749 = 4.e-6*t2524;
  t2574 = t2565 + t2184;
  t2579 = t2574*t387;
  t2597 = t2593 + t2410;
  t2601 = t2597*t2367;
  t2607 = -1.000000000016*t2174;
  t2613 = 1. + t2607;
  t2626 = t2613*t2463;
  t2628 = t2579 + t2601 + t2626;
  t2754 = 7.e-6*t2524;
  t2691 = -1.000000000049*t2174;
  t2701 = 1. + t2691;
  t2708 = t2701*t387;
  t2718 = t2714 + t2218;
  t2726 = t2718*t2367;
  t2729 = t2565 + t2187;
  t2735 = t2729*t2463;
  t2739 = t2708 + t2726 + t2735;
  t2780 = t2714 + t2310;
  t2783 = t2780*t387;
  t2787 = -6.5e-11*t2174;
  t2790 = 1. + t2787;
  t2795 = t2790*t2367;
  t2800 = t2593 + t2300;
  t2810 = t2800*t2463;
  t2814 = t2783 + t2795 + t2810;
  t2647 = -1.*t2524;
  t2834 = 4.e-6*t2496;
  t2680 = -7.e-6*t2524;
  t2876 = -2.8e-11*t2496;
  t2824 = -7.e-6*t2496;
  t2525 = -4.e-6*t2524;
  t2154 = 1.5843479999999999e-12*var2[16];
  t2175 = -0.03874900000889869*t2174;
  t2191 = t2182 + t2187;
  t2194 = -0.281211000004*t2191;
  t2235 = t2215 + t2218;
  t2238 = -1.8134809999999998e-6*t2235;
  t2253 = t2154 + t2175 + t2194 + t2238;
  t2143 = -0.15121*t2141;
  t2148 = t2138 + t2143;
  t2276 = 0.15121*t2141;
  t2281 = t2138 + t2276;
  t2290 = 3.9608699999999997e-7*var2[16];
  t2293 = -1.1787626499999999e-16*t2174;
  t2303 = t2295 + t2300;
  t2304 = -0.281211000004*t2303;
  t2315 = t2215 + t2310;
  t2326 = -0.038749000006999997*t2315;
  t2331 = t2290 + t2293 + t2304 + t2326;
  t2381 = -2.7726089999999997e-12*var2[16];
  t2407 = -0.2812110000084994*t2174;
  t2414 = t2295 + t2410;
  t2416 = -1.8134809999999998e-6*t2414;
  t2418 = t2182 + t2184;
  t2429 = -0.038749000006999997*t2418;
  t2438 = t2381 + t2407 + t2416 + t2429;
  t2480 = -1.9784030000000015e-12*var2[17];
  t2522 = -0.5031510000160505*t2496;
  t2526 = t2523 + t2525;
  t2530 = -3.367757e-6*t2526;
  t2540 = t2534 + t2524;
  t2552 = -0.038575000014*t2540;
  t2563 = t2480 + t2522 + t2530 + t2552;
  t3105 = -1.*t2141*t1246;
  t3107 = t2135*t1264;
  t3111 = t3105 + t3107;
  t3118 = t2135*t1246;
  t3119 = t2141*t1264;
  t3120 = t3118 + t3119;
  t2637 = 1.1305160000000008e-12*var2[17];
  t2641 = -0.03857500001589017*t2496;
  t2649 = t2534 + t2647;
  t2666 = -0.5031510000080001*t2649;
  t2684 = t2669 + t2680;
  t2686 = -3.367757e-6*t2684;
  t2688 = t2637 + t2641 + t2666 + t2686;
  t2747 = 2.826290000000002e-7*var2[17];
  t2748 = -2.18904205e-16*t2496;
  t2752 = t2523 + t2749;
  t2753 = -0.5031510000080001*t2752;
  t2760 = t2669 + t2754;
  t2768 = -0.038575000014*t2760;
  t2776 = t2747 + t2748 + t2753 + t2768;
  t2830 = t2824 + t2749;
  t3129 = -1.*t250*t2574*t1225;
  t3146 = t2597*t3111;
  t3159 = t2613*t3120;
  t3166 = t3129 + t3146 + t3159;
  t2847 = t2834 + t2754;
  t3170 = -1.*t2701*t250*t1225;
  t3174 = t2718*t3111;
  t3189 = t2729*t3120;
  t3190 = t3170 + t3174 + t3189;
  t2851 = -6.5e-11*t2496;
  t2857 = 1. + t2851;
  t3220 = -1.*t250*t2780*t1225;
  t3222 = t2790*t3111;
  t3227 = t2800*t3120;
  t3230 = t3220 + t3222 + t3227;
  t2881 = t2876 + t2647;
  t2895 = -1.000000000049*t2496;
  t2896 = 1. + t2895;
  t2898 = t2834 + t2680;
  t2931 = -1.000000000016*t2496;
  t2940 = 1. + t2931;
  t2953 = t2876 + t2524;
  t2969 = t2824 + t2525;
  t3353 = -1.*t2141*t1662;
  t3355 = t2135*t1708;
  t3369 = t3353 + t3355;
  t3380 = t2135*t1662;
  t3403 = t2141*t1708;
  t3411 = t3380 + t3403;
  t3416 = t1239*t250*t2574;
  t3432 = t2597*t3369;
  t3437 = t2613*t3411;
  t3442 = t3416 + t3432 + t3437;
  t3450 = t2701*t1239*t250;
  t3452 = t2718*t3369;
  t3465 = t2729*t3411;
  t3466 = t3450 + t3452 + t3465;
  t3472 = t1239*t250*t2780;
  t3473 = t2790*t3369;
  t3474 = t2800*t3411;
  t3479 = t3472 + t3473 + t3474;
  t1676 = t342*t1662;
  t1718 = t400*t1708;
  p_output1[0]=t250*t261*t342 + t386*t387 - 1.*t250*t400*t416 + t463*t471 + t494*t550 + t645*t714 + t759*t808 + t873*t966 - 0.14871*(4.e-6*t636*t714 + 4.e-6*t622*t808 + t1055*t966) - 0.041195*(-1.*t636*t714 + t590*t808 + 4.e-6*t622*t966) + 0.803147*(t1105*t714 + t636*t808 - 4.e-6*t636*t966) + var2[0] - 1.*t248*var3[0] - 5.*t114*t232*t81*var3[10] - 10.*t204*t213*t224*var3[20] - 10.*t146*t150*t168*var3[30] - 5.*t105*t141*t98*var3[40] - 1.*t39*t87*var3[50];
  p_output1[1]=t1246*t342 - 1.*t1225*t250*t386 + t1264*t400 + t1287*t463 + t1304*t494 - 0.041195*(t1381*t590 + 4.e-6*t1419*t622 - 1.*t1349*t636) - 0.14871*(t1055*t1419 + 4.e-6*t1381*t622 + 4.e-6*t1349*t636) + 0.803147*(t1105*t1349 + t1381*t636 - 4.e-6*t1419*t636) + t1349*t645 + t1381*t759 + t1419*t873 + var2[1] - 1.*t248*var3[1] - 5.*t114*t232*t81*var3[11] - 10.*t204*t213*t224*var3[21] - 10.*t146*t150*t168*var3[31] - 5.*t105*t141*t98*var3[41] - 1.*t39*t87*var3[51];
  p_output1[2]=t1676 + t1718 + t1239*t250*t386 + t1740*t463 + t1763*t494 - 0.041195*(t1846*t590 + 4.e-6*t1893*t622 - 1.*t1802*t636) - 0.14871*(t1055*t1893 + 4.e-6*t1846*t622 + 4.e-6*t1802*t636) + 0.803147*(t1105*t1802 + t1846*t636 - 4.e-6*t1893*t636) + t1802*t645 + t1846*t759 + t1893*t873 + var2[2] - 1.*t248*var3[2] - 5.*t114*t232*t81*var3[12] - 10.*t204*t213*t224*var3[22] - 10.*t146*t150*t168*var3[32] - 5.*t105*t141*t98*var3[42] - 1.*t39*t87*var3[52];
  p_output1[3]=t2331*t2367 + t2438*t2463 + t2148*t250*t261 + t2563*t2628 + t2688*t2739 + t2776*t2814 - 0.148715*(t2628*t2830 + t2739*t2847 + t2814*t2857) - 0.038576*(t2628*t2881 + t2739*t2896 + t2814*t2898) - 0.80315*(t2628*t2940 + t2739*t2953 + t2814*t2969) + t2253*t387 - 1.*t2281*t250*t416 + var2[0] - 1.*t248*var3[3] - 5.*t114*t232*t81*var3[13] - 10.*t204*t213*t224*var3[23] - 10.*t146*t150*t168*var3[33] - 5.*t105*t141*t98*var3[43] - 1.*t39*t87*var3[53];
  p_output1[4]=t1246*t2148 + t1264*t2281 - 1.*t1225*t2253*t250 + t2331*t3111 + t2438*t3120 + t2563*t3166 + t2688*t3190 + t2776*t3230 - 0.148715*(t2830*t3166 + t2847*t3190 + t2857*t3230) - 0.038576*(t2881*t3166 + t2896*t3190 + t2898*t3230) - 0.80315*(t2940*t3166 + t2953*t3190 + t2969*t3230) + var2[1] - 1.*t248*var3[4] - 5.*t114*t232*t81*var3[14] - 10.*t204*t213*t224*var3[24] - 10.*t146*t150*t168*var3[34] - 5.*t105*t141*t98*var3[44] - 1.*t39*t87*var3[54];
  p_output1[5]=t1662*t2148 + t1708*t2281 + t1239*t2253*t250 + t2331*t3369 + t2438*t3411 + t2563*t3442 + t2688*t3466 + t2776*t3479 - 0.148715*(t2830*t3442 + t2847*t3466 + t2857*t3479) - 0.038576*(t2881*t3442 + t2896*t3466 + t2898*t3479) - 0.80315*(t2940*t3442 + t2953*t3466 + t2969*t3479) + var2[2] - 1.*t248*var3[5] - 5.*t114*t232*t81*var3[15] - 10.*t204*t213*t224*var3[25] - 10.*t146*t150*t168*var3[35] - 5.*t105*t141*t98*var3[45] - 1.*t39*t87*var3[55];
  p_output1[6]=0.00183*t1246 - 0.002264*t1264 + 0.024028*t1225*t250 + var2[1] - 1.*t248*var3[6] - 5.*t114*t232*t81*var3[16] - 10.*t204*t213*t224*var3[26] - 10.*t146*t150*t168*var3[36] - 5.*t105*t141*t98*var3[46] - 1.*t39*t87*var3[56];
  p_output1[7]=0.00183*t1662 - 0.002264*t1708 - 0.024028*t1239*t250 + var2[2] - 1.*t248*var3[7] - 5.*t114*t232*t81*var3[17] - 10.*t204*t213*t224*var3[27] - 10.*t146*t150*t168*var3[37] - 5.*t105*t141*t98*var3[47] - 1.*t39*t87*var3[57];
  p_output1[8]=ArcTan(t250*t261,t1246) - 1.*t248*var3[8] - 5.*t114*t232*t81*var3[18] - 10.*t204*t213*t224*var3[28] - 10.*t146*t150*t168*var3[38] - 5.*t105*t141*t98*var3[48] - 1.*t39*t87*var3[58];
  p_output1[9]=t1676 + t1718 - 0.15121*t1740 + 0.15121*t1763 - 1.*t1662*t2148 - 1.*t1708*t2281 + 0.15121*t3369 + 0.15121*t3411 - 1.*t248*var3[9] - 5.*t114*t232*t81*var3[19] - 10.*t204*t213*t224*var3[29] - 10.*t146*t150*t168*var3[39] - 5.*t105*t141*t98*var3[49] - 1.*t39*t87*var3[59];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
    ( !(mrows == 60 && ncols == 1) && 
      !(mrows == 1 && ncols == 60))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 10, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "y_position_ParallelStance2.hh"

namespace ParallelStance2
{

void y_position_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
