/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:28:30 GMT+01:00
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
  double t85;
  double t109;
  double t126;
  double t143;
  double t255;
  double t256;
  double t258;
  double t293;
  double t300;
  double t320;
  double t139;
  double t254;
  double t380;
  double t206;
  double t495;
  double t677;
  double t681;
  double t693;
  double t730;
  double t17;
  double t603;
  double t621;
  double t540;
  double t544;
  double t557;
  double t630;
  double t634;
  double t649;
  double t752;
  double t422;
  double t817;
  double t498;
  double t893;
  double t719;
  double t966;
  double t986;
  double t182;
  double t804;
  double t810;
  double t815;
  double t823;
  double t824;
  double t831;
  double t832;
  double t835;
  double t859;
  double t1069;
  double t993;
  double t1001;
  double t1013;
  double t1023;
  double t1030;
  double t1045;
  double t1048;
  double t1049;
  double t1088;
  double t1094;
  double t1105;
  double t1107;
  double t1108;
  double t1111;
  double t1114;
  double t1121;
  double t763;
  double t1137;
  double t737;
  double t1227;
  double t916;
  double t1162;
  double t1173;
  double t900;
  double t338;
  double t347;
  double t285;
  double t310;
  double t585;
  double t600;
  double t610;
  double t616;
  double t622;
  double t626;
  double t629;
  double t414;
  double t421;
  double t475;
  double t493;
  double t523;
  double t524;
  double t526;
  double t883;
  double t888;
  double t904;
  double t912;
  double t926;
  double t946;
  double t956;
  double t1311;
  double t1312;
  double t1316;
  double t1320;
  double t1330;
  double t1331;
  double t669;
  double t705;
  double t738;
  double t743;
  double t767;
  double t779;
  double t786;
  double t1067;
  double t1068;
  double t1071;
  double t1079;
  double t1080;
  double t1084;
  double t1087;
  double t1177;
  double t1337;
  double t1340;
  double t1358;
  double t1139;
  double t1369;
  double t1370;
  double t1372;
  double t1193;
  double t1200;
  double t1377;
  double t1382;
  double t1384;
  double t1235;
  double t1218;
  double t1222;
  double t1245;
  double t1263;
  double t1276;
  double t1259;
  double t1281;
  double t1470;
  double t1317;
  double t1336;
  double t1360;
  double t1374;
  double t1387;
  double t1393;
  double t1395;
  double t1406;
  double t1409;
  double t1419;
  double t1420;
  double t1425;
  double t1428;
  double t1442;
  double t1444;
  double t1454;
  double t1455;
  double t1456;
  double t1457;
  double t1459;
  double t1483;
  double t1529;
  double t1545;
  double t1590;
  double t1594;
  double t1597;
  double t1504;
  double t1633;
  double t1569;
  double t1603;
  double t1606;
  double t1610;
  double t1611;
  double t1614;
  double t1619;
  double t1624;
  double t1627;
  double t1628;
  double t1638;
  double t1639;
  double t1642;
  double t1648;
  double t1649;
  double t1656;
  double t1659;
  double t1665;
  double t1667;
  double t1722;
  double t1787;
  double t1759;
  double t1760;
  double t1761;
  double t1763;
  double t1810;
  double t1819;
  double t1824;
  double t1826;
  double t1765;
  double t1872;
  double t1873;
  double t1882;
  double t1883;
  double t1741;
  double t1929;
  double t1852;
  double t78;
  double t133;
  double t201;
  double t202;
  double t222;
  double t223;
  double t234;
  double t1998;
  double t2012;
  double t2011;
  double t2015;
  double t2019;
  double t2022;
  double t2026;
  double t2027;
  double t2031;
  double t2034;
  double t2035;
  double t2042;
  double t2044;
  double t2046;
  double t2055;
  double t2056;
  double t2057;
  double t2058;
  double t2062;
  double t2065;
  double t2070;
  double t2072;
  double t2081;
  double t2083;
  double t2085;
  double t2086;
  double t2152;
  double t2154;
  double t2155;
  double t2158;
  double t2167;
  double t2168;
  double t2180;
  double t2184;
  double t2189;
  double t2190;
  double t2206;
  double t2216;
  double t2218;
  double t2219;
  double t2228;
  double t2231;
  double t2232;
  double t2234;
  double t2310;
  double t2317;
  double t2322;
  double t2332;
  double t2336;
  double t2341;
  double t2359;
  double t2363;
  double t2364;
  double t2369;
  double t2370;
  double t2371;
  double t2375;
  double t2376;
  double t2377;
  double t2382;
  double t2384;
  double t2394;
  double t2399;
  double t2404;
  double t2407;
  double t1472;
  double t1475;
  double t1479;
  double t2491;
  double t2493;
  double t2494;
  double t2501;
  double t2505;
  double t2510;
  double t2511;
  double t2515;
  double t2516;
  double t2517;
  double t2528;
  double t2533;
  double t2534;
  double t2540;
  double t2541;
  double t2546;
  double t1489;
  double t1500;
  double t1510;
  double t1513;
  double t1522;
  double t1527;
  double t1543;
  double t1544;
  double t1550;
  double t1551;
  double t1553;
  double t1554;
  double t1559;
  double t1567;
  double t1574;
  double t1577;
  double t1583;
  double t1586;
  double t2611;
  double t2613;
  double t2618;
  double t2624;
  double t2625;
  double t2627;
  double t2630;
  double t2633;
  double t2634;
  double t2638;
  double t2639;
  double t2655;
  double t2659;
  double t2660;
  double t2669;
  double t1723;
  double t1724;
  double t1747;
  double t1748;
  double t1753;
  double t1757;
  double t1778;
  double t1780;
  double t1792;
  double t1796;
  double t1798;
  double t1808;
  double t1839;
  double t1840;
  double t1858;
  double t1864;
  double t1865;
  double t1868;
  double t1890;
  double t2728;
  double t2731;
  double t2734;
  double t2735;
  double t2738;
  double t2739;
  double t2742;
  double t2745;
  double t1899;
  double t2750;
  double t2752;
  double t2753;
  double t2755;
  double t1927;
  double t1930;
  double t1961;
  double t1971;
  double t2935;
  double t2936;
  double t2937;
  double t2947;
  double t2958;
  double t2960;
  double t2974;
  double t2975;
  double t2977;
  double t2978;
  double t2981;
  double t2983;
  double t2985;
  double t2989;
  double t3014;
  double t3021;
  double t3022;
  double t3025;
  double t3094;
  double t3095;
  double t3108;
  double t3111;
  double t3117;
  double t3128;
  double t3133;
  double t3139;
  double t3145;
  double t3147;
  double t3148;
  double t3156;
  double t3157;
  double t3166;
  double t3168;
  double t3171;
  double t3175;
  double t3245;
  double t3250;
  double t3253;
  double t3268;
  double t3271;
  double t3273;
  double t3282;
  double t3290;
  double t3291;
  double t3293;
  double t3317;
  double t3318;
  double t3322;
  double t3332;
  double t3335;
  double t3337;
  double t3410;
  double t3413;
  double t3414;
  double t3417;
  double t3424;
  double t3428;
  double t3432;
  double t3436;
  double t3437;
  double t3443;
  double t3444;
  double t3449;
  double t3450;
  double t3453;
  double t3455;
  double t3543;
  double t3544;
  double t3545;
  double t3547;
  double t3552;
  double t3554;
  double t3555;
  double t3561;
  double t3577;
  double t3583;
  double t3588;
  double t3590;
  t85 = Cos(var1[13]);
  t109 = -1.*t85;
  t126 = 1. + t109;
  t143 = Sin(var1[13]);
  t255 = Cos(var1[12]);
  t256 = -1.*t255;
  t258 = 1. + t256;
  t293 = Sin(var1[12]);
  t300 = 0.15121*t293;
  t320 = Sin(var1[4]);
  t139 = 4.e-6*t126;
  t254 = Cos(var1[5]);
  t380 = Sin(var1[5]);
  t206 = -2.8e-11*t126;
  t495 = 7.e-6*t126;
  t677 = Cos(var1[14]);
  t681 = -1.*t677;
  t693 = 1. + t681;
  t730 = Sin(var1[14]);
  t17 = Cos(var1[4]);
  t603 = -1.*t143;
  t621 = -4.e-6*t143;
  t540 = t254*t293*t320;
  t544 = t255*t320*t380;
  t557 = t540 + t544;
  t630 = -1.*t255*t254*t320;
  t634 = t293*t320*t380;
  t649 = t630 + t634;
  t752 = 7.e-6*t693;
  t422 = -7.e-6*t143;
  t817 = -7.e-6*t126;
  t498 = 4.e-6*t143;
  t893 = 4.e-6*t693;
  t719 = -2.8e-11*t693;
  t966 = -1. + t85;
  t986 = 4.e-6*t966;
  t182 = 7.e-6*t143;
  t804 = 2.8e-11*t126;
  t810 = t804 + t603;
  t815 = t17*t810;
  t823 = t817 + t621;
  t824 = t823*t557;
  t831 = -1.000000000016*t126;
  t832 = 1. + t831;
  t835 = t832*t649;
  t859 = t815 + t824 + t835;
  t1069 = 7.e-6*t730;
  t993 = t986 + t422;
  t1001 = t17*t993;
  t1013 = -6.5e-11*t126;
  t1023 = 1. + t1013;
  t1030 = t1023*t557;
  t1045 = t817 + t498;
  t1048 = t1045*t649;
  t1049 = t1001 + t1030 + t1048;
  t1088 = -1.000000000049*t126;
  t1094 = 1. + t1088;
  t1105 = t1094*t17;
  t1107 = t986 + t182;
  t1108 = t1107*t557;
  t1111 = t804 + t143;
  t1114 = t1111*t649;
  t1121 = t1105 + t1108 + t1114;
  t763 = -4.e-6*t730;
  t1137 = 2.8e-11*t693;
  t737 = -1.*t730;
  t1227 = -7.e-6*t693;
  t916 = 4.e-6*t730;
  t1162 = -1. + t677;
  t1173 = 4.e-6*t1162;
  t900 = -7.e-6*t730;
  t338 = 0.15121*t258;
  t347 = t338 + t300;
  t285 = -0.15121*t258;
  t310 = t285 + t300;
  t585 = 1.0248489999999998e-12*var1[13];
  t600 = -0.28120900000849935*t126;
  t610 = t206 + t603;
  t616 = -0.038748999993*t610;
  t622 = t495 + t621;
  t626 = -2.123459e-6*t622;
  t629 = t585 + t600 + t616 + t626;
  t414 = -1.4640699999999997e-7*var1[13];
  t421 = -1.38024835e-16*t126;
  t475 = t139 + t422;
  t493 = -0.038748999993*t475;
  t523 = t495 + t498;
  t524 = -0.281209000004*t523;
  t526 = t414 + t421 + t493 + t524;
  t883 = -2.598649999999999e-7*var1[14];
  t888 = -2.3905277499999995e-16*t693;
  t904 = t893 + t900;
  t912 = -0.038922999986*t904;
  t926 = t752 + t916;
  t946 = -0.503149000008*t926;
  t956 = t883 + t888 + t912 + t946;
  t1311 = -1.*t17*t254*t293;
  t1312 = -1.*t255*t17*t380;
  t1316 = t1311 + t1312;
  t1320 = -1.*t255*t17*t254;
  t1330 = t17*t293*t380;
  t1331 = t1320 + t1330;
  t669 = 1.8190549999999993e-12*var1[14];
  t705 = -0.5031490000160505*t693;
  t738 = t719 + t737;
  t743 = -0.038922999986*t738;
  t767 = t752 + t763;
  t779 = -3.6777349999999994e-6*t767;
  t786 = t669 + t705 + t743 + t779;
  t1067 = 1.0394599999999997e-12*var1[14];
  t1068 = -0.03892299998790722*t693;
  t1071 = t893 + t1069;
  t1079 = -3.6777349999999994e-6*t1071;
  t1080 = t719 + t730;
  t1084 = -0.503149000008*t1080;
  t1087 = t1067 + t1068 + t1079 + t1084;
  t1177 = t1173 + t1069;
  t1337 = t1045*t1316;
  t1340 = t1023*t1331;
  t1358 = t1337 + t1340;
  t1139 = t1137 + t730;
  t1369 = t832*t1316;
  t1370 = t823*t1331;
  t1372 = t1369 + t1370;
  t1193 = -1.000000000049*t693;
  t1200 = 1. + t1193;
  t1377 = t1111*t1316;
  t1382 = t1107*t1331;
  t1384 = t1377 + t1382;
  t1235 = t1227 + t763;
  t1218 = -1.000000000016*t693;
  t1222 = 1. + t1218;
  t1245 = t1137 + t737;
  t1263 = -6.5e-11*t693;
  t1276 = 1. + t1263;
  t1259 = t1227 + t916;
  t1281 = t1173 + t900;
  t1470 = 0.15121*t255;
  t1317 = t629*t1316;
  t1336 = t526*t1331;
  t1360 = t956*t1358;
  t1374 = t786*t1372;
  t1387 = t1087*t1384;
  t1393 = t1177*t1358;
  t1395 = t1139*t1372;
  t1406 = t1200*t1384;
  t1409 = t1393 + t1395 + t1406;
  t1419 = -0.038924*t1409;
  t1420 = t1235*t1358;
  t1425 = t1222*t1372;
  t1428 = t1245*t1384;
  t1442 = t1420 + t1425 + t1428;
  t1444 = -0.80315*t1442;
  t1454 = t1276*t1358;
  t1455 = t1259*t1372;
  t1456 = t1281*t1384;
  t1457 = t1454 + t1455 + t1456;
  t1459 = 0.148705*t1457;
  t1483 = -2.8e-11*t143;
  t1529 = -7.e-6*t85;
  t1545 = 4.e-6*t85;
  t1590 = t255*t17*t254;
  t1594 = -1.*t17*t293*t380;
  t1597 = t1590 + t1594;
  t1504 = 7.e-6*t85;
  t1633 = 2.8e-11*t143;
  t1569 = -4.e-6*t85;
  t1603 = t1529 + t621;
  t1606 = t1603*t320;
  t1610 = -6.5e-11*t143*t1316;
  t1611 = t1545 + t422;
  t1614 = t1611*t1597;
  t1619 = t1606 + t1610 + t1614;
  t1624 = -1.000000000049*t143*t320;
  t1627 = t1504 + t621;
  t1628 = t1627*t1316;
  t1638 = t85 + t1633;
  t1639 = t1638*t1597;
  t1642 = t1624 + t1628 + t1639;
  t1648 = t109 + t1633;
  t1649 = t1648*t320;
  t1656 = t1569 + t422;
  t1659 = t1656*t1316;
  t1665 = -1.000000000016*t143*t1597;
  t1667 = t1649 + t1659 + t1665;
  t1722 = -2.8e-11*t730;
  t1787 = 4.e-6*t677;
  t1759 = t810*t320;
  t1760 = t823*t1316;
  t1761 = t832*t1597;
  t1763 = t1759 + t1760 + t1761;
  t1810 = t993*t320;
  t1819 = t1023*t1316;
  t1824 = t1045*t1597;
  t1826 = t1810 + t1819 + t1824;
  t1765 = -7.e-6*t677;
  t1872 = t1094*t320;
  t1873 = t1107*t1316;
  t1882 = t1111*t1597;
  t1883 = t1872 + t1873 + t1882;
  t1741 = -4.e-6*t677;
  t1929 = 2.8e-11*t730;
  t1852 = 7.e-6*t677;
  t78 = 5.856279999999999e-13*var1[13];
  t133 = -0.0387489999948987*t126;
  t201 = t139 + t182;
  t202 = -2.123459e-6*t201;
  t222 = t206 + t143;
  t223 = -0.281209000004*t222;
  t234 = t78 + t133 + t202 + t223;
  t1998 = Cos(var1[3]);
  t2012 = Sin(var1[3]);
  t2011 = t1998*t254*t320;
  t2015 = -1.*t2012*t380;
  t2019 = t2011 + t2015;
  t2022 = -1.*t254*t2012;
  t2026 = -1.*t1998*t320*t380;
  t2027 = t2022 + t2026;
  t2031 = -1.*t293*t2019;
  t2034 = t255*t2027;
  t2035 = t2031 + t2034;
  t2042 = t255*t2019;
  t2044 = t293*t2027;
  t2046 = t2042 + t2044;
  t2055 = -1.*t1998*t17*t810;
  t2056 = t823*t2035;
  t2057 = t832*t2046;
  t2058 = t2055 + t2056 + t2057;
  t2062 = -1.*t1998*t17*t993;
  t2065 = t1023*t2035;
  t2070 = t1045*t2046;
  t2072 = t2062 + t2065 + t2070;
  t2081 = -1.*t1094*t1998*t17;
  t2083 = t1107*t2035;
  t2085 = t1111*t2046;
  t2086 = t2081 + t2083 + t2085;
  t2152 = -1.*t17*t254*t293*t2012;
  t2154 = -1.*t255*t17*t2012*t380;
  t2155 = t2152 + t2154;
  t2158 = t255*t17*t254*t2012;
  t2167 = -1.*t17*t293*t2012*t380;
  t2168 = t2158 + t2167;
  t2180 = t810*t2012*t320;
  t2184 = t823*t2155;
  t2189 = t832*t2168;
  t2190 = t2180 + t2184 + t2189;
  t2206 = t993*t2012*t320;
  t2216 = t1023*t2155;
  t2218 = t1045*t2168;
  t2219 = t2206 + t2216 + t2218;
  t2228 = t1094*t2012*t320;
  t2231 = t1107*t2155;
  t2232 = t1111*t2168;
  t2234 = t2228 + t2231 + t2232;
  t2310 = -1.*t254*t2012*t320;
  t2317 = -1.*t1998*t380;
  t2322 = t2310 + t2317;
  t2332 = t1998*t254;
  t2336 = -1.*t2012*t320*t380;
  t2341 = t2332 + t2336;
  t2359 = t293*t2322;
  t2363 = t255*t2341;
  t2364 = t2359 + t2363;
  t2369 = t255*t2322;
  t2370 = -1.*t293*t2341;
  t2371 = t2369 + t2370;
  t2375 = t1045*t2364;
  t2376 = t1023*t2371;
  t2377 = t2375 + t2376;
  t2382 = t832*t2364;
  t2384 = t823*t2371;
  t2394 = t2382 + t2384;
  t2399 = t1111*t2364;
  t2404 = t1107*t2371;
  t2407 = t2399 + t2404;
  t1472 = -0.15121*t293;
  t1475 = t1470 + t1472;
  t1479 = t1470 + t300;
  t2491 = t254*t2012*t320;
  t2493 = t1998*t380;
  t2494 = t2491 + t2493;
  t2501 = -1.*t293*t2494;
  t2505 = t2501 + t2363;
  t2510 = -1.*t255*t2494;
  t2511 = t2510 + t2370;
  t2515 = t1045*t2505;
  t2516 = t1023*t2511;
  t2517 = t2515 + t2516;
  t2528 = t832*t2505;
  t2533 = t823*t2511;
  t2534 = t2528 + t2533;
  t2540 = t1111*t2505;
  t2541 = t1107*t2511;
  t2546 = t2540 + t2541;
  t1489 = t85 + t1483;
  t1500 = -0.281209000004*t1489;
  t1510 = t1504 + t498;
  t1513 = -2.123459e-6*t1510;
  t1522 = -0.0387489999948987*t143;
  t1527 = 5.856279999999999e-13 + t1500 + t1513 + t1522;
  t1543 = t1529 + t498;
  t1544 = -0.038748999993*t1543;
  t1550 = t1545 + t182;
  t1551 = -0.281209000004*t1550;
  t1553 = -1.38024835e-16*t143;
  t1554 = -1.4640699999999997e-7 + t1544 + t1551 + t1553;
  t1559 = t109 + t1483;
  t1567 = -0.038748999993*t1559;
  t1574 = t1569 + t182;
  t1577 = -2.123459e-6*t1574;
  t1583 = -0.28120900000849935*t143;
  t1586 = 1.0248489999999998e-12 + t1567 + t1577 + t1583;
  t2611 = t255*t2494;
  t2613 = t293*t2341;
  t2618 = t2611 + t2613;
  t2624 = -1.*t17*t1603*t2012;
  t2625 = -6.5e-11*t143*t2505;
  t2627 = t1611*t2618;
  t2630 = t2624 + t2625 + t2627;
  t2633 = 1.000000000049*t17*t143*t2012;
  t2634 = t1627*t2505;
  t2638 = t1638*t2618;
  t2639 = t2633 + t2634 + t2638;
  t2655 = -1.*t17*t1648*t2012;
  t2659 = t1656*t2505;
  t2660 = -1.000000000016*t143*t2618;
  t2669 = t2655 + t2659 + t2660;
  t1723 = t681 + t1722;
  t1724 = -0.038922999986*t1723;
  t1747 = t1741 + t1069;
  t1748 = -3.6777349999999994e-6*t1747;
  t1753 = -0.5031490000160505*t730;
  t1757 = 1.8190549999999993e-12 + t1724 + t1748 + t1753;
  t1778 = t1765 + t916;
  t1780 = -0.038922999986*t1778;
  t1792 = t1787 + t1069;
  t1796 = -0.503149000008*t1792;
  t1798 = -2.3905277499999995e-16*t730;
  t1808 = -2.598649999999999e-7 + t1780 + t1796 + t1798;
  t1839 = t677 + t1722;
  t1840 = -0.503149000008*t1839;
  t1858 = t1852 + t916;
  t1864 = -3.6777349999999994e-6*t1858;
  t1865 = -0.03892299998790722*t730;
  t1868 = 1.0394599999999997e-12 + t1840 + t1864 + t1865;
  t1890 = t1787 + t900;
  t2728 = -1.*t17*t810*t2012;
  t2731 = t823*t2505;
  t2734 = t832*t2618;
  t2735 = t2728 + t2731 + t2734;
  t2738 = -1.*t17*t993*t2012;
  t2739 = t1023*t2505;
  t2742 = t1045*t2618;
  t2745 = t2738 + t2739 + t2742;
  t1899 = t1765 + t763;
  t2750 = -1.*t1094*t17*t2012;
  t2752 = t1107*t2505;
  t2753 = t1111*t2618;
  t2755 = t2750 + t2752 + t2753;
  t1927 = t1741 + t900;
  t1930 = t681 + t1929;
  t1961 = t677 + t1929;
  t1971 = t1852 + t763;
  t2935 = t1998*t17*t254*t293;
  t2936 = t255*t1998*t17*t380;
  t2937 = t2935 + t2936;
  t2947 = -1.*t255*t1998*t17*t254;
  t2958 = t1998*t17*t293*t380;
  t2960 = t2947 + t2958;
  t2974 = -1.*t1998*t810*t320;
  t2975 = t823*t2937;
  t2977 = t832*t2960;
  t2978 = t2974 + t2975 + t2977;
  t2981 = -1.*t1998*t993*t320;
  t2983 = t1023*t2937;
  t2985 = t1045*t2960;
  t2989 = t2981 + t2983 + t2985;
  t3014 = -1.*t1094*t1998*t320;
  t3021 = t1107*t2937;
  t3022 = t1111*t2960;
  t3025 = t3014 + t3021 + t3022;
  t3094 = t254*t2012;
  t3095 = t1998*t320*t380;
  t3108 = t3094 + t3095;
  t3111 = t293*t2019;
  t3117 = t255*t3108;
  t3128 = t3111 + t3117;
  t3133 = -1.*t293*t3108;
  t3139 = t2042 + t3133;
  t3145 = t1045*t3128;
  t3147 = t1023*t3139;
  t3148 = t3145 + t3147;
  t3156 = t832*t3128;
  t3157 = t823*t3139;
  t3166 = t3156 + t3157;
  t3168 = t1111*t3128;
  t3171 = t1107*t3139;
  t3175 = t3168 + t3171;
  t3245 = -1.*t1998*t254*t320;
  t3250 = t2012*t380;
  t3253 = t3245 + t3250;
  t3268 = -1.*t293*t3253;
  t3271 = t3268 + t3117;
  t3273 = -1.*t255*t3253;
  t3282 = t3273 + t3133;
  t3290 = t1045*t3271;
  t3291 = t1023*t3282;
  t3293 = t3290 + t3291;
  t3317 = t832*t3271;
  t3318 = t823*t3282;
  t3322 = t3317 + t3318;
  t3332 = t1111*t3271;
  t3335 = t1107*t3282;
  t3337 = t3332 + t3335;
  t3410 = t255*t3253;
  t3413 = t293*t3108;
  t3414 = t3410 + t3413;
  t3417 = t1998*t17*t1603;
  t3424 = -6.5e-11*t143*t3271;
  t3428 = t1611*t3414;
  t3432 = t3417 + t3424 + t3428;
  t3436 = -1.000000000049*t1998*t17*t143;
  t3437 = t1627*t3271;
  t3443 = t1638*t3414;
  t3444 = t3436 + t3437 + t3443;
  t3449 = t1998*t17*t1648;
  t3450 = t1656*t3271;
  t3453 = -1.000000000016*t143*t3414;
  t3455 = t3449 + t3450 + t3453;
  t3543 = t1998*t17*t810;
  t3544 = t823*t3271;
  t3545 = t832*t3414;
  t3547 = t3543 + t3544 + t3545;
  t3552 = t1998*t17*t993;
  t3554 = t1023*t3271;
  t3555 = t1045*t3414;
  t3561 = t3552 + t3554 + t3555;
  t3577 = t1094*t1998*t17;
  t3583 = t1107*t3271;
  t3588 = t1111*t3414;
  t3590 = t3577 + t3583 + t3588;
  p_output1[0]=1.;
  p_output1[1]=t1087*t1121 + t17*t234 - 1.*t254*t310*t320 + t320*t347*t380 + t526*t557 + t629*t649 + t786*t859 - 0.038924*(t1049*t1177 + t1121*t1200 + t1139*t859) - 0.80315*(t1049*t1235 + t1121*t1245 + t1222*t859) + 0.148705*(t1049*t1276 + t1121*t1281 + t1259*t859) + t1049*t956;
  p_output1[2]=t1317 + t1336 + t1360 + t1374 + t1387 + t1419 + t1444 + t1459 - 1.*t17*t254*t347 - 1.*t17*t310*t380;
  p_output1[3]=t1317 + t1336 + t1360 + t1374 + t1387 + t1419 + t1444 + t1459 + t1475*t17*t254 - 1.*t1479*t17*t380;
  p_output1[4]=t1316*t1554 + t1586*t1597 + t1087*t1642 - 0.038924*(t1177*t1619 + t1200*t1642 + t1139*t1667) - 0.80315*(t1235*t1619 + t1245*t1642 + t1222*t1667) + 0.148705*(t1276*t1619 + t1281*t1642 + t1259*t1667) + t1527*t320 + t1667*t786 + t1619*t956;
  p_output1[5]=t1757*t1763 + t1808*t1826 + t1868*t1883 - 0.80315*(t1826*t1927 + t1883*t1930 - 1.000000000016*t1763*t730) + 0.148705*(t1763*t1890 + t1883*t1899 - 6.5e-11*t1826*t730) - 0.038924*(t1763*t1961 + t1826*t1971 - 1.000000000049*t1883*t730);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t1087*t2086 - 0.038924*(t1139*t2058 + t1177*t2072 + t1200*t2086) - 0.80315*(t1222*t2058 + t1235*t2072 + t1245*t2086) + 0.148705*(t1259*t2058 + t1276*t2072 + t1281*t2086) - 1.*t17*t1998*t234 + t2019*t310 + t2027*t347 + t2035*t526 + t2046*t629 + t2058*t786 + t2072*t956;
  p_output1[9]=t1087*t2234 - 0.038924*(t1139*t2190 + t1177*t2219 + t1200*t2234) - 0.80315*(t1222*t2190 + t1235*t2219 + t1245*t2234) + 0.148705*(t1259*t2190 + t1276*t2219 + t1281*t2234) + t17*t2012*t254*t310 + t2012*t234*t320 - 1.*t17*t2012*t347*t380 + t2155*t526 + t2168*t629 + t2190*t786 + t2219*t956;
  p_output1[10]=t1087*t2407 - 0.038924*(t1177*t2377 + t1139*t2394 + t1200*t2407) - 0.80315*(t1235*t2377 + t1222*t2394 + t1245*t2407) + 0.148705*(t1276*t2377 + t1259*t2394 + t1281*t2407) + t2341*t310 + t2322*t347 + t2371*t526 + t2364*t629 + t2394*t786 + t2377*t956;
  p_output1[11]=t1479*t2341 + t1475*t2494 + t1087*t2546 - 0.038924*(t1177*t2517 + t1139*t2534 + t1200*t2546) - 0.80315*(t1235*t2517 + t1222*t2534 + t1245*t2546) + 0.148705*(t1276*t2517 + t1259*t2534 + t1281*t2546) + t2511*t526 + t2505*t629 + t2534*t786 + t2517*t956;
  p_output1[12]=-1.*t1527*t17*t2012 + t1554*t2505 + t1586*t2618 + t1087*t2639 - 0.038924*(t1177*t2630 + t1200*t2639 + t1139*t2669) - 0.80315*(t1235*t2630 + t1245*t2639 + t1222*t2669) + 0.148705*(t1276*t2630 + t1281*t2639 + t1259*t2669) + t2669*t786 + t2630*t956;
  p_output1[13]=t1757*t2735 + t1808*t2745 + t1868*t2755 - 0.80315*(t1927*t2745 + t1930*t2755 - 1.000000000016*t2735*t730) + 0.148705*(t1890*t2735 + t1899*t2755 - 6.5e-11*t2745*t730) - 0.038924*(t1961*t2735 + t1971*t2745 - 1.000000000049*t2755*t730);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-1.*t17*t2012*t234 + t1087*t2755 - 0.038924*(t1139*t2735 + t1177*t2745 + t1200*t2755) - 0.80315*(t1222*t2735 + t1235*t2745 + t1245*t2755) + 0.148705*(t1259*t2735 + t1276*t2745 + t1281*t2755) + t2494*t310 + t2341*t347 + t2505*t526 + t2618*t629 + t2735*t786 + t2745*t956;
  p_output1[17]=t1087*t3025 - 0.038924*(t1139*t2978 + t1177*t2989 + t1200*t3025) - 0.80315*(t1222*t2978 + t1235*t2989 + t1245*t3025) + 0.148705*(t1259*t2978 + t1276*t2989 + t1281*t3025) - 1.*t17*t1998*t254*t310 - 1.*t1998*t234*t320 + t17*t1998*t347*t380 + t2937*t526 + t2960*t629 + t2978*t786 + t2989*t956;
  p_output1[18]=t310*t3108 + t1087*t3175 - 0.038924*(t1177*t3148 + t1139*t3166 + t1200*t3175) - 0.80315*(t1235*t3148 + t1222*t3166 + t1245*t3175) + 0.148705*(t1276*t3148 + t1259*t3166 + t1281*t3175) + t2019*t347 + t3139*t526 + t3128*t629 + t3166*t786 + t3148*t956;
  p_output1[19]=t1479*t3108 + t1475*t3253 + t1087*t3337 - 0.038924*(t1177*t3293 + t1139*t3322 + t1200*t3337) - 0.80315*(t1235*t3293 + t1222*t3322 + t1245*t3337) + 0.148705*(t1276*t3293 + t1259*t3322 + t1281*t3337) + t3282*t526 + t3271*t629 + t3322*t786 + t3293*t956;
  p_output1[20]=t1527*t17*t1998 + t1554*t3271 + t1586*t3414 + t1087*t3444 - 0.038924*(t1177*t3432 + t1200*t3444 + t1139*t3455) - 0.80315*(t1235*t3432 + t1245*t3444 + t1222*t3455) + 0.148705*(t1276*t3432 + t1281*t3444 + t1259*t3455) + t3455*t786 + t3432*t956;
  p_output1[21]=t1757*t3547 + t1808*t3561 + t1868*t3590 - 0.80315*(t1927*t3561 + t1930*t3590 - 1.000000000016*t3547*t730) + 0.148705*(t1890*t3547 + t1899*t3590 - 6.5e-11*t3561*t730) - 0.038924*(t1961*t3547 + t1971*t3561 - 1.000000000049*t3590*t730);
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

#include "J_h_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
