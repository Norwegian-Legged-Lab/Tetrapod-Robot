/*
 * Automatically Generated from Mathematica.
 * Tue 16 Nov 2021 21:25:03 GMT+01:00
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
  double t491;
  double t590;
  double t600;
  double t601;
  double t606;
  double t521;
  double t527;
  double t540;
  double t556;
  double t560;
  double t565;
  double t568;
  double t570;
  double t466;
  double t610;
  double t626;
  double t605;
  double t691;
  double t692;
  double t693;
  double t696;
  double t664;
  double t686;
  double t687;
  double t688;
  double t701;
  double t611;
  double t740;
  double t607;
  double t695;
  double t774;
  double t788;
  double t644;
  double t733;
  double t734;
  double t627;
  double t822;
  double t738;
  double t739;
  double t741;
  double t742;
  double t743;
  double t744;
  double t745;
  double t749;
  double t825;
  double t781;
  double t782;
  double t784;
  double t790;
  double t793;
  double t800;
  double t805;
  double t809;
  double t829;
  double t833;
  double t834;
  double t837;
  double t841;
  double t845;
  double t849;
  double t853;
  double t759;
  double t859;
  double t775;
  double t887;
  double t855;
  double t856;
  double t697;
  double t469;
  double t473;
  double t486;
  double t514;
  double t515;
  double t584;
  double t602;
  double t608;
  double t609;
  double t612;
  double t615;
  double t616;
  double t932;
  double t933;
  double t934;
  double t618;
  double t622;
  double t642;
  double t643;
  double t648;
  double t649;
  double t653;
  double t658;
  double t659;
  double t669;
  double t674;
  double t679;
  double t684;
  double t685;
  double t690;
  double t694;
  double t699;
  double t700;
  double t702;
  double t706;
  double t724;
  double t946;
  double t954;
  double t964;
  double t754;
  double t758;
  double t764;
  double t769;
  double t776;
  double t779;
  double t780;
  double t818;
  double t821;
  double t823;
  double t824;
  double t826;
  double t827;
  double t828;
  double t857;
  double t972;
  double t973;
  double t974;
  double t975;
  double t861;
  double t977;
  double t978;
  double t979;
  double t980;
  double t865;
  double t866;
  double t982;
  double t983;
  double t984;
  double t985;
  double t892;
  double t896;
  double t897;
  double t899;
  double t903;
  double t904;
  double t906;
  double t911;
  double t1040;
  double t1045;
  double t1046;
  double t1047;
  double t1048;
  double t1058;
  double t1061;
  double t1062;
  double t1063;
  double t1065;
  double t1066;
  double t1067;
  double t1068;
  double t1115;
  double t1116;
  double t1117;
  double t1119;
  double t1120;
  double t1121;
  double t1126;
  double t1127;
  double t1128;
  double t1132;
  double t1136;
  double t1140;
  double t1141;
  double t1144;
  double t1146;
  double t1147;
  double t1148;
  double t1149;
  double t1110;
  double t1111;
  double t1180;
  double t1181;
  double t1184;
  double t1186;
  double t1187;
  double t1188;
  double t1190;
  double t1191;
  double t1192;
  double t1193;
  double t1195;
  double t1196;
  double t1197;
  double t1198;
  double t1200;
  double t1201;
  double t1202;
  double t1203;
  double t1234;
  double t1235;
  double t1236;
  double t1238;
  double t1241;
  double t1245;
  double t1249;
  double t1253;
  double t1258;
  double t1262;
  double t1264;
  double t1265;
  double t1266;
  double t1267;
  double t1269;
  double t1270;
  double t1271;
  double t1272;
  double t1302;
  double t1303;
  double t1304;
  double t1307;
  double t1308;
  double t1309;
  double t1311;
  double t1312;
  double t1313;
  double t1315;
  double t1316;
  double t1318;
  double t1320;
  double t1329;
  double t1330;
  double t1334;
  double t1335;
  double t1337;
  double t1338;
  double t1339;
  double t1340;
  double t1367;
  double t1368;
  double t1369;
  double t1371;
  double t1372;
  double t1373;
  double t1375;
  double t1376;
  double t1377;
  double t1381;
  double t1385;
  double t1387;
  double t1390;
  double t1392;
  double t1393;
  double t1394;
  double t1395;
  double t1397;
  double t1398;
  double t1399;
  double t1400;
  double t1426;
  double t1433;
  double t1434;
  double t1435;
  double t1437;
  double t1438;
  double t1439;
  double t1441;
  double t1442;
  double t1443;
  double t1445;
  double t1446;
  double t1447;
  double t1427;
  double t1428;
  double t1430;
  double t1466;
  double t1467;
  double t1468;
  double t1470;
  double t1471;
  double t1472;
  double t1474;
  double t1475;
  double t1477;
  double t1478;
  double t1479;
  double t1481;
  double t1482;
  double t1483;
  double t1485;
  double t1486;
  double t1487;
  double t1507;
  double t1508;
  double t1509;
  double t1511;
  double t1512;
  double t1513;
  double t1515;
  double t1516;
  double t1517;
  double t1519;
  double t1520;
  double t1521;
  double t1523;
  double t1524;
  double t1525;
  double t1543;
  double t1552;
  double t1555;
  double t1546;
  double t1579;
  double t1563;
  double t1569;
  double t1570;
  double t1571;
  double t1572;
  double t1573;
  double t1574;
  double t1576;
  double t1577;
  double t1578;
  double t1580;
  double t1581;
  double t1582;
  double t1584;
  double t1585;
  double t1586;
  double t1587;
  double t1588;
  double t1589;
  double t1544;
  double t1545;
  double t1547;
  double t1548;
  double t1549;
  double t1550;
  double t1553;
  double t1554;
  double t1556;
  double t1557;
  double t1558;
  double t1559;
  double t1561;
  double t1562;
  double t1564;
  double t1565;
  double t1566;
  double t1567;
  double t1609;
  double t1610;
  double t1611;
  double t1613;
  double t1614;
  double t1615;
  double t1616;
  double t1618;
  double t1619;
  double t1620;
  double t1621;
  double t1623;
  double t1624;
  double t1625;
  double t1626;
  double t1646;
  double t1647;
  double t1648;
  double t1650;
  double t1651;
  double t1652;
  double t1653;
  double t1655;
  double t1656;
  double t1657;
  double t1658;
  double t1660;
  double t1661;
  double t1662;
  double t1663;
  double t1681;
  double t1693;
  double t1690;
  double t1684;
  double t1717;
  double t1701;
  double t1682;
  double t1683;
  double t1685;
  double t1686;
  double t1687;
  double t1688;
  double t1691;
  double t1692;
  double t1694;
  double t1695;
  double t1696;
  double t1697;
  double t1699;
  double t1700;
  double t1702;
  double t1703;
  double t1704;
  double t1705;
  double t1707;
  double t1730;
  double t1731;
  double t1732;
  double t1733;
  double t1735;
  double t1736;
  double t1737;
  double t1738;
  double t1710;
  double t1740;
  double t1741;
  double t1742;
  double t1743;
  double t1715;
  double t1718;
  double t1722;
  double t1724;
  double t1761;
  double t1762;
  double t1763;
  double t1764;
  double t1766;
  double t1767;
  double t1768;
  double t1769;
  double t1771;
  double t1772;
  double t1773;
  double t1774;
  t491 = Sin(var1[6]);
  t590 = Cos(var1[7]);
  t600 = -1.*t590;
  t601 = 1. + t600;
  t606 = Sin(var1[7]);
  t521 = Cos(var1[5]);
  t527 = Cos(var1[3]);
  t540 = Sin(var1[4]);
  t556 = t521*t527*t540;
  t560 = Sin(var1[5]);
  t565 = Sin(var1[3]);
  t568 = t560*t565;
  t570 = t556 + t568;
  t466 = Cos(var1[6]);
  t610 = 7.e-6*t601;
  t626 = 4.e-6*t601;
  t605 = -2.8e-11*t601;
  t691 = Cos(var1[8]);
  t692 = -1.*t691;
  t693 = 1. + t692;
  t696 = Sin(var1[8]);
  t664 = 7.e-6*t606;
  t686 = t527*t560;
  t687 = -1.*t521*t540*t565;
  t688 = t686 + t687;
  t701 = -2.8e-11*t693;
  t611 = -4.e-6*t606;
  t740 = 2.8e-11*t601;
  t607 = -1.*t606;
  t695 = 4.e-6*t693;
  t774 = 7.e-6*t693;
  t788 = -7.e-6*t601;
  t644 = 4.e-6*t606;
  t733 = -1. + t590;
  t734 = 4.e-6*t733;
  t627 = -7.e-6*t606;
  t822 = -7.e-6*t696;
  t738 = t734 + t664;
  t739 = t466*t738*t570;
  t741 = t740 + t606;
  t742 = t491*t741*t570;
  t743 = -1.000000000049*t601;
  t744 = 1. + t743;
  t745 = t744*t688;
  t749 = t739 + t742 + t745;
  t825 = 4.e-6*t696;
  t781 = -1.000000000016*t601;
  t782 = 1. + t781;
  t784 = t782*t491*t570;
  t790 = t788 + t611;
  t793 = t466*t790*t570;
  t800 = t740 + t607;
  t805 = t800*t688;
  t809 = t784 + t793 + t805;
  t829 = -6.5e-11*t601;
  t833 = 1. + t829;
  t834 = t466*t833*t570;
  t837 = t788 + t644;
  t841 = t491*t837*t570;
  t845 = t734 + t627;
  t849 = t845*t688;
  t853 = t834 + t841 + t849;
  t759 = -1.*t696;
  t859 = -7.e-6*t693;
  t775 = -4.e-6*t696;
  t887 = 2.8e-11*t693;
  t855 = -1. + t691;
  t856 = 4.e-6*t855;
  t697 = 7.e-6*t696;
  t469 = -1.*t466;
  t473 = 1. + t469;
  t486 = 0.15121*t473;
  t514 = 0.15121*t491;
  t515 = t486 + t514;
  t584 = 1.0248489999999998e-12*var1[7];
  t602 = -0.28120900000849935*t601;
  t608 = t605 + t607;
  t609 = -0.038748999993*t608;
  t612 = t610 + t611;
  t615 = -2.123459e-6*t612;
  t616 = t584 + t602 + t609 + t615;
  t932 = t527*t560*t540;
  t933 = -1.*t521*t565;
  t934 = t932 + t933;
  t618 = -1.4640699999999997e-7*var1[7];
  t622 = -1.38024835e-16*t601;
  t642 = t626 + t627;
  t643 = -0.038748999993*t642;
  t648 = t610 + t644;
  t649 = -0.281209000004*t648;
  t653 = t618 + t622 + t643 + t649;
  t658 = 5.856279999999999e-13*var1[7];
  t659 = -0.0387489999948987*t601;
  t669 = t626 + t664;
  t674 = -2.123459e-6*t669;
  t679 = t605 + t606;
  t684 = -0.281209000004*t679;
  t685 = t658 + t659 + t674 + t684;
  t690 = 1.0394599999999997e-12*var1[8];
  t694 = -0.03892299998790722*t693;
  t699 = t695 + t697;
  t700 = -3.6777349999999994e-6*t699;
  t702 = t701 + t696;
  t706 = -0.503149000008*t702;
  t724 = t690 + t694 + t700 + t706;
  t946 = -1.*t521*t527;
  t954 = -1.*t560*t540*t565;
  t964 = t946 + t954;
  t754 = 1.8190549999999993e-12*var1[8];
  t758 = -0.5031490000160505*t693;
  t764 = t701 + t759;
  t769 = -0.038922999986*t764;
  t776 = t774 + t775;
  t779 = -3.6777349999999994e-6*t776;
  t780 = t754 + t758 + t769 + t779;
  t818 = -2.598649999999999e-7*var1[8];
  t821 = -2.3905277499999995e-16*t693;
  t823 = t695 + t822;
  t824 = -0.038922999986*t823;
  t826 = t774 + t825;
  t827 = -0.503149000008*t826;
  t828 = t818 + t821 + t824 + t827;
  t857 = t856 + t822;
  t972 = t466*t738*t934;
  t973 = t491*t741*t934;
  t974 = t744*t964;
  t975 = t972 + t973 + t974;
  t861 = t859 + t825;
  t977 = t782*t491*t934;
  t978 = t466*t790*t934;
  t979 = t800*t964;
  t980 = t977 + t978 + t979;
  t865 = -6.5e-11*t693;
  t866 = 1. + t865;
  t982 = t466*t833*t934;
  t983 = t491*t837*t934;
  t984 = t845*t964;
  t985 = t982 + t983 + t984;
  t892 = t887 + t759;
  t896 = -1.000000000016*t693;
  t897 = 1. + t896;
  t899 = t859 + t775;
  t903 = -1.000000000049*t693;
  t904 = 1. + t903;
  t906 = t887 + t696;
  t911 = t856 + t697;
  t1040 = Cos(var1[4]);
  t1045 = t466*t1040*t527*t738;
  t1046 = t1040*t527*t491*t741;
  t1047 = -1.*t744*t1040*t565;
  t1048 = t1045 + t1046 + t1047;
  t1058 = t782*t1040*t527*t491;
  t1061 = t466*t1040*t527*t790;
  t1062 = -1.*t1040*t800*t565;
  t1063 = t1058 + t1061 + t1062;
  t1065 = t466*t833*t1040*t527;
  t1066 = t1040*t527*t491*t837;
  t1067 = -1.*t1040*t845*t565;
  t1068 = t1065 + t1066 + t1067;
  t1115 = t521*t491*t540;
  t1116 = t466*t521*t1040*t565;
  t1117 = t1115 + t1116;
  t1119 = -1.*t466*t521*t540;
  t1120 = t521*t1040*t491*t565;
  t1121 = t1119 + t1120;
  t1126 = t521*t1040*t527*t800;
  t1127 = t790*t1117;
  t1128 = t782*t1121;
  t1132 = t1126 + t1127 + t1128;
  t1136 = t521*t1040*t527*t845;
  t1140 = t833*t1117;
  t1141 = t837*t1121;
  t1144 = t1136 + t1140 + t1141;
  t1146 = t744*t521*t1040*t527;
  t1147 = t738*t1117;
  t1148 = t741*t1121;
  t1149 = t1146 + t1147 + t1148;
  t1110 = -0.15121*t473;
  t1111 = t1110 + t514;
  t1180 = t491*t560*t540;
  t1181 = t466*t1040*t560*t565;
  t1184 = t1180 + t1181;
  t1186 = -1.*t466*t560*t540;
  t1187 = t1040*t491*t560*t565;
  t1188 = t1186 + t1187;
  t1190 = t1040*t527*t800*t560;
  t1191 = t790*t1184;
  t1192 = t782*t1188;
  t1193 = t1190 + t1191 + t1192;
  t1195 = t1040*t527*t845*t560;
  t1196 = t833*t1184;
  t1197 = t837*t1188;
  t1198 = t1195 + t1196 + t1197;
  t1200 = t744*t1040*t527*t560;
  t1201 = t738*t1184;
  t1202 = t741*t1188;
  t1203 = t1200 + t1201 + t1202;
  t1234 = t1040*t491;
  t1235 = -1.*t466*t540*t565;
  t1236 = t1234 + t1235;
  t1238 = -1.*t466*t1040;
  t1241 = -1.*t491*t540*t565;
  t1245 = t1238 + t1241;
  t1249 = -1.*t527*t800*t540;
  t1253 = t790*t1236;
  t1258 = t782*t1245;
  t1262 = t1249 + t1253 + t1258;
  t1264 = -1.*t527*t845*t540;
  t1265 = t833*t1236;
  t1266 = t837*t1245;
  t1267 = t1264 + t1265 + t1266;
  t1269 = -1.*t744*t527*t540;
  t1270 = t738*t1236;
  t1271 = t741*t1245;
  t1272 = t1269 + t1270 + t1271;
  t1302 = -1.*t527*t560*t540;
  t1303 = t521*t565;
  t1304 = t1302 + t1303;
  t1307 = t1040*t491*t560;
  t1308 = t466*t964;
  t1309 = t1307 + t1308;
  t1311 = -1.*t466*t1040*t560;
  t1312 = t491*t964;
  t1313 = t1311 + t1312;
  t1315 = t800*t1304;
  t1316 = t790*t1309;
  t1318 = t782*t1313;
  t1320 = t1315 + t1316 + t1318;
  t1329 = t845*t1304;
  t1330 = t833*t1309;
  t1334 = t837*t1313;
  t1335 = t1329 + t1330 + t1334;
  t1337 = t744*t1304;
  t1338 = t738*t1309;
  t1339 = t741*t1313;
  t1340 = t1337 + t1338 + t1339;
  t1367 = -1.*t527*t560;
  t1368 = t521*t540*t565;
  t1369 = t1367 + t1368;
  t1371 = -1.*t521*t1040*t491;
  t1372 = t466*t1369;
  t1373 = t1371 + t1372;
  t1375 = t466*t521*t1040;
  t1376 = t491*t1369;
  t1377 = t1375 + t1376;
  t1381 = t800*t570;
  t1385 = t790*t1373;
  t1387 = t782*t1377;
  t1390 = t1381 + t1385 + t1387;
  t1392 = t845*t570;
  t1393 = t833*t1373;
  t1394 = t837*t1377;
  t1395 = t1392 + t1393 + t1394;
  t1397 = t744*t570;
  t1398 = t738*t1373;
  t1399 = t741*t1377;
  t1400 = t1397 + t1398 + t1399;
  t1426 = 0.15121*t466;
  t1433 = -1.*t466*t521*t1040;
  t1434 = -1.*t491*t1369;
  t1435 = t1433 + t1434;
  t1437 = t837*t1373;
  t1438 = t833*t1435;
  t1439 = t1437 + t1438;
  t1441 = t782*t1373;
  t1442 = t790*t1435;
  t1443 = t1441 + t1442;
  t1445 = t741*t1373;
  t1446 = t738*t1435;
  t1447 = t1445 + t1446;
  t1427 = -0.15121*t491;
  t1428 = t1426 + t1427;
  t1430 = t1426 + t514;
  t1466 = t521*t527;
  t1467 = t560*t540*t565;
  t1468 = t1466 + t1467;
  t1470 = -1.*t1040*t491*t560;
  t1471 = t466*t1468;
  t1472 = t1470 + t1471;
  t1474 = -1.*t491*t1468;
  t1475 = t1311 + t1474;
  t1477 = t837*t1472;
  t1478 = t833*t1475;
  t1479 = t1477 + t1478;
  t1481 = t782*t1472;
  t1482 = t790*t1475;
  t1483 = t1481 + t1482;
  t1485 = t741*t1472;
  t1486 = t738*t1475;
  t1487 = t1485 + t1486;
  t1507 = t491*t540;
  t1508 = t466*t1040*t565;
  t1509 = t1507 + t1508;
  t1511 = t466*t540;
  t1512 = -1.*t1040*t491*t565;
  t1513 = t1511 + t1512;
  t1515 = t837*t1509;
  t1516 = t833*t1513;
  t1517 = t1515 + t1516;
  t1519 = t782*t1509;
  t1520 = t790*t1513;
  t1521 = t1519 + t1520;
  t1523 = t741*t1509;
  t1524 = t738*t1513;
  t1525 = t1523 + t1524;
  t1543 = -2.8e-11*t606;
  t1552 = -7.e-6*t590;
  t1555 = 4.e-6*t590;
  t1546 = 7.e-6*t590;
  t1579 = 2.8e-11*t606;
  t1563 = -4.e-6*t590;
  t1569 = t1552 + t611;
  t1570 = t1569*t570;
  t1571 = -6.5e-11*t606*t1373;
  t1572 = t1555 + t627;
  t1573 = t1572*t1377;
  t1574 = t1570 + t1571 + t1573;
  t1576 = -1.000000000049*t606*t570;
  t1577 = t1546 + t611;
  t1578 = t1577*t1373;
  t1580 = t590 + t1579;
  t1581 = t1580*t1377;
  t1582 = t1576 + t1578 + t1581;
  t1584 = t600 + t1579;
  t1585 = t1584*t570;
  t1586 = t1563 + t627;
  t1587 = t1586*t1373;
  t1588 = -1.000000000016*t606*t1377;
  t1589 = t1585 + t1587 + t1588;
  t1544 = t590 + t1543;
  t1545 = -0.281209000004*t1544;
  t1547 = t1546 + t644;
  t1548 = -2.123459e-6*t1547;
  t1549 = -0.0387489999948987*t606;
  t1550 = 5.856279999999999e-13 + t1545 + t1548 + t1549;
  t1553 = t1552 + t644;
  t1554 = -0.038748999993*t1553;
  t1556 = t1555 + t664;
  t1557 = -0.281209000004*t1556;
  t1558 = -1.38024835e-16*t606;
  t1559 = -1.4640699999999997e-7 + t1554 + t1557 + t1558;
  t1561 = t600 + t1543;
  t1562 = -0.038748999993*t1561;
  t1564 = t1563 + t664;
  t1565 = -2.123459e-6*t1564;
  t1566 = -0.28120900000849935*t606;
  t1567 = 1.0248489999999998e-12 + t1562 + t1565 + t1566;
  t1609 = t466*t1040*t560;
  t1610 = t491*t1468;
  t1611 = t1609 + t1610;
  t1613 = t1569*t934;
  t1614 = -6.5e-11*t606*t1472;
  t1615 = t1572*t1611;
  t1616 = t1613 + t1614 + t1615;
  t1618 = -1.000000000049*t606*t934;
  t1619 = t1577*t1472;
  t1620 = t1580*t1611;
  t1621 = t1618 + t1619 + t1620;
  t1623 = t1584*t934;
  t1624 = t1586*t1472;
  t1625 = -1.000000000016*t606*t1611;
  t1626 = t1623 + t1624 + t1625;
  t1646 = -1.*t466*t540;
  t1647 = t1040*t491*t565;
  t1648 = t1646 + t1647;
  t1650 = t1040*t527*t1569;
  t1651 = -6.5e-11*t606*t1509;
  t1652 = t1572*t1648;
  t1653 = t1650 + t1651 + t1652;
  t1655 = -1.000000000049*t1040*t527*t606;
  t1656 = t1577*t1509;
  t1657 = t1580*t1648;
  t1658 = t1655 + t1656 + t1657;
  t1660 = t1040*t527*t1584;
  t1661 = t1586*t1509;
  t1662 = -1.000000000016*t606*t1648;
  t1663 = t1660 + t1661 + t1662;
  t1681 = -2.8e-11*t696;
  t1693 = 4.e-6*t691;
  t1690 = -7.e-6*t691;
  t1684 = -4.e-6*t691;
  t1717 = 2.8e-11*t696;
  t1701 = 7.e-6*t691;
  t1682 = t692 + t1681;
  t1683 = -0.038922999986*t1682;
  t1685 = t1684 + t697;
  t1686 = -3.6777349999999994e-6*t1685;
  t1687 = -0.5031490000160505*t696;
  t1688 = 1.8190549999999993e-12 + t1683 + t1686 + t1687;
  t1691 = t1690 + t825;
  t1692 = -0.038922999986*t1691;
  t1694 = t1693 + t697;
  t1695 = -0.503149000008*t1694;
  t1696 = -2.3905277499999995e-16*t696;
  t1697 = -2.598649999999999e-7 + t1692 + t1695 + t1696;
  t1699 = t691 + t1681;
  t1700 = -0.503149000008*t1699;
  t1702 = t1701 + t825;
  t1703 = -3.6777349999999994e-6*t1702;
  t1704 = -0.03892299998790722*t696;
  t1705 = 1.0394599999999997e-12 + t1700 + t1703 + t1704;
  t1707 = t1693 + t822;
  t1730 = t800*t934;
  t1731 = t790*t1472;
  t1732 = t782*t1611;
  t1733 = t1730 + t1731 + t1732;
  t1735 = t845*t934;
  t1736 = t833*t1472;
  t1737 = t837*t1611;
  t1738 = t1735 + t1736 + t1737;
  t1710 = t1690 + t775;
  t1740 = t744*t934;
  t1741 = t738*t1472;
  t1742 = t741*t1611;
  t1743 = t1740 + t1741 + t1742;
  t1715 = t1684 + t822;
  t1718 = t692 + t1717;
  t1722 = t691 + t1717;
  t1724 = t1701 + t775;
  t1761 = t1040*t527*t800;
  t1762 = t790*t1509;
  t1763 = t782*t1648;
  t1764 = t1761 + t1762 + t1763;
  t1766 = t1040*t527*t845;
  t1767 = t833*t1509;
  t1768 = t837*t1648;
  t1769 = t1766 + t1767 + t1768;
  t1771 = t744*t1040*t527;
  t1772 = t738*t1509;
  t1773 = t741*t1648;
  t1774 = t1771 + t1772 + t1773;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t515*t570 + t491*t570*t616 + t466*t570*t653 + t685*t688 + t724*t749 + t780*t809 + t828*t853 + 0.148705*(t749*t857 + t809*t861 + t853*t866) - 0.80315*(t749*t892 + t809*t897 + t853*t899) - 0.038924*(t749*t904 + t809*t906 + t853*t911);
  p_output1[10]=t515*t934 + t491*t616*t934 + t466*t653*t934 + t685*t964 + t724*t975 + t780*t980 + t828*t985 + 0.148705*(t857*t975 + t861*t980 + t866*t985) - 0.80315*(t892*t975 + t897*t980 + t899*t985) - 0.038924*(t904*t975 + t906*t980 + t911*t985);
  p_output1[11]=t1040*t515*t527 + t1040*t491*t527*t616 + t1040*t466*t527*t653 - 1.*t1040*t565*t685 + t1048*t724 + t1063*t780 + t1068*t828 + 0.148705*(t1048*t857 + t1063*t861 + t1068*t866) - 0.80315*(t1048*t892 + t1063*t897 + t1068*t899) - 0.038924*(t1048*t904 + t1063*t906 + t1068*t911);
  p_output1[12]=-1.*t1111*t521*t540 + t1040*t515*t521*t565 + t1121*t616 + t1117*t653 + t1040*t521*t527*t685 + t1149*t724 + t1132*t780 + t1144*t828 + 0.148705*(t1149*t857 + t1132*t861 + t1144*t866) - 0.80315*(t1149*t892 + t1132*t897 + t1144*t899) - 0.038924*(t1149*t904 + t1132*t906 + t1144*t911);
  p_output1[13]=-1.*t1111*t540*t560 + t1040*t515*t560*t565 + t1188*t616 + t1184*t653 + t1040*t527*t560*t685 + t1203*t724 + t1193*t780 + t1198*t828 + 0.148705*(t1203*t857 + t1193*t861 + t1198*t866) - 0.80315*(t1203*t892 + t1193*t897 + t1198*t899) - 0.038924*(t1203*t904 + t1193*t906 + t1198*t911);
  p_output1[14]=-1.*t1040*t1111 - 1.*t515*t540*t565 + t1245*t616 + t1236*t653 - 1.*t527*t540*t685 + t1272*t724 + t1262*t780 + t1267*t828 + 0.148705*(t1272*t857 + t1262*t861 + t1267*t866) - 0.80315*(t1272*t892 + t1262*t897 + t1267*t899) - 0.038924*(t1272*t904 + t1262*t906 + t1267*t911);
  p_output1[15]=-1.*t1040*t1111*t560 + t1313*t616 + t1309*t653 + t1304*t685 + t1340*t724 + t1320*t780 + t1335*t828 + 0.148705*(t1340*t857 + t1320*t861 + t1335*t866) - 0.80315*(t1340*t892 + t1320*t897 + t1335*t899) - 0.038924*(t1340*t904 + t1320*t906 + t1335*t911) + t515*t964;
  p_output1[16]=t1369*t515 + t1040*t1111*t521 + t1377*t616 + t1373*t653 + t570*t685 + t1400*t724 + t1390*t780 + t1395*t828 + 0.148705*(t1400*t857 + t1390*t861 + t1395*t866) - 0.80315*(t1400*t892 + t1390*t897 + t1395*t899) - 0.038924*(t1400*t904 + t1390*t906 + t1395*t911);
  p_output1[17]=0;
  p_output1[18]=t1369*t1430 + t1040*t1428*t521 + t1373*t616 + t1435*t653 + t1447*t724 + t1443*t780 + t1439*t828 + 0.148705*(t1447*t857 + t1443*t861 + t1439*t866) - 0.80315*(t1447*t892 + t1443*t897 + t1439*t899) - 0.038924*(t1447*t904 + t1443*t906 + t1439*t911);
  p_output1[19]=t1430*t1468 + t1040*t1428*t560 + t1472*t616 + t1475*t653 + t1487*t724 + t1483*t780 + t1479*t828 + 0.148705*(t1487*t857 + t1483*t861 + t1479*t866) - 0.80315*(t1487*t892 + t1483*t897 + t1479*t899) - 0.038924*(t1487*t904 + t1483*t906 + t1479*t911);
  p_output1[20]=-1.*t1428*t540 + t1040*t1430*t565 + t1509*t616 + t1513*t653 + t1525*t724 + t1521*t780 + t1517*t828 + 0.148705*(t1525*t857 + t1521*t861 + t1517*t866) - 0.80315*(t1525*t892 + t1521*t897 + t1517*t899) - 0.038924*(t1525*t904 + t1521*t906 + t1517*t911);
  p_output1[21]=t1373*t1559 + t1377*t1567 + t1550*t570 + t1582*t724 + t1589*t780 + t1574*t828 + 0.148705*(t1582*t857 + t1589*t861 + t1574*t866) - 0.80315*(t1582*t892 + t1589*t897 + t1574*t899) - 0.038924*(t1582*t904 + t1589*t906 + t1574*t911);
  p_output1[22]=t1472*t1559 + t1567*t1611 + t1621*t724 + t1626*t780 + t1616*t828 + 0.148705*(t1621*t857 + t1626*t861 + t1616*t866) - 0.80315*(t1621*t892 + t1626*t897 + t1616*t899) - 0.038924*(t1621*t904 + t1626*t906 + t1616*t911) + t1550*t934;
  p_output1[23]=t1509*t1559 + t1567*t1648 + t1040*t1550*t527 + t1658*t724 + t1663*t780 + t1653*t828 + 0.148705*(t1658*t857 + t1663*t861 + t1653*t866) - 0.80315*(t1658*t892 + t1663*t897 + t1653*t899) - 0.038924*(t1658*t904 + t1663*t906 + t1653*t911);
  p_output1[24]=t1390*t1688 + t1395*t1697 + t1400*t1705 - 0.80315*(t1395*t1715 + t1400*t1718 - 1.000000000016*t1390*t696) + 0.148705*(t1390*t1707 + t1400*t1710 - 6.5e-11*t1395*t696) - 0.038924*(t1390*t1722 + t1395*t1724 - 1.000000000049*t1400*t696);
  p_output1[25]=t1688*t1733 + t1697*t1738 + t1705*t1743 - 0.80315*(t1715*t1738 + t1718*t1743 - 1.000000000016*t1733*t696) + 0.148705*(t1707*t1733 + t1710*t1743 - 6.5e-11*t1738*t696) - 0.038924*(t1722*t1733 + t1724*t1738 - 1.000000000049*t1743*t696);
  p_output1[26]=t1688*t1764 + t1697*t1769 + t1705*t1774 - 0.80315*(t1715*t1769 + t1718*t1774 - 1.000000000016*t1764*t696) + 0.148705*(t1707*t1764 + t1710*t1774 - 6.5e-11*t1769*t696) - 0.038924*(t1722*t1764 + t1724*t1769 - 1.000000000049*t1774*t696);
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

#include "J_rl.hh"

namespace SymFunction
{

void J_rl_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
