/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:29:01 GMT+01:00
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
  double t797;
  double t835;
  double t864;
  double t1292;
  double t142;
  double t1475;
  double t1479;
  double t1480;
  double t1495;
  double t1504;
  double t1514;
  double t1523;
  double t1515;
  double t1528;
  double t1457;
  double t1459;
  double t1522;
  double t1548;
  double t1562;
  double t1631;
  double t1636;
  double t1638;
  double t1654;
  double t1232;
  double t1821;
  double t1823;
  double t1826;
  double t1833;
  double t161;
  double t1726;
  double t1680;
  double t1681;
  double t1686;
  double t1811;
  double t1814;
  double t1815;
  double t1838;
  double t1464;
  double t1872;
  double t1364;
  double t1830;
  double t1981;
  double t1985;
  double t2016;
  double t1668;
  double t1900;
  double t1659;
  double t2051;
  double t1881;
  double t1892;
  double t1909;
  double t1923;
  double t1934;
  double t1936;
  double t1937;
  double t1944;
  double t2066;
  double t2002;
  double t2010;
  double t2014;
  double t2020;
  double t2022;
  double t2029;
  double t2030;
  double t2033;
  double t2098;
  double t2100;
  double t2106;
  double t2114;
  double t2118;
  double t2124;
  double t2126;
  double t2127;
  double t1970;
  double t2145;
  double t1986;
  double t2176;
  double t2134;
  double t1834;
  t797 = Cos(var1[16]);
  t835 = -1.*t797;
  t864 = 1. + t835;
  t1292 = Sin(var1[16]);
  t142 = Cos(var1[3]);
  t1475 = Cos(var1[15]);
  t1479 = -1.*t1475;
  t1480 = 1. + t1479;
  t1495 = -0.15121*t1480;
  t1504 = Sin(var1[15]);
  t1514 = Cos(var1[5]);
  t1523 = Sin(var1[3]);
  t1515 = Sin(var1[4]);
  t1528 = Sin(var1[5]);
  t1457 = -1. + t797;
  t1459 = 4.e-6*t1457;
  t1522 = -1.*t142*t1514*t1515;
  t1548 = t1523*t1528;
  t1562 = t1522 + t1548;
  t1631 = t1514*t1523;
  t1636 = t142*t1515*t1528;
  t1638 = t1631 + t1636;
  t1654 = 7.e-6*t864;
  t1232 = 2.8e-11*t864;
  t1821 = Cos(var1[17]);
  t1823 = -1.*t1821;
  t1826 = 1. + t1823;
  t1833 = Sin(var1[17]);
  t161 = Cos(var1[4]);
  t1726 = -4.e-6*t1292;
  t1680 = -1.*t1504*t1562;
  t1681 = t1475*t1638;
  t1686 = t1680 + t1681;
  t1811 = t1475*t1562;
  t1814 = t1504*t1638;
  t1815 = t1811 + t1814;
  t1838 = 2.8e-11*t1826;
  t1464 = -7.e-6*t1292;
  t1872 = -2.8e-11*t864;
  t1364 = -1.*t1292;
  t1830 = 7.e-6*t1826;
  t1981 = -1. + t1821;
  t1985 = 4.e-6*t1981;
  t2016 = 4.e-6*t864;
  t1668 = 7.e-6*t1292;
  t1900 = -7.e-6*t864;
  t1659 = 4.e-6*t1292;
  t2051 = 4.e-6*t1833;
  t1881 = t1872 + t1292;
  t1892 = t142*t161*t1881;
  t1909 = t1900 + t1726;
  t1923 = t1909*t1686;
  t1934 = -1.000000000016*t864;
  t1936 = 1. + t1934;
  t1937 = t1936*t1815;
  t1944 = t1892 + t1923 + t1937;
  t2066 = 7.e-6*t1833;
  t2002 = -1.000000000049*t864;
  t2010 = 1. + t2002;
  t2014 = t2010*t142*t161;
  t2020 = t2016 + t1464;
  t2022 = t2020*t1686;
  t2029 = t1872 + t1364;
  t2030 = t2029*t1815;
  t2033 = t2014 + t2022 + t2030;
  t2098 = t2016 + t1668;
  t2100 = t142*t161*t2098;
  t2106 = -6.5e-11*t864;
  t2114 = 1. + t2106;
  t2118 = t2114*t1686;
  t2124 = t1900 + t1659;
  t2126 = t2124*t1815;
  t2127 = t2100 + t2118 + t2126;
  t1970 = -1.*t1833;
  t2145 = 4.e-6*t1826;
  t1986 = -7.e-6*t1833;
  t2176 = -2.8e-11*t1826;
  t2134 = -7.e-6*t1826;
  t1834 = -4.e-6*t1833;
  p_output1[0]=(t1495 - 0.15121*t1504)*t1562 + (t1495 + 0.15121*t1504)*t1638 - 0.148715*((1. - 6.5e-11*t1826)*t2127 + t1944*(t2051 + t2134) + t2033*(t2066 + t2145)) - 0.80315*((1. - 1.000000000016*t1826)*t1944 + t2127*(t1834 + t2134) + t2033*(t1833 + t2176)) - 0.038576*((1. - 1.000000000049*t1826)*t2033 + t2127*(t1986 + t2145) + t1944*(t1970 + t2176)) + var1[2] + t1815*(-0.038749000006999997*(t1232 + t1292) - 1.8134809999999998e-6*(t1654 + t1726) - 0.2812110000084994*t864 - 2.7726089999999997e-12*var1[16]) + t142*t161*(-0.281211000004*(t1232 + t1364) - 1.8134809999999998e-6*(t1459 + t1464) - 0.03874900000889869*t864 + 1.5843479999999999e-12*var1[16]) + t1686*(-0.281211000004*(t1654 + t1659) - 0.038749000006999997*(t1459 + t1668) - 1.1787626499999999e-16*t864 + 3.9608699999999997e-7*var1[16]) + t1944*(-0.5031510000160505*t1826 - 3.367757e-6*(t1830 + t1834) - 0.038575000014*(t1833 + t1838) - 1.9784030000000015e-12*var1[17]) + t2033*(-0.03857500001589017*t1826 - 0.5031510000080001*(t1838 + t1970) - 3.367757e-6*(t1985 + t1986) + 1.1305160000000008e-12*var1[17]) + t2127*(-2.18904205e-16*t1826 - 0.5031510000080001*(t1830 + t2051) - 0.038575000014*(t1985 + t2066) + 2.826290000000002e-7*var1[17]);
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

#include "foot_clearance_RrFootDiagonalStance.hh"

namespace DiagonalStance
{

void foot_clearance_RrFootDiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
