/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:46:23 GMT+02:00
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
  double t75;
  double t40;
  double t83;
  double t134;
  double t120;
  double t125;
  double t175;
  double t69;
  double t133;
  double t176;
  double t180;
  double t99;
  double t212;
  double t213;
  double t216;
  double t187;
  double t246;
  double t250;
  double t257;
  double t261;
  double t262;
  double t265;
  double t217;
  double t218;
  double t235;
  double t341;
  double t342;
  double t346;
  double t367;
  double t372;
  double t376;
  double t356;
  double t357;
  double t358;
  double t74;
  double t102;
  double t104;
  double t401;
  double t405;
  double t184;
  double t236;
  double t239;
  double t242;
  double t266;
  double t269;
  double t287;
  double t289;
  double t290;
  double t283;
  double t284;
  double t285;
  double t347;
  double t351;
  double t352;
  double t432;
  double t433;
  double t435;
  double t414;
  double t417;
  double t418;
  double t384;
  double t385;
  double t386;
  double t660;
  double t666;
  double t670;
  double t649;
  double t651;
  double t652;
  double t705;
  double t706;
  double t707;
  double t455;
  double t456;
  double t460;
  double t464;
  double t467;
  double t468;
  double t472;
  double t475;
  double t476;
  double t522;
  double t527;
  double t530;
  double t553;
  double t558;
  double t560;
  double t595;
  double t596;
  double t601;
  double t623;
  double t624;
  double t631;
  double t634;
  double t635;
  double t637;
  double t672;
  double t674;
  double t675;
  double t683;
  double t690;
  double t691;
  double t825;
  double t831;
  double t835;
  double t815;
  double t816;
  double t817;
  double t862;
  double t866;
  double t867;
  double t871;
  double t874;
  double t875;
  double t877;
  double t878;
  double t879;
  double t861;
  double t868;
  double t882;
  double t885;
  double t860;
  double t886;
  double t888;
  double t890;
  double t893;
  double t896;
  double t897;
  double t899;
  double t900;
  double t901;
  double t903;
  double t905;
  double t906;
  double t907;
  double t908;
  double t909;
  double t910;
  double t911;
  double t396;
  double t397;
  double t400;
  double t921;
  double t922;
  double t923;
  double t917;
  double t918;
  double t919;
  double t889;
  double t912;
  double t914;
  double t930;
  double t931;
  double t932;
  double t1097;
  double t1101;
  double t1105;
  double t933;
  double t934;
  double t938;
  double t939;
  double t952;
  double t953;
  double t956;
  double t957;
  double t972;
  double t976;
  double t977;
  double t980;
  double t1005;
  double t1008;
  double t1009;
  double t1015;
  double t1046;
  double t1050;
  double t1051;
  double t1057;
  double t1076;
  double t1081;
  double t1085;
  double t1086;
  double t311;
  double t312;
  double t313;
  double t1263;
  double t1267;
  double t1271;
  double t1273;
  double t1276;
  double t306;
  double t307;
  double t309;
  double t1283;
  double t1284;
  double t1285;
  double t1288;
  double t1289;
  double t1290;
  double t323;
  double t324;
  double t325;
  double t1261;
  double t1381;
  double t1388;
  double t1392;
  double t1395;
  double t1399;
  double t1400;
  double t1413;
  double t1419;
  double t1421;
  double t1389;
  double t1401;
  double t1403;
  double t1412;
  double t1422;
  double t1423;
  double t1431;
  double t1432;
  double t1433;
  double t340;
  double t353;
  double t354;
  double t380;
  double t388;
  double t389;
  double t1556;
  double t1557;
  double t1558;
  double t1555;
  double t1559;
  double t1560;
  double t1562;
  double t1566;
  double t1579;
  double t1580;
  double t1582;
  double t1561;
  double t1567;
  double t1570;
  double t1578;
  double t1585;
  double t1592;
  double t1594;
  double t1595;
  double t1597;
  double t1107;
  double t1129;
  double t1130;
  double t1156;
  double t1160;
  double t1181;
  double t1183;
  double t1207;
  double t1228;
  double t1236;
  double t1686;
  double t1687;
  double t1688;
  double t1272;
  double t1287;
  double t1296;
  double t1301;
  double t1706;
  double t1707;
  double t1708;
  double t1321;
  double t1322;
  double t1720;
  double t1721;
  double t1722;
  double t1332;
  double t1333;
  double t1725;
  double t1726;
  double t1727;
  double t1738;
  double t1741;
  double t1742;
  double t1347;
  double t1785;
  double t1351;
  double t1360;
  double t1361;
  double t1760;
  double t1761;
  double t1762;
  double t1411;
  double t1444;
  double t1871;
  double t1474;
  double t1486;
  double t1487;
  double t1518;
  double t1530;
  double t1532;
  double t1571;
  double t1602;
  double t1603;
  double t1622;
  double t1623;
  double t1634;
  double t1644;
  double t1649;
  double t1827;
  double t1834;
  double t1846;
  double t1847;
  double t1775;
  double t1777;
  double t1791;
  double t1792;
  double t1804;
  double t1805;
  double t1812;
  double t1813;
  double t1955;
  double t1956;
  double t1898;
  double t1899;
  double t1972;
  double t1973;
  double t1872;
  double t2012;
  double t1993;
  double t1994;
  double t1995;
  double t2001;
  double t2002;
  double t2003;
  double t1885;
  double t1886;
  double t1881;
  double t1962;
  double t1963;
  double t1939;
  double t1912;
  double t1913;
  double t1983;
  double t1984;
  double t1928;
  double t1921;
  double t1922;
  double t1964;
  double t1985;
  double t2028;
  double t2029;
  double t2034;
  double t2085;
  double t2086;
  double t2092;
  double t2093;
  double t2058;
  double t2062;
  double t2065;
  double t2132;
  double t2133;
  t75 = Cos(var1[12]);
  t40 = Cos(var1[4]);
  t83 = Sin(var1[4]);
  t134 = Cos(var1[13]);
  t120 = Cos(var1[14]);
  t125 = Sin(var1[13]);
  t175 = Sin(var1[14]);
  t69 = Sin(var1[12]);
  t133 = t120*t125;
  t176 = -1.*t134*t175;
  t180 = t133 + t176;
  t99 = Sin(var1[5]);
  t212 = t134*t120;
  t213 = t125*t175;
  t216 = t212 + t213;
  t187 = Cos(var1[5]);
  t246 = -1.*t120*t125;
  t250 = t134*t175;
  t257 = t246 + t250;
  t261 = t187*t257;
  t262 = t69*t216*t99;
  t265 = t261 + t262;
  t217 = t187*t216;
  t218 = t69*t180*t99;
  t235 = t217 + t218;
  t341 = -1.*t134*t120;
  t342 = -1.*t125*t175;
  t346 = t341 + t342;
  t367 = t75*t180*t83;
  t372 = t40*t235;
  t376 = t367 + t372;
  t356 = t75*t216*t83;
  t357 = t40*t265;
  t358 = t356 + t357;
  t74 = t40*t69;
  t102 = t75*t83*t99;
  t104 = t74 + t102;
  t401 = Sin(var1[3]);
  t405 = Cos(var1[3]);
  t184 = t75*t40*t180;
  t236 = -1.*t83*t235;
  t239 = t184 + t236;
  t242 = t75*t40*t216;
  t266 = -1.*t83*t265;
  t269 = t242 + t266;
  t287 = t187*t69*t180;
  t289 = -1.*t216*t99;
  t290 = t287 + t289;
  t283 = t187*t69*t216;
  t284 = -1.*t257*t99;
  t285 = t283 + t284;
  t347 = t187*t346;
  t351 = t69*t257*t99;
  t352 = t347 + t351;
  t432 = -1.*t187*t69*t216;
  t433 = t257*t99;
  t435 = t432 + t433;
  t414 = -1.*t187*t69*t180;
  t417 = t216*t99;
  t418 = t414 + t417;
  t384 = t187*t180;
  t385 = t69*t346*t99;
  t386 = t384 + t385;
  t660 = t405*t418;
  t666 = -1.*t401*t239;
  t670 = t660 + t666;
  t649 = t405*t435;
  t651 = -1.*t401*t269;
  t652 = t649 + t651;
  t705 = t75*t405*t187;
  t706 = -1.*t401*t104;
  t707 = t705 + t706;
  t455 = -1.*t69*t83;
  t456 = t75*t40*t99;
  t460 = t455 + t456;
  t464 = -1.*t75*t180*t83;
  t467 = -1.*t40*t235;
  t468 = t464 + t467;
  t472 = -1.*t75*t216*t83;
  t475 = -1.*t40*t265;
  t476 = t472 + t475;
  t522 = t75*t40;
  t527 = -1.*t69*t83*t99;
  t530 = t522 + t527;
  t553 = -1.*t40*t69*t180;
  t558 = -1.*t75*t180*t83*t99;
  t560 = t553 + t558;
  t595 = -1.*t40*t69*t216;
  t596 = -1.*t75*t216*t83*t99;
  t601 = t595 + t596;
  t623 = -1.*t187*t69*t257;
  t624 = t346*t99;
  t631 = t623 + t624;
  t634 = t75*t40*t257;
  t635 = -1.*t83*t352;
  t637 = t634 + t635;
  t672 = -1.*t187*t69*t346;
  t674 = t180*t99;
  t675 = t672 + t674;
  t683 = t75*t40*t346;
  t690 = -1.*t83*t386;
  t691 = t683 + t690;
  t825 = t401*t418;
  t831 = t405*t239;
  t835 = t825 + t831;
  t815 = t401*t435;
  t816 = t405*t269;
  t817 = t815 + t816;
  t862 = -0.0641*t120;
  t866 = -0.28*t175;
  t867 = t862 + t866;
  t871 = -1.*t120;
  t874 = 1. + t871;
  t875 = 0.075*t874;
  t877 = 0.355*t120;
  t878 = -0.0641*t175;
  t879 = t875 + t877 + t878;
  t861 = -0.325*t125;
  t868 = t134*t867;
  t882 = t125*t879;
  t885 = t861 + t868 + t882;
  t860 = -0.068*t69;
  t886 = t75*t885;
  t888 = t860 + t886;
  t890 = -1.*t134;
  t893 = 1. + t890;
  t896 = 0.325*t893;
  t897 = -1.*t125*t867;
  t899 = t134*t879;
  t900 = t896 + t897 + t899;
  t901 = t187*t900;
  t903 = -1.*t75;
  t905 = 1. + t903;
  t906 = -0.1575*t905;
  t907 = -0.2255*t75;
  t908 = -1.*t69*t885;
  t909 = t906 + t907 + t908;
  t910 = -1.*t909*t99;
  t911 = t901 + t910;
  t396 = t69*t83;
  t397 = -1.*t75*t40*t99;
  t400 = t396 + t397;
  t921 = t40*t888;
  t922 = -1.*t83*t911;
  t923 = t921 + t922;
  t917 = t888*t83;
  t918 = t40*t911;
  t919 = t917 + t918;
  t889 = -1.*t888*t83;
  t912 = -1.*t40*t911;
  t914 = t889 + t912;
  t930 = t187*t909;
  t931 = t900*t99;
  t932 = t930 + t931;
  t1097 = -1.*t187*t909;
  t1101 = -1.*t900*t99;
  t1105 = t1097 + t1101;
  t933 = t75*t187*t932;
  t934 = t400*t919;
  t938 = t104*t923;
  t939 = t933 + t934 + t938;
  t952 = -1.*t932*t418;
  t953 = -1.*t919*t376;
  t956 = -1.*t923*t239;
  t957 = t952 + t953 + t956;
  t972 = t932*t418;
  t976 = t919*t376;
  t977 = t923*t239;
  t980 = t972 + t976 + t977;
  t1005 = -1.*t932*t435;
  t1008 = -1.*t919*t358;
  t1009 = -1.*t923*t269;
  t1015 = t1005 + t1008 + t1009;
  t1046 = -1.*t75*t187*t932;
  t1050 = -1.*t400*t919;
  t1051 = -1.*t104*t923;
  t1057 = t1046 + t1050 + t1051;
  t1076 = t932*t435;
  t1081 = t919*t358;
  t1085 = t923*t269;
  t1086 = t1076 + t1081 + t1085;
  t311 = -1.*t69*t180*t83;
  t312 = t75*t40*t180*t99;
  t313 = t311 + t312;
  t1263 = 0.068*t69;
  t1267 = -1.*t75*t885;
  t1271 = t1263 + t1267;
  t1273 = -0.068*t75;
  t1276 = t1273 + t908;
  t306 = t75*t83;
  t307 = t40*t69*t99;
  t309 = t306 + t307;
  t1283 = t1276*t83;
  t1284 = -1.*t40*t1271*t99;
  t1285 = t1283 + t1284;
  t1288 = t40*t1276;
  t1289 = t1271*t83*t99;
  t1290 = t1288 + t1289;
  t323 = -1.*t69*t216*t83;
  t324 = t75*t40*t216*t99;
  t325 = t323 + t324;
  t1261 = Power(t187,2);
  t1381 = -0.325*t134;
  t1388 = t1381 + t897 + t899;
  t1392 = 0.325*t125;
  t1395 = -1.*t134*t867;
  t1399 = -1.*t125*t879;
  t1400 = t1392 + t1395 + t1399;
  t1413 = t187*t1400;
  t1419 = t69*t1388*t99;
  t1421 = t1413 + t1419;
  t1389 = -1.*t187*t69*t1388;
  t1401 = t1400*t99;
  t1403 = t1389 + t1401;
  t1412 = t75*t1388*t83;
  t1422 = t40*t1421;
  t1423 = t1412 + t1422;
  t1431 = t75*t40*t1388;
  t1432 = -1.*t83*t1421;
  t1433 = t1431 + t1432;
  t340 = t75*t257*t83;
  t353 = t40*t352;
  t354 = t340 + t353;
  t380 = t75*t346*t83;
  t388 = t40*t386;
  t389 = t380 + t388;
  t1556 = -0.28*t120;
  t1557 = 0.0641*t175;
  t1558 = t1556 + t1557;
  t1555 = t125*t867;
  t1559 = t134*t1558;
  t1560 = t1555 + t1559;
  t1562 = -1.*t125*t1558;
  t1566 = t868 + t1562;
  t1579 = t187*t1566;
  t1580 = t69*t1560*t99;
  t1582 = t1579 + t1580;
  t1561 = -1.*t187*t69*t1560;
  t1567 = t1566*t99;
  t1570 = t1561 + t1567;
  t1578 = t75*t1560*t83;
  t1585 = t40*t1582;
  t1592 = t1578 + t1585;
  t1594 = t75*t40*t1560;
  t1595 = -1.*t83*t1582;
  t1597 = t1594 + t1595;
  t1107 = -1.*t75*t99*t932;
  t1129 = -1.*t932*t235;
  t1130 = -1.*t911*t418;
  t1156 = t932*t235;
  t1160 = t911*t418;
  t1181 = -1.*t911*t435;
  t1183 = -1.*t932*t265;
  t1207 = t75*t99*t932;
  t1228 = t911*t435;
  t1236 = t932*t265;
  t1686 = t69*t888;
  t1687 = -1.*t75*t99*t911;
  t1688 = t1686 + t1687 + t933;
  t1272 = t75*t1261*t1271;
  t1287 = -1.*t187*t69*t932;
  t1296 = t75*t187*t180*t932;
  t1301 = -1.*t187*t1271*t418;
  t1706 = -1.*t75*t888*t180;
  t1707 = -1.*t911*t235;
  t1708 = t1706 + t1707 + t952;
  t1321 = -1.*t75*t187*t180*t932;
  t1322 = t187*t1271*t418;
  t1720 = t75*t888*t180;
  t1721 = t911*t235;
  t1722 = t1720 + t1721 + t972;
  t1332 = t75*t187*t216*t932;
  t1333 = -1.*t187*t1271*t435;
  t1725 = -1.*t75*t888*t216;
  t1726 = -1.*t911*t265;
  t1727 = t1725 + t1005 + t1726;
  t1738 = -1.*t69*t888;
  t1741 = t75*t99*t911;
  t1742 = t1738 + t1741 + t1046;
  t1347 = -1.*t75*t1261*t1271;
  t1785 = Power(t99,2);
  t1351 = t187*t69*t932;
  t1360 = -1.*t75*t187*t216*t932;
  t1361 = t187*t1271*t435;
  t1760 = t75*t888*t216;
  t1761 = t911*t265;
  t1762 = t1760 + t1076 + t1761;
  t1411 = t75*t187*t1403;
  t1444 = -1.*t1403*t418;
  t1871 = Power(t75,2);
  t1474 = t1403*t418;
  t1486 = -1.*t1403*t435;
  t1487 = -1.*t932*t631;
  t1518 = -1.*t75*t187*t1403;
  t1530 = t1403*t435;
  t1532 = t932*t631;
  t1571 = t75*t187*t1570;
  t1602 = -1.*t932*t675;
  t1603 = -1.*t1570*t418;
  t1622 = t932*t675;
  t1623 = t1570*t418;
  t1634 = -1.*t1570*t435;
  t1644 = -1.*t75*t187*t1570;
  t1649 = t1570*t435;
  t1827 = -1.*t75*t888;
  t1834 = -1.*t69*t1276;
  t1846 = -1.*t69*t888*t216;
  t1847 = t75*t1276*t216;
  t1775 = t75*t888;
  t1777 = t69*t1276;
  t1791 = t69*t888*t180;
  t1792 = -1.*t75*t1276*t180;
  t1804 = -1.*t69*t888*t180;
  t1805 = t75*t1276*t180;
  t1812 = t69*t888*t216;
  t1813 = -1.*t75*t1276*t216;
  t1955 = -1.*t75*t909;
  t1956 = t1738 + t1955;
  t1898 = t75*t888*t257;
  t1899 = t1871*t1388*t216;
  t1972 = t75*t909;
  t1973 = t1686 + t1972;
  t1872 = -1.*t1871*t1388*t180;
  t2012 = Power(t69,2);
  t1993 = -1.*t900*t257;
  t1994 = t69*t909*t216;
  t1995 = t1993 + t1725 + t1994;
  t2001 = -1.*t69*t909*t180;
  t2002 = t900*t216;
  t2003 = t1720 + t2001 + t2002;
  t1885 = -1.*t75*t888*t257;
  t1886 = -1.*t1871*t1388*t216;
  t1881 = t1871*t1388*t180;
  t1962 = t900*t257;
  t1963 = -1.*t69*t909*t216;
  t1939 = t1871*t1560*t216;
  t1912 = -1.*t1871*t1560*t180;
  t1913 = -1.*t75*t888*t346;
  t1983 = t69*t909*t180;
  t1984 = -1.*t900*t216;
  t1928 = -1.*t1871*t1560*t216;
  t1921 = t1871*t1560*t180;
  t1922 = t75*t888*t346;
  t1964 = t1962 + t1760 + t1963;
  t1985 = t1706 + t1983 + t1984;
  t2028 = -1.*t1400*t257;
  t2029 = -1.*t900*t346;
  t2034 = t1400*t216;
  t2085 = t885*t180;
  t2086 = t2085 + t2002;
  t2092 = -1.*t885*t216;
  t2093 = t1993 + t2092;
  t2058 = -1.*t1566*t257;
  t2062 = t900*t180;
  t2065 = t1566*t216;
  t2132 = 0.325*t175;
  t2133 = -1.*t879*t175;
  p_output1[0]=t239*var2[0] + t104*var2[1] + t269*var2[2];
  p_output1[1]=t290*t40*var2[0] - 1.*t187*t40*t75*var2[1] + t285*t40*var2[2];
  p_output1[2]=t313*var2[0] + t309*var2[1] + t325*var2[2];
  p_output1[3]=t358*var2[0] + t354*var2[2];
  p_output1[4]=t389*var2[0] + t376*var2[2];
  p_output1[5]=t376;
  p_output1[6]=t400;
  p_output1[7]=t358;
  p_output1[8]=(-1.*t239*t405 - 1.*t401*t418)*var2[0] + (-1.*t104*t405 - 1.*t187*t401*t75)*var2[1] + (-1.*t269*t405 - 1.*t401*t435)*var2[2];
  p_output1[9]=-1.*t401*t468*var2[0] - 1.*t401*t460*var2[1] - 1.*t401*t476*var2[2];
  p_output1[10]=(t235*t405 + t290*t401*t83)*var2[0] + (-1.*t187*t401*t75*t83 - 1.*t405*t75*t99)*var2[1] + (t265*t405 + t285*t401*t83)*var2[2];
  p_output1[11]=(-1.*t401*t560 - 1.*t180*t187*t405*t75)*var2[0] + (-1.*t401*t530 - 1.*t187*t405*t69)*var2[1] + (-1.*t401*t601 - 1.*t187*t216*t405*t75)*var2[2];
  p_output1[12]=t652*var2[0] + (t405*t631 - 1.*t401*t637)*var2[2];
  p_output1[13]=(t405*t675 - 1.*t401*t691)*var2[0] + t670*var2[2];
  p_output1[14]=t670;
  p_output1[15]=t707;
  p_output1[16]=t652;
  p_output1[17]=t670*var2[0] + t707*var2[1] + t652*var2[2];
  p_output1[18]=t405*t468*var2[0] + t405*t460*var2[1] + t405*t476*var2[2];
  p_output1[19]=(t235*t401 - 1.*t290*t405*t83)*var2[0] + (t187*t405*t75*t83 - 1.*t401*t75*t99)*var2[1] + (t265*t401 - 1.*t285*t405*t83)*var2[2];
  p_output1[20]=(t405*t560 - 1.*t180*t187*t401*t75)*var2[0] + (t405*t530 - 1.*t187*t401*t69)*var2[1] + (t405*t601 - 1.*t187*t216*t401*t75)*var2[2];
  p_output1[21]=t817*var2[0] + (t401*t631 + t405*t637)*var2[2];
  p_output1[22]=(t401*t675 + t405*t691)*var2[0] + t835*var2[2];
  p_output1[23]=t835;
  p_output1[24]=t104*t405 + t187*t401*t75;
  p_output1[25]=t817;
  p_output1[26]=(t104*t1086 + t1057*t269 + t358*(-1.*t104*t914 - 1.*t104*t919 - 1.*t400*t923 - 1.*t460*t923) + t400*(t269*t914 + t269*t919 + t358*t923 + t476*t923))*var2[0] + (t1015*t239 + t358*(t239*t914 + t239*t919 + t376*t923 + t468*t923) + t376*(-1.*t269*t914 - 1.*t269*t919 - 1.*t358*t923 - 1.*t476*t923) + t269*t980)*var2[1] + (t376*(t104*t914 + t104*t919 + t400*t923 + t460*t923) + t400*(-1.*t239*t914 - 1.*t239*t919 - 1.*t376*t923 - 1.*t468*t923) + t239*t939 + t104*t957)*var2[2];
  p_output1[27]=(t1057*t285*t40 - 1.*t1086*t187*t40*t75 + t400*(t1228 + t1236 + t1105*t358*t40 - 1.*t1105*t269*t83 + t285*t40*t919 - 1.*t285*t83*t923) + t358*(t1207 - 1.*t1105*t40*t400 + t104*t1105*t83 - 1.*t187*t75*t911 + t187*t40*t75*t919 - 1.*t187*t75*t83*t923))*var2[0] + (t1015*t290*t40 + t376*(t1181 + t1183 - 1.*t1105*t358*t40 + t1105*t269*t83 - 1.*t285*t40*t919 + t285*t83*t923) + t358*(t1156 + t1160 + t1105*t376*t40 - 1.*t1105*t239*t83 + t290*t40*t919 - 1.*t290*t83*t923) + t285*t40*t980)*var2[1] + (t400*(t1129 + t1130 - 1.*t1105*t376*t40 + t1105*t239*t83 - 1.*t290*t40*t919 + t290*t83*t923) + t376*(t1107 + t1105*t40*t400 - 1.*t104*t1105*t83 + t187*t75*t911 - 1.*t187*t40*t75*t919 + t187*t75*t83*t923) + t290*t40*t939 - 1.*t187*t40*t75*t957)*var2[2];
  p_output1[28]=(t1086*t309 + t1057*t325 + t358*(-1.*t104*t1290 + t1347 + t1351 - 1.*t1285*t400 - 1.*t309*t919 - 1.*t530*t923) + t400*(t1360 + t1361 + t1290*t269 + t1285*t358 + t325*t919 + t601*t923))*var2[0] + (t1015*t313 + t358*(t1321 + t1322 + t1290*t239 + t1285*t376 + t313*t919 + t560*t923) + t376*(t1332 + t1333 - 1.*t1290*t269 - 1.*t1285*t358 - 1.*t325*t919 - 1.*t601*t923) + t325*t980)*var2[1] + (t376*(t1272 + t1287 + t104*t1290 + t1285*t400 + t309*t919 + t530*t923) + t400*(t1296 + t1301 - 1.*t1290*t239 - 1.*t1285*t376 - 1.*t313*t919 - 1.*t560*t923) + t313*t939 + t309*t957)*var2[2];
  p_output1[29]=(t1057*t354 + t358*(-1.*t104*t1433 + t1518 - 1.*t1423*t400) + t400*(t1530 + t1532 + t1433*t269 + t1423*t358 + t354*t919 + t637*t923))*var2[0] + (t1015*t358 + t358*(t1076 + t1081 + t1085 + t1474 + t1433*t239 + t1423*t376) + t376*(t1486 + t1487 - 1.*t1433*t269 - 1.*t1423*t358 - 1.*t354*t919 - 1.*t637*t923) + t354*t980)*var2[1] + ((t1005 + t1008 + t1009 + t1444 - 1.*t1433*t239 - 1.*t1423*t376)*t400 + t376*(t1411 + t104*t1433 + t1423*t400) + t358*t939)*var2[2];
  p_output1[30]=(t1057*t376 + t358*(-1.*t104*t1597 + t1644 - 1.*t1592*t400) + t400*(t1649 + t1597*t269 + t1592*t358 + t972 + t976 + t977))*var2[0] + (t1015*t389 + t358*(t1622 + t1623 + t1597*t239 + t1592*t376 + t389*t919 + t691*t923) + t376*(t1634 - 1.*t1597*t269 - 1.*t1592*t358 + t952 + t953 + t956) + t376*t980)*var2[1] + (t376*(t1571 + t104*t1597 + t1592*t400) + t400*(t1602 + t1603 - 1.*t1597*t239 - 1.*t1592*t376 - 1.*t389*t919 - 1.*t691*t923) + t389*t939)*var2[2];
  p_output1[31]=t1057*t358 + t1086*t400;
  p_output1[32]=t1015*t376 + t358*t980;
  p_output1[33]=t376*t939 + t400*t957;
  p_output1[34]=(t1742*t265 + t187*t75*(t1228 + t1236 + t1105*t265 + t285*t911) - 1.*t1762*t75*t99 + t435*(t1207 + t1105*t75*t99))*var2[0] + (t1727*t235 + t1722*t265 + t418*(t1181 + t1183 - 1.*t1105*t265 - 1.*t285*t911) + t435*(t1156 + t1160 + t1105*t235 + t290*t911))*var2[1] + (t1688*t235 + t187*t75*(t1129 + t1130 - 1.*t1105*t235 - 1.*t290*t911) - 1.*t1708*t75*t99 + t418*(t1107 - 1.*t1105*t75*t99))*var2[2];
  p_output1[35]=(-1.*t1762*t187*t69 - 1.*t1742*t187*t216*t75 + t435*(t1347 + t1351 + t1827 + t1834 - 1.*t1271*t1785*t75 - 1.*t69*t911*t99) + t187*t75*(t1360 + t1361 + t1846 + t1847 - 1.*t1271*t265*t99 + t216*t75*t911*t99))*var2[0] + (-1.*t1727*t180*t187*t75 - 1.*t1722*t187*t216*t75 + t435*(t1321 + t1322 + t1804 + t1805 - 1.*t1271*t235*t99 + t180*t75*t911*t99) + t418*(t1332 + t1333 + t1812 + t1813 + t1271*t265*t99 - 1.*t216*t75*t911*t99))*var2[1] + (-1.*t1708*t187*t69 - 1.*t1688*t180*t187*t75 + t418*(t1272 + t1287 + t1775 + t1777 + t1271*t1785*t75 + t69*t911*t99) + t187*t75*(t1296 + t1301 + t1791 + t1792 + t1271*t235*t99 - 1.*t180*t75*t911*t99))*var2[2];
  p_output1[36]=(t1742*t631 + t187*t75*(t1530 + t1532 + t1898 + t1899 + t1421*t265 + t352*t911) + t435*(t1518 - 1.*t1388*t69*t75 + t1421*t75*t99))*var2[0] + (t1727*t435 + (t1076 + t1474 + t1760 + t1761 + t1881 + t1421*t235)*t435 + t1722*t631 + t418*(t1486 + t1487 + t1885 + t1886 - 1.*t1421*t265 - 1.*t352*t911))*var2[1] + (t1688*t435 + t187*(t1005 + t1444 + t1725 + t1726 + t1872 - 1.*t1421*t235)*t75 + t418*(t1411 + t1388*t69*t75 - 1.*t1421*t75*t99))*var2[2];
  p_output1[37]=(t1742*t418 + t187*t75*(t1649 + t1720 + t1721 + t1939 + t1582*t265 + t972) + t435*(t1644 - 1.*t1560*t69*t75 + t1582*t75*t99))*var2[0] + (t1722*t418 + t1727*t675 + t435*(t1622 + t1623 + t1921 + t1922 + t1582*t235 + t386*t911) + t418*(t1634 + t1706 + t1707 + t1928 - 1.*t1582*t265 + t952))*var2[1] + (t1688*t675 + t187*t75*(t1602 + t1603 + t1912 + t1913 - 1.*t1582*t235 - 1.*t386*t911) + t418*(t1571 + t1560*t69*t75 - 1.*t1582*t75*t99))*var2[2];
  p_output1[38]=t1742*t435 + t1762*t187*t75;
  p_output1[39]=t1727*t418 + t1722*t435;
  p_output1[40]=t1688*t418 + t1708*t187*t75;
  p_output1[41]=(-1.*t1956*t216*t69 + t1964*t75 + t216*t75*(t1827 + t1834 - 1.*t1271*t75 + t69*t909) + t69*(t1846 + t1847 - 1.*t1271*t216*t69 - 1.*t216*t75*t909))*var2[0] + (-1.*t180*t1995*t69 - 1.*t2003*t216*t69 + t216*t75*(t1804 + t1805 - 1.*t1271*t180*t69 - 1.*t180*t75*t909) + t180*t75*(t1812 + t1813 + t1271*t216*t69 + t216*t75*t909))*var2[1] + (-1.*t180*t1973*t69 + t1985*t75 + t180*t75*(t1775 + t1777 + t1271*t75 - 1.*t69*t909) + t69*(t1791 + t1792 + t1271*t180*t69 + t180*t75*t909))*var2[2];
  p_output1[42]=(t1956*t257*t75 + t69*(t1898 + t1899 + t1388*t2012*t216 + t1400*t257 + t346*t900 - 1.*t257*t69*t909))*var2[0] + (t1995*t216*t75 + (t1760 + t1881 + t1962 + t1963 + t1388*t180*t2012 + t2034)*t216*t75 + t2003*t257*t75 + t180*t75*(t1885 + t1886 + t2028 + t2029 - 1.*t1388*t2012*t216 + t257*t69*t909))*var2[1] + ((t1725 + t1872 + t1993 + t1994 - 1.*t1388*t180*t2012 - 1.*t1400*t216)*t69 + t1973*t216*t75)*var2[2];
  p_output1[43]=((t1720 + t1939 + t2001 + t2002 + t1560*t2012*t216 + t1566*t257)*t69 + t180*t1956*t75)*var2[0] + (t180*t2003*t75 + t180*(t1706 + t1928 + t1983 + t1984 + t2058 - 1.*t1560*t2012*t216)*t75 + t1995*t346*t75 + t216*t75*(t1921 + t1922 + t1560*t180*t2012 + t2062 + t2065 - 1.*t346*t69*t909))*var2[1] + (t1973*t346*t75 + t69*(t1912 + t1913 - 1.*t1560*t180*t2012 - 1.*t1566*t216 - 1.*t180*t900 + t346*t69*t909))*var2[2];
  p_output1[44]=t1964*t69 + t1956*t216*t75;
  p_output1[45]=t180*t1995*t75 + t2003*t216*t75;
  p_output1[46]=t1985*t69 + t180*t1973*t75;
  p_output1[47]=(0.1575*t216 + 0.2255*t346)*var2[0] + (t2093*t257 + t2086*t346 + t257*(t1388*t180 + t1962 + t2034 + t216*t885) + t216*(t2028 + t2029 - 1.*t1388*t216 - 1.*t257*t885))*var2[1] - 0.068*t257*var2[2];
  p_output1[48]=(0.2255*t216 + 0.1575*t346)*var2[0] + (t180*t2093 + t2086*t216 + t216*(t1984 + t2058 - 1.*t1560*t216 - 1.*t180*t885) + t257*(t1560*t180 + t2062 + t2065 + t346*t885))*var2[1] - 0.068*t180*var2[2];
  p_output1[49]=0.1575*t180 + 0.2255*t257;
  p_output1[50]=t2093*t216 + t2086*t257;
  p_output1[51]=-0.068*t216;
  p_output1[52]=(0.325*t120 - 1.*t120*t1558 - 1.*t120*t879)*var2[0] + (-1.*t1558*t175 + t2132 + t2133)*var2[2];
  p_output1[53]=t2132 + t2133 - 1.*t120*t867;
  p_output1[54]=-0.325*t120 - 1.*t175*t867 + t120*t879;
  p_output1[55]=-0.0641;
  p_output1[56]=-0.28;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 57, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fFrFoot_vec_DiagonalStance.hh"

namespace DiagonalStance
{

void J_fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
