/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:30:26 GMT+01:00
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
  double t740;
  double t741;
  double t742;
  double t424;
  double t493;
  double t646;
  double t763;
  double t723;
  double t764;
  double t748;
  double t762;
  double t779;
  double t795;
  double t796;
  double t816;
  double t802;
  double t804;
  double t805;
  double t806;
  double t808;
  double t812;
  double t813;
  double t819;
  double t974;
  double t982;
  double t984;
  double t985;
  double t722;
  double t1019;
  double t1057;
  double t1021;
  double t1023;
  double t1027;
  double t1029;
  double t1037;
  double t1039;
  double t1040;
  double t1048;
  double t1051;
  double t1052;
  double t1017;
  double t1062;
  double t1063;
  double t1065;
  double t1066;
  double t1067;
  double t1068;
  double t1069;
  double t1070;
  double t1075;
  double t1076;
  double t799;
  double t800;
  double t817;
  double t818;
  double t731;
  double t1004;
  double t1010;
  double t1011;
  double t1131;
  double t1137;
  double t1139;
  double t1159;
  double t1161;
  double t1162;
  double t1167;
  double t1171;
  double t1172;
  double t1184;
  double t1185;
  double t1186;
  double t1187;
  double t1191;
  double t1194;
  double t1196;
  double t1199;
  double t1109;
  double t1231;
  double t1228;
  double t1233;
  double t1234;
  double t1235;
  double t1240;
  double t1241;
  double t1246;
  double t1248;
  double t1252;
  double t1254;
  double t1265;
  double t1266;
  double t1267;
  double t1275;
  double t1277;
  double t1278;
  double t1281;
  double t1282;
  double t1286;
  double t1294;
  double t1296;
  double t1297;
  double t1298;
  double t1301;
  double t1303;
  double t1304;
  double t1306;
  double t1091;
  double t1096;
  double t1099;
  double t1056;
  double t1080;
  double t1082;
  double t797;
  double t815;
  double t988;
  double t1000;
  double t1088;
  double t1110;
  double t1114;
  double t1339;
  double t1209;
  double t1210;
  double t1211;
  double t1190;
  double t1203;
  double t1207;
  double t1358;
  double t1143;
  double t1170;
  double t1174;
  double t1175;
  double t1208;
  double t1212;
  double t1213;
  double t1312;
  double t1318;
  double t1319;
  double t1299;
  double t1307;
  double t1309;
  double t1242;
  double t1268;
  double t1288;
  double t1290;
  double t1311;
  double t1320;
  double t1321;
  double t1348;
  double t1355;
  double t1356;
  double t1360;
  double t1365;
  double t1366;
  double t1400;
  double t1402;
  double t1404;
  double t1407;
  double t1409;
  double t1415;
  double t1446;
  double t1449;
  double t1450;
  double t1452;
  double t1454;
  double t1456;
  double t1182;
  double t1214;
  double t1219;
  double t1513;
  double t1527;
  double t1535;
  double t1538;
  double t1541;
  double t1542;
  double t1544;
  double t1545;
  double t1547;
  double t1549;
  double t1554;
  double t1566;
  double t1568;
  double t1575;
  double t1581;
  double t1582;
  double t1585;
  double t1587;
  double t1589;
  double t1590;
  double t1591;
  double t1592;
  double t1593;
  double t1595;
  double t1596;
  double t1598;
  double t1600;
  double t1601;
  double t1602;
  double t1603;
  double t1604;
  double t1605;
  double t1608;
  double t1488;
  double t1489;
  double t1491;
  double t1506;
  double t1511;
  double t1515;
  double t1520;
  double t1521;
  double t1524;
  double t1525;
  double t1559;
  double t1594;
  double t1610;
  double t1612;
  double t1618;
  double t1619;
  double t1621;
  double t1622;
  double t1623;
  double t1628;
  double t1632;
  double t1635;
  double t1638;
  double t1639;
  double t1641;
  double t1642;
  double t1007;
  double t1119;
  double t1122;
  double t1650;
  double t1655;
  double t1657;
  double t1658;
  double t1492;
  double t1615;
  double t1643;
  double t1648;
  double t1667;
  double t1669;
  double t1670;
  double t1675;
  double t1677;
  double t1679;
  double t1680;
  double t1682;
  double t1684;
  double t1686;
  double t1694;
  double t1695;
  double t1698;
  double t1649;
  double t1661;
  double t1662;
  double t1689;
  double t1705;
  double t1707;
  double t1713;
  double t1714;
  double t1716;
  double t1291;
  double t1325;
  double t1328;
  double t1664;
  double t1723;
  double t1740;
  double t1748;
  double t1761;
  double t1779;
  double t1793;
  double t1805;
  double t1815;
  double t1820;
  double t1836;
  double t1846;
  double t2087;
  double t2088;
  double t2092;
  double t2093;
  double t2097;
  double t2098;
  double t2099;
  double t2101;
  double t2142;
  double t2144;
  double t2145;
  double t2149;
  double t2152;
  double t2155;
  double t2156;
  double t2157;
  double t2190;
  double t2192;
  double t2193;
  double t2194;
  double t2196;
  double t2197;
  double t2198;
  double t2199;
  t740 = Cos(var1[17]);
  t741 = -1.*t740;
  t742 = 1. + t741;
  t424 = Cos(var1[16]);
  t493 = -1.*t424;
  t646 = 1. + t493;
  t763 = Sin(var1[17]);
  t723 = Sin(var1[16]);
  t764 = 4.e-6*t763;
  t748 = 1.000000000016*t742;
  t762 = -7.e-6*t742;
  t779 = t762 + t764;
  t795 = -7.e-6*t779;
  t796 = -1. + t748 + t795;
  t816 = 4.e-6*t646;
  t802 = 2.8e-11*t742;
  t804 = 4.e-6*t742;
  t805 = 7.e-6*t763;
  t806 = t804 + t805;
  t808 = -7.e-6*t806;
  t812 = -1.*t763;
  t813 = t802 + t808 + t812;
  t819 = -6.5e-11*t742;
  t974 = 1. + t819;
  t982 = -7.e-6*t974;
  t984 = 7.e-6*t742;
  t985 = t982 + t984 + t764;
  t722 = -2.8e-11*t646;
  t1019 = -7.e-6*t646;
  t1057 = Cos(var1[15]);
  t1021 = -4.e-6*t723;
  t1023 = t1019 + t1021;
  t1027 = t1023*t796;
  t1029 = -7.e-6*t723;
  t1037 = t816 + t1029;
  t1039 = t1037*t813;
  t1040 = -6.5e-11*t646;
  t1048 = 1. + t1040;
  t1051 = t1048*t985;
  t1052 = t1027 + t1039 + t1051;
  t1017 = Sin(var1[15]);
  t1062 = -1.000000000016*t646;
  t1063 = 1. + t1062;
  t1065 = t1063*t796;
  t1066 = -1.*t723;
  t1067 = t722 + t1066;
  t1068 = t1067*t813;
  t1069 = 4.e-6*t723;
  t1070 = t1019 + t1069;
  t1075 = t1070*t985;
  t1076 = t1065 + t1068 + t1075;
  t799 = -1.000000000049*t646;
  t800 = 1. + t799;
  t817 = 7.e-6*t723;
  t818 = t816 + t817;
  t731 = t722 + t723;
  t1004 = Sin(var1[4]);
  t1010 = Cos(var1[4]);
  t1011 = Cos(var1[5]);
  t1131 = 1.000000000049*t742;
  t1137 = 4.e-6*t806;
  t1139 = -1. + t1131 + t1137;
  t1159 = 4.e-6*t974;
  t1161 = -1. + t740;
  t1162 = 4.e-6*t1161;
  t1167 = t1159 + t1162 + t805;
  t1171 = 4.e-6*t779;
  t1172 = t802 + t1171 + t763;
  t1184 = t1067*t1139;
  t1185 = t1070*t1167;
  t1186 = t1063*t1172;
  t1187 = t1184 + t1185 + t1186;
  t1191 = t1037*t1139;
  t1194 = t1048*t1167;
  t1196 = t1023*t1172;
  t1199 = t1191 + t1194 + t1196;
  t1109 = Sin(var1[5]);
  t1231 = -4.e-6*t763;
  t1228 = 6.5e-11*t742;
  t1233 = t762 + t1231;
  t1234 = 7.e-6*t1233;
  t1235 = t1162 + t805;
  t1240 = 4.e-6*t1235;
  t1241 = -1. + t1228 + t1234 + t1240;
  t1246 = -1. + t1131;
  t1248 = 4.e-6*t1246;
  t1252 = -7.e-6*t763;
  t1254 = -2.8e-11*t742;
  t1265 = t1254 + t763;
  t1266 = 7.e-6*t1265;
  t1267 = t1248 + t1162 + t1252 + t1266;
  t1275 = -1.000000000016*t742;
  t1277 = 1. + t1275;
  t1278 = 7.e-6*t1277;
  t1281 = t802 + t763;
  t1282 = 4.e-6*t1281;
  t1286 = t1278 + t984 + t1231 + t1282;
  t1294 = t1070*t1241;
  t1296 = t1067*t1267;
  t1297 = t1063*t1286;
  t1298 = t1294 + t1296 + t1297;
  t1301 = t1048*t1241;
  t1303 = t1037*t1267;
  t1304 = t1023*t1286;
  t1306 = t1301 + t1303 + t1304;
  t1091 = t1057*t1052;
  t1096 = t1017*t1076;
  t1099 = t1091 + t1096;
  t1056 = -1.*t1017*t1052;
  t1080 = t1057*t1076;
  t1082 = t1056 + t1080;
  t797 = t731*t796;
  t815 = t800*t813;
  t988 = t818*t985;
  t1000 = t797 + t815 + t988;
  t1088 = t1011*t1082;
  t1110 = -1.*t1099*t1109;
  t1114 = t1088 + t1110;
  t1339 = Cos(var1[3]);
  t1209 = t1017*t1187;
  t1210 = t1057*t1199;
  t1211 = t1209 + t1210;
  t1190 = t1057*t1187;
  t1203 = -1.*t1017*t1199;
  t1207 = t1190 + t1203;
  t1358 = Sin(var1[3]);
  t1143 = t800*t1139;
  t1170 = t818*t1167;
  t1174 = t731*t1172;
  t1175 = t1143 + t1170 + t1174;
  t1208 = t1011*t1207;
  t1212 = -1.*t1211*t1109;
  t1213 = t1208 + t1212;
  t1312 = t1017*t1298;
  t1318 = t1057*t1306;
  t1319 = t1312 + t1318;
  t1299 = t1057*t1298;
  t1307 = -1.*t1017*t1306;
  t1309 = t1299 + t1307;
  t1242 = t818*t1241;
  t1268 = t800*t1267;
  t1288 = t731*t1286;
  t1290 = t1242 + t1268 + t1288;
  t1311 = t1011*t1309;
  t1320 = -1.*t1319*t1109;
  t1321 = t1311 + t1320;
  t1348 = t1011*t1099;
  t1355 = t1082*t1109;
  t1356 = t1348 + t1355;
  t1360 = t1010*t1000;
  t1365 = -1.*t1004*t1114;
  t1366 = t1360 + t1365;
  t1400 = t1011*t1211;
  t1402 = t1207*t1109;
  t1404 = t1400 + t1402;
  t1407 = t1010*t1175;
  t1409 = -1.*t1004*t1213;
  t1415 = t1407 + t1409;
  t1446 = t1011*t1319;
  t1449 = t1309*t1109;
  t1450 = t1446 + t1449;
  t1452 = t1010*t1290;
  t1454 = -1.*t1004*t1321;
  t1456 = t1452 + t1454;
  t1182 = t1175*t1004;
  t1214 = t1010*t1213;
  t1219 = t1182 + t1214;
  t1513 = 7.e-6*t646;
  t1527 = 2.826290000000002e-7*var1[17];
  t1535 = -0.148715*t974;
  t1538 = -2.18904205e-16*t742;
  t1541 = t804 + t1252;
  t1542 = -0.038576*t1541;
  t1544 = -0.80315*t1233;
  t1545 = t984 + t764;
  t1547 = -0.5031510000080001*t1545;
  t1549 = -0.038575000014*t1235;
  t1554 = t1527 + t1535 + t1538 + t1542 + t1544 + t1547 + t1549;
  t1566 = 1.1305160000000008e-12*var1[17];
  t1568 = -1.000000000049*t742;
  t1575 = 1. + t1568;
  t1581 = -0.038576*t1575;
  t1582 = -0.03857500001589017*t742;
  t1585 = t802 + t812;
  t1587 = -0.5031510000080001*t1585;
  t1589 = t1162 + t1252;
  t1590 = -3.367757e-6*t1589;
  t1591 = -0.148715*t806;
  t1592 = -0.80315*t1265;
  t1593 = t1566 + t1581 + t1582 + t1587 + t1590 + t1591 + t1592;
  t1595 = -1.9784030000000015e-12*var1[17];
  t1596 = -0.80315*t1277;
  t1598 = -0.5031510000160505*t742;
  t1600 = t1254 + t812;
  t1601 = -0.038576*t1600;
  t1602 = t984 + t1231;
  t1603 = -3.367757e-6*t1602;
  t1604 = -0.148715*t779;
  t1605 = -0.038575000014*t1281;
  t1608 = t1595 + t1596 + t1598 + t1601 + t1603 + t1604 + t1605;
  t1488 = -1.*t1057;
  t1489 = 1. + t1488;
  t1491 = -0.15121*t1489;
  t1506 = -2.7726089999999997e-12*var1[16];
  t1511 = -0.2812110000084994*t646;
  t1515 = t1513 + t1021;
  t1520 = -1.8134809999999998e-6*t1515;
  t1521 = 2.8e-11*t646;
  t1524 = t1521 + t723;
  t1525 = -0.038749000006999997*t1524;
  t1559 = t1070*t1554;
  t1594 = t1067*t1593;
  t1610 = t1063*t1608;
  t1612 = t1506 + t1511 + t1520 + t1525 + t1559 + t1594 + t1610;
  t1618 = 3.9608699999999997e-7*var1[16];
  t1619 = -1.1787626499999999e-16*t646;
  t1621 = t1513 + t1069;
  t1622 = -0.281211000004*t1621;
  t1623 = -1. + t424;
  t1628 = 4.e-6*t1623;
  t1632 = t1628 + t817;
  t1635 = -0.038749000006999997*t1632;
  t1638 = t1048*t1554;
  t1639 = t1037*t1593;
  t1641 = t1023*t1608;
  t1642 = t1618 + t1619 + t1622 + t1635 + t1638 + t1639 + t1641;
  t1007 = t1000*t1004;
  t1119 = t1010*t1114;
  t1122 = t1007 + t1119;
  t1650 = -0.15121*t1017;
  t1655 = t1057*t1612;
  t1657 = -1.*t1017*t1642;
  t1658 = t1491 + t1650 + t1655 + t1657;
  t1492 = 0.15121*t1017;
  t1615 = t1017*t1612;
  t1643 = t1057*t1642;
  t1648 = t1491 + t1492 + t1615 + t1643;
  t1667 = 1.5843479999999999e-12*var1[16];
  t1669 = -0.03874900000889869*t646;
  t1670 = t1521 + t1066;
  t1675 = -0.281211000004*t1670;
  t1677 = t1628 + t1029;
  t1679 = -1.8134809999999998e-6*t1677;
  t1680 = t818*t1554;
  t1682 = t800*t1593;
  t1684 = t731*t1608;
  t1686 = t1667 + t1669 + t1675 + t1679 + t1680 + t1682 + t1684;
  t1694 = t1011*t1658;
  t1695 = -1.*t1648*t1109;
  t1698 = t1694 + t1695;
  t1649 = t1011*t1648;
  t1661 = t1658*t1109;
  t1662 = t1649 + t1661;
  t1689 = t1686*t1004;
  t1705 = t1010*t1698;
  t1707 = t1689 + t1705;
  t1713 = t1010*t1686;
  t1714 = -1.*t1004*t1698;
  t1716 = t1713 + t1714;
  t1291 = t1290*t1004;
  t1325 = t1010*t1321;
  t1328 = t1291 + t1325;
  t1664 = -1.*t1356*t1662;
  t1723 = t1404*t1662;
  t1740 = t1356*t1662;
  t1748 = -1.*t1662*t1450;
  t1761 = -1.*t1404*t1662;
  t1779 = t1662*t1450;
  t1793 = -1.*t1000*t1686;
  t1805 = t1175*t1686;
  t1815 = t1000*t1686;
  t1820 = -1.*t1686*t1290;
  t1836 = -1.*t1175*t1686;
  t1846 = t1686*t1290;
  t2087 = -1.*t1554*t985;
  t2088 = -1.*t813*t1593;
  t2092 = -1.*t796*t1608;
  t2093 = t2087 + t2088 + t2092;
  t2097 = t1554*t1167;
  t2098 = t1139*t1593;
  t2099 = t1172*t1608;
  t2101 = t2097 + t2098 + t2099;
  t2142 = t1554*t985;
  t2144 = t813*t1593;
  t2145 = t796*t1608;
  t2149 = t2142 + t2144 + t2145;
  t2152 = -1.*t1554*t1241;
  t2155 = -1.*t1593*t1267;
  t2156 = -1.*t1608*t1286;
  t2157 = t2152 + t2155 + t2156;
  t2190 = -1.*t1554*t1167;
  t2192 = -1.*t1139*t1593;
  t2193 = -1.*t1172*t1608;
  t2194 = t2190 + t2192 + t2193;
  t2196 = t1554*t1241;
  t2197 = t1593*t1267;
  t2198 = t1608*t1286;
  t2199 = t2196 + t2197 + t2198;
  p_output1[0]=t1122*var2[0] + t1219*var2[1] + t1328*var2[2];
  p_output1[1]=(t1339*t1356 - 1.*t1358*t1366)*var2[0] + (t1339*t1404 - 1.*t1358*t1415)*var2[1] + (t1339*t1450 - 1.*t1358*t1456)*var2[2];
  p_output1[2]=(t1356*t1358 + t1339*t1366)*var2[0] + (t1358*t1404 + t1339*t1415)*var2[1] + (t1358*t1450 + t1339*t1456)*var2[2];
  p_output1[3]=(t1328*(-1.*t1219*t1707 - 1.*t1415*t1716 + t1761) + t1219*(t1328*t1707 + t1456*t1716 + t1779))*var2[0] + (t1328*(t1122*t1707 + t1366*t1716 + t1740) + t1122*(-1.*t1328*t1707 - 1.*t1456*t1716 + t1748))*var2[1] + (t1219*(t1664 - 1.*t1122*t1707 - 1.*t1366*t1716) + t1122*(t1219*t1707 + t1415*t1716 + t1723))*var2[2];
  p_output1[4]=(t1450*(-1.*t1213*t1698 + t1761 + t1836) + t1404*(t1321*t1698 + t1779 + t1846))*var2[0] + (t1450*(t1114*t1698 + t1740 + t1815) + t1356*(-1.*t1321*t1698 + t1748 + t1820))*var2[1] + (t1404*(t1664 - 1.*t1114*t1698 + t1793) + t1356*(t1213*t1698 + t1723 + t1805))*var2[2];
  p_output1[5]=(t1290*(-1.*t1211*t1648 - 1.*t1207*t1658 + t1836) + t1175*(t1319*t1648 + t1309*t1658 + t1846))*var2[0] + (t1290*(t1099*t1648 + t1082*t1658 + t1815) + t1000*(-1.*t1319*t1648 - 1.*t1309*t1658 + t1820))*var2[1] + (t1175*(-1.*t1099*t1648 - 1.*t1082*t1658 + t1793) + t1000*(t1211*t1648 + t1207*t1658 + t1805))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.15121*t1052 - 0.15121*t1076 + t1290*(-1.*t1187*t1612 - 1.*t1199*t1642 + t1836) + t1175*(t1298*t1612 + t1306*t1642 + t1846))*var2[0] + (-0.15121*t1187 + 0.15121*t1199 + t1290*(t1076*t1612 + t1052*t1642 + t1815) + t1000*(-1.*t1298*t1612 - 1.*t1306*t1642 + t1820))*var2[1] + (-0.15121*t1298 + 0.15121*t1306 + t1175*(-1.*t1076*t1612 - 1.*t1052*t1642 + t1793) + t1000*(t1187*t1612 + t1199*t1642 + t1805))*var2[2];
  p_output1[16]=(-1.*t1241*t2194 - 1.*t1167*t2199 + 4.e-6*(-1.*t1267*t2194 - 1.*t1139*t2199) + 7.e-6*(t1286*t2194 + t1172*t2199) - 0.038749*t796 + 0.281211*t813 + 1.e-6*(t1231 + t762 + 7.e-6*t974))*var2[0] + (0.281211*t1139 - 0.038749*t1172 - 1.*t1241*t2149 + 7.e-6*(t1286*t2149 + t2157*t796) + 1.e-6*(4.e-6*(-1. + t1228) + t1252 + t804) + 4.e-6*(-1.*t1267*t2149 - 1.*t2157*t813) - 1.*t2157*t985)*var2[1] + (0.281211*t1267 - 0.038749*t1286 - 1.*t1167*t2093 + 7.e-6*(t1172*t2093 + t2101*t796) + 4.e-6*(-1.*t1139*t2093 - 1.*t2101*t813) + 1.e-6*(1. - 7.e-6*t1233 + 4.e-6*t1541 + t819) - 1.*t2101*t985)*var2[2];
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

namespace DiagonalStance2
{

void fRrFoot_vec_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
