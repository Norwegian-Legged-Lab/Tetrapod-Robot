/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:15:52 GMT+01:00
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
  double t230;
  double t944;
  double t1046;
  double t1051;
  double t1058;
  double t1071;
  double t1078;
  double t1130;
  double t1110;
  double t1118;
  double t1154;
  double t499;
  double t526;
  double t616;
  double t690;
  double t1120;
  double t1162;
  double t1215;
  double t1271;
  double t1302;
  double t1304;
  double t18;
  double t1374;
  double t1379;
  double t1384;
  double t1438;
  double t1440;
  double t1445;
  double t1467;
  double t1471;
  double t1473;
  double t1495;
  double t1563;
  double t1541;
  double t1542;
  double t1543;
  double t1545;
  double t1546;
  double t1549;
  double t1580;
  double t1583;
  double t1585;
  double t1593;
  double t1624;
  double t1625;
  double t1626;
  double t1627;
  double t1630;
  double t1631;
  double t1061;
  double t1085;
  double t128;
  double t602;
  double t660;
  double t837;
  double t886;
  double t1234;
  double t1269;
  double t1325;
  double t1338;
  double t1340;
  double t1341;
  double t1369;
  double t1397;
  double t1409;
  double t1424;
  double t1479;
  double t1529;
  double t1533;
  double t1742;
  double t1746;
  double t1754;
  double t1758;
  double t1763;
  double t1769;
  double t1557;
  double t1562;
  double t1568;
  double t1571;
  double t1576;
  double t1605;
  double t1610;
  double t1614;
  double t1619;
  double t1620;
  double t1774;
  double t1778;
  double t1789;
  double t1798;
  double t1802;
  double t1804;
  double t1806;
  double t1807;
  double t1643;
  double t1646;
  double t1810;
  double t1811;
  double t1816;
  double t1819;
  double t1690;
  double t1692;
  double t1880;
  double t1881;
  double t1882;
  double t1888;
  double t1890;
  double t1891;
  double t1895;
  double t1898;
  double t1901;
  double t1909;
  double t1918;
  double t1920;
  double t1931;
  double t1935;
  double t1943;
  double t1946;
  double t1950;
  double t1952;
  double t1956;
  double t1958;
  double t1960;
  double t2032;
  double t2038;
  double t2039;
  double t2041;
  double t2053;
  double t2055;
  double t2060;
  double t2068;
  double t2076;
  double t2077;
  double t2078;
  double t2087;
  double t2094;
  double t2095;
  double t2101;
  double t2102;
  double t2103;
  double t2185;
  double t2191;
  double t2195;
  double t2200;
  double t2202;
  double t2205;
  double t2215;
  double t2224;
  double t2232;
  double t2235;
  double t2243;
  double t2244;
  double t2245;
  double t2246;
  double t2305;
  double t2306;
  double t2310;
  double t2312;
  double t2323;
  double t2324;
  double t2325;
  double t2334;
  double t2338;
  double t2343;
  double t2345;
  t230 = Cos(var1[10]);
  t944 = Sin(var1[3]);
  t1046 = Cos(var1[9]);
  t1051 = -1.*t1046;
  t1058 = 1. + t1051;
  t1071 = Sin(var1[9]);
  t1078 = -0.15121*t1071;
  t1130 = Cos(var1[3]);
  t1110 = Cos(var1[5]);
  t1118 = Sin(var1[4]);
  t1154 = Sin(var1[5]);
  t499 = -1.*t230;
  t526 = 1. + t499;
  t616 = -1. + t230;
  t690 = Sin(var1[10]);
  t1120 = t1110*t944*t1118;
  t1162 = t1130*t1154;
  t1215 = t1120 + t1162;
  t1271 = t1130*t1110;
  t1302 = -1.*t944*t1118*t1154;
  t1304 = t1271 + t1302;
  t18 = Cos(var1[4]);
  t1374 = -1.*t1071*t1215;
  t1379 = t1046*t1304;
  t1384 = t1374 + t1379;
  t1438 = t1046*t1215;
  t1440 = t1071*t1304;
  t1445 = t1438 + t1440;
  t1467 = Cos(var1[11]);
  t1471 = -1.*t1467;
  t1473 = 1. + t1471;
  t1495 = Sin(var1[11]);
  t1563 = -1. + t1467;
  t1541 = -1.*t18*t690*t944;
  t1542 = -4.e-6*t690*t1384;
  t1543 = -1.000000000016*t526;
  t1545 = 1. + t1543;
  t1546 = t1545*t1445;
  t1549 = t1541 + t1542 + t1546;
  t1580 = -1.*t230*t18*t944;
  t1583 = 4.e-6*t526*t1384;
  t1585 = -1.*t690*t1445;
  t1593 = t1580 + t1583 + t1585;
  t1624 = -4.e-6*t526*t18*t944;
  t1625 = 1.6e-11*t616;
  t1626 = 1. + t1625;
  t1627 = t1626*t1384;
  t1630 = 4.e-6*t690*t1445;
  t1631 = t1624 + t1627 + t1630;
  t1061 = 0.15121*t1058;
  t1085 = t1061 + t1078;
  t128 = -4.9936e-13*var1[10];
  t602 = -0.038749*t526;
  t660 = 6.19984e-13*t616;
  t837 = -0.281210000004*t690;
  t886 = t128 + t602 + t660 + t837;
  t1234 = -0.15121*t1058;
  t1269 = t1234 + t1078;
  t1325 = -1.2484e-7*var1[10];
  t1338 = 2.479936e-18*t526;
  t1340 = -1.54996e-7*t616;
  t1341 = 1.124840000016e-6*t690;
  t1369 = t1325 + t1338 + t1340 + t1341;
  t1397 = 0.281210000008499*t526;
  t1409 = -0.03874900000062*t690;
  t1424 = t1397 + t1409;
  t1479 = 0.50315000001605*t1473;
  t1529 = -0.0398890000006382*t1495;
  t1533 = t1479 + t1529;
  t1742 = t1130*t18*t1110*t1071;
  t1746 = t1046*t1130*t18*t1154;
  t1754 = t1742 + t1746;
  t1758 = -1.*t1046*t1130*t18*t1110;
  t1763 = t1130*t18*t1071*t1154;
  t1769 = t1758 + t1763;
  t1557 = -5.04e-14*var1[11];
  t1562 = -0.039889*t1473;
  t1568 = 6.38224e-13*t1563;
  t1571 = -0.503150000008*t1495;
  t1576 = t1557 + t1562 + t1568 + t1571;
  t1605 = -1.26e-8*var1[11];
  t1610 = 2.552896e-18*t1473;
  t1614 = -1.59556e-7*t1563;
  t1619 = 2.012600000032e-6*t1495;
  t1620 = t1605 + t1610 + t1614 + t1619;
  t1774 = -1.*t1130*t690*t1118;
  t1778 = -4.e-6*t690*t1754;
  t1789 = t1545*t1769;
  t1798 = t1774 + t1778 + t1789;
  t1802 = -1.*t230*t1130*t1118;
  t1804 = 4.e-6*t526*t1754;
  t1806 = -1.*t690*t1769;
  t1807 = t1802 + t1804 + t1806;
  t1643 = 1.6e-11*t1563;
  t1646 = 1. + t1643;
  t1810 = -4.e-6*t526*t1130*t1118;
  t1811 = t1626*t1754;
  t1816 = 4.e-6*t690*t1769;
  t1819 = t1810 + t1811 + t1816;
  t1690 = -1.000000000016*t1473;
  t1692 = 1. + t1690;
  t1880 = t1130*t1110*t1118;
  t1881 = -1.*t944*t1154;
  t1882 = t1880 + t1881;
  t1888 = t1110*t944;
  t1890 = t1130*t1118*t1154;
  t1891 = t1888 + t1890;
  t1895 = t1071*t1882;
  t1898 = t1046*t1891;
  t1901 = t1895 + t1898;
  t1909 = t1046*t1882;
  t1918 = -1.*t1071*t1891;
  t1920 = t1909 + t1918;
  t1931 = 4.e-6*t690*t1901;
  t1935 = t1626*t1920;
  t1943 = t1931 + t1935;
  t1946 = -1.*t690*t1901;
  t1950 = 4.e-6*t526*t1920;
  t1952 = t1946 + t1950;
  t1956 = t1545*t1901;
  t1958 = -4.e-6*t690*t1920;
  t1960 = t1956 + t1958;
  t2032 = -0.15121*t1046;
  t2038 = -1.*t1130*t1110*t1118;
  t2039 = t944*t1154;
  t2041 = t2038 + t2039;
  t2053 = -1.*t1071*t2041;
  t2055 = t2053 + t1898;
  t2060 = -1.*t1046*t2041;
  t2068 = t2060 + t1918;
  t2076 = 4.e-6*t690*t2055;
  t2077 = t1626*t2068;
  t2078 = t2076 + t2077;
  t2087 = -1.*t690*t2055;
  t2094 = 4.e-6*t526*t2068;
  t2095 = t2087 + t2094;
  t2101 = t1545*t2055;
  t2102 = -4.e-6*t690*t2068;
  t2103 = t2101 + t2102;
  t2185 = t1046*t2041;
  t2191 = t1071*t1891;
  t2195 = t2185 + t2191;
  t2200 = -1.*t1130*t18*t690;
  t2202 = -1.*t230*t2195;
  t2205 = t2200 + t2076 + t2202;
  t2215 = 4.e-6*t1130*t18*t690;
  t2224 = -1.6e-11*t690*t2055;
  t2232 = 4.e-6*t230*t2195;
  t2235 = t2215 + t2224 + t2232;
  t2243 = t230*t1130*t18;
  t2244 = -4.e-6*t230*t2055;
  t2245 = -1.000000000016*t690*t2195;
  t2246 = t2243 + t2244 + t2245;
  t2305 = t1130*t18*t690;
  t2306 = -4.e-6*t690*t2055;
  t2310 = t1545*t2195;
  t2312 = t2305 + t2306 + t2310;
  t2323 = 4.e-6*t526*t2055;
  t2324 = -1.*t690*t2195;
  t2325 = t2243 + t2323 + t2324;
  t2334 = 4.e-6*t526*t1130*t18;
  t2338 = t1626*t2055;
  t2343 = 4.e-6*t690*t2195;
  t2345 = t2334 + t2338 + t2343;
  p_output1[0]=1.;
  p_output1[1]=t1085*t1215 + t1269*t1304 + t1369*t1384 + t1424*t1445 + t1533*t1549 + t1576*t1593 + t1620*t1631 - 0.041195*(-1.*t1495*t1549 + t1467*t1593 + 4.e-6*t1473*t1631) - 0.14871*(4.e-6*t1495*t1549 + 4.e-6*t1473*t1593 + t1631*t1646) + 0.803147*(t1495*t1593 - 4.e-6*t1495*t1631 + t1549*t1692) - 1.*t18*t886*t944;
  p_output1[2]=t1369*t1754 + t1424*t1769 + t1533*t1798 - 1.*t1085*t1110*t1130*t18 + t1130*t1154*t1269*t18 + t1576*t1807 + t1620*t1819 - 0.041195*(-1.*t1495*t1798 + t1467*t1807 + 4.e-6*t1473*t1819) + 0.803147*(t1692*t1798 + t1495*t1807 - 4.e-6*t1495*t1819) - 0.14871*(4.e-6*t1495*t1798 + 4.e-6*t1473*t1807 + t1646*t1819) - 1.*t1118*t1130*t886;
  p_output1[3]=t1269*t1882 + t1085*t1891 + t1424*t1901 + t1369*t1920 + t1620*t1943 + t1576*t1952 + t1533*t1960 - 0.041195*(4.e-6*t1473*t1943 + t1467*t1952 - 1.*t1495*t1960) - 0.14871*(t1646*t1943 + 4.e-6*t1473*t1952 + 4.e-6*t1495*t1960) + 0.803147*(-4.e-6*t1495*t1943 + t1495*t1952 + t1692*t1960);
  p_output1[4]=t1891*(t1078 + t2032) + (0.15121*t1071 + t2032)*t2041 + t1424*t2055 + t1369*t2068 + t1620*t2078 + t1576*t2095 + t1533*t2103 - 0.041195*(4.e-6*t1473*t2078 + t1467*t2095 - 1.*t1495*t2103) - 0.14871*(t1646*t2078 + 4.e-6*t1473*t2095 + 4.e-6*t1495*t2103) + 0.803147*(-4.e-6*t1495*t2078 + t1495*t2095 + t1692*t2103);
  p_output1[5]=t1576*t2205 + t1620*t2235 + t1533*t2246 - 0.041195*(t1467*t2205 + 4.e-6*t1473*t2235 - 1.*t1495*t2246) - 0.14871*(4.e-6*t1473*t2205 + t1646*t2235 + 4.e-6*t1495*t2246) + 0.803147*(t1495*t2205 - 4.e-6*t1495*t2235 + t1692*t2246) + t1130*t18*(-4.9936e-13 + t1409 - 0.281210000004*t230) + t2055*(-1.2484e-7 + 1.124840000016e-6*t230 + 1.5499600000248e-7*t690) + t2195*(-0.03874900000062*t230 + 0.281210000008499*t690);
  p_output1[6]=(-0.0398890000006382*t1467 + 0.50315000001605*t1495)*t2312 + (-5.04e-14 - 0.503150000008*t1467 + t1529)*t2325 + (-1.26e-8 + 2.012600000032e-6*t1467 + 1.59556000002553e-7*t1495)*t2345 + 0.803147*(-1.000000000016*t1495*t2312 + t1467*t2325 - 4.e-6*t1467*t2345) - 0.14871*(4.e-6*t1467*t2312 + 4.e-6*t1495*t2325 - 1.6e-11*t1495*t2345) - 0.041195*(-1.*t1467*t2312 - 1.*t1495*t2325 + 4.e-6*t1495*t2345);
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

#include "J_foot_clearance_FrFootParallelStance2.hh"

namespace ParallelStance2
{

void J_foot_clearance_FrFootParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
