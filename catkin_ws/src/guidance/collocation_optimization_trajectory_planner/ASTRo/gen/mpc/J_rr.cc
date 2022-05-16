/*
 * Automatically Generated from Mathematica.
 * Tue 16 Nov 2021 21:25:04 GMT+01:00
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
static void output1(double *p_output1,const double *var1)
{
  double t556;
  double t658;
  double t659;
  double t669;
  double t684;
  double t612;
  double t615;
  double t617;
  double t618;
  double t622;
  double t642;
  double t643;
  double t648;
  double t602;
  double t679;
  double t758;
  double t694;
  double t699;
  double t849;
  double t854;
  double t858;
  double t870;
  double t793;
  double t818;
  double t826;
  double t827;
  double t834;
  double t900;
  double t901;
  double t686;
  double t932;
  double t700;
  double t978;
  double t868;
  double t1008;
  double t745;
  double t919;
  double t924;
  double t929;
  double t937;
  double t941;
  double t944;
  double t971;
  double t972;
  double t973;
  double t1022;
  double t991;
  double t1001;
  double t1007;
  double t1009;
  double t1010;
  double t1012;
  double t1014;
  double t1016;
  double t1044;
  double t1045;
  double t1046;
  double t1053;
  double t1058;
  double t1061;
  double t1064;
  double t1065;
  double t902;
  double t1070;
  double t871;
  double t1106;
  double t983;
  double t1076;
  double t979;
  double t568;
  double t573;
  double t584;
  double t608;
  double t609;
  double t656;
  double t674;
  double t689;
  double t690;
  double t702;
  double t706;
  double t738;
  double t1141;
  double t1145;
  double t1146;
  double t741;
  double t742;
  double t750;
  double t754;
  double t764;
  double t769;
  double t776;
  double t784;
  double t790;
  double t805;
  double t816;
  double t821;
  double t823;
  double t824;
  double t841;
  double t863;
  double t895;
  double t898;
  double t905;
  double t907;
  double t915;
  double t1151;
  double t1152;
  double t1153;
  double t976;
  double t977;
  double t981;
  double t982;
  double t984;
  double t986;
  double t987;
  double t1019;
  double t1021;
  double t1035;
  double t1037;
  double t1041;
  double t1042;
  double t1043;
  double t1072;
  double t1155;
  double t1156;
  double t1157;
  double t1158;
  double t1077;
  double t1160;
  double t1161;
  double t1162;
  double t1163;
  double t1090;
  double t1091;
  double t1167;
  double t1169;
  double t1172;
  double t1174;
  double t1100;
  double t1102;
  double t1107;
  double t1109;
  double t1116;
  double t1120;
  double t1125;
  double t1127;
  double t1204;
  double t1214;
  double t1218;
  double t1219;
  double t1222;
  double t1224;
  double t1225;
  double t1226;
  double t1227;
  double t1229;
  double t1230;
  double t1231;
  double t1232;
  double t1284;
  double t1288;
  double t1293;
  double t1298;
  double t1299;
  double t1300;
  double t1303;
  double t1305;
  double t1306;
  double t1307;
  double t1310;
  double t1312;
  double t1314;
  double t1315;
  double t1318;
  double t1324;
  double t1329;
  double t1330;
  double t1279;
  double t1280;
  double t1363;
  double t1364;
  double t1365;
  double t1368;
  double t1370;
  double t1372;
  double t1375;
  double t1376;
  double t1379;
  double t1381;
  double t1387;
  double t1391;
  double t1392;
  double t1393;
  double t1396;
  double t1397;
  double t1398;
  double t1399;
  double t1436;
  double t1437;
  double t1438;
  double t1441;
  double t1442;
  double t1444;
  double t1446;
  double t1448;
  double t1449;
  double t1450;
  double t1452;
  double t1453;
  double t1454;
  double t1455;
  double t1457;
  double t1458;
  double t1459;
  double t1460;
  double t1486;
  double t1488;
  double t1489;
  double t1492;
  double t1493;
  double t1494;
  double t1496;
  double t1497;
  double t1498;
  double t1500;
  double t1501;
  double t1502;
  double t1503;
  double t1505;
  double t1506;
  double t1507;
  double t1508;
  double t1511;
  double t1514;
  double t1515;
  double t1516;
  double t1539;
  double t1540;
  double t1541;
  double t1544;
  double t1545;
  double t1547;
  double t1549;
  double t1551;
  double t1553;
  double t1556;
  double t1557;
  double t1558;
  double t1560;
  double t1562;
  double t1564;
  double t1565;
  double t1566;
  double t1569;
  double t1570;
  double t1572;
  double t1573;
  double t1604;
  double t1605;
  double t1606;
  double t1608;
  double t1609;
  double t1610;
  double t1613;
  double t1615;
  double t1617;
  double t1620;
  double t1622;
  double t1623;
  double t1597;
  double t1598;
  double t1600;
  double t1601;
  double t1644;
  double t1645;
  double t1647;
  double t1650;
  double t1652;
  double t1654;
  double t1657;
  double t1659;
  double t1661;
  double t1664;
  double t1665;
  double t1667;
  double t1668;
  double t1669;
  double t1671;
  double t1672;
  double t1673;
  double t1699;
  double t1700;
  double t1702;
  double t1704;
  double t1706;
  double t1708;
  double t1711;
  double t1712;
  double t1713;
  double t1716;
  double t1719;
  double t1720;
  double t1723;
  double t1725;
  double t1726;
  double t1750;
  double t1756;
  double t1759;
  double t1747;
  double t1786;
  double t1768;
  double t1776;
  double t1777;
  double t1778;
  double t1779;
  double t1780;
  double t1781;
  double t1783;
  double t1784;
  double t1785;
  double t1787;
  double t1788;
  double t1789;
  double t1791;
  double t1792;
  double t1793;
  double t1794;
  double t1795;
  double t1796;
  double t1748;
  double t1749;
  double t1751;
  double t1752;
  double t1753;
  double t1754;
  double t1757;
  double t1758;
  double t1760;
  double t1761;
  double t1762;
  double t1763;
  double t1766;
  double t1767;
  double t1770;
  double t1771;
  double t1772;
  double t1773;
  double t1816;
  double t1817;
  double t1818;
  double t1820;
  double t1821;
  double t1822;
  double t1823;
  double t1825;
  double t1826;
  double t1827;
  double t1828;
  double t1830;
  double t1831;
  double t1832;
  double t1833;
  double t1853;
  double t1854;
  double t1855;
  double t1857;
  double t1858;
  double t1859;
  double t1860;
  double t1862;
  double t1863;
  double t1864;
  double t1865;
  double t1867;
  double t1868;
  double t1869;
  double t1870;
  double t1888;
  double t1891;
  double t1915;
  double t1897;
  double t1908;
  double t1905;
  double t1889;
  double t1890;
  double t1892;
  double t1893;
  double t1894;
  double t1895;
  double t1898;
  double t1899;
  double t1900;
  double t1901;
  double t1902;
  double t1903;
  double t1906;
  double t1907;
  double t1909;
  double t1910;
  double t1911;
  double t1912;
  double t1937;
  double t1938;
  double t1939;
  double t1940;
  double t1916;
  double t1942;
  double t1943;
  double t1944;
  double t1945;
  double t1918;
  double t1947;
  double t1948;
  double t1949;
  double t1950;
  double t1922;
  double t1925;
  double t1929;
  double t1931;
  double t1968;
  double t1969;
  double t1970;
  double t1971;
  double t1973;
  double t1974;
  double t1975;
  double t1976;
  double t1978;
  double t1979;
  double t1980;
  double t1981;
  t556 = Cos(var1[6]);
  t658 = Cos(var1[7]);
  t659 = -1.*t658;
  t669 = 1. + t659;
  t684 = Sin(var1[7]);
  t612 = Cos(var1[5]);
  t615 = Cos(var1[3]);
  t617 = Sin(var1[4]);
  t618 = t612*t615*t617;
  t622 = Sin(var1[5]);
  t642 = Sin(var1[3]);
  t643 = t622*t642;
  t648 = t618 + t643;
  t602 = Sin(var1[6]);
  t679 = 7.e-6*t669;
  t758 = 2.8e-11*t669;
  t694 = -1. + t658;
  t699 = 4.e-6*t694;
  t849 = Cos(var1[8]);
  t854 = -1.*t849;
  t858 = 1. + t854;
  t870 = Sin(var1[8]);
  t793 = -1.*t684;
  t818 = -7.e-6*t684;
  t826 = t615*t622;
  t827 = -1.*t612*t617*t642;
  t834 = t826 + t827;
  t900 = -1. + t849;
  t901 = 4.e-6*t900;
  t686 = 4.e-6*t684;
  t932 = 4.e-6*t669;
  t700 = 7.e-6*t684;
  t978 = 7.e-6*t858;
  t868 = 2.8e-11*t858;
  t1008 = -7.e-6*t669;
  t745 = -4.e-6*t684;
  t919 = -2.8e-11*t669;
  t924 = t919 + t793;
  t929 = t602*t924*t648;
  t937 = t932 + t818;
  t941 = t556*t937*t648;
  t944 = -1.000000000049*t669;
  t971 = 1. + t944;
  t972 = t971*t834;
  t973 = t929 + t941 + t972;
  t1022 = -4.e-6*t870;
  t991 = -6.5e-11*t669;
  t1001 = 1. + t991;
  t1007 = t556*t1001*t648;
  t1009 = t1008 + t686;
  t1010 = t602*t1009*t648;
  t1012 = t932 + t700;
  t1014 = t1012*t834;
  t1016 = t1007 + t1010 + t1014;
  t1044 = -1.000000000016*t669;
  t1045 = 1. + t1044;
  t1046 = t1045*t602*t648;
  t1053 = t1008 + t745;
  t1058 = t556*t1053*t648;
  t1061 = t919 + t684;
  t1064 = t1061*t834;
  t1065 = t1046 + t1058 + t1064;
  t902 = -7.e-6*t870;
  t1070 = -2.8e-11*t858;
  t871 = -1.*t870;
  t1106 = 4.e-6*t858;
  t983 = 7.e-6*t870;
  t1076 = -7.e-6*t858;
  t979 = 4.e-6*t870;
  t568 = -1.*t556;
  t573 = 1. + t568;
  t584 = -0.15121*t573;
  t608 = 0.15121*t602;
  t609 = t584 + t608;
  t656 = 3.9608699999999997e-7*var1[7];
  t674 = -1.1787626499999999e-16*t669;
  t689 = t679 + t686;
  t690 = -0.281211000004*t689;
  t702 = t699 + t700;
  t706 = -0.038749000006999997*t702;
  t738 = t656 + t674 + t690 + t706;
  t1141 = t615*t622*t617;
  t1145 = -1.*t612*t642;
  t1146 = t1141 + t1145;
  t741 = -2.7726089999999997e-12*var1[7];
  t742 = -0.2812110000084994*t669;
  t750 = t679 + t745;
  t754 = -1.8134809999999998e-6*t750;
  t764 = t758 + t684;
  t769 = -0.038749000006999997*t764;
  t776 = t741 + t742 + t754 + t769;
  t784 = 1.5843479999999999e-12*var1[7];
  t790 = -0.03874900000889869*t669;
  t805 = t758 + t793;
  t816 = -0.281211000004*t805;
  t821 = t699 + t818;
  t823 = -1.8134809999999998e-6*t821;
  t824 = t784 + t790 + t816 + t823;
  t841 = 1.1305160000000008e-12*var1[8];
  t863 = -0.03857500001589017*t858;
  t895 = t868 + t871;
  t898 = -0.5031510000080001*t895;
  t905 = t901 + t902;
  t907 = -3.367757e-6*t905;
  t915 = t841 + t863 + t898 + t907;
  t1151 = -1.*t612*t615;
  t1152 = -1.*t622*t617*t642;
  t1153 = t1151 + t1152;
  t976 = 2.826290000000002e-7*var1[8];
  t977 = -2.18904205e-16*t858;
  t981 = t978 + t979;
  t982 = -0.5031510000080001*t981;
  t984 = t901 + t983;
  t986 = -0.038575000014*t984;
  t987 = t976 + t977 + t982 + t986;
  t1019 = -1.9784030000000015e-12*var1[8];
  t1021 = -0.5031510000160505*t858;
  t1035 = t978 + t1022;
  t1037 = -3.367757e-6*t1035;
  t1041 = t868 + t870;
  t1042 = -0.038575000014*t1041;
  t1043 = t1019 + t1021 + t1037 + t1042;
  t1072 = t1070 + t870;
  t1155 = t602*t924*t1146;
  t1156 = t556*t937*t1146;
  t1157 = t971*t1153;
  t1158 = t1155 + t1156 + t1157;
  t1077 = t1076 + t1022;
  t1160 = t556*t1001*t1146;
  t1161 = t602*t1009*t1146;
  t1162 = t1012*t1153;
  t1163 = t1160 + t1161 + t1162;
  t1090 = -1.000000000016*t858;
  t1091 = 1. + t1090;
  t1167 = t1045*t602*t1146;
  t1169 = t556*t1053*t1146;
  t1172 = t1061*t1153;
  t1174 = t1167 + t1169 + t1172;
  t1100 = -1.000000000049*t858;
  t1102 = 1. + t1100;
  t1107 = t1106 + t902;
  t1109 = t1070 + t871;
  t1116 = t1106 + t983;
  t1120 = -6.5e-11*t858;
  t1125 = 1. + t1120;
  t1127 = t1076 + t979;
  t1204 = Cos(var1[4]);
  t1214 = t1204*t615*t602*t924;
  t1218 = t556*t1204*t615*t937;
  t1219 = -1.*t971*t1204*t642;
  t1222 = t1214 + t1218 + t1219;
  t1224 = t556*t1001*t1204*t615;
  t1225 = t1204*t615*t602*t1009;
  t1226 = -1.*t1204*t1012*t642;
  t1227 = t1224 + t1225 + t1226;
  t1229 = t1045*t1204*t615*t602;
  t1230 = t556*t1204*t615*t1053;
  t1231 = -1.*t1204*t1061*t642;
  t1232 = t1229 + t1230 + t1231;
  t1284 = t612*t602*t617;
  t1288 = t556*t612*t1204*t642;
  t1293 = t1284 + t1288;
  t1298 = -1.*t556*t612*t617;
  t1299 = t612*t1204*t602*t642;
  t1300 = t1298 + t1299;
  t1303 = t612*t1204*t615*t1061;
  t1305 = t1053*t1293;
  t1306 = t1045*t1300;
  t1307 = t1303 + t1305 + t1306;
  t1310 = t971*t612*t1204*t615;
  t1312 = t937*t1293;
  t1314 = t924*t1300;
  t1315 = t1310 + t1312 + t1314;
  t1318 = t612*t1204*t615*t1012;
  t1324 = t1001*t1293;
  t1329 = t1009*t1300;
  t1330 = t1318 + t1324 + t1329;
  t1279 = -0.15121*t602;
  t1280 = t584 + t1279;
  t1363 = t602*t622*t617;
  t1364 = t556*t1204*t622*t642;
  t1365 = t1363 + t1364;
  t1368 = -1.*t556*t622*t617;
  t1370 = t1204*t602*t622*t642;
  t1372 = t1368 + t1370;
  t1375 = t1204*t615*t1061*t622;
  t1376 = t1053*t1365;
  t1379 = t1045*t1372;
  t1381 = t1375 + t1376 + t1379;
  t1387 = t971*t1204*t615*t622;
  t1391 = t937*t1365;
  t1392 = t924*t1372;
  t1393 = t1387 + t1391 + t1392;
  t1396 = t1204*t615*t1012*t622;
  t1397 = t1001*t1365;
  t1398 = t1009*t1372;
  t1399 = t1396 + t1397 + t1398;
  t1436 = t1204*t602;
  t1437 = -1.*t556*t617*t642;
  t1438 = t1436 + t1437;
  t1441 = -1.*t556*t1204;
  t1442 = -1.*t602*t617*t642;
  t1444 = t1441 + t1442;
  t1446 = -1.*t615*t1061*t617;
  t1448 = t1053*t1438;
  t1449 = t1045*t1444;
  t1450 = t1446 + t1448 + t1449;
  t1452 = -1.*t971*t615*t617;
  t1453 = t937*t1438;
  t1454 = t924*t1444;
  t1455 = t1452 + t1453 + t1454;
  t1457 = -1.*t615*t1012*t617;
  t1458 = t1001*t1438;
  t1459 = t1009*t1444;
  t1460 = t1457 + t1458 + t1459;
  t1486 = -1.*t615*t622*t617;
  t1488 = t612*t642;
  t1489 = t1486 + t1488;
  t1492 = t1204*t602*t622;
  t1493 = t556*t1153;
  t1494 = t1492 + t1493;
  t1496 = -1.*t556*t1204*t622;
  t1497 = t602*t1153;
  t1498 = t1496 + t1497;
  t1500 = t1061*t1489;
  t1501 = t1053*t1494;
  t1502 = t1045*t1498;
  t1503 = t1500 + t1501 + t1502;
  t1505 = t971*t1489;
  t1506 = t937*t1494;
  t1507 = t924*t1498;
  t1508 = t1505 + t1506 + t1507;
  t1511 = t1012*t1489;
  t1514 = t1001*t1494;
  t1515 = t1009*t1498;
  t1516 = t1511 + t1514 + t1515;
  t1539 = -1.*t615*t622;
  t1540 = t612*t617*t642;
  t1541 = t1539 + t1540;
  t1544 = -1.*t612*t1204*t602;
  t1545 = t556*t1541;
  t1547 = t1544 + t1545;
  t1549 = t556*t612*t1204;
  t1551 = t602*t1541;
  t1553 = t1549 + t1551;
  t1556 = t1061*t648;
  t1557 = t1053*t1547;
  t1558 = t1045*t1553;
  t1560 = t1556 + t1557 + t1558;
  t1562 = t971*t648;
  t1564 = t937*t1547;
  t1565 = t924*t1553;
  t1566 = t1562 + t1564 + t1565;
  t1569 = t1012*t648;
  t1570 = t1001*t1547;
  t1572 = t1009*t1553;
  t1573 = t1569 + t1570 + t1572;
  t1604 = -1.*t556*t612*t1204;
  t1605 = -1.*t602*t1541;
  t1606 = t1604 + t1605;
  t1608 = t1009*t1547;
  t1609 = t1001*t1606;
  t1610 = t1608 + t1609;
  t1613 = t924*t1547;
  t1615 = t937*t1606;
  t1617 = t1613 + t1615;
  t1620 = t1045*t1547;
  t1622 = t1053*t1606;
  t1623 = t1620 + t1622;
  t1597 = -0.15121*t556;
  t1598 = t1597 + t1279;
  t1600 = 0.15121*t556;
  t1601 = t1600 + t1279;
  t1644 = t612*t615;
  t1645 = t622*t617*t642;
  t1647 = t1644 + t1645;
  t1650 = -1.*t1204*t602*t622;
  t1652 = t556*t1647;
  t1654 = t1650 + t1652;
  t1657 = -1.*t602*t1647;
  t1659 = t1496 + t1657;
  t1661 = t1009*t1654;
  t1664 = t1001*t1659;
  t1665 = t1661 + t1664;
  t1667 = t924*t1654;
  t1668 = t937*t1659;
  t1669 = t1667 + t1668;
  t1671 = t1045*t1654;
  t1672 = t1053*t1659;
  t1673 = t1671 + t1672;
  t1699 = t602*t617;
  t1700 = t556*t1204*t642;
  t1702 = t1699 + t1700;
  t1704 = t556*t617;
  t1706 = -1.*t1204*t602*t642;
  t1708 = t1704 + t1706;
  t1711 = t1009*t1702;
  t1712 = t1001*t1708;
  t1713 = t1711 + t1712;
  t1716 = t924*t1702;
  t1719 = t937*t1708;
  t1720 = t1716 + t1719;
  t1723 = t1045*t1702;
  t1725 = t1053*t1708;
  t1726 = t1723 + t1725;
  t1750 = 2.8e-11*t684;
  t1756 = 7.e-6*t658;
  t1759 = 4.e-6*t658;
  t1747 = -7.e-6*t658;
  t1786 = -2.8e-11*t684;
  t1768 = -4.e-6*t658;
  t1776 = t1756 + t686;
  t1777 = t1776*t648;
  t1778 = -6.5e-11*t684*t1547;
  t1779 = t1759 + t818;
  t1780 = t1779*t1553;
  t1781 = t1777 + t1778 + t1780;
  t1783 = -1.000000000049*t684*t648;
  t1784 = t1747 + t686;
  t1785 = t1784*t1547;
  t1787 = t659 + t1786;
  t1788 = t1787*t1553;
  t1789 = t1783 + t1785 + t1788;
  t1791 = t658 + t1786;
  t1792 = t1791*t648;
  t1793 = t1768 + t818;
  t1794 = t1793*t1547;
  t1795 = -1.000000000016*t684*t1553;
  t1796 = t1792 + t1794 + t1795;
  t1748 = t1747 + t745;
  t1749 = -1.8134809999999998e-6*t1748;
  t1751 = t659 + t1750;
  t1752 = -0.281211000004*t1751;
  t1753 = -0.03874900000889869*t684;
  t1754 = 1.5843479999999999e-12 + t1749 + t1752 + t1753;
  t1757 = t1756 + t745;
  t1758 = -0.038749000006999997*t1757;
  t1760 = t1759 + t700;
  t1761 = -0.281211000004*t1760;
  t1762 = -1.1787626499999999e-16*t684;
  t1763 = 3.9608699999999997e-7 + t1758 + t1761 + t1762;
  t1766 = t658 + t1750;
  t1767 = -0.038749000006999997*t1766;
  t1770 = t1768 + t700;
  t1771 = -1.8134809999999998e-6*t1770;
  t1772 = -0.2812110000084994*t684;
  t1773 = -2.7726089999999997e-12 + t1767 + t1771 + t1772;
  t1816 = t556*t1204*t622;
  t1817 = t602*t1647;
  t1818 = t1816 + t1817;
  t1820 = t1776*t1146;
  t1821 = -6.5e-11*t684*t1654;
  t1822 = t1779*t1818;
  t1823 = t1820 + t1821 + t1822;
  t1825 = -1.000000000049*t684*t1146;
  t1826 = t1784*t1654;
  t1827 = t1787*t1818;
  t1828 = t1825 + t1826 + t1827;
  t1830 = t1791*t1146;
  t1831 = t1793*t1654;
  t1832 = -1.000000000016*t684*t1818;
  t1833 = t1830 + t1831 + t1832;
  t1853 = -1.*t556*t617;
  t1854 = t1204*t602*t642;
  t1855 = t1853 + t1854;
  t1857 = t1204*t615*t1776;
  t1858 = -6.5e-11*t684*t1702;
  t1859 = t1779*t1855;
  t1860 = t1857 + t1858 + t1859;
  t1862 = -1.000000000049*t1204*t615*t684;
  t1863 = t1784*t1702;
  t1864 = t1787*t1855;
  t1865 = t1862 + t1863 + t1864;
  t1867 = t1204*t615*t1791;
  t1868 = t1793*t1702;
  t1869 = -1.000000000016*t684*t1855;
  t1870 = t1867 + t1868 + t1869;
  t1888 = 2.8e-11*t870;
  t1891 = -4.e-6*t849;
  t1915 = -2.8e-11*t870;
  t1897 = -7.e-6*t849;
  t1908 = 4.e-6*t849;
  t1905 = 7.e-6*t849;
  t1889 = t849 + t1888;
  t1890 = -0.038575000014*t1889;
  t1892 = t1891 + t983;
  t1893 = -3.367757e-6*t1892;
  t1894 = -0.5031510000160505*t870;
  t1895 = -1.9784030000000015e-12 + t1890 + t1893 + t1894;
  t1898 = t1897 + t1022;
  t1899 = -3.367757e-6*t1898;
  t1900 = t854 + t1888;
  t1901 = -0.5031510000080001*t1900;
  t1902 = -0.03857500001589017*t870;
  t1903 = 1.1305160000000008e-12 + t1899 + t1901 + t1902;
  t1906 = t1905 + t1022;
  t1907 = -0.038575000014*t1906;
  t1909 = t1908 + t983;
  t1910 = -0.5031510000080001*t1909;
  t1911 = -2.18904205e-16*t870;
  t1912 = 2.826290000000002e-7 + t1907 + t1910 + t1911;
  t1937 = t1061*t1146;
  t1938 = t1053*t1654;
  t1939 = t1045*t1818;
  t1940 = t1937 + t1938 + t1939;
  t1916 = t849 + t1915;
  t1942 = t971*t1146;
  t1943 = t937*t1654;
  t1944 = t924*t1818;
  t1945 = t1942 + t1943 + t1944;
  t1918 = t1891 + t902;
  t1947 = t1012*t1146;
  t1948 = t1001*t1654;
  t1949 = t1009*t1818;
  t1950 = t1947 + t1948 + t1949;
  t1922 = t854 + t1915;
  t1925 = t1897 + t979;
  t1929 = t1908 + t902;
  t1931 = t1905 + t979;
  t1968 = t1204*t615*t1061;
  t1969 = t1053*t1702;
  t1970 = t1045*t1855;
  t1971 = t1968 + t1969 + t1970;
  t1973 = t971*t1204*t615;
  t1974 = t937*t1702;
  t1975 = t924*t1855;
  t1976 = t1973 + t1974 + t1975;
  t1978 = t1204*t615*t1012;
  t1979 = t1001*t1702;
  t1980 = t1009*t1855;
  t1981 = t1978 + t1979 + t1980;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1043*t1065 + t609*t648 + t556*t648*t738 + t602*t648*t776 + t824*t834 + t915*t973 - 0.80315*(t1016*t1077 + t1065*t1091 + t1072*t973) - 0.038576*(t1016*t1107 + t1065*t1109 + t1102*t973) - 0.148715*(t1016*t1125 + t1065*t1127 + t1116*t973) + t1016*t987;
  p_output1[10]=t1043*t1174 - 0.80315*(t1072*t1158 + t1077*t1163 + t1091*t1174) - 0.038576*(t1102*t1158 + t1107*t1163 + t1109*t1174) - 0.148715*(t1116*t1158 + t1125*t1163 + t1127*t1174) + t1146*t609 + t1146*t556*t738 + t1146*t602*t776 + t1153*t824 + t1158*t915 + t1163*t987;
  p_output1[11]=t1043*t1232 - 0.80315*(t1072*t1222 + t1077*t1227 + t1091*t1232) - 0.038576*(t1102*t1222 + t1107*t1227 + t1109*t1232) - 0.148715*(t1116*t1222 + t1125*t1227 + t1127*t1232) + t1204*t609*t615 + t1204*t556*t615*t738 + t1204*t602*t615*t776 - 1.*t1204*t642*t824 + t1222*t915 + t1227*t987;
  p_output1[12]=t1043*t1307 - 0.80315*(t1091*t1307 + t1072*t1315 + t1077*t1330) - 0.038576*(t1109*t1307 + t1102*t1315 + t1107*t1330) - 0.148715*(t1127*t1307 + t1116*t1315 + t1125*t1330) - 1.*t1280*t612*t617 + t1204*t609*t612*t642 + t1293*t738 + t1300*t776 + t1204*t612*t615*t824 + t1315*t915 + t1330*t987;
  p_output1[13]=t1043*t1381 - 0.80315*(t1091*t1381 + t1072*t1393 + t1077*t1399) - 0.038576*(t1109*t1381 + t1102*t1393 + t1107*t1399) - 0.148715*(t1127*t1381 + t1116*t1393 + t1125*t1399) - 1.*t1280*t617*t622 + t1204*t609*t622*t642 + t1365*t738 + t1372*t776 + t1204*t615*t622*t824 + t1393*t915 + t1399*t987;
  p_output1[14]=-1.*t1204*t1280 + t1043*t1450 - 0.80315*(t1091*t1450 + t1072*t1455 + t1077*t1460) - 0.038576*(t1109*t1450 + t1102*t1455 + t1107*t1460) - 0.148715*(t1127*t1450 + t1116*t1455 + t1125*t1460) - 1.*t609*t617*t642 + t1438*t738 + t1444*t776 - 1.*t615*t617*t824 + t1455*t915 + t1460*t987;
  p_output1[15]=t1043*t1503 - 0.80315*(t1091*t1503 + t1072*t1508 + t1077*t1516) - 0.038576*(t1109*t1503 + t1102*t1508 + t1107*t1516) - 0.148715*(t1127*t1503 + t1116*t1508 + t1125*t1516) + t1153*t609 - 1.*t1204*t1280*t622 + t1494*t738 + t1498*t776 + t1489*t824 + t1508*t915 + t1516*t987;
  p_output1[16]=t1043*t1560 - 0.80315*(t1091*t1560 + t1072*t1566 + t1077*t1573) - 0.038576*(t1109*t1560 + t1102*t1566 + t1107*t1573) - 0.148715*(t1127*t1560 + t1116*t1566 + t1125*t1573) + t1541*t609 + t1204*t1280*t612 + t1547*t738 + t1553*t776 + t648*t824 + t1566*t915 + t1573*t987;
  p_output1[17]=0;
  p_output1[18]=t1541*t1601 + t1043*t1623 - 0.80315*(t1077*t1610 + t1072*t1617 + t1091*t1623) - 0.038576*(t1107*t1610 + t1102*t1617 + t1109*t1623) - 0.148715*(t1125*t1610 + t1116*t1617 + t1127*t1623) + t1204*t1598*t612 + t1606*t738 + t1547*t776 + t1617*t915 + t1610*t987;
  p_output1[19]=t1601*t1647 + t1043*t1673 - 0.80315*(t1077*t1665 + t1072*t1669 + t1091*t1673) - 0.038576*(t1107*t1665 + t1102*t1669 + t1109*t1673) - 0.148715*(t1125*t1665 + t1116*t1669 + t1127*t1673) + t1204*t1598*t622 + t1659*t738 + t1654*t776 + t1669*t915 + t1665*t987;
  p_output1[20]=t1043*t1726 - 0.80315*(t1077*t1713 + t1072*t1720 + t1091*t1726) - 0.038576*(t1107*t1713 + t1102*t1720 + t1109*t1726) - 0.148715*(t1125*t1713 + t1116*t1720 + t1127*t1726) - 1.*t1598*t617 + t1204*t1601*t642 + t1708*t738 + t1702*t776 + t1720*t915 + t1713*t987;
  p_output1[21]=t1547*t1763 + t1553*t1773 + t1043*t1796 - 0.80315*(t1077*t1781 + t1072*t1789 + t1091*t1796) - 0.038576*(t1107*t1781 + t1102*t1789 + t1109*t1796) - 0.148715*(t1125*t1781 + t1116*t1789 + t1127*t1796) + t1754*t648 + t1789*t915 + t1781*t987;
  p_output1[22]=t1146*t1754 + t1654*t1763 + t1773*t1818 + t1043*t1833 - 0.80315*(t1077*t1823 + t1072*t1828 + t1091*t1833) - 0.038576*(t1107*t1823 + t1102*t1828 + t1109*t1833) - 0.148715*(t1125*t1823 + t1116*t1828 + t1127*t1833) + t1828*t915 + t1823*t987;
  p_output1[23]=t1702*t1763 + t1773*t1855 + t1043*t1870 - 0.80315*(t1077*t1860 + t1072*t1865 + t1091*t1870) - 0.038576*(t1107*t1860 + t1102*t1865 + t1109*t1870) - 0.148715*(t1125*t1860 + t1116*t1865 + t1127*t1870) + t1204*t1754*t615 + t1865*t915 + t1860*t987;
  p_output1[24]=t1560*t1895 + t1566*t1903 + t1573*t1912 - 0.80315*(t1566*t1916 + t1573*t1918 - 1.000000000016*t1560*t870) - 0.038576*(t1560*t1922 + t1573*t1925 - 1.000000000049*t1566*t870) - 0.148715*(t1560*t1929 + t1566*t1931 - 6.5e-11*t1573*t870);
  p_output1[25]=t1895*t1940 + t1903*t1945 + t1912*t1950 - 0.80315*(t1916*t1945 + t1918*t1950 - 1.000000000016*t1940*t870) - 0.038576*(t1922*t1940 + t1925*t1950 - 1.000000000049*t1945*t870) - 0.148715*(t1929*t1940 + t1931*t1945 - 6.5e-11*t1950*t870);
  p_output1[26]=t1895*t1971 + t1903*t1976 + t1912*t1981 - 0.80315*(t1916*t1976 + t1918*t1981 - 1.000000000016*t1971*t870) - 0.038576*(t1922*t1971 + t1925*t1981 - 1.000000000049*t1976*t870) - 0.148715*(t1929*t1971 + t1931*t1976 - 6.5e-11*t1981*t870);
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 9, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_rr.hh"

namespace SymFunction
{

void J_rr_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
