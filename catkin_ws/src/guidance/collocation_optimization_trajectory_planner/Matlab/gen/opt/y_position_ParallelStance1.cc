/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:11:44 GMT+01:00
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
  double t40;
  double t49;
  double t52;
  double t53;
  double t75;
  double t87;
  double t90;
  double t91;
  double t95;
  double t122;
  double t129;
  double t134;
  double t246;
  double t258;
  double t259;
  double t260;
  double t281;
  double t286;
  double t247;
  double t291;
  double t312;
  double t315;
  double t326;
  double t332;
  double t400;
  double t437;
  double t301;
  double t304;
  double t307;
  double t366;
  double t368;
  double t372;
  double t489;
  double t491;
  double t495;
  double t509;
  double t443;
  double t447;
  double t456;
  double t471;
  double t479;
  double t483;
  double t586;
  double t558;
  double t561;
  double t566;
  double t567;
  double t515;
  double t528;
  double t530;
  double t537;
  double t540;
  double t543;
  double t51;
  double t99;
  double t108;
  double t119;
  double t143;
  double t144;
  double t145;
  double t152;
  double t196;
  double t199;
  double t223;
  double t243;
  double t288;
  double t289;
  double t731;
  double t718;
  double t292;
  double t293;
  double t730;
  double t734;
  double t737;
  double t743;
  double t747;
  double t748;
  double t310;
  double t328;
  double t333;
  double t337;
  double t373;
  double t391;
  double t396;
  double t401;
  double t418;
  double t419;
  double t426;
  double t751;
  double t760;
  double t762;
  double t766;
  double t771;
  double t774;
  double t488;
  double t498;
  double t510;
  double t512;
  double t551;
  double t552;
  double t553;
  double t570;
  double t573;
  double t576;
  double t581;
  double t591;
  double t596;
  double t795;
  double t798;
  double t805;
  double t806;
  double t834;
  double t836;
  double t837;
  double t838;
  double t810;
  double t818;
  double t820;
  double t829;
  double t626;
  double t628;
  double t938;
  double t940;
  double t942;
  double t958;
  double t964;
  double t965;
  double t975;
  double t986;
  double t990;
  double t995;
  double t998;
  double t999;
  double t1020;
  double t1021;
  double t1031;
  double t1036;
  double t1057;
  double t1058;
  double t1060;
  double t1063;
  double t1045;
  double t1046;
  double t1047;
  double t1048;
  double t1193;
  double t1195;
  double t1201;
  double t1213;
  double t1148;
  double t1159;
  double t1160;
  double t1165;
  double t1166;
  double t1207;
  double t1231;
  double t1273;
  double t1351;
  double t1356;
  double t1360;
  double t1372;
  double t1323;
  double t1328;
  double t1304;
  double t1313;
  double t1317;
  double t1336;
  double t1340;
  double t1345;
  double t1378;
  double t1256;
  double t1410;
  double t1277;
  double t1445;
  double t1371;
  double t1473;
  double t1478;
  double t1218;
  double t1397;
  double t1398;
  double t1402;
  double t1412;
  double t1413;
  double t1414;
  double t1416;
  double t1426;
  double t1428;
  double t1498;
  double t1482;
  double t1483;
  double t1485;
  double t1486;
  double t1487;
  double t1489;
  double t1490;
  double t1492;
  double t1509;
  double t1513;
  double t1514;
  double t1517;
  double t1518;
  double t1519;
  double t1520;
  double t1525;
  double t1388;
  double t1528;
  double t1373;
  double t1566;
  double t1460;
  double t1535;
  double t1539;
  double t1456;
  double t1179;
  double t1202;
  double t1219;
  double t1227;
  double t1234;
  double t1237;
  double t1241;
  double t1162;
  double t1176;
  double t1250;
  double t1252;
  double t1254;
  double t1255;
  double t1257;
  double t1261;
  double t1286;
  double t1292;
  double t1303;
  double t1319;
  double t1322;
  double t1324;
  double t1326;
  double t1330;
  double t1331;
  double t1335;
  double t1350;
  double t1366;
  double t1376;
  double t1377;
  double t1389;
  double t1391;
  double t1392;
  double t1643;
  double t1646;
  double t1649;
  double t1658;
  double t1661;
  double t1662;
  double t1432;
  double t1438;
  double t1457;
  double t1459;
  double t1461;
  double t1467;
  double t1470;
  double t1494;
  double t1497;
  double t1500;
  double t1502;
  double t1503;
  double t1505;
  double t1507;
  double t1529;
  double t1664;
  double t1669;
  double t1670;
  double t1671;
  double t1540;
  double t1684;
  double t1687;
  double t1688;
  double t1691;
  double t1547;
  double t1553;
  double t1693;
  double t1698;
  double t1699;
  double t1703;
  double t1560;
  double t1561;
  double t1568;
  double t1575;
  double t1590;
  double t1594;
  double t1596;
  double t1601;
  double t1770;
  double t1771;
  double t1772;
  double t1777;
  double t1779;
  double t1780;
  double t1785;
  double t1793;
  double t1803;
  double t1806;
  double t1814;
  double t1817;
  double t1818;
  double t1821;
  double t1826;
  double t1835;
  double t1836;
  double t1837;
  double t1959;
  double t1978;
  double t1979;
  double t1981;
  double t1984;
  double t1991;
  double t1997;
  double t1998;
  double t2010;
  double t2011;
  t40 = -1.*var4[0];
  t49 = t40 + var4[1];
  t52 = -1. + var5[0];
  t53 = -1. + var6[0];
  t75 = 1/t53;
  t87 = -1.*var1[0];
  t90 = t87 + var1[1];
  t91 = t52*t75*t90;
  t95 = t40 + var1[0] + t91;
  t122 = 1/t49;
  t129 = -1.*t122*t95;
  t134 = 1. + t129;
  t246 = Cos(var2[4]);
  t258 = Cos(var2[6]);
  t259 = -1.*t258;
  t260 = 1. + t259;
  t281 = 0.15121*t260;
  t286 = Sin(var2[6]);
  t247 = Sin(var2[5]);
  t291 = Cos(var2[5]);
  t312 = Cos(var2[7]);
  t315 = -1.*t312;
  t326 = 1. + t315;
  t332 = Sin(var2[7]);
  t400 = Sin(var2[4]);
  t437 = -1. + t312;
  t301 = -1.*t246*t258*t247;
  t304 = -1.*t246*t291*t286;
  t307 = t301 + t304;
  t366 = t246*t291*t258;
  t368 = -1.*t246*t247*t286;
  t372 = t366 + t368;
  t489 = Cos(var2[8]);
  t491 = -1.*t489;
  t495 = 1. + t491;
  t509 = Sin(var2[8]);
  t443 = 4.e-6*t437*t400;
  t447 = 1.6e-11*t437;
  t456 = 1. + t447;
  t471 = t456*t307;
  t479 = 4.e-6*t372*t332;
  t483 = t443 + t471 + t479;
  t586 = -1. + t489;
  t558 = t312*t400;
  t561 = 4.e-6*t437*t307;
  t566 = t372*t332;
  t567 = t558 + t561 + t566;
  t515 = -1.000000000016*t326;
  t528 = 1. + t515;
  t530 = t528*t372;
  t537 = -1.*t400*t332;
  t540 = -4.e-6*t307*t332;
  t543 = t530 + t537 + t540;
  t51 = Power(t49,-5);
  t99 = Power(t95,5);
  t108 = Power(t49,-4);
  t119 = Power(t95,4);
  t143 = Power(t49,-3);
  t144 = Power(t95,3);
  t145 = Power(t134,2);
  t152 = Power(t49,-2);
  t196 = Power(t95,2);
  t199 = Power(t134,3);
  t223 = Power(t134,4);
  t243 = Power(t134,5);
  t288 = -0.15121*t286;
  t289 = t281 + t288;
  t731 = Sin(var2[3]);
  t718 = Cos(var2[3]);
  t292 = 0.15121*t286;
  t293 = t281 + t292;
  t730 = t718*t291;
  t734 = -1.*t731*t400*t247;
  t737 = t730 + t734;
  t743 = t291*t731*t400;
  t747 = t718*t247;
  t748 = t743 + t747;
  t310 = -1.2484e-7*var2[7];
  t328 = -1.5499600000248e-7*t326;
  t333 = 1.124840000016e-6*t332;
  t337 = t310 + t328 + t333;
  t373 = 0.281210000008499*t326;
  t391 = 0.03874900000062*t332;
  t396 = t373 + t391;
  t401 = 4.9936e-13*var2[7];
  t418 = -0.03874900000062*t326;
  t419 = 0.281210000004*t332;
  t426 = t401 + t418 + t419;
  t751 = t258*t737;
  t760 = -1.*t748*t286;
  t762 = t751 + t760;
  t766 = t258*t748;
  t771 = t737*t286;
  t774 = t766 + t771;
  t488 = -1.284e-8*var2[8];
  t498 = -1.5499600000248e-7*t495;
  t510 = 2.012840000032e-6*t509;
  t512 = t488 + t498 + t510;
  t551 = 0.503210000016051*t495;
  t552 = 0.03874900000062*t509;
  t553 = t551 + t552;
  t570 = 5.136e-14*var2[8];
  t573 = -0.03874900000062*t495;
  t576 = 0.503210000008*t509;
  t581 = t570 + t573 + t576;
  t591 = 1.6e-11*t586;
  t596 = 1. + t591;
  t795 = -4.e-6*t246*t437*t731;
  t798 = t456*t762;
  t805 = 4.e-6*t774*t332;
  t806 = t795 + t798 + t805;
  t834 = -1.*t246*t312*t731;
  t836 = 4.e-6*t437*t762;
  t837 = t774*t332;
  t838 = t834 + t836 + t837;
  t810 = t528*t774;
  t818 = t246*t731*t332;
  t820 = -4.e-6*t762*t332;
  t829 = t810 + t818 + t820;
  t626 = -1.000000000016*t495;
  t628 = 1. + t626;
  t938 = t291*t731;
  t940 = t718*t400*t247;
  t942 = t938 + t940;
  t958 = -1.*t718*t291*t400;
  t964 = t731*t247;
  t965 = t958 + t964;
  t975 = t258*t942;
  t986 = -1.*t965*t286;
  t990 = t975 + t986;
  t995 = t258*t965;
  t998 = t942*t286;
  t999 = t995 + t998;
  t1020 = 4.e-6*t718*t246*t437;
  t1021 = t456*t990;
  t1031 = 4.e-6*t999*t332;
  t1036 = t1020 + t1021 + t1031;
  t1057 = t718*t246*t312;
  t1058 = 4.e-6*t437*t990;
  t1060 = t999*t332;
  t1063 = t1057 + t1058 + t1060;
  t1045 = t528*t999;
  t1046 = -1.*t718*t246*t332;
  t1047 = -4.e-6*t990*t332;
  t1048 = t1045 + t1046 + t1047;
  t1193 = Cos(var2[13]);
  t1195 = -1.*t1193;
  t1201 = 1. + t1195;
  t1213 = Sin(var2[13]);
  t1148 = Cos(var2[12]);
  t1159 = -1.*t1148;
  t1160 = 1. + t1159;
  t1165 = Sin(var2[12]);
  t1166 = 0.15121*t1165;
  t1207 = 4.e-6*t1201;
  t1231 = -2.8e-11*t1201;
  t1273 = 7.e-6*t1201;
  t1351 = Cos(var2[14]);
  t1356 = -1.*t1351;
  t1360 = 1. + t1356;
  t1372 = Sin(var2[14]);
  t1323 = -1.*t1213;
  t1328 = -4.e-6*t1213;
  t1304 = -1.*t246*t291*t1165;
  t1313 = -1.*t1148*t246*t247;
  t1317 = t1304 + t1313;
  t1336 = t1148*t246*t291;
  t1340 = -1.*t246*t1165*t247;
  t1345 = t1336 + t1340;
  t1378 = 7.e-6*t1360;
  t1256 = -7.e-6*t1213;
  t1410 = -7.e-6*t1201;
  t1277 = 4.e-6*t1213;
  t1445 = 4.e-6*t1360;
  t1371 = -2.8e-11*t1360;
  t1473 = -1. + t1193;
  t1478 = 4.e-6*t1473;
  t1218 = 7.e-6*t1213;
  t1397 = 2.8e-11*t1201;
  t1398 = t1397 + t1323;
  t1402 = t1398*t400;
  t1412 = t1410 + t1328;
  t1413 = t1412*t1317;
  t1414 = -1.000000000016*t1201;
  t1416 = 1. + t1414;
  t1426 = t1416*t1345;
  t1428 = t1402 + t1413 + t1426;
  t1498 = 7.e-6*t1372;
  t1482 = t1478 + t1256;
  t1483 = t1482*t400;
  t1485 = -6.5e-11*t1201;
  t1486 = 1. + t1485;
  t1487 = t1486*t1317;
  t1489 = t1410 + t1277;
  t1490 = t1489*t1345;
  t1492 = t1483 + t1487 + t1490;
  t1509 = -1.000000000049*t1201;
  t1513 = 1. + t1509;
  t1514 = t1513*t400;
  t1517 = t1478 + t1218;
  t1518 = t1517*t1317;
  t1519 = t1397 + t1213;
  t1520 = t1519*t1345;
  t1525 = t1514 + t1518 + t1520;
  t1388 = -4.e-6*t1372;
  t1528 = 2.8e-11*t1360;
  t1373 = -1.*t1372;
  t1566 = -7.e-6*t1360;
  t1460 = 4.e-6*t1372;
  t1535 = -1. + t1351;
  t1539 = 4.e-6*t1535;
  t1456 = -7.e-6*t1372;
  t1179 = 5.856279999999999e-13*var2[13];
  t1202 = -0.0387489999948987*t1201;
  t1219 = t1207 + t1218;
  t1227 = -2.123459e-6*t1219;
  t1234 = t1231 + t1213;
  t1237 = -0.281209000004*t1234;
  t1241 = t1179 + t1202 + t1227 + t1237;
  t1162 = -0.15121*t1160;
  t1176 = t1162 + t1166;
  t1250 = 0.15121*t1160;
  t1252 = t1250 + t1166;
  t1254 = -1.4640699999999997e-7*var2[13];
  t1255 = -1.38024835e-16*t1201;
  t1257 = t1207 + t1256;
  t1261 = -0.038748999993*t1257;
  t1286 = t1273 + t1277;
  t1292 = -0.281209000004*t1286;
  t1303 = t1254 + t1255 + t1261 + t1292;
  t1319 = 1.0248489999999998e-12*var2[13];
  t1322 = -0.28120900000849935*t1201;
  t1324 = t1231 + t1323;
  t1326 = -0.038748999993*t1324;
  t1330 = t1273 + t1328;
  t1331 = -2.123459e-6*t1330;
  t1335 = t1319 + t1322 + t1326 + t1331;
  t1350 = 1.8190549999999993e-12*var2[14];
  t1366 = -0.5031490000160505*t1360;
  t1376 = t1371 + t1373;
  t1377 = -0.038922999986*t1376;
  t1389 = t1378 + t1388;
  t1391 = -3.6777349999999994e-6*t1389;
  t1392 = t1350 + t1366 + t1377 + t1391;
  t1643 = -1.*t1165*t748;
  t1646 = t1148*t737;
  t1649 = t1643 + t1646;
  t1658 = t1148*t748;
  t1661 = t1165*t737;
  t1662 = t1658 + t1661;
  t1432 = -2.598649999999999e-7*var2[14];
  t1438 = -2.3905277499999995e-16*t1360;
  t1457 = t1445 + t1456;
  t1459 = -0.038922999986*t1457;
  t1461 = t1378 + t1460;
  t1467 = -0.503149000008*t1461;
  t1470 = t1432 + t1438 + t1459 + t1467;
  t1494 = 1.0394599999999997e-12*var2[14];
  t1497 = -0.03892299998790722*t1360;
  t1500 = t1445 + t1498;
  t1502 = -3.6777349999999994e-6*t1500;
  t1503 = t1371 + t1372;
  t1505 = -0.503149000008*t1503;
  t1507 = t1494 + t1497 + t1502 + t1505;
  t1529 = t1528 + t1372;
  t1664 = -1.*t246*t1398*t731;
  t1669 = t1412*t1649;
  t1670 = t1416*t1662;
  t1671 = t1664 + t1669 + t1670;
  t1540 = t1539 + t1498;
  t1684 = -1.*t246*t1482*t731;
  t1687 = t1486*t1649;
  t1688 = t1489*t1662;
  t1691 = t1684 + t1687 + t1688;
  t1547 = -1.000000000049*t1360;
  t1553 = 1. + t1547;
  t1693 = -1.*t1513*t246*t731;
  t1698 = t1517*t1649;
  t1699 = t1519*t1662;
  t1703 = t1693 + t1698 + t1699;
  t1560 = -1.000000000016*t1360;
  t1561 = 1. + t1560;
  t1568 = t1566 + t1388;
  t1575 = t1528 + t1373;
  t1590 = t1566 + t1460;
  t1594 = -6.5e-11*t1360;
  t1596 = 1. + t1594;
  t1601 = t1539 + t1456;
  t1770 = -1.*t1165*t965;
  t1771 = t1148*t942;
  t1772 = t1770 + t1771;
  t1777 = t1148*t965;
  t1779 = t1165*t942;
  t1780 = t1777 + t1779;
  t1785 = t718*t246*t1398;
  t1793 = t1412*t1772;
  t1803 = t1416*t1780;
  t1806 = t1785 + t1793 + t1803;
  t1814 = t718*t246*t1482;
  t1817 = t1486*t1772;
  t1818 = t1489*t1780;
  t1821 = t1814 + t1817 + t1818;
  t1826 = t1513*t718*t246;
  t1835 = t1517*t1772;
  t1836 = t1519*t1780;
  t1837 = t1826 + t1835 + t1836;
  t1959 = Cos(var2[9]);
  t1978 = -1.*t1959;
  t1979 = 1. + t1978;
  t1981 = Sin(var2[9]);
  t1984 = -0.15121*t1981;
  t1991 = Cos(var2[15]);
  t1997 = -1.*t1991;
  t1998 = 1. + t1997;
  t2010 = -0.15121*t1998;
  t2011 = Sin(var2[15]);
  p_output1[0]=-1.*t246*t247*t289 + t246*t291*t293 + t307*t337 + t372*t396 + t400*t426 + t483*t512 + t543*t553 + t567*t581 - 0.03875*(t509*t543 + t489*t567 + 4.e-6*t483*t586) + 0.14871*(4.e-6*t509*t543 + 4.e-6*t567*t586 + t483*t596) + 0.80321*(-4.e-6*t483*t509 - 1.*t509*t567 + t543*t628) + var2[0] - 1.*t243*var3[0] - 5.*t122*t223*t95*var3[10] - 10.*t152*t196*t199*var3[20] - 10.*t143*t144*t145*var3[30] - 5.*t108*t119*t134*var3[40] - 1.*t51*t99*var3[50];
  p_output1[1]=-1.*t246*t426*t731 + t289*t737 + t293*t748 + t337*t762 + t396*t774 + t512*t806 + t553*t829 + t581*t838 - 0.03875*(4.e-6*t586*t806 + t509*t829 + t489*t838) + 0.80321*(-4.e-6*t509*t806 + t628*t829 - 1.*t509*t838) + 0.14871*(t596*t806 + 4.e-6*t509*t829 + 4.e-6*t586*t838) + var2[1] - 1.*t243*var3[1] - 5.*t122*t223*t95*var3[11] - 10.*t152*t196*t199*var3[21] - 10.*t143*t144*t145*var3[31] - 5.*t108*t119*t134*var3[41] - 1.*t51*t99*var3[51];
  p_output1[2]=t1036*t512 + t1048*t553 + t1063*t581 - 0.03875*(t1063*t489 + t1048*t509 + 4.e-6*t1036*t586) + 0.14871*(4.e-6*t1048*t509 + 4.e-6*t1063*t586 + t1036*t596) + 0.80321*(-4.e-6*t1036*t509 - 1.*t1063*t509 + t1048*t628) + t246*t426*t718 + t289*t942 + t293*t965 + t337*t990 + t396*t999 + var2[2] - 1.*t243*var3[2] - 5.*t122*t223*t95*var3[12] - 10.*t152*t196*t199*var3[22] - 10.*t143*t144*t145*var3[32] - 5.*t108*t119*t134*var3[42] - 1.*t51*t99*var3[52];
  p_output1[3]=t1303*t1317 + t1335*t1345 + t1392*t1428 + t1470*t1492 + t1507*t1525 - 0.038924*(t1428*t1529 + t1492*t1540 + t1525*t1553) - 0.80315*(t1428*t1561 + t1492*t1568 + t1525*t1575) + 0.148705*(t1428*t1590 + t1492*t1596 + t1525*t1601) - 1.*t1252*t246*t247 + t1176*t246*t291 + t1241*t400 + var2[0] - 1.*t243*var3[3] - 5.*t122*t223*t95*var3[13] - 10.*t152*t196*t199*var3[23] - 10.*t143*t144*t145*var3[33] - 5.*t108*t119*t134*var3[43] - 1.*t51*t99*var3[53];
  p_output1[4]=t1303*t1649 + t1335*t1662 + t1392*t1671 + t1470*t1691 + t1507*t1703 - 0.038924*(t1529*t1671 + t1540*t1691 + t1553*t1703) - 0.80315*(t1561*t1671 + t1568*t1691 + t1575*t1703) + 0.148705*(t1590*t1671 + t1596*t1691 + t1601*t1703) - 1.*t1241*t246*t731 + t1252*t737 + t1176*t748 + var2[1] - 1.*t243*var3[4] - 5.*t122*t223*t95*var3[14] - 10.*t152*t196*t199*var3[24] - 10.*t143*t144*t145*var3[34] - 5.*t108*t119*t134*var3[44] - 1.*t51*t99*var3[54];
  p_output1[5]=t1303*t1772 + t1335*t1780 + t1392*t1806 + t1470*t1821 + t1507*t1837 - 0.038924*(t1529*t1806 + t1540*t1821 + t1553*t1837) - 0.80315*(t1561*t1806 + t1568*t1821 + t1575*t1837) + 0.148705*(t1590*t1806 + t1596*t1821 + t1601*t1837) + t1241*t246*t718 + t1252*t942 + t1176*t965 + var2[2] - 1.*t243*var3[5] - 5.*t122*t223*t95*var3[15] - 10.*t152*t196*t199*var3[25] - 10.*t143*t144*t145*var3[35] - 5.*t108*t119*t134*var3[45] - 1.*t51*t99*var3[55];
  p_output1[6]=0.024028*t246*t731 - 0.002264*t737 + 0.00183*t748 + var2[1] - 1.*t243*var3[6] - 5.*t122*t223*t95*var3[16] - 10.*t152*t196*t199*var3[26] - 10.*t143*t144*t145*var3[36] - 5.*t108*t119*t134*var3[46] - 1.*t51*t99*var3[56];
  p_output1[7]=-0.024028*t246*t718 - 0.002264*t942 + 0.00183*t965 + var2[2] - 1.*t243*var3[7] - 5.*t122*t223*t95*var3[17] - 10.*t152*t196*t199*var3[27] - 10.*t143*t144*t145*var3[37] - 5.*t108*t119*t134*var3[47] - 1.*t51*t99*var3[57];
  p_output1[8]=ArcTan(t246*t291,t748) - 1.*t243*var3[8] - 5.*t122*t223*t95*var3[18] - 10.*t152*t196*t199*var3[28] - 10.*t143*t144*t145*var3[38] - 5.*t108*t119*t134*var3[48] - 1.*t51*t99*var3[58];
  p_output1[9]=(-0.15121*t1979 + t1984)*t942 - 1.*(t2010 + 0.15121*t2011)*t942 + (0.15121*t1979 + t1984)*t965 - 1.*(t2010 - 0.15121*t2011)*t965 + 0.15121*(t1981*t942 + t1959*t965) - 0.15121*(t1959*t942 - 1.*t1981*t965) + 0.15121*(t2011*t942 + t1991*t965) + 0.15121*(t1991*t942 - 1.*t2011*t965) - 1.*t243*var3[9] - 5.*t122*t223*t95*var3[19] - 10.*t152*t196*t199*var3[29] - 10.*t143*t144*t145*var3[39] - 5.*t108*t119*t134*var3[49] - 1.*t51*t99*var3[59];
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

#include "y_position_ParallelStance1.hh"

namespace ParallelStance1
{

void y_position_ParallelStance1_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
