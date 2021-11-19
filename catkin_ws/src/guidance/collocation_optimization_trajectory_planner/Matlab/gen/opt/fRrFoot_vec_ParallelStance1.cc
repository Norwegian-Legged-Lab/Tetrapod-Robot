/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:28:44 GMT+01:00
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
  double t589;
  double t596;
  double t600;
  double t424;
  double t448;
  double t467;
  double t655;
  double t510;
  double t665;
  double t624;
  double t634;
  double t684;
  double t699;
  double t704;
  double t784;
  double t748;
  double t750;
  double t751;
  double t753;
  double t764;
  double t767;
  double t770;
  double t802;
  double t805;
  double t807;
  double t830;
  double t838;
  double t468;
  double t863;
  double t911;
  double t866;
  double t868;
  double t882;
  double t883;
  double t893;
  double t899;
  double t900;
  double t903;
  double t906;
  double t909;
  double t862;
  double t914;
  double t915;
  double t919;
  double t920;
  double t934;
  double t937;
  double t939;
  double t940;
  double t947;
  double t950;
  double t722;
  double t743;
  double t789;
  double t795;
  double t579;
  double t846;
  double t855;
  double t856;
  double t1004;
  double t1006;
  double t1025;
  double t1042;
  double t1052;
  double t1055;
  double t1063;
  double t1083;
  double t1087;
  double t1107;
  double t1108;
  double t1113;
  double t1118;
  double t1124;
  double t1125;
  double t1128;
  double t1131;
  double t963;
  double t1166;
  double t1161;
  double t1167;
  double t1169;
  double t1171;
  double t1174;
  double t1177;
  double t1187;
  double t1188;
  double t1189;
  double t1190;
  double t1192;
  double t1193;
  double t1197;
  double t1203;
  double t1205;
  double t1206;
  double t1208;
  double t1211;
  double t1214;
  double t1223;
  double t1224;
  double t1226;
  double t1228;
  double t1230;
  double t1232;
  double t1233;
  double t1234;
  double t957;
  double t958;
  double t960;
  double t910;
  double t952;
  double t954;
  double t713;
  double t774;
  double t842;
  double t843;
  double t955;
  double t964;
  double t965;
  double t1262;
  double t1140;
  double t1143;
  double t1147;
  double t1119;
  double t1133;
  double t1134;
  double t1268;
  double t1034;
  double t1067;
  double t1090;
  double t1092;
  double t1136;
  double t1151;
  double t1152;
  double t1242;
  double t1244;
  double t1245;
  double t1229;
  double t1235;
  double t1237;
  double t1180;
  double t1202;
  double t1215;
  double t1218;
  double t1240;
  double t1246;
  double t1248;
  double t1263;
  double t1265;
  double t1266;
  double t1271;
  double t1273;
  double t1276;
  double t1286;
  double t1287;
  double t1291;
  double t1295;
  double t1296;
  double t1297;
  double t1305;
  double t1307;
  double t1308;
  double t1311;
  double t1313;
  double t1316;
  double t1103;
  double t1153;
  double t1158;
  double t1367;
  double t1375;
  double t1376;
  double t1377;
  double t1380;
  double t1384;
  double t1385;
  double t1388;
  double t1391;
  double t1392;
  double t1404;
  double t1410;
  double t1412;
  double t1416;
  double t1417;
  double t1418;
  double t1419;
  double t1421;
  double t1422;
  double t1423;
  double t1426;
  double t1427;
  double t1428;
  double t1441;
  double t1443;
  double t1447;
  double t1449;
  double t1452;
  double t1453;
  double t1454;
  double t1456;
  double t1457;
  double t1458;
  double t1355;
  double t1357;
  double t1358;
  double t1361;
  double t1366;
  double t1368;
  double t1370;
  double t1371;
  double t1372;
  double t1373;
  double t1405;
  double t1430;
  double t1467;
  double t1469;
  double t1474;
  double t1477;
  double t1478;
  double t1479;
  double t1480;
  double t1482;
  double t1489;
  double t1490;
  double t1492;
  double t1494;
  double t1499;
  double t1500;
  double t851;
  double t968;
  double t970;
  double t1513;
  double t1516;
  double t1517;
  double t1518;
  double t1360;
  double t1472;
  double t1504;
  double t1508;
  double t1526;
  double t1527;
  double t1529;
  double t1533;
  double t1534;
  double t1536;
  double t1539;
  double t1543;
  double t1546;
  double t1547;
  double t1550;
  double t1551;
  double t1552;
  double t1509;
  double t1519;
  double t1523;
  double t1548;
  double t1553;
  double t1555;
  double t1560;
  double t1562;
  double t1566;
  double t1222;
  double t1251;
  double t1253;
  double t1525;
  double t1575;
  double t1584;
  double t1610;
  double t1622;
  double t1632;
  double t1651;
  double t1656;
  double t1672;
  double t1683;
  double t1696;
  double t1700;
  double t1875;
  double t1876;
  double t1878;
  double t1882;
  double t1885;
  double t1886;
  double t1887;
  double t1888;
  double t1936;
  double t1939;
  double t1940;
  double t1945;
  double t1952;
  double t1953;
  double t1954;
  double t1957;
  double t2006;
  double t2009;
  double t2011;
  double t2013;
  double t2015;
  double t2016;
  double t2017;
  double t2021;
  t589 = Cos(var1[17]);
  t596 = -1.*t589;
  t600 = 1. + t596;
  t424 = Cos(var1[16]);
  t448 = -1.*t424;
  t467 = 1. + t448;
  t655 = Sin(var1[17]);
  t510 = Sin(var1[16]);
  t665 = 4.e-6*t655;
  t624 = 1.000000000016*t600;
  t634 = -7.e-6*t600;
  t684 = t634 + t665;
  t699 = -7.e-6*t684;
  t704 = -1. + t624 + t699;
  t784 = 4.e-6*t467;
  t748 = 2.8e-11*t600;
  t750 = 4.e-6*t600;
  t751 = 7.e-6*t655;
  t753 = t750 + t751;
  t764 = -7.e-6*t753;
  t767 = -1.*t655;
  t770 = t748 + t764 + t767;
  t802 = -6.5e-11*t600;
  t805 = 1. + t802;
  t807 = -7.e-6*t805;
  t830 = 7.e-6*t600;
  t838 = t807 + t830 + t665;
  t468 = -2.8e-11*t467;
  t863 = -7.e-6*t467;
  t911 = Cos(var1[15]);
  t866 = -4.e-6*t510;
  t868 = t863 + t866;
  t882 = t868*t704;
  t883 = -7.e-6*t510;
  t893 = t784 + t883;
  t899 = t893*t770;
  t900 = -6.5e-11*t467;
  t903 = 1. + t900;
  t906 = t903*t838;
  t909 = t882 + t899 + t906;
  t862 = Sin(var1[15]);
  t914 = -1.000000000016*t467;
  t915 = 1. + t914;
  t919 = t915*t704;
  t920 = -1.*t510;
  t934 = t468 + t920;
  t937 = t934*t770;
  t939 = 4.e-6*t510;
  t940 = t863 + t939;
  t947 = t940*t838;
  t950 = t919 + t937 + t947;
  t722 = -1.000000000049*t467;
  t743 = 1. + t722;
  t789 = 7.e-6*t510;
  t795 = t784 + t789;
  t579 = t468 + t510;
  t846 = Sin(var1[4]);
  t855 = Cos(var1[4]);
  t856 = Cos(var1[5]);
  t1004 = 1.000000000049*t600;
  t1006 = 4.e-6*t753;
  t1025 = -1. + t1004 + t1006;
  t1042 = 4.e-6*t805;
  t1052 = -1. + t589;
  t1055 = 4.e-6*t1052;
  t1063 = t1042 + t1055 + t751;
  t1083 = 4.e-6*t684;
  t1087 = t748 + t1083 + t655;
  t1107 = t934*t1025;
  t1108 = t940*t1063;
  t1113 = t915*t1087;
  t1118 = t1107 + t1108 + t1113;
  t1124 = t893*t1025;
  t1125 = t903*t1063;
  t1128 = t868*t1087;
  t1131 = t1124 + t1125 + t1128;
  t963 = Sin(var1[5]);
  t1166 = -4.e-6*t655;
  t1161 = 6.5e-11*t600;
  t1167 = t634 + t1166;
  t1169 = 7.e-6*t1167;
  t1171 = t1055 + t751;
  t1174 = 4.e-6*t1171;
  t1177 = -1. + t1161 + t1169 + t1174;
  t1187 = -1. + t1004;
  t1188 = 4.e-6*t1187;
  t1189 = -7.e-6*t655;
  t1190 = -2.8e-11*t600;
  t1192 = t1190 + t655;
  t1193 = 7.e-6*t1192;
  t1197 = t1188 + t1055 + t1189 + t1193;
  t1203 = -1.000000000016*t600;
  t1205 = 1. + t1203;
  t1206 = 7.e-6*t1205;
  t1208 = t748 + t655;
  t1211 = 4.e-6*t1208;
  t1214 = t1206 + t830 + t1166 + t1211;
  t1223 = t940*t1177;
  t1224 = t934*t1197;
  t1226 = t915*t1214;
  t1228 = t1223 + t1224 + t1226;
  t1230 = t903*t1177;
  t1232 = t893*t1197;
  t1233 = t868*t1214;
  t1234 = t1230 + t1232 + t1233;
  t957 = t911*t909;
  t958 = t862*t950;
  t960 = t957 + t958;
  t910 = -1.*t862*t909;
  t952 = t911*t950;
  t954 = t910 + t952;
  t713 = t579*t704;
  t774 = t743*t770;
  t842 = t795*t838;
  t843 = t713 + t774 + t842;
  t955 = t856*t954;
  t964 = -1.*t960*t963;
  t965 = t955 + t964;
  t1262 = Cos(var1[3]);
  t1140 = t862*t1118;
  t1143 = t911*t1131;
  t1147 = t1140 + t1143;
  t1119 = t911*t1118;
  t1133 = -1.*t862*t1131;
  t1134 = t1119 + t1133;
  t1268 = Sin(var1[3]);
  t1034 = t743*t1025;
  t1067 = t795*t1063;
  t1090 = t579*t1087;
  t1092 = t1034 + t1067 + t1090;
  t1136 = t856*t1134;
  t1151 = -1.*t1147*t963;
  t1152 = t1136 + t1151;
  t1242 = t862*t1228;
  t1244 = t911*t1234;
  t1245 = t1242 + t1244;
  t1229 = t911*t1228;
  t1235 = -1.*t862*t1234;
  t1237 = t1229 + t1235;
  t1180 = t795*t1177;
  t1202 = t743*t1197;
  t1215 = t579*t1214;
  t1218 = t1180 + t1202 + t1215;
  t1240 = t856*t1237;
  t1246 = -1.*t1245*t963;
  t1248 = t1240 + t1246;
  t1263 = t856*t960;
  t1265 = t954*t963;
  t1266 = t1263 + t1265;
  t1271 = t855*t843;
  t1273 = -1.*t846*t965;
  t1276 = t1271 + t1273;
  t1286 = t856*t1147;
  t1287 = t1134*t963;
  t1291 = t1286 + t1287;
  t1295 = t855*t1092;
  t1296 = -1.*t846*t1152;
  t1297 = t1295 + t1296;
  t1305 = t856*t1245;
  t1307 = t1237*t963;
  t1308 = t1305 + t1307;
  t1311 = t855*t1218;
  t1313 = -1.*t846*t1248;
  t1316 = t1311 + t1313;
  t1103 = t1092*t846;
  t1153 = t855*t1152;
  t1158 = t1103 + t1153;
  t1367 = 7.e-6*t467;
  t1375 = 2.826290000000002e-7*var1[17];
  t1376 = -0.148715*t805;
  t1377 = -2.18904205e-16*t600;
  t1380 = t750 + t1189;
  t1384 = -0.038576*t1380;
  t1385 = -0.80315*t1167;
  t1388 = t830 + t665;
  t1391 = -0.5031510000080001*t1388;
  t1392 = -0.038575000014*t1171;
  t1404 = t1375 + t1376 + t1377 + t1384 + t1385 + t1391 + t1392;
  t1410 = 1.1305160000000008e-12*var1[17];
  t1412 = -1.000000000049*t600;
  t1416 = 1. + t1412;
  t1417 = -0.038576*t1416;
  t1418 = -0.03857500001589017*t600;
  t1419 = t748 + t767;
  t1421 = -0.5031510000080001*t1419;
  t1422 = t1055 + t1189;
  t1423 = -3.367757e-6*t1422;
  t1426 = -0.148715*t753;
  t1427 = -0.80315*t1192;
  t1428 = t1410 + t1417 + t1418 + t1421 + t1423 + t1426 + t1427;
  t1441 = -1.9784030000000015e-12*var1[17];
  t1443 = -0.80315*t1205;
  t1447 = -0.5031510000160505*t600;
  t1449 = t1190 + t767;
  t1452 = -0.038576*t1449;
  t1453 = t830 + t1166;
  t1454 = -3.367757e-6*t1453;
  t1456 = -0.148715*t684;
  t1457 = -0.038575000014*t1208;
  t1458 = t1441 + t1443 + t1447 + t1452 + t1454 + t1456 + t1457;
  t1355 = -1.*t911;
  t1357 = 1. + t1355;
  t1358 = -0.15121*t1357;
  t1361 = -2.7726089999999997e-12*var1[16];
  t1366 = -0.2812110000084994*t467;
  t1368 = t1367 + t866;
  t1370 = -1.8134809999999998e-6*t1368;
  t1371 = 2.8e-11*t467;
  t1372 = t1371 + t510;
  t1373 = -0.038749000006999997*t1372;
  t1405 = t940*t1404;
  t1430 = t934*t1428;
  t1467 = t915*t1458;
  t1469 = t1361 + t1366 + t1370 + t1373 + t1405 + t1430 + t1467;
  t1474 = 3.9608699999999997e-7*var1[16];
  t1477 = -1.1787626499999999e-16*t467;
  t1478 = t1367 + t939;
  t1479 = -0.281211000004*t1478;
  t1480 = -1. + t424;
  t1482 = 4.e-6*t1480;
  t1489 = t1482 + t789;
  t1490 = -0.038749000006999997*t1489;
  t1492 = t903*t1404;
  t1494 = t893*t1428;
  t1499 = t868*t1458;
  t1500 = t1474 + t1477 + t1479 + t1490 + t1492 + t1494 + t1499;
  t851 = t843*t846;
  t968 = t855*t965;
  t970 = t851 + t968;
  t1513 = -0.15121*t862;
  t1516 = t911*t1469;
  t1517 = -1.*t862*t1500;
  t1518 = t1358 + t1513 + t1516 + t1517;
  t1360 = 0.15121*t862;
  t1472 = t862*t1469;
  t1504 = t911*t1500;
  t1508 = t1358 + t1360 + t1472 + t1504;
  t1526 = 1.5843479999999999e-12*var1[16];
  t1527 = -0.03874900000889869*t467;
  t1529 = t1371 + t920;
  t1533 = -0.281211000004*t1529;
  t1534 = t1482 + t883;
  t1536 = -1.8134809999999998e-6*t1534;
  t1539 = t795*t1404;
  t1543 = t743*t1428;
  t1546 = t579*t1458;
  t1547 = t1526 + t1527 + t1533 + t1536 + t1539 + t1543 + t1546;
  t1550 = t856*t1518;
  t1551 = -1.*t1508*t963;
  t1552 = t1550 + t1551;
  t1509 = t856*t1508;
  t1519 = t1518*t963;
  t1523 = t1509 + t1519;
  t1548 = t1547*t846;
  t1553 = t855*t1552;
  t1555 = t1548 + t1553;
  t1560 = t855*t1547;
  t1562 = -1.*t846*t1552;
  t1566 = t1560 + t1562;
  t1222 = t1218*t846;
  t1251 = t855*t1248;
  t1253 = t1222 + t1251;
  t1525 = -1.*t1266*t1523;
  t1575 = t1291*t1523;
  t1584 = t1266*t1523;
  t1610 = -1.*t1523*t1308;
  t1622 = -1.*t1291*t1523;
  t1632 = t1523*t1308;
  t1651 = -1.*t843*t1547;
  t1656 = t1092*t1547;
  t1672 = t843*t1547;
  t1683 = -1.*t1547*t1218;
  t1696 = -1.*t1092*t1547;
  t1700 = t1547*t1218;
  t1875 = -1.*t1404*t838;
  t1876 = -1.*t770*t1428;
  t1878 = -1.*t704*t1458;
  t1882 = t1875 + t1876 + t1878;
  t1885 = t1404*t1063;
  t1886 = t1025*t1428;
  t1887 = t1087*t1458;
  t1888 = t1885 + t1886 + t1887;
  t1936 = t1404*t838;
  t1939 = t770*t1428;
  t1940 = t704*t1458;
  t1945 = t1936 + t1939 + t1940;
  t1952 = -1.*t1404*t1177;
  t1953 = -1.*t1428*t1197;
  t1954 = -1.*t1458*t1214;
  t1957 = t1952 + t1953 + t1954;
  t2006 = -1.*t1404*t1063;
  t2009 = -1.*t1025*t1428;
  t2011 = -1.*t1087*t1458;
  t2013 = t2006 + t2009 + t2011;
  t2015 = t1404*t1177;
  t2016 = t1428*t1197;
  t2017 = t1458*t1214;
  t2021 = t2015 + t2016 + t2017;
  p_output1[0]=t970*var2[0] + t1158*var2[1] + t1253*var2[2];
  p_output1[1]=(t1262*t1266 - 1.*t1268*t1276)*var2[0] + (t1262*t1291 - 1.*t1268*t1297)*var2[1] + (t1262*t1308 - 1.*t1268*t1316)*var2[2];
  p_output1[2]=(t1266*t1268 + t1262*t1276)*var2[0] + (t1268*t1291 + t1262*t1297)*var2[1] + (t1268*t1308 + t1262*t1316)*var2[2];
  p_output1[3]=(t1253*(-1.*t1158*t1555 - 1.*t1297*t1566 + t1622) + t1158*(t1253*t1555 + t1316*t1566 + t1632))*var2[0] + ((-1.*t1253*t1555 - 1.*t1316*t1566 + t1610)*t970 + t1253*(t1276*t1566 + t1584 + t1555*t970))*var2[1] + ((t1158*t1555 + t1297*t1566 + t1575)*t970 + t1158*(t1525 - 1.*t1276*t1566 - 1.*t1555*t970))*var2[2];
  p_output1[4]=(t1308*(-1.*t1152*t1552 + t1622 + t1696) + t1291*(t1248*t1552 + t1632 + t1700))*var2[0] + (t1266*(-1.*t1248*t1552 + t1610 + t1683) + t1308*(t1584 + t1672 + t1552*t965))*var2[1] + (t1266*(t1152*t1552 + t1575 + t1656) + t1291*(t1525 + t1651 - 1.*t1552*t965))*var2[2];
  p_output1[5]=(t1218*(-1.*t1147*t1508 - 1.*t1134*t1518 + t1696) + t1092*(t1245*t1508 + t1237*t1518 + t1700))*var2[0] + ((-1.*t1245*t1508 - 1.*t1237*t1518 + t1683)*t843 + t1218*(t1672 + t1518*t954 + t1508*t960))*var2[1] + ((t1147*t1508 + t1134*t1518 + t1656)*t843 + t1092*(t1651 - 1.*t1518*t954 - 1.*t1508*t960))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(t1218*(-1.*t1118*t1469 - 1.*t1131*t1500 + t1696) + t1092*(t1228*t1469 + t1234*t1500 + t1700) + 0.15121*t909 - 0.15121*t950)*var2[0] + (-0.15121*t1118 + 0.15121*t1131 + (-1.*t1228*t1469 - 1.*t1234*t1500 + t1683)*t843 + t1218*(t1672 + t1500*t909 + t1469*t950))*var2[1] + (-0.15121*t1228 + 0.15121*t1234 + (t1118*t1469 + t1131*t1500 + t1656)*t843 + t1092*(t1651 - 1.*t1500*t909 - 1.*t1469*t950))*var2[2];
  p_output1[16]=(-1.*t1177*t2013 - 1.*t1063*t2021 + 4.e-6*(-1.*t1197*t2013 - 1.*t1025*t2021) + 7.e-6*(t1214*t2013 + t1087*t2021) - 0.038749*t704 + 0.281211*t770 + 1.e-6*(t1166 + t634 + 7.e-6*t805))*var2[0] + (0.281211*t1025 - 0.038749*t1087 - 1.*t1177*t1945 + 7.e-6*(t1214*t1945 + t1957*t704) + 1.e-6*(4.e-6*(-1. + t1161) + t1189 + t750) + 4.e-6*(-1.*t1197*t1945 - 1.*t1957*t770) - 1.*t1957*t838)*var2[1] + (0.281211*t1197 - 0.038749*t1214 - 1.*t1063*t1882 + 7.e-6*(t1087*t1882 + t1888*t704) + 4.e-6*(-1.*t1025*t1882 - 1.*t1888*t770) + 1.e-6*(1. - 7.e-6*t1167 + 4.e-6*t1380 + t802) - 1.*t1888*t838)*var2[2];
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

#include "fRrFoot_vec_ParallelStance1.hh"

namespace ParallelStance1
{

void fRrFoot_vec_ParallelStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
