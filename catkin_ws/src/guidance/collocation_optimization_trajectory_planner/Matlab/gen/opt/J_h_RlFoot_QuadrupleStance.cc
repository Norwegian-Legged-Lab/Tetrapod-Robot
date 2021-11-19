/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 17:52:00 GMT+01:00
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
  double t79;
  double t87;
  double t110;
  double t130;
  double t262;
  double t263;
  double t269;
  double t280;
  double t283;
  double t296;
  double t129;
  double t255;
  double t352;
  double t178;
  double t466;
  double t720;
  double t760;
  double t772;
  double t808;
  double t10;
  double t632;
  double t648;
  double t525;
  double t528;
  double t552;
  double t683;
  double t686;
  double t695;
  double t844;
  double t419;
  double t918;
  double t471;
  double t1048;
  double t805;
  double t1134;
  double t1153;
  double t151;
  double t884;
  double t895;
  double t903;
  double t920;
  double t925;
  double t933;
  double t947;
  double t956;
  double t971;
  double t1306;
  double t1170;
  double t1183;
  double t1219;
  double t1227;
  double t1243;
  double t1263;
  double t1265;
  double t1268;
  double t1358;
  double t1374;
  double t1379;
  double t1385;
  double t1403;
  double t1412;
  double t1423;
  double t1437;
  double t845;
  double t1508;
  double t823;
  double t1611;
  double t1096;
  double t1529;
  double t1556;
  double t1060;
  double t340;
  double t351;
  double t271;
  double t285;
  double t601;
  double t618;
  double t634;
  double t635;
  double t662;
  double t668;
  double t670;
  double t378;
  double t413;
  double t424;
  double t444;
  double t473;
  double t507;
  double t514;
  double t1003;
  double t1016;
  double t1069;
  double t1078;
  double t1100;
  double t1113;
  double t1132;
  double t1740;
  double t1743;
  double t1744;
  double t1746;
  double t1754;
  double t1760;
  double t707;
  double t801;
  double t830;
  double t843;
  double t853;
  double t856;
  double t860;
  double t1287;
  double t1301;
  double t1332;
  double t1334;
  double t1337;
  double t1339;
  double t1343;
  double t1557;
  double t1775;
  double t1786;
  double t1789;
  double t1514;
  double t1794;
  double t1800;
  double t1803;
  double t1570;
  double t1577;
  double t1813;
  double t1830;
  double t1833;
  double t1617;
  double t1594;
  double t1595;
  double t1633;
  double t1685;
  double t1688;
  double t1668;
  double t1707;
  double t2001;
  double t1745;
  double t1763;
  double t1793;
  double t1808;
  double t1836;
  double t1837;
  double t1840;
  double t1841;
  double t1843;
  double t1850;
  double t1860;
  double t1901;
  double t1919;
  double t1935;
  double t1940;
  double t1941;
  double t1953;
  double t1954;
  double t1965;
  double t1967;
  double t2024;
  double t2104;
  double t2107;
  double t2214;
  double t2223;
  double t2239;
  double t2043;
  double t2355;
  double t2177;
  double t2248;
  double t2253;
  double t2267;
  double t2324;
  double t2336;
  double t2340;
  double t2348;
  double t2350;
  double t2354;
  double t2360;
  double t2361;
  double t2370;
  double t2381;
  double t2386;
  double t2387;
  double t2392;
  double t2397;
  double t2415;
  double t2524;
  double t2579;
  double t2551;
  double t2556;
  double t2560;
  double t2567;
  double t2607;
  double t2628;
  double t2629;
  double t2631;
  double t2572;
  double t2686;
  double t2687;
  double t2692;
  double t2704;
  double t2533;
  double t2761;
  double t2654;
  double t75;
  double t111;
  double t170;
  double t176;
  double t190;
  double t193;
  double t208;
  double t2849;
  double t2874;
  double t2873;
  double t2879;
  double t2892;
  double t2903;
  double t2914;
  double t2918;
  double t2961;
  double t2976;
  double t2982;
  double t3003;
  double t3008;
  double t3010;
  double t3020;
  double t3022;
  double t3025;
  double t3032;
  double t3054;
  double t3075;
  double t3077;
  double t3078;
  double t3095;
  double t3106;
  double t3123;
  double t3131;
  double t3223;
  double t3226;
  double t3231;
  double t3244;
  double t3249;
  double t3257;
  double t3268;
  double t3274;
  double t3275;
  double t3277;
  double t3286;
  double t3288;
  double t3291;
  double t3293;
  double t3298;
  double t3299;
  double t3305;
  double t3310;
  double t3397;
  double t3415;
  double t3416;
  double t3418;
  double t3423;
  double t3424;
  double t3448;
  double t3449;
  double t3451;
  double t3470;
  double t3473;
  double t3479;
  double t3509;
  double t3512;
  double t3524;
  double t3547;
  double t3551;
  double t3560;
  double t3569;
  double t3570;
  double t3572;
  double t2002;
  double t2003;
  double t2006;
  double t3672;
  double t3684;
  double t3689;
  double t3721;
  double t3735;
  double t3739;
  double t3740;
  double t3744;
  double t3745;
  double t3747;
  double t3762;
  double t3765;
  double t3766;
  double t3771;
  double t3775;
  double t3777;
  double t2030;
  double t2039;
  double t2055;
  double t2063;
  double t2069;
  double t2084;
  double t2105;
  double t2106;
  double t2121;
  double t2134;
  double t2145;
  double t2156;
  double t2173;
  double t2176;
  double t2178;
  double t2189;
  double t2193;
  double t2209;
  double t3835;
  double t3840;
  double t3842;
  double t3856;
  double t3863;
  double t3873;
  double t3876;
  double t3882;
  double t3886;
  double t3887;
  double t3893;
  double t3920;
  double t3930;
  double t3934;
  double t3940;
  double t2528;
  double t2532;
  double t2534;
  double t2540;
  double t2542;
  double t2550;
  double t2576;
  double t2577;
  double t2584;
  double t2591;
  double t2595;
  double t2597;
  double t2641;
  double t2642;
  double t2662;
  double t2664;
  double t2667;
  double t2682;
  double t2709;
  double t4005;
  double t4008;
  double t4011;
  double t4013;
  double t4020;
  double t4021;
  double t4028;
  double t4032;
  double t2723;
  double t4043;
  double t4050;
  double t4051;
  double t4056;
  double t2750;
  double t2772;
  double t2799;
  double t2822;
  double t4367;
  double t4368;
  double t4375;
  double t4381;
  double t4385;
  double t4393;
  double t4402;
  double t4403;
  double t4420;
  double t4422;
  double t4437;
  double t4456;
  double t4462;
  double t4467;
  double t4472;
  double t4479;
  double t4480;
  double t4493;
  double t4618;
  double t4620;
  double t4622;
  double t4639;
  double t4644;
  double t4651;
  double t4667;
  double t4672;
  double t4690;
  double t4696;
  double t4704;
  double t4708;
  double t4714;
  double t4717;
  double t4744;
  double t4749;
  double t4763;
  double t4863;
  double t4883;
  double t4884;
  double t4915;
  double t4918;
  double t4941;
  double t4951;
  double t4962;
  double t4973;
  double t4976;
  double t4982;
  double t4996;
  double t4998;
  double t5016;
  double t5024;
  double t5028;
  double t5191;
  double t5192;
  double t5197;
  double t5209;
  double t5215;
  double t5218;
  double t5219;
  double t5224;
  double t5226;
  double t5228;
  double t5229;
  double t5236;
  double t5237;
  double t5238;
  double t5240;
  double t5372;
  double t5382;
  double t5392;
  double t5401;
  double t5415;
  double t5418;
  double t5419;
  double t5423;
  double t5438;
  double t5439;
  double t5441;
  double t5450;
  t79 = Cos(var1[13]);
  t87 = -1.*t79;
  t110 = 1. + t87;
  t130 = Sin(var1[13]);
  t262 = Cos(var1[12]);
  t263 = -1.*t262;
  t269 = 1. + t263;
  t280 = Sin(var1[12]);
  t283 = 0.15121*t280;
  t296 = Sin(var1[4]);
  t129 = 4.e-6*t110;
  t255 = Cos(var1[5]);
  t352 = Sin(var1[5]);
  t178 = -2.8e-11*t110;
  t466 = 7.e-6*t110;
  t720 = Cos(var1[14]);
  t760 = -1.*t720;
  t772 = 1. + t760;
  t808 = Sin(var1[14]);
  t10 = Cos(var1[4]);
  t632 = -1.*t130;
  t648 = -4.e-6*t130;
  t525 = t255*t280*t296;
  t528 = t262*t296*t352;
  t552 = t525 + t528;
  t683 = -1.*t262*t255*t296;
  t686 = t280*t296*t352;
  t695 = t683 + t686;
  t844 = 7.e-6*t772;
  t419 = -7.e-6*t130;
  t918 = -7.e-6*t110;
  t471 = 4.e-6*t130;
  t1048 = 4.e-6*t772;
  t805 = -2.8e-11*t772;
  t1134 = -1. + t79;
  t1153 = 4.e-6*t1134;
  t151 = 7.e-6*t130;
  t884 = 2.8e-11*t110;
  t895 = t884 + t632;
  t903 = t10*t895;
  t920 = t918 + t648;
  t925 = t920*t552;
  t933 = -1.000000000016*t110;
  t947 = 1. + t933;
  t956 = t947*t695;
  t971 = t903 + t925 + t956;
  t1306 = 7.e-6*t808;
  t1170 = t1153 + t419;
  t1183 = t10*t1170;
  t1219 = -6.5e-11*t110;
  t1227 = 1. + t1219;
  t1243 = t1227*t552;
  t1263 = t918 + t471;
  t1265 = t1263*t695;
  t1268 = t1183 + t1243 + t1265;
  t1358 = -1.000000000049*t110;
  t1374 = 1. + t1358;
  t1379 = t1374*t10;
  t1385 = t1153 + t151;
  t1403 = t1385*t552;
  t1412 = t884 + t130;
  t1423 = t1412*t695;
  t1437 = t1379 + t1403 + t1423;
  t845 = -4.e-6*t808;
  t1508 = 2.8e-11*t772;
  t823 = -1.*t808;
  t1611 = -7.e-6*t772;
  t1096 = 4.e-6*t808;
  t1529 = -1. + t720;
  t1556 = 4.e-6*t1529;
  t1060 = -7.e-6*t808;
  t340 = 0.15121*t269;
  t351 = t340 + t283;
  t271 = -0.15121*t269;
  t285 = t271 + t283;
  t601 = 1.0248489999999998e-12*var1[13];
  t618 = -0.28120900000849935*t110;
  t634 = t178 + t632;
  t635 = -0.038748999993*t634;
  t662 = t466 + t648;
  t668 = -2.123459e-6*t662;
  t670 = t601 + t618 + t635 + t668;
  t378 = -1.4640699999999997e-7*var1[13];
  t413 = -1.38024835e-16*t110;
  t424 = t129 + t419;
  t444 = -0.038748999993*t424;
  t473 = t466 + t471;
  t507 = -0.281209000004*t473;
  t514 = t378 + t413 + t444 + t507;
  t1003 = -2.598649999999999e-7*var1[14];
  t1016 = -2.3905277499999995e-16*t772;
  t1069 = t1048 + t1060;
  t1078 = -0.038922999986*t1069;
  t1100 = t844 + t1096;
  t1113 = -0.503149000008*t1100;
  t1132 = t1003 + t1016 + t1078 + t1113;
  t1740 = -1.*t10*t255*t280;
  t1743 = -1.*t262*t10*t352;
  t1744 = t1740 + t1743;
  t1746 = -1.*t262*t10*t255;
  t1754 = t10*t280*t352;
  t1760 = t1746 + t1754;
  t707 = 1.8190549999999993e-12*var1[14];
  t801 = -0.5031490000160505*t772;
  t830 = t805 + t823;
  t843 = -0.038922999986*t830;
  t853 = t844 + t845;
  t856 = -3.6777349999999994e-6*t853;
  t860 = t707 + t801 + t843 + t856;
  t1287 = 1.0394599999999997e-12*var1[14];
  t1301 = -0.03892299998790722*t772;
  t1332 = t1048 + t1306;
  t1334 = -3.6777349999999994e-6*t1332;
  t1337 = t805 + t808;
  t1339 = -0.503149000008*t1337;
  t1343 = t1287 + t1301 + t1334 + t1339;
  t1557 = t1556 + t1306;
  t1775 = t1263*t1744;
  t1786 = t1227*t1760;
  t1789 = t1775 + t1786;
  t1514 = t1508 + t808;
  t1794 = t947*t1744;
  t1800 = t920*t1760;
  t1803 = t1794 + t1800;
  t1570 = -1.000000000049*t772;
  t1577 = 1. + t1570;
  t1813 = t1412*t1744;
  t1830 = t1385*t1760;
  t1833 = t1813 + t1830;
  t1617 = t1611 + t845;
  t1594 = -1.000000000016*t772;
  t1595 = 1. + t1594;
  t1633 = t1508 + t823;
  t1685 = -6.5e-11*t772;
  t1688 = 1. + t1685;
  t1668 = t1611 + t1096;
  t1707 = t1556 + t1060;
  t2001 = 0.15121*t262;
  t1745 = t670*t1744;
  t1763 = t514*t1760;
  t1793 = t1132*t1789;
  t1808 = t860*t1803;
  t1836 = t1343*t1833;
  t1837 = t1557*t1789;
  t1840 = t1514*t1803;
  t1841 = t1577*t1833;
  t1843 = t1837 + t1840 + t1841;
  t1850 = -0.038924*t1843;
  t1860 = t1617*t1789;
  t1901 = t1595*t1803;
  t1919 = t1633*t1833;
  t1935 = t1860 + t1901 + t1919;
  t1940 = -0.80315*t1935;
  t1941 = t1688*t1789;
  t1953 = t1668*t1803;
  t1954 = t1707*t1833;
  t1965 = t1941 + t1953 + t1954;
  t1967 = 0.148705*t1965;
  t2024 = -2.8e-11*t130;
  t2104 = -7.e-6*t79;
  t2107 = 4.e-6*t79;
  t2214 = t262*t10*t255;
  t2223 = -1.*t10*t280*t352;
  t2239 = t2214 + t2223;
  t2043 = 7.e-6*t79;
  t2355 = 2.8e-11*t130;
  t2177 = -4.e-6*t79;
  t2248 = t2104 + t648;
  t2253 = t2248*t296;
  t2267 = -6.5e-11*t130*t1744;
  t2324 = t2107 + t419;
  t2336 = t2324*t2239;
  t2340 = t2253 + t2267 + t2336;
  t2348 = -1.000000000049*t130*t296;
  t2350 = t2043 + t648;
  t2354 = t2350*t1744;
  t2360 = t79 + t2355;
  t2361 = t2360*t2239;
  t2370 = t2348 + t2354 + t2361;
  t2381 = t87 + t2355;
  t2386 = t2381*t296;
  t2387 = t2177 + t419;
  t2392 = t2387*t1744;
  t2397 = -1.000000000016*t130*t2239;
  t2415 = t2386 + t2392 + t2397;
  t2524 = -2.8e-11*t808;
  t2579 = 4.e-6*t720;
  t2551 = t895*t296;
  t2556 = t920*t1744;
  t2560 = t947*t2239;
  t2567 = t2551 + t2556 + t2560;
  t2607 = t1170*t296;
  t2628 = t1227*t1744;
  t2629 = t1263*t2239;
  t2631 = t2607 + t2628 + t2629;
  t2572 = -7.e-6*t720;
  t2686 = t1374*t296;
  t2687 = t1385*t1744;
  t2692 = t1412*t2239;
  t2704 = t2686 + t2687 + t2692;
  t2533 = -4.e-6*t720;
  t2761 = 2.8e-11*t808;
  t2654 = 7.e-6*t720;
  t75 = 5.856279999999999e-13*var1[13];
  t111 = -0.0387489999948987*t110;
  t170 = t129 + t151;
  t176 = -2.123459e-6*t170;
  t190 = t178 + t130;
  t193 = -0.281209000004*t190;
  t208 = t75 + t111 + t176 + t193;
  t2849 = Cos(var1[3]);
  t2874 = Sin(var1[3]);
  t2873 = t2849*t255*t296;
  t2879 = -1.*t2874*t352;
  t2892 = t2873 + t2879;
  t2903 = -1.*t255*t2874;
  t2914 = -1.*t2849*t296*t352;
  t2918 = t2903 + t2914;
  t2961 = -1.*t280*t2892;
  t2976 = t262*t2918;
  t2982 = t2961 + t2976;
  t3003 = t262*t2892;
  t3008 = t280*t2918;
  t3010 = t3003 + t3008;
  t3020 = -1.*t2849*t10*t895;
  t3022 = t920*t2982;
  t3025 = t947*t3010;
  t3032 = t3020 + t3022 + t3025;
  t3054 = -1.*t2849*t10*t1170;
  t3075 = t1227*t2982;
  t3077 = t1263*t3010;
  t3078 = t3054 + t3075 + t3077;
  t3095 = -1.*t1374*t2849*t10;
  t3106 = t1385*t2982;
  t3123 = t1412*t3010;
  t3131 = t3095 + t3106 + t3123;
  t3223 = -1.*t10*t255*t280*t2874;
  t3226 = -1.*t262*t10*t2874*t352;
  t3231 = t3223 + t3226;
  t3244 = t262*t10*t255*t2874;
  t3249 = -1.*t10*t280*t2874*t352;
  t3257 = t3244 + t3249;
  t3268 = t895*t2874*t296;
  t3274 = t920*t3231;
  t3275 = t947*t3257;
  t3277 = t3268 + t3274 + t3275;
  t3286 = t1170*t2874*t296;
  t3288 = t1227*t3231;
  t3291 = t1263*t3257;
  t3293 = t3286 + t3288 + t3291;
  t3298 = t1374*t2874*t296;
  t3299 = t1385*t3231;
  t3305 = t1412*t3257;
  t3310 = t3298 + t3299 + t3305;
  t3397 = -1.*t255*t2874*t296;
  t3415 = -1.*t2849*t352;
  t3416 = t3397 + t3415;
  t3418 = t2849*t255;
  t3423 = -1.*t2874*t296*t352;
  t3424 = t3418 + t3423;
  t3448 = t280*t3416;
  t3449 = t262*t3424;
  t3451 = t3448 + t3449;
  t3470 = t262*t3416;
  t3473 = -1.*t280*t3424;
  t3479 = t3470 + t3473;
  t3509 = t1263*t3451;
  t3512 = t1227*t3479;
  t3524 = t3509 + t3512;
  t3547 = t947*t3451;
  t3551 = t920*t3479;
  t3560 = t3547 + t3551;
  t3569 = t1412*t3451;
  t3570 = t1385*t3479;
  t3572 = t3569 + t3570;
  t2002 = -0.15121*t280;
  t2003 = t2001 + t2002;
  t2006 = t2001 + t283;
  t3672 = t255*t2874*t296;
  t3684 = t2849*t352;
  t3689 = t3672 + t3684;
  t3721 = -1.*t280*t3689;
  t3735 = t3721 + t3449;
  t3739 = -1.*t262*t3689;
  t3740 = t3739 + t3473;
  t3744 = t1263*t3735;
  t3745 = t1227*t3740;
  t3747 = t3744 + t3745;
  t3762 = t947*t3735;
  t3765 = t920*t3740;
  t3766 = t3762 + t3765;
  t3771 = t1412*t3735;
  t3775 = t1385*t3740;
  t3777 = t3771 + t3775;
  t2030 = t79 + t2024;
  t2039 = -0.281209000004*t2030;
  t2055 = t2043 + t471;
  t2063 = -2.123459e-6*t2055;
  t2069 = -0.0387489999948987*t130;
  t2084 = 5.856279999999999e-13 + t2039 + t2063 + t2069;
  t2105 = t2104 + t471;
  t2106 = -0.038748999993*t2105;
  t2121 = t2107 + t151;
  t2134 = -0.281209000004*t2121;
  t2145 = -1.38024835e-16*t130;
  t2156 = -1.4640699999999997e-7 + t2106 + t2134 + t2145;
  t2173 = t87 + t2024;
  t2176 = -0.038748999993*t2173;
  t2178 = t2177 + t151;
  t2189 = -2.123459e-6*t2178;
  t2193 = -0.28120900000849935*t130;
  t2209 = 1.0248489999999998e-12 + t2176 + t2189 + t2193;
  t3835 = t262*t3689;
  t3840 = t280*t3424;
  t3842 = t3835 + t3840;
  t3856 = -1.*t10*t2248*t2874;
  t3863 = -6.5e-11*t130*t3735;
  t3873 = t2324*t3842;
  t3876 = t3856 + t3863 + t3873;
  t3882 = 1.000000000049*t10*t130*t2874;
  t3886 = t2350*t3735;
  t3887 = t2360*t3842;
  t3893 = t3882 + t3886 + t3887;
  t3920 = -1.*t10*t2381*t2874;
  t3930 = t2387*t3735;
  t3934 = -1.000000000016*t130*t3842;
  t3940 = t3920 + t3930 + t3934;
  t2528 = t760 + t2524;
  t2532 = -0.038922999986*t2528;
  t2534 = t2533 + t1306;
  t2540 = -3.6777349999999994e-6*t2534;
  t2542 = -0.5031490000160505*t808;
  t2550 = 1.8190549999999993e-12 + t2532 + t2540 + t2542;
  t2576 = t2572 + t1096;
  t2577 = -0.038922999986*t2576;
  t2584 = t2579 + t1306;
  t2591 = -0.503149000008*t2584;
  t2595 = -2.3905277499999995e-16*t808;
  t2597 = -2.598649999999999e-7 + t2577 + t2591 + t2595;
  t2641 = t720 + t2524;
  t2642 = -0.503149000008*t2641;
  t2662 = t2654 + t1096;
  t2664 = -3.6777349999999994e-6*t2662;
  t2667 = -0.03892299998790722*t808;
  t2682 = 1.0394599999999997e-12 + t2642 + t2664 + t2667;
  t2709 = t2579 + t1060;
  t4005 = -1.*t10*t895*t2874;
  t4008 = t920*t3735;
  t4011 = t947*t3842;
  t4013 = t4005 + t4008 + t4011;
  t4020 = -1.*t10*t1170*t2874;
  t4021 = t1227*t3735;
  t4028 = t1263*t3842;
  t4032 = t4020 + t4021 + t4028;
  t2723 = t2572 + t845;
  t4043 = -1.*t1374*t10*t2874;
  t4050 = t1385*t3735;
  t4051 = t1412*t3842;
  t4056 = t4043 + t4050 + t4051;
  t2750 = t2533 + t1060;
  t2772 = t760 + t2761;
  t2799 = t720 + t2761;
  t2822 = t2654 + t845;
  t4367 = t2849*t10*t255*t280;
  t4368 = t262*t2849*t10*t352;
  t4375 = t4367 + t4368;
  t4381 = -1.*t262*t2849*t10*t255;
  t4385 = t2849*t10*t280*t352;
  t4393 = t4381 + t4385;
  t4402 = -1.*t2849*t895*t296;
  t4403 = t920*t4375;
  t4420 = t947*t4393;
  t4422 = t4402 + t4403 + t4420;
  t4437 = -1.*t2849*t1170*t296;
  t4456 = t1227*t4375;
  t4462 = t1263*t4393;
  t4467 = t4437 + t4456 + t4462;
  t4472 = -1.*t1374*t2849*t296;
  t4479 = t1385*t4375;
  t4480 = t1412*t4393;
  t4493 = t4472 + t4479 + t4480;
  t4618 = t255*t2874;
  t4620 = t2849*t296*t352;
  t4622 = t4618 + t4620;
  t4639 = t280*t2892;
  t4644 = t262*t4622;
  t4651 = t4639 + t4644;
  t4667 = -1.*t280*t4622;
  t4672 = t3003 + t4667;
  t4690 = t1263*t4651;
  t4696 = t1227*t4672;
  t4704 = t4690 + t4696;
  t4708 = t947*t4651;
  t4714 = t920*t4672;
  t4717 = t4708 + t4714;
  t4744 = t1412*t4651;
  t4749 = t1385*t4672;
  t4763 = t4744 + t4749;
  t4863 = -1.*t2849*t255*t296;
  t4883 = t2874*t352;
  t4884 = t4863 + t4883;
  t4915 = -1.*t280*t4884;
  t4918 = t4915 + t4644;
  t4941 = -1.*t262*t4884;
  t4951 = t4941 + t4667;
  t4962 = t1263*t4918;
  t4973 = t1227*t4951;
  t4976 = t4962 + t4973;
  t4982 = t947*t4918;
  t4996 = t920*t4951;
  t4998 = t4982 + t4996;
  t5016 = t1412*t4918;
  t5024 = t1385*t4951;
  t5028 = t5016 + t5024;
  t5191 = t262*t4884;
  t5192 = t280*t4622;
  t5197 = t5191 + t5192;
  t5209 = t2849*t10*t2248;
  t5215 = -6.5e-11*t130*t4918;
  t5218 = t2324*t5197;
  t5219 = t5209 + t5215 + t5218;
  t5224 = -1.000000000049*t2849*t10*t130;
  t5226 = t2350*t4918;
  t5228 = t2360*t5197;
  t5229 = t5224 + t5226 + t5228;
  t5236 = t2849*t10*t2381;
  t5237 = t2387*t4918;
  t5238 = -1.000000000016*t130*t5197;
  t5240 = t5236 + t5237 + t5238;
  t5372 = t2849*t10*t895;
  t5382 = t920*t4918;
  t5392 = t947*t5197;
  t5401 = t5372 + t5382 + t5392;
  t5415 = t2849*t10*t1170;
  t5418 = t1227*t4918;
  t5419 = t1263*t5197;
  t5423 = t5415 + t5418 + t5419;
  t5438 = t1374*t2849*t10;
  t5439 = t1385*t4918;
  t5441 = t1412*t5197;
  t5450 = t5438 + t5439 + t5441;
  p_output1[0]=1.;
  p_output1[1]=t1132*t1268 + t1343*t1437 + t10*t208 - 1.*t255*t285*t296 + t296*t351*t352 + t514*t552 + t670*t695 + t860*t971 - 0.038924*(t1268*t1557 + t1437*t1577 + t1514*t971) - 0.80315*(t1268*t1617 + t1437*t1633 + t1595*t971) + 0.148705*(t1268*t1688 + t1437*t1707 + t1668*t971);
  p_output1[2]=t1745 + t1763 + t1793 + t1808 + t1836 + t1850 + t1940 + t1967 - 1.*t10*t255*t351 - 1.*t10*t285*t352;
  p_output1[3]=t1745 + t1763 + t1793 + t1808 + t1836 + t1850 + t1940 + t1967 + t10*t2003*t255 - 1.*t10*t2006*t352;
  p_output1[4]=t1744*t2156 + t2209*t2239 + t1132*t2340 + t1343*t2370 - 0.038924*(t1557*t2340 + t1577*t2370 + t1514*t2415) - 0.80315*(t1617*t2340 + t1633*t2370 + t1595*t2415) + 0.148705*(t1688*t2340 + t1707*t2370 + t1668*t2415) + t2084*t296 + t2415*t860;
  p_output1[5]=t2550*t2567 + t2597*t2631 + t2682*t2704 - 0.80315*(t2631*t2750 + t2704*t2772 - 1.000000000016*t2567*t808) + 0.148705*(t2567*t2709 + t2704*t2723 - 6.5e-11*t2631*t808) - 0.038924*(t2567*t2799 + t2631*t2822 - 1.000000000049*t2704*t808);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=-1.*t10*t208*t2849 + t285*t2892 + t1132*t3078 + t1343*t3131 - 0.038924*(t1514*t3032 + t1557*t3078 + t1577*t3131) - 0.80315*(t1595*t3032 + t1617*t3078 + t1633*t3131) + 0.148705*(t1668*t3032 + t1688*t3078 + t1707*t3131) + t2918*t351 + t2982*t514 + t3010*t670 + t3032*t860;
  p_output1[9]=t10*t255*t285*t2874 + t208*t2874*t296 + t1132*t3293 + t1343*t3310 - 0.038924*(t1514*t3277 + t1557*t3293 + t1577*t3310) - 0.80315*(t1595*t3277 + t1617*t3293 + t1633*t3310) + 0.148705*(t1668*t3277 + t1688*t3293 + t1707*t3310) - 1.*t10*t2874*t351*t352 + t3231*t514 + t3257*t670 + t3277*t860;
  p_output1[10]=t285*t3424 + t3416*t351 + t1132*t3524 + t1343*t3572 - 0.038924*(t1557*t3524 + t1514*t3560 + t1577*t3572) - 0.80315*(t1617*t3524 + t1595*t3560 + t1633*t3572) + 0.148705*(t1688*t3524 + t1668*t3560 + t1707*t3572) + t3479*t514 + t3451*t670 + t3560*t860;
  p_output1[11]=t2006*t3424 + t2003*t3689 + t1132*t3747 + t1343*t3777 - 0.038924*(t1557*t3747 + t1514*t3766 + t1577*t3777) - 0.80315*(t1617*t3747 + t1595*t3766 + t1633*t3777) + 0.148705*(t1688*t3747 + t1668*t3766 + t1707*t3777) + t3740*t514 + t3735*t670 + t3766*t860;
  p_output1[12]=-1.*t10*t2084*t2874 + t2156*t3735 + t2209*t3842 + t1132*t3876 + t1343*t3893 - 0.038924*(t1557*t3876 + t1577*t3893 + t1514*t3940) - 0.80315*(t1617*t3876 + t1633*t3893 + t1595*t3940) + 0.148705*(t1688*t3876 + t1707*t3893 + t1668*t3940) + t3940*t860;
  p_output1[13]=t2550*t4013 + t2597*t4032 + t2682*t4056 - 0.80315*(t2750*t4032 + t2772*t4056 - 1.000000000016*t4013*t808) + 0.148705*(t2709*t4013 + t2723*t4056 - 6.5e-11*t4032*t808) - 0.038924*(t2799*t4013 + t2822*t4032 - 1.000000000049*t4056*t808);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-1.*t10*t208*t2874 + t3424*t351 + t285*t3689 + t1132*t4032 + t1343*t4056 - 0.038924*(t1514*t4013 + t1557*t4032 + t1577*t4056) - 0.80315*(t1595*t4013 + t1617*t4032 + t1633*t4056) + 0.148705*(t1668*t4013 + t1688*t4032 + t1707*t4056) + t3735*t514 + t3842*t670 + t4013*t860;
  p_output1[17]=-1.*t10*t255*t2849*t285 - 1.*t208*t2849*t296 + t10*t2849*t351*t352 + t1132*t4467 + t1343*t4493 - 0.038924*(t1514*t4422 + t1557*t4467 + t1577*t4493) - 0.80315*(t1595*t4422 + t1617*t4467 + t1633*t4493) + 0.148705*(t1668*t4422 + t1688*t4467 + t1707*t4493) + t4375*t514 + t4393*t670 + t4422*t860;
  p_output1[18]=t2892*t351 + t285*t4622 + t1132*t4704 + t1343*t4763 - 0.038924*(t1557*t4704 + t1514*t4717 + t1577*t4763) - 0.80315*(t1617*t4704 + t1595*t4717 + t1633*t4763) + 0.148705*(t1688*t4704 + t1668*t4717 + t1707*t4763) + t4672*t514 + t4651*t670 + t4717*t860;
  p_output1[19]=t2006*t4622 + t2003*t4884 + t1132*t4976 + t1343*t5028 - 0.038924*(t1557*t4976 + t1514*t4998 + t1577*t5028) - 0.80315*(t1617*t4976 + t1595*t4998 + t1633*t5028) + 0.148705*(t1688*t4976 + t1668*t4998 + t1707*t5028) + t4951*t514 + t4918*t670 + t4998*t860;
  p_output1[20]=t10*t2084*t2849 + t2156*t4918 + t2209*t5197 + t1132*t5219 + t1343*t5229 - 0.038924*(t1557*t5219 + t1577*t5229 + t1514*t5240) - 0.80315*(t1617*t5219 + t1633*t5229 + t1595*t5240) + 0.148705*(t1688*t5219 + t1707*t5229 + t1668*t5240) + t5240*t860;
  p_output1[21]=t2550*t5401 + t2597*t5423 + t2682*t5450 - 0.80315*(t2750*t5423 + t2772*t5450 - 1.000000000016*t5401*t808) + 0.148705*(t2709*t5401 + t2723*t5450 - 6.5e-11*t5423*t808) - 0.038924*(t2799*t5401 + t2822*t5423 - 1.000000000049*t5450*t808);
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

#include "J_h_RlFoot_QuadrupleStance.hh"

namespace QuadrupleStance
{

void J_h_RlFoot_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
