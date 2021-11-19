/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:11:01 GMT+01:00
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
  double t501;
  double t520;
  double t545;
  double t559;
  double t480;
  double t549;
  double t579;
  double t617;
  double t635;
  double t645;
  double t647;
  double t674;
  double t678;
  double t679;
  double t482;
  double t488;
  double t686;
  double t692;
  double t699;
  double t932;
  double t826;
  double t860;
  double t861;
  double t866;
  double t868;
  double t881;
  double t926;
  double t820;
  double t958;
  double t959;
  double t963;
  double t970;
  double t971;
  double t978;
  double t804;
  double t990;
  double t991;
  double t993;
  double t929;
  double t983;
  double t988;
  double t1019;
  double t797;
  double t627;
  double t682;
  double t702;
  double t705;
  double t722;
  double t989;
  double t1020;
  double t1021;
  double t1064;
  double t1039;
  double t1053;
  double t1054;
  double t1037;
  double t1067;
  double t1078;
  double t1085;
  double t1117;
  double t1124;
  double t1142;
  double t1151;
  double t1152;
  double t1154;
  double t1166;
  double t1168;
  double t1175;
  double t1184;
  double t1190;
  double t1193;
  double t1195;
  double t1210;
  double t1217;
  double t1220;
  double t1226;
  double t1241;
  double t1255;
  double t1260;
  double t1262;
  double t1304;
  double t1310;
  double t1314;
  double t1318;
  double t1307;
  double t1322;
  double t1323;
  double t1329;
  double t1335;
  double t1337;
  double t1378;
  double t1385;
  double t1386;
  double t1392;
  double t1397;
  double t1416;
  double t1419;
  double t1423;
  double t1424;
  double t1428;
  double t1436;
  double t1444;
  double t1446;
  double t1449;
  double t1458;
  double t1461;
  double t1463;
  double t1359;
  double t1364;
  double t1367;
  double t1368;
  double t1369;
  double t1371;
  double t1373;
  double t1420;
  double t1440;
  double t1467;
  double t1471;
  double t1483;
  double t1488;
  double t1490;
  double t1498;
  double t1502;
  double t1506;
  double t1350;
  double t1354;
  double t1355;
  double t1324;
  double t1339;
  double t1340;
  double t1520;
  double t1524;
  double t1526;
  double t1539;
  double t1365;
  double t1472;
  double t1508;
  double t1515;
  double t1557;
  double t1559;
  double t1562;
  double t1573;
  double t1577;
  double t1578;
  double t1589;
  double t1591;
  double t1592;
  double t1602;
  double t1612;
  double t1615;
  double t1616;
  double t1622;
  double t1627;
  double t1629;
  double t1631;
  double t1571;
  double t1583;
  double t1586;
  double t1278;
  double t1279;
  double t1287;
  double t1229;
  double t1264;
  double t1270;
  double t1516;
  double t1545;
  double t1550;
  double t1150;
  double t1178;
  double t1199;
  double t1203;
  double t1209;
  double t1272;
  double t1297;
  double t1300;
  double t1301;
  double t1303;
  double t1623;
  double t1637;
  double t1641;
  double t1649;
  double t1650;
  double t1652;
  double t1676;
  double t1683;
  double t1684;
  double t1345;
  double t1357;
  double t1358;
  double t1555;
  double t1695;
  double t1753;
  double t1742;
  double t1865;
  double t1915;
  double t1918;
  double t1925;
  double t1932;
  double t1940;
  double t1957;
  double t1959;
  double t1699;
  double t1708;
  double t1709;
  double t759;
  double t1027;
  double t1032;
  double t1644;
  double t1646;
  double t1647;
  double t2011;
  double t2037;
  double t2101;
  double t2065;
  double t2186;
  double t2196;
  double t2202;
  double t2203;
  double t2206;
  double t2207;
  double t2209;
  double t2312;
  double t2345;
  double t2394;
  double t2383;
  double t2562;
  double t2566;
  double t2576;
  double t2582;
  double t2536;
  double t2546;
  double t2547;
  double t2553;
  t501 = Cos(var1[11]);
  t520 = -1.*t501;
  t545 = 1. + t520;
  t559 = Sin(var1[11]);
  t480 = Cos(var1[10]);
  t549 = -1.7408e-8*t545;
  t579 = -3.999964e-6*t559;
  t617 = t549 + t579;
  t635 = Sin(var1[10]);
  t645 = -1.000000000016*t545;
  t647 = 1. + t645;
  t674 = 0.999991*t647;
  t678 = 0.004352*t559;
  t679 = t674 + t678;
  t482 = -1.*t480;
  t488 = 1. + t482;
  t686 = -0.004352*t501;
  t692 = 0.999991*t559;
  t699 = t686 + t692;
  t932 = Cos(var1[9]);
  t826 = -1. + t480;
  t860 = 1.6e-11*t826;
  t861 = 1. + t860;
  t866 = t861*t617;
  t868 = -4.e-6*t635*t679;
  t881 = 4.e-6*t488*t699;
  t926 = 0. + t866 + t868 + t881;
  t820 = Sin(var1[9]);
  t958 = 4.e-6*t635*t617;
  t959 = -1.000000000016*t488;
  t963 = 1. + t959;
  t970 = t963*t679;
  t971 = -1.*t635*t699;
  t978 = 0. + t958 + t970 + t971;
  t804 = Cos(var1[5]);
  t990 = t932*t926;
  t991 = t820*t978;
  t993 = 0. + t990 + t991;
  t929 = -1.*t820*t926;
  t983 = t932*t978;
  t988 = 0. + t929 + t983;
  t1019 = Sin(var1[5]);
  t797 = Cos(var1[4]);
  t627 = 4.e-6*t488*t617;
  t682 = t635*t679;
  t702 = t480*t699;
  t705 = 0. + t627 + t682 + t702;
  t722 = Sin(var1[4]);
  t989 = t804*t988;
  t1020 = -1.*t993*t1019;
  t1021 = 0. + t989 + t1020;
  t1064 = Sin(var1[3]);
  t1039 = t804*t993;
  t1053 = t988*t1019;
  t1054 = 0. + t1039 + t1053;
  t1037 = Cos(var1[3]);
  t1067 = t797*t705;
  t1078 = -1.*t722*t1021;
  t1085 = 0. + t1067 + t1078;
  t1117 = 0.004352*t647;
  t1124 = -0.9999910000159999*t559;
  t1142 = t1117 + t1124;
  t1151 = 1.6e-11*t545;
  t1152 = -1. + t1151;
  t1154 = 4.e-6*t1152;
  t1166 = 3.999964e-6*t545;
  t1168 = -1.7408e-8*t559;
  t1175 = t1154 + t1166 + t1168;
  t1184 = -1. + t501;
  t1190 = 1.6e-11*t1184;
  t1193 = 0.999991*t501;
  t1195 = t1190 + t1193 + t678;
  t1210 = -4.e-6*t635*t1142;
  t1217 = t861*t1175;
  t1220 = 4.e-6*t488*t1195;
  t1226 = 0. + t1210 + t1217 + t1220;
  t1241 = t963*t1142;
  t1255 = 4.e-6*t635*t1175;
  t1260 = -1.*t635*t1195;
  t1262 = 0. + t1241 + t1255 + t1260;
  t1304 = -1. + t1151 + t1190;
  t1310 = 4.e-6*t1184;
  t1314 = -4.e-6*t501;
  t1318 = t1310 + t1314;
  t1307 = t861*t1304;
  t1322 = 4.e-6*t488*t1318;
  t1323 = t1307 + t1322;
  t1329 = 4.e-6*t1304*t635;
  t1335 = -1.*t1318*t635;
  t1337 = t1329 + t1335;
  t1378 = -1.26e-8*var1[11];
  t1385 = 1. + t1190;
  t1386 = -0.14871*t1385;
  t1392 = -1.64779999997447e-7*t545;
  t1397 = -1.59556e-7*t1184;
  t1416 = -1.199987999968e-6*t559;
  t1419 = t1378 + t1386 + t1392 + t1397 + t1416;
  t1423 = 0.803147*t647;
  t1424 = 0.50315000001605*t545;
  t1428 = 0.00130540515936178*t559;
  t1436 = t1423 + t1424 + t1428;
  t1444 = -5.04e-14*var1[11];
  t1446 = -0.03988959484*t545;
  t1449 = 6.38224e-13*t1184;
  t1458 = -0.041195*t501;
  t1461 = 0.299996999992*t559;
  t1463 = t1444 + t1446 + t1449 + t1458 + t1461;
  t1359 = -1.*t932;
  t1364 = 1. + t1359;
  t1367 = -0.15121*t820;
  t1368 = -1.2484e-7*var1[10];
  t1369 = 2.479936e-18*t488;
  t1371 = -1.54996e-7*t826;
  t1373 = 1.124840000016e-6*t635;
  t1420 = t861*t1419;
  t1440 = -4.e-6*t635*t1436;
  t1467 = 4.e-6*t488*t1463;
  t1471 = t1368 + t1369 + t1371 + t1373 + t1420 + t1440 + t1467;
  t1483 = 0.281210000008499*t488;
  t1488 = -0.03874900000062*t635;
  t1490 = 4.e-6*t635*t1419;
  t1498 = t963*t1436;
  t1502 = -1.*t635*t1463;
  t1506 = t1483 + t1488 + t1490 + t1498 + t1502;
  t1350 = -1.*t1323*t820;
  t1354 = t932*t1337;
  t1355 = t1350 + t1354;
  t1324 = t932*t1323;
  t1339 = t820*t1337;
  t1340 = t1324 + t1339;
  t1520 = 0.15121*t1364;
  t1524 = -1.*t820*t1471;
  t1526 = t932*t1506;
  t1539 = t1520 + t1367 + t1524 + t1526;
  t1365 = -0.15121*t1364;
  t1472 = t932*t1471;
  t1508 = t820*t1506;
  t1515 = t1365 + t1367 + t1472 + t1508;
  t1557 = 4.e-6*t488*t1304;
  t1559 = t480*t1318;
  t1562 = t1557 + t1559;
  t1573 = t804*t1355;
  t1577 = -1.*t1340*t1019;
  t1578 = t1573 + t1577;
  t1589 = -4.9936e-13*var1[10];
  t1591 = -0.038749*t488;
  t1592 = 6.19984e-13*t826;
  t1602 = -0.281210000004*t635;
  t1612 = 4.e-6*t488*t1419;
  t1615 = t635*t1436;
  t1616 = t480*t1463;
  t1622 = 0. + t1589 + t1591 + t1592 + t1602 + t1612 + t1615 + t1616;
  t1627 = t804*t1539;
  t1629 = -1.*t1515*t1019;
  t1631 = 0. + t1627 + t1629;
  t1571 = t1562*t722;
  t1583 = t797*t1578;
  t1586 = t1571 + t1583;
  t1278 = t932*t1226;
  t1279 = t820*t1262;
  t1287 = 0. + t1278 + t1279;
  t1229 = -1.*t820*t1226;
  t1264 = t932*t1262;
  t1270 = 0. + t1229 + t1264;
  t1516 = t804*t1515;
  t1545 = t1539*t1019;
  t1550 = 0. + t1516 + t1545;
  t1150 = t635*t1142;
  t1178 = 4.e-6*t488*t1175;
  t1199 = t480*t1195;
  t1203 = 0. + t1150 + t1178 + t1199;
  t1209 = t1203*t722;
  t1272 = t804*t1270;
  t1297 = -1.*t1287*t1019;
  t1300 = 0. + t1272 + t1297;
  t1301 = t797*t1300;
  t1303 = 0. + t1209 + t1301;
  t1623 = t1622*t722;
  t1637 = t797*t1631;
  t1641 = 0. + t1623 + t1637;
  t1649 = t797*t1622;
  t1650 = -1.*t722*t1631;
  t1652 = 0. + t1649 + t1650;
  t1676 = t804*t1287;
  t1683 = t1270*t1019;
  t1684 = 0. + t1676 + t1683;
  t1345 = t804*t1340;
  t1357 = t1355*t1019;
  t1358 = t1345 + t1357;
  t1555 = t1358*t1550;
  t1695 = -1.*t1684*t1550;
  t1753 = -1.*t1203*t1622;
  t1742 = t1562*t1622;
  t1865 = t1589 + t1591 + t1592 + t1602 + t1612 + t1615 + t1616;
  t1915 = -1.*t1419*t1175;
  t1918 = -1.*t1142*t1436;
  t1925 = -1.*t1195*t1463;
  t1932 = t1915 + t1918 + t1925;
  t1940 = t1304*t1419;
  t1957 = t1318*t1463;
  t1959 = t1940 + t1957;
  t1699 = t797*t1203;
  t1708 = -1.*t722*t1300;
  t1709 = 0. + t1699 + t1708;
  t759 = t705*t722;
  t1027 = t797*t1021;
  t1032 = 0. + t759 + t1027;
  t1644 = t1562*t797;
  t1646 = -1.*t722*t1578;
  t1647 = t1644 + t1646;
  t2011 = -1.*t1358*t1550;
  t2037 = t1550*t1054;
  t2101 = t1622*t705;
  t2065 = -1.*t1562*t1622;
  t2186 = t617*t1419;
  t2196 = t1436*t679;
  t2202 = t1463*t699;
  t2203 = t2186 + t2196 + t2202;
  t2206 = -1.*t1304*t1419;
  t2207 = -1.*t1318*t1463;
  t2209 = t2206 + t2207;
  t2312 = t1684*t1550;
  t2345 = -1.*t1550*t1054;
  t2394 = -1.*t1622*t705;
  t2383 = t1203*t1622;
  t2562 = t1419*t1175;
  t2566 = t1142*t1436;
  t2576 = t1195*t1463;
  t2582 = t2562 + t2566 + t2576;
  t2536 = -1.*t617*t1419;
  t2546 = -1.*t1436*t679;
  t2547 = -1.*t1463*t699;
  t2553 = t2536 + t2546 + t2547;
  p_output1[0]=t1032;
  p_output1[1]=0. + t1037*t1054 - 1.*t1064*t1085;
  p_output1[2]=0. + t1054*t1064 + t1037*t1085;
  p_output1[3]=t1303*(t1555 + t1586*t1641 + t1647*t1652) + t1586*(-1.*t1303*t1641 + t1695 - 1.*t1652*t1709);
  p_output1[4]=t1684*(t1555 + t1578*t1631 + t1742) + t1358*(-1.*t1300*t1631 + t1695 + t1753);
  p_output1[5]=t1203*(t1340*t1515 + t1355*t1539 + t1742) + t1562*(-1.*t1287*t1515 - 1.*t1270*t1539 + t1753);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t1562*(-1.*t1226*t1471 - 1.*t1262*t1506 - 1.*t1203*t1865) + t1203*(t1323*t1471 + t1337*t1506 + t1562*t1865) - 0.15121*t926 - 0.15121*t978;
  p_output1[10]=-1.*t1304*t1932 - 1.*t1175*t1959 + 4.e-6*(-1.*t1318*t1932 - 1.*t1195*t1959) + 1.e-6*t617 - 0.038749*t679 - 0.28121*t699;
  p_output1[11]=-1.9353204325022392e-7;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1303;
  p_output1[19]=0. + t1037*t1684 - 1.*t1064*t1709;
  p_output1[20]=0. + t1064*t1684 + t1037*t1709;
  p_output1[21]=t1032*(-1.*t1586*t1641 - 1.*t1647*t1652 + t2011) + t1586*(t1032*t1641 + t1085*t1652 + t2037);
  p_output1[22]=t1054*(-1.*t1578*t1631 + t2011 + t2065) + t1358*(t1021*t1631 + t2037 + t2101);
  p_output1[23]=(-1.*t1340*t1515 - 1.*t1355*t1539 + t2065)*t705 + t1562*(t2101 + t1539*t988 + t1515*t993);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121*t1226 - 0.15121*t1262 + (-1.*t1323*t1471 - 1.*t1337*t1506 - 1.*t1562*t1865)*t705 + t1562*(t1865*t705 + t1471*t926 + t1506*t978);
  p_output1[28]=-0.038749*t1142 + 1.e-6*t1175 - 0.28121*t1195 - 1.*t1304*t2203 - 1.*t2209*t617 + 4.e-6*(-1.*t1318*t2203 - 1.*t2209*t699);
  p_output1[29]=0.29999998115510645;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t1586;
  p_output1[37]=t1037*t1358 - 1.*t1064*t1647;
  p_output1[38]=t1064*t1358 + t1037*t1647;
  p_output1[39]=t1032*(t1303*t1641 + t1652*t1709 + t2312) + t1303*(-1.*t1032*t1641 - 1.*t1085*t1652 + t2345);
  p_output1[40]=t1054*(t1300*t1631 + t2312 + t2383) + t1684*(-1.*t1021*t1631 + t2345 + t2394);
  p_output1[41]=(t1287*t1515 + t1270*t1539 + t2383)*t705 + t1203*(t2394 - 1.*t1539*t988 - 1.*t1515*t993);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=-0.15121*t1323 - 0.15121*t1337 + (t1226*t1471 + t1262*t1506 + t1203*t1865)*t705 + t1203*(-1.*t1865*t705 - 1.*t1471*t926 - 1.*t1506*t978);
  p_output1[46]=1.e-6*t1304 - 0.28121*t1318 - 1.*t1175*t2553 - 1.*t2582*t617 + 4.e-6*(-1.*t1195*t2553 - 1.*t2582*t699);
  p_output1[47]=1.1914820871506078e-8;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
