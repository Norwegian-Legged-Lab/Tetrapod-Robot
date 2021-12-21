/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 12:55:30 GMT+01:00
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
  double t159;
  double t539;
  double t542;
  double t548;
  double t555;
  double t570;
  double t581;
  double t647;
  double t601;
  double t615;
  double t654;
  double t283;
  double t395;
  double t429;
  double t436;
  double t637;
  double t655;
  double t657;
  double t676;
  double t677;
  double t680;
  double t102;
  double t913;
  double t962;
  double t975;
  double t1097;
  double t1099;
  double t1113;
  double t1121;
  double t1126;
  double t1142;
  double t1159;
  double t1199;
  double t1164;
  double t1171;
  double t1172;
  double t1173;
  double t1177;
  double t1185;
  double t1254;
  double t1257;
  double t1259;
  double t1261;
  double t1288;
  double t1291;
  double t1298;
  double t1299;
  double t1301;
  double t1303;
  double t565;
  double t589;
  double t140;
  double t423;
  double t435;
  double t478;
  double t516;
  double t667;
  double t672;
  double t754;
  double t789;
  double t805;
  double t844;
  double t878;
  double t1014;
  double t1028;
  double t1036;
  double t1157;
  double t1160;
  double t1161;
  double t1411;
  double t1415;
  double t1416;
  double t1420;
  double t1422;
  double t1425;
  double t1193;
  double t1195;
  double t1217;
  double t1226;
  double t1239;
  double t1274;
  double t1275;
  double t1276;
  double t1281;
  double t1287;
  double t1430;
  double t1432;
  double t1433;
  double t1434;
  double t1436;
  double t1447;
  double t1448;
  double t1455;
  double t1322;
  double t1323;
  double t1462;
  double t1463;
  double t1468;
  double t1472;
  double t1372;
  double t1377;
  double t1538;
  double t1539;
  double t1544;
  double t1564;
  double t1567;
  double t1574;
  double t1577;
  double t1581;
  double t1588;
  double t1596;
  double t1610;
  double t1618;
  double t1624;
  double t1628;
  double t1631;
  double t1636;
  double t1637;
  double t1639;
  double t1647;
  double t1651;
  double t1653;
  double t1734;
  double t1749;
  double t1755;
  double t1757;
  double t1778;
  double t1780;
  double t1784;
  double t1788;
  double t1793;
  double t1795;
  double t1796;
  double t1798;
  double t1800;
  double t1801;
  double t1803;
  double t1805;
  double t1808;
  double t1908;
  double t1914;
  double t1917;
  double t1921;
  double t1923;
  double t1924;
  double t1926;
  double t1936;
  double t1940;
  double t1942;
  double t1950;
  double t1951;
  double t1952;
  double t1955;
  double t2007;
  double t2008;
  double t2014;
  double t2016;
  double t2024;
  double t2025;
  double t2031;
  double t2057;
  double t2059;
  double t2066;
  double t2072;
  t159 = Cos(var1[10]);
  t539 = Sin(var1[3]);
  t542 = Cos(var1[9]);
  t548 = -1.*t542;
  t555 = 1. + t548;
  t570 = Sin(var1[9]);
  t581 = -0.15121*t570;
  t647 = Cos(var1[3]);
  t601 = Cos(var1[5]);
  t615 = Sin(var1[4]);
  t654 = Sin(var1[5]);
  t283 = -1.*t159;
  t395 = 1. + t283;
  t429 = -1. + t159;
  t436 = Sin(var1[10]);
  t637 = t601*t539*t615;
  t655 = t647*t654;
  t657 = t637 + t655;
  t676 = t647*t601;
  t677 = -1.*t539*t615*t654;
  t680 = t676 + t677;
  t102 = Cos(var1[4]);
  t913 = -1.*t570*t657;
  t962 = t542*t680;
  t975 = t913 + t962;
  t1097 = t542*t657;
  t1099 = t570*t680;
  t1113 = t1097 + t1099;
  t1121 = Cos(var1[11]);
  t1126 = -1.*t1121;
  t1142 = 1. + t1126;
  t1159 = Sin(var1[11]);
  t1199 = -1. + t1121;
  t1164 = -1.*t102*t436*t539;
  t1171 = -4.e-6*t436*t975;
  t1172 = -1.000000000016*t395;
  t1173 = 1. + t1172;
  t1177 = t1173*t1113;
  t1185 = t1164 + t1171 + t1177;
  t1254 = -1.*t159*t102*t539;
  t1257 = 4.e-6*t395*t975;
  t1259 = -1.*t436*t1113;
  t1261 = t1254 + t1257 + t1259;
  t1288 = -4.e-6*t395*t102*t539;
  t1291 = 1.6e-11*t429;
  t1298 = 1. + t1291;
  t1299 = t1298*t975;
  t1301 = 4.e-6*t436*t1113;
  t1303 = t1288 + t1299 + t1301;
  t565 = 0.15121*t555;
  t589 = t565 + t581;
  t140 = -4.9936e-13*var1[10];
  t423 = -0.038749*t395;
  t435 = 6.19984e-13*t429;
  t478 = -0.281210000004*t436;
  t516 = t140 + t423 + t435 + t478;
  t667 = -0.15121*t555;
  t672 = t667 + t581;
  t754 = -1.2484e-7*var1[10];
  t789 = 2.479936e-18*t395;
  t805 = -1.54996e-7*t429;
  t844 = 1.124840000016e-6*t436;
  t878 = t754 + t789 + t805 + t844;
  t1014 = 0.281210000008499*t395;
  t1028 = -0.03874900000062*t436;
  t1036 = t1014 + t1028;
  t1157 = 0.50315000001605*t1142;
  t1160 = -0.0398890000006382*t1159;
  t1161 = t1157 + t1160;
  t1411 = t647*t102*t601*t570;
  t1415 = t542*t647*t102*t654;
  t1416 = t1411 + t1415;
  t1420 = -1.*t542*t647*t102*t601;
  t1422 = t647*t102*t570*t654;
  t1425 = t1420 + t1422;
  t1193 = -5.04e-14*var1[11];
  t1195 = -0.039889*t1142;
  t1217 = 6.38224e-13*t1199;
  t1226 = -0.503150000008*t1159;
  t1239 = t1193 + t1195 + t1217 + t1226;
  t1274 = -1.26e-8*var1[11];
  t1275 = 2.552896e-18*t1142;
  t1276 = -1.59556e-7*t1199;
  t1281 = 2.012600000032e-6*t1159;
  t1287 = t1274 + t1275 + t1276 + t1281;
  t1430 = -1.*t647*t436*t615;
  t1432 = -4.e-6*t436*t1416;
  t1433 = t1173*t1425;
  t1434 = t1430 + t1432 + t1433;
  t1436 = -1.*t159*t647*t615;
  t1447 = 4.e-6*t395*t1416;
  t1448 = -1.*t436*t1425;
  t1455 = t1436 + t1447 + t1448;
  t1322 = 1.6e-11*t1199;
  t1323 = 1. + t1322;
  t1462 = -4.e-6*t395*t647*t615;
  t1463 = t1298*t1416;
  t1468 = 4.e-6*t436*t1425;
  t1472 = t1462 + t1463 + t1468;
  t1372 = -1.000000000016*t1142;
  t1377 = 1. + t1372;
  t1538 = t647*t601*t615;
  t1539 = -1.*t539*t654;
  t1544 = t1538 + t1539;
  t1564 = t601*t539;
  t1567 = t647*t615*t654;
  t1574 = t1564 + t1567;
  t1577 = t570*t1544;
  t1581 = t542*t1574;
  t1588 = t1577 + t1581;
  t1596 = t542*t1544;
  t1610 = -1.*t570*t1574;
  t1618 = t1596 + t1610;
  t1624 = 4.e-6*t436*t1588;
  t1628 = t1298*t1618;
  t1631 = t1624 + t1628;
  t1636 = -1.*t436*t1588;
  t1637 = 4.e-6*t395*t1618;
  t1639 = t1636 + t1637;
  t1647 = t1173*t1588;
  t1651 = -4.e-6*t436*t1618;
  t1653 = t1647 + t1651;
  t1734 = -0.15121*t542;
  t1749 = -1.*t647*t601*t615;
  t1755 = t539*t654;
  t1757 = t1749 + t1755;
  t1778 = -1.*t570*t1757;
  t1780 = t1778 + t1581;
  t1784 = -1.*t542*t1757;
  t1788 = t1784 + t1610;
  t1793 = 4.e-6*t436*t1780;
  t1795 = t1298*t1788;
  t1796 = t1793 + t1795;
  t1798 = -1.*t436*t1780;
  t1800 = 4.e-6*t395*t1788;
  t1801 = t1798 + t1800;
  t1803 = t1173*t1780;
  t1805 = -4.e-6*t436*t1788;
  t1808 = t1803 + t1805;
  t1908 = t542*t1757;
  t1914 = t570*t1574;
  t1917 = t1908 + t1914;
  t1921 = -1.*t647*t102*t436;
  t1923 = -1.*t159*t1917;
  t1924 = t1921 + t1793 + t1923;
  t1926 = 4.e-6*t647*t102*t436;
  t1936 = -1.6e-11*t436*t1780;
  t1940 = 4.e-6*t159*t1917;
  t1942 = t1926 + t1936 + t1940;
  t1950 = t159*t647*t102;
  t1951 = -4.e-6*t159*t1780;
  t1952 = -1.000000000016*t436*t1917;
  t1955 = t1950 + t1951 + t1952;
  t2007 = t647*t102*t436;
  t2008 = -4.e-6*t436*t1780;
  t2014 = t1173*t1917;
  t2016 = t2007 + t2008 + t2014;
  t2024 = 4.e-6*t395*t1780;
  t2025 = -1.*t436*t1917;
  t2031 = t1950 + t2024 + t2025;
  t2057 = 4.e-6*t395*t647*t102;
  t2059 = t1298*t1780;
  t2066 = 4.e-6*t436*t1917;
  t2072 = t2057 + t2059 + t2066;
  p_output1[0]=1.;
  p_output1[1]=t1036*t1113 + t1161*t1185 + t1239*t1261 + t1287*t1303 - 0.041195*(-1.*t1159*t1185 + t1121*t1261 + 4.e-6*t1142*t1303) - 0.14871*(4.e-6*t1159*t1185 + 4.e-6*t1142*t1261 + t1303*t1323) + 0.803147*(t1159*t1261 - 4.e-6*t1159*t1303 + t1185*t1377) - 1.*t102*t516*t539 + t589*t657 + t672*t680 + t878*t975;
  p_output1[2]=t1036*t1425 + t1161*t1434 + t1239*t1455 + t1287*t1472 - 0.041195*(-1.*t1159*t1434 + t1121*t1455 + 4.e-6*t1142*t1472) + 0.803147*(t1377*t1434 + t1159*t1455 - 4.e-6*t1159*t1472) - 0.14871*(4.e-6*t1159*t1434 + 4.e-6*t1142*t1455 + t1323*t1472) - 1.*t102*t589*t601*t647 - 1.*t516*t615*t647 + t102*t647*t654*t672 + t1416*t878;
  p_output1[3]=t1036*t1588 + t1287*t1631 + t1239*t1639 + t1161*t1653 - 0.041195*(4.e-6*t1142*t1631 + t1121*t1639 - 1.*t1159*t1653) - 0.14871*(t1323*t1631 + 4.e-6*t1142*t1639 + 4.e-6*t1159*t1653) + 0.803147*(-4.e-6*t1159*t1631 + t1159*t1639 + t1377*t1653) + t1574*t589 + t1544*t672 + t1618*t878;
  p_output1[4]=t1036*t1780 + t1287*t1796 + t1239*t1801 + t1161*t1808 - 0.041195*(4.e-6*t1142*t1796 + t1121*t1801 - 1.*t1159*t1808) - 0.14871*(t1323*t1796 + 4.e-6*t1142*t1801 + 4.e-6*t1159*t1808) + 0.803147*(-4.e-6*t1159*t1796 + t1159*t1801 + t1377*t1808) + t1757*(t1734 + 0.15121*t570) + t1574*(t1734 + t581) + t1788*t878;
  p_output1[5]=t1239*t1924 + t1287*t1942 + t1161*t1955 - 0.041195*(t1121*t1924 + 4.e-6*t1142*t1942 - 1.*t1159*t1955) - 0.14871*(4.e-6*t1142*t1924 + t1323*t1942 + 4.e-6*t1159*t1955) + 0.803147*(t1159*t1924 - 4.e-6*t1159*t1942 + t1377*t1955) + t1780*(-1.2484e-7 + 1.124840000016e-6*t159 + 1.5499600000248e-7*t436) + t1917*(-0.03874900000062*t159 + 0.281210000008499*t436) + t102*(-4.9936e-13 + t1028 - 0.281210000004*t159)*t647;
  p_output1[6]=(-0.0398890000006382*t1121 + 0.50315000001605*t1159)*t2016 + (-5.04e-14 - 0.503150000008*t1121 + t1160)*t2031 + (-1.26e-8 + 2.012600000032e-6*t1121 + 1.59556000002553e-7*t1159)*t2072 + 0.803147*(-1.000000000016*t1159*t2016 + t1121*t2031 - 4.e-6*t1121*t2072) - 0.14871*(4.e-6*t1121*t2016 + 4.e-6*t1159*t2031 - 1.6e-11*t1159*t2072) - 0.041195*(-1.*t1121*t2016 - 1.*t1159*t2031 + 4.e-6*t1159*t2072);
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

namespace TrotStance2
{

void J_foot_clearance_FrFootDiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
