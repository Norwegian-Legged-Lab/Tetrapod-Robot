/*
 * Automatically Generated from Mathematica.
 * Fri 27 May 2022 16:02:52 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t108;
  double t161;
  double t188;
  double t210;
  double t246;
  double t1707;
  double t153;
  double t1729;
  double t1719;
  double t1722;
  double t1749;
  double t1755;
  double t1924;
  double t1926;
  double t1928;
  double t1937;
  double t1939;
  double t1940;
  double t1944;
  double t1950;
  double t1952;
  double t1953;
  double t245;
  double t1708;
  double t1968;
  double t1726;
  double t1728;
  double t1976;
  double t1973;
  double t1978;
  double t2114;
  double t2116;
  double t2117;
  double t2118;
  double t1750;
  double t1751;
  double t1931;
  double t1936;
  double t2131;
  double t2132;
  double t2133;
  double t2141;
  double t2146;
  double t2150;
  double t2153;
  double t2154;
  double t2155;
  double t2177;
  double t2178;
  double t2179;
  double t2181;
  double t2182;
  double t2183;
  double t2195;
  double t2196;
  double t2199;
  double t2204;
  double t2206;
  double t2207;
  double t2211;
  double t2212;
  double t2365;
  t108 = Cos(var1[4]);
  t161 = Cos(var1[12]);
  t188 = -1.*t161;
  t210 = 1. + t188;
  t246 = Sin(var1[12]);
  t1707 = -0.15121*t246;
  t153 = Cos(var1[5]);
  t1729 = Sin(var1[5]);
  t1719 = Sin(var1[13]);
  t1722 = Sin(var1[4]);
  t1749 = Cos(var1[13]);
  t1755 = t161*t108*t153;
  t1924 = -1.*t108*t246*t1729;
  t1926 = t1755 + t1924;
  t1928 = Cos(var1[14]);
  t1937 = -1.*t1719*t1722;
  t1939 = t1749*t1926;
  t1940 = t1937 + t1939;
  t1944 = Sin(var1[14]);
  t1950 = t1749*t1722;
  t1952 = t1719*t1926;
  t1953 = t1950 + t1952;
  t245 = 0.15121*t210;
  t1708 = t245 + t1707;
  t1968 = Sin(var1[3]);
  t1726 = -0.15121*t210;
  t1728 = t1726 + t1707;
  t1976 = Cos(var1[3]);
  t1973 = t153*t1968*t1722;
  t1978 = t1976*t1729;
  t2114 = t1973 + t1978;
  t2116 = t1976*t153;
  t2117 = -1.*t1968*t1722*t1729;
  t2118 = t2116 + t2117;
  t1750 = -1.*t1749;
  t1751 = 1. + t1750;
  t1931 = -1.*t1928;
  t1936 = 1. + t1931;
  t2131 = t161*t2114;
  t2132 = t246*t2118;
  t2133 = t2131 + t2132;
  t2141 = t108*t1719*t1968;
  t2146 = t1749*t2133;
  t2150 = t2141 + t2146;
  t2153 = -1.*t1749*t108*t1968;
  t2154 = t1719*t2133;
  t2155 = t2153 + t2154;
  t2177 = -1.*t1976*t153*t1722;
  t2178 = t1968*t1729;
  t2179 = t2177 + t2178;
  t2181 = t153*t1968;
  t2182 = t1976*t1722*t1729;
  t2183 = t2181 + t2182;
  t2195 = t161*t2179;
  t2196 = t246*t2183;
  t2199 = t2195 + t2196;
  t2204 = -1.*t1976*t108*t1719;
  t2206 = t1749*t2199;
  t2207 = t2204 + t2206;
  t2211 = t1749*t1976*t108;
  t2212 = t1719*t2199;
  t2365 = t2211 + t2212;
  p_output1[0]=t108*t153*t1708 + 0.28121*t1719*t1722 - 1.*t108*t1728*t1729 + 0.28121*t1751*t1926 + 0.50321*t1936*t1940 - 0.50321*t1944*t1953 + 0.19821*(t1928*t1940 + t1944*t1953) - 0.15121*(-1.*t108*t161*t1729 - 1.*t108*t153*t246) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t108*t1719*t1968 + t1708*t2114 + t1728*t2118 + 0.28121*t1751*t2133 + 0.50321*t1936*t2150 - 0.50321*t1944*t2155 + 0.19821*(t1928*t2150 + t1944*t2155) - 0.15121*(t161*t2118 - 1.*t2114*t246) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t108*t1719*t1976 + t1708*t2179 + t1728*t2183 + 0.28121*t1751*t2199 + 0.50321*t1936*t2207 - 0.50321*t1944*t2365 + 0.19821*(t1928*t2207 + t1944*t2365) - 0.15121*(t161*t2183 - 1.*t2179*t246) + var1[2] - 1.*var2[2];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void h_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
