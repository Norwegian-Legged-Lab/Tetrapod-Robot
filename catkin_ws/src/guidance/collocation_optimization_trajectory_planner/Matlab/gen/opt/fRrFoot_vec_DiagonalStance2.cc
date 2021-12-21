/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:18:00 GMT+01:00
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
  double t893;
  double t897;
  double t907;
  double t107;
  double t218;
  double t612;
  double t919;
  double t647;
  double t929;
  double t917;
  double t918;
  double t937;
  double t940;
  double t946;
  double t979;
  double t962;
  double t965;
  double t966;
  double t967;
  double t970;
  double t972;
  double t976;
  double t988;
  double t991;
  double t993;
  double t995;
  double t1131;
  double t642;
  double t1154;
  double t1194;
  double t1155;
  double t1159;
  double t1160;
  double t1163;
  double t1169;
  double t1171;
  double t1181;
  double t1183;
  double t1185;
  double t1186;
  double t1147;
  double t1196;
  double t1199;
  double t1202;
  double t1206;
  double t1208;
  double t1213;
  double t1215;
  double t1216;
  double t1218;
  double t1220;
  double t959;
  double t961;
  double t984;
  double t987;
  double t809;
  double t1139;
  double t1145;
  double t1146;
  double t1272;
  double t1273;
  double t1276;
  double t1294;
  double t1297;
  double t1299;
  double t1305;
  double t1312;
  double t1313;
  double t1323;
  double t1328;
  double t1329;
  double t1331;
  double t1336;
  double t1337;
  double t1339;
  double t1340;
  double t1248;
  double t1363;
  double t1361;
  double t1364;
  double t1365;
  double t1367;
  double t1369;
  double t1372;
  double t1382;
  double t1384;
  double t1385;
  double t1386;
  double t1393;
  double t1398;
  double t1400;
  double t1403;
  double t1405;
  double t1407;
  double t1408;
  double t1409;
  double t1414;
  double t1426;
  double t1427;
  double t1431;
  double t1440;
  double t1443;
  double t1446;
  double t1452;
  double t1453;
  double t1235;
  double t1236;
  double t1241;
  double t1187;
  double t1228;
  double t1230;
  double t951;
  double t977;
  double t1136;
  double t1138;
  double t1231;
  double t1250;
  double t1253;
  double t1490;
  double t1345;
  double t1346;
  double t1348;
  double t1335;
  double t1342;
  double t1343;
  double t1513;
  double t1277;
  double t1310;
  double t1314;
  double t1320;
  double t1344;
  double t1349;
  double t1351;
  double t1475;
  double t1478;
  double t1479;
  double t1441;
  double t1454;
  double t1462;
  double t1375;
  double t1402;
  double t1418;
  double t1421;
  double t1471;
  double t1483;
  double t1484;
  double t1493;
  double t1494;
  double t1495;
  double t1515;
  double t1518;
  double t1520;
  double t1524;
  double t1526;
  double t1541;
  double t1557;
  double t1558;
  double t1561;
  double t1577;
  double t1600;
  double t1607;
  double t1618;
  double t1619;
  double t1621;
  double t1322;
  double t1357;
  double t1358;
  double t1667;
  double t1677;
  double t1679;
  double t1681;
  double t1687;
  double t1691;
  double t1693;
  double t1694;
  double t1695;
  double t1698;
  double t1699;
  double t1701;
  double t1704;
  double t1706;
  double t1707;
  double t1711;
  double t1715;
  double t1719;
  double t1723;
  double t1725;
  double t1731;
  double t1738;
  double t1741;
  double t1749;
  double t1752;
  double t1755;
  double t1756;
  double t1757;
  double t1758;
  double t1759;
  double t1762;
  double t1763;
  double t1765;
  double t1657;
  double t1659;
  double t1660;
  double t1664;
  double t1665;
  double t1669;
  double t1670;
  double t1671;
  double t1672;
  double t1673;
  double t1700;
  double t1743;
  double t1766;
  double t1767;
  double t1775;
  double t1778;
  double t1780;
  double t1781;
  double t1785;
  double t1787;
  double t1790;
  double t1793;
  double t1794;
  double t1796;
  double t1797;
  double t1800;
  double t1144;
  double t1256;
  double t1264;
  double t1817;
  double t1821;
  double t1825;
  double t1826;
  double t1662;
  double t1774;
  double t1804;
  double t1807;
  double t1831;
  double t1835;
  double t1836;
  double t1838;
  double t1840;
  double t1843;
  double t1847;
  double t1851;
  double t1853;
  double t1855;
  double t1863;
  double t1865;
  double t1866;
  double t1810;
  double t1827;
  double t1828;
  double t1859;
  double t1867;
  double t1869;
  double t1874;
  double t1875;
  double t1877;
  double t1424;
  double t1485;
  double t1486;
  double t1829;
  double t1889;
  double t1905;
  double t1916;
  double t1936;
  double t1945;
  double t1967;
  double t1987;
  double t2002;
  double t2023;
  double t2038;
  double t2042;
  double t2254;
  double t2257;
  double t2258;
  double t2260;
  double t2262;
  double t2265;
  double t2266;
  double t2270;
  double t2324;
  double t2325;
  double t2329;
  double t2330;
  double t2333;
  double t2341;
  double t2344;
  double t2346;
  double t2393;
  double t2394;
  double t2396;
  double t2397;
  double t2402;
  double t2403;
  double t2404;
  double t2405;
  t893 = Cos(var1[17]);
  t897 = -1.*t893;
  t907 = 1. + t897;
  t107 = Cos(var1[16]);
  t218 = -1.*t107;
  t612 = 1. + t218;
  t919 = Sin(var1[17]);
  t647 = Sin(var1[16]);
  t929 = 4.e-6*t919;
  t917 = 1.000000000016*t907;
  t918 = -7.e-6*t907;
  t937 = t918 + t929;
  t940 = -7.e-6*t937;
  t946 = -1. + t917 + t940;
  t979 = 4.e-6*t612;
  t962 = 2.8e-11*t907;
  t965 = 4.e-6*t907;
  t966 = 7.e-6*t919;
  t967 = t965 + t966;
  t970 = -7.e-6*t967;
  t972 = -1.*t919;
  t976 = t962 + t970 + t972;
  t988 = -6.5e-11*t907;
  t991 = 1. + t988;
  t993 = -7.e-6*t991;
  t995 = 7.e-6*t907;
  t1131 = t993 + t995 + t929;
  t642 = -2.8e-11*t612;
  t1154 = -7.e-6*t612;
  t1194 = Cos(var1[15]);
  t1155 = -4.e-6*t647;
  t1159 = t1154 + t1155;
  t1160 = t1159*t946;
  t1163 = -7.e-6*t647;
  t1169 = t979 + t1163;
  t1171 = t1169*t976;
  t1181 = -6.5e-11*t612;
  t1183 = 1. + t1181;
  t1185 = t1183*t1131;
  t1186 = t1160 + t1171 + t1185;
  t1147 = Sin(var1[15]);
  t1196 = -1.000000000016*t612;
  t1199 = 1. + t1196;
  t1202 = t1199*t946;
  t1206 = -1.*t647;
  t1208 = t642 + t1206;
  t1213 = t1208*t976;
  t1215 = 4.e-6*t647;
  t1216 = t1154 + t1215;
  t1218 = t1216*t1131;
  t1220 = t1202 + t1213 + t1218;
  t959 = -1.000000000049*t612;
  t961 = 1. + t959;
  t984 = 7.e-6*t647;
  t987 = t979 + t984;
  t809 = t642 + t647;
  t1139 = Sin(var1[4]);
  t1145 = Cos(var1[4]);
  t1146 = Cos(var1[5]);
  t1272 = 1.000000000049*t907;
  t1273 = 4.e-6*t967;
  t1276 = -1. + t1272 + t1273;
  t1294 = 4.e-6*t991;
  t1297 = -1. + t893;
  t1299 = 4.e-6*t1297;
  t1305 = t1294 + t1299 + t966;
  t1312 = 4.e-6*t937;
  t1313 = t962 + t1312 + t919;
  t1323 = t1208*t1276;
  t1328 = t1216*t1305;
  t1329 = t1199*t1313;
  t1331 = t1323 + t1328 + t1329;
  t1336 = t1169*t1276;
  t1337 = t1183*t1305;
  t1339 = t1159*t1313;
  t1340 = t1336 + t1337 + t1339;
  t1248 = Sin(var1[5]);
  t1363 = -4.e-6*t919;
  t1361 = 6.5e-11*t907;
  t1364 = t918 + t1363;
  t1365 = 7.e-6*t1364;
  t1367 = t1299 + t966;
  t1369 = 4.e-6*t1367;
  t1372 = -1. + t1361 + t1365 + t1369;
  t1382 = -1. + t1272;
  t1384 = 4.e-6*t1382;
  t1385 = -7.e-6*t919;
  t1386 = -2.8e-11*t907;
  t1393 = t1386 + t919;
  t1398 = 7.e-6*t1393;
  t1400 = t1384 + t1299 + t1385 + t1398;
  t1403 = -1.000000000016*t907;
  t1405 = 1. + t1403;
  t1407 = 7.e-6*t1405;
  t1408 = t962 + t919;
  t1409 = 4.e-6*t1408;
  t1414 = t1407 + t995 + t1363 + t1409;
  t1426 = t1216*t1372;
  t1427 = t1208*t1400;
  t1431 = t1199*t1414;
  t1440 = t1426 + t1427 + t1431;
  t1443 = t1183*t1372;
  t1446 = t1169*t1400;
  t1452 = t1159*t1414;
  t1453 = t1443 + t1446 + t1452;
  t1235 = t1194*t1186;
  t1236 = t1147*t1220;
  t1241 = t1235 + t1236;
  t1187 = -1.*t1147*t1186;
  t1228 = t1194*t1220;
  t1230 = t1187 + t1228;
  t951 = t809*t946;
  t977 = t961*t976;
  t1136 = t987*t1131;
  t1138 = t951 + t977 + t1136;
  t1231 = t1146*t1230;
  t1250 = -1.*t1241*t1248;
  t1253 = t1231 + t1250;
  t1490 = Cos(var1[3]);
  t1345 = t1147*t1331;
  t1346 = t1194*t1340;
  t1348 = t1345 + t1346;
  t1335 = t1194*t1331;
  t1342 = -1.*t1147*t1340;
  t1343 = t1335 + t1342;
  t1513 = Sin(var1[3]);
  t1277 = t961*t1276;
  t1310 = t987*t1305;
  t1314 = t809*t1313;
  t1320 = t1277 + t1310 + t1314;
  t1344 = t1146*t1343;
  t1349 = -1.*t1348*t1248;
  t1351 = t1344 + t1349;
  t1475 = t1147*t1440;
  t1478 = t1194*t1453;
  t1479 = t1475 + t1478;
  t1441 = t1194*t1440;
  t1454 = -1.*t1147*t1453;
  t1462 = t1441 + t1454;
  t1375 = t987*t1372;
  t1402 = t961*t1400;
  t1418 = t809*t1414;
  t1421 = t1375 + t1402 + t1418;
  t1471 = t1146*t1462;
  t1483 = -1.*t1479*t1248;
  t1484 = t1471 + t1483;
  t1493 = t1146*t1241;
  t1494 = t1230*t1248;
  t1495 = t1493 + t1494;
  t1515 = t1145*t1138;
  t1518 = -1.*t1139*t1253;
  t1520 = t1515 + t1518;
  t1524 = t1146*t1348;
  t1526 = t1343*t1248;
  t1541 = t1524 + t1526;
  t1557 = t1145*t1320;
  t1558 = -1.*t1139*t1351;
  t1561 = t1557 + t1558;
  t1577 = t1146*t1479;
  t1600 = t1462*t1248;
  t1607 = t1577 + t1600;
  t1618 = t1145*t1421;
  t1619 = -1.*t1139*t1484;
  t1621 = t1618 + t1619;
  t1322 = t1320*t1139;
  t1357 = t1145*t1351;
  t1358 = t1322 + t1357;
  t1667 = 7.e-6*t612;
  t1677 = 2.826290000000002e-7*var1[17];
  t1679 = -0.148715*t991;
  t1681 = -2.18904205e-16*t907;
  t1687 = t965 + t1385;
  t1691 = -0.038576*t1687;
  t1693 = -0.80315*t1364;
  t1694 = t995 + t929;
  t1695 = -0.5031510000080001*t1694;
  t1698 = -0.038575000014*t1367;
  t1699 = t1677 + t1679 + t1681 + t1691 + t1693 + t1695 + t1698;
  t1701 = 1.1305160000000008e-12*var1[17];
  t1704 = -1.000000000049*t907;
  t1706 = 1. + t1704;
  t1707 = -0.038576*t1706;
  t1711 = -0.03857500001589017*t907;
  t1715 = t962 + t972;
  t1719 = -0.5031510000080001*t1715;
  t1723 = t1299 + t1385;
  t1725 = -3.367757e-6*t1723;
  t1731 = -0.148715*t967;
  t1738 = -0.80315*t1393;
  t1741 = t1701 + t1707 + t1711 + t1719 + t1725 + t1731 + t1738;
  t1749 = -1.9784030000000015e-12*var1[17];
  t1752 = -0.80315*t1405;
  t1755 = -0.5031510000160505*t907;
  t1756 = t1386 + t972;
  t1757 = -0.038576*t1756;
  t1758 = t995 + t1363;
  t1759 = -3.367757e-6*t1758;
  t1762 = -0.148715*t937;
  t1763 = -0.038575000014*t1408;
  t1765 = t1749 + t1752 + t1755 + t1757 + t1759 + t1762 + t1763;
  t1657 = -1.*t1194;
  t1659 = 1. + t1657;
  t1660 = -0.15121*t1659;
  t1664 = -2.7726089999999997e-12*var1[16];
  t1665 = -0.2812110000084994*t612;
  t1669 = t1667 + t1155;
  t1670 = -1.8134809999999998e-6*t1669;
  t1671 = 2.8e-11*t612;
  t1672 = t1671 + t647;
  t1673 = -0.038749000006999997*t1672;
  t1700 = t1216*t1699;
  t1743 = t1208*t1741;
  t1766 = t1199*t1765;
  t1767 = t1664 + t1665 + t1670 + t1673 + t1700 + t1743 + t1766;
  t1775 = 3.9608699999999997e-7*var1[16];
  t1778 = -1.1787626499999999e-16*t612;
  t1780 = t1667 + t1215;
  t1781 = -0.281211000004*t1780;
  t1785 = -1. + t107;
  t1787 = 4.e-6*t1785;
  t1790 = t1787 + t984;
  t1793 = -0.038749000006999997*t1790;
  t1794 = t1183*t1699;
  t1796 = t1169*t1741;
  t1797 = t1159*t1765;
  t1800 = t1775 + t1778 + t1781 + t1793 + t1794 + t1796 + t1797;
  t1144 = t1138*t1139;
  t1256 = t1145*t1253;
  t1264 = t1144 + t1256;
  t1817 = -0.15121*t1147;
  t1821 = t1194*t1767;
  t1825 = -1.*t1147*t1800;
  t1826 = t1660 + t1817 + t1821 + t1825;
  t1662 = 0.15121*t1147;
  t1774 = t1147*t1767;
  t1804 = t1194*t1800;
  t1807 = t1660 + t1662 + t1774 + t1804;
  t1831 = 1.5843479999999999e-12*var1[16];
  t1835 = -0.03874900000889869*t612;
  t1836 = t1671 + t1206;
  t1838 = -0.281211000004*t1836;
  t1840 = t1787 + t1163;
  t1843 = -1.8134809999999998e-6*t1840;
  t1847 = t987*t1699;
  t1851 = t961*t1741;
  t1853 = t809*t1765;
  t1855 = t1831 + t1835 + t1838 + t1843 + t1847 + t1851 + t1853;
  t1863 = t1146*t1826;
  t1865 = -1.*t1807*t1248;
  t1866 = t1863 + t1865;
  t1810 = t1146*t1807;
  t1827 = t1826*t1248;
  t1828 = t1810 + t1827;
  t1859 = t1855*t1139;
  t1867 = t1145*t1866;
  t1869 = t1859 + t1867;
  t1874 = t1145*t1855;
  t1875 = -1.*t1139*t1866;
  t1877 = t1874 + t1875;
  t1424 = t1421*t1139;
  t1485 = t1145*t1484;
  t1486 = t1424 + t1485;
  t1829 = -1.*t1495*t1828;
  t1889 = t1541*t1828;
  t1905 = t1495*t1828;
  t1916 = -1.*t1828*t1607;
  t1936 = -1.*t1541*t1828;
  t1945 = t1828*t1607;
  t1967 = -1.*t1138*t1855;
  t1987 = t1320*t1855;
  t2002 = t1138*t1855;
  t2023 = -1.*t1855*t1421;
  t2038 = -1.*t1320*t1855;
  t2042 = t1855*t1421;
  t2254 = -1.*t1699*t1131;
  t2257 = -1.*t976*t1741;
  t2258 = -1.*t946*t1765;
  t2260 = t2254 + t2257 + t2258;
  t2262 = t1699*t1305;
  t2265 = t1276*t1741;
  t2266 = t1313*t1765;
  t2270 = t2262 + t2265 + t2266;
  t2324 = t1699*t1131;
  t2325 = t976*t1741;
  t2329 = t946*t1765;
  t2330 = t2324 + t2325 + t2329;
  t2333 = -1.*t1699*t1372;
  t2341 = -1.*t1741*t1400;
  t2344 = -1.*t1765*t1414;
  t2346 = t2333 + t2341 + t2344;
  t2393 = -1.*t1699*t1305;
  t2394 = -1.*t1276*t1741;
  t2396 = -1.*t1313*t1765;
  t2397 = t2393 + t2394 + t2396;
  t2402 = t1699*t1372;
  t2403 = t1741*t1400;
  t2404 = t1765*t1414;
  t2405 = t2402 + t2403 + t2404;
  p_output1[0]=t1264*var2[0] + t1358*var2[1] + t1486*var2[2];
  p_output1[1]=(t1490*t1495 - 1.*t1513*t1520)*var2[0] + (t1490*t1541 - 1.*t1513*t1561)*var2[1] + (t1490*t1607 - 1.*t1513*t1621)*var2[2];
  p_output1[2]=(t1495*t1513 + t1490*t1520)*var2[0] + (t1513*t1541 + t1490*t1561)*var2[1] + (t1513*t1607 + t1490*t1621)*var2[2];
  p_output1[3]=(t1486*(-1.*t1358*t1869 - 1.*t1561*t1877 + t1936) + t1358*(t1486*t1869 + t1621*t1877 + t1945))*var2[0] + (t1486*(t1264*t1869 + t1520*t1877 + t1905) + t1264*(-1.*t1486*t1869 - 1.*t1621*t1877 + t1916))*var2[1] + (t1358*(t1829 - 1.*t1264*t1869 - 1.*t1520*t1877) + t1264*(t1358*t1869 + t1561*t1877 + t1889))*var2[2];
  p_output1[4]=(t1607*(-1.*t1351*t1866 + t1936 + t2038) + t1541*(t1484*t1866 + t1945 + t2042))*var2[0] + (t1607*(t1253*t1866 + t1905 + t2002) + t1495*(-1.*t1484*t1866 + t1916 + t2023))*var2[1] + (t1541*(t1829 - 1.*t1253*t1866 + t1967) + t1495*(t1351*t1866 + t1889 + t1987))*var2[2];
  p_output1[5]=(t1421*(-1.*t1348*t1807 - 1.*t1343*t1826 + t2038) + t1320*(t1479*t1807 + t1462*t1826 + t2042))*var2[0] + (t1421*(t1241*t1807 + t1230*t1826 + t2002) + t1138*(-1.*t1479*t1807 - 1.*t1462*t1826 + t2023))*var2[1] + (t1320*(-1.*t1241*t1807 - 1.*t1230*t1826 + t1967) + t1138*(t1348*t1807 + t1343*t1826 + t1987))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.15121*t1186 - 0.15121*t1220 + t1421*(-1.*t1331*t1767 - 1.*t1340*t1800 + t2038) + t1320*(t1440*t1767 + t1453*t1800 + t2042))*var2[0] + (-0.15121*t1331 + 0.15121*t1340 + t1421*(t1220*t1767 + t1186*t1800 + t2002) + t1138*(-1.*t1440*t1767 - 1.*t1453*t1800 + t2023))*var2[1] + (-0.15121*t1440 + 0.15121*t1453 + t1320*(-1.*t1220*t1767 - 1.*t1186*t1800 + t1967) + t1138*(t1331*t1767 + t1340*t1800 + t1987))*var2[2];
  p_output1[16]=(-1.*t1372*t2397 - 1.*t1305*t2405 + 4.e-6*(-1.*t1400*t2397 - 1.*t1276*t2405) + 7.e-6*(t1414*t2397 + t1313*t2405) - 0.038749*t946 + 0.281211*t976 + 1.e-6*(t1363 + t918 + 7.e-6*t991))*var2[0] + (0.281211*t1276 - 0.038749*t1313 - 1.*t1372*t2330 - 1.*t1131*t2346 + 7.e-6*(t1414*t2330 + t2346*t946) + 1.e-6*(4.e-6*(-1. + t1361) + t1385 + t965) + 4.e-6*(-1.*t1400*t2330 - 1.*t2346*t976))*var2[1] + (0.281211*t1400 - 0.038749*t1414 - 1.*t1305*t2260 - 1.*t1131*t2270 + 7.e-6*(t1313*t2260 + t2270*t946) + 4.e-6*(-1.*t1276*t2260 - 1.*t2270*t976) + 1.e-6*(1. - 7.e-6*t1364 + 4.e-6*t1687 + t988))*var2[2];
  p_output1[17]=-4.051285074010787e-7*var2[0] + 0.3000000410492048*var2[1] - 2.826290000000002e-7*var2[2];
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

#include "fRrFoot_vec_DiagonalStance2.hh"

namespace TrotStance2
{

void fRrFoot_vec_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
