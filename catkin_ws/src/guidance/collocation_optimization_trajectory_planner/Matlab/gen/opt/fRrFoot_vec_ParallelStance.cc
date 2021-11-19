/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:30:03 GMT+01:00
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
  double t609;
  double t617;
  double t618;
  double t428;
  double t452;
  double t468;
  double t700;
  double t518;
  double t712;
  double t655;
  double t662;
  double t739;
  double t765;
  double t777;
  double t905;
  double t857;
  double t865;
  double t867;
  double t868;
  double t874;
  double t880;
  double t888;
  double t916;
  double t923;
  double t934;
  double t937;
  double t943;
  double t469;
  double t961;
  double t1001;
  double t963;
  double t968;
  double t972;
  double t973;
  double t974;
  double t979;
  double t985;
  double t987;
  double t993;
  double t998;
  double t959;
  double t1004;
  double t1007;
  double t1009;
  double t1019;
  double t1022;
  double t1025;
  double t1028;
  double t1032;
  double t1033;
  double t1035;
  double t800;
  double t836;
  double t907;
  double t911;
  double t592;
  double t950;
  double t956;
  double t958;
  double t1099;
  double t1114;
  double t1118;
  double t1134;
  double t1139;
  double t1147;
  double t1150;
  double t1164;
  double t1165;
  double t1176;
  double t1180;
  double t1186;
  double t1188;
  double t1194;
  double t1197;
  double t1198;
  double t1202;
  double t1062;
  double t1249;
  double t1247;
  double t1253;
  double t1259;
  double t1262;
  double t1266;
  double t1273;
  double t1277;
  double t1278;
  double t1279;
  double t1280;
  double t1283;
  double t1285;
  double t1288;
  double t1297;
  double t1299;
  double t1300;
  double t1303;
  double t1307;
  double t1310;
  double t1317;
  double t1318;
  double t1320;
  double t1322;
  double t1331;
  double t1335;
  double t1338;
  double t1341;
  double t1057;
  double t1058;
  double t1059;
  double t999;
  double t1038;
  double t1041;
  double t782;
  double t895;
  double t944;
  double t945;
  double t1053;
  double t1065;
  double t1067;
  double t1371;
  double t1216;
  double t1217;
  double t1223;
  double t1191;
  double t1206;
  double t1208;
  double t1376;
  double t1126;
  double t1159;
  double t1167;
  double t1168;
  double t1214;
  double t1233;
  double t1237;
  double t1350;
  double t1354;
  double t1357;
  double t1325;
  double t1342;
  double t1343;
  double t1274;
  double t1295;
  double t1312;
  double t1315;
  double t1344;
  double t1359;
  double t1361;
  double t1372;
  double t1373;
  double t1374;
  double t1378;
  double t1379;
  double t1383;
  double t1389;
  double t1391;
  double t1393;
  double t1396;
  double t1399;
  double t1402;
  double t1412;
  double t1415;
  double t1421;
  double t1423;
  double t1424;
  double t1427;
  double t1173;
  double t1238;
  double t1239;
  double t1469;
  double t1487;
  double t1488;
  double t1489;
  double t1491;
  double t1492;
  double t1494;
  double t1496;
  double t1497;
  double t1499;
  double t1513;
  double t1515;
  double t1516;
  double t1521;
  double t1522;
  double t1523;
  double t1524;
  double t1527;
  double t1528;
  double t1529;
  double t1532;
  double t1536;
  double t1539;
  double t1549;
  double t1550;
  double t1552;
  double t1553;
  double t1564;
  double t1565;
  double t1567;
  double t1569;
  double t1572;
  double t1575;
  double t1456;
  double t1460;
  double t1463;
  double t1465;
  double t1468;
  double t1472;
  double t1474;
  double t1475;
  double t1477;
  double t1481;
  double t1514;
  double t1542;
  double t1581;
  double t1587;
  double t1601;
  double t1604;
  double t1605;
  double t1606;
  double t1613;
  double t1614;
  double t1615;
  double t1616;
  double t1618;
  double t1619;
  double t1620;
  double t1621;
  double t955;
  double t1070;
  double t1093;
  double t1628;
  double t1629;
  double t1632;
  double t1635;
  double t1464;
  double t1590;
  double t1622;
  double t1625;
  double t1641;
  double t1647;
  double t1651;
  double t1652;
  double t1654;
  double t1657;
  double t1658;
  double t1659;
  double t1664;
  double t1665;
  double t1670;
  double t1672;
  double t1674;
  double t1626;
  double t1636;
  double t1639;
  double t1667;
  double t1675;
  double t1681;
  double t1685;
  double t1687;
  double t1694;
  double t1316;
  double t1362;
  double t1365;
  double t1640;
  double t1702;
  double t1718;
  double t1730;
  double t1744;
  double t1767;
  double t1784;
  double t1795;
  double t1804;
  double t1817;
  double t1837;
  double t1843;
  double t2041;
  double t2044;
  double t2046;
  double t2047;
  double t2051;
  double t2056;
  double t2059;
  double t2064;
  double t2107;
  double t2110;
  double t2113;
  double t2120;
  double t2124;
  double t2125;
  double t2128;
  double t2132;
  double t2166;
  double t2171;
  double t2173;
  double t2174;
  double t2179;
  double t2180;
  double t2181;
  double t2182;
  t609 = Cos(var1[17]);
  t617 = -1.*t609;
  t618 = 1. + t617;
  t428 = Cos(var1[16]);
  t452 = -1.*t428;
  t468 = 1. + t452;
  t700 = Sin(var1[17]);
  t518 = Sin(var1[16]);
  t712 = 4.e-6*t700;
  t655 = 1.000000000016*t618;
  t662 = -7.e-6*t618;
  t739 = t662 + t712;
  t765 = -7.e-6*t739;
  t777 = -1. + t655 + t765;
  t905 = 4.e-6*t468;
  t857 = 2.8e-11*t618;
  t865 = 4.e-6*t618;
  t867 = 7.e-6*t700;
  t868 = t865 + t867;
  t874 = -7.e-6*t868;
  t880 = -1.*t700;
  t888 = t857 + t874 + t880;
  t916 = -6.5e-11*t618;
  t923 = 1. + t916;
  t934 = -7.e-6*t923;
  t937 = 7.e-6*t618;
  t943 = t934 + t937 + t712;
  t469 = -2.8e-11*t468;
  t961 = -7.e-6*t468;
  t1001 = Cos(var1[15]);
  t963 = -4.e-6*t518;
  t968 = t961 + t963;
  t972 = t968*t777;
  t973 = -7.e-6*t518;
  t974 = t905 + t973;
  t979 = t974*t888;
  t985 = -6.5e-11*t468;
  t987 = 1. + t985;
  t993 = t987*t943;
  t998 = t972 + t979 + t993;
  t959 = Sin(var1[15]);
  t1004 = -1.000000000016*t468;
  t1007 = 1. + t1004;
  t1009 = t1007*t777;
  t1019 = -1.*t518;
  t1022 = t469 + t1019;
  t1025 = t1022*t888;
  t1028 = 4.e-6*t518;
  t1032 = t961 + t1028;
  t1033 = t1032*t943;
  t1035 = t1009 + t1025 + t1033;
  t800 = -1.000000000049*t468;
  t836 = 1. + t800;
  t907 = 7.e-6*t518;
  t911 = t905 + t907;
  t592 = t469 + t518;
  t950 = Sin(var1[4]);
  t956 = Cos(var1[4]);
  t958 = Cos(var1[5]);
  t1099 = 1.000000000049*t618;
  t1114 = 4.e-6*t868;
  t1118 = -1. + t1099 + t1114;
  t1134 = 4.e-6*t923;
  t1139 = -1. + t609;
  t1147 = 4.e-6*t1139;
  t1150 = t1134 + t1147 + t867;
  t1164 = 4.e-6*t739;
  t1165 = t857 + t1164 + t700;
  t1176 = t1022*t1118;
  t1180 = t1032*t1150;
  t1186 = t1007*t1165;
  t1188 = t1176 + t1180 + t1186;
  t1194 = t974*t1118;
  t1197 = t987*t1150;
  t1198 = t968*t1165;
  t1202 = t1194 + t1197 + t1198;
  t1062 = Sin(var1[5]);
  t1249 = -4.e-6*t700;
  t1247 = 6.5e-11*t618;
  t1253 = t662 + t1249;
  t1259 = 7.e-6*t1253;
  t1262 = t1147 + t867;
  t1266 = 4.e-6*t1262;
  t1273 = -1. + t1247 + t1259 + t1266;
  t1277 = -1. + t1099;
  t1278 = 4.e-6*t1277;
  t1279 = -7.e-6*t700;
  t1280 = -2.8e-11*t618;
  t1283 = t1280 + t700;
  t1285 = 7.e-6*t1283;
  t1288 = t1278 + t1147 + t1279 + t1285;
  t1297 = -1.000000000016*t618;
  t1299 = 1. + t1297;
  t1300 = 7.e-6*t1299;
  t1303 = t857 + t700;
  t1307 = 4.e-6*t1303;
  t1310 = t1300 + t937 + t1249 + t1307;
  t1317 = t1032*t1273;
  t1318 = t1022*t1288;
  t1320 = t1007*t1310;
  t1322 = t1317 + t1318 + t1320;
  t1331 = t987*t1273;
  t1335 = t974*t1288;
  t1338 = t968*t1310;
  t1341 = t1331 + t1335 + t1338;
  t1057 = t1001*t998;
  t1058 = t959*t1035;
  t1059 = t1057 + t1058;
  t999 = -1.*t959*t998;
  t1038 = t1001*t1035;
  t1041 = t999 + t1038;
  t782 = t592*t777;
  t895 = t836*t888;
  t944 = t911*t943;
  t945 = t782 + t895 + t944;
  t1053 = t958*t1041;
  t1065 = -1.*t1059*t1062;
  t1067 = t1053 + t1065;
  t1371 = Cos(var1[3]);
  t1216 = t959*t1188;
  t1217 = t1001*t1202;
  t1223 = t1216 + t1217;
  t1191 = t1001*t1188;
  t1206 = -1.*t959*t1202;
  t1208 = t1191 + t1206;
  t1376 = Sin(var1[3]);
  t1126 = t836*t1118;
  t1159 = t911*t1150;
  t1167 = t592*t1165;
  t1168 = t1126 + t1159 + t1167;
  t1214 = t958*t1208;
  t1233 = -1.*t1223*t1062;
  t1237 = t1214 + t1233;
  t1350 = t959*t1322;
  t1354 = t1001*t1341;
  t1357 = t1350 + t1354;
  t1325 = t1001*t1322;
  t1342 = -1.*t959*t1341;
  t1343 = t1325 + t1342;
  t1274 = t911*t1273;
  t1295 = t836*t1288;
  t1312 = t592*t1310;
  t1315 = t1274 + t1295 + t1312;
  t1344 = t958*t1343;
  t1359 = -1.*t1357*t1062;
  t1361 = t1344 + t1359;
  t1372 = t958*t1059;
  t1373 = t1041*t1062;
  t1374 = t1372 + t1373;
  t1378 = t956*t945;
  t1379 = -1.*t950*t1067;
  t1383 = t1378 + t1379;
  t1389 = t958*t1223;
  t1391 = t1208*t1062;
  t1393 = t1389 + t1391;
  t1396 = t956*t1168;
  t1399 = -1.*t950*t1237;
  t1402 = t1396 + t1399;
  t1412 = t958*t1357;
  t1415 = t1343*t1062;
  t1421 = t1412 + t1415;
  t1423 = t956*t1315;
  t1424 = -1.*t950*t1361;
  t1427 = t1423 + t1424;
  t1173 = t1168*t950;
  t1238 = t956*t1237;
  t1239 = t1173 + t1238;
  t1469 = 7.e-6*t468;
  t1487 = 2.826290000000002e-7*var1[17];
  t1488 = -0.148715*t923;
  t1489 = -2.18904205e-16*t618;
  t1491 = t865 + t1279;
  t1492 = -0.038576*t1491;
  t1494 = -0.80315*t1253;
  t1496 = t937 + t712;
  t1497 = -0.5031510000080001*t1496;
  t1499 = -0.038575000014*t1262;
  t1513 = t1487 + t1488 + t1489 + t1492 + t1494 + t1497 + t1499;
  t1515 = 1.1305160000000008e-12*var1[17];
  t1516 = -1.000000000049*t618;
  t1521 = 1. + t1516;
  t1522 = -0.038576*t1521;
  t1523 = -0.03857500001589017*t618;
  t1524 = t857 + t880;
  t1527 = -0.5031510000080001*t1524;
  t1528 = t1147 + t1279;
  t1529 = -3.367757e-6*t1528;
  t1532 = -0.148715*t868;
  t1536 = -0.80315*t1283;
  t1539 = t1515 + t1522 + t1523 + t1527 + t1529 + t1532 + t1536;
  t1549 = -1.9784030000000015e-12*var1[17];
  t1550 = -0.80315*t1299;
  t1552 = -0.5031510000160505*t618;
  t1553 = t1280 + t880;
  t1564 = -0.038576*t1553;
  t1565 = t937 + t1249;
  t1567 = -3.367757e-6*t1565;
  t1569 = -0.148715*t739;
  t1572 = -0.038575000014*t1303;
  t1575 = t1549 + t1550 + t1552 + t1564 + t1567 + t1569 + t1572;
  t1456 = -1.*t1001;
  t1460 = 1. + t1456;
  t1463 = -0.15121*t1460;
  t1465 = -2.7726089999999997e-12*var1[16];
  t1468 = -0.2812110000084994*t468;
  t1472 = t1469 + t963;
  t1474 = -1.8134809999999998e-6*t1472;
  t1475 = 2.8e-11*t468;
  t1477 = t1475 + t518;
  t1481 = -0.038749000006999997*t1477;
  t1514 = t1032*t1513;
  t1542 = t1022*t1539;
  t1581 = t1007*t1575;
  t1587 = t1465 + t1468 + t1474 + t1481 + t1514 + t1542 + t1581;
  t1601 = 3.9608699999999997e-7*var1[16];
  t1604 = -1.1787626499999999e-16*t468;
  t1605 = t1469 + t1028;
  t1606 = -0.281211000004*t1605;
  t1613 = -1. + t428;
  t1614 = 4.e-6*t1613;
  t1615 = t1614 + t907;
  t1616 = -0.038749000006999997*t1615;
  t1618 = t987*t1513;
  t1619 = t974*t1539;
  t1620 = t968*t1575;
  t1621 = t1601 + t1604 + t1606 + t1616 + t1618 + t1619 + t1620;
  t955 = t945*t950;
  t1070 = t956*t1067;
  t1093 = t955 + t1070;
  t1628 = -0.15121*t959;
  t1629 = t1001*t1587;
  t1632 = -1.*t959*t1621;
  t1635 = t1463 + t1628 + t1629 + t1632;
  t1464 = 0.15121*t959;
  t1590 = t959*t1587;
  t1622 = t1001*t1621;
  t1625 = t1463 + t1464 + t1590 + t1622;
  t1641 = 1.5843479999999999e-12*var1[16];
  t1647 = -0.03874900000889869*t468;
  t1651 = t1475 + t1019;
  t1652 = -0.281211000004*t1651;
  t1654 = t1614 + t973;
  t1657 = -1.8134809999999998e-6*t1654;
  t1658 = t911*t1513;
  t1659 = t836*t1539;
  t1664 = t592*t1575;
  t1665 = t1641 + t1647 + t1652 + t1657 + t1658 + t1659 + t1664;
  t1670 = t958*t1635;
  t1672 = -1.*t1625*t1062;
  t1674 = t1670 + t1672;
  t1626 = t958*t1625;
  t1636 = t1635*t1062;
  t1639 = t1626 + t1636;
  t1667 = t1665*t950;
  t1675 = t956*t1674;
  t1681 = t1667 + t1675;
  t1685 = t956*t1665;
  t1687 = -1.*t950*t1674;
  t1694 = t1685 + t1687;
  t1316 = t1315*t950;
  t1362 = t956*t1361;
  t1365 = t1316 + t1362;
  t1640 = -1.*t1374*t1639;
  t1702 = t1393*t1639;
  t1718 = t1374*t1639;
  t1730 = -1.*t1639*t1421;
  t1744 = -1.*t1393*t1639;
  t1767 = t1639*t1421;
  t1784 = -1.*t945*t1665;
  t1795 = t1168*t1665;
  t1804 = t945*t1665;
  t1817 = -1.*t1665*t1315;
  t1837 = -1.*t1168*t1665;
  t1843 = t1665*t1315;
  t2041 = -1.*t1513*t943;
  t2044 = -1.*t888*t1539;
  t2046 = -1.*t777*t1575;
  t2047 = t2041 + t2044 + t2046;
  t2051 = t1513*t1150;
  t2056 = t1118*t1539;
  t2059 = t1165*t1575;
  t2064 = t2051 + t2056 + t2059;
  t2107 = t1513*t943;
  t2110 = t888*t1539;
  t2113 = t777*t1575;
  t2120 = t2107 + t2110 + t2113;
  t2124 = -1.*t1513*t1273;
  t2125 = -1.*t1539*t1288;
  t2128 = -1.*t1575*t1310;
  t2132 = t2124 + t2125 + t2128;
  t2166 = -1.*t1513*t1150;
  t2171 = -1.*t1118*t1539;
  t2173 = -1.*t1165*t1575;
  t2174 = t2166 + t2171 + t2173;
  t2179 = t1513*t1273;
  t2180 = t1539*t1288;
  t2181 = t1575*t1310;
  t2182 = t2179 + t2180 + t2181;
  p_output1[0]=t1093*var2[0] + t1239*var2[1] + t1365*var2[2];
  p_output1[1]=(t1371*t1374 - 1.*t1376*t1383)*var2[0] + (t1371*t1393 - 1.*t1376*t1402)*var2[1] + (t1371*t1421 - 1.*t1376*t1427)*var2[2];
  p_output1[2]=(t1374*t1376 + t1371*t1383)*var2[0] + (t1376*t1393 + t1371*t1402)*var2[1] + (t1376*t1421 + t1371*t1427)*var2[2];
  p_output1[3]=(t1365*(-1.*t1239*t1681 - 1.*t1402*t1694 + t1744) + t1239*(t1365*t1681 + t1427*t1694 + t1767))*var2[0] + (t1365*(t1093*t1681 + t1383*t1694 + t1718) + t1093*(-1.*t1365*t1681 - 1.*t1427*t1694 + t1730))*var2[1] + (t1239*(t1640 - 1.*t1093*t1681 - 1.*t1383*t1694) + t1093*(t1239*t1681 + t1402*t1694 + t1702))*var2[2];
  p_output1[4]=(t1421*(-1.*t1237*t1674 + t1744 + t1837) + t1393*(t1361*t1674 + t1767 + t1843))*var2[0] + (t1421*(t1067*t1674 + t1718 + t1804) + t1374*(-1.*t1361*t1674 + t1730 + t1817))*var2[1] + (t1393*(t1640 - 1.*t1067*t1674 + t1784) + t1374*(t1237*t1674 + t1702 + t1795))*var2[2];
  p_output1[5]=(t1315*(-1.*t1223*t1625 - 1.*t1208*t1635 + t1837) + t1168*(t1357*t1625 + t1343*t1635 + t1843))*var2[0] + (t1315*(t1059*t1625 + t1041*t1635 + t1804) + (-1.*t1357*t1625 - 1.*t1343*t1635 + t1817)*t945)*var2[1] + (t1168*(-1.*t1059*t1625 - 1.*t1041*t1635 + t1784) + (t1223*t1625 + t1208*t1635 + t1795)*t945)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t1035 + t1315*(-1.*t1188*t1587 - 1.*t1202*t1621 + t1837) + t1168*(t1322*t1587 + t1341*t1621 + t1843) + 0.15121*t998)*var2[0] + (-0.15121*t1188 + 0.15121*t1202 + (-1.*t1322*t1587 - 1.*t1341*t1621 + t1817)*t945 + t1315*(t1035*t1587 + t1804 + t1621*t998))*var2[1] + (-0.15121*t1322 + 0.15121*t1341 + (t1188*t1587 + t1202*t1621 + t1795)*t945 + t1168*(-1.*t1035*t1587 + t1784 - 1.*t1621*t998))*var2[2];
  p_output1[16]=(-1.*t1273*t2174 - 1.*t1150*t2182 + 4.e-6*(-1.*t1288*t2174 - 1.*t1118*t2182) + 7.e-6*(t1310*t2174 + t1165*t2182) - 0.038749*t777 + 0.281211*t888 + 1.e-6*(t1249 + t662 + 7.e-6*t923))*var2[0] + (0.281211*t1118 - 0.038749*t1165 - 1.*t1273*t2120 + 7.e-6*(t1310*t2120 + t2132*t777) + 1.e-6*(4.e-6*(-1. + t1247) + t1279 + t865) + 4.e-6*(-1.*t1288*t2120 - 1.*t2132*t888) - 1.*t2132*t943)*var2[1] + (0.281211*t1288 - 0.038749*t1310 - 1.*t1150*t2047 + 7.e-6*(t1165*t2047 + t2064*t777) + 4.e-6*(-1.*t1118*t2047 - 1.*t2064*t888) + 1.e-6*(1. - 7.e-6*t1253 + 4.e-6*t1491 + t916) - 1.*t2064*t943)*var2[2];
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

#include "fRrFoot_vec_ParallelStance.hh"

namespace ParallelStance
{

void fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
