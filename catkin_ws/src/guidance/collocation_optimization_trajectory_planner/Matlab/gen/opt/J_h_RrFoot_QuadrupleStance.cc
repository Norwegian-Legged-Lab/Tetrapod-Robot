/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 17:52:10 GMT+01:00
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
  double t93;
  double t94;
  double t140;
  double t173;
  double t314;
  double t339;
  double t345;
  double t357;
  double t383;
  double t424;
  double t202;
  double t218;
  double t313;
  double t468;
  double t503;
  double t158;
  double t753;
  double t792;
  double t832;
  double t864;
  double t16;
  double t649;
  double t587;
  double t615;
  double t631;
  double t683;
  double t705;
  double t728;
  double t902;
  double t231;
  double t962;
  double t174;
  double t854;
  double t1140;
  double t1151;
  double t1196;
  double t541;
  double t982;
  double t518;
  double t1230;
  double t975;
  double t980;
  double t990;
  double t1020;
  double t1039;
  double t1049;
  double t1062;
  double t1067;
  double t1245;
  double t1182;
  double t1185;
  double t1191;
  double t1210;
  double t1212;
  double t1215;
  double t1217;
  double t1218;
  double t1256;
  double t1257;
  double t1258;
  double t1277;
  double t1281;
  double t1288;
  double t1289;
  double t1291;
  double t1104;
  double t1373;
  double t1154;
  double t1413;
  double t1309;
  double t874;
  double t451;
  double t452;
  double t391;
  double t414;
  double t640;
  double t641;
  double t651;
  double t652;
  double t665;
  double t668;
  double t671;
  double t487;
  double t490;
  double t533;
  double t537;
  double t546;
  double t557;
  double t573;
  double t1225;
  double t1229;
  double t1235;
  double t1244;
  double t1246;
  double t1247;
  double t1252;
  double t1501;
  double t1502;
  double t1504;
  double t1518;
  double t1519;
  double t1522;
  double t1079;
  double t1098;
  double t1109;
  double t1117;
  double t1160;
  double t1169;
  double t1173;
  double t743;
  double t848;
  double t898;
  double t901;
  double t909;
  double t940;
  double t951;
  double t1470;
  double t1530;
  double t1535;
  double t1537;
  double t1468;
  double t1546;
  double t1551;
  double t1555;
  double t1462;
  double t1463;
  double t1558;
  double t1569;
  double t1571;
  double t1446;
  double t1428;
  double t1432;
  double t1422;
  double t1384;
  double t1391;
  double t1378;
  double t1314;
  double t1507;
  double t1525;
  double t1540;
  double t1556;
  double t1579;
  double t1587;
  double t1598;
  double t1607;
  double t1608;
  double t1610;
  double t1612;
  double t1620;
  double t1627;
  double t1631;
  double t1634;
  double t1637;
  double t1660;
  double t1669;
  double t1670;
  double t1689;
  double t1738;
  double t1771;
  double t1782;
  double t1846;
  double t1849;
  double t1851;
  double t1721;
  double t1888;
  double t1831;
  double t1853;
  double t1857;
  double t1866;
  double t1867;
  double t1873;
  double t1877;
  double t1885;
  double t1886;
  double t1887;
  double t1891;
  double t1895;
  double t1897;
  double t1901;
  double t1904;
  double t1905;
  double t1906;
  double t1907;
  double t1910;
  double t1984;
  double t2028;
  double t2032;
  double t2033;
  double t2034;
  double t2102;
  double t2104;
  double t2105;
  double t2107;
  double t2007;
  double t2140;
  double t2144;
  double t2151;
  double t2153;
  double t2173;
  double t2053;
  double t2123;
  double t2113;
  double t74;
  double t157;
  double t181;
  double t201;
  double t241;
  double t257;
  double t260;
  double t2250;
  double t2258;
  double t2257;
  double t2264;
  double t2267;
  double t2277;
  double t2278;
  double t2283;
  double t2287;
  double t2290;
  double t2292;
  double t2300;
  double t2306;
  double t2307;
  double t2311;
  double t2312;
  double t2313;
  double t2314;
  double t2316;
  double t2318;
  double t2323;
  double t2326;
  double t2332;
  double t2333;
  double t2335;
  double t2336;
  double t2408;
  double t2410;
  double t2413;
  double t2419;
  double t2422;
  double t2423;
  double t2427;
  double t2428;
  double t2431;
  double t2434;
  double t2439;
  double t2441;
  double t2442;
  double t2450;
  double t2453;
  double t2454;
  double t2455;
  double t2460;
  double t2549;
  double t2551;
  double t2553;
  double t2563;
  double t2566;
  double t2573;
  double t2575;
  double t2576;
  double t2586;
  double t2596;
  double t2598;
  double t2600;
  double t2605;
  double t2611;
  double t2613;
  double t2622;
  double t2623;
  double t2625;
  double t2634;
  double t2638;
  double t2639;
  double t1693;
  double t1694;
  double t1706;
  double t1714;
  double t2697;
  double t2706;
  double t2707;
  double t2712;
  double t2719;
  double t2725;
  double t2727;
  double t2733;
  double t2734;
  double t2736;
  double t2739;
  double t2740;
  double t2744;
  double t2752;
  double t2753;
  double t2757;
  double t1726;
  double t1730;
  double t1740;
  double t1747;
  double t1748;
  double t1750;
  double t1774;
  double t1778;
  double t1804;
  double t1814;
  double t1820;
  double t1821;
  double t1827;
  double t1829;
  double t1832;
  double t1835;
  double t1837;
  double t1838;
  double t2813;
  double t2814;
  double t2817;
  double t2826;
  double t2830;
  double t2839;
  double t2840;
  double t2859;
  double t2860;
  double t2866;
  double t2872;
  double t2880;
  double t2884;
  double t2886;
  double t2887;
  double t1987;
  double t2004;
  double t2011;
  double t2018;
  double t2021;
  double t2023;
  double t2061;
  double t2066;
  double t2072;
  double t2085;
  double t2092;
  double t2101;
  double t2114;
  double t2117;
  double t2129;
  double t2132;
  double t2138;
  double t2139;
  double t2939;
  double t2943;
  double t2944;
  double t2950;
  double t2191;
  double t2954;
  double t2955;
  double t2956;
  double t2958;
  double t2204;
  double t2962;
  double t2966;
  double t2969;
  double t2970;
  double t2213;
  double t2223;
  double t2233;
  double t2240;
  double t3119;
  double t3125;
  double t3126;
  double t3132;
  double t3136;
  double t3143;
  double t3146;
  double t3149;
  double t3154;
  double t3156;
  double t3158;
  double t3161;
  double t3162;
  double t3164;
  double t3172;
  double t3175;
  double t3177;
  double t3180;
  double t3230;
  double t3232;
  double t3233;
  double t3239;
  double t3240;
  double t3243;
  double t3250;
  double t3251;
  double t3259;
  double t3266;
  double t3267;
  double t3272;
  double t3273;
  double t3283;
  double t3294;
  double t3299;
  double t3301;
  double t3357;
  double t3360;
  double t3361;
  double t3364;
  double t3368;
  double t3374;
  double t3378;
  double t3382;
  double t3384;
  double t3387;
  double t3392;
  double t3393;
  double t3394;
  double t3400;
  double t3401;
  double t3402;
  double t3457;
  double t3458;
  double t3460;
  double t3465;
  double t3467;
  double t3471;
  double t3472;
  double t3481;
  double t3484;
  double t3486;
  double t3487;
  double t3490;
  double t3491;
  double t3499;
  double t3500;
  double t3558;
  double t3561;
  double t3564;
  double t3565;
  double t3571;
  double t3575;
  double t3576;
  double t3577;
  double t3583;
  double t3584;
  double t3586;
  double t3591;
  t93 = Cos(var1[16]);
  t94 = -1.*t93;
  t140 = 1. + t94;
  t173 = Sin(var1[16]);
  t314 = Cos(var1[15]);
  t339 = -1.*t314;
  t345 = 1. + t339;
  t357 = -0.15121*t345;
  t383 = Sin(var1[15]);
  t424 = Sin(var1[4]);
  t202 = -1. + t93;
  t218 = 4.e-6*t202;
  t313 = Cos(var1[5]);
  t468 = Sin(var1[5]);
  t503 = 7.e-6*t140;
  t158 = 2.8e-11*t140;
  t753 = Cos(var1[17]);
  t792 = -1.*t753;
  t832 = 1. + t792;
  t864 = Sin(var1[17]);
  t16 = Cos(var1[4]);
  t649 = -4.e-6*t173;
  t587 = t313*t383*t424;
  t615 = t314*t424*t468;
  t631 = t587 + t615;
  t683 = -1.*t314*t313*t424;
  t705 = t383*t424*t468;
  t728 = t683 + t705;
  t902 = 2.8e-11*t832;
  t231 = -7.e-6*t173;
  t962 = -2.8e-11*t140;
  t174 = -1.*t173;
  t854 = 7.e-6*t832;
  t1140 = -1. + t753;
  t1151 = 4.e-6*t1140;
  t1196 = 4.e-6*t140;
  t541 = 7.e-6*t173;
  t982 = -7.e-6*t140;
  t518 = 4.e-6*t173;
  t1230 = 4.e-6*t864;
  t975 = t962 + t173;
  t980 = t16*t975;
  t990 = t982 + t649;
  t1020 = t990*t631;
  t1039 = -1.000000000016*t140;
  t1049 = 1. + t1039;
  t1062 = t1049*t728;
  t1067 = t980 + t1020 + t1062;
  t1245 = 7.e-6*t864;
  t1182 = -1.000000000049*t140;
  t1185 = 1. + t1182;
  t1191 = t1185*t16;
  t1210 = t1196 + t231;
  t1212 = t1210*t631;
  t1215 = t962 + t174;
  t1217 = t1215*t728;
  t1218 = t1191 + t1212 + t1217;
  t1256 = t1196 + t541;
  t1257 = t16*t1256;
  t1258 = -6.5e-11*t140;
  t1277 = 1. + t1258;
  t1281 = t1277*t631;
  t1288 = t982 + t518;
  t1289 = t1288*t728;
  t1291 = t1257 + t1281 + t1289;
  t1104 = -1.*t864;
  t1373 = 4.e-6*t832;
  t1154 = -7.e-6*t864;
  t1413 = -2.8e-11*t832;
  t1309 = -7.e-6*t832;
  t874 = -4.e-6*t864;
  t451 = 0.15121*t383;
  t452 = t357 + t451;
  t391 = -0.15121*t383;
  t414 = t357 + t391;
  t640 = -2.7726089999999997e-12*var1[16];
  t641 = -0.2812110000084994*t140;
  t651 = t503 + t649;
  t652 = -1.8134809999999998e-6*t651;
  t665 = t158 + t173;
  t668 = -0.038749000006999997*t665;
  t671 = t640 + t641 + t652 + t668;
  t487 = 3.9608699999999997e-7*var1[16];
  t490 = -1.1787626499999999e-16*t140;
  t533 = t503 + t518;
  t537 = -0.281211000004*t533;
  t546 = t218 + t541;
  t557 = -0.038749000006999997*t546;
  t573 = t487 + t490 + t537 + t557;
  t1225 = 2.826290000000002e-7*var1[17];
  t1229 = -2.18904205e-16*t832;
  t1235 = t854 + t1230;
  t1244 = -0.5031510000080001*t1235;
  t1246 = t1151 + t1245;
  t1247 = -0.038575000014*t1246;
  t1252 = t1225 + t1229 + t1244 + t1247;
  t1501 = -1.*t16*t313*t383;
  t1502 = -1.*t314*t16*t468;
  t1504 = t1501 + t1502;
  t1518 = -1.*t314*t16*t313;
  t1519 = t16*t383*t468;
  t1522 = t1518 + t1519;
  t1079 = 1.1305160000000008e-12*var1[17];
  t1098 = -0.03857500001589017*t832;
  t1109 = t902 + t1104;
  t1117 = -0.5031510000080001*t1109;
  t1160 = t1151 + t1154;
  t1169 = -3.367757e-6*t1160;
  t1173 = t1079 + t1098 + t1117 + t1169;
  t743 = -1.9784030000000015e-12*var1[17];
  t848 = -0.5031510000160505*t832;
  t898 = t854 + t874;
  t901 = -3.367757e-6*t898;
  t909 = t902 + t864;
  t940 = -0.038575000014*t909;
  t951 = t743 + t848 + t901 + t940;
  t1470 = t1309 + t874;
  t1530 = t1288*t1504;
  t1535 = t1277*t1522;
  t1537 = t1530 + t1535;
  t1468 = t1413 + t864;
  t1546 = t1215*t1504;
  t1551 = t1210*t1522;
  t1555 = t1546 + t1551;
  t1462 = -1.000000000016*t832;
  t1463 = 1. + t1462;
  t1558 = t1049*t1504;
  t1569 = t990*t1522;
  t1571 = t1558 + t1569;
  t1446 = t1373 + t1154;
  t1428 = -1.000000000049*t832;
  t1432 = 1. + t1428;
  t1422 = t1413 + t1104;
  t1384 = -6.5e-11*t832;
  t1391 = 1. + t1384;
  t1378 = t1373 + t1245;
  t1314 = t1309 + t1230;
  t1507 = t671*t1504;
  t1525 = t573*t1522;
  t1540 = t1252*t1537;
  t1556 = t1173*t1555;
  t1579 = t951*t1571;
  t1587 = t1470*t1537;
  t1598 = t1468*t1555;
  t1607 = t1463*t1571;
  t1608 = t1587 + t1598 + t1607;
  t1610 = -0.80315*t1608;
  t1612 = t1446*t1537;
  t1620 = t1432*t1555;
  t1627 = t1422*t1571;
  t1631 = t1612 + t1620 + t1627;
  t1634 = -0.038576*t1631;
  t1637 = t1391*t1537;
  t1660 = t1378*t1555;
  t1669 = t1314*t1571;
  t1670 = t1637 + t1660 + t1669;
  t1689 = -0.148715*t1670;
  t1738 = 2.8e-11*t173;
  t1771 = 7.e-6*t93;
  t1782 = 4.e-6*t93;
  t1846 = t314*t16*t313;
  t1849 = -1.*t16*t383*t468;
  t1851 = t1846 + t1849;
  t1721 = -7.e-6*t93;
  t1888 = -2.8e-11*t173;
  t1831 = -4.e-6*t93;
  t1853 = t1771 + t518;
  t1857 = t1853*t424;
  t1866 = -6.5e-11*t173*t1504;
  t1867 = t1782 + t231;
  t1873 = t1867*t1851;
  t1877 = t1857 + t1866 + t1873;
  t1885 = -1.000000000049*t173*t424;
  t1886 = t1721 + t518;
  t1887 = t1886*t1504;
  t1891 = t94 + t1888;
  t1895 = t1891*t1851;
  t1897 = t1885 + t1887 + t1895;
  t1901 = t93 + t1888;
  t1904 = t1901*t424;
  t1905 = t1831 + t231;
  t1906 = t1905*t1504;
  t1907 = -1.000000000016*t173*t1851;
  t1910 = t1904 + t1906 + t1907;
  t1984 = 2.8e-11*t864;
  t2028 = t975*t424;
  t2032 = t990*t1504;
  t2033 = t1049*t1851;
  t2034 = t2028 + t2032 + t2033;
  t2102 = t1185*t424;
  t2104 = t1210*t1504;
  t2105 = t1215*t1851;
  t2107 = t2102 + t2104 + t2105;
  t2007 = -4.e-6*t753;
  t2140 = t1256*t424;
  t2144 = t1277*t1504;
  t2151 = t1288*t1851;
  t2153 = t2140 + t2144 + t2151;
  t2173 = -2.8e-11*t864;
  t2053 = -7.e-6*t753;
  t2123 = 4.e-6*t753;
  t2113 = 7.e-6*t753;
  t74 = 1.5843479999999999e-12*var1[16];
  t157 = -0.03874900000889869*t140;
  t181 = t158 + t174;
  t201 = -0.281211000004*t181;
  t241 = t218 + t231;
  t257 = -1.8134809999999998e-6*t241;
  t260 = t74 + t157 + t201 + t257;
  t2250 = Cos(var1[3]);
  t2258 = Sin(var1[3]);
  t2257 = t2250*t313*t424;
  t2264 = -1.*t2258*t468;
  t2267 = t2257 + t2264;
  t2277 = -1.*t313*t2258;
  t2278 = -1.*t2250*t424*t468;
  t2283 = t2277 + t2278;
  t2287 = -1.*t383*t2267;
  t2290 = t314*t2283;
  t2292 = t2287 + t2290;
  t2300 = t314*t2267;
  t2306 = t383*t2283;
  t2307 = t2300 + t2306;
  t2311 = -1.*t2250*t16*t975;
  t2312 = t990*t2292;
  t2313 = t1049*t2307;
  t2314 = t2311 + t2312 + t2313;
  t2316 = -1.*t1185*t2250*t16;
  t2318 = t1210*t2292;
  t2323 = t1215*t2307;
  t2326 = t2316 + t2318 + t2323;
  t2332 = -1.*t2250*t16*t1256;
  t2333 = t1277*t2292;
  t2335 = t1288*t2307;
  t2336 = t2332 + t2333 + t2335;
  t2408 = -1.*t16*t313*t383*t2258;
  t2410 = -1.*t314*t16*t2258*t468;
  t2413 = t2408 + t2410;
  t2419 = t314*t16*t313*t2258;
  t2422 = -1.*t16*t383*t2258*t468;
  t2423 = t2419 + t2422;
  t2427 = t975*t2258*t424;
  t2428 = t990*t2413;
  t2431 = t1049*t2423;
  t2434 = t2427 + t2428 + t2431;
  t2439 = t1185*t2258*t424;
  t2441 = t1210*t2413;
  t2442 = t1215*t2423;
  t2450 = t2439 + t2441 + t2442;
  t2453 = t1256*t2258*t424;
  t2454 = t1277*t2413;
  t2455 = t1288*t2423;
  t2460 = t2453 + t2454 + t2455;
  t2549 = -1.*t313*t2258*t424;
  t2551 = -1.*t2250*t468;
  t2553 = t2549 + t2551;
  t2563 = t2250*t313;
  t2566 = -1.*t2258*t424*t468;
  t2573 = t2563 + t2566;
  t2575 = t383*t2553;
  t2576 = t314*t2573;
  t2586 = t2575 + t2576;
  t2596 = t314*t2553;
  t2598 = -1.*t383*t2573;
  t2600 = t2596 + t2598;
  t2605 = t1288*t2586;
  t2611 = t1277*t2600;
  t2613 = t2605 + t2611;
  t2622 = t1215*t2586;
  t2623 = t1210*t2600;
  t2625 = t2622 + t2623;
  t2634 = t1049*t2586;
  t2638 = t990*t2600;
  t2639 = t2634 + t2638;
  t1693 = -0.15121*t314;
  t1694 = t1693 + t391;
  t1706 = 0.15121*t314;
  t1714 = t1706 + t391;
  t2697 = t313*t2258*t424;
  t2706 = t2250*t468;
  t2707 = t2697 + t2706;
  t2712 = -1.*t383*t2707;
  t2719 = t2712 + t2576;
  t2725 = -1.*t314*t2707;
  t2727 = t2725 + t2598;
  t2733 = t1288*t2719;
  t2734 = t1277*t2727;
  t2736 = t2733 + t2734;
  t2739 = t1215*t2719;
  t2740 = t1210*t2727;
  t2744 = t2739 + t2740;
  t2752 = t1049*t2719;
  t2753 = t990*t2727;
  t2757 = t2752 + t2753;
  t1726 = t1721 + t649;
  t1730 = -1.8134809999999998e-6*t1726;
  t1740 = t94 + t1738;
  t1747 = -0.281211000004*t1740;
  t1748 = -0.03874900000889869*t173;
  t1750 = 1.5843479999999999e-12 + t1730 + t1747 + t1748;
  t1774 = t1771 + t649;
  t1778 = -0.038749000006999997*t1774;
  t1804 = t1782 + t541;
  t1814 = -0.281211000004*t1804;
  t1820 = -1.1787626499999999e-16*t173;
  t1821 = 3.9608699999999997e-7 + t1778 + t1814 + t1820;
  t1827 = t93 + t1738;
  t1829 = -0.038749000006999997*t1827;
  t1832 = t1831 + t541;
  t1835 = -1.8134809999999998e-6*t1832;
  t1837 = -0.2812110000084994*t173;
  t1838 = -2.7726089999999997e-12 + t1829 + t1835 + t1837;
  t2813 = t314*t2707;
  t2814 = t383*t2573;
  t2817 = t2813 + t2814;
  t2826 = -1.*t16*t1853*t2258;
  t2830 = -6.5e-11*t173*t2719;
  t2839 = t1867*t2817;
  t2840 = t2826 + t2830 + t2839;
  t2859 = 1.000000000049*t16*t173*t2258;
  t2860 = t1886*t2719;
  t2866 = t1891*t2817;
  t2872 = t2859 + t2860 + t2866;
  t2880 = -1.*t16*t1901*t2258;
  t2884 = t1905*t2719;
  t2886 = -1.000000000016*t173*t2817;
  t2887 = t2880 + t2884 + t2886;
  t1987 = t753 + t1984;
  t2004 = -0.038575000014*t1987;
  t2011 = t2007 + t1245;
  t2018 = -3.367757e-6*t2011;
  t2021 = -0.5031510000160505*t864;
  t2023 = -1.9784030000000015e-12 + t2004 + t2018 + t2021;
  t2061 = t2053 + t874;
  t2066 = -3.367757e-6*t2061;
  t2072 = t792 + t1984;
  t2085 = -0.5031510000080001*t2072;
  t2092 = -0.03857500001589017*t864;
  t2101 = 1.1305160000000008e-12 + t2066 + t2085 + t2092;
  t2114 = t2113 + t874;
  t2117 = -0.038575000014*t2114;
  t2129 = t2123 + t1245;
  t2132 = -0.5031510000080001*t2129;
  t2138 = -2.18904205e-16*t864;
  t2139 = 2.826290000000002e-7 + t2117 + t2132 + t2138;
  t2939 = -1.*t16*t975*t2258;
  t2943 = t990*t2719;
  t2944 = t1049*t2817;
  t2950 = t2939 + t2943 + t2944;
  t2191 = t753 + t2173;
  t2954 = -1.*t1185*t16*t2258;
  t2955 = t1210*t2719;
  t2956 = t1215*t2817;
  t2958 = t2954 + t2955 + t2956;
  t2204 = t2007 + t1154;
  t2962 = -1.*t16*t1256*t2258;
  t2966 = t1277*t2719;
  t2969 = t1288*t2817;
  t2970 = t2962 + t2966 + t2969;
  t2213 = t792 + t2173;
  t2223 = t2053 + t1230;
  t2233 = t2123 + t1154;
  t2240 = t2113 + t1230;
  t3119 = t2250*t16*t313*t383;
  t3125 = t314*t2250*t16*t468;
  t3126 = t3119 + t3125;
  t3132 = -1.*t314*t2250*t16*t313;
  t3136 = t2250*t16*t383*t468;
  t3143 = t3132 + t3136;
  t3146 = -1.*t2250*t975*t424;
  t3149 = t990*t3126;
  t3154 = t1049*t3143;
  t3156 = t3146 + t3149 + t3154;
  t3158 = -1.*t1185*t2250*t424;
  t3161 = t1210*t3126;
  t3162 = t1215*t3143;
  t3164 = t3158 + t3161 + t3162;
  t3172 = -1.*t2250*t1256*t424;
  t3175 = t1277*t3126;
  t3177 = t1288*t3143;
  t3180 = t3172 + t3175 + t3177;
  t3230 = t313*t2258;
  t3232 = t2250*t424*t468;
  t3233 = t3230 + t3232;
  t3239 = t383*t2267;
  t3240 = t314*t3233;
  t3243 = t3239 + t3240;
  t3250 = -1.*t383*t3233;
  t3251 = t2300 + t3250;
  t3259 = t1288*t3243;
  t3266 = t1277*t3251;
  t3267 = t3259 + t3266;
  t3272 = t1215*t3243;
  t3273 = t1210*t3251;
  t3283 = t3272 + t3273;
  t3294 = t1049*t3243;
  t3299 = t990*t3251;
  t3301 = t3294 + t3299;
  t3357 = -1.*t2250*t313*t424;
  t3360 = t2258*t468;
  t3361 = t3357 + t3360;
  t3364 = -1.*t383*t3361;
  t3368 = t3364 + t3240;
  t3374 = -1.*t314*t3361;
  t3378 = t3374 + t3250;
  t3382 = t1288*t3368;
  t3384 = t1277*t3378;
  t3387 = t3382 + t3384;
  t3392 = t1215*t3368;
  t3393 = t1210*t3378;
  t3394 = t3392 + t3393;
  t3400 = t1049*t3368;
  t3401 = t990*t3378;
  t3402 = t3400 + t3401;
  t3457 = t314*t3361;
  t3458 = t383*t3233;
  t3460 = t3457 + t3458;
  t3465 = t2250*t16*t1853;
  t3467 = -6.5e-11*t173*t3368;
  t3471 = t1867*t3460;
  t3472 = t3465 + t3467 + t3471;
  t3481 = -1.000000000049*t2250*t16*t173;
  t3484 = t1886*t3368;
  t3486 = t1891*t3460;
  t3487 = t3481 + t3484 + t3486;
  t3490 = t2250*t16*t1901;
  t3491 = t1905*t3368;
  t3499 = -1.000000000016*t173*t3460;
  t3500 = t3490 + t3491 + t3499;
  t3558 = t2250*t16*t975;
  t3561 = t990*t3368;
  t3564 = t1049*t3460;
  t3565 = t3558 + t3561 + t3564;
  t3571 = t1185*t2250*t16;
  t3575 = t1210*t3368;
  t3576 = t1215*t3460;
  t3577 = t3571 + t3575 + t3576;
  t3583 = t2250*t16*t1256;
  t3584 = t1277*t3368;
  t3586 = t1288*t3460;
  t3591 = t3583 + t3584 + t3586;
  p_output1[0]=1.;
  p_output1[1]=t1173*t1218 + t1252*t1291 - 0.148715*(t1067*t1314 + t1218*t1378 + t1291*t1391) - 0.038576*(t1067*t1422 + t1218*t1432 + t1291*t1446) - 0.80315*(t1067*t1463 + t1218*t1468 + t1291*t1470) + t16*t260 - 1.*t313*t414*t424 + t424*t452*t468 + t573*t631 + t671*t728 + t1067*t951;
  p_output1[2]=t1507 + t1525 + t1540 + t1556 + t1579 + t1610 + t1634 + t1689 - 1.*t16*t313*t452 - 1.*t16*t414*t468;
  p_output1[3]=t1507 + t1525 + t1540 + t1556 + t1579 + t1610 + t1634 + t1689 + t16*t1694*t313 - 1.*t16*t1714*t468;
  p_output1[4]=t1504*t1821 + t1838*t1851 + t1252*t1877 + t1173*t1897 - 0.148715*(t1391*t1877 + t1378*t1897 + t1314*t1910) - 0.038576*(t1446*t1877 + t1432*t1897 + t1422*t1910) - 0.80315*(t1470*t1877 + t1468*t1897 + t1463*t1910) + t1750*t424 + t1910*t951;
  p_output1[5]=t2023*t2034 + t2101*t2107 + t2139*t2153 - 0.80315*(t2107*t2191 + t2153*t2204 - 1.000000000016*t2034*t864) - 0.038576*(t2034*t2213 + t2153*t2223 - 1.000000000049*t2107*t864) - 0.148715*(t2034*t2233 + t2107*t2240 - 6.5e-11*t2153*t864);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t1173*t2326 + t1252*t2336 - 0.148715*(t1314*t2314 + t1378*t2326 + t1391*t2336) - 0.038576*(t1422*t2314 + t1432*t2326 + t1446*t2336) - 0.80315*(t1463*t2314 + t1468*t2326 + t1470*t2336) - 1.*t16*t2250*t260 + t2267*t414 + t2283*t452 + t2292*t573 + t2307*t671 + t2314*t951;
  p_output1[9]=t1173*t2450 + t1252*t2460 - 0.148715*(t1314*t2434 + t1378*t2450 + t1391*t2460) - 0.038576*(t1422*t2434 + t1432*t2450 + t1446*t2460) - 0.80315*(t1463*t2434 + t1468*t2450 + t1470*t2460) + t16*t2258*t313*t414 + t2258*t260*t424 - 1.*t16*t2258*t452*t468 + t2413*t573 + t2423*t671 + t2434*t951;
  p_output1[10]=t1252*t2613 + t1173*t2625 - 0.148715*(t1391*t2613 + t1378*t2625 + t1314*t2639) - 0.038576*(t1446*t2613 + t1432*t2625 + t1422*t2639) - 0.80315*(t1470*t2613 + t1468*t2625 + t1463*t2639) + t2573*t414 + t2553*t452 + t2600*t573 + t2586*t671 + t2639*t951;
  p_output1[11]=t1714*t2573 + t1694*t2707 + t1252*t2736 + t1173*t2744 - 0.148715*(t1391*t2736 + t1378*t2744 + t1314*t2757) - 0.038576*(t1446*t2736 + t1432*t2744 + t1422*t2757) - 0.80315*(t1470*t2736 + t1468*t2744 + t1463*t2757) + t2727*t573 + t2719*t671 + t2757*t951;
  p_output1[12]=-1.*t16*t1750*t2258 + t1821*t2719 + t1838*t2817 + t1252*t2840 + t1173*t2872 - 0.148715*(t1391*t2840 + t1378*t2872 + t1314*t2887) - 0.038576*(t1446*t2840 + t1432*t2872 + t1422*t2887) - 0.80315*(t1470*t2840 + t1468*t2872 + t1463*t2887) + t2887*t951;
  p_output1[13]=t2023*t2950 + t2101*t2958 + t2139*t2970 - 0.80315*(t2191*t2958 + t2204*t2970 - 1.000000000016*t2950*t864) - 0.038576*(t2213*t2950 + t2223*t2970 - 1.000000000049*t2958*t864) - 0.148715*(t2233*t2950 + t2240*t2958 - 6.5e-11*t2970*t864);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-1.*t16*t2258*t260 + t1173*t2958 + t1252*t2970 - 0.148715*(t1314*t2950 + t1378*t2958 + t1391*t2970) - 0.038576*(t1422*t2950 + t1432*t2958 + t1446*t2970) - 0.80315*(t1463*t2950 + t1468*t2958 + t1470*t2970) + t2707*t414 + t2573*t452 + t2719*t573 + t2817*t671 + t2950*t951;
  p_output1[17]=t1173*t3164 + t1252*t3180 - 0.148715*(t1314*t3156 + t1378*t3164 + t1391*t3180) - 0.038576*(t1422*t3156 + t1432*t3164 + t1446*t3180) - 0.80315*(t1463*t3156 + t1468*t3164 + t1470*t3180) - 1.*t16*t2250*t313*t414 - 1.*t2250*t260*t424 + t16*t2250*t452*t468 + t3126*t573 + t3143*t671 + t3156*t951;
  p_output1[18]=t1252*t3267 + t1173*t3283 - 0.148715*(t1391*t3267 + t1378*t3283 + t1314*t3301) - 0.038576*(t1446*t3267 + t1432*t3283 + t1422*t3301) - 0.80315*(t1470*t3267 + t1468*t3283 + t1463*t3301) + t3233*t414 + t2267*t452 + t3251*t573 + t3243*t671 + t3301*t951;
  p_output1[19]=t1714*t3233 + t1694*t3361 + t1252*t3387 + t1173*t3394 - 0.148715*(t1391*t3387 + t1378*t3394 + t1314*t3402) - 0.038576*(t1446*t3387 + t1432*t3394 + t1422*t3402) - 0.80315*(t1470*t3387 + t1468*t3394 + t1463*t3402) + t3378*t573 + t3368*t671 + t3402*t951;
  p_output1[20]=t16*t1750*t2250 + t1821*t3368 + t1838*t3460 + t1252*t3472 + t1173*t3487 - 0.148715*(t1391*t3472 + t1378*t3487 + t1314*t3500) - 0.038576*(t1446*t3472 + t1432*t3487 + t1422*t3500) - 0.80315*(t1470*t3472 + t1468*t3487 + t1463*t3500) + t3500*t951;
  p_output1[21]=t2023*t3565 + t2101*t3577 + t2139*t3591 - 0.80315*(t2191*t3577 + t2204*t3591 - 1.000000000016*t3565*t864) - 0.038576*(t2213*t3565 + t2223*t3591 - 1.000000000049*t3577*t864) - 0.148715*(t2233*t3565 + t2240*t3577 - 6.5e-11*t3591*t864);
  p_output1[22]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RrFoot_QuadrupleStance.hh"

namespace QuadrupleStance
{

void J_h_RrFoot_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
