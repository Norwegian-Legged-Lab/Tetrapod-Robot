/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:07:40 GMT+02:00
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
  double t1853;
  double t1862;
  double t1869;
  double t1884;
  double t1920;
  double t1857;
  double t1992;
  double t1831;
  double t1993;
  double t1994;
  double t1998;
  double t2000;
  double t2001;
  double t2007;
  double t2008;
  double t2010;
  double t2042;
  double t2125;
  double t2134;
  double t1851;
  double t1852;
  double t2225;
  double t1885;
  double t1913;
  double t2231;
  double t2242;
  double t2243;
  double t2248;
  double t2227;
  double t2232;
  double t2237;
  double t2264;
  double t2272;
  double t2273;
  double t2014;
  double t2028;
  double t2282;
  double t2283;
  double t2287;
  double t2298;
  double t2299;
  double t2302;
  double t2325;
  double t2326;
  double t2327;
  double t2320;
  double t2321;
  double t2323;
  double t2335;
  double t2336;
  double t2337;
  double t2339;
  double t2340;
  double t2341;
  double t2357;
  double t2358;
  double t2359;
  t1853 = Cos(var1[4]);
  t1862 = Sin(var1[12]);
  t1869 = Sin(var1[4]);
  t1884 = Cos(var1[12]);
  t1920 = Sin(var1[5]);
  t1857 = Cos(var1[5]);
  t1992 = Sin(var1[13]);
  t1831 = Cos(var1[13]);
  t1993 = t1884*t1869;
  t1994 = t1853*t1862*t1920;
  t1998 = t1993 + t1994;
  t2000 = Sin(var1[14]);
  t2001 = -1.*t1853*t1857*t1992;
  t2007 = t1831*t1998;
  t2008 = t2001 + t2007;
  t2010 = Cos(var1[14]);
  t2042 = t1831*t1853*t1857;
  t2125 = t1992*t1998;
  t2134 = t2042 + t2125;
  t1851 = -1.*t1831;
  t1852 = 1. + t1851;
  t2225 = Sin(var1[3]);
  t1885 = -1.*t1884;
  t1913 = 1. + t1885;
  t2231 = Cos(var1[3]);
  t2242 = t2231*t1857;
  t2243 = -1.*t2225*t1869*t1920;
  t2248 = t2242 + t2243;
  t2227 = t1857*t2225*t1869;
  t2232 = t2231*t1920;
  t2237 = t2227 + t2232;
  t2264 = -1.*t1884*t1853*t2225;
  t2272 = -1.*t1862*t2248;
  t2273 = t2264 + t2272;
  t2014 = -1.*t2010;
  t2028 = 1. + t2014;
  t2282 = -1.*t1992*t2237;
  t2283 = t1831*t2273;
  t2287 = t2282 + t2283;
  t2298 = t1831*t2237;
  t2299 = t1992*t2273;
  t2302 = t2298 + t2299;
  t2325 = t1857*t2225;
  t2326 = t2231*t1869*t1920;
  t2327 = t2325 + t2326;
  t2320 = -1.*t2231*t1857*t1869;
  t2321 = t2225*t1920;
  t2323 = t2320 + t2321;
  t2335 = t1884*t2231*t1853;
  t2336 = -1.*t1862*t2327;
  t2337 = t2335 + t2336;
  t2339 = -1.*t1992*t2323;
  t2340 = t1831*t2337;
  t2341 = t2339 + t2340;
  t2357 = t1831*t2323;
  t2358 = t1992*t2337;
  t2359 = t2357 + t2358;
  p_output1[0]=0.325*t1852*t1853*t1857 + 0.1575*t1862*t1869 + 0.1575*t1853*t1913*t1920 - 0.2255*(t1862*t1869 - 1.*t1853*t1884*t1920) - 0.325*t1992*t1998 + 0.075*t2000*t2008 + 0.075*t2028*t2134 - 0.0641*(t2008*t2010 + t2000*t2134) + 0.355*(-1.*t2000*t2008 + t2010*t2134) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.1575*t1853*t1862*t2225 + 0.325*t1852*t2237 - 0.1575*t1913*t2248 - 0.2255*(-1.*t1853*t1862*t2225 + t1884*t2248) - 0.325*t1992*t2273 + 0.075*t2000*t2287 + 0.075*t2028*t2302 - 0.0641*(t2010*t2287 + t2000*t2302) + 0.355*(-1.*t2000*t2287 + t2010*t2302) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t1853*t1862*t2231 + 0.325*t1852*t2323 - 0.1575*t1913*t2327 - 0.2255*(t1853*t1862*t2231 + t1884*t2327) - 0.325*t1992*t2337 + 0.075*t2000*t2341 + 0.075*t2028*t2359 - 0.0641*(t2010*t2341 + t2000*t2359) + 0.355*(-1.*t2000*t2341 + t2010*t2359) + var1[2] - 1.*var2[2];
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

#include "h_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
