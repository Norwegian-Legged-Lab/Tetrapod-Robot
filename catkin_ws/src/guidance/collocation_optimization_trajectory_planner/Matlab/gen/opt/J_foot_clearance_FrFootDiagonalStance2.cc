/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:31:08 GMT+01:00
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
  double t332;
  double t544;
  double t550;
  double t552;
  double t558;
  double t575;
  double t583;
  double t605;
  double t594;
  double t598;
  double t612;
  double t344;
  double t361;
  double t450;
  double t512;
  double t599;
  double t626;
  double t627;
  double t643;
  double t748;
  double t850;
  double t72;
  double t1034;
  double t1046;
  double t1064;
  double t1135;
  double t1136;
  double t1140;
  double t1155;
  double t1165;
  double t1172;
  double t1177;
  double t1255;
  double t1192;
  double t1194;
  double t1204;
  double t1207;
  double t1208;
  double t1210;
  double t1291;
  double t1293;
  double t1294;
  double t1297;
  double t1320;
  double t1321;
  double t1323;
  double t1329;
  double t1331;
  double t1334;
  double t562;
  double t592;
  double t301;
  double t374;
  double t476;
  double t519;
  double t525;
  double t632;
  double t637;
  double t874;
  double t877;
  double t922;
  double t992;
  double t1010;
  double t1072;
  double t1085;
  double t1121;
  double t1176;
  double t1178;
  double t1184;
  double t1455;
  double t1456;
  double t1457;
  double t1465;
  double t1466;
  double t1468;
  double t1227;
  double t1237;
  double t1260;
  double t1277;
  double t1286;
  double t1307;
  double t1311;
  double t1312;
  double t1314;
  double t1319;
  double t1474;
  double t1475;
  double t1480;
  double t1481;
  double t1489;
  double t1491;
  double t1503;
  double t1504;
  double t1357;
  double t1364;
  double t1509;
  double t1513;
  double t1515;
  double t1516;
  double t1417;
  double t1426;
  double t1563;
  double t1565;
  double t1569;
  double t1579;
  double t1580;
  double t1592;
  double t1594;
  double t1596;
  double t1597;
  double t1605;
  double t1607;
  double t1614;
  double t1619;
  double t1624;
  double t1626;
  double t1629;
  double t1631;
  double t1632;
  double t1634;
  double t1635;
  double t1637;
  double t1706;
  double t1713;
  double t1720;
  double t1721;
  double t1727;
  double t1729;
  double t1731;
  double t1732;
  double t1734;
  double t1739;
  double t1740;
  double t1744;
  double t1746;
  double t1747;
  double t1751;
  double t1759;
  double t1772;
  double t1865;
  double t1867;
  double t1868;
  double t1871;
  double t1872;
  double t1873;
  double t1876;
  double t1877;
  double t1886;
  double t1887;
  double t1890;
  double t1892;
  double t1893;
  double t1894;
  double t1943;
  double t1945;
  double t1947;
  double t1948;
  double t1961;
  double t1966;
  double t1969;
  double t1992;
  double t1994;
  double t1996;
  double t1999;
  t332 = Cos(var1[10]);
  t544 = Sin(var1[3]);
  t550 = Cos(var1[9]);
  t552 = -1.*t550;
  t558 = 1. + t552;
  t575 = Sin(var1[9]);
  t583 = -0.15121*t575;
  t605 = Cos(var1[3]);
  t594 = Cos(var1[5]);
  t598 = Sin(var1[4]);
  t612 = Sin(var1[5]);
  t344 = -1.*t332;
  t361 = 1. + t344;
  t450 = -1. + t332;
  t512 = Sin(var1[10]);
  t599 = t594*t544*t598;
  t626 = t605*t612;
  t627 = t599 + t626;
  t643 = t605*t594;
  t748 = -1.*t544*t598*t612;
  t850 = t643 + t748;
  t72 = Cos(var1[4]);
  t1034 = -1.*t575*t627;
  t1046 = t550*t850;
  t1064 = t1034 + t1046;
  t1135 = t550*t627;
  t1136 = t575*t850;
  t1140 = t1135 + t1136;
  t1155 = Cos(var1[11]);
  t1165 = -1.*t1155;
  t1172 = 1. + t1165;
  t1177 = Sin(var1[11]);
  t1255 = -1. + t1155;
  t1192 = -1.*t72*t512*t544;
  t1194 = -4.e-6*t512*t1064;
  t1204 = -1.000000000016*t361;
  t1207 = 1. + t1204;
  t1208 = t1207*t1140;
  t1210 = t1192 + t1194 + t1208;
  t1291 = -1.*t332*t72*t544;
  t1293 = 4.e-6*t361*t1064;
  t1294 = -1.*t512*t1140;
  t1297 = t1291 + t1293 + t1294;
  t1320 = -4.e-6*t361*t72*t544;
  t1321 = 1.6e-11*t450;
  t1323 = 1. + t1321;
  t1329 = t1323*t1064;
  t1331 = 4.e-6*t512*t1140;
  t1334 = t1320 + t1329 + t1331;
  t562 = 0.15121*t558;
  t592 = t562 + t583;
  t301 = -4.9936e-13*var1[10];
  t374 = -0.038749*t361;
  t476 = 6.19984e-13*t450;
  t519 = -0.281210000004*t512;
  t525 = t301 + t374 + t476 + t519;
  t632 = -0.15121*t558;
  t637 = t632 + t583;
  t874 = -1.2484e-7*var1[10];
  t877 = 2.479936e-18*t361;
  t922 = -1.54996e-7*t450;
  t992 = 1.124840000016e-6*t512;
  t1010 = t874 + t877 + t922 + t992;
  t1072 = 0.281210000008499*t361;
  t1085 = -0.03874900000062*t512;
  t1121 = t1072 + t1085;
  t1176 = 0.50315000001605*t1172;
  t1178 = -0.0398890000006382*t1177;
  t1184 = t1176 + t1178;
  t1455 = t605*t72*t594*t575;
  t1456 = t550*t605*t72*t612;
  t1457 = t1455 + t1456;
  t1465 = -1.*t550*t605*t72*t594;
  t1466 = t605*t72*t575*t612;
  t1468 = t1465 + t1466;
  t1227 = -5.04e-14*var1[11];
  t1237 = -0.039889*t1172;
  t1260 = 6.38224e-13*t1255;
  t1277 = -0.503150000008*t1177;
  t1286 = t1227 + t1237 + t1260 + t1277;
  t1307 = -1.26e-8*var1[11];
  t1311 = 2.552896e-18*t1172;
  t1312 = -1.59556e-7*t1255;
  t1314 = 2.012600000032e-6*t1177;
  t1319 = t1307 + t1311 + t1312 + t1314;
  t1474 = -1.*t605*t512*t598;
  t1475 = -4.e-6*t512*t1457;
  t1480 = t1207*t1468;
  t1481 = t1474 + t1475 + t1480;
  t1489 = -1.*t332*t605*t598;
  t1491 = 4.e-6*t361*t1457;
  t1503 = -1.*t512*t1468;
  t1504 = t1489 + t1491 + t1503;
  t1357 = 1.6e-11*t1255;
  t1364 = 1. + t1357;
  t1509 = -4.e-6*t361*t605*t598;
  t1513 = t1323*t1457;
  t1515 = 4.e-6*t512*t1468;
  t1516 = t1509 + t1513 + t1515;
  t1417 = -1.000000000016*t1172;
  t1426 = 1. + t1417;
  t1563 = t605*t594*t598;
  t1565 = -1.*t544*t612;
  t1569 = t1563 + t1565;
  t1579 = t594*t544;
  t1580 = t605*t598*t612;
  t1592 = t1579 + t1580;
  t1594 = t575*t1569;
  t1596 = t550*t1592;
  t1597 = t1594 + t1596;
  t1605 = t550*t1569;
  t1607 = -1.*t575*t1592;
  t1614 = t1605 + t1607;
  t1619 = 4.e-6*t512*t1597;
  t1624 = t1323*t1614;
  t1626 = t1619 + t1624;
  t1629 = -1.*t512*t1597;
  t1631 = 4.e-6*t361*t1614;
  t1632 = t1629 + t1631;
  t1634 = t1207*t1597;
  t1635 = -4.e-6*t512*t1614;
  t1637 = t1634 + t1635;
  t1706 = -0.15121*t550;
  t1713 = -1.*t605*t594*t598;
  t1720 = t544*t612;
  t1721 = t1713 + t1720;
  t1727 = -1.*t575*t1721;
  t1729 = t1727 + t1596;
  t1731 = -1.*t550*t1721;
  t1732 = t1731 + t1607;
  t1734 = 4.e-6*t512*t1729;
  t1739 = t1323*t1732;
  t1740 = t1734 + t1739;
  t1744 = -1.*t512*t1729;
  t1746 = 4.e-6*t361*t1732;
  t1747 = t1744 + t1746;
  t1751 = t1207*t1729;
  t1759 = -4.e-6*t512*t1732;
  t1772 = t1751 + t1759;
  t1865 = t550*t1721;
  t1867 = t575*t1592;
  t1868 = t1865 + t1867;
  t1871 = -1.*t605*t72*t512;
  t1872 = -1.*t332*t1868;
  t1873 = t1871 + t1734 + t1872;
  t1876 = 4.e-6*t605*t72*t512;
  t1877 = -1.6e-11*t512*t1729;
  t1886 = 4.e-6*t332*t1868;
  t1887 = t1876 + t1877 + t1886;
  t1890 = t332*t605*t72;
  t1892 = -4.e-6*t332*t1729;
  t1893 = -1.000000000016*t512*t1868;
  t1894 = t1890 + t1892 + t1893;
  t1943 = t605*t72*t512;
  t1945 = -4.e-6*t512*t1729;
  t1947 = t1207*t1868;
  t1948 = t1943 + t1945 + t1947;
  t1961 = 4.e-6*t361*t1729;
  t1966 = -1.*t512*t1868;
  t1969 = t1890 + t1961 + t1966;
  t1992 = 4.e-6*t361*t605*t72;
  t1994 = t1323*t1729;
  t1996 = 4.e-6*t512*t1868;
  t1999 = t1992 + t1994 + t1996;
  p_output1[0]=1.;
  p_output1[1]=t1010*t1064 + t1121*t1140 + t1184*t1210 + t1286*t1297 + t1319*t1334 - 0.041195*(-1.*t1177*t1210 + t1155*t1297 + 4.e-6*t1172*t1334) - 0.14871*(4.e-6*t1177*t1210 + 4.e-6*t1172*t1297 + t1334*t1364) + 0.803147*(t1177*t1297 - 4.e-6*t1177*t1334 + t1210*t1426) + t592*t627 - 1.*t525*t544*t72 + t637*t850;
  p_output1[2]=t1010*t1457 + t1121*t1468 + t1184*t1481 + t1286*t1504 + t1319*t1516 - 0.041195*(-1.*t1177*t1481 + t1155*t1504 + 4.e-6*t1172*t1516) + 0.803147*(t1426*t1481 + t1177*t1504 - 4.e-6*t1177*t1516) - 0.14871*(4.e-6*t1177*t1481 + 4.e-6*t1172*t1504 + t1364*t1516) - 1.*t525*t598*t605 - 1.*t592*t594*t605*t72 + t605*t612*t637*t72;
  p_output1[3]=t1121*t1597 + t1010*t1614 + t1319*t1626 + t1286*t1632 + t1184*t1637 - 0.041195*(4.e-6*t1172*t1626 + t1155*t1632 - 1.*t1177*t1637) - 0.14871*(t1364*t1626 + 4.e-6*t1172*t1632 + 4.e-6*t1177*t1637) + 0.803147*(-4.e-6*t1177*t1626 + t1177*t1632 + t1426*t1637) + t1592*t592 + t1569*t637;
  p_output1[4]=t1121*t1729 + t1010*t1732 + t1319*t1740 + t1286*t1747 + t1184*t1772 - 0.041195*(4.e-6*t1172*t1740 + t1155*t1747 - 1.*t1177*t1772) - 0.14871*(t1364*t1740 + 4.e-6*t1172*t1747 + 4.e-6*t1177*t1772) + 0.803147*(-4.e-6*t1177*t1740 + t1177*t1747 + t1426*t1772) + t1721*(t1706 + 0.15121*t575) + t1592*(t1706 + t583);
  p_output1[5]=t1286*t1873 + t1319*t1887 + t1184*t1894 - 0.041195*(t1155*t1873 + 4.e-6*t1172*t1887 - 1.*t1177*t1894) - 0.14871*(4.e-6*t1172*t1873 + t1364*t1887 + 4.e-6*t1177*t1894) + 0.803147*(t1177*t1873 - 4.e-6*t1177*t1887 + t1426*t1894) + t1729*(-1.2484e-7 + 1.124840000016e-6*t332 + 1.5499600000248e-7*t512) + t1868*(-0.03874900000062*t332 + 0.281210000008499*t512) + (-4.9936e-13 + t1085 - 0.281210000004*t332)*t605*t72;
  p_output1[6]=(-0.0398890000006382*t1155 + 0.50315000001605*t1177)*t1948 + (-5.04e-14 - 0.503150000008*t1155 + t1178)*t1969 + (-1.26e-8 + 2.012600000032e-6*t1155 + 1.59556000002553e-7*t1177)*t1999 + 0.803147*(-1.000000000016*t1177*t1948 + t1155*t1969 - 4.e-6*t1155*t1999) - 0.14871*(4.e-6*t1155*t1948 + 4.e-6*t1177*t1969 - 1.6e-11*t1177*t1999) - 0.041195*(-1.*t1155*t1948 - 1.*t1177*t1969 + 4.e-6*t1177*t1999);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_foot_clearance_FrFootDiagonalStance2.hh"

namespace DiagonalStance2
{

void J_foot_clearance_FrFootDiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
