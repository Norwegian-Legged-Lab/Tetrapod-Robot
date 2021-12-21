/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:16:43 GMT+01:00
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
  double t340;
  double t460;
  double t486;
  double t258;
  double t511;
  double t600;
  double t602;
  double t623;
  double t637;
  double t642;
  double t347;
  double t517;
  double t589;
  double t704;
  double t719;
  double t780;
  double t1038;
  double t1070;
  double t1119;
  double t1186;
  double t1294;
  double t1320;
  double t820;
  double t845;
  double t977;
  double t1220;
  double t1228;
  double t1230;
  double t1346;
  double t1348;
  double t1357;
  double t1365;
  double t1323;
  double t1326;
  double t1331;
  double t1339;
  double t1340;
  double t1344;
  double t1526;
  double t1484;
  double t1495;
  double t1496;
  double t1504;
  double t1402;
  double t1426;
  double t1427;
  double t1430;
  double t1440;
  double t1443;
  double t644;
  double t647;
  double t791;
  double t796;
  double t1000;
  double t1185;
  double t1193;
  double t1194;
  double t1233;
  double t1254;
  double t1266;
  double t1299;
  double t1312;
  double t1313;
  double t1314;
  double t1614;
  double t1617;
  double t1619;
  double t1622;
  double t1623;
  double t1628;
  double t1345;
  double t1360;
  double t1369;
  double t1384;
  double t1446;
  double t1453;
  double t1462;
  double t1511;
  double t1519;
  double t1520;
  double t1521;
  double t1529;
  double t1535;
  double t1634;
  double t1636;
  double t1638;
  double t1641;
  double t1659;
  double t1660;
  double t1667;
  double t1672;
  double t1644;
  double t1647;
  double t1651;
  double t1655;
  double t1557;
  double t1561;
  double t1736;
  double t1738;
  double t1743;
  double t1753;
  double t1755;
  double t1756;
  double t1759;
  double t1763;
  double t1764;
  double t1767;
  double t1769;
  double t1774;
  double t1800;
  double t1801;
  double t1810;
  double t1778;
  double t1785;
  double t1790;
  double t1824;
  double t1825;
  double t1826;
  double t1892;
  double t1903;
  double t1904;
  double t1914;
  double t1915;
  double t1921;
  double t1923;
  double t1936;
  double t1950;
  double t1951;
  double t1928;
  double t1930;
  double t1934;
  double t1955;
  double t1965;
  double t1967;
  double t2035;
  double t2038;
  double t2039;
  double t2068;
  double t2069;
  double t2070;
  double t2072;
  double t2074;
  double t2078;
  double t2080;
  double t2081;
  double t2060;
  double t2061;
  double t2063;
  double t2065;
  double t2181;
  double t2182;
  double t2183;
  double t2185;
  double t2160;
  double t2161;
  double t2163;
  double t2165;
  double t2203;
  double t2204;
  t340 = Cos(var1[5]);
  t460 = Sin(var1[3]);
  t486 = Sin(var1[4]);
  t258 = Cos(var1[3]);
  t511 = Sin(var1[5]);
  t600 = Cos(var1[6]);
  t602 = -1.*t600;
  t623 = 1. + t602;
  t637 = 0.15121*t623;
  t642 = Sin(var1[6]);
  t347 = t258*t340;
  t517 = -1.*t460*t486*t511;
  t589 = t347 + t517;
  t704 = t340*t460*t486;
  t719 = t258*t511;
  t780 = t704 + t719;
  t1038 = Cos(var1[7]);
  t1070 = -1.*t1038;
  t1119 = 1. + t1070;
  t1186 = Sin(var1[7]);
  t1294 = Cos(var1[4]);
  t1320 = -1. + t1038;
  t820 = t600*t589;
  t845 = -1.*t780*t642;
  t977 = t820 + t845;
  t1220 = t600*t780;
  t1228 = t589*t642;
  t1230 = t1220 + t1228;
  t1346 = Cos(var1[8]);
  t1348 = -1.*t1346;
  t1357 = 1. + t1348;
  t1365 = Sin(var1[8]);
  t1323 = -4.e-6*t1294*t1320*t460;
  t1326 = 1.6e-11*t1320;
  t1331 = 1. + t1326;
  t1339 = t1331*t977;
  t1340 = 4.e-6*t1230*t1186;
  t1344 = t1323 + t1339 + t1340;
  t1526 = -1. + t1346;
  t1484 = -1.*t1294*t1038*t460;
  t1495 = 4.e-6*t1320*t977;
  t1496 = t1230*t1186;
  t1504 = t1484 + t1495 + t1496;
  t1402 = -1.000000000016*t1119;
  t1426 = 1. + t1402;
  t1427 = t1426*t1230;
  t1430 = t1294*t460*t1186;
  t1440 = -4.e-6*t977*t1186;
  t1443 = t1427 + t1430 + t1440;
  t644 = -0.15121*t642;
  t647 = t637 + t644;
  t791 = 0.15121*t642;
  t796 = t637 + t791;
  t1000 = -1.2484e-7*var1[7];
  t1185 = -1.5499600000248e-7*t1119;
  t1193 = 1.124840000016e-6*t1186;
  t1194 = t1000 + t1185 + t1193;
  t1233 = 0.281210000008499*t1119;
  t1254 = 0.03874900000062*t1186;
  t1266 = t1233 + t1254;
  t1299 = 4.9936e-13*var1[7];
  t1312 = -0.03874900000062*t1119;
  t1313 = 0.281210000004*t1186;
  t1314 = t1299 + t1312 + t1313;
  t1614 = t258*t1294*t600*t511;
  t1617 = t258*t1294*t340*t642;
  t1619 = t1614 + t1617;
  t1622 = -1.*t258*t1294*t340*t600;
  t1623 = t258*t1294*t511*t642;
  t1628 = t1622 + t1623;
  t1345 = -1.284e-8*var1[8];
  t1360 = -1.5499600000248e-7*t1357;
  t1369 = 2.012840000032e-6*t1365;
  t1384 = t1345 + t1360 + t1369;
  t1446 = 0.503210000016051*t1357;
  t1453 = 0.03874900000062*t1365;
  t1462 = t1446 + t1453;
  t1511 = 5.136e-14*var1[8];
  t1519 = -0.03874900000062*t1357;
  t1520 = 0.503210000008*t1365;
  t1521 = t1511 + t1519 + t1520;
  t1529 = 1.6e-11*t1526;
  t1535 = 1. + t1529;
  t1634 = -4.e-6*t258*t1320*t486;
  t1636 = t1331*t1619;
  t1638 = 4.e-6*t1628*t1186;
  t1641 = t1634 + t1636 + t1638;
  t1659 = -1.*t258*t1038*t486;
  t1660 = 4.e-6*t1320*t1619;
  t1667 = t1628*t1186;
  t1672 = t1659 + t1660 + t1667;
  t1644 = t1426*t1628;
  t1647 = t258*t486*t1186;
  t1651 = -4.e-6*t1619*t1186;
  t1655 = t1644 + t1647 + t1651;
  t1557 = -1.000000000016*t1357;
  t1561 = 1. + t1557;
  t1736 = t258*t340*t486;
  t1738 = -1.*t460*t511;
  t1743 = t1736 + t1738;
  t1753 = t340*t460;
  t1755 = t258*t486*t511;
  t1756 = t1753 + t1755;
  t1759 = t600*t1743;
  t1763 = -1.*t1756*t642;
  t1764 = t1759 + t1763;
  t1767 = t600*t1756;
  t1769 = t1743*t642;
  t1774 = t1767 + t1769;
  t1800 = t1426*t1774;
  t1801 = -4.e-6*t1764*t1186;
  t1810 = t1800 + t1801;
  t1778 = t1331*t1764;
  t1785 = 4.e-6*t1774*t1186;
  t1790 = t1778 + t1785;
  t1824 = 4.e-6*t1320*t1764;
  t1825 = t1774*t1186;
  t1826 = t1824 + t1825;
  t1892 = -1.*t258*t340*t486;
  t1903 = t460*t511;
  t1904 = t1892 + t1903;
  t1914 = -1.*t600*t1904;
  t1915 = t1914 + t1763;
  t1921 = -1.*t1904*t642;
  t1923 = t1767 + t1921;
  t1936 = t1426*t1923;
  t1950 = -4.e-6*t1915*t1186;
  t1951 = t1936 + t1950;
  t1928 = t1331*t1915;
  t1930 = 4.e-6*t1923*t1186;
  t1934 = t1928 + t1930;
  t1955 = 4.e-6*t1320*t1915;
  t1965 = t1923*t1186;
  t1967 = t1955 + t1965;
  t2035 = t600*t1904;
  t2038 = t1756*t642;
  t2039 = t2035 + t2038;
  t2068 = -1.*t258*t1294*t1038;
  t2069 = -4.e-6*t1038*t1923;
  t2070 = -1.000000000016*t2039*t1186;
  t2072 = t2068 + t2069 + t2070;
  t2074 = t1038*t2039;
  t2078 = -1.*t258*t1294*t1186;
  t2080 = -4.e-6*t1923*t1186;
  t2081 = t2074 + t2078 + t2080;
  t2060 = 4.e-6*t1038*t2039;
  t2061 = -4.e-6*t258*t1294*t1186;
  t2063 = -1.6e-11*t1923*t1186;
  t2065 = t2060 + t2061 + t2063;
  t2181 = 4.e-6*t258*t1294*t1320;
  t2182 = t1331*t1923;
  t2183 = 4.e-6*t2039*t1186;
  t2185 = t2181 + t2182 + t2183;
  t2160 = t258*t1294*t1038;
  t2161 = 4.e-6*t1320*t1923;
  t2163 = t2039*t1186;
  t2165 = t2160 + t2161 + t2163;
  t2203 = t1426*t2039;
  t2204 = t2203 + t2078 + t2080;
  p_output1[0]=1.;
  p_output1[1]=t1230*t1266 + t1344*t1384 + t1443*t1462 + t1504*t1521 - 0.03875*(t1365*t1443 + t1346*t1504 + 4.e-6*t1344*t1526) + 0.14871*(4.e-6*t1365*t1443 + 4.e-6*t1504*t1526 + t1344*t1535) + 0.80321*(-4.e-6*t1344*t1365 - 1.*t1365*t1504 + t1443*t1561) - 1.*t1294*t1314*t460 + t589*t647 + t780*t796 + t1194*t977;
  p_output1[2]=t1194*t1619 + t1266*t1628 + t1384*t1641 + t1462*t1655 + t1521*t1672 - 0.03875*(4.e-6*t1526*t1641 + t1365*t1655 + t1346*t1672) + 0.80321*(-4.e-6*t1365*t1641 + t1561*t1655 - 1.*t1365*t1672) + 0.14871*(t1535*t1641 + 4.e-6*t1365*t1655 + 4.e-6*t1526*t1672) - 1.*t1314*t258*t486 + t1294*t258*t511*t647 - 1.*t1294*t258*t340*t796;
  p_output1[3]=t1194*t1764 + t1266*t1774 + t1384*t1790 + t1462*t1810 + t1521*t1826 - 0.03875*(4.e-6*t1526*t1790 + t1365*t1810 + t1346*t1826) + 0.80321*(-4.e-6*t1365*t1790 + t1561*t1810 - 1.*t1365*t1826) + 0.14871*(t1535*t1790 + 4.e-6*t1365*t1810 + 4.e-6*t1526*t1826) + t1743*t647 + t1756*t796;
  p_output1[4]=t1194*t1915 + t1266*t1923 + t1384*t1934 + t1462*t1951 + t1521*t1967 - 0.03875*(4.e-6*t1526*t1934 + t1365*t1951 + t1346*t1967) + 0.80321*(-4.e-6*t1365*t1934 + t1561*t1951 - 1.*t1365*t1967) + 0.14871*(t1535*t1934 + 4.e-6*t1365*t1951 + 4.e-6*t1526*t1967) + t1756*(-0.15121*t600 + t791) + t1904*(0.15121*t600 + t791);
  p_output1[5]=(-1.2484e-7 + 1.124840000016e-6*t1038 - 1.5499600000248e-7*t1186)*t1923 + (0.03874900000062*t1038 + 0.281210000008499*t1186)*t2039 + t1384*t2065 + t1462*t2072 + t1521*t2081 - 0.03875*(4.e-6*t1526*t2065 + t1365*t2072 + t1346*t2081) + 0.80321*(-4.e-6*t1365*t2065 + t1561*t2072 - 1.*t1365*t2081) + 0.14871*(t1535*t2065 + 4.e-6*t1365*t2072 + 4.e-6*t1526*t2081) + (4.9936e-13 + 0.281210000004*t1038 - 0.03874900000062*t1186)*t1294*t258;
  p_output1[6]=(5.136e-14 + 0.503210000008*t1346 - 0.03874900000062*t1365)*t2165 + (-1.284e-8 + 2.012840000032e-6*t1346 - 1.5499600000248e-7*t1365)*t2185 + (0.03874900000062*t1346 + 0.503210000016051*t1365)*t2204 + 0.14871*(-4.e-6*t1365*t2165 - 1.6e-11*t1365*t2185 + 4.e-6*t1346*t2204) - 0.03875*(-1.*t1365*t2165 - 4.e-6*t1365*t2185 + t1346*t2204) + 0.80321*(-1.*t1346*t2165 - 4.e-6*t1346*t2185 - 1.000000000016*t1365*t2204);
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

#include "J_foot_clearance_FlFoot.hh"

namespace TrotStance1
{

void J_foot_clearance_FlFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
