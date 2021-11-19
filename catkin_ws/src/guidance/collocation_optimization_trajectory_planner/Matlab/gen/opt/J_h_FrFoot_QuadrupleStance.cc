/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 17:51:52 GMT+01:00
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
  double t108;
  double t696;
  double t783;
  double t787;
  double t852;
  double t933;
  double t955;
  double t265;
  double t302;
  double t397;
  double t445;
  double t677;
  double t999;
  double t25;
  double t1044;
  double t1055;
  double t1061;
  double t1092;
  double t1120;
  double t1131;
  double t1145;
  double t1150;
  double t1159;
  double t1174;
  double t1341;
  double t1204;
  double t1220;
  double t1261;
  double t1265;
  double t1281;
  double t1286;
  double t1361;
  double t1368;
  double t1373;
  double t1375;
  double t1435;
  double t1454;
  double t1455;
  double t1460;
  double t1462;
  double t1464;
  double t974;
  double t981;
  double t834;
  double t945;
  double t1070;
  double t1074;
  double t1087;
  double t1011;
  double t1022;
  double t1024;
  double t1035;
  double t1042;
  double t1383;
  double t1385;
  double t1409;
  double t1419;
  double t1426;
  double t1711;
  double t1712;
  double t1718;
  double t1747;
  double t1748;
  double t1750;
  double t1314;
  double t1322;
  double t1345;
  double t1346;
  double t1349;
  double t1167;
  double t1177;
  double t1181;
  double t1766;
  double t1776;
  double t1779;
  double t1801;
  double t1816;
  double t1829;
  double t1647;
  double t1662;
  double t1845;
  double t1846;
  double t1849;
  double t1502;
  double t1523;
  double t1932;
  double t1734;
  double t1757;
  double t1799;
  double t1839;
  double t1859;
  double t1862;
  double t1864;
  double t1866;
  double t1867;
  double t1880;
  double t1881;
  double t1884;
  double t1893;
  double t1896;
  double t1902;
  double t1903;
  double t1904;
  double t1907;
  double t1910;
  double t1913;
  double t1988;
  double t1989;
  double t1993;
  double t2001;
  double t2004;
  double t2009;
  double t2019;
  double t2021;
  double t2023;
  double t2051;
  double t2078;
  double t2082;
  double t2085;
  double t2088;
  double t2184;
  double t2192;
  double t2208;
  double t2215;
  double t2243;
  double t2249;
  double t2256;
  double t2288;
  double t2289;
  double t2301;
  double t2303;
  double t100;
  double t377;
  double t440;
  double t483;
  double t613;
  double t2399;
  double t2409;
  double t2405;
  double t2410;
  double t2412;
  double t2419;
  double t2420;
  double t2422;
  double t2430;
  double t2431;
  double t2436;
  double t2439;
  double t2447;
  double t2453;
  double t2459;
  double t2465;
  double t2467;
  double t2469;
  double t2472;
  double t2473;
  double t2477;
  double t2478;
  double t2480;
  double t2482;
  double t2484;
  double t2485;
  double t2545;
  double t2548;
  double t2549;
  double t2553;
  double t2554;
  double t2558;
  double t2569;
  double t2578;
  double t2583;
  double t2593;
  double t2599;
  double t2600;
  double t2604;
  double t2605;
  double t2607;
  double t2611;
  double t2612;
  double t2613;
  double t2680;
  double t2682;
  double t2683;
  double t2687;
  double t2688;
  double t2689;
  double t2700;
  double t2706;
  double t2707;
  double t2715;
  double t2731;
  double t2741;
  double t2744;
  double t2748;
  double t2751;
  double t2761;
  double t2764;
  double t2765;
  double t2770;
  double t2783;
  double t2785;
  double t1933;
  double t1935;
  double t1940;
  double t2852;
  double t2859;
  double t2860;
  double t2875;
  double t2877;
  double t2882;
  double t2884;
  double t2897;
  double t2898;
  double t2906;
  double t2950;
  double t2961;
  double t2988;
  double t2994;
  double t3001;
  double t3011;
  double t1950;
  double t1953;
  double t1961;
  double t1962;
  double t1970;
  double t1975;
  double t1983;
  double t1987;
  double t3117;
  double t3126;
  double t3148;
  double t3170;
  double t3176;
  double t3177;
  double t3181;
  double t3192;
  double t3193;
  double t3213;
  double t3221;
  double t3228;
  double t3230;
  double t3248;
  double t2175;
  double t2178;
  double t2183;
  double t2233;
  double t2240;
  double t2265;
  double t2279;
  double t2287;
  double t3325;
  double t3329;
  double t3332;
  double t3337;
  double t3341;
  double t3348;
  double t3369;
  double t3373;
  double t3375;
  double t3377;
  double t3379;
  double t3396;
  double t3549;
  double t3551;
  double t3556;
  double t3562;
  double t3566;
  double t3567;
  double t3577;
  double t3584;
  double t3588;
  double t3589;
  double t3610;
  double t3614;
  double t3631;
  double t3634;
  double t3641;
  double t3643;
  double t3647;
  double t3655;
  double t3819;
  double t3851;
  double t3861;
  double t3867;
  double t3878;
  double t3879;
  double t3904;
  double t3918;
  double t3932;
  double t3952;
  double t3962;
  double t3968;
  double t3978;
  double t3980;
  double t3992;
  double t3996;
  double t3997;
  double t4065;
  double t4072;
  double t4089;
  double t4114;
  double t4120;
  double t4135;
  double t4142;
  double t4152;
  double t4154;
  double t4167;
  double t4194;
  double t4196;
  double t4205;
  double t4208;
  double t4233;
  double t4243;
  double t4348;
  double t4352;
  double t4370;
  double t4388;
  double t4401;
  double t4404;
  double t4406;
  double t4407;
  double t4419;
  double t4435;
  double t4441;
  double t4446;
  double t4449;
  double t4529;
  double t4532;
  double t4537;
  double t4546;
  double t4565;
  double t4568;
  double t4569;
  double t4582;
  double t4591;
  double t4593;
  double t4595;
  t108 = Cos(var1[10]);
  t696 = Cos(var1[9]);
  t783 = -1.*t696;
  t787 = 1. + t783;
  t852 = Sin(var1[9]);
  t933 = -0.15121*t852;
  t955 = Sin(var1[4]);
  t265 = -1.*t108;
  t302 = 1. + t265;
  t397 = -1. + t108;
  t445 = Sin(var1[10]);
  t677 = Cos(var1[5]);
  t999 = Sin(var1[5]);
  t25 = Cos(var1[4]);
  t1044 = t677*t852*t955;
  t1055 = t696*t955*t999;
  t1061 = t1044 + t1055;
  t1092 = -1.*t696*t677*t955;
  t1120 = t852*t955*t999;
  t1131 = t1092 + t1120;
  t1145 = Cos(var1[11]);
  t1150 = -1.*t1145;
  t1159 = 1. + t1150;
  t1174 = Sin(var1[11]);
  t1341 = -1. + t1145;
  t1204 = t25*t445;
  t1220 = -4.e-6*t445*t1061;
  t1261 = -1.000000000016*t302;
  t1265 = 1. + t1261;
  t1281 = t1265*t1131;
  t1286 = t1204 + t1220 + t1281;
  t1361 = t108*t25;
  t1368 = 4.e-6*t302*t1061;
  t1373 = -1.*t445*t1131;
  t1375 = t1361 + t1368 + t1373;
  t1435 = 4.e-6*t302*t25;
  t1454 = 1.6e-11*t397;
  t1455 = 1. + t1454;
  t1460 = t1455*t1061;
  t1462 = 4.e-6*t445*t1131;
  t1464 = t1435 + t1460 + t1462;
  t974 = -0.15121*t787;
  t981 = t974 + t933;
  t834 = 0.15121*t787;
  t945 = t834 + t933;
  t1070 = 0.281210000008499*t302;
  t1074 = -0.03874900000062*t445;
  t1087 = t1070 + t1074;
  t1011 = -1.2484e-7*var1[10];
  t1022 = 2.479936e-18*t302;
  t1024 = -1.54996e-7*t397;
  t1035 = 1.124840000016e-6*t445;
  t1042 = t1011 + t1022 + t1024 + t1035;
  t1383 = -1.26e-8*var1[11];
  t1385 = 2.552896e-18*t1159;
  t1409 = -1.59556e-7*t1341;
  t1419 = 2.012600000032e-6*t1174;
  t1426 = t1383 + t1385 + t1409 + t1419;
  t1711 = -1.*t25*t677*t852;
  t1712 = -1.*t696*t25*t999;
  t1718 = t1711 + t1712;
  t1747 = -1.*t696*t25*t677;
  t1748 = t25*t852*t999;
  t1750 = t1747 + t1748;
  t1314 = -5.04e-14*var1[11];
  t1322 = -0.039889*t1159;
  t1345 = 6.38224e-13*t1341;
  t1346 = -0.503150000008*t1174;
  t1349 = t1314 + t1322 + t1345 + t1346;
  t1167 = 0.50315000001605*t1159;
  t1177 = -0.0398890000006382*t1174;
  t1181 = t1167 + t1177;
  t1766 = 4.e-6*t445*t1718;
  t1776 = t1455*t1750;
  t1779 = t1766 + t1776;
  t1801 = -1.*t445*t1718;
  t1816 = 4.e-6*t302*t1750;
  t1829 = t1801 + t1816;
  t1647 = -1.000000000016*t1159;
  t1662 = 1. + t1647;
  t1845 = t1265*t1718;
  t1846 = -4.e-6*t445*t1750;
  t1849 = t1845 + t1846;
  t1502 = 1.6e-11*t1341;
  t1523 = 1. + t1502;
  t1932 = -0.15121*t696;
  t1734 = t1087*t1718;
  t1757 = t1042*t1750;
  t1799 = t1426*t1779;
  t1839 = t1349*t1829;
  t1859 = t1181*t1849;
  t1862 = -4.e-6*t1174*t1779;
  t1864 = t1174*t1829;
  t1866 = t1662*t1849;
  t1867 = t1862 + t1864 + t1866;
  t1880 = 0.803147*t1867;
  t1881 = 4.e-6*t1159*t1779;
  t1884 = t1145*t1829;
  t1893 = -1.*t1174*t1849;
  t1896 = t1881 + t1884 + t1893;
  t1902 = -0.041195*t1896;
  t1903 = t1523*t1779;
  t1904 = 4.e-6*t1159*t1829;
  t1907 = 4.e-6*t1174*t1849;
  t1910 = t1903 + t1904 + t1907;
  t1913 = -0.14871*t1910;
  t1988 = t696*t25*t677;
  t1989 = -1.*t25*t852*t999;
  t1993 = t1988 + t1989;
  t2001 = -1.*t445*t955;
  t2004 = -1.*t108*t1993;
  t2009 = t2001 + t1766 + t2004;
  t2019 = 4.e-6*t445*t955;
  t2021 = -1.6e-11*t445*t1718;
  t2023 = 4.e-6*t108*t1993;
  t2051 = t2019 + t2021 + t2023;
  t2078 = t108*t955;
  t2082 = -4.e-6*t108*t1718;
  t2085 = -1.000000000016*t445*t1993;
  t2088 = t2078 + t2082 + t2085;
  t2184 = t445*t955;
  t2192 = -4.e-6*t445*t1718;
  t2208 = t1265*t1993;
  t2215 = t2184 + t2192 + t2208;
  t2243 = 4.e-6*t302*t1718;
  t2249 = -1.*t445*t1993;
  t2256 = t2078 + t2243 + t2249;
  t2288 = 4.e-6*t302*t955;
  t2289 = t1455*t1718;
  t2301 = 4.e-6*t445*t1993;
  t2303 = t2288 + t2289 + t2301;
  t100 = -4.9936e-13*var1[10];
  t377 = -0.038749*t302;
  t440 = 6.19984e-13*t397;
  t483 = -0.281210000004*t445;
  t613 = t100 + t377 + t440 + t483;
  t2399 = Cos(var1[3]);
  t2409 = Sin(var1[3]);
  t2405 = t2399*t677*t955;
  t2410 = -1.*t2409*t999;
  t2412 = t2405 + t2410;
  t2419 = -1.*t677*t2409;
  t2420 = -1.*t2399*t955*t999;
  t2422 = t2419 + t2420;
  t2430 = -1.*t852*t2412;
  t2431 = t696*t2422;
  t2436 = t2430 + t2431;
  t2439 = t696*t2412;
  t2447 = t852*t2422;
  t2453 = t2439 + t2447;
  t2459 = -1.*t2399*t25*t445;
  t2465 = -4.e-6*t445*t2436;
  t2467 = t1265*t2453;
  t2469 = t2459 + t2465 + t2467;
  t2472 = -1.*t108*t2399*t25;
  t2473 = 4.e-6*t302*t2436;
  t2477 = -1.*t445*t2453;
  t2478 = t2472 + t2473 + t2477;
  t2480 = -4.e-6*t302*t2399*t25;
  t2482 = t1455*t2436;
  t2484 = 4.e-6*t445*t2453;
  t2485 = t2480 + t2482 + t2484;
  t2545 = -1.*t25*t677*t852*t2409;
  t2548 = -1.*t696*t25*t2409*t999;
  t2549 = t2545 + t2548;
  t2553 = t696*t25*t677*t2409;
  t2554 = -1.*t25*t852*t2409*t999;
  t2558 = t2553 + t2554;
  t2569 = t445*t2409*t955;
  t2578 = -4.e-6*t445*t2549;
  t2583 = t1265*t2558;
  t2593 = t2569 + t2578 + t2583;
  t2599 = t108*t2409*t955;
  t2600 = 4.e-6*t302*t2549;
  t2604 = -1.*t445*t2558;
  t2605 = t2599 + t2600 + t2604;
  t2607 = 4.e-6*t302*t2409*t955;
  t2611 = t1455*t2549;
  t2612 = 4.e-6*t445*t2558;
  t2613 = t2607 + t2611 + t2612;
  t2680 = -1.*t677*t2409*t955;
  t2682 = -1.*t2399*t999;
  t2683 = t2680 + t2682;
  t2687 = t2399*t677;
  t2688 = -1.*t2409*t955*t999;
  t2689 = t2687 + t2688;
  t2700 = t852*t2683;
  t2706 = t696*t2689;
  t2707 = t2700 + t2706;
  t2715 = t696*t2683;
  t2731 = -1.*t852*t2689;
  t2741 = t2715 + t2731;
  t2744 = 4.e-6*t445*t2707;
  t2748 = t1455*t2741;
  t2751 = t2744 + t2748;
  t2761 = -1.*t445*t2707;
  t2764 = 4.e-6*t302*t2741;
  t2765 = t2761 + t2764;
  t2770 = t1265*t2707;
  t2783 = -4.e-6*t445*t2741;
  t2785 = t2770 + t2783;
  t1933 = 0.15121*t852;
  t1935 = t1932 + t1933;
  t1940 = t1932 + t933;
  t2852 = t677*t2409*t955;
  t2859 = t2399*t999;
  t2860 = t2852 + t2859;
  t2875 = -1.*t852*t2860;
  t2877 = t2875 + t2706;
  t2882 = -1.*t696*t2860;
  t2884 = t2882 + t2731;
  t2897 = 4.e-6*t445*t2877;
  t2898 = t1455*t2884;
  t2906 = t2897 + t2898;
  t2950 = -1.*t445*t2877;
  t2961 = 4.e-6*t302*t2884;
  t2988 = t2950 + t2961;
  t2994 = t1265*t2877;
  t3001 = -4.e-6*t445*t2884;
  t3011 = t2994 + t3001;
  t1950 = -0.281210000004*t108;
  t1953 = -4.9936e-13 + t1950 + t1074;
  t1961 = 1.124840000016e-6*t108;
  t1962 = 1.5499600000248e-7*t445;
  t1970 = -1.2484e-7 + t1961 + t1962;
  t1975 = -0.03874900000062*t108;
  t1983 = 0.281210000008499*t445;
  t1987 = t1975 + t1983;
  t3117 = t696*t2860;
  t3126 = t852*t2689;
  t3148 = t3117 + t3126;
  t3170 = t25*t445*t2409;
  t3176 = -1.*t108*t3148;
  t3177 = t3170 + t2897 + t3176;
  t3181 = -4.e-6*t25*t445*t2409;
  t3192 = -1.6e-11*t445*t2877;
  t3193 = 4.e-6*t108*t3148;
  t3213 = t3181 + t3192 + t3193;
  t3221 = -1.*t108*t25*t2409;
  t3228 = -4.e-6*t108*t2877;
  t3230 = -1.000000000016*t445*t3148;
  t3248 = t3221 + t3228 + t3230;
  t2175 = -0.0398890000006382*t1145;
  t2178 = 0.50315000001605*t1174;
  t2183 = t2175 + t2178;
  t2233 = -0.503150000008*t1145;
  t2240 = -5.04e-14 + t2233 + t1177;
  t2265 = 2.012600000032e-6*t1145;
  t2279 = 1.59556000002553e-7*t1174;
  t2287 = -1.26e-8 + t2265 + t2279;
  t3325 = -1.*t25*t445*t2409;
  t3329 = -4.e-6*t445*t2877;
  t3332 = t1265*t3148;
  t3337 = t3325 + t3329 + t3332;
  t3341 = 4.e-6*t302*t2877;
  t3348 = -1.*t445*t3148;
  t3369 = t3221 + t3341 + t3348;
  t3373 = -4.e-6*t302*t25*t2409;
  t3375 = t1455*t2877;
  t3377 = 4.e-6*t445*t3148;
  t3379 = t3373 + t3375 + t3377;
  t3396 = t1145*t3369;
  t3549 = t2399*t25*t677*t852;
  t3551 = t696*t2399*t25*t999;
  t3556 = t3549 + t3551;
  t3562 = -1.*t696*t2399*t25*t677;
  t3566 = t2399*t25*t852*t999;
  t3567 = t3562 + t3566;
  t3577 = -1.*t2399*t445*t955;
  t3584 = -4.e-6*t445*t3556;
  t3588 = t1265*t3567;
  t3589 = t3577 + t3584 + t3588;
  t3610 = -1.*t108*t2399*t955;
  t3614 = 4.e-6*t302*t3556;
  t3631 = -1.*t445*t3567;
  t3634 = t3610 + t3614 + t3631;
  t3641 = -4.e-6*t302*t2399*t955;
  t3643 = t1455*t3556;
  t3647 = 4.e-6*t445*t3567;
  t3655 = t3641 + t3643 + t3647;
  t3819 = t677*t2409;
  t3851 = t2399*t955*t999;
  t3861 = t3819 + t3851;
  t3867 = t852*t2412;
  t3878 = t696*t3861;
  t3879 = t3867 + t3878;
  t3904 = -1.*t852*t3861;
  t3918 = t2439 + t3904;
  t3932 = 4.e-6*t445*t3879;
  t3952 = t1455*t3918;
  t3962 = t3932 + t3952;
  t3968 = -1.*t445*t3879;
  t3978 = 4.e-6*t302*t3918;
  t3980 = t3968 + t3978;
  t3992 = t1265*t3879;
  t3996 = -4.e-6*t445*t3918;
  t3997 = t3992 + t3996;
  t4065 = -1.*t2399*t677*t955;
  t4072 = t2409*t999;
  t4089 = t4065 + t4072;
  t4114 = -1.*t852*t4089;
  t4120 = t4114 + t3878;
  t4135 = -1.*t696*t4089;
  t4142 = t4135 + t3904;
  t4152 = 4.e-6*t445*t4120;
  t4154 = t1455*t4142;
  t4167 = t4152 + t4154;
  t4194 = -1.*t445*t4120;
  t4196 = 4.e-6*t302*t4142;
  t4205 = t4194 + t4196;
  t4208 = t1265*t4120;
  t4233 = -4.e-6*t445*t4142;
  t4243 = t4208 + t4233;
  t4348 = t696*t4089;
  t4352 = t852*t3861;
  t4370 = t4348 + t4352;
  t4388 = -1.*t108*t4370;
  t4401 = t2459 + t4152 + t4388;
  t4404 = 4.e-6*t2399*t25*t445;
  t4406 = -1.6e-11*t445*t4120;
  t4407 = 4.e-6*t108*t4370;
  t4419 = t4404 + t4406 + t4407;
  t4435 = t108*t2399*t25;
  t4441 = -4.e-6*t108*t4120;
  t4446 = -1.000000000016*t445*t4370;
  t4449 = t4435 + t4441 + t4446;
  t4529 = t2399*t25*t445;
  t4532 = -4.e-6*t445*t4120;
  t4537 = t1265*t4370;
  t4546 = t4529 + t4532 + t4537;
  t4565 = 4.e-6*t302*t4120;
  t4568 = -1.*t445*t4370;
  t4569 = t4435 + t4565 + t4568;
  t4582 = 4.e-6*t302*t2399*t25;
  t4591 = t1455*t4120;
  t4593 = 4.e-6*t445*t4370;
  t4595 = t4582 + t4591 + t4593;
  p_output1[0]=1.;
  p_output1[1]=t1042*t1061 + t1087*t1131 + t1181*t1286 + t1349*t1375 + t1426*t1464 - 0.041195*(-1.*t1174*t1286 + t1145*t1375 + 4.e-6*t1159*t1464) - 0.14871*(4.e-6*t1174*t1286 + 4.e-6*t1159*t1375 + t1464*t1523) + 0.803147*(t1174*t1375 - 4.e-6*t1174*t1464 + t1286*t1662) + t25*t613 - 1.*t677*t945*t955 + t955*t981*t999;
  p_output1[2]=t1734 + t1757 + t1799 + t1839 + t1859 + t1880 + t1902 + t1913 - 1.*t25*t677*t981 - 1.*t25*t945*t999;
  p_output1[3]=t1734 + t1757 + t1799 + t1839 + t1859 + t1880 + t1902 + t1913 + t1935*t25*t677 - 1.*t1940*t25*t999;
  p_output1[4]=t1718*t1970 + t1987*t1993 + t1349*t2009 + t1426*t2051 + t1181*t2088 - 0.041195*(t1145*t2009 + 4.e-6*t1159*t2051 - 1.*t1174*t2088) - 0.14871*(4.e-6*t1159*t2009 + t1523*t2051 + 4.e-6*t1174*t2088) + 0.803147*(t1174*t2009 - 4.e-6*t1174*t2051 + t1662*t2088) + t1953*t955;
  p_output1[5]=t2183*t2215 + t2240*t2256 + t2287*t2303 + 0.803147*(-1.000000000016*t1174*t2215 + t1145*t2256 - 4.e-6*t1145*t2303) - 0.14871*(4.e-6*t1145*t2215 + 4.e-6*t1174*t2256 - 1.6e-11*t1174*t2303) - 0.041195*(-1.*t1145*t2215 - 1.*t1174*t2256 + 4.e-6*t1174*t2303);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t1042*t2436 + t1087*t2453 + t1181*t2469 + t1349*t2478 + t1426*t2485 - 0.041195*(-1.*t1174*t2469 + t1145*t2478 + 4.e-6*t1159*t2485) + 0.803147*(t1662*t2469 + t1174*t2478 - 4.e-6*t1174*t2485) - 0.14871*(4.e-6*t1174*t2469 + 4.e-6*t1159*t2478 + t1523*t2485) - 1.*t2399*t25*t613 + t2412*t945 + t2422*t981;
  p_output1[9]=t1042*t2549 + t1087*t2558 + t1181*t2593 + t1349*t2605 + t1426*t2613 - 0.041195*(-1.*t1174*t2593 + t1145*t2605 + 4.e-6*t1159*t2613) + 0.803147*(t1662*t2593 + t1174*t2605 - 4.e-6*t1174*t2613) - 0.14871*(4.e-6*t1174*t2593 + 4.e-6*t1159*t2605 + t1523*t2613) + t2409*t25*t677*t945 + t2409*t613*t955 - 1.*t2409*t25*t981*t999;
  p_output1[10]=t1087*t2707 + t1042*t2741 + t1426*t2751 + t1349*t2765 + t1181*t2785 - 0.041195*(4.e-6*t1159*t2751 + t1145*t2765 - 1.*t1174*t2785) - 0.14871*(t1523*t2751 + 4.e-6*t1159*t2765 + 4.e-6*t1174*t2785) + 0.803147*(-4.e-6*t1174*t2751 + t1174*t2765 + t1662*t2785) + t2689*t945 + t2683*t981;
  p_output1[11]=t1940*t2689 + t1935*t2860 + t1087*t2877 + t1042*t2884 + t1426*t2906 + t1349*t2988 + t1181*t3011 - 0.041195*(4.e-6*t1159*t2906 + t1145*t2988 - 1.*t1174*t3011) - 0.14871*(t1523*t2906 + 4.e-6*t1159*t2988 + 4.e-6*t1174*t3011) + 0.803147*(-4.e-6*t1174*t2906 + t1174*t2988 + t1662*t3011);
  p_output1[12]=-1.*t1953*t2409*t25 + t1970*t2877 + t1987*t3148 + t1349*t3177 + t1426*t3213 + t1181*t3248 - 0.041195*(t1145*t3177 + 4.e-6*t1159*t3213 - 1.*t1174*t3248) - 0.14871*(4.e-6*t1159*t3177 + t1523*t3213 + 4.e-6*t1174*t3248) + 0.803147*(t1174*t3177 - 4.e-6*t1174*t3213 + t1662*t3248);
  p_output1[13]=t2183*t3337 + t2240*t3369 + t2287*t3379 - 0.14871*(4.e-6*t1145*t3337 + 4.e-6*t1174*t3369 - 1.6e-11*t1174*t3379) - 0.041195*(-1.*t1145*t3337 - 1.*t1174*t3369 + 4.e-6*t1174*t3379) + 0.803147*(-1.000000000016*t1174*t3337 - 4.e-6*t1145*t3379 + t3396);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t1042*t2877 + t1087*t3148 + t1181*t3337 + t1349*t3369 + t1426*t3379 + 0.803147*(t1662*t3337 + t1174*t3369 - 4.e-6*t1174*t3379) - 0.14871*(4.e-6*t1174*t3337 + 4.e-6*t1159*t3369 + t1523*t3379) - 0.041195*(-1.*t1174*t3337 + 4.e-6*t1159*t3379 + t3396) - 1.*t2409*t25*t613 + t2860*t945 + t2689*t981;
  p_output1[17]=t1042*t3556 + t1087*t3567 + t1181*t3589 + t1349*t3634 + t1426*t3655 - 0.041195*(-1.*t1174*t3589 + t1145*t3634 + 4.e-6*t1159*t3655) + 0.803147*(t1662*t3589 + t1174*t3634 - 4.e-6*t1174*t3655) - 0.14871*(4.e-6*t1174*t3589 + 4.e-6*t1159*t3634 + t1523*t3655) - 1.*t2399*t25*t677*t945 - 1.*t2399*t613*t955 + t2399*t25*t981*t999;
  p_output1[18]=t1087*t3879 + t1042*t3918 + t1426*t3962 + t1349*t3980 + t1181*t3997 - 0.041195*(4.e-6*t1159*t3962 + t1145*t3980 - 1.*t1174*t3997) - 0.14871*(t1523*t3962 + 4.e-6*t1159*t3980 + 4.e-6*t1174*t3997) + 0.803147*(-4.e-6*t1174*t3962 + t1174*t3980 + t1662*t3997) + t3861*t945 + t2412*t981;
  p_output1[19]=t1940*t3861 + t1935*t4089 + t1087*t4120 + t1042*t4142 + t1426*t4167 + t1349*t4205 + t1181*t4243 - 0.041195*(4.e-6*t1159*t4167 + t1145*t4205 - 1.*t1174*t4243) - 0.14871*(t1523*t4167 + 4.e-6*t1159*t4205 + 4.e-6*t1174*t4243) + 0.803147*(-4.e-6*t1174*t4167 + t1174*t4205 + t1662*t4243);
  p_output1[20]=t1953*t2399*t25 + t1970*t4120 + t1987*t4370 + t1349*t4401 + t1426*t4419 + t1181*t4449 - 0.041195*(t1145*t4401 + 4.e-6*t1159*t4419 - 1.*t1174*t4449) - 0.14871*(4.e-6*t1159*t4401 + t1523*t4419 + 4.e-6*t1174*t4449) + 0.803147*(t1174*t4401 - 4.e-6*t1174*t4419 + t1662*t4449);
  p_output1[21]=t2183*t4546 + t2240*t4569 + t2287*t4595 + 0.803147*(-1.000000000016*t1174*t4546 + t1145*t4569 - 4.e-6*t1145*t4595) - 0.14871*(4.e-6*t1145*t4546 + 4.e-6*t1174*t4569 - 1.6e-11*t1174*t4595) - 0.041195*(-1.*t1145*t4546 - 1.*t1174*t4569 + 4.e-6*t1174*t4595);
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

#include "J_h_FrFoot_QuadrupleStance.hh"

namespace QuadrupleStance
{

void J_h_FrFoot_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
