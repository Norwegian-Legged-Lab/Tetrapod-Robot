/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 12:53:38 GMT+01:00
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
  double t426;
  double t431;
  double t625;
  double t814;
  double t198;
  double t1299;
  double t1326;
  double t1353;
  double t1364;
  double t1369;
  double t1424;
  double t1470;
  double t1445;
  double t1473;
  double t1022;
  double t1093;
  double t1462;
  double t1476;
  double t1479;
  double t1489;
  double t1490;
  double t1502;
  double t1535;
  double t760;
  double t1692;
  double t1693;
  double t1699;
  double t1738;
  double t375;
  double t1663;
  double t1606;
  double t1626;
  double t1638;
  double t1682;
  double t1683;
  double t1684;
  double t1784;
  double t1157;
  double t1798;
  double t826;
  double t1720;
  double t1866;
  double t1870;
  double t1945;
  double t1550;
  double t1801;
  double t1538;
  double t1987;
  double t1799;
  double t1800;
  double t1804;
  double t1808;
  double t1812;
  double t1814;
  double t1817;
  double t1820;
  double t1993;
  double t1911;
  double t1930;
  double t1932;
  double t1950;
  double t1953;
  double t1962;
  double t1967;
  double t1968;
  double t2009;
  double t2011;
  double t2013;
  double t2016;
  double t2023;
  double t2027;
  double t2029;
  double t2030;
  double t1831;
  double t2061;
  double t1871;
  double t2135;
  double t2047;
  double t1742;
  t426 = Cos(var1[16]);
  t431 = -1.*t426;
  t625 = 1. + t431;
  t814 = Sin(var1[16]);
  t198 = Cos(var1[3]);
  t1299 = Cos(var1[15]);
  t1326 = -1.*t1299;
  t1353 = 1. + t1326;
  t1364 = -0.15121*t1353;
  t1369 = Sin(var1[15]);
  t1424 = Cos(var1[5]);
  t1470 = Sin(var1[3]);
  t1445 = Sin(var1[4]);
  t1473 = Sin(var1[5]);
  t1022 = -1. + t426;
  t1093 = 4.e-6*t1022;
  t1462 = -1.*t198*t1424*t1445;
  t1476 = t1470*t1473;
  t1479 = t1462 + t1476;
  t1489 = t1424*t1470;
  t1490 = t198*t1445*t1473;
  t1502 = t1489 + t1490;
  t1535 = 7.e-6*t625;
  t760 = 2.8e-11*t625;
  t1692 = Cos(var1[17]);
  t1693 = -1.*t1692;
  t1699 = 1. + t1693;
  t1738 = Sin(var1[17]);
  t375 = Cos(var1[4]);
  t1663 = -4.e-6*t814;
  t1606 = -1.*t1369*t1479;
  t1626 = t1299*t1502;
  t1638 = t1606 + t1626;
  t1682 = t1299*t1479;
  t1683 = t1369*t1502;
  t1684 = t1682 + t1683;
  t1784 = 2.8e-11*t1699;
  t1157 = -7.e-6*t814;
  t1798 = -2.8e-11*t625;
  t826 = -1.*t814;
  t1720 = 7.e-6*t1699;
  t1866 = -1. + t1692;
  t1870 = 4.e-6*t1866;
  t1945 = 4.e-6*t625;
  t1550 = 7.e-6*t814;
  t1801 = -7.e-6*t625;
  t1538 = 4.e-6*t814;
  t1987 = 4.e-6*t1738;
  t1799 = t1798 + t814;
  t1800 = t198*t375*t1799;
  t1804 = t1801 + t1663;
  t1808 = t1804*t1638;
  t1812 = -1.000000000016*t625;
  t1814 = 1. + t1812;
  t1817 = t1814*t1684;
  t1820 = t1800 + t1808 + t1817;
  t1993 = 7.e-6*t1738;
  t1911 = -1.000000000049*t625;
  t1930 = 1. + t1911;
  t1932 = t1930*t198*t375;
  t1950 = t1945 + t1157;
  t1953 = t1950*t1638;
  t1962 = t1798 + t826;
  t1967 = t1962*t1684;
  t1968 = t1932 + t1953 + t1967;
  t2009 = t1945 + t1550;
  t2011 = t198*t375*t2009;
  t2013 = -6.5e-11*t625;
  t2016 = 1. + t2013;
  t2023 = t2016*t1638;
  t2027 = t1801 + t1538;
  t2029 = t2027*t1684;
  t2030 = t2011 + t2023 + t2029;
  t1831 = -1.*t1738;
  t2061 = 4.e-6*t1699;
  t1871 = -7.e-6*t1738;
  t2135 = -2.8e-11*t1699;
  t2047 = -7.e-6*t1699;
  t1742 = -4.e-6*t1738;
  p_output1[0]=(t1364 - 0.15121*t1369)*t1479 + (t1364 + 0.15121*t1369)*t1502 - 0.148715*((1. - 6.5e-11*t1699)*t2030 + t1820*(t1987 + t2047) + t1968*(t1993 + t2061)) - 0.80315*((1. - 1.000000000016*t1699)*t1820 + t2030*(t1742 + t2047) + t1968*(t1738 + t2135)) - 0.038576*((1. - 1.000000000049*t1699)*t1968 + t2030*(t1871 + t2061) + t1820*(t1831 + t2135)) + var1[2] + t1684*(-1.8134809999999998e-6*(t1535 + t1663) - 0.2812110000084994*t625 - 0.038749000006999997*(t760 + t814) - 2.7726089999999997e-12*var1[16]) + t198*t375*(-1.8134809999999998e-6*(t1093 + t1157) - 0.03874900000889869*t625 - 0.281211000004*(t760 + t826) + 1.5843479999999999e-12*var1[16]) + t1638*(-0.281211000004*(t1535 + t1538) - 0.038749000006999997*(t1093 + t1550) - 1.1787626499999999e-16*t625 + 3.9608699999999997e-7*var1[16]) + t1820*(-0.5031510000160505*t1699 - 3.367757e-6*(t1720 + t1742) - 0.038575000014*(t1738 + t1784) - 1.9784030000000015e-12*var1[17]) + t1968*(-0.03857500001589017*t1699 - 0.5031510000080001*(t1784 + t1831) - 3.367757e-6*(t1870 + t1871) + 1.1305160000000008e-12*var1[17]) + t2030*(-2.18904205e-16*t1699 - 0.5031510000080001*(t1720 + t1987) - 0.038575000014*(t1870 + t1993) + 2.826290000000002e-7*var1[17]);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "foot_clearance_RrFootTrotStance1.hh"

namespace TrotStance1
{

void foot_clearance_RrFootTrotStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
