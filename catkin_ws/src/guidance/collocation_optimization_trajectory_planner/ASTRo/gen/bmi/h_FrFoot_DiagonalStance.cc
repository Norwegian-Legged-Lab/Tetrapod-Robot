/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 17:58:23 GMT+02:00
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
  double t104;
  double t157;
  double t184;
  double t206;
  double t242;
  double t1703;
  double t149;
  double t1725;
  double t1715;
  double t1718;
  double t1745;
  double t1751;
  double t1920;
  double t1922;
  double t1924;
  double t1933;
  double t1935;
  double t1936;
  double t1940;
  double t1946;
  double t1948;
  double t1949;
  double t241;
  double t1704;
  double t1964;
  double t1722;
  double t1724;
  double t1972;
  double t1969;
  double t1974;
  double t2110;
  double t2112;
  double t2113;
  double t2114;
  double t1746;
  double t1747;
  double t1927;
  double t1932;
  double t2127;
  double t2128;
  double t2129;
  double t2137;
  double t2142;
  double t2146;
  double t2149;
  double t2150;
  double t2151;
  double t2173;
  double t2174;
  double t2175;
  double t2177;
  double t2178;
  double t2179;
  double t2191;
  double t2192;
  double t2195;
  double t2200;
  double t2202;
  double t2203;
  double t2207;
  double t2208;
  double t2361;
  t104 = Cos(var1[4]);
  t157 = Cos(var1[12]);
  t184 = -1.*t157;
  t206 = 1. + t184;
  t242 = Sin(var1[12]);
  t1703 = -0.15121*t242;
  t149 = Cos(var1[5]);
  t1725 = Sin(var1[5]);
  t1715 = Sin(var1[13]);
  t1718 = Sin(var1[4]);
  t1745 = Cos(var1[13]);
  t1751 = t157*t104*t149;
  t1920 = -1.*t104*t242*t1725;
  t1922 = t1751 + t1920;
  t1924 = Cos(var1[14]);
  t1933 = -1.*t1715*t1718;
  t1935 = t1745*t1922;
  t1936 = t1933 + t1935;
  t1940 = Sin(var1[14]);
  t1946 = t1745*t1718;
  t1948 = t1715*t1922;
  t1949 = t1946 + t1948;
  t241 = 0.15121*t206;
  t1704 = t241 + t1703;
  t1964 = Sin(var1[3]);
  t1722 = -0.15121*t206;
  t1724 = t1722 + t1703;
  t1972 = Cos(var1[3]);
  t1969 = t149*t1964*t1718;
  t1974 = t1972*t1725;
  t2110 = t1969 + t1974;
  t2112 = t1972*t149;
  t2113 = -1.*t1964*t1718*t1725;
  t2114 = t2112 + t2113;
  t1746 = -1.*t1745;
  t1747 = 1. + t1746;
  t1927 = -1.*t1924;
  t1932 = 1. + t1927;
  t2127 = t157*t2110;
  t2128 = t242*t2114;
  t2129 = t2127 + t2128;
  t2137 = t104*t1715*t1964;
  t2142 = t1745*t2129;
  t2146 = t2137 + t2142;
  t2149 = -1.*t1745*t104*t1964;
  t2150 = t1715*t2129;
  t2151 = t2149 + t2150;
  t2173 = -1.*t1972*t149*t1718;
  t2174 = t1964*t1725;
  t2175 = t2173 + t2174;
  t2177 = t149*t1964;
  t2178 = t1972*t1718*t1725;
  t2179 = t2177 + t2178;
  t2191 = t157*t2175;
  t2192 = t242*t2179;
  t2195 = t2191 + t2192;
  t2200 = -1.*t1972*t104*t1715;
  t2202 = t1745*t2195;
  t2203 = t2200 + t2202;
  t2207 = t1745*t1972*t104;
  t2208 = t1715*t2195;
  t2361 = t2207 + t2208;
  p_output1[0]=t104*t149*t1704 + 0.28121*t1715*t1718 - 1.*t104*t1724*t1725 + 0.28121*t1747*t1922 + 0.50321*t1932*t1936 - 0.50321*t1940*t1949 + 0.19821*(t1924*t1936 + t1940*t1949) - 0.15121*(-1.*t104*t157*t1725 - 1.*t104*t149*t242) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t104*t1715*t1964 + t1704*t2110 + t1724*t2114 + 0.28121*t1747*t2129 + 0.50321*t1932*t2146 - 0.50321*t1940*t2151 + 0.19821*(t1924*t2146 + t1940*t2151) - 0.15121*(t157*t2114 - 1.*t2110*t242) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t104*t1715*t1972 + t1704*t2175 + t1724*t2179 + 0.28121*t1747*t2195 + 0.50321*t1932*t2203 - 0.50321*t1940*t2361 + 0.19821*(t1924*t2203 + t1940*t2361) - 0.15121*(t157*t2179 - 1.*t2175*t242) + var1[2] - 1.*var2[2];
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
