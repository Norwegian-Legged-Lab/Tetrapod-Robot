/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:32:06 GMT+01:00
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
  double t879;
  double t900;
  double t901;
  double t921;
  double t285;
  double t922;
  double t943;
  double t947;
  double t781;
  double t934;
  double t966;
  double t904;
  double t910;
  double t925;
  double t930;
  double t935;
  double t936;
  double t938;
  double t939;
  double t1116;
  double t958;
  double t961;
  double t962;
  double t963;
  double t964;
  double t965;
  double t1097;
  double t1103;
  double t1106;
  double t1119;
  double t1120;
  double t1121;
  double t1124;
  double t1126;
  double t1129;
  double t1130;
  double t1133;
  double t320;
  double t648;
  double t1149;
  double t1193;
  double t1151;
  double t1154;
  double t1157;
  double t1160;
  double t1162;
  double t1164;
  double t1166;
  double t1169;
  double t1174;
  double t1146;
  double t1195;
  double t1196;
  double t1200;
  double t1206;
  double t1207;
  double t1209;
  double t1213;
  double t1215;
  double t1222;
  double t1223;
  double t1117;
  double t1118;
  double t864;
  double t868;
  double t952;
  double t956;
  double t1139;
  double t1141;
  double t1144;
  double t1271;
  double t1275;
  double t1278;
  double t1279;
  double t1284;
  double t1286;
  double t1287;
  double t1294;
  double t1300;
  double t1301;
  double t1303;
  double t1311;
  double t1312;
  double t1314;
  double t1315;
  double t1318;
  double t1323;
  double t1324;
  double t1329;
  double t1255;
  double t1361;
  double t1362;
  double t1371;
  double t1379;
  double t1382;
  double t1384;
  double t1388;
  double t1392;
  double t1403;
  double t1405;
  double t1406;
  double t1413;
  double t1417;
  double t1418;
  double t1420;
  double t1421;
  double t1240;
  double t1242;
  double t1247;
  double t1181;
  double t1227;
  double t1229;
  double t942;
  double t1109;
  double t1136;
  double t1138;
  double t1233;
  double t1260;
  double t1262;
  double t1445;
  double t1338;
  double t1339;
  double t1340;
  double t1316;
  double t1330;
  double t1331;
  double t1477;
  double t1281;
  double t1296;
  double t1305;
  double t1307;
  double t1335;
  double t1344;
  double t1346;
  double t1427;
  double t1428;
  double t1429;
  double t1416;
  double t1422;
  double t1424;
  double t1377;
  double t1386;
  double t1394;
  double t1398;
  double t1425;
  double t1434;
  double t1437;
  double t1454;
  double t1467;
  double t1471;
  double t1479;
  double t1485;
  double t1486;
  double t1507;
  double t1508;
  double t1509;
  double t1517;
  double t1519;
  double t1520;
  double t1547;
  double t1548;
  double t1549;
  double t1552;
  double t1553;
  double t1554;
  double t1309;
  double t1357;
  double t1358;
  double t1595;
  double t1599;
  double t1604;
  double t1605;
  double t1613;
  double t1614;
  double t1616;
  double t1617;
  double t1619;
  double t1623;
  double t1624;
  double t1628;
  double t1629;
  double t1631;
  double t1632;
  double t1633;
  double t1635;
  double t1637;
  double t1639;
  double t1640;
  double t1647;
  double t1649;
  double t1651;
  double t1652;
  double t1653;
  double t1654;
  double t1656;
  double t1657;
  double t1659;
  double t1662;
  double t1664;
  double t1669;
  double t1581;
  double t1582;
  double t1585;
  double t1588;
  double t1589;
  double t1591;
  double t1592;
  double t1593;
  double t1597;
  double t1598;
  double t1626;
  double t1650;
  double t1671;
  double t1679;
  double t1683;
  double t1687;
  double t1691;
  double t1692;
  double t1696;
  double t1697;
  double t1698;
  double t1701;
  double t1707;
  double t1714;
  double t1715;
  double t1140;
  double t1267;
  double t1268;
  double t1724;
  double t1726;
  double t1731;
  double t1734;
  double t1583;
  double t1682;
  double t1717;
  double t1722;
  double t1741;
  double t1742;
  double t1745;
  double t1746;
  double t1750;
  double t1751;
  double t1752;
  double t1753;
  double t1756;
  double t1757;
  double t1760;
  double t1761;
  double t1762;
  double t1723;
  double t1736;
  double t1737;
  double t1758;
  double t1765;
  double t1769;
  double t1773;
  double t1776;
  double t1779;
  double t1401;
  double t1438;
  double t1439;
  double t1738;
  double t1792;
  double t1806;
  double t1822;
  double t1835;
  double t1843;
  double t1855;
  double t1862;
  double t1873;
  double t1882;
  double t1895;
  double t1899;
  double t2085;
  double t2086;
  double t2088;
  double t2091;
  double t2093;
  double t2094;
  double t2098;
  double t2100;
  double t2136;
  double t2137;
  double t2140;
  double t2142;
  double t2154;
  double t2155;
  double t2158;
  double t2159;
  double t2076;
  double t2197;
  double t2198;
  double t2201;
  double t2204;
  double t2207;
  double t2211;
  double t2212;
  double t2213;
  t879 = Cos(var1[14]);
  t900 = -1.*t879;
  t901 = 1. + t900;
  t921 = Sin(var1[14]);
  t285 = Cos(var1[13]);
  t922 = -7.e-6*t921;
  t943 = -1.*t285;
  t947 = 1. + t943;
  t781 = Sin(var1[13]);
  t934 = -7.e-6*t901;
  t966 = -1.*t921;
  t904 = -6.5e-11*t901;
  t910 = 4.e-6*t901;
  t925 = t910 + t922;
  t930 = 4.e-6*t925;
  t935 = -4.e-6*t921;
  t936 = t934 + t935;
  t938 = -7.e-6*t936;
  t939 = 1. + t904 + t930 + t938;
  t1116 = 2.8e-11*t947;
  t958 = 1.000000000049*t901;
  t961 = -1. + t958;
  t962 = 4.e-6*t961;
  t963 = -1. + t879;
  t964 = 4.e-6*t963;
  t965 = 2.8e-11*t901;
  t1097 = t965 + t966;
  t1103 = -7.e-6*t1097;
  t1106 = t962 + t964 + t1103 + t922;
  t1119 = -1.000000000016*t901;
  t1120 = 1. + t1119;
  t1121 = -7.e-6*t1120;
  t1124 = -2.8e-11*t901;
  t1126 = t1124 + t966;
  t1129 = 4.e-6*t1126;
  t1130 = 4.e-6*t921;
  t1133 = t1121 + t934 + t1129 + t1130;
  t320 = -1. + t285;
  t648 = 4.e-6*t320;
  t1149 = -7.e-6*t947;
  t1193 = Sin(var1[12]);
  t1151 = 4.e-6*t781;
  t1154 = t1149 + t1151;
  t1157 = t1154*t939;
  t1160 = t1116 + t781;
  t1162 = t1160*t1106;
  t1164 = -1.000000000016*t947;
  t1166 = 1. + t1164;
  t1169 = t1166*t1133;
  t1174 = t1157 + t1162 + t1169;
  t1146 = Cos(var1[12]);
  t1195 = -6.5e-11*t947;
  t1196 = 1. + t1195;
  t1200 = t1196*t939;
  t1206 = 7.e-6*t781;
  t1207 = t648 + t1206;
  t1209 = t1207*t1106;
  t1213 = -4.e-6*t781;
  t1215 = t1149 + t1213;
  t1222 = t1215*t1133;
  t1223 = t1200 + t1209 + t1222;
  t1117 = -1.*t781;
  t1118 = t1116 + t1117;
  t864 = -7.e-6*t781;
  t868 = t648 + t864;
  t952 = -1.000000000049*t947;
  t956 = 1. + t952;
  t1139 = Sin(var1[4]);
  t1141 = Cos(var1[4]);
  t1144 = Cos(var1[5]);
  t1271 = 1.000000000016*t901;
  t1275 = t934 + t1130;
  t1278 = -7.e-6*t1275;
  t1279 = -1. + t1271 + t1278;
  t1284 = 1. + t904;
  t1286 = -7.e-6*t1284;
  t1287 = 7.e-6*t901;
  t1294 = t1286 + t1287 + t1130;
  t1300 = t964 + t922;
  t1301 = -7.e-6*t1300;
  t1303 = t1124 + t1301 + t921;
  t1311 = t1215*t1279;
  t1312 = t1196*t1294;
  t1314 = t1207*t1303;
  t1315 = t1311 + t1312 + t1314;
  t1318 = t1166*t1279;
  t1323 = t1154*t1294;
  t1324 = t1160*t1303;
  t1329 = t1318 + t1323 + t1324;
  t1255 = Sin(var1[5]);
  t1361 = -1.000000000049*t901;
  t1362 = 4.e-6*t1300;
  t1371 = 1. + t1361 + t1362;
  t1379 = 4.e-6*t1284;
  t1382 = 7.e-6*t921;
  t1384 = t1379 + t964 + t1382;
  t1388 = 4.e-6*t1275;
  t1392 = t965 + t1388 + t921;
  t1403 = t1160*t1371;
  t1405 = t1154*t1384;
  t1406 = t1166*t1392;
  t1413 = t1403 + t1405 + t1406;
  t1417 = t1207*t1371;
  t1418 = t1196*t1384;
  t1420 = t1215*t1392;
  t1421 = t1417 + t1418 + t1420;
  t1240 = t1193*t1174;
  t1242 = t1146*t1223;
  t1247 = t1240 + t1242;
  t1181 = t1146*t1174;
  t1227 = -1.*t1193*t1223;
  t1229 = t1181 + t1227;
  t942 = t868*t939;
  t1109 = t956*t1106;
  t1136 = t1118*t1133;
  t1138 = t942 + t1109 + t1136;
  t1233 = t1144*t1229;
  t1260 = -1.*t1247*t1255;
  t1262 = t1233 + t1260;
  t1445 = Cos(var1[3]);
  t1338 = t1146*t1315;
  t1339 = t1193*t1329;
  t1340 = t1338 + t1339;
  t1316 = -1.*t1193*t1315;
  t1330 = t1146*t1329;
  t1331 = t1316 + t1330;
  t1477 = Sin(var1[3]);
  t1281 = t1118*t1279;
  t1296 = t868*t1294;
  t1305 = t956*t1303;
  t1307 = t1281 + t1296 + t1305;
  t1335 = t1144*t1331;
  t1344 = -1.*t1340*t1255;
  t1346 = t1335 + t1344;
  t1427 = t1193*t1413;
  t1428 = t1146*t1421;
  t1429 = t1427 + t1428;
  t1416 = t1146*t1413;
  t1422 = -1.*t1193*t1421;
  t1424 = t1416 + t1422;
  t1377 = t956*t1371;
  t1386 = t868*t1384;
  t1394 = t1118*t1392;
  t1398 = t1377 + t1386 + t1394;
  t1425 = t1144*t1424;
  t1434 = -1.*t1429*t1255;
  t1437 = t1425 + t1434;
  t1454 = t1144*t1247;
  t1467 = t1229*t1255;
  t1471 = t1454 + t1467;
  t1479 = t1141*t1138;
  t1485 = -1.*t1139*t1262;
  t1486 = t1479 + t1485;
  t1507 = t1144*t1340;
  t1508 = t1331*t1255;
  t1509 = t1507 + t1508;
  t1517 = t1141*t1307;
  t1519 = -1.*t1139*t1346;
  t1520 = t1517 + t1519;
  t1547 = t1144*t1429;
  t1548 = t1424*t1255;
  t1549 = t1547 + t1548;
  t1552 = t1141*t1398;
  t1553 = -1.*t1139*t1437;
  t1554 = t1552 + t1553;
  t1309 = t1307*t1139;
  t1357 = t1141*t1346;
  t1358 = t1309 + t1357;
  t1595 = 7.e-6*t947;
  t1599 = -2.598649999999999e-7*var1[14];
  t1604 = 0.148705*t1284;
  t1605 = -2.3905277499999995e-16*t901;
  t1613 = -0.038922999986*t925;
  t1614 = -0.80315*t936;
  t1616 = t1287 + t1130;
  t1617 = -0.503149000008*t1616;
  t1619 = t964 + t1382;
  t1623 = -0.038924*t1619;
  t1624 = t1599 + t1604 + t1605 + t1613 + t1614 + t1617 + t1623;
  t1628 = 1.0394599999999997e-12*var1[14];
  t1629 = 1. + t1361;
  t1631 = -0.038924*t1629;
  t1632 = -0.03892299998790722*t901;
  t1633 = -0.80315*t1097;
  t1635 = 0.148705*t1300;
  t1637 = t910 + t1382;
  t1639 = -3.6777349999999994e-6*t1637;
  t1640 = t1124 + t921;
  t1647 = -0.503149000008*t1640;
  t1649 = t1628 + t1631 + t1632 + t1633 + t1635 + t1639 + t1647;
  t1651 = 1.8190549999999993e-12*var1[14];
  t1652 = -0.80315*t1120;
  t1653 = -0.5031490000160505*t901;
  t1654 = -0.038922999986*t1126;
  t1656 = t1287 + t935;
  t1657 = -3.6777349999999994e-6*t1656;
  t1659 = 0.148705*t1275;
  t1662 = t965 + t921;
  t1664 = -0.038924*t1662;
  t1669 = t1651 + t1652 + t1653 + t1654 + t1657 + t1659 + t1664;
  t1581 = -1.*t1146;
  t1582 = 1. + t1581;
  t1585 = 0.15121*t1193;
  t1588 = 1.0248489999999998e-12*var1[13];
  t1589 = -0.28120900000849935*t947;
  t1591 = -2.8e-11*t947;
  t1592 = t1591 + t1117;
  t1593 = -0.038748999993*t1592;
  t1597 = t1595 + t1213;
  t1598 = -2.123459e-6*t1597;
  t1626 = t1154*t1624;
  t1650 = t1160*t1649;
  t1671 = t1166*t1669;
  t1679 = t1588 + t1589 + t1593 + t1598 + t1626 + t1650 + t1671;
  t1683 = -1.4640699999999997e-7*var1[13];
  t1687 = -1.38024835e-16*t947;
  t1691 = 4.e-6*t947;
  t1692 = t1691 + t864;
  t1696 = -0.038748999993*t1692;
  t1697 = t1595 + t1151;
  t1698 = -0.281209000004*t1697;
  t1701 = t1196*t1624;
  t1707 = t1207*t1649;
  t1714 = t1215*t1669;
  t1715 = t1683 + t1687 + t1696 + t1698 + t1701 + t1707 + t1714;
  t1140 = t1138*t1139;
  t1267 = t1141*t1262;
  t1268 = t1140 + t1267;
  t1724 = -0.15121*t1582;
  t1726 = t1146*t1679;
  t1731 = -1.*t1193*t1715;
  t1734 = t1724 + t1585 + t1726 + t1731;
  t1583 = 0.15121*t1582;
  t1682 = t1193*t1679;
  t1717 = t1146*t1715;
  t1722 = t1583 + t1585 + t1682 + t1717;
  t1741 = 5.856279999999999e-13*var1[13];
  t1742 = -0.0387489999948987*t947;
  t1745 = t1691 + t1206;
  t1746 = -2.123459e-6*t1745;
  t1750 = t1591 + t781;
  t1751 = -0.281209000004*t1750;
  t1752 = t868*t1624;
  t1753 = t956*t1649;
  t1756 = t1118*t1669;
  t1757 = t1741 + t1742 + t1746 + t1751 + t1752 + t1753 + t1756;
  t1760 = t1144*t1734;
  t1761 = -1.*t1722*t1255;
  t1762 = t1760 + t1761;
  t1723 = t1144*t1722;
  t1736 = t1734*t1255;
  t1737 = t1723 + t1736;
  t1758 = t1757*t1139;
  t1765 = t1141*t1762;
  t1769 = t1758 + t1765;
  t1773 = t1141*t1757;
  t1776 = -1.*t1139*t1762;
  t1779 = t1773 + t1776;
  t1401 = t1398*t1139;
  t1438 = t1141*t1437;
  t1439 = t1401 + t1438;
  t1738 = -1.*t1471*t1737;
  t1792 = t1509*t1737;
  t1806 = t1471*t1737;
  t1822 = -1.*t1549*t1737;
  t1835 = -1.*t1509*t1737;
  t1843 = t1549*t1737;
  t1855 = -1.*t1138*t1757;
  t1862 = t1307*t1757;
  t1873 = t1138*t1757;
  t1882 = -1.*t1398*t1757;
  t1895 = -1.*t1307*t1757;
  t1899 = t1398*t1757;
  t2085 = t1624*t1294;
  t2086 = t1303*t1649;
  t2088 = t1279*t1669;
  t2091 = t2085 + t2086 + t2088;
  t2093 = -1.*t939*t1624;
  t2094 = -1.*t1106*t1649;
  t2098 = -1.*t1133*t1669;
  t2100 = t2093 + t2094 + t2098;
  t2136 = t939*t1624;
  t2137 = t1106*t1649;
  t2140 = t1133*t1669;
  t2142 = t2136 + t2137 + t2140;
  t2154 = -1.*t1624*t1384;
  t2155 = -1.*t1371*t1649;
  t2158 = -1.*t1392*t1669;
  t2159 = t2154 + t2155 + t2158;
  t2076 = 6.5e-11*t901;
  t2197 = -1.*t1624*t1294;
  t2198 = -1.*t1303*t1649;
  t2201 = -1.*t1279*t1669;
  t2204 = t2197 + t2198 + t2201;
  t2207 = t1624*t1384;
  t2211 = t1371*t1649;
  t2212 = t1392*t1669;
  t2213 = t2207 + t2211 + t2212;
  p_output1[0]=t1358*var2[0] + t1439*var2[1] + t1268*var2[2];
  p_output1[1]=(t1445*t1509 - 1.*t1477*t1520)*var2[0] + (t1445*t1549 - 1.*t1477*t1554)*var2[1] + (t1445*t1471 - 1.*t1477*t1486)*var2[2];
  p_output1[2]=(t1477*t1509 + t1445*t1520)*var2[0] + (t1477*t1549 + t1445*t1554)*var2[1] + (t1471*t1477 + t1445*t1486)*var2[2];
  p_output1[3]=(t1439*(t1268*t1769 + t1486*t1779 + t1806) + t1268*(-1.*t1439*t1769 - 1.*t1554*t1779 + t1822))*var2[0] + (t1358*(t1738 - 1.*t1268*t1769 - 1.*t1486*t1779) + t1268*(t1358*t1769 + t1520*t1779 + t1792))*var2[1] + (t1439*(-1.*t1358*t1769 - 1.*t1520*t1779 + t1835) + t1358*(t1439*t1769 + t1554*t1779 + t1843))*var2[2];
  p_output1[4]=(t1549*(t1262*t1762 + t1806 + t1873) + t1471*(-1.*t1437*t1762 + t1822 + t1882))*var2[0] + (t1509*(t1738 - 1.*t1262*t1762 + t1855) + t1471*(t1346*t1762 + t1792 + t1862))*var2[1] + (t1549*(-1.*t1346*t1762 + t1835 + t1895) + t1509*(t1437*t1762 + t1843 + t1899))*var2[2];
  p_output1[5]=(t1398*(t1247*t1722 + t1229*t1734 + t1873) + t1138*(-1.*t1429*t1722 - 1.*t1424*t1734 + t1882))*var2[0] + (t1307*(-1.*t1247*t1722 - 1.*t1229*t1734 + t1855) + t1138*(t1340*t1722 + t1331*t1734 + t1862))*var2[1] + (t1398*(-1.*t1340*t1722 - 1.*t1331*t1734 + t1895) + t1307*(t1429*t1722 + t1424*t1734 + t1899))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.15121*t1315 + 0.15121*t1329 + t1398*(t1174*t1679 + t1223*t1715 + t1873) + t1138*(-1.*t1413*t1679 - 1.*t1421*t1715 + t1882))*var2[0] + (0.15121*t1413 + 0.15121*t1421 + t1307*(-1.*t1174*t1679 - 1.*t1223*t1715 + t1855) + t1138*(t1329*t1679 + t1315*t1715 + t1862))*var2[1] + (0.15121*t1174 + 0.15121*t1223 + t1398*(-1.*t1329*t1679 - 1.*t1315*t1715 + t1895) + t1307*(t1413*t1679 + t1421*t1715 + t1899))*var2[2];
  p_output1[13]=(0.038749*t1279 - 0.281209*t1303 + t1384*t2142 + 4.e-6*(-1.*t1371*t2142 - 1.*t1106*t2159) - 7.e-6*(t1392*t2142 + t1133*t2159) + 1.e-6*(7.e-6*t1284 + t934 + t935) + t2159*t939)*var2[0] + (-0.281209*t1371 + 0.038749*t1392 + t1294*t2100 - 7.e-6*(t1133*t2091 + t1279*t2100) + 4.e-6*(-1.*t1106*t2091 - 1.*t1303*t2100) + 1.e-6*(4.e-6*(-1. + t2076) + t910 + t922) + t2091*t939)*var2[1] + (-0.281209*t1106 + 0.038749*t1133 + t1384*t2204 + t1294*t2213 - 7.e-6*(t1392*t2204 + t1279*t2213) + 4.e-6*(-1.*t1371*t2204 - 1.*t1303*t2213) + 1.e-6*(-1. + 4.e-6*t1619 + t2076 + 7.e-6*t936))*var2[2];
  p_output1[14]=4.0519653002457196e-7*var2[0] + 0.29999995910920463*var2[1] - 2.5986500000000035e-7*var2[2];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRlFoot_vec_ParallelStance2.hh"

namespace ParallelStance2
{

void fRlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
