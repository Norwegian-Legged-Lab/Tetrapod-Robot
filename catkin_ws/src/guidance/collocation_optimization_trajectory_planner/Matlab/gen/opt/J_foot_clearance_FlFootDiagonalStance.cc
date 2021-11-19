/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:29:00 GMT+01:00
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
  double t160;
  double t437;
  double t457;
  double t159;
  double t530;
  double t614;
  double t627;
  double t629;
  double t634;
  double t639;
  double t412;
  double t539;
  double t562;
  double t665;
  double t696;
  double t765;
  double t1086;
  double t1087;
  double t1136;
  double t1147;
  double t1237;
  double t1295;
  double t986;
  double t1035;
  double t1077;
  double t1180;
  double t1183;
  double t1186;
  double t1322;
  double t1325;
  double t1338;
  double t1342;
  double t1297;
  double t1301;
  double t1303;
  double t1310;
  double t1312;
  double t1320;
  double t1444;
  double t1404;
  double t1405;
  double t1413;
  double t1423;
  double t1367;
  double t1371;
  double t1372;
  double t1385;
  double t1389;
  double t1391;
  double t658;
  double t660;
  double t784;
  double t817;
  double t1080;
  double t1142;
  double t1158;
  double t1170;
  double t1198;
  double t1206;
  double t1216;
  double t1262;
  double t1264;
  double t1280;
  double t1283;
  double t1529;
  double t1535;
  double t1547;
  double t1549;
  double t1552;
  double t1553;
  double t1321;
  double t1341;
  double t1343;
  double t1362;
  double t1395;
  double t1396;
  double t1399;
  double t1433;
  double t1434;
  double t1436;
  double t1438;
  double t1445;
  double t1447;
  double t1569;
  double t1572;
  double t1578;
  double t1580;
  double t1601;
  double t1618;
  double t1622;
  double t1629;
  double t1586;
  double t1587;
  double t1590;
  double t1595;
  double t1481;
  double t1494;
  double t1687;
  double t1688;
  double t1698;
  double t1700;
  double t1704;
  double t1709;
  double t1712;
  double t1713;
  double t1716;
  double t1722;
  double t1723;
  double t1724;
  double t1771;
  double t1773;
  double t1782;
  double t1728;
  double t1740;
  double t1752;
  double t1790;
  double t1796;
  double t1804;
  double t1844;
  double t1851;
  double t1852;
  double t1882;
  double t1883;
  double t1894;
  double t1899;
  double t1917;
  double t1918;
  double t1921;
  double t1901;
  double t1904;
  double t1908;
  double t1930;
  double t1931;
  double t1932;
  double t2041;
  double t2044;
  double t2046;
  double t2068;
  double t2073;
  double t2074;
  double t2079;
  double t2083;
  double t2084;
  double t2085;
  double t2090;
  double t2056;
  double t2058;
  double t2059;
  double t2064;
  double t2171;
  double t2172;
  double t2173;
  double t2174;
  double t2156;
  double t2157;
  double t2158;
  double t2159;
  double t2180;
  double t2181;
  t160 = Cos(var1[5]);
  t437 = Sin(var1[3]);
  t457 = Sin(var1[4]);
  t159 = Cos(var1[3]);
  t530 = Sin(var1[5]);
  t614 = Cos(var1[6]);
  t627 = -1.*t614;
  t629 = 1. + t627;
  t634 = 0.15121*t629;
  t639 = Sin(var1[6]);
  t412 = t159*t160;
  t539 = -1.*t437*t457*t530;
  t562 = t412 + t539;
  t665 = t160*t437*t457;
  t696 = t159*t530;
  t765 = t665 + t696;
  t1086 = Cos(var1[7]);
  t1087 = -1.*t1086;
  t1136 = 1. + t1087;
  t1147 = Sin(var1[7]);
  t1237 = Cos(var1[4]);
  t1295 = -1. + t1086;
  t986 = t614*t562;
  t1035 = -1.*t765*t639;
  t1077 = t986 + t1035;
  t1180 = t614*t765;
  t1183 = t562*t639;
  t1186 = t1180 + t1183;
  t1322 = Cos(var1[8]);
  t1325 = -1.*t1322;
  t1338 = 1. + t1325;
  t1342 = Sin(var1[8]);
  t1297 = -4.e-6*t1237*t1295*t437;
  t1301 = 1.6e-11*t1295;
  t1303 = 1. + t1301;
  t1310 = t1303*t1077;
  t1312 = 4.e-6*t1186*t1147;
  t1320 = t1297 + t1310 + t1312;
  t1444 = -1. + t1322;
  t1404 = -1.*t1237*t1086*t437;
  t1405 = 4.e-6*t1295*t1077;
  t1413 = t1186*t1147;
  t1423 = t1404 + t1405 + t1413;
  t1367 = -1.000000000016*t1136;
  t1371 = 1. + t1367;
  t1372 = t1371*t1186;
  t1385 = t1237*t437*t1147;
  t1389 = -4.e-6*t1077*t1147;
  t1391 = t1372 + t1385 + t1389;
  t658 = -0.15121*t639;
  t660 = t634 + t658;
  t784 = 0.15121*t639;
  t817 = t634 + t784;
  t1080 = -1.2484e-7*var1[7];
  t1142 = -1.5499600000248e-7*t1136;
  t1158 = 1.124840000016e-6*t1147;
  t1170 = t1080 + t1142 + t1158;
  t1198 = 0.281210000008499*t1136;
  t1206 = 0.03874900000062*t1147;
  t1216 = t1198 + t1206;
  t1262 = 4.9936e-13*var1[7];
  t1264 = -0.03874900000062*t1136;
  t1280 = 0.281210000004*t1147;
  t1283 = t1262 + t1264 + t1280;
  t1529 = t159*t1237*t614*t530;
  t1535 = t159*t1237*t160*t639;
  t1547 = t1529 + t1535;
  t1549 = -1.*t159*t1237*t160*t614;
  t1552 = t159*t1237*t530*t639;
  t1553 = t1549 + t1552;
  t1321 = -1.284e-8*var1[8];
  t1341 = -1.5499600000248e-7*t1338;
  t1343 = 2.012840000032e-6*t1342;
  t1362 = t1321 + t1341 + t1343;
  t1395 = 0.503210000016051*t1338;
  t1396 = 0.03874900000062*t1342;
  t1399 = t1395 + t1396;
  t1433 = 5.136e-14*var1[8];
  t1434 = -0.03874900000062*t1338;
  t1436 = 0.503210000008*t1342;
  t1438 = t1433 + t1434 + t1436;
  t1445 = 1.6e-11*t1444;
  t1447 = 1. + t1445;
  t1569 = -4.e-6*t159*t1295*t457;
  t1572 = t1303*t1547;
  t1578 = 4.e-6*t1553*t1147;
  t1580 = t1569 + t1572 + t1578;
  t1601 = -1.*t159*t1086*t457;
  t1618 = 4.e-6*t1295*t1547;
  t1622 = t1553*t1147;
  t1629 = t1601 + t1618 + t1622;
  t1586 = t1371*t1553;
  t1587 = t159*t457*t1147;
  t1590 = -4.e-6*t1547*t1147;
  t1595 = t1586 + t1587 + t1590;
  t1481 = -1.000000000016*t1338;
  t1494 = 1. + t1481;
  t1687 = t159*t160*t457;
  t1688 = -1.*t437*t530;
  t1698 = t1687 + t1688;
  t1700 = t160*t437;
  t1704 = t159*t457*t530;
  t1709 = t1700 + t1704;
  t1712 = t614*t1698;
  t1713 = -1.*t1709*t639;
  t1716 = t1712 + t1713;
  t1722 = t614*t1709;
  t1723 = t1698*t639;
  t1724 = t1722 + t1723;
  t1771 = t1371*t1724;
  t1773 = -4.e-6*t1716*t1147;
  t1782 = t1771 + t1773;
  t1728 = t1303*t1716;
  t1740 = 4.e-6*t1724*t1147;
  t1752 = t1728 + t1740;
  t1790 = 4.e-6*t1295*t1716;
  t1796 = t1724*t1147;
  t1804 = t1790 + t1796;
  t1844 = -1.*t159*t160*t457;
  t1851 = t437*t530;
  t1852 = t1844 + t1851;
  t1882 = -1.*t614*t1852;
  t1883 = t1882 + t1713;
  t1894 = -1.*t1852*t639;
  t1899 = t1722 + t1894;
  t1917 = t1371*t1899;
  t1918 = -4.e-6*t1883*t1147;
  t1921 = t1917 + t1918;
  t1901 = t1303*t1883;
  t1904 = 4.e-6*t1899*t1147;
  t1908 = t1901 + t1904;
  t1930 = 4.e-6*t1295*t1883;
  t1931 = t1899*t1147;
  t1932 = t1930 + t1931;
  t2041 = t614*t1852;
  t2044 = t1709*t639;
  t2046 = t2041 + t2044;
  t2068 = -1.*t159*t1237*t1086;
  t2073 = -4.e-6*t1086*t1899;
  t2074 = -1.000000000016*t2046*t1147;
  t2079 = t2068 + t2073 + t2074;
  t2083 = t1086*t2046;
  t2084 = -1.*t159*t1237*t1147;
  t2085 = -4.e-6*t1899*t1147;
  t2090 = t2083 + t2084 + t2085;
  t2056 = 4.e-6*t1086*t2046;
  t2058 = -4.e-6*t159*t1237*t1147;
  t2059 = -1.6e-11*t1899*t1147;
  t2064 = t2056 + t2058 + t2059;
  t2171 = 4.e-6*t159*t1237*t1295;
  t2172 = t1303*t1899;
  t2173 = 4.e-6*t2046*t1147;
  t2174 = t2171 + t2172 + t2173;
  t2156 = t159*t1237*t1086;
  t2157 = 4.e-6*t1295*t1899;
  t2158 = t2046*t1147;
  t2159 = t2156 + t2157 + t2158;
  t2180 = t1371*t2046;
  t2181 = t2180 + t2084 + t2085;
  p_output1[0]=1.;
  p_output1[1]=t1077*t1170 + t1186*t1216 + t1320*t1362 + t1391*t1399 + t1423*t1438 - 0.03875*(t1342*t1391 + t1322*t1423 + 4.e-6*t1320*t1444) + 0.14871*(4.e-6*t1342*t1391 + 4.e-6*t1423*t1444 + t1320*t1447) + 0.80321*(-4.e-6*t1320*t1342 - 1.*t1342*t1423 + t1391*t1494) - 1.*t1237*t1283*t437 + t562*t660 + t765*t817;
  p_output1[2]=t1170*t1547 + t1216*t1553 + t1362*t1580 + t1399*t1595 + t1438*t1629 - 0.03875*(4.e-6*t1444*t1580 + t1342*t1595 + t1322*t1629) + 0.80321*(-4.e-6*t1342*t1580 + t1494*t1595 - 1.*t1342*t1629) + 0.14871*(t1447*t1580 + 4.e-6*t1342*t1595 + 4.e-6*t1444*t1629) - 1.*t1283*t159*t457 + t1237*t159*t530*t660 - 1.*t1237*t159*t160*t817;
  p_output1[3]=t1170*t1716 + t1216*t1724 + t1362*t1752 + t1399*t1782 + t1438*t1804 - 0.03875*(4.e-6*t1444*t1752 + t1342*t1782 + t1322*t1804) + 0.80321*(-4.e-6*t1342*t1752 + t1494*t1782 - 1.*t1342*t1804) + 0.14871*(t1447*t1752 + 4.e-6*t1342*t1782 + 4.e-6*t1444*t1804) + t1698*t660 + t1709*t817;
  p_output1[4]=t1170*t1883 + t1216*t1899 + t1362*t1908 + t1399*t1921 + t1438*t1932 - 0.03875*(4.e-6*t1444*t1908 + t1342*t1921 + t1322*t1932) + 0.80321*(-4.e-6*t1342*t1908 + t1494*t1921 - 1.*t1342*t1932) + 0.14871*(t1447*t1908 + 4.e-6*t1342*t1921 + 4.e-6*t1444*t1932) + t1709*(-0.15121*t614 + t784) + t1852*(0.15121*t614 + t784);
  p_output1[5]=(4.9936e-13 + 0.281210000004*t1086 - 0.03874900000062*t1147)*t1237*t159 + (-1.2484e-7 + 1.124840000016e-6*t1086 - 1.5499600000248e-7*t1147)*t1899 + (0.03874900000062*t1086 + 0.281210000008499*t1147)*t2046 + t1362*t2064 + t1399*t2079 + t1438*t2090 - 0.03875*(4.e-6*t1444*t2064 + t1342*t2079 + t1322*t2090) + 0.80321*(-4.e-6*t1342*t2064 + t1494*t2079 - 1.*t1342*t2090) + 0.14871*(t1447*t2064 + 4.e-6*t1342*t2079 + 4.e-6*t1444*t2090);
  p_output1[6]=(5.136e-14 + 0.503210000008*t1322 - 0.03874900000062*t1342)*t2159 + (-1.284e-8 + 2.012840000032e-6*t1322 - 1.5499600000248e-7*t1342)*t2174 + (0.03874900000062*t1322 + 0.503210000016051*t1342)*t2181 + 0.14871*(-4.e-6*t1342*t2159 - 1.6e-11*t1342*t2174 + 4.e-6*t1322*t2181) - 0.03875*(-1.*t1342*t2159 - 4.e-6*t1342*t2174 + t1322*t2181) + 0.80321*(-1.*t1322*t2159 - 4.e-6*t1322*t2174 - 1.000000000016*t1342*t2181);
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

#include "J_foot_clearance_FlFootDiagonalStance.hh"

namespace DiagonalStance
{

void J_foot_clearance_FlFootDiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
