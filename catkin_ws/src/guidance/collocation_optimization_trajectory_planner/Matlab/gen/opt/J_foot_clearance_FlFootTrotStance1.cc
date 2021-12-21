/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 12:53:37 GMT+01:00
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
  double t478;
  double t483;
  double t540;
  double t121;
  double t562;
  double t617;
  double t621;
  double t634;
  double t637;
  double t649;
  double t480;
  double t578;
  double t602;
  double t753;
  double t781;
  double t805;
  double t1121;
  double t1127;
  double t1129;
  double t1148;
  double t1257;
  double t1267;
  double t1058;
  double t1089;
  double t1100;
  double t1165;
  double t1196;
  double t1225;
  double t1342;
  double t1343;
  double t1346;
  double t1359;
  double t1274;
  double t1286;
  double t1291;
  double t1305;
  double t1307;
  double t1311;
  double t1463;
  double t1446;
  double t1448;
  double t1449;
  double t1452;
  double t1375;
  double t1382;
  double t1386;
  double t1404;
  double t1406;
  double t1416;
  double t650;
  double t655;
  double t821;
  double t862;
  double t1102;
  double t1130;
  double t1149;
  double t1155;
  double t1233;
  double t1250;
  double t1251;
  double t1260;
  double t1261;
  double t1263;
  double t1265;
  double t1551;
  double t1558;
  double t1560;
  double t1563;
  double t1564;
  double t1568;
  double t1315;
  double t1358;
  double t1366;
  double t1367;
  double t1417;
  double t1427;
  double t1441;
  double t1453;
  double t1454;
  double t1455;
  double t1458;
  double t1464;
  double t1465;
  double t1576;
  double t1587;
  double t1594;
  double t1595;
  double t1628;
  double t1631;
  double t1632;
  double t1634;
  double t1607;
  double t1617;
  double t1620;
  double t1623;
  double t1506;
  double t1513;
  double t1695;
  double t1696;
  double t1697;
  double t1701;
  double t1704;
  double t1706;
  double t1708;
  double t1710;
  double t1712;
  double t1728;
  double t1729;
  double t1739;
  double t1767;
  double t1774;
  double t1775;
  double t1748;
  double t1751;
  double t1754;
  double t1780;
  double t1781;
  double t1783;
  double t1855;
  double t1856;
  double t1858;
  double t1874;
  double t1876;
  double t1888;
  double t1890;
  double t1905;
  double t1907;
  double t1909;
  double t1899;
  double t1900;
  double t1901;
  double t1915;
  double t1921;
  double t1924;
  double t2033;
  double t2035;
  double t2037;
  double t2064;
  double t2072;
  double t2073;
  double t2074;
  double t2081;
  double t2083;
  double t2086;
  double t2097;
  double t2057;
  double t2058;
  double t2059;
  double t2060;
  double t2210;
  double t2213;
  double t2217;
  double t2220;
  double t2188;
  double t2191;
  double t2194;
  double t2195;
  double t2235;
  double t2241;
  t478 = Cos(var1[5]);
  t483 = Sin(var1[3]);
  t540 = Sin(var1[4]);
  t121 = Cos(var1[3]);
  t562 = Sin(var1[5]);
  t617 = Cos(var1[6]);
  t621 = -1.*t617;
  t634 = 1. + t621;
  t637 = 0.15121*t634;
  t649 = Sin(var1[6]);
  t480 = t121*t478;
  t578 = -1.*t483*t540*t562;
  t602 = t480 + t578;
  t753 = t478*t483*t540;
  t781 = t121*t562;
  t805 = t753 + t781;
  t1121 = Cos(var1[7]);
  t1127 = -1.*t1121;
  t1129 = 1. + t1127;
  t1148 = Sin(var1[7]);
  t1257 = Cos(var1[4]);
  t1267 = -1. + t1121;
  t1058 = t617*t602;
  t1089 = -1.*t805*t649;
  t1100 = t1058 + t1089;
  t1165 = t617*t805;
  t1196 = t602*t649;
  t1225 = t1165 + t1196;
  t1342 = Cos(var1[8]);
  t1343 = -1.*t1342;
  t1346 = 1. + t1343;
  t1359 = Sin(var1[8]);
  t1274 = -4.e-6*t1257*t1267*t483;
  t1286 = 1.6e-11*t1267;
  t1291 = 1. + t1286;
  t1305 = t1291*t1100;
  t1307 = 4.e-6*t1225*t1148;
  t1311 = t1274 + t1305 + t1307;
  t1463 = -1. + t1342;
  t1446 = -1.*t1257*t1121*t483;
  t1448 = 4.e-6*t1267*t1100;
  t1449 = t1225*t1148;
  t1452 = t1446 + t1448 + t1449;
  t1375 = -1.000000000016*t1129;
  t1382 = 1. + t1375;
  t1386 = t1382*t1225;
  t1404 = t1257*t483*t1148;
  t1406 = -4.e-6*t1100*t1148;
  t1416 = t1386 + t1404 + t1406;
  t650 = -0.15121*t649;
  t655 = t637 + t650;
  t821 = 0.15121*t649;
  t862 = t637 + t821;
  t1102 = -1.2484e-7*var1[7];
  t1130 = -1.5499600000248e-7*t1129;
  t1149 = 1.124840000016e-6*t1148;
  t1155 = t1102 + t1130 + t1149;
  t1233 = 0.281210000008499*t1129;
  t1250 = 0.03874900000062*t1148;
  t1251 = t1233 + t1250;
  t1260 = 4.9936e-13*var1[7];
  t1261 = -0.03874900000062*t1129;
  t1263 = 0.281210000004*t1148;
  t1265 = t1260 + t1261 + t1263;
  t1551 = t121*t1257*t617*t562;
  t1558 = t121*t1257*t478*t649;
  t1560 = t1551 + t1558;
  t1563 = -1.*t121*t1257*t478*t617;
  t1564 = t121*t1257*t562*t649;
  t1568 = t1563 + t1564;
  t1315 = -1.284e-8*var1[8];
  t1358 = -1.5499600000248e-7*t1346;
  t1366 = 2.012840000032e-6*t1359;
  t1367 = t1315 + t1358 + t1366;
  t1417 = 0.503210000016051*t1346;
  t1427 = 0.03874900000062*t1359;
  t1441 = t1417 + t1427;
  t1453 = 5.136e-14*var1[8];
  t1454 = -0.03874900000062*t1346;
  t1455 = 0.503210000008*t1359;
  t1458 = t1453 + t1454 + t1455;
  t1464 = 1.6e-11*t1463;
  t1465 = 1. + t1464;
  t1576 = -4.e-6*t121*t1267*t540;
  t1587 = t1291*t1560;
  t1594 = 4.e-6*t1568*t1148;
  t1595 = t1576 + t1587 + t1594;
  t1628 = -1.*t121*t1121*t540;
  t1631 = 4.e-6*t1267*t1560;
  t1632 = t1568*t1148;
  t1634 = t1628 + t1631 + t1632;
  t1607 = t1382*t1568;
  t1617 = t121*t540*t1148;
  t1620 = -4.e-6*t1560*t1148;
  t1623 = t1607 + t1617 + t1620;
  t1506 = -1.000000000016*t1346;
  t1513 = 1. + t1506;
  t1695 = t121*t478*t540;
  t1696 = -1.*t483*t562;
  t1697 = t1695 + t1696;
  t1701 = t478*t483;
  t1704 = t121*t540*t562;
  t1706 = t1701 + t1704;
  t1708 = t617*t1697;
  t1710 = -1.*t1706*t649;
  t1712 = t1708 + t1710;
  t1728 = t617*t1706;
  t1729 = t1697*t649;
  t1739 = t1728 + t1729;
  t1767 = t1382*t1739;
  t1774 = -4.e-6*t1712*t1148;
  t1775 = t1767 + t1774;
  t1748 = t1291*t1712;
  t1751 = 4.e-6*t1739*t1148;
  t1754 = t1748 + t1751;
  t1780 = 4.e-6*t1267*t1712;
  t1781 = t1739*t1148;
  t1783 = t1780 + t1781;
  t1855 = -1.*t121*t478*t540;
  t1856 = t483*t562;
  t1858 = t1855 + t1856;
  t1874 = -1.*t617*t1858;
  t1876 = t1874 + t1710;
  t1888 = -1.*t1858*t649;
  t1890 = t1728 + t1888;
  t1905 = t1382*t1890;
  t1907 = -4.e-6*t1876*t1148;
  t1909 = t1905 + t1907;
  t1899 = t1291*t1876;
  t1900 = 4.e-6*t1890*t1148;
  t1901 = t1899 + t1900;
  t1915 = 4.e-6*t1267*t1876;
  t1921 = t1890*t1148;
  t1924 = t1915 + t1921;
  t2033 = t617*t1858;
  t2035 = t1706*t649;
  t2037 = t2033 + t2035;
  t2064 = -1.*t121*t1257*t1121;
  t2072 = -4.e-6*t1121*t1890;
  t2073 = -1.000000000016*t2037*t1148;
  t2074 = t2064 + t2072 + t2073;
  t2081 = t1121*t2037;
  t2083 = -1.*t121*t1257*t1148;
  t2086 = -4.e-6*t1890*t1148;
  t2097 = t2081 + t2083 + t2086;
  t2057 = 4.e-6*t1121*t2037;
  t2058 = -4.e-6*t121*t1257*t1148;
  t2059 = -1.6e-11*t1890*t1148;
  t2060 = t2057 + t2058 + t2059;
  t2210 = 4.e-6*t121*t1257*t1267;
  t2213 = t1291*t1890;
  t2217 = 4.e-6*t2037*t1148;
  t2220 = t2210 + t2213 + t2217;
  t2188 = t121*t1257*t1121;
  t2191 = 4.e-6*t1267*t1890;
  t2194 = t2037*t1148;
  t2195 = t2188 + t2191 + t2194;
  t2235 = t1382*t2037;
  t2241 = t2235 + t2083 + t2086;
  p_output1[0]=1.;
  p_output1[1]=t1100*t1155 + t1225*t1251 + t1311*t1367 + t1416*t1441 + t1452*t1458 - 0.03875*(t1359*t1416 + t1342*t1452 + 4.e-6*t1311*t1463) + 0.14871*(4.e-6*t1359*t1416 + 4.e-6*t1452*t1463 + t1311*t1465) + 0.80321*(-4.e-6*t1311*t1359 - 1.*t1359*t1452 + t1416*t1513) - 1.*t1257*t1265*t483 + t602*t655 + t805*t862;
  p_output1[2]=t1155*t1560 + t1251*t1568 + t1367*t1595 + t1441*t1623 + t1458*t1634 - 0.03875*(4.e-6*t1463*t1595 + t1359*t1623 + t1342*t1634) + 0.80321*(-4.e-6*t1359*t1595 + t1513*t1623 - 1.*t1359*t1634) + 0.14871*(t1465*t1595 + 4.e-6*t1359*t1623 + 4.e-6*t1463*t1634) - 1.*t121*t1265*t540 + t121*t1257*t562*t655 - 1.*t121*t1257*t478*t862;
  p_output1[3]=t1155*t1712 + t1251*t1739 + t1367*t1754 + t1441*t1775 + t1458*t1783 - 0.03875*(4.e-6*t1463*t1754 + t1359*t1775 + t1342*t1783) + 0.80321*(-4.e-6*t1359*t1754 + t1513*t1775 - 1.*t1359*t1783) + 0.14871*(t1465*t1754 + 4.e-6*t1359*t1775 + 4.e-6*t1463*t1783) + t1697*t655 + t1706*t862;
  p_output1[4]=t1155*t1876 + t1251*t1890 + t1367*t1901 + t1441*t1909 + t1458*t1924 - 0.03875*(4.e-6*t1463*t1901 + t1359*t1909 + t1342*t1924) + 0.80321*(-4.e-6*t1359*t1901 + t1513*t1909 - 1.*t1359*t1924) + 0.14871*(t1465*t1901 + 4.e-6*t1359*t1909 + 4.e-6*t1463*t1924) + t1706*(-0.15121*t617 + t821) + t1858*(0.15121*t617 + t821);
  p_output1[5]=(4.9936e-13 + 0.281210000004*t1121 - 0.03874900000062*t1148)*t121*t1257 + (-1.2484e-7 + 1.124840000016e-6*t1121 - 1.5499600000248e-7*t1148)*t1890 + (0.03874900000062*t1121 + 0.281210000008499*t1148)*t2037 + t1367*t2060 + t1441*t2074 + t1458*t2097 - 0.03875*(4.e-6*t1463*t2060 + t1359*t2074 + t1342*t2097) + 0.80321*(-4.e-6*t1359*t2060 + t1513*t2074 - 1.*t1359*t2097) + 0.14871*(t1465*t2060 + 4.e-6*t1359*t2074 + 4.e-6*t1463*t2097);
  p_output1[6]=(5.136e-14 + 0.503210000008*t1342 - 0.03874900000062*t1359)*t2195 + (-1.284e-8 + 2.012840000032e-6*t1342 - 1.5499600000248e-7*t1359)*t2220 + (0.03874900000062*t1342 + 0.503210000016051*t1359)*t2241 + 0.14871*(-4.e-6*t1359*t2195 - 1.6e-11*t1359*t2220 + 4.e-6*t1342*t2241) - 0.03875*(-1.*t1359*t2195 - 4.e-6*t1359*t2220 + t1342*t2241) + 0.80321*(-1.*t1342*t2195 - 4.e-6*t1342*t2220 - 1.000000000016*t1359*t2241);
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

#include "J_foot_clearance_FlFootTrotStance1.hh"

namespace TrotStance1
{

void J_foot_clearance_FlFootTrotStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
