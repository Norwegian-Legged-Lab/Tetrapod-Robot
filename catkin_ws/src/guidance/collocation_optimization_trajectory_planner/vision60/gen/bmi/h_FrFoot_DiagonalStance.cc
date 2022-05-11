/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:23:38 GMT+02:00
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
  double t196;
  double t1933;
  double t1935;
  double t1937;
  double t1948;
  double t206;
  double t1965;
  double t59;
  double t1976;
  double t1977;
  double t1979;
  double t1981;
  double t2167;
  double t2168;
  double t2170;
  double t2172;
  double t2181;
  double t2182;
  double t2183;
  double t128;
  double t184;
  double t2201;
  double t1945;
  double t1947;
  double t2207;
  double t2361;
  double t2362;
  double t2363;
  double t2205;
  double t2211;
  double t2212;
  double t2387;
  double t2388;
  double t2390;
  double t2175;
  double t2177;
  double t2392;
  double t2396;
  double t2397;
  double t2402;
  double t2403;
  double t2404;
  double t2442;
  double t2444;
  double t2445;
  double t2430;
  double t2432;
  double t2433;
  double t2651;
  double t2653;
  double t2654;
  double t2656;
  double t2657;
  double t2659;
  double t2661;
  double t2662;
  double t2663;
  t196 = Cos(var1[4]);
  t1933 = Sin(var1[12]);
  t1935 = Sin(var1[4]);
  t1937 = Cos(var1[12]);
  t1948 = Sin(var1[5]);
  t206 = Cos(var1[5]);
  t1965 = Sin(var1[13]);
  t59 = Cos(var1[13]);
  t1976 = t1937*t1935;
  t1977 = t196*t1933*t1948;
  t1979 = t1976 + t1977;
  t1981 = Sin(var1[14]);
  t2167 = -1.*t196*t206*t1965;
  t2168 = t59*t1979;
  t2170 = t2167 + t2168;
  t2172 = Cos(var1[14]);
  t2181 = t59*t196*t206;
  t2182 = t1965*t1979;
  t2183 = t2181 + t2182;
  t128 = -1.*t59;
  t184 = 1. + t128;
  t2201 = Sin(var1[3]);
  t1945 = -1.*t1937;
  t1947 = 1. + t1945;
  t2207 = Cos(var1[3]);
  t2361 = t2207*t206;
  t2362 = -1.*t2201*t1935*t1948;
  t2363 = t2361 + t2362;
  t2205 = t206*t2201*t1935;
  t2211 = t2207*t1948;
  t2212 = t2205 + t2211;
  t2387 = -1.*t1937*t196*t2201;
  t2388 = -1.*t1933*t2363;
  t2390 = t2387 + t2388;
  t2175 = -1.*t2172;
  t2177 = 1. + t2175;
  t2392 = -1.*t1965*t2212;
  t2396 = t59*t2390;
  t2397 = t2392 + t2396;
  t2402 = t59*t2212;
  t2403 = t1965*t2390;
  t2404 = t2402 + t2403;
  t2442 = t206*t2201;
  t2444 = t2207*t1935*t1948;
  t2445 = t2442 + t2444;
  t2430 = -1.*t2207*t206*t1935;
  t2432 = t2201*t1948;
  t2433 = t2430 + t2432;
  t2651 = t1937*t2207*t196;
  t2653 = -1.*t1933*t2445;
  t2654 = t2651 + t2653;
  t2656 = -1.*t1965*t2433;
  t2657 = t59*t2654;
  t2659 = t2656 + t2657;
  t2661 = t59*t2433;
  t2662 = t1965*t2654;
  t2663 = t2661 + t2662;
  p_output1[0]=0.1575*t1933*t1935 + 0.1575*t1947*t1948*t196 - 0.2255*(t1933*t1935 - 1.*t1937*t1948*t196) - 0.325*t1965*t1979 + 0.325*t184*t196*t206 + 0.075*t1981*t2170 + 0.075*t2177*t2183 - 0.0641*(t2170*t2172 + t1981*t2183) + 0.355*(-1.*t1981*t2170 + t2172*t2183) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.1575*t1933*t196*t2201 + 0.325*t184*t2212 - 0.1575*t1947*t2363 - 0.2255*(-1.*t1933*t196*t2201 + t1937*t2363) - 0.325*t1965*t2390 + 0.075*t1981*t2397 + 0.075*t2177*t2404 - 0.0641*(t2172*t2397 + t1981*t2404) + 0.355*(-1.*t1981*t2397 + t2172*t2404) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t1933*t196*t2207 + 0.325*t184*t2433 - 0.1575*t1947*t2445 - 0.2255*(t1933*t196*t2207 + t1937*t2445) - 0.325*t1965*t2654 + 0.075*t1981*t2659 + 0.075*t2177*t2663 - 0.0641*(t2172*t2659 + t1981*t2663) + 0.355*(-1.*t1981*t2659 + t2172*t2663) + var1[2] - 1.*var2[2];
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
