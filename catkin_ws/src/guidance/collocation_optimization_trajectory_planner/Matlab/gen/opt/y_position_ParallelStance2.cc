/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:15:31 GMT+01:00
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
  double t69;
  double t73;
  double t81;
  double t87;
  double t96;
  double t97;
  double t99;
  double t106;
  double t110;
  double t147;
  double t156;
  double t162;
  double t335;
  double t241;
  double t257;
  double t271;
  double t272;
  double t294;
  double t296;
  double t339;
  double t343;
  double t345;
  double t349;
  double t247;
  double t380;
  double t365;
  double t406;
  double t407;
  double t409;
  double t440;
  double t441;
  double t446;
  double t458;
  double t461;
  double t463;
  double t472;
  double t546;
  double t480;
  double t487;
  double t492;
  double t498;
  double t510;
  double t515;
  double t575;
  double t576;
  double t578;
  double t584;
  double t645;
  double t658;
  double t690;
  double t698;
  double t699;
  double t700;
  double t74;
  double t124;
  double t131;
  double t133;
  double t170;
  double t178;
  double t195;
  double t205;
  double t209;
  double t213;
  double t222;
  double t233;
  double t326;
  double t344;
  double t347;
  double t357;
  double t361;
  double t290;
  double t306;
  double t940;
  double t374;
  double t375;
  double t951;
  double t392;
  double t394;
  double t396;
  double t404;
  double t405;
  double t946;
  double t960;
  double t967;
  double t973;
  double t975;
  double t991;
  double t422;
  double t424;
  double t435;
  double t465;
  double t474;
  double t476;
  double t1005;
  double t1014;
  double t1023;
  double t1064;
  double t1069;
  double t1073;
  double t544;
  double t545;
  double t547;
  double t548;
  double t555;
  double t599;
  double t607;
  double t617;
  double t618;
  double t625;
  double t1083;
  double t1090;
  double t1096;
  double t1101;
  double t1111;
  double t1118;
  double t1121;
  double t1122;
  double t729;
  double t735;
  double t1141;
  double t1144;
  double t1148;
  double t1149;
  double t790;
  double t791;
  double t1296;
  double t1298;
  double t1300;
  double t1321;
  double t1326;
  double t1336;
  double t1346;
  double t1347;
  double t1358;
  double t1364;
  double t1368;
  double t1372;
  double t1378;
  double t1379;
  double t1383;
  double t1386;
  double t1394;
  double t1395;
  double t1399;
  double t1401;
  double t1403;
  double t1404;
  double t1410;
  double t1411;
  double t1645;
  double t1646;
  double t1654;
  double t1677;
  double t1538;
  double t1555;
  double t1579;
  double t1587;
  double t1595;
  double t1711;
  double t1724;
  double t1815;
  double t1675;
  double t1993;
  double t1998;
  double t2011;
  double t2018;
  double t1927;
  double t1892;
  double t1897;
  double t1898;
  double t1942;
  double t1963;
  double t1964;
  double t2051;
  double t1726;
  double t2080;
  double t1681;
  double t2015;
  double t2197;
  double t2202;
  double t2275;
  double t1837;
  double t2096;
  double t1817;
  double t2391;
  double t2081;
  double t2084;
  double t2119;
  double t2128;
  double t2134;
  double t2137;
  double t2156;
  double t2157;
  double t2417;
  double t2250;
  double t2251;
  double t2274;
  double t2289;
  double t2294;
  double t2302;
  double t2305;
  double t2332;
  double t2440;
  double t2442;
  double t2452;
  double t2458;
  double t2470;
  double t2476;
  double t2480;
  double t2484;
  double t2172;
  double t2505;
  double t2203;
  double t2540;
  double t2493;
  double t2019;
  double t1635;
  double t1671;
  double t1688;
  double t1695;
  double t1734;
  double t1737;
  double t1757;
  double t1602;
  double t1626;
  double t1764;
  double t1766;
  double t1781;
  double t1789;
  double t1827;
  double t1829;
  double t1861;
  double t1870;
  double t1881;
  double t1913;
  double t1921;
  double t1928;
  double t1930;
  double t1932;
  double t1933;
  double t1935;
  double t1985;
  double t2012;
  double t2038;
  double t2050;
  double t2057;
  double t2063;
  double t2078;
  double t2788;
  double t2799;
  double t2801;
  double t2813;
  double t2818;
  double t2820;
  double t2165;
  double t2168;
  double t2179;
  double t2184;
  double t2243;
  double t2246;
  double t2249;
  double t2350;
  double t2352;
  double t2393;
  double t2413;
  double t2426;
  double t2435;
  double t2439;
  double t2497;
  double t2825;
  double t2826;
  double t2827;
  double t2830;
  double t2507;
  double t2838;
  double t2841;
  double t2845;
  double t2846;
  double t2519;
  double t2522;
  double t2848;
  double t2849;
  double t2856;
  double t2858;
  double t2550;
  double t2568;
  double t2570;
  double t2584;
  double t2649;
  double t2669;
  double t2680;
  double t2683;
  double t3003;
  double t3016;
  double t3024;
  double t3032;
  double t3039;
  double t3040;
  double t3046;
  double t3048;
  double t3052;
  double t3056;
  double t3068;
  double t3069;
  double t3085;
  double t3094;
  double t3103;
  double t3119;
  double t3124;
  double t3131;
  double t1301;
  double t1341;
  t69 = -1.*var4[0];
  t73 = t69 + var4[1];
  t81 = -1. + var5[0];
  t87 = -1. + var6[0];
  t96 = 1/t87;
  t97 = -1.*var1[0];
  t99 = t97 + var1[1];
  t106 = t81*t96*t99;
  t110 = t69 + var1[0] + t106;
  t147 = 1/t73;
  t156 = -1.*t147*t110;
  t162 = 1. + t156;
  t335 = Cos(var2[10]);
  t241 = Cos(var2[4]);
  t257 = Cos(var2[9]);
  t271 = -1.*t257;
  t272 = 1. + t271;
  t294 = Sin(var2[9]);
  t296 = -0.15121*t294;
  t339 = -1.*t335;
  t343 = 1. + t339;
  t345 = -1. + t335;
  t349 = Sin(var2[10]);
  t247 = Cos(var2[5]);
  t380 = Sin(var2[5]);
  t365 = Sin(var2[4]);
  t406 = -1.*t241*t247*t294;
  t407 = -1.*t257*t241*t380;
  t409 = t406 + t407;
  t440 = t257*t241*t247;
  t441 = -1.*t241*t294*t380;
  t446 = t440 + t441;
  t458 = Cos(var2[11]);
  t461 = -1.*t458;
  t463 = 1. + t461;
  t472 = Sin(var2[11]);
  t546 = -1. + t458;
  t480 = t349*t365;
  t487 = -4.e-6*t349*t409;
  t492 = -1.000000000016*t343;
  t498 = 1. + t492;
  t510 = t498*t446;
  t515 = t480 + t487 + t510;
  t575 = t335*t365;
  t576 = 4.e-6*t343*t409;
  t578 = -1.*t349*t446;
  t584 = t575 + t576 + t578;
  t645 = 4.e-6*t343*t365;
  t658 = 1.6e-11*t345;
  t690 = 1. + t658;
  t698 = t690*t409;
  t699 = 4.e-6*t349*t446;
  t700 = t645 + t698 + t699;
  t74 = Power(t73,-5);
  t124 = Power(t110,5);
  t131 = Power(t73,-4);
  t133 = Power(t110,4);
  t170 = Power(t73,-3);
  t178 = Power(t110,3);
  t195 = Power(t162,2);
  t205 = Power(t73,-2);
  t209 = Power(t110,2);
  t213 = Power(t162,3);
  t222 = Power(t162,4);
  t233 = Power(t162,5);
  t326 = -4.9936e-13*var2[10];
  t344 = -0.038749*t343;
  t347 = 6.19984e-13*t345;
  t357 = -0.281210000004*t349;
  t361 = t326 + t344 + t347 + t357;
  t290 = 0.15121*t272;
  t306 = t290 + t296;
  t940 = Sin(var2[3]);
  t374 = -0.15121*t272;
  t375 = t374 + t296;
  t951 = Cos(var2[3]);
  t392 = -1.2484e-7*var2[10];
  t394 = 2.479936e-18*t343;
  t396 = -1.54996e-7*t345;
  t404 = 1.124840000016e-6*t349;
  t405 = t392 + t394 + t396 + t404;
  t946 = t247*t940*t365;
  t960 = t951*t380;
  t967 = t946 + t960;
  t973 = t951*t247;
  t975 = -1.*t940*t365*t380;
  t991 = t973 + t975;
  t422 = 0.281210000008499*t343;
  t424 = -0.03874900000062*t349;
  t435 = t422 + t424;
  t465 = 0.50315000001605*t463;
  t474 = -0.0398890000006382*t472;
  t476 = t465 + t474;
  t1005 = -1.*t294*t967;
  t1014 = t257*t991;
  t1023 = t1005 + t1014;
  t1064 = t257*t967;
  t1069 = t294*t991;
  t1073 = t1064 + t1069;
  t544 = -5.04e-14*var2[11];
  t545 = -0.039889*t463;
  t547 = 6.38224e-13*t546;
  t548 = -0.503150000008*t472;
  t555 = t544 + t545 + t547 + t548;
  t599 = -1.26e-8*var2[11];
  t607 = 2.552896e-18*t463;
  t617 = -1.59556e-7*t546;
  t618 = 2.012600000032e-6*t472;
  t625 = t599 + t607 + t617 + t618;
  t1083 = -1.*t241*t349*t940;
  t1090 = -4.e-6*t349*t1023;
  t1096 = t498*t1073;
  t1101 = t1083 + t1090 + t1096;
  t1111 = -1.*t335*t241*t940;
  t1118 = 4.e-6*t343*t1023;
  t1121 = -1.*t349*t1073;
  t1122 = t1111 + t1118 + t1121;
  t729 = 1.6e-11*t546;
  t735 = 1. + t729;
  t1141 = -4.e-6*t343*t241*t940;
  t1144 = t690*t1023;
  t1148 = 4.e-6*t349*t1073;
  t1149 = t1141 + t1144 + t1148;
  t790 = -1.000000000016*t463;
  t791 = 1. + t790;
  t1296 = -1.*t951*t247*t365;
  t1298 = t940*t380;
  t1300 = t1296 + t1298;
  t1321 = t247*t940;
  t1326 = t951*t365*t380;
  t1336 = t1321 + t1326;
  t1346 = -1.*t294*t1300;
  t1347 = t257*t1336;
  t1358 = t1346 + t1347;
  t1364 = t257*t1300;
  t1368 = t294*t1336;
  t1372 = t1364 + t1368;
  t1378 = t951*t241*t349;
  t1379 = -4.e-6*t349*t1358;
  t1383 = t498*t1372;
  t1386 = t1378 + t1379 + t1383;
  t1394 = t335*t951*t241;
  t1395 = 4.e-6*t343*t1358;
  t1399 = -1.*t349*t1372;
  t1401 = t1394 + t1395 + t1399;
  t1403 = 4.e-6*t343*t951*t241;
  t1404 = t690*t1358;
  t1410 = 4.e-6*t349*t1372;
  t1411 = t1403 + t1404 + t1410;
  t1645 = Cos(var2[16]);
  t1646 = -1.*t1645;
  t1654 = 1. + t1646;
  t1677 = Sin(var2[16]);
  t1538 = Cos(var2[15]);
  t1555 = -1.*t1538;
  t1579 = 1. + t1555;
  t1587 = -0.15121*t1579;
  t1595 = Sin(var2[15]);
  t1711 = -1. + t1645;
  t1724 = 4.e-6*t1711;
  t1815 = 7.e-6*t1654;
  t1675 = 2.8e-11*t1654;
  t1993 = Cos(var2[17]);
  t1998 = -1.*t1993;
  t2011 = 1. + t1998;
  t2018 = Sin(var2[17]);
  t1927 = -4.e-6*t1677;
  t1892 = -1.*t241*t247*t1595;
  t1897 = -1.*t1538*t241*t380;
  t1898 = t1892 + t1897;
  t1942 = t1538*t241*t247;
  t1963 = -1.*t241*t1595*t380;
  t1964 = t1942 + t1963;
  t2051 = 2.8e-11*t2011;
  t1726 = -7.e-6*t1677;
  t2080 = -2.8e-11*t1654;
  t1681 = -1.*t1677;
  t2015 = 7.e-6*t2011;
  t2197 = -1. + t1993;
  t2202 = 4.e-6*t2197;
  t2275 = 4.e-6*t1654;
  t1837 = 7.e-6*t1677;
  t2096 = -7.e-6*t1654;
  t1817 = 4.e-6*t1677;
  t2391 = 4.e-6*t2018;
  t2081 = t2080 + t1677;
  t2084 = t2081*t365;
  t2119 = t2096 + t1927;
  t2128 = t2119*t1898;
  t2134 = -1.000000000016*t1654;
  t2137 = 1. + t2134;
  t2156 = t2137*t1964;
  t2157 = t2084 + t2128 + t2156;
  t2417 = 7.e-6*t2018;
  t2250 = -1.000000000049*t1654;
  t2251 = 1. + t2250;
  t2274 = t2251*t365;
  t2289 = t2275 + t1726;
  t2294 = t2289*t1898;
  t2302 = t2080 + t1681;
  t2305 = t2302*t1964;
  t2332 = t2274 + t2294 + t2305;
  t2440 = t2275 + t1837;
  t2442 = t2440*t365;
  t2452 = -6.5e-11*t1654;
  t2458 = 1. + t2452;
  t2470 = t2458*t1898;
  t2476 = t2096 + t1817;
  t2480 = t2476*t1964;
  t2484 = t2442 + t2470 + t2480;
  t2172 = -1.*t2018;
  t2505 = 4.e-6*t2011;
  t2203 = -7.e-6*t2018;
  t2540 = -2.8e-11*t2011;
  t2493 = -7.e-6*t2011;
  t2019 = -4.e-6*t2018;
  t1635 = 1.5843479999999999e-12*var2[16];
  t1671 = -0.03874900000889869*t1654;
  t1688 = t1675 + t1681;
  t1695 = -0.281211000004*t1688;
  t1734 = t1724 + t1726;
  t1737 = -1.8134809999999998e-6*t1734;
  t1757 = t1635 + t1671 + t1695 + t1737;
  t1602 = -0.15121*t1595;
  t1626 = t1587 + t1602;
  t1764 = 0.15121*t1595;
  t1766 = t1587 + t1764;
  t1781 = 3.9608699999999997e-7*var2[16];
  t1789 = -1.1787626499999999e-16*t1654;
  t1827 = t1815 + t1817;
  t1829 = -0.281211000004*t1827;
  t1861 = t1724 + t1837;
  t1870 = -0.038749000006999997*t1861;
  t1881 = t1781 + t1789 + t1829 + t1870;
  t1913 = -2.7726089999999997e-12*var2[16];
  t1921 = -0.2812110000084994*t1654;
  t1928 = t1815 + t1927;
  t1930 = -1.8134809999999998e-6*t1928;
  t1932 = t1675 + t1677;
  t1933 = -0.038749000006999997*t1932;
  t1935 = t1913 + t1921 + t1930 + t1933;
  t1985 = -1.9784030000000015e-12*var2[17];
  t2012 = -0.5031510000160505*t2011;
  t2038 = t2015 + t2019;
  t2050 = -3.367757e-6*t2038;
  t2057 = t2051 + t2018;
  t2063 = -0.038575000014*t2057;
  t2078 = t1985 + t2012 + t2050 + t2063;
  t2788 = -1.*t1595*t967;
  t2799 = t1538*t991;
  t2801 = t2788 + t2799;
  t2813 = t1538*t967;
  t2818 = t1595*t991;
  t2820 = t2813 + t2818;
  t2165 = 1.1305160000000008e-12*var2[17];
  t2168 = -0.03857500001589017*t2011;
  t2179 = t2051 + t2172;
  t2184 = -0.5031510000080001*t2179;
  t2243 = t2202 + t2203;
  t2246 = -3.367757e-6*t2243;
  t2249 = t2165 + t2168 + t2184 + t2246;
  t2350 = 2.826290000000002e-7*var2[17];
  t2352 = -2.18904205e-16*t2011;
  t2393 = t2015 + t2391;
  t2413 = -0.5031510000080001*t2393;
  t2426 = t2202 + t2417;
  t2435 = -0.038575000014*t2426;
  t2439 = t2350 + t2352 + t2413 + t2435;
  t2497 = t2493 + t2391;
  t2825 = -1.*t241*t2081*t940;
  t2826 = t2119*t2801;
  t2827 = t2137*t2820;
  t2830 = t2825 + t2826 + t2827;
  t2507 = t2505 + t2417;
  t2838 = -1.*t2251*t241*t940;
  t2841 = t2289*t2801;
  t2845 = t2302*t2820;
  t2846 = t2838 + t2841 + t2845;
  t2519 = -6.5e-11*t2011;
  t2522 = 1. + t2519;
  t2848 = -1.*t241*t2440*t940;
  t2849 = t2458*t2801;
  t2856 = t2476*t2820;
  t2858 = t2848 + t2849 + t2856;
  t2550 = t2540 + t2172;
  t2568 = -1.000000000049*t2011;
  t2570 = 1. + t2568;
  t2584 = t2505 + t2203;
  t2649 = -1.000000000016*t2011;
  t2669 = 1. + t2649;
  t2680 = t2540 + t2018;
  t2683 = t2493 + t2019;
  t3003 = -1.*t1595*t1300;
  t3016 = t1538*t1336;
  t3024 = t3003 + t3016;
  t3032 = t1538*t1300;
  t3039 = t1595*t1336;
  t3040 = t3032 + t3039;
  t3046 = t951*t241*t2081;
  t3048 = t2119*t3024;
  t3052 = t2137*t3040;
  t3056 = t3046 + t3048 + t3052;
  t3068 = t2251*t951*t241;
  t3069 = t2289*t3024;
  t3085 = t2302*t3040;
  t3094 = t3068 + t3069 + t3085;
  t3103 = t951*t241*t2440;
  t3119 = t2458*t3024;
  t3124 = t2476*t3040;
  t3131 = t3103 + t3119 + t3124;
  t1301 = t306*t1300;
  t1341 = t375*t1336;
  p_output1[0]=t241*t247*t306 + t361*t365 - 1.*t241*t375*t380 + t405*t409 + t435*t446 + t476*t515 + t555*t584 + t625*t700 - 0.041195*(-1.*t472*t515 + t458*t584 + 4.e-6*t463*t700) - 0.14871*(4.e-6*t472*t515 + 4.e-6*t463*t584 + t700*t735) + 0.803147*(t472*t584 - 4.e-6*t472*t700 + t515*t791) + var2[0] - 1.*t233*var3[0] - 5.*t110*t147*t222*var3[10] - 10.*t205*t209*t213*var3[20] - 10.*t170*t178*t195*var3[30] - 5.*t131*t133*t162*var3[40] - 1.*t124*t74*var3[50];
  p_output1[1]=t1023*t405 + t1073*t435 - 0.041195*(t1122*t458 + 4.e-6*t1149*t463 - 1.*t1101*t472) + t1101*t476 + t1122*t555 + t1149*t625 - 0.14871*(4.e-6*t1122*t463 + 4.e-6*t1101*t472 + t1149*t735) + 0.803147*(t1122*t472 - 4.e-6*t1149*t472 + t1101*t791) - 1.*t241*t361*t940 + t306*t967 + t375*t991 + var2[1] - 1.*t233*var3[1] - 5.*t110*t147*t222*var3[11] - 10.*t205*t209*t213*var3[21] - 10.*t170*t178*t195*var3[31] - 5.*t131*t133*t162*var3[41] - 1.*t124*t74*var3[51];
  p_output1[2]=t1301 + t1341 + t1358*t405 + t1372*t435 - 0.041195*(t1401*t458 + 4.e-6*t1411*t463 - 1.*t1386*t472) + t1386*t476 + t1401*t555 + t1411*t625 - 0.14871*(4.e-6*t1401*t463 + 4.e-6*t1386*t472 + t1411*t735) + 0.803147*(t1401*t472 - 4.e-6*t1411*t472 + t1386*t791) + t241*t361*t951 + var2[2] - 1.*t233*var3[2] - 5.*t110*t147*t222*var3[12] - 10.*t205*t209*t213*var3[22] - 10.*t170*t178*t195*var3[32] - 5.*t131*t133*t162*var3[42] - 1.*t124*t74*var3[52];
  p_output1[3]=t1881*t1898 + t1935*t1964 + t2078*t2157 + t2249*t2332 + t1626*t241*t247 + t2439*t2484 - 0.148715*(t2157*t2497 + t2332*t2507 + t2484*t2522) - 0.038576*(t2157*t2550 + t2332*t2570 + t2484*t2584) - 0.80315*(t2157*t2669 + t2332*t2680 + t2484*t2683) + t1757*t365 - 1.*t1766*t241*t380 + var2[0] - 1.*t233*var3[3] - 5.*t110*t147*t222*var3[13] - 10.*t205*t209*t213*var3[23] - 10.*t170*t178*t195*var3[33] - 5.*t131*t133*t162*var3[43] - 1.*t124*t74*var3[53];
  p_output1[4]=t1881*t2801 + t1935*t2820 + t2078*t2830 + t2249*t2846 + t2439*t2858 - 0.148715*(t2497*t2830 + t2507*t2846 + t2522*t2858) - 0.038576*(t2550*t2830 + t2570*t2846 + t2584*t2858) - 0.80315*(t2669*t2830 + t2680*t2846 + t2683*t2858) - 1.*t1757*t241*t940 + t1626*t967 + t1766*t991 + var2[1] - 1.*t233*var3[4] - 5.*t110*t147*t222*var3[14] - 10.*t205*t209*t213*var3[24] - 10.*t170*t178*t195*var3[34] - 5.*t131*t133*t162*var3[44] - 1.*t124*t74*var3[54];
  p_output1[5]=t1300*t1626 + t1336*t1766 + t1881*t3024 + t1935*t3040 + t2078*t3056 + t2249*t3094 + t2439*t3131 - 0.148715*(t2497*t3056 + t2507*t3094 + t2522*t3131) - 0.038576*(t2550*t3056 + t2570*t3094 + t2584*t3131) - 0.80315*(t2669*t3056 + t2680*t3094 + t2683*t3131) + t1757*t241*t951 + var2[2] - 1.*t233*var3[5] - 5.*t110*t147*t222*var3[15] - 10.*t205*t209*t213*var3[25] - 10.*t170*t178*t195*var3[35] - 5.*t131*t133*t162*var3[45] - 1.*t124*t74*var3[55];
  p_output1[6]=0.024028*t241*t940 + 0.00183*t967 - 0.002264*t991 + var2[1] - 1.*t233*var3[6] - 5.*t110*t147*t222*var3[16] - 10.*t205*t209*t213*var3[26] - 10.*t170*t178*t195*var3[36] - 5.*t131*t133*t162*var3[46] - 1.*t124*t74*var3[56];
  p_output1[7]=0.00183*t1300 - 0.002264*t1336 - 0.024028*t241*t951 + var2[2] - 1.*t233*var3[7] - 5.*t110*t147*t222*var3[17] - 10.*t205*t209*t213*var3[27] - 10.*t170*t178*t195*var3[37] - 5.*t131*t133*t162*var3[47] - 1.*t124*t74*var3[57];
  p_output1[8]=ArcTan(t241*t247,t967) - 1.*t233*var3[8] - 5.*t110*t147*t222*var3[18] - 10.*t205*t209*t213*var3[28] - 10.*t170*t178*t195*var3[38] - 5.*t131*t133*t162*var3[48] - 1.*t124*t74*var3[58];
  p_output1[9]=t1301 + t1341 - 0.15121*t1358 + 0.15121*t1372 - 1.*t1300*t1626 - 1.*t1336*t1766 + 0.15121*t3024 + 0.15121*t3040 - 1.*t233*var3[9] - 5.*t110*t147*t222*var3[19] - 10.*t205*t209*t213*var3[29] - 10.*t170*t178*t195*var3[39] - 5.*t131*t133*t162*var3[49] - 1.*t124*t74*var3[59];
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
