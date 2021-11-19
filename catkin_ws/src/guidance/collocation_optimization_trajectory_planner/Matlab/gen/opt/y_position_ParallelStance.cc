/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:30:29 GMT+01:00
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
  double t35;
  double t40;
  double t46;
  double t68;
  double t71;
  double t72;
  double t77;
  double t97;
  double t101;
  double t114;
  double t115;
  double t116;
  double t195;
  double t215;
  double t225;
  double t230;
  double t256;
  double t262;
  double t209;
  double t274;
  double t320;
  double t321;
  double t324;
  double t346;
  double t428;
  double t459;
  double t301;
  double t314;
  double t317;
  double t382;
  double t383;
  double t392;
  double t487;
  double t497;
  double t508;
  double t510;
  double t461;
  double t462;
  double t466;
  double t467;
  double t475;
  double t477;
  double t623;
  double t588;
  double t591;
  double t597;
  double t599;
  double t533;
  double t542;
  double t550;
  double t554;
  double t556;
  double t559;
  double t42;
  double t104;
  double t108;
  double t110;
  double t122;
  double t125;
  double t130;
  double t139;
  double t148;
  double t155;
  double t162;
  double t170;
  double t266;
  double t268;
  double t764;
  double t758;
  double t278;
  double t290;
  double t760;
  double t769;
  double t770;
  double t775;
  double t780;
  double t783;
  double t319;
  double t339;
  double t355;
  double t364;
  double t399;
  double t406;
  double t408;
  double t438;
  double t440;
  double t441;
  double t446;
  double t788;
  double t789;
  double t790;
  double t794;
  double t797;
  double t799;
  double t483;
  double t509;
  double t514;
  double t529;
  double t564;
  double t568;
  double t570;
  double t605;
  double t609;
  double t613;
  double t615;
  double t632;
  double t634;
  double t807;
  double t810;
  double t815;
  double t816;
  double t848;
  double t849;
  double t854;
  double t859;
  double t834;
  double t840;
  double t841;
  double t844;
  double t683;
  double t687;
  double t935;
  double t936;
  double t942;
  double t959;
  double t960;
  double t961;
  double t964;
  double t967;
  double t969;
  double t980;
  double t990;
  double t992;
  double t1002;
  double t1008;
  double t1012;
  double t1015;
  double t1053;
  double t1059;
  double t1064;
  double t1072;
  double t1020;
  double t1028;
  double t1041;
  double t1042;
  double t1227;
  double t1236;
  double t1239;
  double t1271;
  double t1170;
  double t1178;
  double t1185;
  double t1207;
  double t1213;
  double t1258;
  double t1284;
  double t1332;
  double t1445;
  double t1446;
  double t1452;
  double t1459;
  double t1405;
  double t1414;
  double t1392;
  double t1394;
  double t1396;
  double t1431;
  double t1439;
  double t1440;
  double t1475;
  double t1317;
  double t1511;
  double t1347;
  double t1548;
  double t1454;
  double t1568;
  double t1576;
  double t1272;
  double t1490;
  double t1508;
  double t1509;
  double t1514;
  double t1516;
  double t1517;
  double t1521;
  double t1529;
  double t1534;
  double t1613;
  double t1577;
  double t1578;
  double t1580;
  double t1586;
  double t1589;
  double t1590;
  double t1594;
  double t1595;
  double t1632;
  double t1635;
  double t1642;
  double t1646;
  double t1651;
  double t1657;
  double t1658;
  double t1663;
  double t1477;
  double t1675;
  double t1460;
  double t1723;
  double t1555;
  double t1684;
  double t1689;
  double t1550;
  double t1225;
  double t1248;
  double t1277;
  double t1278;
  double t1287;
  double t1288;
  double t1289;
  double t1201;
  double t1218;
  double t1299;
  double t1305;
  double t1312;
  double t1316;
  double t1326;
  double t1328;
  double t1354;
  double t1377;
  double t1390;
  double t1403;
  double t1404;
  double t1406;
  double t1409;
  double t1418;
  double t1429;
  double t1430;
  double t1443;
  double t1453;
  double t1467;
  double t1473;
  double t1482;
  double t1487;
  double t1489;
  double t1793;
  double t1803;
  double t1806;
  double t1816;
  double t1821;
  double t1828;
  double t1542;
  double t1545;
  double t1552;
  double t1554;
  double t1556;
  double t1559;
  double t1563;
  double t1609;
  double t1611;
  double t1615;
  double t1616;
  double t1617;
  double t1624;
  double t1625;
  double t1678;
  double t1831;
  double t1832;
  double t1833;
  double t1836;
  double t1690;
  double t1844;
  double t1856;
  double t1862;
  double t1866;
  double t1698;
  double t1707;
  double t1871;
  double t1880;
  double t1883;
  double t1891;
  double t1720;
  double t1721;
  double t1731;
  double t1734;
  double t1741;
  double t1746;
  double t1748;
  double t1753;
  double t1989;
  double t1996;
  double t1997;
  double t2002;
  double t2020;
  double t2023;
  double t2039;
  double t2040;
  double t2043;
  double t2045;
  double t2054;
  double t2069;
  double t2070;
  double t2071;
  double t2080;
  double t2084;
  double t2092;
  double t2094;
  double t2311;
  double t2312;
  double t2313;
  double t2326;
  double t2327;
  double t2337;
  double t2340;
  double t2347;
  double t2352;
  double t2358;
  t35 = -1.*var4[0];
  t40 = t35 + var4[1];
  t46 = -1. + var5[0];
  t68 = -1. + var6[0];
  t71 = 1/t68;
  t72 = -1.*var1[0];
  t77 = t72 + var1[1];
  t97 = t46*t71*t77;
  t101 = t35 + var1[0] + t97;
  t114 = 1/t40;
  t115 = -1.*t114*t101;
  t116 = 1. + t115;
  t195 = Cos(var2[4]);
  t215 = Cos(var2[6]);
  t225 = -1.*t215;
  t230 = 1. + t225;
  t256 = 0.15121*t230;
  t262 = Sin(var2[6]);
  t209 = Sin(var2[5]);
  t274 = Cos(var2[5]);
  t320 = Cos(var2[7]);
  t321 = -1.*t320;
  t324 = 1. + t321;
  t346 = Sin(var2[7]);
  t428 = Sin(var2[4]);
  t459 = -1. + t320;
  t301 = -1.*t195*t215*t209;
  t314 = -1.*t195*t274*t262;
  t317 = t301 + t314;
  t382 = t195*t274*t215;
  t383 = -1.*t195*t209*t262;
  t392 = t382 + t383;
  t487 = Cos(var2[8]);
  t497 = -1.*t487;
  t508 = 1. + t497;
  t510 = Sin(var2[8]);
  t461 = 4.e-6*t459*t428;
  t462 = 1.6e-11*t459;
  t466 = 1. + t462;
  t467 = t466*t317;
  t475 = 4.e-6*t392*t346;
  t477 = t461 + t467 + t475;
  t623 = -1. + t487;
  t588 = t320*t428;
  t591 = 4.e-6*t459*t317;
  t597 = t392*t346;
  t599 = t588 + t591 + t597;
  t533 = -1.000000000016*t324;
  t542 = 1. + t533;
  t550 = t542*t392;
  t554 = -1.*t428*t346;
  t556 = -4.e-6*t317*t346;
  t559 = t550 + t554 + t556;
  t42 = Power(t40,-5);
  t104 = Power(t101,5);
  t108 = Power(t40,-4);
  t110 = Power(t101,4);
  t122 = Power(t40,-3);
  t125 = Power(t101,3);
  t130 = Power(t116,2);
  t139 = Power(t40,-2);
  t148 = Power(t101,2);
  t155 = Power(t116,3);
  t162 = Power(t116,4);
  t170 = Power(t116,5);
  t266 = -0.15121*t262;
  t268 = t256 + t266;
  t764 = Sin(var2[3]);
  t758 = Cos(var2[3]);
  t278 = 0.15121*t262;
  t290 = t256 + t278;
  t760 = t758*t274;
  t769 = -1.*t764*t428*t209;
  t770 = t760 + t769;
  t775 = t274*t764*t428;
  t780 = t758*t209;
  t783 = t775 + t780;
  t319 = -1.2484e-7*var2[7];
  t339 = -1.5499600000248e-7*t324;
  t355 = 1.124840000016e-6*t346;
  t364 = t319 + t339 + t355;
  t399 = 0.281210000008499*t324;
  t406 = 0.03874900000062*t346;
  t408 = t399 + t406;
  t438 = 4.9936e-13*var2[7];
  t440 = -0.03874900000062*t324;
  t441 = 0.281210000004*t346;
  t446 = t438 + t440 + t441;
  t788 = t215*t770;
  t789 = -1.*t783*t262;
  t790 = t788 + t789;
  t794 = t215*t783;
  t797 = t770*t262;
  t799 = t794 + t797;
  t483 = -1.284e-8*var2[8];
  t509 = -1.5499600000248e-7*t508;
  t514 = 2.012840000032e-6*t510;
  t529 = t483 + t509 + t514;
  t564 = 0.503210000016051*t508;
  t568 = 0.03874900000062*t510;
  t570 = t564 + t568;
  t605 = 5.136e-14*var2[8];
  t609 = -0.03874900000062*t508;
  t613 = 0.503210000008*t510;
  t615 = t605 + t609 + t613;
  t632 = 1.6e-11*t623;
  t634 = 1. + t632;
  t807 = -4.e-6*t195*t459*t764;
  t810 = t466*t790;
  t815 = 4.e-6*t799*t346;
  t816 = t807 + t810 + t815;
  t848 = -1.*t195*t320*t764;
  t849 = 4.e-6*t459*t790;
  t854 = t799*t346;
  t859 = t848 + t849 + t854;
  t834 = t542*t799;
  t840 = t195*t764*t346;
  t841 = -4.e-6*t790*t346;
  t844 = t834 + t840 + t841;
  t683 = -1.000000000016*t508;
  t687 = 1. + t683;
  t935 = t274*t764;
  t936 = t758*t428*t209;
  t942 = t935 + t936;
  t959 = -1.*t758*t274*t428;
  t960 = t764*t209;
  t961 = t959 + t960;
  t964 = t215*t942;
  t967 = -1.*t961*t262;
  t969 = t964 + t967;
  t980 = t215*t961;
  t990 = t942*t262;
  t992 = t980 + t990;
  t1002 = 4.e-6*t758*t195*t459;
  t1008 = t466*t969;
  t1012 = 4.e-6*t992*t346;
  t1015 = t1002 + t1008 + t1012;
  t1053 = t758*t195*t320;
  t1059 = 4.e-6*t459*t969;
  t1064 = t992*t346;
  t1072 = t1053 + t1059 + t1064;
  t1020 = t542*t992;
  t1028 = -1.*t758*t195*t346;
  t1041 = -4.e-6*t969*t346;
  t1042 = t1020 + t1028 + t1041;
  t1227 = Cos(var2[13]);
  t1236 = -1.*t1227;
  t1239 = 1. + t1236;
  t1271 = Sin(var2[13]);
  t1170 = Cos(var2[12]);
  t1178 = -1.*t1170;
  t1185 = 1. + t1178;
  t1207 = Sin(var2[12]);
  t1213 = 0.15121*t1207;
  t1258 = 4.e-6*t1239;
  t1284 = -2.8e-11*t1239;
  t1332 = 7.e-6*t1239;
  t1445 = Cos(var2[14]);
  t1446 = -1.*t1445;
  t1452 = 1. + t1446;
  t1459 = Sin(var2[14]);
  t1405 = -1.*t1271;
  t1414 = -4.e-6*t1271;
  t1392 = -1.*t195*t274*t1207;
  t1394 = -1.*t1170*t195*t209;
  t1396 = t1392 + t1394;
  t1431 = t1170*t195*t274;
  t1439 = -1.*t195*t1207*t209;
  t1440 = t1431 + t1439;
  t1475 = 7.e-6*t1452;
  t1317 = -7.e-6*t1271;
  t1511 = -7.e-6*t1239;
  t1347 = 4.e-6*t1271;
  t1548 = 4.e-6*t1452;
  t1454 = -2.8e-11*t1452;
  t1568 = -1. + t1227;
  t1576 = 4.e-6*t1568;
  t1272 = 7.e-6*t1271;
  t1490 = 2.8e-11*t1239;
  t1508 = t1490 + t1405;
  t1509 = t1508*t428;
  t1514 = t1511 + t1414;
  t1516 = t1514*t1396;
  t1517 = -1.000000000016*t1239;
  t1521 = 1. + t1517;
  t1529 = t1521*t1440;
  t1534 = t1509 + t1516 + t1529;
  t1613 = 7.e-6*t1459;
  t1577 = t1576 + t1317;
  t1578 = t1577*t428;
  t1580 = -6.5e-11*t1239;
  t1586 = 1. + t1580;
  t1589 = t1586*t1396;
  t1590 = t1511 + t1347;
  t1594 = t1590*t1440;
  t1595 = t1578 + t1589 + t1594;
  t1632 = -1.000000000049*t1239;
  t1635 = 1. + t1632;
  t1642 = t1635*t428;
  t1646 = t1576 + t1272;
  t1651 = t1646*t1396;
  t1657 = t1490 + t1271;
  t1658 = t1657*t1440;
  t1663 = t1642 + t1651 + t1658;
  t1477 = -4.e-6*t1459;
  t1675 = 2.8e-11*t1452;
  t1460 = -1.*t1459;
  t1723 = -7.e-6*t1452;
  t1555 = 4.e-6*t1459;
  t1684 = -1. + t1445;
  t1689 = 4.e-6*t1684;
  t1550 = -7.e-6*t1459;
  t1225 = 5.856279999999999e-13*var2[13];
  t1248 = -0.0387489999948987*t1239;
  t1277 = t1258 + t1272;
  t1278 = -2.123459e-6*t1277;
  t1287 = t1284 + t1271;
  t1288 = -0.281209000004*t1287;
  t1289 = t1225 + t1248 + t1278 + t1288;
  t1201 = -0.15121*t1185;
  t1218 = t1201 + t1213;
  t1299 = 0.15121*t1185;
  t1305 = t1299 + t1213;
  t1312 = -1.4640699999999997e-7*var2[13];
  t1316 = -1.38024835e-16*t1239;
  t1326 = t1258 + t1317;
  t1328 = -0.038748999993*t1326;
  t1354 = t1332 + t1347;
  t1377 = -0.281209000004*t1354;
  t1390 = t1312 + t1316 + t1328 + t1377;
  t1403 = 1.0248489999999998e-12*var2[13];
  t1404 = -0.28120900000849935*t1239;
  t1406 = t1284 + t1405;
  t1409 = -0.038748999993*t1406;
  t1418 = t1332 + t1414;
  t1429 = -2.123459e-6*t1418;
  t1430 = t1403 + t1404 + t1409 + t1429;
  t1443 = 1.8190549999999993e-12*var2[14];
  t1453 = -0.5031490000160505*t1452;
  t1467 = t1454 + t1460;
  t1473 = -0.038922999986*t1467;
  t1482 = t1475 + t1477;
  t1487 = -3.6777349999999994e-6*t1482;
  t1489 = t1443 + t1453 + t1473 + t1487;
  t1793 = -1.*t1207*t783;
  t1803 = t1170*t770;
  t1806 = t1793 + t1803;
  t1816 = t1170*t783;
  t1821 = t1207*t770;
  t1828 = t1816 + t1821;
  t1542 = -2.598649999999999e-7*var2[14];
  t1545 = -2.3905277499999995e-16*t1452;
  t1552 = t1548 + t1550;
  t1554 = -0.038922999986*t1552;
  t1556 = t1475 + t1555;
  t1559 = -0.503149000008*t1556;
  t1563 = t1542 + t1545 + t1554 + t1559;
  t1609 = 1.0394599999999997e-12*var2[14];
  t1611 = -0.03892299998790722*t1452;
  t1615 = t1548 + t1613;
  t1616 = -3.6777349999999994e-6*t1615;
  t1617 = t1454 + t1459;
  t1624 = -0.503149000008*t1617;
  t1625 = t1609 + t1611 + t1616 + t1624;
  t1678 = t1675 + t1459;
  t1831 = -1.*t195*t1508*t764;
  t1832 = t1514*t1806;
  t1833 = t1521*t1828;
  t1836 = t1831 + t1832 + t1833;
  t1690 = t1689 + t1613;
  t1844 = -1.*t195*t1577*t764;
  t1856 = t1586*t1806;
  t1862 = t1590*t1828;
  t1866 = t1844 + t1856 + t1862;
  t1698 = -1.000000000049*t1452;
  t1707 = 1. + t1698;
  t1871 = -1.*t1635*t195*t764;
  t1880 = t1646*t1806;
  t1883 = t1657*t1828;
  t1891 = t1871 + t1880 + t1883;
  t1720 = -1.000000000016*t1452;
  t1721 = 1. + t1720;
  t1731 = t1723 + t1477;
  t1734 = t1675 + t1460;
  t1741 = t1723 + t1555;
  t1746 = -6.5e-11*t1452;
  t1748 = 1. + t1746;
  t1753 = t1689 + t1550;
  t1989 = -1.*t1207*t961;
  t1996 = t1170*t942;
  t1997 = t1989 + t1996;
  t2002 = t1170*t961;
  t2020 = t1207*t942;
  t2023 = t2002 + t2020;
  t2039 = t758*t195*t1508;
  t2040 = t1514*t1997;
  t2043 = t1521*t2023;
  t2045 = t2039 + t2040 + t2043;
  t2054 = t758*t195*t1577;
  t2069 = t1586*t1997;
  t2070 = t1590*t2023;
  t2071 = t2054 + t2069 + t2070;
  t2080 = t1635*t758*t195;
  t2084 = t1646*t1997;
  t2092 = t1657*t2023;
  t2094 = t2080 + t2084 + t2092;
  t2311 = Cos(var2[9]);
  t2312 = -1.*t2311;
  t2313 = 1. + t2312;
  t2326 = Sin(var2[9]);
  t2327 = -0.15121*t2326;
  t2337 = Cos(var2[15]);
  t2340 = -1.*t2337;
  t2347 = 1. + t2340;
  t2352 = -0.15121*t2347;
  t2358 = Sin(var2[15]);
  p_output1[0]=-1.*t195*t209*t268 + t195*t274*t290 + t317*t364 + t392*t408 + t428*t446 + t477*t529 + t559*t570 + t599*t615 - 0.03875*(t510*t559 + t487*t599 + 4.e-6*t477*t623) + 0.14871*(4.e-6*t510*t559 + 4.e-6*t599*t623 + t477*t634) + 0.80321*(-4.e-6*t477*t510 - 1.*t510*t599 + t559*t687) + var2[0] - 1.*t170*var3[0] - 5.*t101*t114*t162*var3[10] - 10.*t139*t148*t155*var3[20] - 10.*t122*t125*t130*var3[30] - 5.*t108*t110*t116*var3[40] - 1.*t104*t42*var3[50];
  p_output1[1]=-1.*t195*t446*t764 + t268*t770 + t290*t783 + t364*t790 + t408*t799 + t529*t816 + t570*t844 + t615*t859 - 0.03875*(4.e-6*t623*t816 + t510*t844 + t487*t859) + 0.80321*(-4.e-6*t510*t816 + t687*t844 - 1.*t510*t859) + 0.14871*(t634*t816 + 4.e-6*t510*t844 + 4.e-6*t623*t859) + var2[1] - 1.*t170*var3[1] - 5.*t101*t114*t162*var3[11] - 10.*t139*t148*t155*var3[21] - 10.*t122*t125*t130*var3[31] - 5.*t108*t110*t116*var3[41] - 1.*t104*t42*var3[51];
  p_output1[2]=t1015*t529 + t1042*t570 + t1072*t615 - 0.03875*(t1072*t487 + t1042*t510 + 4.e-6*t1015*t623) + 0.14871*(4.e-6*t1042*t510 + 4.e-6*t1072*t623 + t1015*t634) + 0.80321*(-4.e-6*t1015*t510 - 1.*t1072*t510 + t1042*t687) + t195*t446*t758 + t268*t942 + t290*t961 + t364*t969 + t408*t992 + var2[2] - 1.*t170*var3[2] - 5.*t101*t114*t162*var3[12] - 10.*t139*t148*t155*var3[22] - 10.*t122*t125*t130*var3[32] - 5.*t108*t110*t116*var3[42] - 1.*t104*t42*var3[52];
  p_output1[3]=t1390*t1396 + t1430*t1440 + t1489*t1534 + t1563*t1595 + t1625*t1663 - 0.038924*(t1534*t1678 + t1595*t1690 + t1663*t1707) - 0.80315*(t1534*t1721 + t1595*t1731 + t1663*t1734) + 0.148705*(t1534*t1741 + t1595*t1748 + t1663*t1753) - 1.*t1305*t195*t209 + t1218*t195*t274 + t1289*t428 + var2[0] - 1.*t170*var3[3] - 5.*t101*t114*t162*var3[13] - 10.*t139*t148*t155*var3[23] - 10.*t122*t125*t130*var3[33] - 5.*t108*t110*t116*var3[43] - 1.*t104*t42*var3[53];
  p_output1[4]=t1390*t1806 + t1430*t1828 + t1489*t1836 + t1563*t1866 + t1625*t1891 - 0.038924*(t1678*t1836 + t1690*t1866 + t1707*t1891) - 0.80315*(t1721*t1836 + t1731*t1866 + t1734*t1891) + 0.148705*(t1741*t1836 + t1748*t1866 + t1753*t1891) - 1.*t1289*t195*t764 + t1305*t770 + t1218*t783 + var2[1] - 1.*t170*var3[4] - 5.*t101*t114*t162*var3[14] - 10.*t139*t148*t155*var3[24] - 10.*t122*t125*t130*var3[34] - 5.*t108*t110*t116*var3[44] - 1.*t104*t42*var3[54];
  p_output1[5]=t1390*t1997 + t1430*t2023 + t1489*t2045 + t1563*t2071 + t1625*t2094 - 0.038924*(t1678*t2045 + t1690*t2071 + t1707*t2094) - 0.80315*(t1721*t2045 + t1731*t2071 + t1734*t2094) + 0.148705*(t1741*t2045 + t1748*t2071 + t1753*t2094) + t1289*t195*t758 + t1305*t942 + t1218*t961 + var2[2] - 1.*t170*var3[5] - 5.*t101*t114*t162*var3[15] - 10.*t139*t148*t155*var3[25] - 10.*t122*t125*t130*var3[35] - 5.*t108*t110*t116*var3[45] - 1.*t104*t42*var3[55];
  p_output1[6]=0.024028*t195*t764 - 0.002264*t770 + 0.00183*t783 + var2[1] - 1.*t170*var3[6] - 5.*t101*t114*t162*var3[16] - 10.*t139*t148*t155*var3[26] - 10.*t122*t125*t130*var3[36] - 5.*t108*t110*t116*var3[46] - 1.*t104*t42*var3[56];
  p_output1[7]=-0.024028*t195*t758 - 0.002264*t942 + 0.00183*t961 + var2[2] - 1.*t170*var3[7] - 5.*t101*t114*t162*var3[17] - 10.*t139*t148*t155*var3[27] - 10.*t122*t125*t130*var3[37] - 5.*t108*t110*t116*var3[47] - 1.*t104*t42*var3[57];
  p_output1[8]=ArcTan(t195*t274,t783) - 1.*t170*var3[8] - 5.*t101*t114*t162*var3[18] - 10.*t139*t148*t155*var3[28] - 10.*t122*t125*t130*var3[38] - 5.*t108*t110*t116*var3[48] - 1.*t104*t42*var3[58];
  p_output1[9]=(-0.15121*t2313 + t2327)*t942 - 1.*(t2352 + 0.15121*t2358)*t942 + (0.15121*t2313 + t2327)*t961 - 1.*(t2352 - 0.15121*t2358)*t961 + 0.15121*(t2326*t942 + t2311*t961) - 0.15121*(t2311*t942 - 1.*t2326*t961) + 0.15121*(t2358*t942 + t2337*t961) + 0.15121*(t2337*t942 - 1.*t2358*t961) - 1.*t170*var3[9] - 5.*t101*t114*t162*var3[19] - 10.*t139*t148*t155*var3[29] - 10.*t122*t125*t130*var3[39] - 5.*t108*t110*t116*var3[49] - 1.*t104*t42*var3[59];
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

#include "y_position_ParallelStance.hh"

namespace ParallelStance
{

void y_position_ParallelStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
