/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:15:03 GMT+01:00
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
  double t848;
  double t859;
  double t864;
  double t880;
  double t200;
  double t882;
  double t922;
  double t929;
  double t753;
  double t908;
  double t959;
  double t867;
  double t872;
  double t884;
  double t895;
  double t909;
  double t913;
  double t914;
  double t917;
  double t1099;
  double t936;
  double t942;
  double t943;
  double t947;
  double t953;
  double t954;
  double t1083;
  double t1092;
  double t1094;
  double t1103;
  double t1104;
  double t1107;
  double t1115;
  double t1116;
  double t1117;
  double t1119;
  double t1125;
  double t409;
  double t617;
  double t1142;
  double t1175;
  double t1149;
  double t1154;
  double t1157;
  double t1160;
  double t1161;
  double t1162;
  double t1166;
  double t1167;
  double t1171;
  double t1137;
  double t1179;
  double t1182;
  double t1183;
  double t1184;
  double t1185;
  double t1192;
  double t1195;
  double t1199;
  double t1201;
  double t1207;
  double t1101;
  double t1102;
  double t826;
  double t830;
  double t930;
  double t934;
  double t1128;
  double t1133;
  double t1136;
  double t1240;
  double t1241;
  double t1242;
  double t1243;
  double t1245;
  double t1247;
  double t1248;
  double t1250;
  double t1256;
  double t1257;
  double t1258;
  double t1264;
  double t1265;
  double t1266;
  double t1268;
  double t1272;
  double t1273;
  double t1274;
  double t1275;
  double t1225;
  double t1295;
  double t1296;
  double t1298;
  double t1301;
  double t1304;
  double t1305;
  double t1309;
  double t1310;
  double t1317;
  double t1320;
  double t1322;
  double t1323;
  double t1329;
  double t1330;
  double t1332;
  double t1333;
  double t1216;
  double t1217;
  double t1221;
  double t1173;
  double t1208;
  double t1210;
  double t918;
  double t1095;
  double t1126;
  double t1127;
  double t1211;
  double t1228;
  double t1231;
  double t1354;
  double t1283;
  double t1284;
  double t1285;
  double t1270;
  double t1278;
  double t1280;
  double t1372;
  double t1244;
  double t1251;
  double t1261;
  double t1262;
  double t1281;
  double t1286;
  double t1289;
  double t1340;
  double t1342;
  double t1343;
  double t1327;
  double t1334;
  double t1338;
  double t1299;
  double t1308;
  double t1311;
  double t1314;
  double t1339;
  double t1346;
  double t1348;
  double t1360;
  double t1366;
  double t1367;
  double t1373;
  double t1375;
  double t1376;
  double t1405;
  double t1406;
  double t1407;
  double t1409;
  double t1415;
  double t1416;
  double t1445;
  double t1446;
  double t1448;
  double t1450;
  double t1451;
  double t1452;
  double t1263;
  double t1290;
  double t1292;
  double t1503;
  double t1508;
  double t1509;
  double t1512;
  double t1513;
  double t1515;
  double t1516;
  double t1518;
  double t1520;
  double t1521;
  double t1522;
  double t1525;
  double t1527;
  double t1528;
  double t1530;
  double t1531;
  double t1533;
  double t1537;
  double t1539;
  double t1542;
  double t1544;
  double t1549;
  double t1552;
  double t1556;
  double t1557;
  double t1559;
  double t1560;
  double t1561;
  double t1562;
  double t1564;
  double t1567;
  double t1568;
  double t1485;
  double t1486;
  double t1489;
  double t1491;
  double t1497;
  double t1499;
  double t1500;
  double t1502;
  double t1505;
  double t1507;
  double t1523;
  double t1550;
  double t1569;
  double t1571;
  double t1573;
  double t1577;
  double t1579;
  double t1581;
  double t1582;
  double t1583;
  double t1585;
  double t1589;
  double t1590;
  double t1591;
  double t1593;
  double t1129;
  double t1232;
  double t1234;
  double t1603;
  double t1604;
  double t1606;
  double t1607;
  double t1487;
  double t1572;
  double t1598;
  double t1599;
  double t1613;
  double t1614;
  double t1615;
  double t1616;
  double t1617;
  double t1618;
  double t1619;
  double t1621;
  double t1623;
  double t1624;
  double t1627;
  double t1628;
  double t1629;
  double t1600;
  double t1610;
  double t1611;
  double t1625;
  double t1631;
  double t1632;
  double t1634;
  double t1635;
  double t1636;
  double t1316;
  double t1349;
  double t1350;
  double t1612;
  double t1642;
  double t1655;
  double t1660;
  double t1668;
  double t1678;
  double t1694;
  double t1700;
  double t1715;
  double t1719;
  double t1739;
  double t1744;
  double t1892;
  double t1894;
  double t1895;
  double t1896;
  double t1902;
  double t1905;
  double t1906;
  double t1908;
  double t1932;
  double t1933;
  double t1936;
  double t1940;
  double t1945;
  double t1949;
  double t1953;
  double t1957;
  double t1884;
  double t1992;
  double t1994;
  double t1996;
  double t1997;
  double t2001;
  double t2006;
  double t2008;
  double t2009;
  t848 = Cos(var1[14]);
  t859 = -1.*t848;
  t864 = 1. + t859;
  t880 = Sin(var1[14]);
  t200 = Cos(var1[13]);
  t882 = -7.e-6*t880;
  t922 = -1.*t200;
  t929 = 1. + t922;
  t753 = Sin(var1[13]);
  t908 = -7.e-6*t864;
  t959 = -1.*t880;
  t867 = -6.5e-11*t864;
  t872 = 4.e-6*t864;
  t884 = t872 + t882;
  t895 = 4.e-6*t884;
  t909 = -4.e-6*t880;
  t913 = t908 + t909;
  t914 = -7.e-6*t913;
  t917 = 1. + t867 + t895 + t914;
  t1099 = 2.8e-11*t929;
  t936 = 1.000000000049*t864;
  t942 = -1. + t936;
  t943 = 4.e-6*t942;
  t947 = -1. + t848;
  t953 = 4.e-6*t947;
  t954 = 2.8e-11*t864;
  t1083 = t954 + t959;
  t1092 = -7.e-6*t1083;
  t1094 = t943 + t953 + t1092 + t882;
  t1103 = -1.000000000016*t864;
  t1104 = 1. + t1103;
  t1107 = -7.e-6*t1104;
  t1115 = -2.8e-11*t864;
  t1116 = t1115 + t959;
  t1117 = 4.e-6*t1116;
  t1119 = 4.e-6*t880;
  t1125 = t1107 + t908 + t1117 + t1119;
  t409 = -1. + t200;
  t617 = 4.e-6*t409;
  t1142 = -7.e-6*t929;
  t1175 = Sin(var1[12]);
  t1149 = 4.e-6*t753;
  t1154 = t1142 + t1149;
  t1157 = t1154*t917;
  t1160 = t1099 + t753;
  t1161 = t1160*t1094;
  t1162 = -1.000000000016*t929;
  t1166 = 1. + t1162;
  t1167 = t1166*t1125;
  t1171 = t1157 + t1161 + t1167;
  t1137 = Cos(var1[12]);
  t1179 = -6.5e-11*t929;
  t1182 = 1. + t1179;
  t1183 = t1182*t917;
  t1184 = 7.e-6*t753;
  t1185 = t617 + t1184;
  t1192 = t1185*t1094;
  t1195 = -4.e-6*t753;
  t1199 = t1142 + t1195;
  t1201 = t1199*t1125;
  t1207 = t1183 + t1192 + t1201;
  t1101 = -1.*t753;
  t1102 = t1099 + t1101;
  t826 = -7.e-6*t753;
  t830 = t617 + t826;
  t930 = -1.000000000049*t929;
  t934 = 1. + t930;
  t1128 = Sin(var1[4]);
  t1133 = Cos(var1[4]);
  t1136 = Cos(var1[5]);
  t1240 = 1.000000000016*t864;
  t1241 = t908 + t1119;
  t1242 = -7.e-6*t1241;
  t1243 = -1. + t1240 + t1242;
  t1245 = 1. + t867;
  t1247 = -7.e-6*t1245;
  t1248 = 7.e-6*t864;
  t1250 = t1247 + t1248 + t1119;
  t1256 = t953 + t882;
  t1257 = -7.e-6*t1256;
  t1258 = t1115 + t1257 + t880;
  t1264 = t1199*t1243;
  t1265 = t1182*t1250;
  t1266 = t1185*t1258;
  t1268 = t1264 + t1265 + t1266;
  t1272 = t1166*t1243;
  t1273 = t1154*t1250;
  t1274 = t1160*t1258;
  t1275 = t1272 + t1273 + t1274;
  t1225 = Sin(var1[5]);
  t1295 = -1.000000000049*t864;
  t1296 = 4.e-6*t1256;
  t1298 = 1. + t1295 + t1296;
  t1301 = 4.e-6*t1245;
  t1304 = 7.e-6*t880;
  t1305 = t1301 + t953 + t1304;
  t1309 = 4.e-6*t1241;
  t1310 = t954 + t1309 + t880;
  t1317 = t1160*t1298;
  t1320 = t1154*t1305;
  t1322 = t1166*t1310;
  t1323 = t1317 + t1320 + t1322;
  t1329 = t1185*t1298;
  t1330 = t1182*t1305;
  t1332 = t1199*t1310;
  t1333 = t1329 + t1330 + t1332;
  t1216 = t1175*t1171;
  t1217 = t1137*t1207;
  t1221 = t1216 + t1217;
  t1173 = t1137*t1171;
  t1208 = -1.*t1175*t1207;
  t1210 = t1173 + t1208;
  t918 = t830*t917;
  t1095 = t934*t1094;
  t1126 = t1102*t1125;
  t1127 = t918 + t1095 + t1126;
  t1211 = t1136*t1210;
  t1228 = -1.*t1221*t1225;
  t1231 = t1211 + t1228;
  t1354 = Cos(var1[3]);
  t1283 = t1137*t1268;
  t1284 = t1175*t1275;
  t1285 = t1283 + t1284;
  t1270 = -1.*t1175*t1268;
  t1278 = t1137*t1275;
  t1280 = t1270 + t1278;
  t1372 = Sin(var1[3]);
  t1244 = t1102*t1243;
  t1251 = t830*t1250;
  t1261 = t934*t1258;
  t1262 = t1244 + t1251 + t1261;
  t1281 = t1136*t1280;
  t1286 = -1.*t1285*t1225;
  t1289 = t1281 + t1286;
  t1340 = t1175*t1323;
  t1342 = t1137*t1333;
  t1343 = t1340 + t1342;
  t1327 = t1137*t1323;
  t1334 = -1.*t1175*t1333;
  t1338 = t1327 + t1334;
  t1299 = t934*t1298;
  t1308 = t830*t1305;
  t1311 = t1102*t1310;
  t1314 = t1299 + t1308 + t1311;
  t1339 = t1136*t1338;
  t1346 = -1.*t1343*t1225;
  t1348 = t1339 + t1346;
  t1360 = t1136*t1221;
  t1366 = t1210*t1225;
  t1367 = t1360 + t1366;
  t1373 = t1133*t1127;
  t1375 = -1.*t1128*t1231;
  t1376 = t1373 + t1375;
  t1405 = t1136*t1285;
  t1406 = t1280*t1225;
  t1407 = t1405 + t1406;
  t1409 = t1133*t1262;
  t1415 = -1.*t1128*t1289;
  t1416 = t1409 + t1415;
  t1445 = t1136*t1343;
  t1446 = t1338*t1225;
  t1448 = t1445 + t1446;
  t1450 = t1133*t1314;
  t1451 = -1.*t1128*t1348;
  t1452 = t1450 + t1451;
  t1263 = t1262*t1128;
  t1290 = t1133*t1289;
  t1292 = t1263 + t1290;
  t1503 = 7.e-6*t929;
  t1508 = -2.598649999999999e-7*var1[14];
  t1509 = 0.148705*t1245;
  t1512 = -2.3905277499999995e-16*t864;
  t1513 = -0.038922999986*t884;
  t1515 = -0.80315*t913;
  t1516 = t1248 + t1119;
  t1518 = -0.503149000008*t1516;
  t1520 = t953 + t1304;
  t1521 = -0.038924*t1520;
  t1522 = t1508 + t1509 + t1512 + t1513 + t1515 + t1518 + t1521;
  t1525 = 1.0394599999999997e-12*var1[14];
  t1527 = 1. + t1295;
  t1528 = -0.038924*t1527;
  t1530 = -0.03892299998790722*t864;
  t1531 = -0.80315*t1083;
  t1533 = 0.148705*t1256;
  t1537 = t872 + t1304;
  t1539 = -3.6777349999999994e-6*t1537;
  t1542 = t1115 + t880;
  t1544 = -0.503149000008*t1542;
  t1549 = t1525 + t1528 + t1530 + t1531 + t1533 + t1539 + t1544;
  t1552 = 1.8190549999999993e-12*var1[14];
  t1556 = -0.80315*t1104;
  t1557 = -0.5031490000160505*t864;
  t1559 = -0.038922999986*t1116;
  t1560 = t1248 + t909;
  t1561 = -3.6777349999999994e-6*t1560;
  t1562 = 0.148705*t1241;
  t1564 = t954 + t880;
  t1567 = -0.038924*t1564;
  t1568 = t1552 + t1556 + t1557 + t1559 + t1561 + t1562 + t1567;
  t1485 = -1.*t1137;
  t1486 = 1. + t1485;
  t1489 = 0.15121*t1175;
  t1491 = 1.0248489999999998e-12*var1[13];
  t1497 = -0.28120900000849935*t929;
  t1499 = -2.8e-11*t929;
  t1500 = t1499 + t1101;
  t1502 = -0.038748999993*t1500;
  t1505 = t1503 + t1195;
  t1507 = -2.123459e-6*t1505;
  t1523 = t1154*t1522;
  t1550 = t1160*t1549;
  t1569 = t1166*t1568;
  t1571 = t1491 + t1497 + t1502 + t1507 + t1523 + t1550 + t1569;
  t1573 = -1.4640699999999997e-7*var1[13];
  t1577 = -1.38024835e-16*t929;
  t1579 = 4.e-6*t929;
  t1581 = t1579 + t826;
  t1582 = -0.038748999993*t1581;
  t1583 = t1503 + t1149;
  t1585 = -0.281209000004*t1583;
  t1589 = t1182*t1522;
  t1590 = t1185*t1549;
  t1591 = t1199*t1568;
  t1593 = t1573 + t1577 + t1582 + t1585 + t1589 + t1590 + t1591;
  t1129 = t1127*t1128;
  t1232 = t1133*t1231;
  t1234 = t1129 + t1232;
  t1603 = -0.15121*t1486;
  t1604 = t1137*t1571;
  t1606 = -1.*t1175*t1593;
  t1607 = t1603 + t1489 + t1604 + t1606;
  t1487 = 0.15121*t1486;
  t1572 = t1175*t1571;
  t1598 = t1137*t1593;
  t1599 = t1487 + t1489 + t1572 + t1598;
  t1613 = 5.856279999999999e-13*var1[13];
  t1614 = -0.0387489999948987*t929;
  t1615 = t1579 + t1184;
  t1616 = -2.123459e-6*t1615;
  t1617 = t1499 + t753;
  t1618 = -0.281209000004*t1617;
  t1619 = t830*t1522;
  t1621 = t934*t1549;
  t1623 = t1102*t1568;
  t1624 = t1613 + t1614 + t1616 + t1618 + t1619 + t1621 + t1623;
  t1627 = t1136*t1607;
  t1628 = -1.*t1599*t1225;
  t1629 = t1627 + t1628;
  t1600 = t1136*t1599;
  t1610 = t1607*t1225;
  t1611 = t1600 + t1610;
  t1625 = t1624*t1128;
  t1631 = t1133*t1629;
  t1632 = t1625 + t1631;
  t1634 = t1133*t1624;
  t1635 = -1.*t1128*t1629;
  t1636 = t1634 + t1635;
  t1316 = t1314*t1128;
  t1349 = t1133*t1348;
  t1350 = t1316 + t1349;
  t1612 = -1.*t1367*t1611;
  t1642 = t1407*t1611;
  t1655 = t1367*t1611;
  t1660 = -1.*t1448*t1611;
  t1668 = -1.*t1407*t1611;
  t1678 = t1448*t1611;
  t1694 = -1.*t1127*t1624;
  t1700 = t1262*t1624;
  t1715 = t1127*t1624;
  t1719 = -1.*t1314*t1624;
  t1739 = -1.*t1262*t1624;
  t1744 = t1314*t1624;
  t1892 = t1522*t1250;
  t1894 = t1258*t1549;
  t1895 = t1243*t1568;
  t1896 = t1892 + t1894 + t1895;
  t1902 = -1.*t917*t1522;
  t1905 = -1.*t1094*t1549;
  t1906 = -1.*t1125*t1568;
  t1908 = t1902 + t1905 + t1906;
  t1932 = t917*t1522;
  t1933 = t1094*t1549;
  t1936 = t1125*t1568;
  t1940 = t1932 + t1933 + t1936;
  t1945 = -1.*t1522*t1305;
  t1949 = -1.*t1298*t1549;
  t1953 = -1.*t1310*t1568;
  t1957 = t1945 + t1949 + t1953;
  t1884 = 6.5e-11*t864;
  t1992 = -1.*t1522*t1250;
  t1994 = -1.*t1258*t1549;
  t1996 = -1.*t1243*t1568;
  t1997 = t1992 + t1994 + t1996;
  t2001 = t1522*t1305;
  t2006 = t1298*t1549;
  t2008 = t1310*t1568;
  t2009 = t2001 + t2006 + t2008;
  p_output1[0]=t1292*var2[0] + t1350*var2[1] + t1234*var2[2];
  p_output1[1]=(t1354*t1407 - 1.*t1372*t1416)*var2[0] + (t1354*t1448 - 1.*t1372*t1452)*var2[1] + (t1354*t1367 - 1.*t1372*t1376)*var2[2];
  p_output1[2]=(t1372*t1407 + t1354*t1416)*var2[0] + (t1372*t1448 + t1354*t1452)*var2[1] + (t1367*t1372 + t1354*t1376)*var2[2];
  p_output1[3]=(t1350*(t1234*t1632 + t1376*t1636 + t1655) + t1234*(-1.*t1350*t1632 - 1.*t1452*t1636 + t1660))*var2[0] + (t1292*(t1612 - 1.*t1234*t1632 - 1.*t1376*t1636) + t1234*(t1292*t1632 + t1416*t1636 + t1642))*var2[1] + (t1350*(-1.*t1292*t1632 - 1.*t1416*t1636 + t1668) + t1292*(t1350*t1632 + t1452*t1636 + t1678))*var2[2];
  p_output1[4]=(t1448*(t1231*t1629 + t1655 + t1715) + t1367*(-1.*t1348*t1629 + t1660 + t1719))*var2[0] + (t1407*(t1612 - 1.*t1231*t1629 + t1694) + t1367*(t1289*t1629 + t1642 + t1700))*var2[1] + (t1448*(-1.*t1289*t1629 + t1668 + t1739) + t1407*(t1348*t1629 + t1678 + t1744))*var2[2];
  p_output1[5]=(t1314*(t1221*t1599 + t1210*t1607 + t1715) + t1127*(-1.*t1343*t1599 - 1.*t1338*t1607 + t1719))*var2[0] + (t1262*(-1.*t1221*t1599 - 1.*t1210*t1607 + t1694) + t1127*(t1285*t1599 + t1280*t1607 + t1700))*var2[1] + (t1314*(-1.*t1285*t1599 - 1.*t1280*t1607 + t1739) + t1262*(t1343*t1599 + t1338*t1607 + t1744))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.15121*t1268 + 0.15121*t1275 + t1314*(t1171*t1571 + t1207*t1593 + t1715) + t1127*(-1.*t1323*t1571 - 1.*t1333*t1593 + t1719))*var2[0] + (0.15121*t1323 + 0.15121*t1333 + t1262*(-1.*t1171*t1571 - 1.*t1207*t1593 + t1694) + t1127*(t1275*t1571 + t1268*t1593 + t1700))*var2[1] + (0.15121*t1171 + 0.15121*t1207 + t1314*(-1.*t1275*t1571 - 1.*t1268*t1593 + t1739) + t1262*(t1323*t1571 + t1333*t1593 + t1744))*var2[2];
  p_output1[13]=(0.038749*t1243 - 0.281209*t1258 + t1305*t1940 + 4.e-6*(-1.*t1298*t1940 - 1.*t1094*t1957) - 7.e-6*(t1310*t1940 + t1125*t1957) + 1.e-6*(7.e-6*t1245 + t908 + t909) + t1957*t917)*var2[0] + (-0.281209*t1298 + 0.038749*t1310 + t1250*t1908 - 7.e-6*(t1125*t1896 + t1243*t1908) + 4.e-6*(-1.*t1094*t1896 - 1.*t1258*t1908) + 1.e-6*(4.e-6*(-1. + t1884) + t872 + t882) + t1896*t917)*var2[1] + (-0.281209*t1094 + 0.038749*t1125 + t1305*t1997 + t1250*t2009 - 7.e-6*(t1310*t1997 + t1243*t2009) + 4.e-6*(-1.*t1298*t1997 - 1.*t1258*t2009) + 1.e-6*(-1. + 4.e-6*t1520 + t1884 + 7.e-6*t913))*var2[2];
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
