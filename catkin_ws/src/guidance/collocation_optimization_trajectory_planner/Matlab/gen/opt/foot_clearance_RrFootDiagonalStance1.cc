/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:10:11 GMT+01:00
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
  double t1056;
  double t1125;
  double t1298;
  double t1417;
  double t495;
  double t1639;
  double t1641;
  double t1645;
  double t1650;
  double t1652;
  double t1655;
  double t1681;
  double t1664;
  double t1684;
  double t1622;
  double t1627;
  double t1667;
  double t1716;
  double t1736;
  double t1781;
  double t1782;
  double t1791;
  double t1823;
  double t1416;
  double t1962;
  double t1964;
  double t1968;
  double t1978;
  double t628;
  double t1886;
  double t1860;
  double t1861;
  double t1867;
  double t1942;
  double t1946;
  double t1948;
  double t1984;
  double t1630;
  double t2010;
  double t1498;
  double t1974;
  double t2135;
  double t2139;
  double t2163;
  double t1842;
  double t2042;
  double t1831;
  double t2189;
  double t2029;
  double t2040;
  double t2056;
  double t2068;
  double t2085;
  double t2091;
  double t2099;
  double t2101;
  double t2195;
  double t2158;
  double t2159;
  double t2160;
  double t2165;
  double t2169;
  double t2170;
  double t2171;
  double t2172;
  double t2243;
  double t2245;
  double t2248;
  double t2249;
  double t2255;
  double t2263;
  double t2270;
  double t2272;
  double t2124;
  double t2297;
  double t2144;
  double t2362;
  double t2287;
  double t1979;
  t1056 = Cos(var1[16]);
  t1125 = -1.*t1056;
  t1298 = 1. + t1125;
  t1417 = Sin(var1[16]);
  t495 = Cos(var1[3]);
  t1639 = Cos(var1[15]);
  t1641 = -1.*t1639;
  t1645 = 1. + t1641;
  t1650 = -0.15121*t1645;
  t1652 = Sin(var1[15]);
  t1655 = Cos(var1[5]);
  t1681 = Sin(var1[3]);
  t1664 = Sin(var1[4]);
  t1684 = Sin(var1[5]);
  t1622 = -1. + t1056;
  t1627 = 4.e-6*t1622;
  t1667 = -1.*t495*t1655*t1664;
  t1716 = t1681*t1684;
  t1736 = t1667 + t1716;
  t1781 = t1655*t1681;
  t1782 = t495*t1664*t1684;
  t1791 = t1781 + t1782;
  t1823 = 7.e-6*t1298;
  t1416 = 2.8e-11*t1298;
  t1962 = Cos(var1[17]);
  t1964 = -1.*t1962;
  t1968 = 1. + t1964;
  t1978 = Sin(var1[17]);
  t628 = Cos(var1[4]);
  t1886 = -4.e-6*t1417;
  t1860 = -1.*t1652*t1736;
  t1861 = t1639*t1791;
  t1867 = t1860 + t1861;
  t1942 = t1639*t1736;
  t1946 = t1652*t1791;
  t1948 = t1942 + t1946;
  t1984 = 2.8e-11*t1968;
  t1630 = -7.e-6*t1417;
  t2010 = -2.8e-11*t1298;
  t1498 = -1.*t1417;
  t1974 = 7.e-6*t1968;
  t2135 = -1. + t1962;
  t2139 = 4.e-6*t2135;
  t2163 = 4.e-6*t1298;
  t1842 = 7.e-6*t1417;
  t2042 = -7.e-6*t1298;
  t1831 = 4.e-6*t1417;
  t2189 = 4.e-6*t1978;
  t2029 = t2010 + t1417;
  t2040 = t495*t628*t2029;
  t2056 = t2042 + t1886;
  t2068 = t2056*t1867;
  t2085 = -1.000000000016*t1298;
  t2091 = 1. + t2085;
  t2099 = t2091*t1948;
  t2101 = t2040 + t2068 + t2099;
  t2195 = 7.e-6*t1978;
  t2158 = -1.000000000049*t1298;
  t2159 = 1. + t2158;
  t2160 = t2159*t495*t628;
  t2165 = t2163 + t1630;
  t2169 = t2165*t1867;
  t2170 = t2010 + t1498;
  t2171 = t2170*t1948;
  t2172 = t2160 + t2169 + t2171;
  t2243 = t2163 + t1842;
  t2245 = t495*t628*t2243;
  t2248 = -6.5e-11*t1298;
  t2249 = 1. + t2248;
  t2255 = t2249*t1867;
  t2263 = t2042 + t1831;
  t2270 = t2263*t1948;
  t2272 = t2245 + t2255 + t2270;
  t2124 = -1.*t1978;
  t2297 = 4.e-6*t1968;
  t2144 = -7.e-6*t1978;
  t2362 = -2.8e-11*t1968;
  t2287 = -7.e-6*t1968;
  t1979 = -4.e-6*t1978;
  p_output1[0]=(t1650 - 0.15121*t1652)*t1736 + (t1650 + 0.15121*t1652)*t1791 - 0.148715*((1. - 6.5e-11*t1968)*t2272 + t2101*(t2189 + t2287) + t2172*(t2195 + t2297)) - 0.80315*((1. - 1.000000000016*t1968)*t2101 + t2272*(t1979 + t2287) + t2172*(t1978 + t2362)) - 0.038576*((1. - 1.000000000049*t1968)*t2172 + t2272*(t2144 + t2297) + t2101*(t2124 + t2362)) + var1[2] + t1948*(-0.2812110000084994*t1298 - 0.038749000006999997*(t1416 + t1417) - 1.8134809999999998e-6*(t1823 + t1886) - 2.7726089999999997e-12*var1[16]) + t495*t628*(-0.03874900000889869*t1298 - 0.281211000004*(t1416 + t1498) - 1.8134809999999998e-6*(t1627 + t1630) + 1.5843479999999999e-12*var1[16]) + t1867*(-1.1787626499999999e-16*t1298 - 0.281211000004*(t1823 + t1831) - 0.038749000006999997*(t1627 + t1842) + 3.9608699999999997e-7*var1[16]) + t2101*(-0.5031510000160505*t1968 - 3.367757e-6*(t1974 + t1979) - 0.038575000014*(t1978 + t1984) - 1.9784030000000015e-12*var1[17]) + t2172*(-0.03857500001589017*t1968 - 0.5031510000080001*(t1984 + t2124) - 3.367757e-6*(t2139 + t2144) + 1.1305160000000008e-12*var1[17]) + t2272*(-2.18904205e-16*t1968 - 0.5031510000080001*(t1974 + t2189) - 0.038575000014*(t2139 + t2195) + 2.826290000000002e-7*var1[17]);
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

#include "foot_clearance_RrFootDiagonalStance1.hh"

namespace DiagonalStance1
{

void foot_clearance_RrFootDiagonalStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
