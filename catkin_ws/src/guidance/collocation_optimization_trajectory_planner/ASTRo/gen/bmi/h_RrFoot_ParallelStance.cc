/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:29 GMT+02:00
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
  double t43;
  double t70;
  double t397;
  double t399;
  double t492;
  double t729;
  double t61;
  double t1404;
  double t1035;
  double t1279;
  double t1559;
  double t1753;
  double t1775;
  double t1779;
  double t1810;
  double t1828;
  double t1835;
  double t1837;
  double t1843;
  double t1846;
  double t1847;
  double t1852;
  double t838;
  double t951;
  double t1959;
  double t1309;
  double t1336;
  double t1985;
  double t1976;
  double t1996;
  double t2102;
  double t2114;
  double t2119;
  double t2127;
  double t1646;
  double t1711;
  double t1814;
  double t1816;
  double t2195;
  double t2196;
  double t2199;
  double t2217;
  double t2218;
  double t2219;
  double t2222;
  double t2223;
  double t2225;
  double t2281;
  double t2282;
  double t2285;
  double t2288;
  double t2309;
  double t2311;
  double t2340;
  double t2342;
  double t2343;
  double t2352;
  double t2354;
  double t2356;
  double t2361;
  double t2362;
  double t2367;
  t43 = Cos(var1[4]);
  t70 = Cos(var1[15]);
  t397 = -1.*t70;
  t399 = 1. + t397;
  t492 = -0.15121*t399;
  t729 = Sin(var1[15]);
  t61 = Cos(var1[5]);
  t1404 = Sin(var1[5]);
  t1035 = Sin(var1[16]);
  t1279 = Sin(var1[4]);
  t1559 = Cos(var1[16]);
  t1753 = t70*t43*t61;
  t1775 = -1.*t43*t729*t1404;
  t1779 = t1753 + t1775;
  t1810 = Cos(var1[17]);
  t1828 = t1035*t1279;
  t1835 = t1559*t1779;
  t1837 = t1828 + t1835;
  t1843 = Sin(var1[17]);
  t1846 = t1559*t1279;
  t1847 = -1.*t1035*t1779;
  t1852 = t1846 + t1847;
  t838 = -0.15121*t729;
  t951 = t492 + t838;
  t1959 = Sin(var1[3]);
  t1309 = 0.15121*t729;
  t1336 = t492 + t1309;
  t1985 = Cos(var1[3]);
  t1976 = t61*t1959*t1279;
  t1996 = t1985*t1404;
  t2102 = t1976 + t1996;
  t2114 = t1985*t61;
  t2119 = -1.*t1959*t1279*t1404;
  t2127 = t2114 + t2119;
  t1646 = -1.*t1559;
  t1711 = 1. + t1646;
  t1814 = -1.*t1810;
  t1816 = 1. + t1814;
  t2195 = t70*t2102;
  t2196 = t729*t2127;
  t2199 = t2195 + t2196;
  t2217 = -1.*t43*t1035*t1959;
  t2218 = t1559*t2199;
  t2219 = t2217 + t2218;
  t2222 = -1.*t1559*t43*t1959;
  t2223 = -1.*t1035*t2199;
  t2225 = t2222 + t2223;
  t2281 = -1.*t1985*t61*t1279;
  t2282 = t1959*t1404;
  t2285 = t2281 + t2282;
  t2288 = t61*t1959;
  t2309 = t1985*t1279*t1404;
  t2311 = t2288 + t2309;
  t2340 = t70*t2285;
  t2342 = t729*t2311;
  t2343 = t2340 + t2342;
  t2352 = t1985*t43*t1035;
  t2354 = t1559*t2343;
  t2356 = t2352 + t2354;
  t2361 = t1559*t1985*t43;
  t2362 = -1.*t1035*t2343;
  t2367 = t2361 + t2362;
  p_output1[0]=0.28121*t1035*t1279 - 0.28121*t1711*t1779 - 0.50321*t1816*t1837 - 0.50321*t1843*t1852 - 0.19821*(t1810*t1837 - 1.*t1843*t1852) - 1.*t1336*t1404*t43 - 0.15121*(-1.*t1404*t43*t70 - 1.*t43*t61*t729) + t43*t61*t951 + var1[0] - 1.*var2[0];
  p_output1[1]=t1336*t2127 - 0.28121*t1711*t2199 - 0.50321*t1816*t2219 - 0.50321*t1843*t2225 - 0.19821*(t1810*t2219 - 1.*t1843*t2225) - 0.28121*t1035*t1959*t43 - 0.15121*(t2127*t70 - 1.*t2102*t729) + t2102*t951 + var1[1] - 1.*var2[1];
  p_output1[2]=t1336*t2311 - 0.28121*t1711*t2343 - 0.50321*t1816*t2356 - 0.50321*t1843*t2367 - 0.19821*(t1810*t2356 - 1.*t1843*t2367) + 0.28121*t1035*t1985*t43 - 0.15121*(t2311*t70 - 1.*t2285*t729) + t2285*t951 + var1[2] - 1.*var2[2];
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

#include "h_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
