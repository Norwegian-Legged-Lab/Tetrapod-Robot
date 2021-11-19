/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:28:58 GMT+01:00
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
  double t203;
  double t242;
  double t266;
  double t95;
  double t130;
  double t161;
  double t177;
  double t344;
  double t347;
  double t283;
  double t332;
  double t349;
  double t350;
  double t371;
  double t480;
  double t486;
  double t497;
  double t505;
  double t520;
  double t522;
  double t532;
  double t168;
  double t573;
  double t584;
  double t615;
  double t659;
  double t675;
  double t410;
  double t880;
  double t902;
  double t754;
  double t858;
  double t763;
  double t777;
  double t944;
  double t783;
  double t784;
  double t719;
  double t734;
  double t193;
  double t959;
  double t863;
  double t907;
  double t964;
  double t969;
  double t1019;
  double t1023;
  double t1055;
  double t416;
  double t465;
  double t1091;
  double t1100;
  double t542;
  double t558;
  double t1122;
  double t1126;
  double t202;
  double t1138;
  double t1141;
  double t1169;
  double t823;
  double t1190;
  double t1191;
  double t1196;
  double t1200;
  double t1207;
  double t1208;
  double t1211;
  double t1217;
  double t1219;
  double t1247;
  double t1255;
  double t1259;
  double t1268;
  double t1273;
  double t1276;
  double t1283;
  double t1296;
  double t1299;
  double t1300;
  double t1310;
  double t1313;
  double t1316;
  double t1336;
  double t1343;
  double t1375;
  double t1377;
  double t1379;
  double t1388;
  double t1396;
  double t1408;
  double t1420;
  double t1424;
  double t930;
  double t931;
  double t826;
  double t1009;
  double t1174;
  double t1486;
  double t1493;
  double t1546;
  double t1551;
  double t1557;
  double t1559;
  double t1158;
  double t1164;
  double t1170;
  double t1171;
  double t1176;
  double t1184;
  double t1248;
  double t1322;
  double t1427;
  double t1435;
  double t848;
  double t865;
  double t910;
  double t916;
  double t951;
  double t958;
  double t987;
  double t988;
  double t1040;
  double t1073;
  double t1074;
  double t1466;
  double t1473;
  double t1476;
  double t1483;
  double t1499;
  double t1503;
  double t1507;
  double t1522;
  double t1525;
  double t1526;
  double t1563;
  double t1564;
  double t1566;
  double t1568;
  double t1575;
  double t1579;
  double t1582;
  double t1584;
  double t1588;
  double t1590;
  double t921;
  double t997;
  double t1075;
  double t1090;
  double t1712;
  double t1715;
  double t1716;
  double t1719;
  double t1729;
  double t1736;
  double t1750;
  double t1757;
  double t1592;
  double t1116;
  double t1132;
  double t1142;
  double t1157;
  double t1439;
  double t1451;
  double t1456;
  double t1463;
  double t1841;
  double t1834;
  double t1855;
  double t1875;
  double t1876;
  double t1644;
  double t1878;
  double t1890;
  double t1891;
  double t1895;
  double t1605;
  double t1610;
  double t1620;
  double t1622;
  double t1629;
  double t1630;
  double t1635;
  double t1638;
  double t1922;
  double t1958;
  double t1970;
  double t1976;
  double t381;
  double t536;
  double t684;
  double t699;
  double t749;
  double t781;
  double t798;
  double t799;
  double t2077;
  double t2110;
  double t2114;
  double t2120;
  double t2079;
  double t2080;
  double t2084;
  double t2124;
  double t2073;
  double t2049;
  double t2053;
  double t2058;
  double t2064;
  double t2069;
  double t2101;
  double t2126;
  double t2127;
  double t2190;
  double t2171;
  double t2175;
  double t2176;
  double t2166;
  double t2194;
  double t2197;
  double t2205;
  double t2004;
  double t2008;
  double t2011;
  double t2022;
  double t2023;
  double t2026;
  double t1910;
  double t1915;
  double t1920;
  double t1835;
  double t1842;
  double t1843;
  double t2315;
  double t2316;
  double t2323;
  double t2292;
  double t2297;
  double t2298;
  double t2330;
  double t2332;
  double t2355;
  double t2263;
  double t2265;
  double t2275;
  double t2365;
  double t2367;
  double t2372;
  double t2356;
  double t2283;
  double t2289;
  double t2290;
  double t2429;
  double t2441;
  double t2444;
  double t2378;
  double t2445;
  double t2446;
  double t2448;
  double t2411;
  double t2413;
  double t2423;
  double t2470;
  double t2474;
  double t2475;
  double t2705;
  double t2715;
  double t2716;
  double t2717;
  double t2720;
  double t2722;
  double t2723;
  double t2727;
  double t2632;
  double t2658;
  double t2456;
  double t2458;
  double t2461;
  double t2887;
  double t2070;
  double t2135;
  double t2159;
  double t2910;
  double t2494;
  double t2497;
  double t2501;
  double t3083;
  double t3084;
  double t3085;
  double t3086;
  double t3101;
  double t3107;
  double t3114;
  double t3119;
  double t2994;
  double t3031;
  double t3260;
  double t3269;
  t203 = Cos(var1[17]);
  t242 = -1.*t203;
  t266 = 1. + t242;
  t95 = Cos(var1[16]);
  t130 = -1.*t95;
  t161 = 1. + t130;
  t177 = Sin(var1[16]);
  t344 = Sin(var1[17]);
  t347 = 4.e-6*t344;
  t283 = 1.000000000016*t266;
  t332 = -7.e-6*t266;
  t349 = t332 + t347;
  t350 = -7.e-6*t349;
  t371 = -1. + t283 + t350;
  t480 = 2.8e-11*t266;
  t486 = 4.e-6*t266;
  t497 = 7.e-6*t344;
  t505 = t486 + t497;
  t520 = -7.e-6*t505;
  t522 = -1.*t344;
  t532 = t480 + t520 + t522;
  t168 = -7.e-6*t161;
  t573 = -6.5e-11*t266;
  t584 = 1. + t573;
  t615 = -7.e-6*t584;
  t659 = 7.e-6*t266;
  t675 = t615 + t659 + t347;
  t410 = 4.e-6*t161;
  t880 = -1. + t203;
  t902 = 4.e-6*t880;
  t754 = -2.8e-11*t161;
  t858 = -4.e-6*t344;
  t763 = -1.*t177;
  t777 = t754 + t763;
  t944 = 1.000000000049*t266;
  t783 = 4.e-6*t177;
  t784 = t168 + t783;
  t719 = -1.000000000016*t161;
  t734 = 1. + t719;
  t193 = -4.e-6*t177;
  t959 = -7.e-6*t344;
  t863 = t332 + t858;
  t907 = t902 + t497;
  t964 = -2.8e-11*t266;
  t969 = t964 + t344;
  t1019 = -1.000000000016*t266;
  t1023 = 1. + t1019;
  t1055 = t480 + t344;
  t416 = -7.e-6*t177;
  t465 = t410 + t416;
  t1091 = 4.e-6*t505;
  t1100 = -1. + t944 + t1091;
  t542 = -6.5e-11*t161;
  t558 = 1. + t542;
  t1122 = 4.e-6*t584;
  t1126 = t1122 + t902 + t497;
  t202 = t168 + t193;
  t1138 = 4.e-6*t349;
  t1141 = t480 + t1138 + t344;
  t1169 = 7.e-6*t161;
  t823 = 7.e-6*t177;
  t1190 = 2.826290000000002e-7*var1[17];
  t1191 = -0.148715*t584;
  t1196 = -2.18904205e-16*t266;
  t1200 = t486 + t959;
  t1207 = -0.038576*t1200;
  t1208 = -0.80315*t863;
  t1211 = t659 + t347;
  t1217 = -0.5031510000080001*t1211;
  t1219 = -0.038575000014*t907;
  t1247 = t1190 + t1191 + t1196 + t1207 + t1208 + t1217 + t1219;
  t1255 = 1.1305160000000008e-12*var1[17];
  t1259 = -1.000000000049*t266;
  t1268 = 1. + t1259;
  t1273 = -0.038576*t1268;
  t1276 = -0.03857500001589017*t266;
  t1283 = t480 + t522;
  t1296 = -0.5031510000080001*t1283;
  t1299 = t902 + t959;
  t1300 = -3.367757e-6*t1299;
  t1310 = -0.148715*t505;
  t1313 = -0.80315*t969;
  t1316 = t1255 + t1273 + t1276 + t1296 + t1300 + t1310 + t1313;
  t1336 = -1.9784030000000015e-12*var1[17];
  t1343 = -0.80315*t1023;
  t1375 = -0.5031510000160505*t266;
  t1377 = t964 + t522;
  t1379 = -0.038576*t1377;
  t1388 = t659 + t858;
  t1396 = -3.367757e-6*t1388;
  t1408 = -0.148715*t349;
  t1420 = -0.038575000014*t1055;
  t1424 = t1336 + t1343 + t1375 + t1379 + t1396 + t1408 + t1420;
  t930 = -1.000000000049*t161;
  t931 = 1. + t930;
  t826 = t410 + t823;
  t1009 = t754 + t177;
  t1174 = 2.8e-11*t161;
  t1486 = -1. + t95;
  t1493 = 4.e-6*t1486;
  t1546 = t931*t1100;
  t1551 = t826*t1126;
  t1557 = t1009*t1141;
  t1559 = t1546 + t1551 + t1557;
  t1158 = -2.7726089999999997e-12*var1[16];
  t1164 = -0.2812110000084994*t161;
  t1170 = t1169 + t193;
  t1171 = -1.8134809999999998e-6*t1170;
  t1176 = t1174 + t177;
  t1184 = -0.038749000006999997*t1176;
  t1248 = t784*t1247;
  t1322 = t777*t1316;
  t1427 = t734*t1424;
  t1435 = t1158 + t1164 + t1171 + t1184 + t1248 + t1322 + t1427;
  t848 = 6.5e-11*t266;
  t865 = 7.e-6*t863;
  t910 = 4.e-6*t907;
  t916 = -1. + t848 + t865 + t910;
  t951 = -1. + t944;
  t958 = 4.e-6*t951;
  t987 = 7.e-6*t969;
  t988 = t958 + t902 + t959 + t987;
  t1040 = 7.e-6*t1023;
  t1073 = 4.e-6*t1055;
  t1074 = t1040 + t659 + t858 + t1073;
  t1466 = 3.9608699999999997e-7*var1[16];
  t1473 = -1.1787626499999999e-16*t161;
  t1476 = t1169 + t783;
  t1483 = -0.281211000004*t1476;
  t1499 = t1493 + t823;
  t1503 = -0.038749000006999997*t1499;
  t1507 = t558*t1247;
  t1522 = t465*t1316;
  t1525 = t202*t1424;
  t1526 = t1466 + t1473 + t1483 + t1503 + t1507 + t1522 + t1525;
  t1563 = 1.5843479999999999e-12*var1[16];
  t1564 = -0.03874900000889869*t161;
  t1566 = t1174 + t763;
  t1568 = -0.281211000004*t1566;
  t1575 = t1493 + t416;
  t1579 = -1.8134809999999998e-6*t1575;
  t1582 = t826*t1247;
  t1584 = t931*t1316;
  t1588 = t1009*t1424;
  t1590 = t1563 + t1564 + t1568 + t1579 + t1582 + t1584 + t1588;
  t921 = t826*t916;
  t997 = t931*t988;
  t1075 = t1009*t1074;
  t1090 = t921 + t997 + t1075;
  t1712 = -1.*t1247*t1126;
  t1715 = -1.*t1100*t1316;
  t1716 = -1.*t1141*t1424;
  t1719 = t1712 + t1715 + t1716;
  t1729 = t1247*t916;
  t1736 = t1316*t988;
  t1750 = t1424*t1074;
  t1757 = t1729 + t1736 + t1750;
  t1592 = -1.*t1559*t1590;
  t1116 = t777*t1100;
  t1132 = t784*t1126;
  t1142 = t734*t1141;
  t1157 = t1116 + t1132 + t1142;
  t1439 = t465*t1100;
  t1451 = t558*t1126;
  t1456 = t202*t1141;
  t1463 = t1439 + t1451 + t1456;
  t1841 = Cos(var1[15]);
  t1834 = Sin(var1[15]);
  t1855 = -1.*t1841;
  t1875 = 1. + t1855;
  t1876 = -0.15121*t1875;
  t1644 = t1590*t1090;
  t1878 = 0.15121*t1834;
  t1890 = t1834*t1435;
  t1891 = t1841*t1526;
  t1895 = t1876 + t1878 + t1890 + t1891;
  t1605 = t784*t916;
  t1610 = t777*t988;
  t1620 = t734*t1074;
  t1622 = t1605 + t1610 + t1620;
  t1629 = t558*t916;
  t1630 = t465*t988;
  t1635 = t202*t1074;
  t1638 = t1629 + t1630 + t1635;
  t1922 = -0.15121*t1834;
  t1958 = t1841*t1435;
  t1970 = -1.*t1834*t1526;
  t1976 = t1876 + t1922 + t1958 + t1970;
  t381 = t202*t371;
  t536 = t465*t532;
  t684 = t558*t675;
  t699 = t381 + t536 + t684;
  t749 = t734*t371;
  t781 = t777*t532;
  t798 = t784*t675;
  t799 = t749 + t781 + t798;
  t2077 = Cos(var1[5]);
  t2110 = t1841*t699;
  t2114 = t1834*t799;
  t2120 = t2110 + t2114;
  t2079 = -1.*t1834*t699;
  t2080 = t1841*t799;
  t2084 = t2079 + t2080;
  t2124 = Sin(var1[5]);
  t2073 = Cos(var1[4]);
  t2049 = t1009*t371;
  t2053 = t931*t532;
  t2058 = t826*t675;
  t2064 = t2049 + t2053 + t2058;
  t2069 = Sin(var1[4]);
  t2101 = t2077*t2084;
  t2126 = -1.*t2120*t2124;
  t2127 = t2101 + t2126;
  t2190 = Cos(var1[3]);
  t2171 = t2077*t2120;
  t2175 = t2084*t2124;
  t2176 = t2171 + t2175;
  t2166 = Sin(var1[3]);
  t2194 = t2073*t2064;
  t2197 = -1.*t2069*t2127;
  t2205 = t2194 + t2197;
  t2004 = t1834*t1622;
  t2008 = t1841*t1638;
  t2011 = t2004 + t2008;
  t2022 = t1841*t1622;
  t2023 = -1.*t1834*t1638;
  t2026 = t2022 + t2023;
  t1910 = t1841*t1157;
  t1915 = -1.*t1834*t1463;
  t1920 = t1910 + t1915;
  t1835 = t1834*t1157;
  t1842 = t1841*t1463;
  t1843 = t1835 + t1842;
  t2315 = t2077*t1843;
  t2316 = t1920*t2124;
  t2323 = t2315 + t2316;
  t2292 = t2077*t1976;
  t2297 = -1.*t1895*t2124;
  t2298 = t2292 + t2297;
  t2330 = t2077*t1895;
  t2332 = t1976*t2124;
  t2355 = t2330 + t2332;
  t2263 = t2077*t2011;
  t2265 = t2026*t2124;
  t2275 = t2263 + t2265;
  t2365 = t2077*t2026;
  t2367 = -1.*t2011*t2124;
  t2372 = t2365 + t2367;
  t2356 = -1.*t2323*t2355;
  t2283 = t2077*t1920;
  t2289 = -1.*t1843*t2124;
  t2290 = t2283 + t2289;
  t2429 = t1559*t2069;
  t2441 = t2073*t2290;
  t2444 = t2429 + t2441;
  t2378 = t2355*t2275;
  t2445 = t1590*t2069;
  t2446 = t2073*t2298;
  t2448 = t2445 + t2446;
  t2411 = t1090*t2069;
  t2413 = t2073*t2372;
  t2423 = t2411 + t2413;
  t2470 = t2073*t1590;
  t2474 = -1.*t2069*t2298;
  t2475 = t2470 + t2474;
  t2705 = t1247*t675;
  t2715 = t532*t1316;
  t2716 = t371*t1424;
  t2717 = t2705 + t2715 + t2716;
  t2720 = -1.*t1247*t916;
  t2722 = -1.*t1316*t988;
  t2723 = -1.*t1424*t1074;
  t2727 = t2720 + t2722 + t2723;
  t2632 = t2064*t1590;
  t2658 = -1.*t1590*t1090;
  t2456 = t2073*t1559;
  t2458 = -1.*t2069*t2290;
  t2461 = t2456 + t2458;
  t2887 = t2176*t2355;
  t2070 = t2064*t2069;
  t2135 = t2073*t2127;
  t2159 = t2070 + t2135;
  t2910 = -1.*t2355*t2275;
  t2494 = t2073*t1090;
  t2497 = -1.*t2069*t2372;
  t2501 = t2494 + t2497;
  t3083 = -1.*t1247*t675;
  t3084 = -1.*t532*t1316;
  t3085 = -1.*t371*t1424;
  t3086 = t3083 + t3084 + t3085;
  t3101 = t1247*t1126;
  t3107 = t1100*t1316;
  t3114 = t1141*t1424;
  t3119 = t3101 + t3107 + t3114;
  t2994 = -1.*t2064*t1590;
  t3031 = t1559*t1590;
  t3260 = -1.*t2176*t2355;
  t3269 = t2323*t2355;
  p_output1[0]=t2159*var2[0] + (t2176*t2190 - 1.*t2166*t2205)*var2[1] + (t2166*t2176 + t2190*t2205)*var2[2] + (t2423*(t2356 - 1.*t2444*t2448 - 1.*t2461*t2475) + t2444*(t2378 + t2423*t2448 + t2475*t2501))*var2[3] + (t2275*(t1592 - 1.*t2290*t2298 + t2356) + t2323*(t1644 + t2298*t2372 + t2378))*var2[4] + (t1090*(t1592 - 1.*t1843*t1895 - 1.*t1920*t1976) + t1559*(t1644 + t1895*t2011 + t1976*t2026))*var2[5] + (t1090*(-1.*t1157*t1435 - 1.*t1463*t1526 + t1592) + t1559*(t1435*t1622 + t1526*t1638 + t1644) + 0.15121*t699 - 0.15121*t799)*var2[15] + (-1.*t1126*t1757 + 7.e-6*(t1074*t1719 + t1141*t1757) - 0.038749*t371 + 0.281211*t532 + 1.e-6*(t332 + 7.e-6*t584 + t858) - 1.*t1719*t916 + 4.e-6*(-1.*t1100*t1757 - 1.*t1719*t988))*var2[16] - 4.051285074010787e-7*var2[17];
  p_output1[1]=t2444*var2[0] + (t2190*t2323 - 1.*t2166*t2461)*var2[1] + (t2166*t2323 + t2190*t2461)*var2[2] + (t2423*(t2159*t2448 + t2205*t2475 + t2887) + t2159*(-1.*t2423*t2448 - 1.*t2475*t2501 + t2910))*var2[3] + (t2275*(t2127*t2298 + t2632 + t2887) + t2176*(-1.*t2298*t2372 + t2658 + t2910))*var2[4] + (t1090*(t1976*t2084 + t1895*t2120 + t2632) + t2064*(-1.*t1895*t2011 - 1.*t1976*t2026 + t2658))*var2[5] + (-0.15121*t1157 + 0.15121*t1463 + t2064*(-1.*t1435*t1622 - 1.*t1526*t1638 + t2658) + t1090*(t2632 + t1526*t699 + t1435*t799))*var2[15] + (0.281211*t1100 - 0.038749*t1141 + 7.e-6*(t1074*t2717 + t2727*t371) - 1.*t2727*t675 - 1.*t2717*t916 + 1.e-6*(t486 + 4.e-6*(-1. + t848) + t959) + 4.e-6*(-1.*t2727*t532 - 1.*t2717*t988))*var2[16] + 0.3000000410492048*var2[17];
  p_output1[2]=t2423*var2[0] + (t2190*t2275 - 1.*t2166*t2501)*var2[1] + (t2166*t2275 + t2190*t2501)*var2[2] + (t2444*(-1.*t2159*t2448 - 1.*t2205*t2475 + t3260) + t2159*(t2444*t2448 + t2461*t2475 + t3269))*var2[3] + (t2323*(-1.*t2127*t2298 + t2994 + t3260) + t2176*(t2290*t2298 + t3031 + t3269))*var2[4] + (t1559*(-1.*t1976*t2084 - 1.*t1895*t2120 + t2994) + t2064*(t1843*t1895 + t1920*t1976 + t3031))*var2[5] + (-0.15121*t1622 + 0.15121*t1638 + t2064*(t1157*t1435 + t1463*t1526 + t3031) + t1559*(t2994 - 1.*t1526*t699 - 1.*t1435*t799))*var2[15] + (-0.038749*t1074 - 1.*t1126*t3086 + 7.e-6*(t1141*t3086 + t3119*t371) + 4.e-6*(-1.*t1100*t3086 - 1.*t3119*t532) - 1.*t3119*t675 + 1.e-6*(1. + 4.e-6*t1200 + t573 - 7.e-6*t863) + 0.281211*t988)*var2[16] - 2.826290000000002e-7*var2[17];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_RrFoot_ParallelStance1.hh"

namespace ParallelStance1
{

void dh_RrFoot_ParallelStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
