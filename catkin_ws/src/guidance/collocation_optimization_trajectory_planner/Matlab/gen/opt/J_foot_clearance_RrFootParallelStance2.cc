/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:32:48 GMT+01:00
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
  double t401;
  double t408;
  double t435;
  double t504;
  double t750;
  double t785;
  double t787;
  double t811;
  double t812;
  double t813;
  double t924;
  double t820;
  double t890;
  double t954;
  double t613;
  double t617;
  double t892;
  double t955;
  double t956;
  double t1007;
  double t1009;
  double t1034;
  double t1076;
  double t488;
  double t1320;
  double t1328;
  double t1334;
  double t1343;
  double t52;
  double t1208;
  double t1176;
  double t1183;
  double t1186;
  double t1298;
  double t1299;
  double t1305;
  double t1369;
  double t626;
  double t1388;
  double t531;
  double t1338;
  double t1446;
  double t1447;
  double t1479;
  double t1105;
  double t1416;
  double t1077;
  double t1520;
  double t1392;
  double t1414;
  double t1420;
  double t1423;
  double t1425;
  double t1426;
  double t1429;
  double t1434;
  double t1528;
  double t1472;
  double t1475;
  double t1477;
  double t1486;
  double t1487;
  double t1488;
  double t1498;
  double t1508;
  double t1535;
  double t1536;
  double t1538;
  double t1539;
  double t1540;
  double t1543;
  double t1551;
  double t1552;
  double t1441;
  double t1572;
  double t1449;
  double t1595;
  double t1556;
  double t1345;
  double t815;
  double t816;
  double t174;
  double t442;
  double t586;
  double t597;
  double t700;
  double t712;
  double t746;
  double t1000;
  double t1005;
  double t1042;
  double t1071;
  double t1088;
  double t1104;
  double t1113;
  double t1156;
  double t1175;
  double t1201;
  double t1202;
  double t1210;
  double t1224;
  double t1235;
  double t1248;
  double t1284;
  double t1311;
  double t1336;
  double t1356;
  double t1366;
  double t1376;
  double t1386;
  double t1387;
  double t1650;
  double t1652;
  double t1654;
  double t1660;
  double t1663;
  double t1671;
  double t1438;
  double t1440;
  double t1442;
  double t1445;
  double t1454;
  double t1465;
  double t1466;
  double t1518;
  double t1519;
  double t1522;
  double t1524;
  double t1529;
  double t1531;
  double t1534;
  double t1562;
  double t1682;
  double t1683;
  double t1684;
  double t1687;
  double t1573;
  double t1689;
  double t1691;
  double t1693;
  double t1701;
  double t1578;
  double t1579;
  double t1713;
  double t1714;
  double t1717;
  double t1718;
  double t1597;
  double t1605;
  double t1606;
  double t1610;
  double t1618;
  double t1619;
  double t1624;
  double t1626;
  double t1769;
  double t1770;
  double t1773;
  double t1779;
  double t1784;
  double t1786;
  double t1788;
  double t1789;
  double t1791;
  double t1800;
  double t1805;
  double t1809;
  double t1815;
  double t1819;
  double t1821;
  double t1826;
  double t1829;
  double t1830;
  double t1839;
  double t1840;
  double t1841;
  double t1872;
  double t1874;
  double t1875;
  double t1881;
  double t1883;
  double t1885;
  double t1886;
  double t1889;
  double t1890;
  double t1891;
  double t1897;
  double t1901;
  double t1913;
  double t1920;
  double t1921;
  double t1922;
  double t1951;
  double t1976;
  double t1980;
  double t2007;
  double t2008;
  double t2011;
  double t1945;
  double t2040;
  double t1998;
  double t2014;
  double t2018;
  double t2021;
  double t2023;
  double t2026;
  double t2030;
  double t2036;
  double t2038;
  double t2039;
  double t2041;
  double t2042;
  double t2043;
  double t2047;
  double t2049;
  double t2051;
  double t2053;
  double t2056;
  double t2059;
  double t2111;
  double t2126;
  double t2129;
  double t2132;
  double t2139;
  double t2179;
  double t2180;
  double t2181;
  double t2183;
  double t2119;
  double t2203;
  double t2204;
  double t2207;
  double t2208;
  double t2219;
  double t2143;
  double t2195;
  double t2190;
  t401 = Cos(var1[16]);
  t408 = -1.*t401;
  t435 = 1. + t408;
  t504 = Sin(var1[16]);
  t750 = Sin(var1[3]);
  t785 = Cos(var1[15]);
  t787 = -1.*t785;
  t811 = 1. + t787;
  t812 = -0.15121*t811;
  t813 = Sin(var1[15]);
  t924 = Cos(var1[3]);
  t820 = Cos(var1[5]);
  t890 = Sin(var1[4]);
  t954 = Sin(var1[5]);
  t613 = -1. + t401;
  t617 = 4.e-6*t613;
  t892 = t820*t750*t890;
  t955 = t924*t954;
  t956 = t892 + t955;
  t1007 = t924*t820;
  t1009 = -1.*t750*t890*t954;
  t1034 = t1007 + t1009;
  t1076 = 7.e-6*t435;
  t488 = 2.8e-11*t435;
  t1320 = Cos(var1[17]);
  t1328 = -1.*t1320;
  t1334 = 1. + t1328;
  t1343 = Sin(var1[17]);
  t52 = Cos(var1[4]);
  t1208 = -4.e-6*t504;
  t1176 = -1.*t813*t956;
  t1183 = t785*t1034;
  t1186 = t1176 + t1183;
  t1298 = t785*t956;
  t1299 = t813*t1034;
  t1305 = t1298 + t1299;
  t1369 = 2.8e-11*t1334;
  t626 = -7.e-6*t504;
  t1388 = -2.8e-11*t435;
  t531 = -1.*t504;
  t1338 = 7.e-6*t1334;
  t1446 = -1. + t1320;
  t1447 = 4.e-6*t1446;
  t1479 = 4.e-6*t435;
  t1105 = 7.e-6*t504;
  t1416 = -7.e-6*t435;
  t1077 = 4.e-6*t504;
  t1520 = 4.e-6*t1343;
  t1392 = t1388 + t504;
  t1414 = -1.*t52*t1392*t750;
  t1420 = t1416 + t1208;
  t1423 = t1420*t1186;
  t1425 = -1.000000000016*t435;
  t1426 = 1. + t1425;
  t1429 = t1426*t1305;
  t1434 = t1414 + t1423 + t1429;
  t1528 = 7.e-6*t1343;
  t1472 = -1.000000000049*t435;
  t1475 = 1. + t1472;
  t1477 = -1.*t1475*t52*t750;
  t1486 = t1479 + t626;
  t1487 = t1486*t1186;
  t1488 = t1388 + t531;
  t1498 = t1488*t1305;
  t1508 = t1477 + t1487 + t1498;
  t1535 = t1479 + t1105;
  t1536 = -1.*t52*t1535*t750;
  t1538 = -6.5e-11*t435;
  t1539 = 1. + t1538;
  t1540 = t1539*t1186;
  t1543 = t1416 + t1077;
  t1551 = t1543*t1305;
  t1552 = t1536 + t1540 + t1551;
  t1441 = -1.*t1343;
  t1572 = 4.e-6*t1334;
  t1449 = -7.e-6*t1343;
  t1595 = -2.8e-11*t1334;
  t1556 = -7.e-6*t1334;
  t1345 = -4.e-6*t1343;
  t815 = -0.15121*t813;
  t816 = t812 + t815;
  t174 = 1.5843479999999999e-12*var1[16];
  t442 = -0.03874900000889869*t435;
  t586 = t488 + t531;
  t597 = -0.281211000004*t586;
  t700 = t617 + t626;
  t712 = -1.8134809999999998e-6*t700;
  t746 = t174 + t442 + t597 + t712;
  t1000 = 0.15121*t813;
  t1005 = t812 + t1000;
  t1042 = 3.9608699999999997e-7*var1[16];
  t1071 = -1.1787626499999999e-16*t435;
  t1088 = t1076 + t1077;
  t1104 = -0.281211000004*t1088;
  t1113 = t617 + t1105;
  t1156 = -0.038749000006999997*t1113;
  t1175 = t1042 + t1071 + t1104 + t1156;
  t1201 = -2.7726089999999997e-12*var1[16];
  t1202 = -0.2812110000084994*t435;
  t1210 = t1076 + t1208;
  t1224 = -1.8134809999999998e-6*t1210;
  t1235 = t488 + t504;
  t1248 = -0.038749000006999997*t1235;
  t1284 = t1201 + t1202 + t1224 + t1248;
  t1311 = -1.9784030000000015e-12*var1[17];
  t1336 = -0.5031510000160505*t1334;
  t1356 = t1338 + t1345;
  t1366 = -3.367757e-6*t1356;
  t1376 = t1369 + t1343;
  t1386 = -0.038575000014*t1376;
  t1387 = t1311 + t1336 + t1366 + t1386;
  t1650 = t924*t52*t820*t813;
  t1652 = t785*t924*t52*t954;
  t1654 = t1650 + t1652;
  t1660 = -1.*t785*t924*t52*t820;
  t1663 = t924*t52*t813*t954;
  t1671 = t1660 + t1663;
  t1438 = 1.1305160000000008e-12*var1[17];
  t1440 = -0.03857500001589017*t1334;
  t1442 = t1369 + t1441;
  t1445 = -0.5031510000080001*t1442;
  t1454 = t1447 + t1449;
  t1465 = -3.367757e-6*t1454;
  t1466 = t1438 + t1440 + t1445 + t1465;
  t1518 = 2.826290000000002e-7*var1[17];
  t1519 = -2.18904205e-16*t1334;
  t1522 = t1338 + t1520;
  t1524 = -0.5031510000080001*t1522;
  t1529 = t1447 + t1528;
  t1531 = -0.038575000014*t1529;
  t1534 = t1518 + t1519 + t1524 + t1531;
  t1562 = t1556 + t1520;
  t1682 = -1.*t924*t1392*t890;
  t1683 = t1420*t1654;
  t1684 = t1426*t1671;
  t1687 = t1682 + t1683 + t1684;
  t1573 = t1572 + t1528;
  t1689 = -1.*t1475*t924*t890;
  t1691 = t1486*t1654;
  t1693 = t1488*t1671;
  t1701 = t1689 + t1691 + t1693;
  t1578 = -6.5e-11*t1334;
  t1579 = 1. + t1578;
  t1713 = -1.*t924*t1535*t890;
  t1714 = t1539*t1654;
  t1717 = t1543*t1671;
  t1718 = t1713 + t1714 + t1717;
  t1597 = t1595 + t1441;
  t1605 = -1.000000000049*t1334;
  t1606 = 1. + t1605;
  t1610 = t1572 + t1449;
  t1618 = -1.000000000016*t1334;
  t1619 = 1. + t1618;
  t1624 = t1595 + t1343;
  t1626 = t1556 + t1345;
  t1769 = t924*t820*t890;
  t1770 = -1.*t750*t954;
  t1773 = t1769 + t1770;
  t1779 = t820*t750;
  t1784 = t924*t890*t954;
  t1786 = t1779 + t1784;
  t1788 = t813*t1773;
  t1789 = t785*t1786;
  t1791 = t1788 + t1789;
  t1800 = t785*t1773;
  t1805 = -1.*t813*t1786;
  t1809 = t1800 + t1805;
  t1815 = t1543*t1791;
  t1819 = t1539*t1809;
  t1821 = t1815 + t1819;
  t1826 = t1488*t1791;
  t1829 = t1486*t1809;
  t1830 = t1826 + t1829;
  t1839 = t1426*t1791;
  t1840 = t1420*t1809;
  t1841 = t1839 + t1840;
  t1872 = -1.*t924*t820*t890;
  t1874 = t750*t954;
  t1875 = t1872 + t1874;
  t1881 = -1.*t813*t1875;
  t1883 = t1881 + t1789;
  t1885 = -1.*t785*t1875;
  t1886 = t1885 + t1805;
  t1889 = t1543*t1883;
  t1890 = t1539*t1886;
  t1891 = t1889 + t1890;
  t1897 = t1488*t1883;
  t1901 = t1486*t1886;
  t1913 = t1897 + t1901;
  t1920 = t1426*t1883;
  t1921 = t1420*t1886;
  t1922 = t1920 + t1921;
  t1951 = 2.8e-11*t504;
  t1976 = 7.e-6*t401;
  t1980 = 4.e-6*t401;
  t2007 = t785*t1875;
  t2008 = t813*t1786;
  t2011 = t2007 + t2008;
  t1945 = -7.e-6*t401;
  t2040 = -2.8e-11*t504;
  t1998 = -4.e-6*t401;
  t2014 = t1976 + t1077;
  t2018 = t924*t52*t2014;
  t2021 = -6.5e-11*t504*t1883;
  t2023 = t1980 + t626;
  t2026 = t2023*t2011;
  t2030 = t2018 + t2021 + t2026;
  t2036 = -1.000000000049*t924*t52*t504;
  t2038 = t1945 + t1077;
  t2039 = t2038*t1883;
  t2041 = t408 + t2040;
  t2042 = t2041*t2011;
  t2043 = t2036 + t2039 + t2042;
  t2047 = t401 + t2040;
  t2049 = t924*t52*t2047;
  t2051 = t1998 + t626;
  t2053 = t2051*t1883;
  t2056 = -1.000000000016*t504*t2011;
  t2059 = t2049 + t2053 + t2056;
  t2111 = 2.8e-11*t1343;
  t2126 = t924*t52*t1392;
  t2129 = t1420*t1883;
  t2132 = t1426*t2011;
  t2139 = t2126 + t2129 + t2132;
  t2179 = t1475*t924*t52;
  t2180 = t1486*t1883;
  t2181 = t1488*t2011;
  t2183 = t2179 + t2180 + t2181;
  t2119 = -4.e-6*t1320;
  t2203 = t924*t52*t1535;
  t2204 = t1539*t1883;
  t2207 = t1543*t2011;
  t2208 = t2203 + t2204 + t2207;
  t2219 = -2.8e-11*t1343;
  t2143 = -7.e-6*t1320;
  t2195 = 4.e-6*t1320;
  t2190 = 7.e-6*t1320;
  p_output1[0]=1.;
  p_output1[1]=t1005*t1034 + t1175*t1186 + t1284*t1305 + t1387*t1434 + t1466*t1508 + t1534*t1552 - 0.148715*(t1434*t1562 + t1508*t1573 + t1552*t1579) - 0.038576*(t1434*t1597 + t1508*t1606 + t1552*t1610) - 0.80315*(t1434*t1619 + t1508*t1624 + t1552*t1626) - 1.*t52*t746*t750 + t816*t956;
  p_output1[2]=t1175*t1654 + t1284*t1671 + t1387*t1687 + t1466*t1701 + t1534*t1718 - 0.148715*(t1562*t1687 + t1573*t1701 + t1579*t1718) - 0.038576*(t1597*t1687 + t1606*t1701 + t1610*t1718) - 0.80315*(t1619*t1687 + t1624*t1701 + t1626*t1718) - 1.*t52*t816*t820*t924 - 1.*t746*t890*t924 + t1005*t52*t924*t954;
  p_output1[3]=t1005*t1773 + t1284*t1791 + t1175*t1809 + t1534*t1821 + t1466*t1830 + t1387*t1841 - 0.148715*(t1579*t1821 + t1573*t1830 + t1562*t1841) - 0.038576*(t1610*t1821 + t1606*t1830 + t1597*t1841) - 0.80315*(t1626*t1821 + t1624*t1830 + t1619*t1841) + t1786*t816;
  p_output1[4]=t1284*t1883 + t1175*t1886 + t1534*t1891 + t1466*t1913 + t1387*t1922 - 0.148715*(t1579*t1891 + t1573*t1913 + t1562*t1922) - 0.038576*(t1610*t1891 + t1606*t1913 + t1597*t1922) - 0.80315*(t1626*t1891 + t1624*t1913 + t1619*t1922) + t1875*(-0.15121*t785 + t815) + t1786*(0.15121*t785 + t815);
  p_output1[5]=t1534*t2030 + t1466*t2043 + t1387*t2059 - 0.148715*(t1579*t2030 + t1573*t2043 + t1562*t2059) - 0.038576*(t1610*t2030 + t1606*t2043 + t1597*t2059) - 0.80315*(t1626*t2030 + t1624*t2043 + t1619*t2059) + t2011*(-2.7726089999999997e-12 - 1.8134809999999998e-6*(t1105 + t1998) - 0.038749000006999997*(t1951 + t401) - 0.2812110000084994*t504) + t1883*(3.9608699999999997e-7 - 0.038749000006999997*(t1208 + t1976) - 0.281211000004*(t1105 + t1980) - 1.1787626499999999e-16*t504) + (1.5843479999999999e-12 - 1.8134809999999998e-6*(t1208 + t1945) - 0.281211000004*(t1951 + t408) - 0.03874900000889869*t504)*t52*t924;
  p_output1[6]=(-1.9784030000000015e-12 - 0.5031510000160505*t1343 - 0.038575000014*(t1320 + t2111) - 3.367757e-6*(t1528 + t2119))*t2139 + (1.1305160000000008e-12 - 0.03857500001589017*t1343 - 0.5031510000080001*(t1328 + t2111) - 3.367757e-6*(t1345 + t2143))*t2183 + (2.826290000000002e-7 - 2.18904205e-16*t1343 - 0.038575000014*(t1345 + t2190) - 0.5031510000080001*(t1528 + t2195))*t2208 - 0.148715*(t2183*(t1520 + t2190) + t2139*(t1449 + t2195) - 6.5e-11*t1343*t2208) - 0.80315*(-1.000000000016*t1343*t2139 + (t1449 + t2119)*t2208 + t2183*(t1320 + t2219)) - 0.038576*(-1.000000000049*t1343*t2183 + (t1520 + t2143)*t2208 + t2139*(t1328 + t2219));
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

#include "J_foot_clearance_RrFootParallelStance2.hh"

namespace ParallelStance2
{

void J_foot_clearance_RrFootParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
