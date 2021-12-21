/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:10:10 GMT+01:00
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
  double t597;
  double t638;
  double t649;
  double t556;
  double t683;
  double t734;
  double t743;
  double t750;
  double t751;
  double t762;
  double t605;
  double t684;
  double t715;
  double t878;
  double t901;
  double t929;
  double t1219;
  double t1244;
  double t1253;
  double t1255;
  double t1356;
  double t1428;
  double t1117;
  double t1140;
  double t1162;
  double t1319;
  double t1323;
  double t1324;
  double t1473;
  double t1478;
  double t1483;
  double t1492;
  double t1430;
  double t1432;
  double t1438;
  double t1456;
  double t1459;
  double t1460;
  double t1615;
  double t1555;
  double t1557;
  double t1560;
  double t1574;
  double t1502;
  double t1503;
  double t1518;
  double t1519;
  double t1520;
  double t1525;
  double t763;
  double t771;
  double t940;
  double t965;
  double t1166;
  double t1254;
  double t1256;
  double t1257;
  double t1340;
  double t1345;
  double t1350;
  double t1376;
  double t1378;
  double t1388;
  double t1414;
  double t1688;
  double t1703;
  double t1704;
  double t1724;
  double t1726;
  double t1729;
  double t1470;
  double t1489;
  double t1494;
  double t1497;
  double t1528;
  double t1545;
  double t1547;
  double t1575;
  double t1583;
  double t1591;
  double t1608;
  double t1620;
  double t1621;
  double t1746;
  double t1748;
  double t1750;
  double t1753;
  double t1770;
  double t1771;
  double t1772;
  double t1779;
  double t1755;
  double t1756;
  double t1760;
  double t1766;
  double t1646;
  double t1649;
  double t1872;
  double t1873;
  double t1875;
  double t1879;
  double t1881;
  double t1882;
  double t1890;
  double t1893;
  double t1895;
  double t1898;
  double t1899;
  double t1900;
  double t1911;
  double t1915;
  double t1918;
  double t1906;
  double t1907;
  double t1908;
  double t1925;
  double t1935;
  double t1936;
  double t2013;
  double t2019;
  double t2024;
  double t2050;
  double t2052;
  double t2061;
  double t2067;
  double t2086;
  double t2087;
  double t2090;
  double t2072;
  double t2075;
  double t2082;
  double t2092;
  double t2095;
  double t2097;
  double t2185;
  double t2186;
  double t2187;
  double t2217;
  double t2219;
  double t2225;
  double t2226;
  double t2230;
  double t2232;
  double t2236;
  double t2239;
  double t2197;
  double t2199;
  double t2202;
  double t2214;
  double t2353;
  double t2354;
  double t2355;
  double t2360;
  double t2319;
  double t2320;
  double t2322;
  double t2325;
  double t2373;
  double t2375;
  t597 = Cos(var1[5]);
  t638 = Sin(var1[3]);
  t649 = Sin(var1[4]);
  t556 = Cos(var1[3]);
  t683 = Sin(var1[5]);
  t734 = Cos(var1[6]);
  t743 = -1.*t734;
  t750 = 1. + t743;
  t751 = 0.15121*t750;
  t762 = Sin(var1[6]);
  t605 = t556*t597;
  t684 = -1.*t638*t649*t683;
  t715 = t605 + t684;
  t878 = t597*t638*t649;
  t901 = t556*t683;
  t929 = t878 + t901;
  t1219 = Cos(var1[7]);
  t1244 = -1.*t1219;
  t1253 = 1. + t1244;
  t1255 = Sin(var1[7]);
  t1356 = Cos(var1[4]);
  t1428 = -1. + t1219;
  t1117 = t734*t715;
  t1140 = -1.*t929*t762;
  t1162 = t1117 + t1140;
  t1319 = t734*t929;
  t1323 = t715*t762;
  t1324 = t1319 + t1323;
  t1473 = Cos(var1[8]);
  t1478 = -1.*t1473;
  t1483 = 1. + t1478;
  t1492 = Sin(var1[8]);
  t1430 = -4.e-6*t1356*t1428*t638;
  t1432 = 1.6e-11*t1428;
  t1438 = 1. + t1432;
  t1456 = t1438*t1162;
  t1459 = 4.e-6*t1324*t1255;
  t1460 = t1430 + t1456 + t1459;
  t1615 = -1. + t1473;
  t1555 = -1.*t1356*t1219*t638;
  t1557 = 4.e-6*t1428*t1162;
  t1560 = t1324*t1255;
  t1574 = t1555 + t1557 + t1560;
  t1502 = -1.000000000016*t1253;
  t1503 = 1. + t1502;
  t1518 = t1503*t1324;
  t1519 = t1356*t638*t1255;
  t1520 = -4.e-6*t1162*t1255;
  t1525 = t1518 + t1519 + t1520;
  t763 = -0.15121*t762;
  t771 = t751 + t763;
  t940 = 0.15121*t762;
  t965 = t751 + t940;
  t1166 = -1.2484e-7*var1[7];
  t1254 = -1.5499600000248e-7*t1253;
  t1256 = 1.124840000016e-6*t1255;
  t1257 = t1166 + t1254 + t1256;
  t1340 = 0.281210000008499*t1253;
  t1345 = 0.03874900000062*t1255;
  t1350 = t1340 + t1345;
  t1376 = 4.9936e-13*var1[7];
  t1378 = -0.03874900000062*t1253;
  t1388 = 0.281210000004*t1255;
  t1414 = t1376 + t1378 + t1388;
  t1688 = t556*t1356*t734*t683;
  t1703 = t556*t1356*t597*t762;
  t1704 = t1688 + t1703;
  t1724 = -1.*t556*t1356*t597*t734;
  t1726 = t556*t1356*t683*t762;
  t1729 = t1724 + t1726;
  t1470 = -1.284e-8*var1[8];
  t1489 = -1.5499600000248e-7*t1483;
  t1494 = 2.012840000032e-6*t1492;
  t1497 = t1470 + t1489 + t1494;
  t1528 = 0.503210000016051*t1483;
  t1545 = 0.03874900000062*t1492;
  t1547 = t1528 + t1545;
  t1575 = 5.136e-14*var1[8];
  t1583 = -0.03874900000062*t1483;
  t1591 = 0.503210000008*t1492;
  t1608 = t1575 + t1583 + t1591;
  t1620 = 1.6e-11*t1615;
  t1621 = 1. + t1620;
  t1746 = -4.e-6*t556*t1428*t649;
  t1748 = t1438*t1704;
  t1750 = 4.e-6*t1729*t1255;
  t1753 = t1746 + t1748 + t1750;
  t1770 = -1.*t556*t1219*t649;
  t1771 = 4.e-6*t1428*t1704;
  t1772 = t1729*t1255;
  t1779 = t1770 + t1771 + t1772;
  t1755 = t1503*t1729;
  t1756 = t556*t649*t1255;
  t1760 = -4.e-6*t1704*t1255;
  t1766 = t1755 + t1756 + t1760;
  t1646 = -1.000000000016*t1483;
  t1649 = 1. + t1646;
  t1872 = t556*t597*t649;
  t1873 = -1.*t638*t683;
  t1875 = t1872 + t1873;
  t1879 = t597*t638;
  t1881 = t556*t649*t683;
  t1882 = t1879 + t1881;
  t1890 = t734*t1875;
  t1893 = -1.*t1882*t762;
  t1895 = t1890 + t1893;
  t1898 = t734*t1882;
  t1899 = t1875*t762;
  t1900 = t1898 + t1899;
  t1911 = t1503*t1900;
  t1915 = -4.e-6*t1895*t1255;
  t1918 = t1911 + t1915;
  t1906 = t1438*t1895;
  t1907 = 4.e-6*t1900*t1255;
  t1908 = t1906 + t1907;
  t1925 = 4.e-6*t1428*t1895;
  t1935 = t1900*t1255;
  t1936 = t1925 + t1935;
  t2013 = -1.*t556*t597*t649;
  t2019 = t638*t683;
  t2024 = t2013 + t2019;
  t2050 = -1.*t734*t2024;
  t2052 = t2050 + t1893;
  t2061 = -1.*t2024*t762;
  t2067 = t1898 + t2061;
  t2086 = t1503*t2067;
  t2087 = -4.e-6*t2052*t1255;
  t2090 = t2086 + t2087;
  t2072 = t1438*t2052;
  t2075 = 4.e-6*t2067*t1255;
  t2082 = t2072 + t2075;
  t2092 = 4.e-6*t1428*t2052;
  t2095 = t2067*t1255;
  t2097 = t2092 + t2095;
  t2185 = t734*t2024;
  t2186 = t1882*t762;
  t2187 = t2185 + t2186;
  t2217 = -1.*t556*t1356*t1219;
  t2219 = -4.e-6*t1219*t2067;
  t2225 = -1.000000000016*t2187*t1255;
  t2226 = t2217 + t2219 + t2225;
  t2230 = t1219*t2187;
  t2232 = -1.*t556*t1356*t1255;
  t2236 = -4.e-6*t2067*t1255;
  t2239 = t2230 + t2232 + t2236;
  t2197 = 4.e-6*t1219*t2187;
  t2199 = -4.e-6*t556*t1356*t1255;
  t2202 = -1.6e-11*t2067*t1255;
  t2214 = t2197 + t2199 + t2202;
  t2353 = 4.e-6*t556*t1356*t1428;
  t2354 = t1438*t2067;
  t2355 = 4.e-6*t2187*t1255;
  t2360 = t2353 + t2354 + t2355;
  t2319 = t556*t1356*t1219;
  t2320 = 4.e-6*t1428*t2067;
  t2322 = t2187*t1255;
  t2325 = t2319 + t2320 + t2322;
  t2373 = t1503*t2187;
  t2375 = t2373 + t2232 + t2236;
  p_output1[0]=1.;
  p_output1[1]=t1162*t1257 + t1324*t1350 + t1460*t1497 + t1525*t1547 + t1574*t1608 - 0.03875*(t1492*t1525 + t1473*t1574 + 4.e-6*t1460*t1615) + 0.14871*(4.e-6*t1492*t1525 + 4.e-6*t1574*t1615 + t1460*t1621) + 0.80321*(-4.e-6*t1460*t1492 - 1.*t1492*t1574 + t1525*t1649) - 1.*t1356*t1414*t638 + t715*t771 + t929*t965;
  p_output1[2]=t1257*t1704 + t1350*t1729 + t1497*t1753 + t1547*t1766 + t1608*t1779 - 0.03875*(4.e-6*t1615*t1753 + t1492*t1766 + t1473*t1779) + 0.80321*(-4.e-6*t1492*t1753 + t1649*t1766 - 1.*t1492*t1779) + 0.14871*(t1621*t1753 + 4.e-6*t1492*t1766 + 4.e-6*t1615*t1779) - 1.*t1414*t556*t649 + t1356*t556*t683*t771 - 1.*t1356*t556*t597*t965;
  p_output1[3]=t1257*t1895 + t1350*t1900 + t1497*t1908 + t1547*t1918 + t1608*t1936 - 0.03875*(4.e-6*t1615*t1908 + t1492*t1918 + t1473*t1936) + 0.80321*(-4.e-6*t1492*t1908 + t1649*t1918 - 1.*t1492*t1936) + 0.14871*(t1621*t1908 + 4.e-6*t1492*t1918 + 4.e-6*t1615*t1936) + t1875*t771 + t1882*t965;
  p_output1[4]=t1257*t2052 + t1350*t2067 + t1497*t2082 + t1547*t2090 + t1608*t2097 - 0.03875*(4.e-6*t1615*t2082 + t1492*t2090 + t1473*t2097) + 0.80321*(-4.e-6*t1492*t2082 + t1649*t2090 - 1.*t1492*t2097) + 0.14871*(t1621*t2082 + 4.e-6*t1492*t2090 + 4.e-6*t1615*t2097) + t1882*(-0.15121*t734 + t940) + t2024*(0.15121*t734 + t940);
  p_output1[5]=(-1.2484e-7 + 1.124840000016e-6*t1219 - 1.5499600000248e-7*t1255)*t2067 + (0.03874900000062*t1219 + 0.281210000008499*t1255)*t2187 + t1497*t2214 + t1547*t2226 + t1608*t2239 - 0.03875*(4.e-6*t1615*t2214 + t1492*t2226 + t1473*t2239) + 0.80321*(-4.e-6*t1492*t2214 + t1649*t2226 - 1.*t1492*t2239) + 0.14871*(t1621*t2214 + 4.e-6*t1492*t2226 + 4.e-6*t1615*t2239) + (4.9936e-13 + 0.281210000004*t1219 - 0.03874900000062*t1255)*t1356*t556;
  p_output1[6]=(5.136e-14 + 0.503210000008*t1473 - 0.03874900000062*t1492)*t2325 + (-1.284e-8 + 2.012840000032e-6*t1473 - 1.5499600000248e-7*t1492)*t2360 + (0.03874900000062*t1473 + 0.503210000016051*t1492)*t2375 + 0.14871*(-4.e-6*t1492*t2325 - 1.6e-11*t1492*t2360 + 4.e-6*t1473*t2375) - 0.03875*(-1.*t1492*t2325 - 4.e-6*t1492*t2360 + t1473*t2375) + 0.80321*(-1.*t1473*t2325 - 4.e-6*t1473*t2360 - 1.000000000016*t1492*t2375);
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

#include "J_foot_clearance_FlFootDiagonalStance1.hh"

namespace DiagonalStance1
{

void J_foot_clearance_FlFootDiagonalStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
