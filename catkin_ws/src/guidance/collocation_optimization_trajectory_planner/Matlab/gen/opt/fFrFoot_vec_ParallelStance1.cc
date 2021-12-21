/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:11:15 GMT+01:00
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
  double t332;
  double t16;
  double t437;
  double t336;
  double t373;
  double t387;
  double t451;
  double t483;
  double t217;
  double t218;
  double t525;
  double t528;
  double t559;
  double t816;
  double t811;
  double t673;
  double t708;
  double t723;
  double t766;
  double t767;
  double t788;
  double t790;
  double t822;
  double t832;
  double t833;
  double t975;
  double t609;
  double t630;
  double t671;
  double t952;
  double t957;
  double t974;
  double t985;
  double t989;
  double t995;
  double t1018;
  double t1022;
  double t1041;
  double t1042;
  double t1058;
  double t1076;
  double t1078;
  double t1099;
  double t1104;
  double t1106;
  double t1115;
  double t1125;
  double t1127;
  double t1139;
  double t1145;
  double t1146;
  double t1148;
  double t909;
  double t1193;
  double t1194;
  double t1207;
  double t1209;
  double t1210;
  double t1215;
  double t1217;
  double t1221;
  double t1237;
  double t1238;
  double t1240;
  double t1241;
  double t1243;
  double t1250;
  double t1260;
  double t1261;
  double t875;
  double t885;
  double t896;
  double t810;
  double t852;
  double t854;
  double t495;
  double t570;
  double t608;
  double t874;
  double t910;
  double t917;
  double t1292;
  double t1163;
  double t1173;
  double t1175;
  double t1116;
  double t1150;
  double t1155;
  double t1314;
  double t994;
  double t1056;
  double t1083;
  double t1090;
  double t1159;
  double t1178;
  double t1179;
  double t1270;
  double t1271;
  double t1273;
  double t1242;
  double t1262;
  double t1264;
  double t1208;
  double t1212;
  double t1222;
  double t1231;
  double t1267;
  double t1277;
  double t1281;
  double t1294;
  double t1302;
  double t1304;
  double t1318;
  double t1321;
  double t1331;
  double t1337;
  double t1342;
  double t1346;
  double t1351;
  double t1354;
  double t1355;
  double t1379;
  double t1382;
  double t1383;
  double t1391;
  double t1392;
  double t1393;
  double t1098;
  double t1186;
  double t1189;
  double t1465;
  double t1469;
  double t1474;
  double t1487;
  double t1493;
  double t1500;
  double t1505;
  double t1509;
  double t1511;
  double t1513;
  double t1516;
  double t1524;
  double t1526;
  double t1527;
  double t1537;
  double t1539;
  double t1541;
  double t1448;
  double t1449;
  double t1452;
  double t1455;
  double t1457;
  double t1458;
  double t1463;
  double t1507;
  double t1523;
  double t1544;
  double t1549;
  double t1553;
  double t1556;
  double t1558;
  double t1559;
  double t1561;
  double t1562;
  double t620;
  double t918;
  double t934;
  double t1578;
  double t1580;
  double t1585;
  double t1587;
  double t1450;
  double t1551;
  double t1563;
  double t1572;
  double t1595;
  double t1598;
  double t1601;
  double t1603;
  double t1604;
  double t1605;
  double t1607;
  double t1609;
  double t1623;
  double t1624;
  double t1625;
  double t1576;
  double t1588;
  double t1590;
  double t1613;
  double t1626;
  double t1630;
  double t1633;
  double t1637;
  double t1638;
  double t1235;
  double t1282;
  double t1286;
  double t1594;
  double t1660;
  double t1672;
  double t1685;
  double t1713;
  double t1730;
  double t1768;
  double t1759;
  double t1828;
  double t1814;
  double t1793;
  double t1787;
  double t1946;
  double t2065;
  double t2085;
  double t2089;
  double t2091;
  double t2045;
  double t2048;
  double t2049;
  double t2053;
  double t2114;
  double t2116;
  double t2120;
  double t2122;
  double t2124;
  double t2125;
  double t2131;
  double t2169;
  double t2172;
  double t2173;
  double t2177;
  double t2181;
  double t2184;
  double t2189;
  t332 = Cos(var1[11]);
  t16 = Cos(var1[10]);
  t437 = -1. + t332;
  t336 = -1.*t332;
  t373 = 1. + t336;
  t387 = 1.6e-11*t373;
  t451 = 1.6e-11*t437;
  t483 = -1. + t387 + t451;
  t217 = -1.*t16;
  t218 = 1. + t217;
  t525 = 4.e-6*t437;
  t528 = -4.e-6*t332;
  t559 = t525 + t528;
  t816 = Sin(var1[10]);
  t811 = Cos(var1[9]);
  t673 = -1. + t16;
  t708 = 1.6e-11*t673;
  t723 = 1. + t708;
  t766 = t723*t483;
  t767 = 4.e-6*t218*t559;
  t788 = t766 + t767;
  t790 = Sin(var1[9]);
  t822 = 4.e-6*t483*t816;
  t832 = -1.*t559*t816;
  t833 = t822 + t832;
  t975 = Sin(var1[11]);
  t609 = Sin(var1[4]);
  t630 = Cos(var1[4]);
  t671 = Cos(var1[5]);
  t952 = -1.000000000016*t373;
  t957 = 1. + t952;
  t974 = 0.004352*t957;
  t985 = -0.9999910000159999*t975;
  t989 = t974 + t985;
  t995 = -1. + t387;
  t1018 = 4.e-6*t995;
  t1022 = 3.999964e-6*t373;
  t1041 = -1.7408e-8*t975;
  t1042 = t1018 + t1022 + t1041;
  t1058 = 0.999991*t332;
  t1076 = 0.004352*t975;
  t1078 = t451 + t1058 + t1076;
  t1099 = -4.e-6*t816*t989;
  t1104 = t723*t1042;
  t1106 = 4.e-6*t218*t1078;
  t1115 = 0. + t1099 + t1104 + t1106;
  t1125 = -1.000000000016*t218;
  t1127 = 1. + t1125;
  t1139 = t1127*t989;
  t1145 = 4.e-6*t816*t1042;
  t1146 = -1.*t816*t1078;
  t1148 = 0. + t1139 + t1145 + t1146;
  t909 = Sin(var1[5]);
  t1193 = -1.7408e-8*t373;
  t1194 = -3.999964e-6*t975;
  t1207 = t1193 + t1194;
  t1209 = 0.999991*t957;
  t1210 = t1209 + t1076;
  t1215 = -0.004352*t332;
  t1217 = 0.999991*t975;
  t1221 = t1215 + t1217;
  t1237 = t723*t1207;
  t1238 = -4.e-6*t816*t1210;
  t1240 = 4.e-6*t218*t1221;
  t1241 = 0. + t1237 + t1238 + t1240;
  t1243 = 4.e-6*t816*t1207;
  t1250 = t1127*t1210;
  t1260 = -1.*t816*t1221;
  t1261 = 0. + t1243 + t1250 + t1260;
  t875 = t811*t788;
  t885 = t790*t833;
  t896 = t875 + t885;
  t810 = -1.*t788*t790;
  t852 = t811*t833;
  t854 = t810 + t852;
  t495 = 4.e-6*t218*t483;
  t570 = t16*t559;
  t608 = t495 + t570;
  t874 = t671*t854;
  t910 = -1.*t896*t909;
  t917 = t874 + t910;
  t1292 = Cos(var1[3]);
  t1163 = t811*t1115;
  t1173 = t790*t1148;
  t1175 = 0. + t1163 + t1173;
  t1116 = -1.*t790*t1115;
  t1150 = t811*t1148;
  t1155 = 0. + t1116 + t1150;
  t1314 = Sin(var1[3]);
  t994 = t816*t989;
  t1056 = 4.e-6*t218*t1042;
  t1083 = t16*t1078;
  t1090 = 0. + t994 + t1056 + t1083;
  t1159 = t671*t1155;
  t1178 = -1.*t1175*t909;
  t1179 = 0. + t1159 + t1178;
  t1270 = t811*t1241;
  t1271 = t790*t1261;
  t1273 = 0. + t1270 + t1271;
  t1242 = -1.*t790*t1241;
  t1262 = t811*t1261;
  t1264 = 0. + t1242 + t1262;
  t1208 = 4.e-6*t218*t1207;
  t1212 = t816*t1210;
  t1222 = t16*t1221;
  t1231 = 0. + t1208 + t1212 + t1222;
  t1267 = t671*t1264;
  t1277 = -1.*t1273*t909;
  t1281 = 0. + t1267 + t1277;
  t1294 = t671*t896;
  t1302 = t854*t909;
  t1304 = t1294 + t1302;
  t1318 = t608*t630;
  t1321 = -1.*t609*t917;
  t1331 = t1318 + t1321;
  t1337 = t671*t1175;
  t1342 = t1155*t909;
  t1346 = 0. + t1337 + t1342;
  t1351 = t630*t1090;
  t1354 = -1.*t609*t1179;
  t1355 = 0. + t1351 + t1354;
  t1379 = t671*t1273;
  t1382 = t1264*t909;
  t1383 = 0. + t1379 + t1382;
  t1391 = t630*t1231;
  t1392 = -1.*t609*t1281;
  t1393 = 0. + t1391 + t1392;
  t1098 = t1090*t609;
  t1186 = t630*t1179;
  t1189 = 0. + t1098 + t1186;
  t1465 = -1.26e-8*var1[11];
  t1469 = 1. + t451;
  t1474 = -0.14871*t1469;
  t1487 = -1.64779999997447e-7*t373;
  t1493 = -1.59556e-7*t437;
  t1500 = -1.199987999968e-6*t975;
  t1505 = t1465 + t1474 + t1487 + t1493 + t1500;
  t1509 = 0.803147*t957;
  t1511 = 0.50315000001605*t373;
  t1513 = 0.00130540515936178*t975;
  t1516 = t1509 + t1511 + t1513;
  t1524 = -5.04e-14*var1[11];
  t1526 = -0.03988959484*t373;
  t1527 = 6.38224e-13*t437;
  t1537 = -0.041195*t332;
  t1539 = 0.299996999992*t975;
  t1541 = t1524 + t1526 + t1527 + t1537 + t1539;
  t1448 = -1.*t811;
  t1449 = 1. + t1448;
  t1452 = -0.15121*t790;
  t1455 = -1.2484e-7*var1[10];
  t1457 = 2.479936e-18*t218;
  t1458 = -1.54996e-7*t673;
  t1463 = 1.124840000016e-6*t816;
  t1507 = t723*t1505;
  t1523 = -4.e-6*t816*t1516;
  t1544 = 4.e-6*t218*t1541;
  t1549 = t1455 + t1457 + t1458 + t1463 + t1507 + t1523 + t1544;
  t1553 = 0.281210000008499*t218;
  t1556 = -0.03874900000062*t816;
  t1558 = 4.e-6*t816*t1505;
  t1559 = t1127*t1516;
  t1561 = -1.*t816*t1541;
  t1562 = t1553 + t1556 + t1558 + t1559 + t1561;
  t620 = t608*t609;
  t918 = t630*t917;
  t934 = t620 + t918;
  t1578 = 0.15121*t1449;
  t1580 = -1.*t790*t1549;
  t1585 = t811*t1562;
  t1587 = t1578 + t1452 + t1580 + t1585;
  t1450 = -0.15121*t1449;
  t1551 = t811*t1549;
  t1563 = t790*t1562;
  t1572 = t1450 + t1452 + t1551 + t1563;
  t1595 = -4.9936e-13*var1[10];
  t1598 = -0.038749*t218;
  t1601 = 6.19984e-13*t673;
  t1603 = -0.281210000004*t816;
  t1604 = 4.e-6*t218*t1505;
  t1605 = t816*t1516;
  t1607 = t16*t1541;
  t1609 = 0. + t1595 + t1598 + t1601 + t1603 + t1604 + t1605 + t1607;
  t1623 = t671*t1587;
  t1624 = -1.*t1572*t909;
  t1625 = 0. + t1623 + t1624;
  t1576 = t671*t1572;
  t1588 = t1587*t909;
  t1590 = 0. + t1576 + t1588;
  t1613 = t1609*t609;
  t1626 = t630*t1625;
  t1630 = 0. + t1613 + t1626;
  t1633 = t630*t1609;
  t1637 = -1.*t609*t1625;
  t1638 = 0. + t1633 + t1637;
  t1235 = t1231*t609;
  t1282 = t630*t1281;
  t1286 = 0. + t1235 + t1282;
  t1594 = t1304*t1590;
  t1660 = -1.*t1346*t1590;
  t1672 = t1346*t1590;
  t1685 = -1.*t1590*t1383;
  t1713 = -1.*t1304*t1590;
  t1730 = t1590*t1383;
  t1768 = -1.*t1090*t1609;
  t1759 = t608*t1609;
  t1828 = t1609*t1231;
  t1814 = -1.*t608*t1609;
  t1793 = -1.*t1609*t1231;
  t1787 = t1090*t1609;
  t1946 = t1595 + t1598 + t1601 + t1603 + t1604 + t1605 + t1607;
  t2065 = t1505*t1042;
  t2085 = t989*t1516;
  t2089 = t1078*t1541;
  t2091 = t2065 + t2085 + t2089;
  t2045 = -1.*t1207*t1505;
  t2048 = -1.*t1516*t1210;
  t2049 = -1.*t1541*t1221;
  t2053 = t2045 + t2048 + t2049;
  t2114 = t1207*t1505;
  t2116 = t1516*t1210;
  t2120 = t1541*t1221;
  t2122 = t2114 + t2116 + t2120;
  t2124 = -1.*t483*t1505;
  t2125 = -1.*t559*t1541;
  t2131 = t2124 + t2125;
  t2169 = -1.*t1505*t1042;
  t2172 = -1.*t989*t1516;
  t2173 = -1.*t1078*t1541;
  t2177 = t2169 + t2172 + t2173;
  t2181 = t483*t1505;
  t2184 = t559*t1541;
  t2189 = t2181 + t2184;
  p_output1[0]=t1286*var2[0] + t1189*var2[1] + t934*var2[2];
  p_output1[1]=(0. + t1292*t1383 - 1.*t1314*t1393)*var2[0] + (0. + t1292*t1346 - 1.*t1314*t1355)*var2[1] + (t1292*t1304 - 1.*t1314*t1331)*var2[2];
  p_output1[2]=(0. + t1314*t1383 + t1292*t1393)*var2[0] + (0. + t1314*t1346 + t1292*t1355)*var2[1] + (t1304*t1314 + t1292*t1331)*var2[2];
  p_output1[3]=((-1.*t1189*t1630 - 1.*t1355*t1638 + t1660)*t934 + t1189*(t1594 + t1331*t1638 + t1630*t934))*var2[0] + ((t1286*t1630 + t1393*t1638 + t1730)*t934 + t1286*(-1.*t1331*t1638 + t1713 - 1.*t1630*t934))*var2[1] + (t1286*(t1189*t1630 + t1355*t1638 + t1672) + t1189*(-1.*t1286*t1630 - 1.*t1393*t1638 + t1685))*var2[2];
  p_output1[4]=(t1304*(-1.*t1179*t1625 + t1660 + t1768) + t1346*(t1594 + t1759 + t1625*t917))*var2[0] + (t1304*(t1281*t1625 + t1730 + t1828) + t1383*(t1713 + t1814 - 1.*t1625*t917))*var2[1] + (t1383*(t1179*t1625 + t1672 + t1787) + t1346*(-1.*t1281*t1625 + t1685 + t1793))*var2[2];
  p_output1[5]=((-1.*t1175*t1572 - 1.*t1155*t1587 + t1768)*t608 + t1090*(t1759 + t1587*t854 + t1572*t896))*var2[0] + ((t1273*t1572 + t1264*t1587 + t1828)*t608 + t1231*(t1814 - 1.*t1587*t854 - 1.*t1572*t896))*var2[1] + (t1231*(t1175*t1572 + t1155*t1587 + t1787) + t1090*(-1.*t1273*t1572 - 1.*t1264*t1587 + t1793))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.15121*t1241 - 0.15121*t1261 + (-1.*t1115*t1549 - 1.*t1148*t1562 - 1.*t1090*t1946)*t608 + t1090*(t1946*t608 + t1549*t788 + t1562*t833))*var2[0] + (-0.15121*t1115 - 0.15121*t1148 + (t1241*t1549 + t1261*t1562 + t1231*t1946)*t608 + t1231*(-1.*t1946*t608 - 1.*t1549*t788 - 1.*t1562*t833))*var2[1] + (t1231*(t1115*t1549 + t1148*t1562 + t1090*t1946) + t1090*(-1.*t1241*t1549 - 1.*t1261*t1562 - 1.*t1231*t1946) - 0.15121*t788 - 0.15121*t833)*var2[2];
  p_output1[10]=(1.e-6*t1207 - 0.038749*t1210 - 0.28121*t1221 - 1.*t1042*t2189 - 1.*t2177*t483 + 4.e-6*(-1.*t1078*t2189 - 1.*t2177*t559))*var2[0] + (1.e-6*t1042 - 0.28121*t1078 - 1.*t1207*t2131 - 1.*t2122*t483 + 4.e-6*(-1.*t1221*t2131 - 1.*t2122*t559) - 0.038749*t989)*var2[1] + (-1.*t1042*t2053 - 1.*t1207*t2091 + 4.e-6*(-1.*t1078*t2053 - 1.*t1221*t2091) + 1.e-6*t483 - 0.28121*t559)*var2[2];
  p_output1[11]=-1.9353204325022392e-7*var2[0] + 0.29999998115510645*var2[1] + 1.1914820871506078e-8*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
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

#include "fFrFoot_vec_ParallelStance1.hh"

namespace ParallelStance1
{

void fFrFoot_vec_ParallelStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
