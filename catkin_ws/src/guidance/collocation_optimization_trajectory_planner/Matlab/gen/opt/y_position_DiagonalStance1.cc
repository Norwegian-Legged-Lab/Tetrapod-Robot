/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:27:21 GMT+01:00
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
  double t38;
  double t70;
  double t74;
  double t112;
  double t114;
  double t135;
  double t143;
  double t151;
  double t181;
  double t245;
  double t251;
  double t262;
  double t366;
  double t370;
  double t373;
  double t375;
  double t380;
  double t384;
  double t367;
  double t402;
  double t435;
  double t439;
  double t442;
  double t450;
  double t481;
  double t518;
  double t412;
  double t417;
  double t425;
  double t465;
  double t466;
  double t467;
  double t592;
  double t607;
  double t609;
  double t613;
  double t525;
  double t530;
  double t556;
  double t557;
  double t568;
  double t572;
  double t725;
  double t677;
  double t678;
  double t679;
  double t689;
  double t622;
  double t628;
  double t632;
  double t642;
  double t645;
  double t658;
  double t71;
  double t198;
  double t234;
  double t240;
  double t281;
  double t285;
  double t291;
  double t293;
  double t298;
  double t315;
  double t340;
  double t351;
  double t394;
  double t400;
  double t876;
  double t867;
  double t406;
  double t409;
  double t874;
  double t881;
  double t886;
  double t897;
  double t901;
  double t915;
  double t427;
  double t448;
  double t451;
  double t457;
  double t470;
  double t472;
  double t475;
  double t487;
  double t488;
  double t501;
  double t511;
  double t937;
  double t939;
  double t940;
  double t947;
  double t948;
  double t957;
  double t584;
  double t611;
  double t615;
  double t617;
  double t663;
  double t664;
  double t665;
  double t692;
  double t698;
  double t704;
  double t711;
  double t726;
  double t733;
  double t971;
  double t973;
  double t975;
  double t977;
  double t1023;
  double t1028;
  double t1034;
  double t1037;
  double t1003;
  double t1004;
  double t1017;
  double t1018;
  double t775;
  double t776;
  double t1123;
  double t1125;
  double t1136;
  double t1143;
  double t1152;
  double t1162;
  double t1187;
  double t1192;
  double t1202;
  double t1206;
  double t1209;
  double t1212;
  double t1240;
  double t1248;
  double t1249;
  double t1253;
  double t1276;
  double t1285;
  double t1290;
  double t1291;
  double t1257;
  double t1264;
  double t1266;
  double t1271;
  double t1454;
  double t1459;
  double t1462;
  double t1474;
  double t1406;
  double t1418;
  double t1419;
  double t1423;
  double t1425;
  double t1483;
  double t1485;
  double t1514;
  double t1472;
  double t1622;
  double t1641;
  double t1648;
  double t1658;
  double t1596;
  double t1572;
  double t1578;
  double t1584;
  double t1613;
  double t1617;
  double t1619;
  double t1679;
  double t1494;
  double t1707;
  double t1475;
  double t1655;
  double t1802;
  double t1810;
  double t1864;
  double t1547;
  double t1737;
  double t1527;
  double t1896;
  double t1714;
  double t1729;
  double t1740;
  double t1754;
  double t1759;
  double t1767;
  double t1770;
  double t1780;
  double t1911;
  double t1848;
  double t1858;
  double t1860;
  double t1868;
  double t1875;
  double t1876;
  double t1883;
  double t1884;
  double t1933;
  double t1955;
  double t1957;
  double t1964;
  double t1966;
  double t1973;
  double t1976;
  double t1985;
  double t1795;
  double t2000;
  double t1819;
  double t2039;
  double t1990;
  double t1661;
  double t1448;
  double t1463;
  double t1476;
  double t1480;
  double t1496;
  double t1497;
  double t1501;
  double t1426;
  double t1430;
  double t1505;
  double t1508;
  double t1510;
  double t1513;
  double t1535;
  double t1536;
  double t1548;
  double t1557;
  double t1567;
  double t1589;
  double t1591;
  double t1598;
  double t1602;
  double t1604;
  double t1609;
  double t1611;
  double t1621;
  double t1653;
  double t1669;
  double t1676;
  double t1692;
  double t1693;
  double t1701;
  double t2139;
  double t2141;
  double t2153;
  double t2157;
  double t2159;
  double t2160;
  double t1783;
  double t1788;
  double t1797;
  double t1799;
  double t1822;
  double t1825;
  double t1844;
  double t1887;
  double t1895;
  double t1898;
  double t1906;
  double t1916;
  double t1928;
  double t1930;
  double t1991;
  double t2162;
  double t2165;
  double t2167;
  double t2172;
  double t2003;
  double t2185;
  double t2188;
  double t2194;
  double t2198;
  double t2007;
  double t2011;
  double t2200;
  double t2215;
  double t2223;
  double t2226;
  double t2042;
  double t2052;
  double t2057;
  double t2059;
  double t2070;
  double t2082;
  double t2087;
  double t2097;
  double t2355;
  double t2362;
  double t2369;
  double t2375;
  double t2381;
  double t2395;
  double t2410;
  double t2411;
  double t2418;
  double t2421;
  double t2450;
  double t2465;
  double t2468;
  double t2469;
  double t2474;
  double t2477;
  double t2489;
  double t2499;
  double t2777;
  double t2779;
  double t2786;
  double t2790;
  double t2799;
  double t2819;
  double t2827;
  double t2831;
  double t2845;
  double t2849;
  t38 = -1.*var4[0];
  t70 = t38 + var4[1];
  t74 = -1. + var5[0];
  t112 = -1. + var6[0];
  t114 = 1/t112;
  t135 = -1.*var1[0];
  t143 = t135 + var1[1];
  t151 = t74*t114*t143;
  t181 = t38 + var1[0] + t151;
  t245 = 1/t70;
  t251 = -1.*t245*t181;
  t262 = 1. + t251;
  t366 = Cos(var2[4]);
  t370 = Cos(var2[6]);
  t373 = -1.*t370;
  t375 = 1. + t373;
  t380 = 0.15121*t375;
  t384 = Sin(var2[6]);
  t367 = Sin(var2[5]);
  t402 = Cos(var2[5]);
  t435 = Cos(var2[7]);
  t439 = -1.*t435;
  t442 = 1. + t439;
  t450 = Sin(var2[7]);
  t481 = Sin(var2[4]);
  t518 = -1. + t435;
  t412 = -1.*t366*t370*t367;
  t417 = -1.*t366*t402*t384;
  t425 = t412 + t417;
  t465 = t366*t402*t370;
  t466 = -1.*t366*t367*t384;
  t467 = t465 + t466;
  t592 = Cos(var2[8]);
  t607 = -1.*t592;
  t609 = 1. + t607;
  t613 = Sin(var2[8]);
  t525 = 4.e-6*t518*t481;
  t530 = 1.6e-11*t518;
  t556 = 1. + t530;
  t557 = t556*t425;
  t568 = 4.e-6*t467*t450;
  t572 = t525 + t557 + t568;
  t725 = -1. + t592;
  t677 = t435*t481;
  t678 = 4.e-6*t518*t425;
  t679 = t467*t450;
  t689 = t677 + t678 + t679;
  t622 = -1.000000000016*t442;
  t628 = 1. + t622;
  t632 = t628*t467;
  t642 = -1.*t481*t450;
  t645 = -4.e-6*t425*t450;
  t658 = t632 + t642 + t645;
  t71 = Power(t70,-5);
  t198 = Power(t181,5);
  t234 = Power(t70,-4);
  t240 = Power(t181,4);
  t281 = Power(t70,-3);
  t285 = Power(t181,3);
  t291 = Power(t262,2);
  t293 = Power(t70,-2);
  t298 = Power(t181,2);
  t315 = Power(t262,3);
  t340 = Power(t262,4);
  t351 = Power(t262,5);
  t394 = -0.15121*t384;
  t400 = t380 + t394;
  t876 = Sin(var2[3]);
  t867 = Cos(var2[3]);
  t406 = 0.15121*t384;
  t409 = t380 + t406;
  t874 = t867*t402;
  t881 = -1.*t876*t481*t367;
  t886 = t874 + t881;
  t897 = t402*t876*t481;
  t901 = t867*t367;
  t915 = t897 + t901;
  t427 = -1.2484e-7*var2[7];
  t448 = -1.5499600000248e-7*t442;
  t451 = 1.124840000016e-6*t450;
  t457 = t427 + t448 + t451;
  t470 = 0.281210000008499*t442;
  t472 = 0.03874900000062*t450;
  t475 = t470 + t472;
  t487 = 4.9936e-13*var2[7];
  t488 = -0.03874900000062*t442;
  t501 = 0.281210000004*t450;
  t511 = t487 + t488 + t501;
  t937 = t370*t886;
  t939 = -1.*t915*t384;
  t940 = t937 + t939;
  t947 = t370*t915;
  t948 = t886*t384;
  t957 = t947 + t948;
  t584 = -1.284e-8*var2[8];
  t611 = -1.5499600000248e-7*t609;
  t615 = 2.012840000032e-6*t613;
  t617 = t584 + t611 + t615;
  t663 = 0.503210000016051*t609;
  t664 = 0.03874900000062*t613;
  t665 = t663 + t664;
  t692 = 5.136e-14*var2[8];
  t698 = -0.03874900000062*t609;
  t704 = 0.503210000008*t613;
  t711 = t692 + t698 + t704;
  t726 = 1.6e-11*t725;
  t733 = 1. + t726;
  t971 = -4.e-6*t366*t518*t876;
  t973 = t556*t940;
  t975 = 4.e-6*t957*t450;
  t977 = t971 + t973 + t975;
  t1023 = -1.*t366*t435*t876;
  t1028 = 4.e-6*t518*t940;
  t1034 = t957*t450;
  t1037 = t1023 + t1028 + t1034;
  t1003 = t628*t957;
  t1004 = t366*t876*t450;
  t1017 = -4.e-6*t940*t450;
  t1018 = t1003 + t1004 + t1017;
  t775 = -1.000000000016*t609;
  t776 = 1. + t775;
  t1123 = t402*t876;
  t1125 = t867*t481*t367;
  t1136 = t1123 + t1125;
  t1143 = -1.*t867*t402*t481;
  t1152 = t876*t367;
  t1162 = t1143 + t1152;
  t1187 = t370*t1136;
  t1192 = -1.*t1162*t384;
  t1202 = t1187 + t1192;
  t1206 = t370*t1162;
  t1209 = t1136*t384;
  t1212 = t1206 + t1209;
  t1240 = 4.e-6*t867*t366*t518;
  t1248 = t556*t1202;
  t1249 = 4.e-6*t1212*t450;
  t1253 = t1240 + t1248 + t1249;
  t1276 = t867*t366*t435;
  t1285 = 4.e-6*t518*t1202;
  t1290 = t1212*t450;
  t1291 = t1276 + t1285 + t1290;
  t1257 = t628*t1212;
  t1264 = -1.*t867*t366*t450;
  t1266 = -4.e-6*t1202*t450;
  t1271 = t1257 + t1264 + t1266;
  t1454 = Cos(var2[16]);
  t1459 = -1.*t1454;
  t1462 = 1. + t1459;
  t1474 = Sin(var2[16]);
  t1406 = Cos(var2[15]);
  t1418 = -1.*t1406;
  t1419 = 1. + t1418;
  t1423 = -0.15121*t1419;
  t1425 = Sin(var2[15]);
  t1483 = -1. + t1454;
  t1485 = 4.e-6*t1483;
  t1514 = 7.e-6*t1462;
  t1472 = 2.8e-11*t1462;
  t1622 = Cos(var2[17]);
  t1641 = -1.*t1622;
  t1648 = 1. + t1641;
  t1658 = Sin(var2[17]);
  t1596 = -4.e-6*t1474;
  t1572 = -1.*t366*t402*t1425;
  t1578 = -1.*t1406*t366*t367;
  t1584 = t1572 + t1578;
  t1613 = t1406*t366*t402;
  t1617 = -1.*t366*t1425*t367;
  t1619 = t1613 + t1617;
  t1679 = 2.8e-11*t1648;
  t1494 = -7.e-6*t1474;
  t1707 = -2.8e-11*t1462;
  t1475 = -1.*t1474;
  t1655 = 7.e-6*t1648;
  t1802 = -1. + t1622;
  t1810 = 4.e-6*t1802;
  t1864 = 4.e-6*t1462;
  t1547 = 7.e-6*t1474;
  t1737 = -7.e-6*t1462;
  t1527 = 4.e-6*t1474;
  t1896 = 4.e-6*t1658;
  t1714 = t1707 + t1474;
  t1729 = t1714*t481;
  t1740 = t1737 + t1596;
  t1754 = t1740*t1584;
  t1759 = -1.000000000016*t1462;
  t1767 = 1. + t1759;
  t1770 = t1767*t1619;
  t1780 = t1729 + t1754 + t1770;
  t1911 = 7.e-6*t1658;
  t1848 = -1.000000000049*t1462;
  t1858 = 1. + t1848;
  t1860 = t1858*t481;
  t1868 = t1864 + t1494;
  t1875 = t1868*t1584;
  t1876 = t1707 + t1475;
  t1883 = t1876*t1619;
  t1884 = t1860 + t1875 + t1883;
  t1933 = t1864 + t1547;
  t1955 = t1933*t481;
  t1957 = -6.5e-11*t1462;
  t1964 = 1. + t1957;
  t1966 = t1964*t1584;
  t1973 = t1737 + t1527;
  t1976 = t1973*t1619;
  t1985 = t1955 + t1966 + t1976;
  t1795 = -1.*t1658;
  t2000 = 4.e-6*t1648;
  t1819 = -7.e-6*t1658;
  t2039 = -2.8e-11*t1648;
  t1990 = -7.e-6*t1648;
  t1661 = -4.e-6*t1658;
  t1448 = 1.5843479999999999e-12*var2[16];
  t1463 = -0.03874900000889869*t1462;
  t1476 = t1472 + t1475;
  t1480 = -0.281211000004*t1476;
  t1496 = t1485 + t1494;
  t1497 = -1.8134809999999998e-6*t1496;
  t1501 = t1448 + t1463 + t1480 + t1497;
  t1426 = -0.15121*t1425;
  t1430 = t1423 + t1426;
  t1505 = 0.15121*t1425;
  t1508 = t1423 + t1505;
  t1510 = 3.9608699999999997e-7*var2[16];
  t1513 = -1.1787626499999999e-16*t1462;
  t1535 = t1514 + t1527;
  t1536 = -0.281211000004*t1535;
  t1548 = t1485 + t1547;
  t1557 = -0.038749000006999997*t1548;
  t1567 = t1510 + t1513 + t1536 + t1557;
  t1589 = -2.7726089999999997e-12*var2[16];
  t1591 = -0.2812110000084994*t1462;
  t1598 = t1514 + t1596;
  t1602 = -1.8134809999999998e-6*t1598;
  t1604 = t1472 + t1474;
  t1609 = -0.038749000006999997*t1604;
  t1611 = t1589 + t1591 + t1602 + t1609;
  t1621 = -1.9784030000000015e-12*var2[17];
  t1653 = -0.5031510000160505*t1648;
  t1669 = t1655 + t1661;
  t1676 = -3.367757e-6*t1669;
  t1692 = t1679 + t1658;
  t1693 = -0.038575000014*t1692;
  t1701 = t1621 + t1653 + t1676 + t1693;
  t2139 = -1.*t1425*t915;
  t2141 = t1406*t886;
  t2153 = t2139 + t2141;
  t2157 = t1406*t915;
  t2159 = t1425*t886;
  t2160 = t2157 + t2159;
  t1783 = 1.1305160000000008e-12*var2[17];
  t1788 = -0.03857500001589017*t1648;
  t1797 = t1679 + t1795;
  t1799 = -0.5031510000080001*t1797;
  t1822 = t1810 + t1819;
  t1825 = -3.367757e-6*t1822;
  t1844 = t1783 + t1788 + t1799 + t1825;
  t1887 = 2.826290000000002e-7*var2[17];
  t1895 = -2.18904205e-16*t1648;
  t1898 = t1655 + t1896;
  t1906 = -0.5031510000080001*t1898;
  t1916 = t1810 + t1911;
  t1928 = -0.038575000014*t1916;
  t1930 = t1887 + t1895 + t1906 + t1928;
  t1991 = t1990 + t1896;
  t2162 = -1.*t366*t1714*t876;
  t2165 = t1740*t2153;
  t2167 = t1767*t2160;
  t2172 = t2162 + t2165 + t2167;
  t2003 = t2000 + t1911;
  t2185 = -1.*t1858*t366*t876;
  t2188 = t1868*t2153;
  t2194 = t1876*t2160;
  t2198 = t2185 + t2188 + t2194;
  t2007 = -6.5e-11*t1648;
  t2011 = 1. + t2007;
  t2200 = -1.*t366*t1933*t876;
  t2215 = t1964*t2153;
  t2223 = t1973*t2160;
  t2226 = t2200 + t2215 + t2223;
  t2042 = t2039 + t1795;
  t2052 = -1.000000000049*t1648;
  t2057 = 1. + t2052;
  t2059 = t2000 + t1819;
  t2070 = -1.000000000016*t1648;
  t2082 = 1. + t2070;
  t2087 = t2039 + t1658;
  t2097 = t1990 + t1661;
  t2355 = -1.*t1425*t1162;
  t2362 = t1406*t1136;
  t2369 = t2355 + t2362;
  t2375 = t1406*t1162;
  t2381 = t1425*t1136;
  t2395 = t2375 + t2381;
  t2410 = t867*t366*t1714;
  t2411 = t1740*t2369;
  t2418 = t1767*t2395;
  t2421 = t2410 + t2411 + t2418;
  t2450 = t1858*t867*t366;
  t2465 = t1868*t2369;
  t2468 = t1876*t2395;
  t2469 = t2450 + t2465 + t2468;
  t2474 = t867*t366*t1933;
  t2477 = t1964*t2369;
  t2489 = t1973*t2395;
  t2499 = t2474 + t2477 + t2489;
  t2777 = Cos(var2[9]);
  t2779 = -1.*t2777;
  t2786 = 1. + t2779;
  t2790 = Sin(var2[9]);
  t2799 = -0.15121*t2790;
  t2819 = Cos(var2[12]);
  t2827 = -1.*t2819;
  t2831 = 1. + t2827;
  t2845 = Sin(var2[12]);
  t2849 = 0.15121*t2845;
  p_output1[0]=-1.*t366*t367*t400 + t366*t402*t409 + t425*t457 + t467*t475 + t481*t511 + t572*t617 + t658*t665 + t689*t711 - 0.03875*(t613*t658 + t592*t689 + 4.e-6*t572*t725) + 0.14871*(4.e-6*t613*t658 + 4.e-6*t689*t725 + t572*t733) + 0.80321*(-4.e-6*t572*t613 - 1.*t613*t689 + t658*t776) + var2[0] - 1.*t351*var3[0] - 5.*t181*t245*t340*var3[10] - 10.*t293*t298*t315*var3[20] - 10.*t281*t285*t291*var3[30] - 5.*t234*t240*t262*var3[40] - 1.*t198*t71*var3[50];
  p_output1[1]=t1018*t665 + t1037*t711 - 1.*t366*t511*t876 + t400*t886 + t409*t915 + t457*t940 + t475*t957 + t617*t977 + 0.80321*(-1.*t1037*t613 + t1018*t776 - 4.e-6*t613*t977) - 0.03875*(t1037*t592 + t1018*t613 + 4.e-6*t725*t977) + 0.14871*(4.e-6*t1018*t613 + 4.e-6*t1037*t725 + t733*t977) + var2[1] - 1.*t351*var3[1] - 5.*t181*t245*t340*var3[11] - 10.*t293*t298*t315*var3[21] - 10.*t281*t285*t291*var3[31] - 5.*t234*t240*t262*var3[41] - 1.*t198*t71*var3[51];
  p_output1[2]=t1136*t400 + t1162*t409 + t1202*t457 + t1212*t475 + t1253*t617 + t1271*t665 + t1291*t711 - 0.03875*(t1291*t592 + t1271*t613 + 4.e-6*t1253*t725) + 0.14871*(4.e-6*t1271*t613 + 4.e-6*t1291*t725 + t1253*t733) + 0.80321*(-4.e-6*t1253*t613 - 1.*t1291*t613 + t1271*t776) + t366*t511*t867 + var2[2] - 1.*t351*var3[2] - 5.*t181*t245*t340*var3[12] - 10.*t293*t298*t315*var3[22] - 10.*t281*t285*t291*var3[32] - 5.*t234*t240*t262*var3[42] - 1.*t198*t71*var3[52];
  p_output1[3]=t1567*t1584 + t1611*t1619 + t1701*t1780 + t1844*t1884 + t1930*t1985 - 0.148715*(t1780*t1991 + t1884*t2003 + t1985*t2011) - 0.038576*(t1780*t2042 + t1884*t2057 + t1985*t2059) - 0.80315*(t1780*t2082 + t1884*t2087 + t1985*t2097) - 1.*t1508*t366*t367 + t1430*t366*t402 + t1501*t481 + var2[0] - 1.*t351*var3[3] - 5.*t181*t245*t340*var3[13] - 10.*t293*t298*t315*var3[23] - 10.*t281*t285*t291*var3[33] - 5.*t234*t240*t262*var3[43] - 1.*t198*t71*var3[53];
  p_output1[4]=t1567*t2153 + t1611*t2160 + t1701*t2172 + t1844*t2198 + t1930*t2226 - 0.148715*(t1991*t2172 + t2003*t2198 + t2011*t2226) - 0.038576*(t2042*t2172 + t2057*t2198 + t2059*t2226) - 0.80315*(t2082*t2172 + t2087*t2198 + t2097*t2226) - 1.*t1501*t366*t876 + t1508*t886 + t1430*t915 + var2[1] - 1.*t351*var3[4] - 5.*t181*t245*t340*var3[14] - 10.*t293*t298*t315*var3[24] - 10.*t281*t285*t291*var3[34] - 5.*t234*t240*t262*var3[44] - 1.*t198*t71*var3[54];
  p_output1[5]=t1162*t1430 + t1136*t1508 + t1567*t2369 + t1611*t2395 + t1701*t2421 + t1844*t2469 + t1930*t2499 - 0.148715*(t1991*t2421 + t2003*t2469 + t2011*t2499) - 0.038576*(t2042*t2421 + t2057*t2469 + t2059*t2499) - 0.80315*(t2082*t2421 + t2087*t2469 + t2097*t2499) + t1501*t366*t867 + var2[2] - 1.*t351*var3[5] - 5.*t181*t245*t340*var3[15] - 10.*t293*t298*t315*var3[25] - 10.*t281*t285*t291*var3[35] - 5.*t234*t240*t262*var3[45] - 1.*t198*t71*var3[55];
  p_output1[6]=0.024028*t366*t876 - 0.002264*t886 + 0.00183*t915 + var2[1] - 1.*t351*var3[6] - 5.*t181*t245*t340*var3[16] - 10.*t293*t298*t315*var3[26] - 10.*t281*t285*t291*var3[36] - 5.*t234*t240*t262*var3[46] - 1.*t198*t71*var3[56];
  p_output1[7]=-0.002264*t1136 + 0.00183*t1162 - 0.024028*t366*t867 + var2[2] - 1.*t351*var3[7] - 5.*t181*t245*t340*var3[17] - 10.*t293*t298*t315*var3[27] - 10.*t281*t285*t291*var3[37] - 5.*t234*t240*t262*var3[47] - 1.*t198*t71*var3[57];
  p_output1[8]=ArcTan(t366*t402,t915) - 1.*t351*var3[8] - 5.*t181*t245*t340*var3[18] - 10.*t293*t298*t315*var3[28] - 10.*t281*t285*t291*var3[38] - 5.*t234*t240*t262*var3[48] - 1.*t198*t71*var3[58];
  p_output1[9]=0.15121*(t1162*t2777 + t1136*t2790) - 0.15121*(t1136*t2777 - 1.*t1162*t2790) + t1136*(-0.15121*t2786 + t2799) + t1162*(0.15121*t2786 + t2799) + 0.15121*(t1162*t2819 + t1136*t2845) - 0.15121*(t1136*t2819 - 1.*t1162*t2845) - 1.*t1162*(-0.15121*t2831 + t2849) - 1.*t1136*(0.15121*t2831 + t2849) - 1.*t351*var3[9] - 5.*t181*t245*t340*var3[19] - 10.*t293*t298*t315*var3[29] - 10.*t281*t285*t291*var3[39] - 5.*t234*t240*t262*var3[49] - 1.*t198*t71*var3[59];
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

#include "y_position_DiagonalStance1.hh"

namespace DiagonalStance1
{

void y_position_DiagonalStance1_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
