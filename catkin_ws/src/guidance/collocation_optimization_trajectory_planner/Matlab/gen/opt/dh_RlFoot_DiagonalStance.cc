/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:28:32 GMT+01:00
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
  double t324;
  double t389;
  double t395;
  double t95;
  double t133;
  double t201;
  double t464;
  double t475;
  double t222;
  double t414;
  double t421;
  double t493;
  double t523;
  double t524;
  double t202;
  double t564;
  double t585;
  double t600;
  double t610;
  double t616;
  double t663;
  double t669;
  double t705;
  double t738;
  double t743;
  double t762;
  double t767;
  double t626;
  double t634;
  double t884;
  double t867;
  double t872;
  double t888;
  double t1080;
  double t824;
  double t835;
  double t1233;
  double t1076;
  double t223;
  double t1108;
  double t1111;
  double t1134;
  double t1147;
  double t1067;
  double t982;
  double t1238;
  double t1256;
  double t1261;
  double t1266;
  double t1045;
  double t1048;
  double t1114;
  double t1186;
  double t1202;
  double t946;
  double t960;
  double t1206;
  double t1221;
  double t1225;
  double t1247;
  double t1252;
  double t1079;
  double t1262;
  double t1277;
  double t1286;
  double t638;
  double t1310;
  double t1369;
  double t1370;
  double t1372;
  double t1377;
  double t1382;
  double t1384;
  double t1393;
  double t1395;
  double t1406;
  double t1420;
  double t1428;
  double t1440;
  double t1454;
  double t1455;
  double t1456;
  double t1466;
  double t1469;
  double t1476;
  double t1480;
  double t1481;
  double t1482;
  double t1500;
  double t1510;
  double t1513;
  double t1522;
  double t1528;
  double t1543;
  double t1544;
  double t1550;
  double t1551;
  double t1553;
  double t544;
  double t549;
  double t656;
  double t238;
  double t1606;
  double t1337;
  double t1570;
  double t1574;
  double t1577;
  double t1583;
  double t1001;
  double t1029;
  double t1063;
  double t1068;
  double t1084;
  double t1101;
  double t1295;
  double t1299;
  double t1330;
  double t1331;
  double t1340;
  double t1358;
  double t1425;
  double t1489;
  double t1555;
  double t1559;
  double t1030;
  double t1071;
  double t1105;
  double t1107;
  double t1590;
  double t1602;
  double t1611;
  double t1614;
  double t1622;
  double t1627;
  double t1628;
  double t1638;
  double t1639;
  double t1644;
  double t1674;
  double t1676;
  double t1677;
  double t1682;
  double t1683;
  double t1686;
  double t1692;
  double t1696;
  double t1699;
  double t1702;
  double t1824;
  double t1835;
  double t1839;
  double t1840;
  double t1864;
  double t1865;
  double t1872;
  double t1873;
  double t1649;
  double t1203;
  double t1253;
  double t1292;
  double t1293;
  double t1656;
  double t1659;
  double t1671;
  double t1673;
  double t1942;
  double t1936;
  double t1987;
  double t1988;
  double t1993;
  double t1724;
  double t1714;
  double t1717;
  double t1719;
  double t1720;
  double t1747;
  double t1748;
  double t1753;
  double t1759;
  double t1990;
  double t1995;
  double t2002;
  double t2010;
  double t2039;
  double t2042;
  double t2044;
  double t2053;
  double t540;
  double t622;
  double t779;
  double t815;
  double t841;
  double t883;
  double t904;
  double t912;
  double t2117;
  double t2149;
  double t2151;
  double t2156;
  double t2118;
  double t2126;
  double t2127;
  double t2158;
  double t2115;
  double t2103;
  double t2106;
  double t2108;
  double t2109;
  double t2110;
  double t2133;
  double t2177;
  double t2180;
  double t2224;
  double t2198;
  double t2206;
  double t2216;
  double t2192;
  double t2228;
  double t2231;
  double t2232;
  double t2065;
  double t2070;
  double t2073;
  double t2085;
  double t2087;
  double t2090;
  double t2020;
  double t2030;
  double t2034;
  double t1937;
  double t1947;
  double t1962;
  double t2304;
  double t2305;
  double t2306;
  double t2291;
  double t2294;
  double t2299;
  double t2273;
  double t2274;
  double t2279;
  double t2321;
  double t2325;
  double t2327;
  double t2363;
  double t2366;
  double t2369;
  double t2332;
  double t2284;
  double t2289;
  double t2290;
  double t2404;
  double t2415;
  double t2419;
  double t2375;
  double t2392;
  double t2395;
  double t2399;
  double t2435;
  double t2436;
  double t2437;
  double t2467;
  double t2470;
  double t2476;
  double t2586;
  double t2587;
  double t2602;
  double t2603;
  double t2609;
  double t2611;
  double t2613;
  double t2620;
  double t2533;
  double t2551;
  double t2490;
  double t2491;
  double t2493;
  double t2112;
  double t2184;
  double t2187;
  double t2749;
  double t2440;
  double t2463;
  double t2465;
  double t2759;
  double t2570;
  double t2869;
  double t2871;
  double t2873;
  double t2887;
  double t2890;
  double t2895;
  double t2899;
  double t2915;
  double t2821;
  double t2829;
  double t3078;
  double t3093;
  t324 = Cos(var1[14]);
  t389 = -1.*t324;
  t395 = 1. + t389;
  t95 = Cos(var1[13]);
  t133 = -1.*t95;
  t201 = 1. + t133;
  t464 = Sin(var1[14]);
  t475 = 4.e-6*t464;
  t222 = Sin(var1[13]);
  t414 = 1.000000000016*t395;
  t421 = -7.e-6*t395;
  t493 = t421 + t475;
  t523 = -7.e-6*t493;
  t524 = -1. + t414 + t523;
  t202 = -7.e-6*t201;
  t564 = -6.5e-11*t395;
  t585 = 1. + t564;
  t600 = -7.e-6*t585;
  t610 = 7.e-6*t395;
  t616 = t600 + t610 + t475;
  t663 = -2.8e-11*t395;
  t669 = -1. + t324;
  t705 = 4.e-6*t669;
  t738 = -7.e-6*t464;
  t743 = t705 + t738;
  t762 = -7.e-6*t743;
  t767 = t663 + t762 + t464;
  t626 = -1. + t95;
  t634 = 4.e-6*t626;
  t884 = 2.8e-11*t201;
  t867 = 4.e-6*t222;
  t872 = t202 + t867;
  t888 = t884 + t222;
  t1080 = 2.8e-11*t395;
  t824 = -1.000000000016*t201;
  t835 = 1. + t824;
  t1233 = -1.*t464;
  t1076 = -1.*t222;
  t223 = -4.e-6*t222;
  t1108 = 4.e-6*t395;
  t1111 = t1108 + t738;
  t1134 = -4.e-6*t464;
  t1147 = t421 + t1134;
  t1067 = 7.e-6*t464;
  t982 = -1.000000000049*t395;
  t1238 = t1080 + t1233;
  t1256 = -1.000000000016*t395;
  t1261 = 1. + t1256;
  t1266 = t663 + t1233;
  t1045 = -7.e-6*t222;
  t1048 = t634 + t1045;
  t1114 = 4.e-6*t1111;
  t1186 = -7.e-6*t1147;
  t1202 = 1. + t564 + t1114 + t1186;
  t946 = -1.000000000049*t201;
  t960 = 1. + t946;
  t1206 = 1.000000000049*t395;
  t1221 = -1. + t1206;
  t1225 = 4.e-6*t1221;
  t1247 = -7.e-6*t1238;
  t1252 = t1225 + t705 + t1247 + t738;
  t1079 = t884 + t1076;
  t1262 = -7.e-6*t1261;
  t1277 = 4.e-6*t1266;
  t1286 = t1262 + t421 + t1277 + t475;
  t638 = 7.e-6*t222;
  t1310 = -2.8e-11*t201;
  t1369 = -2.598649999999999e-7*var1[14];
  t1370 = 0.148705*t585;
  t1372 = -2.3905277499999995e-16*t395;
  t1377 = -0.038922999986*t1111;
  t1382 = -0.80315*t1147;
  t1384 = t610 + t475;
  t1393 = -0.503149000008*t1384;
  t1395 = t705 + t1067;
  t1406 = -0.038924*t1395;
  t1420 = t1369 + t1370 + t1372 + t1377 + t1382 + t1393 + t1406;
  t1428 = 1.0394599999999997e-12*var1[14];
  t1440 = 1. + t982;
  t1454 = -0.038924*t1440;
  t1455 = -0.03892299998790722*t395;
  t1456 = -0.80315*t1238;
  t1466 = 0.148705*t743;
  t1469 = t1108 + t1067;
  t1476 = -3.6777349999999994e-6*t1469;
  t1480 = t663 + t464;
  t1481 = -0.503149000008*t1480;
  t1482 = t1428 + t1454 + t1455 + t1456 + t1466 + t1476 + t1481;
  t1500 = 1.8190549999999993e-12*var1[14];
  t1510 = -0.80315*t1261;
  t1513 = -0.5031490000160505*t395;
  t1522 = -0.038922999986*t1266;
  t1528 = t610 + t1134;
  t1543 = -3.6777349999999994e-6*t1528;
  t1544 = 0.148705*t493;
  t1550 = t1080 + t464;
  t1551 = -0.038924*t1550;
  t1553 = t1500 + t1510 + t1513 + t1522 + t1543 + t1544 + t1551;
  t544 = -6.5e-11*t201;
  t549 = 1. + t544;
  t656 = t634 + t638;
  t238 = t202 + t223;
  t1606 = 4.e-6*t201;
  t1337 = 7.e-6*t201;
  t1570 = t1048*t1202;
  t1574 = t960*t1252;
  t1577 = t1079*t1286;
  t1583 = t1570 + t1574 + t1577;
  t1001 = 4.e-6*t743;
  t1029 = 1. + t982 + t1001;
  t1063 = 4.e-6*t585;
  t1068 = t1063 + t705 + t1067;
  t1084 = 4.e-6*t493;
  t1101 = t1080 + t1084 + t464;
  t1295 = 1.0248489999999998e-12*var1[13];
  t1299 = -0.28120900000849935*t201;
  t1330 = t1310 + t1076;
  t1331 = -0.038748999993*t1330;
  t1340 = t1337 + t223;
  t1358 = -2.123459e-6*t1340;
  t1425 = t872*t1420;
  t1489 = t888*t1482;
  t1555 = t835*t1553;
  t1559 = t1295 + t1299 + t1331 + t1358 + t1425 + t1489 + t1555;
  t1030 = t960*t1029;
  t1071 = t1048*t1068;
  t1105 = t1079*t1101;
  t1107 = t1030 + t1071 + t1105;
  t1590 = 5.856279999999999e-13*var1[13];
  t1602 = -0.0387489999948987*t201;
  t1611 = t1606 + t638;
  t1614 = -2.123459e-6*t1611;
  t1622 = t1310 + t222;
  t1627 = -0.281209000004*t1622;
  t1628 = t1048*t1420;
  t1638 = t960*t1482;
  t1639 = t1079*t1553;
  t1644 = t1590 + t1602 + t1614 + t1627 + t1628 + t1638 + t1639;
  t1674 = -1.4640699999999997e-7*var1[13];
  t1676 = -1.38024835e-16*t201;
  t1677 = t1606 + t1045;
  t1682 = -0.038748999993*t1677;
  t1683 = t1337 + t867;
  t1686 = -0.281209000004*t1683;
  t1692 = t549*t1420;
  t1696 = t656*t1482;
  t1699 = t238*t1553;
  t1702 = t1674 + t1676 + t1682 + t1686 + t1692 + t1696 + t1699;
  t1824 = t1202*t1420;
  t1835 = t1252*t1482;
  t1839 = t1286*t1553;
  t1840 = t1824 + t1835 + t1839;
  t1864 = -1.*t1420*t1068;
  t1865 = -1.*t1029*t1482;
  t1872 = -1.*t1101*t1553;
  t1873 = t1864 + t1865 + t1872;
  t1649 = t1583*t1644;
  t1203 = t872*t1202;
  t1253 = t888*t1252;
  t1292 = t835*t1286;
  t1293 = t1203 + t1253 + t1292;
  t1656 = t549*t1202;
  t1659 = t656*t1252;
  t1671 = t238*t1286;
  t1673 = t1656 + t1659 + t1671;
  t1942 = Cos(var1[12]);
  t1936 = Sin(var1[12]);
  t1987 = -1.*t1942;
  t1988 = 1. + t1987;
  t1993 = 0.15121*t1936;
  t1724 = -1.*t1107*t1644;
  t1714 = t888*t1029;
  t1717 = t872*t1068;
  t1719 = t835*t1101;
  t1720 = t1714 + t1717 + t1719;
  t1747 = t656*t1029;
  t1748 = t549*t1068;
  t1753 = t238*t1101;
  t1759 = t1747 + t1748 + t1753;
  t1990 = 0.15121*t1988;
  t1995 = t1936*t1559;
  t2002 = t1942*t1702;
  t2010 = t1990 + t1993 + t1995 + t2002;
  t2039 = -0.15121*t1988;
  t2042 = t1942*t1559;
  t2044 = -1.*t1936*t1702;
  t2053 = t2039 + t1993 + t2042 + t2044;
  t540 = t238*t524;
  t622 = t549*t616;
  t779 = t656*t767;
  t815 = t540 + t622 + t779;
  t841 = t835*t524;
  t883 = t872*t616;
  t904 = t888*t767;
  t912 = t841 + t883 + t904;
  t2117 = Cos(var1[5]);
  t2149 = t1942*t815;
  t2151 = t1936*t912;
  t2156 = t2149 + t2151;
  t2118 = -1.*t1936*t815;
  t2126 = t1942*t912;
  t2127 = t2118 + t2126;
  t2158 = Sin(var1[5]);
  t2115 = Cos(var1[4]);
  t2103 = t1079*t524;
  t2106 = t1048*t616;
  t2108 = t960*t767;
  t2109 = t2103 + t2106 + t2108;
  t2110 = Sin(var1[4]);
  t2133 = t2117*t2127;
  t2177 = -1.*t2156*t2158;
  t2180 = t2133 + t2177;
  t2224 = Cos(var1[3]);
  t2198 = t2117*t2156;
  t2206 = t2127*t2158;
  t2216 = t2198 + t2206;
  t2192 = Sin(var1[3]);
  t2228 = t2115*t2109;
  t2231 = -1.*t2110*t2180;
  t2232 = t2228 + t2231;
  t2065 = t1936*t1720;
  t2070 = t1942*t1759;
  t2073 = t2065 + t2070;
  t2085 = t1942*t1720;
  t2087 = -1.*t1936*t1759;
  t2090 = t2085 + t2087;
  t2020 = t1942*t1293;
  t2030 = -1.*t1936*t1673;
  t2034 = t2020 + t2030;
  t1937 = t1936*t1293;
  t1947 = t1942*t1673;
  t1962 = t1937 + t1947;
  t2304 = t2117*t1962;
  t2305 = t2034*t2158;
  t2306 = t2304 + t2305;
  t2291 = t2117*t2053;
  t2294 = -1.*t2010*t2158;
  t2299 = t2291 + t2294;
  t2273 = t2117*t2073;
  t2274 = t2090*t2158;
  t2279 = t2273 + t2274;
  t2321 = t2117*t2010;
  t2325 = t2053*t2158;
  t2327 = t2321 + t2325;
  t2363 = t2117*t2090;
  t2366 = -1.*t2073*t2158;
  t2369 = t2363 + t2366;
  t2332 = t2306*t2327;
  t2284 = t2117*t2034;
  t2289 = -1.*t1962*t2158;
  t2290 = t2284 + t2289;
  t2404 = t1583*t2110;
  t2415 = t2115*t2290;
  t2419 = t2404 + t2415;
  t2375 = -1.*t2279*t2327;
  t2392 = t1107*t2110;
  t2395 = t2115*t2369;
  t2399 = t2392 + t2395;
  t2435 = t1644*t2110;
  t2436 = t2115*t2299;
  t2437 = t2435 + t2436;
  t2467 = t2115*t1644;
  t2470 = -1.*t2110*t2299;
  t2476 = t2467 + t2470;
  t2586 = t1420*t616;
  t2587 = t767*t1482;
  t2602 = t524*t1553;
  t2603 = t2586 + t2587 + t2602;
  t2609 = -1.*t1202*t1420;
  t2611 = -1.*t1252*t1482;
  t2613 = -1.*t1286*t1553;
  t2620 = t2609 + t2611 + t2613;
  t2533 = -1.*t1583*t1644;
  t2551 = t2109*t1644;
  t2490 = t2115*t1107;
  t2491 = -1.*t2110*t2369;
  t2493 = t2490 + t2491;
  t2112 = t2109*t2110;
  t2184 = t2115*t2180;
  t2187 = t2112 + t2184;
  t2749 = -1.*t2306*t2327;
  t2440 = t2115*t1583;
  t2463 = -1.*t2110*t2290;
  t2465 = t2440 + t2463;
  t2759 = t2216*t2327;
  t2570 = 6.5e-11*t395;
  t2869 = -1.*t1420*t616;
  t2871 = -1.*t767*t1482;
  t2873 = -1.*t524*t1553;
  t2887 = t2869 + t2871 + t2873;
  t2890 = t1420*t1068;
  t2895 = t1029*t1482;
  t2899 = t1101*t1553;
  t2915 = t2890 + t2895 + t2899;
  t2821 = -1.*t2109*t1644;
  t2829 = t1107*t1644;
  t3078 = -1.*t2216*t2327;
  t3093 = t2279*t2327;
  p_output1[0]=t2187*var2[0] + (t2216*t2224 - 1.*t2192*t2232)*var2[1] + (t2192*t2216 + t2224*t2232)*var2[2] + (t2399*(t2332 + t2419*t2437 + t2465*t2476) + t2419*(t2375 - 1.*t2399*t2437 - 1.*t2476*t2493))*var2[3] + (t2279*(t1649 + t2290*t2299 + t2332) + t2306*(t1724 - 1.*t2299*t2369 + t2375))*var2[4] + (t1107*(t1649 + t1962*t2010 + t2034*t2053) + t1583*(t1724 - 1.*t2010*t2073 - 1.*t2053*t2090))*var2[5] + (t1107*(t1293*t1559 + t1649 + t1673*t1702) + t1583*(-1.*t1559*t1720 + t1724 - 1.*t1702*t1759) + 0.15121*t815 + 0.15121*t912)*var2[12] + (t1068*t1840 + t1202*t1873 + 4.e-6*(-1.*t1029*t1840 - 1.*t1252*t1873) - 7.e-6*(t1101*t1840 + t1286*t1873) + 0.038749*t524 + 1.e-6*(t1134 + t421 + 7.e-6*t585) - 0.281209*t767)*var2[13] + 4.0519653002457196e-7*var2[14];
  p_output1[1]=t2399*var2[0] + (t2224*t2279 - 1.*t2192*t2493)*var2[1] + (t2192*t2279 + t2224*t2493)*var2[2] + (t2187*(-1.*t2419*t2437 - 1.*t2465*t2476 + t2749) + t2419*(t2187*t2437 + t2232*t2476 + t2759))*var2[3] + (t2216*(-1.*t2290*t2299 + t2533 + t2749) + t2306*(t2180*t2299 + t2551 + t2759))*var2[4] + (t2109*(-1.*t1962*t2010 - 1.*t2034*t2053 + t2533) + t1583*(t2053*t2127 + t2010*t2156 + t2551))*var2[5] + (0.15121*t1720 + 0.15121*t1759 + t2109*(-1.*t1293*t1559 - 1.*t1673*t1702 + t2533) + t1583*(t2551 + t1702*t815 + t1559*t912))*var2[12] + (-0.281209*t1029 + 0.038749*t1101 + t1202*t2603 - 7.e-6*(t1286*t2603 + t2620*t524) + t2620*t616 + 1.e-6*(t1108 + 4.e-6*(-1. + t2570) + t738) + 4.e-6*(-1.*t1252*t2603 - 1.*t2620*t767))*var2[13] + 0.29999995910920463*var2[14];
  p_output1[2]=t2419*var2[0] + (t2224*t2306 - 1.*t2192*t2465)*var2[1] + (t2192*t2306 + t2224*t2465)*var2[2] + (t2399*(-1.*t2187*t2437 - 1.*t2232*t2476 + t3078) + t2187*(t2399*t2437 + t2476*t2493 + t3093))*var2[3] + (t2279*(-1.*t2180*t2299 + t2821 + t3078) + t2216*(t2299*t2369 + t2829 + t3093))*var2[4] + (t1107*(-1.*t2053*t2127 - 1.*t2010*t2156 + t2821) + t2109*(t2010*t2073 + t2053*t2090 + t2829))*var2[5] + (0.15121*t1293 + 0.15121*t1673 + t2109*(t1559*t1720 + t1702*t1759 + t2829) + t1107*(t2821 - 1.*t1702*t815 - 1.*t1559*t912))*var2[12] + (-0.281209*t1252 + 0.038749*t1286 + 1.e-6*(-1. + 7.e-6*t1147 + 4.e-6*t1395 + t2570) + t1068*t2887 - 7.e-6*(t1101*t2887 + t2915*t524) + t2915*t616 + 4.e-6*(-1.*t1029*t2887 - 1.*t2915*t767))*var2[13] - 2.5986500000000035e-7*var2[14];
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

#include "dh_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void dh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
