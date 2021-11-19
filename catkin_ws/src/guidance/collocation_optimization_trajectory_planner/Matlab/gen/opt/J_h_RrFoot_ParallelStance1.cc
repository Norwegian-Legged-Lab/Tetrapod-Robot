/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:28:57 GMT+01:00
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
  double t68;
  double t83;
  double t93;
  double t110;
  double t221;
  double t223;
  double t229;
  double t237;
  double t245;
  double t261;
  double t162;
  double t164;
  double t220;
  double t329;
  double t368;
  double t100;
  double t587;
  double t599;
  double t613;
  double t641;
  double t10;
  double t508;
  double t465;
  double t480;
  double t484;
  double t548;
  double t558;
  double t562;
  double t687;
  double t172;
  double t727;
  double t111;
  double t633;
  double t806;
  double t808;
  double t852;
  double t390;
  double t737;
  double t370;
  double t911;
  double t732;
  double t734;
  double t749;
  double t754;
  double t761;
  double t762;
  double t763;
  double t771;
  double t929;
  double t839;
  double t840;
  double t848;
  double t858;
  double t863;
  double t865;
  double t880;
  double t894;
  double t943;
  double t944;
  double t948;
  double t949;
  double t951;
  double t958;
  double t959;
  double t965;
  double t787;
  double t990;
  double t822;
  double t1026;
  double t974;
  double t654;
  double t288;
  double t308;
  double t246;
  double t248;
  double t497;
  double t505;
  double t520;
  double t522;
  double t536;
  double t542;
  double t547;
  double t349;
  double t350;
  double t371;
  double t381;
  double t410;
  double t416;
  double t463;
  double t907;
  double t910;
  double t916;
  double t921;
  double t930;
  double t931;
  double t942;
  double t1145;
  double t1151;
  double t1152;
  double t1156;
  double t1157;
  double t1158;
  double t781;
  double t784;
  double t798;
  double t799;
  double t823;
  double t826;
  double t829;
  double t584;
  double t615;
  double t675;
  double t684;
  double t699;
  double t714;
  double t720;
  double t1115;
  double t1164;
  double t1169;
  double t1176;
  double t1099;
  double t1184;
  double t1190;
  double t1191;
  double t1076;
  double t1088;
  double t1196;
  double t1200;
  double t1208;
  double t1062;
  double t1047;
  double t1051;
  double t1036;
  double t1000;
  double t1008;
  double t993;
  double t986;
  double t1155;
  double t1162;
  double t1178;
  double t1194;
  double t1210;
  double t1211;
  double t1217;
  double t1219;
  double t1230;
  double t1231;
  double t1247;
  double t1255;
  double t1259;
  double t1262;
  double t1266;
  double t1268;
  double t1273;
  double t1276;
  double t1277;
  double t1280;
  double t1315;
  double t1376;
  double t1380;
  double t1451;
  double t1456;
  double t1461;
  double t1308;
  double t1496;
  double t1429;
  double t1465;
  double t1466;
  double t1468;
  double t1473;
  double t1476;
  double t1480;
  double t1485;
  double t1486;
  double t1493;
  double t1499;
  double t1503;
  double t1505;
  double t1512;
  double t1522;
  double t1525;
  double t1526;
  double t1540;
  double t1541;
  double t1615;
  double t1635;
  double t1638;
  double t1640;
  double t1645;
  double t1699;
  double t1701;
  double t1705;
  double t1706;
  double t1625;
  double t1750;
  double t1757;
  double t1759;
  double t1769;
  double t1777;
  double t1661;
  double t1717;
  double t1714;
  double t62;
  double t95;
  double t130;
  double t161;
  double t177;
  double t193;
  double t195;
  double t1896;
  double t1925;
  double t1922;
  double t1931;
  double t1949;
  double t1962;
  double t1965;
  double t1969;
  double t1972;
  double t1976;
  double t1977;
  double t1988;
  double t1989;
  double t2002;
  double t2006;
  double t2008;
  double t2011;
  double t2012;
  double t2020;
  double t2022;
  double t2023;
  double t2024;
  double t2030;
  double t2034;
  double t2035;
  double t2039;
  double t2136;
  double t2144;
  double t2155;
  double t2160;
  double t2163;
  double t2165;
  double t2171;
  double t2175;
  double t2176;
  double t2187;
  double t2190;
  double t2194;
  double t2197;
  double t2202;
  double t2222;
  double t2225;
  double t2226;
  double t2234;
  double t2333;
  double t2337;
  double t2353;
  double t2356;
  double t2357;
  double t2358;
  double t2367;
  double t2372;
  double t2374;
  double t2378;
  double t2379;
  double t2385;
  double t2392;
  double t2397;
  double t2399;
  double t2411;
  double t2413;
  double t2417;
  double t2429;
  double t2441;
  double t2442;
  double t1290;
  double t1295;
  double t1297;
  double t1298;
  double t2501;
  double t2508;
  double t2517;
  double t2532;
  double t2544;
  double t2563;
  double t2577;
  double t2591;
  double t2593;
  double t2595;
  double t2602;
  double t2616;
  double t2622;
  double t2638;
  double t2642;
  double t2645;
  double t1310;
  double t1313;
  double t1316;
  double t1336;
  double t1343;
  double t1371;
  double t1377;
  double t1379;
  double t1388;
  double t1396;
  double t1408;
  double t1417;
  double t1424;
  double t1427;
  double t1435;
  double t1438;
  double t1439;
  double t1450;
  double t2722;
  double t2723;
  double t2724;
  double t2728;
  double t2729;
  double t2730;
  double t2732;
  double t2736;
  double t2737;
  double t2740;
  double t2741;
  double t2746;
  double t2747;
  double t2748;
  double t2749;
  double t1620;
  double t1622;
  double t1627;
  double t1629;
  double t1630;
  double t1632;
  double t1663;
  double t1674;
  double t1676;
  double t1677;
  double t1680;
  double t1698;
  double t1715;
  double t1716;
  double t1719;
  double t1727;
  double t1729;
  double t1730;
  double t2803;
  double t2805;
  double t2811;
  double t2812;
  double t1784;
  double t2829;
  double t2835;
  double t2846;
  double t2850;
  double t1793;
  double t2871;
  double t2873;
  double t2887;
  double t2889;
  double t1814;
  double t1831;
  double t1844;
  double t1874;
  double t3107;
  double t3114;
  double t3120;
  double t3127;
  double t3129;
  double t3130;
  double t3136;
  double t3141;
  double t3143;
  double t3145;
  double t3162;
  double t3170;
  double t3176;
  double t3177;
  double t3180;
  double t3186;
  double t3195;
  double t3204;
  double t3314;
  double t3322;
  double t3324;
  double t3334;
  double t3340;
  double t3342;
  double t3348;
  double t3350;
  double t3357;
  double t3360;
  double t3361;
  double t3366;
  double t3367;
  double t3372;
  double t3382;
  double t3397;
  double t3416;
  double t3492;
  double t3500;
  double t3504;
  double t3533;
  double t3535;
  double t3550;
  double t3557;
  double t3571;
  double t3572;
  double t3577;
  double t3583;
  double t3589;
  double t3592;
  double t3619;
  double t3627;
  double t3628;
  double t3700;
  double t3716;
  double t3720;
  double t3733;
  double t3741;
  double t3742;
  double t3744;
  double t3767;
  double t3779;
  double t3784;
  double t3788;
  double t3820;
  double t3821;
  double t3824;
  double t3826;
  double t3905;
  double t3908;
  double t3915;
  double t3918;
  double t3923;
  double t3933;
  double t3935;
  double t3937;
  double t3946;
  double t3955;
  double t3956;
  double t3957;
  t68 = Cos(var1[16]);
  t83 = -1.*t68;
  t93 = 1. + t83;
  t110 = Sin(var1[16]);
  t221 = Cos(var1[15]);
  t223 = -1.*t221;
  t229 = 1. + t223;
  t237 = -0.15121*t229;
  t245 = Sin(var1[15]);
  t261 = Sin(var1[4]);
  t162 = -1. + t68;
  t164 = 4.e-6*t162;
  t220 = Cos(var1[5]);
  t329 = Sin(var1[5]);
  t368 = 7.e-6*t93;
  t100 = 2.8e-11*t93;
  t587 = Cos(var1[17]);
  t599 = -1.*t587;
  t613 = 1. + t599;
  t641 = Sin(var1[17]);
  t10 = Cos(var1[4]);
  t508 = -4.e-6*t110;
  t465 = t220*t245*t261;
  t480 = t221*t261*t329;
  t484 = t465 + t480;
  t548 = -1.*t221*t220*t261;
  t558 = t245*t261*t329;
  t562 = t548 + t558;
  t687 = 2.8e-11*t613;
  t172 = -7.e-6*t110;
  t727 = -2.8e-11*t93;
  t111 = -1.*t110;
  t633 = 7.e-6*t613;
  t806 = -1. + t587;
  t808 = 4.e-6*t806;
  t852 = 4.e-6*t93;
  t390 = 7.e-6*t110;
  t737 = -7.e-6*t93;
  t370 = 4.e-6*t110;
  t911 = 4.e-6*t641;
  t732 = t727 + t110;
  t734 = t10*t732;
  t749 = t737 + t508;
  t754 = t749*t484;
  t761 = -1.000000000016*t93;
  t762 = 1. + t761;
  t763 = t762*t562;
  t771 = t734 + t754 + t763;
  t929 = 7.e-6*t641;
  t839 = -1.000000000049*t93;
  t840 = 1. + t839;
  t848 = t840*t10;
  t858 = t852 + t172;
  t863 = t858*t484;
  t865 = t727 + t111;
  t880 = t865*t562;
  t894 = t848 + t863 + t880;
  t943 = t852 + t390;
  t944 = t10*t943;
  t948 = -6.5e-11*t93;
  t949 = 1. + t948;
  t951 = t949*t484;
  t958 = t737 + t370;
  t959 = t958*t562;
  t965 = t944 + t951 + t959;
  t787 = -1.*t641;
  t990 = 4.e-6*t613;
  t822 = -7.e-6*t641;
  t1026 = -2.8e-11*t613;
  t974 = -7.e-6*t613;
  t654 = -4.e-6*t641;
  t288 = 0.15121*t245;
  t308 = t237 + t288;
  t246 = -0.15121*t245;
  t248 = t237 + t246;
  t497 = -2.7726089999999997e-12*var1[16];
  t505 = -0.2812110000084994*t93;
  t520 = t368 + t508;
  t522 = -1.8134809999999998e-6*t520;
  t536 = t100 + t110;
  t542 = -0.038749000006999997*t536;
  t547 = t497 + t505 + t522 + t542;
  t349 = 3.9608699999999997e-7*var1[16];
  t350 = -1.1787626499999999e-16*t93;
  t371 = t368 + t370;
  t381 = -0.281211000004*t371;
  t410 = t164 + t390;
  t416 = -0.038749000006999997*t410;
  t463 = t349 + t350 + t381 + t416;
  t907 = 2.826290000000002e-7*var1[17];
  t910 = -2.18904205e-16*t613;
  t916 = t633 + t911;
  t921 = -0.5031510000080001*t916;
  t930 = t808 + t929;
  t931 = -0.038575000014*t930;
  t942 = t907 + t910 + t921 + t931;
  t1145 = -1.*t10*t220*t245;
  t1151 = -1.*t221*t10*t329;
  t1152 = t1145 + t1151;
  t1156 = -1.*t221*t10*t220;
  t1157 = t10*t245*t329;
  t1158 = t1156 + t1157;
  t781 = 1.1305160000000008e-12*var1[17];
  t784 = -0.03857500001589017*t613;
  t798 = t687 + t787;
  t799 = -0.5031510000080001*t798;
  t823 = t808 + t822;
  t826 = -3.367757e-6*t823;
  t829 = t781 + t784 + t799 + t826;
  t584 = -1.9784030000000015e-12*var1[17];
  t615 = -0.5031510000160505*t613;
  t675 = t633 + t654;
  t684 = -3.367757e-6*t675;
  t699 = t687 + t641;
  t714 = -0.038575000014*t699;
  t720 = t584 + t615 + t684 + t714;
  t1115 = t974 + t654;
  t1164 = t958*t1152;
  t1169 = t949*t1158;
  t1176 = t1164 + t1169;
  t1099 = t1026 + t641;
  t1184 = t865*t1152;
  t1190 = t858*t1158;
  t1191 = t1184 + t1190;
  t1076 = -1.000000000016*t613;
  t1088 = 1. + t1076;
  t1196 = t762*t1152;
  t1200 = t749*t1158;
  t1208 = t1196 + t1200;
  t1062 = t990 + t822;
  t1047 = -1.000000000049*t613;
  t1051 = 1. + t1047;
  t1036 = t1026 + t787;
  t1000 = -6.5e-11*t613;
  t1008 = 1. + t1000;
  t993 = t990 + t929;
  t986 = t974 + t911;
  t1155 = t547*t1152;
  t1162 = t463*t1158;
  t1178 = t942*t1176;
  t1194 = t829*t1191;
  t1210 = t720*t1208;
  t1211 = t1115*t1176;
  t1217 = t1099*t1191;
  t1219 = t1088*t1208;
  t1230 = t1211 + t1217 + t1219;
  t1231 = -0.80315*t1230;
  t1247 = t1062*t1176;
  t1255 = t1051*t1191;
  t1259 = t1036*t1208;
  t1262 = t1247 + t1255 + t1259;
  t1266 = -0.038576*t1262;
  t1268 = t1008*t1176;
  t1273 = t993*t1191;
  t1276 = t986*t1208;
  t1277 = t1268 + t1273 + t1276;
  t1280 = -0.148715*t1277;
  t1315 = 2.8e-11*t110;
  t1376 = 7.e-6*t68;
  t1380 = 4.e-6*t68;
  t1451 = t221*t10*t220;
  t1456 = -1.*t10*t245*t329;
  t1461 = t1451 + t1456;
  t1308 = -7.e-6*t68;
  t1496 = -2.8e-11*t110;
  t1429 = -4.e-6*t68;
  t1465 = t1376 + t370;
  t1466 = t1465*t261;
  t1468 = -6.5e-11*t110*t1152;
  t1473 = t1380 + t172;
  t1476 = t1473*t1461;
  t1480 = t1466 + t1468 + t1476;
  t1485 = -1.000000000049*t110*t261;
  t1486 = t1308 + t370;
  t1493 = t1486*t1152;
  t1499 = t83 + t1496;
  t1503 = t1499*t1461;
  t1505 = t1485 + t1493 + t1503;
  t1512 = t68 + t1496;
  t1522 = t1512*t261;
  t1525 = t1429 + t172;
  t1526 = t1525*t1152;
  t1540 = -1.000000000016*t110*t1461;
  t1541 = t1522 + t1526 + t1540;
  t1615 = 2.8e-11*t641;
  t1635 = t732*t261;
  t1638 = t749*t1152;
  t1640 = t762*t1461;
  t1645 = t1635 + t1638 + t1640;
  t1699 = t840*t261;
  t1701 = t858*t1152;
  t1705 = t865*t1461;
  t1706 = t1699 + t1701 + t1705;
  t1625 = -4.e-6*t587;
  t1750 = t943*t261;
  t1757 = t949*t1152;
  t1759 = t958*t1461;
  t1769 = t1750 + t1757 + t1759;
  t1777 = -2.8e-11*t641;
  t1661 = -7.e-6*t587;
  t1717 = 4.e-6*t587;
  t1714 = 7.e-6*t587;
  t62 = 1.5843479999999999e-12*var1[16];
  t95 = -0.03874900000889869*t93;
  t130 = t100 + t111;
  t161 = -0.281211000004*t130;
  t177 = t164 + t172;
  t193 = -1.8134809999999998e-6*t177;
  t195 = t62 + t95 + t161 + t193;
  t1896 = Cos(var1[3]);
  t1925 = Sin(var1[3]);
  t1922 = t1896*t220*t261;
  t1931 = -1.*t1925*t329;
  t1949 = t1922 + t1931;
  t1962 = -1.*t220*t1925;
  t1965 = -1.*t1896*t261*t329;
  t1969 = t1962 + t1965;
  t1972 = -1.*t245*t1949;
  t1976 = t221*t1969;
  t1977 = t1972 + t1976;
  t1988 = t221*t1949;
  t1989 = t245*t1969;
  t2002 = t1988 + t1989;
  t2006 = -1.*t1896*t10*t732;
  t2008 = t749*t1977;
  t2011 = t762*t2002;
  t2012 = t2006 + t2008 + t2011;
  t2020 = -1.*t840*t1896*t10;
  t2022 = t858*t1977;
  t2023 = t865*t2002;
  t2024 = t2020 + t2022 + t2023;
  t2030 = -1.*t1896*t10*t943;
  t2034 = t949*t1977;
  t2035 = t958*t2002;
  t2039 = t2030 + t2034 + t2035;
  t2136 = -1.*t10*t220*t245*t1925;
  t2144 = -1.*t221*t10*t1925*t329;
  t2155 = t2136 + t2144;
  t2160 = t221*t10*t220*t1925;
  t2163 = -1.*t10*t245*t1925*t329;
  t2165 = t2160 + t2163;
  t2171 = t732*t1925*t261;
  t2175 = t749*t2155;
  t2176 = t762*t2165;
  t2187 = t2171 + t2175 + t2176;
  t2190 = t840*t1925*t261;
  t2194 = t858*t2155;
  t2197 = t865*t2165;
  t2202 = t2190 + t2194 + t2197;
  t2222 = t943*t1925*t261;
  t2225 = t949*t2155;
  t2226 = t958*t2165;
  t2234 = t2222 + t2225 + t2226;
  t2333 = -1.*t220*t1925*t261;
  t2337 = -1.*t1896*t329;
  t2353 = t2333 + t2337;
  t2356 = t1896*t220;
  t2357 = -1.*t1925*t261*t329;
  t2358 = t2356 + t2357;
  t2367 = t245*t2353;
  t2372 = t221*t2358;
  t2374 = t2367 + t2372;
  t2378 = t221*t2353;
  t2379 = -1.*t245*t2358;
  t2385 = t2378 + t2379;
  t2392 = t958*t2374;
  t2397 = t949*t2385;
  t2399 = t2392 + t2397;
  t2411 = t865*t2374;
  t2413 = t858*t2385;
  t2417 = t2411 + t2413;
  t2429 = t762*t2374;
  t2441 = t749*t2385;
  t2442 = t2429 + t2441;
  t1290 = -0.15121*t221;
  t1295 = t1290 + t246;
  t1297 = 0.15121*t221;
  t1298 = t1297 + t246;
  t2501 = t220*t1925*t261;
  t2508 = t1896*t329;
  t2517 = t2501 + t2508;
  t2532 = -1.*t245*t2517;
  t2544 = t2532 + t2372;
  t2563 = -1.*t221*t2517;
  t2577 = t2563 + t2379;
  t2591 = t958*t2544;
  t2593 = t949*t2577;
  t2595 = t2591 + t2593;
  t2602 = t865*t2544;
  t2616 = t858*t2577;
  t2622 = t2602 + t2616;
  t2638 = t762*t2544;
  t2642 = t749*t2577;
  t2645 = t2638 + t2642;
  t1310 = t1308 + t508;
  t1313 = -1.8134809999999998e-6*t1310;
  t1316 = t83 + t1315;
  t1336 = -0.281211000004*t1316;
  t1343 = -0.03874900000889869*t110;
  t1371 = 1.5843479999999999e-12 + t1313 + t1336 + t1343;
  t1377 = t1376 + t508;
  t1379 = -0.038749000006999997*t1377;
  t1388 = t1380 + t390;
  t1396 = -0.281211000004*t1388;
  t1408 = -1.1787626499999999e-16*t110;
  t1417 = 3.9608699999999997e-7 + t1379 + t1396 + t1408;
  t1424 = t68 + t1315;
  t1427 = -0.038749000006999997*t1424;
  t1435 = t1429 + t390;
  t1438 = -1.8134809999999998e-6*t1435;
  t1439 = -0.2812110000084994*t110;
  t1450 = -2.7726089999999997e-12 + t1427 + t1438 + t1439;
  t2722 = t221*t2517;
  t2723 = t245*t2358;
  t2724 = t2722 + t2723;
  t2728 = -1.*t10*t1465*t1925;
  t2729 = -6.5e-11*t110*t2544;
  t2730 = t1473*t2724;
  t2732 = t2728 + t2729 + t2730;
  t2736 = 1.000000000049*t10*t110*t1925;
  t2737 = t1486*t2544;
  t2740 = t1499*t2724;
  t2741 = t2736 + t2737 + t2740;
  t2746 = -1.*t10*t1512*t1925;
  t2747 = t1525*t2544;
  t2748 = -1.000000000016*t110*t2724;
  t2749 = t2746 + t2747 + t2748;
  t1620 = t587 + t1615;
  t1622 = -0.038575000014*t1620;
  t1627 = t1625 + t929;
  t1629 = -3.367757e-6*t1627;
  t1630 = -0.5031510000160505*t641;
  t1632 = -1.9784030000000015e-12 + t1622 + t1629 + t1630;
  t1663 = t1661 + t654;
  t1674 = -3.367757e-6*t1663;
  t1676 = t599 + t1615;
  t1677 = -0.5031510000080001*t1676;
  t1680 = -0.03857500001589017*t641;
  t1698 = 1.1305160000000008e-12 + t1674 + t1677 + t1680;
  t1715 = t1714 + t654;
  t1716 = -0.038575000014*t1715;
  t1719 = t1717 + t929;
  t1727 = -0.5031510000080001*t1719;
  t1729 = -2.18904205e-16*t641;
  t1730 = 2.826290000000002e-7 + t1716 + t1727 + t1729;
  t2803 = -1.*t10*t732*t1925;
  t2805 = t749*t2544;
  t2811 = t762*t2724;
  t2812 = t2803 + t2805 + t2811;
  t1784 = t587 + t1777;
  t2829 = -1.*t840*t10*t1925;
  t2835 = t858*t2544;
  t2846 = t865*t2724;
  t2850 = t2829 + t2835 + t2846;
  t1793 = t1625 + t822;
  t2871 = -1.*t10*t943*t1925;
  t2873 = t949*t2544;
  t2887 = t958*t2724;
  t2889 = t2871 + t2873 + t2887;
  t1814 = t599 + t1777;
  t1831 = t1661 + t911;
  t1844 = t1717 + t822;
  t1874 = t1714 + t911;
  t3107 = t1896*t10*t220*t245;
  t3114 = t221*t1896*t10*t329;
  t3120 = t3107 + t3114;
  t3127 = -1.*t221*t1896*t10*t220;
  t3129 = t1896*t10*t245*t329;
  t3130 = t3127 + t3129;
  t3136 = -1.*t1896*t732*t261;
  t3141 = t749*t3120;
  t3143 = t762*t3130;
  t3145 = t3136 + t3141 + t3143;
  t3162 = -1.*t840*t1896*t261;
  t3170 = t858*t3120;
  t3176 = t865*t3130;
  t3177 = t3162 + t3170 + t3176;
  t3180 = -1.*t1896*t943*t261;
  t3186 = t949*t3120;
  t3195 = t958*t3130;
  t3204 = t3180 + t3186 + t3195;
  t3314 = t220*t1925;
  t3322 = t1896*t261*t329;
  t3324 = t3314 + t3322;
  t3334 = t245*t1949;
  t3340 = t221*t3324;
  t3342 = t3334 + t3340;
  t3348 = -1.*t245*t3324;
  t3350 = t1988 + t3348;
  t3357 = t958*t3342;
  t3360 = t949*t3350;
  t3361 = t3357 + t3360;
  t3366 = t865*t3342;
  t3367 = t858*t3350;
  t3372 = t3366 + t3367;
  t3382 = t762*t3342;
  t3397 = t749*t3350;
  t3416 = t3382 + t3397;
  t3492 = -1.*t1896*t220*t261;
  t3500 = t1925*t329;
  t3504 = t3492 + t3500;
  t3533 = -1.*t245*t3504;
  t3535 = t3533 + t3340;
  t3550 = -1.*t221*t3504;
  t3557 = t3550 + t3348;
  t3571 = t958*t3535;
  t3572 = t949*t3557;
  t3577 = t3571 + t3572;
  t3583 = t865*t3535;
  t3589 = t858*t3557;
  t3592 = t3583 + t3589;
  t3619 = t762*t3535;
  t3627 = t749*t3557;
  t3628 = t3619 + t3627;
  t3700 = t221*t3504;
  t3716 = t245*t3324;
  t3720 = t3700 + t3716;
  t3733 = t1896*t10*t1465;
  t3741 = -6.5e-11*t110*t3535;
  t3742 = t1473*t3720;
  t3744 = t3733 + t3741 + t3742;
  t3767 = -1.000000000049*t1896*t10*t110;
  t3779 = t1486*t3535;
  t3784 = t1499*t3720;
  t3788 = t3767 + t3779 + t3784;
  t3820 = t1896*t10*t1512;
  t3821 = t1525*t3535;
  t3824 = -1.000000000016*t110*t3720;
  t3826 = t3820 + t3821 + t3824;
  t3905 = t1896*t10*t732;
  t3908 = t749*t3535;
  t3915 = t762*t3720;
  t3918 = t3905 + t3908 + t3915;
  t3923 = t840*t1896*t10;
  t3933 = t858*t3535;
  t3935 = t865*t3720;
  t3937 = t3923 + t3933 + t3935;
  t3946 = t1896*t10*t943;
  t3955 = t949*t3535;
  t3956 = t958*t3720;
  t3957 = t3946 + t3955 + t3956;
  p_output1[0]=1.;
  p_output1[1]=t10*t195 - 1.*t220*t248*t261 + t261*t308*t329 + t463*t484 + t547*t562 + t720*t771 + t829*t894 + t942*t965 - 0.038576*(t1036*t771 + t1051*t894 + t1062*t965) - 0.80315*(t1088*t771 + t1099*t894 + t1115*t965) - 0.148715*(t1008*t965 + t771*t986 + t894*t993);
  p_output1[2]=t1155 + t1162 + t1178 + t1194 + t1210 + t1231 + t1266 + t1280 - 1.*t10*t220*t308 - 1.*t10*t248*t329;
  p_output1[3]=t1155 + t1162 + t1178 + t1194 + t1210 + t1231 + t1266 + t1280 + t10*t1295*t220 - 1.*t10*t1298*t329;
  p_output1[4]=t1152*t1417 + t1450*t1461 - 0.038576*(t1062*t1480 + t1051*t1505 + t1036*t1541) - 0.80315*(t1115*t1480 + t1099*t1505 + t1088*t1541) + t1371*t261 + t1541*t720 + t1505*t829 + t1480*t942 - 0.148715*(t1008*t1480 + t1541*t986 + t1505*t993);
  p_output1[5]=t1632*t1645 + t1698*t1706 + t1730*t1769 - 0.80315*(t1706*t1784 + t1769*t1793 - 1.000000000016*t1645*t641) - 0.038576*(t1645*t1814 + t1769*t1831 - 1.000000000049*t1706*t641) - 0.148715*(t1645*t1844 + t1706*t1874 - 6.5e-11*t1769*t641);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=-1.*t10*t1896*t195 - 0.038576*(t1036*t2012 + t1051*t2024 + t1062*t2039) - 0.80315*(t1088*t2012 + t1099*t2024 + t1115*t2039) + t1949*t248 + t1969*t308 + t1977*t463 + t2002*t547 + t2012*t720 + t2024*t829 + t2039*t942 - 0.148715*(t1008*t2039 + t2012*t986 + t2024*t993);
  p_output1[9]=-0.038576*(t1036*t2187 + t1051*t2202 + t1062*t2234) - 0.80315*(t1088*t2187 + t1099*t2202 + t1115*t2234) + t10*t1925*t220*t248 + t1925*t195*t261 - 1.*t10*t1925*t308*t329 + t2155*t463 + t2165*t547 + t2187*t720 + t2202*t829 + t2234*t942 - 0.148715*(t1008*t2234 + t2187*t986 + t2202*t993);
  p_output1[10]=-0.038576*(t1062*t2399 + t1051*t2417 + t1036*t2442) - 0.80315*(t1115*t2399 + t1099*t2417 + t1088*t2442) + t2358*t248 + t2353*t308 + t2385*t463 + t2374*t547 + t2442*t720 + t2417*t829 + t2399*t942 - 0.148715*(t1008*t2399 + t2442*t986 + t2417*t993);
  p_output1[11]=t1298*t2358 + t1295*t2517 - 0.038576*(t1062*t2595 + t1051*t2622 + t1036*t2645) - 0.80315*(t1115*t2595 + t1099*t2622 + t1088*t2645) + t2577*t463 + t2544*t547 + t2645*t720 + t2622*t829 + t2595*t942 - 0.148715*(t1008*t2595 + t2645*t986 + t2622*t993);
  p_output1[12]=-1.*t10*t1371*t1925 + t1417*t2544 + t1450*t2724 - 0.038576*(t1062*t2732 + t1051*t2741 + t1036*t2749) - 0.80315*(t1115*t2732 + t1099*t2741 + t1088*t2749) + t2749*t720 + t2741*t829 + t2732*t942 - 0.148715*(t1008*t2732 + t2749*t986 + t2741*t993);
  p_output1[13]=t1632*t2812 + t1698*t2850 + t1730*t2889 - 0.80315*(t1784*t2850 + t1793*t2889 - 1.000000000016*t2812*t641) - 0.038576*(t1814*t2812 + t1831*t2889 - 1.000000000049*t2850*t641) - 0.148715*(t1844*t2812 + t1874*t2850 - 6.5e-11*t2889*t641);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-1.*t10*t1925*t195 + t248*t2517 - 0.038576*(t1036*t2812 + t1051*t2850 + t1062*t2889) - 0.80315*(t1088*t2812 + t1099*t2850 + t1115*t2889) + t2358*t308 + t2544*t463 + t2724*t547 + t2812*t720 + t2850*t829 + t2889*t942 - 0.148715*(t1008*t2889 + t2812*t986 + t2850*t993);
  p_output1[17]=-1.*t10*t1896*t220*t248 - 1.*t1896*t195*t261 - 0.038576*(t1036*t3145 + t1051*t3177 + t1062*t3204) - 0.80315*(t1088*t3145 + t1099*t3177 + t1115*t3204) + t10*t1896*t308*t329 + t3120*t463 + t3130*t547 + t3145*t720 + t3177*t829 + t3204*t942 - 0.148715*(t1008*t3204 + t3145*t986 + t3177*t993);
  p_output1[18]=t1949*t308 + t248*t3324 - 0.038576*(t1062*t3361 + t1051*t3372 + t1036*t3416) - 0.80315*(t1115*t3361 + t1099*t3372 + t1088*t3416) + t3350*t463 + t3342*t547 + t3416*t720 + t3372*t829 + t3361*t942 - 0.148715*(t1008*t3361 + t3416*t986 + t3372*t993);
  p_output1[19]=t1298*t3324 + t1295*t3504 - 0.038576*(t1062*t3577 + t1051*t3592 + t1036*t3628) - 0.80315*(t1115*t3577 + t1099*t3592 + t1088*t3628) + t3557*t463 + t3535*t547 + t3628*t720 + t3592*t829 + t3577*t942 - 0.148715*(t1008*t3577 + t3628*t986 + t3592*t993);
  p_output1[20]=t10*t1371*t1896 + t1417*t3535 + t1450*t3720 - 0.038576*(t1062*t3744 + t1051*t3788 + t1036*t3826) - 0.80315*(t1115*t3744 + t1099*t3788 + t1088*t3826) + t3826*t720 + t3788*t829 + t3744*t942 - 0.148715*(t1008*t3744 + t3826*t986 + t3788*t993);
  p_output1[21]=t1632*t3918 + t1698*t3937 + t1730*t3957 - 0.80315*(t1784*t3937 + t1793*t3957 - 1.000000000016*t3918*t641) - 0.038576*(t1814*t3918 + t1831*t3957 - 1.000000000049*t3937*t641) - 0.148715*(t1844*t3918 + t1874*t3937 - 6.5e-11*t3957*t641);
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

#include "J_h_RrFoot_ParallelStance1.hh"

namespace ParallelStance1
{

void J_h_RrFoot_ParallelStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
