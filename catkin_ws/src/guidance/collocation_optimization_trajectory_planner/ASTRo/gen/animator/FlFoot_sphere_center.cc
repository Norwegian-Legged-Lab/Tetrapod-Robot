/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:24:58 GMT+02:00
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
  double t1185;
  double t1208;
  double t1230;
  double t1265;
  double t1276;
  double t1280;
  double t1206;
  double t1291;
  double t1359;
  double t1378;
  double t1379;
  double t1381;
  double t1427;
  double t1540;
  double t1751;
  double t1813;
  double t1824;
  double t1825;
  double t1846;
  double t1863;
  double t1871;
  double t1874;
  double t1281;
  double t1283;
  double t1918;
  double t1905;
  double t1315;
  double t1329;
  double t1907;
  double t1920;
  double t1921;
  double t1926;
  double t1934;
  double t1937;
  double t1370;
  double t1377;
  double t1756;
  double t1812;
  double t1974;
  double t1975;
  double t2006;
  double t2035;
  double t2042;
  double t2055;
  double t2059;
  double t2069;
  double t2071;
  double t2115;
  double t2118;
  double t2120;
  double t2207;
  double t2249;
  double t2258;
  double t2431;
  double t2436;
  double t2438;
  double t2459;
  double t2461;
  double t2488;
  double t2530;
  double t2550;
  double t2551;
  t1185 = Cos(var1[4]);
  t1208 = Cos(var1[6]);
  t1230 = -1.*t1208;
  t1265 = 1. + t1230;
  t1276 = 0.15121*t1265;
  t1280 = Sin(var1[6]);
  t1206 = Sin(var1[5]);
  t1291 = Cos(var1[5]);
  t1359 = Cos(var1[7]);
  t1378 = t1185*t1291*t1208;
  t1379 = -1.*t1185*t1206*t1280;
  t1381 = t1378 + t1379;
  t1427 = Sin(var1[4]);
  t1540 = Sin(var1[7]);
  t1751 = Cos(var1[8]);
  t1813 = t1359*t1381;
  t1824 = -1.*t1427*t1540;
  t1825 = t1813 + t1824;
  t1846 = t1359*t1427;
  t1863 = t1381*t1540;
  t1871 = t1846 + t1863;
  t1874 = Sin(var1[8]);
  t1281 = -0.15121*t1280;
  t1283 = t1276 + t1281;
  t1918 = Sin(var1[3]);
  t1905 = Cos(var1[3]);
  t1315 = 0.15121*t1280;
  t1329 = t1276 + t1315;
  t1907 = t1905*t1291;
  t1920 = -1.*t1918*t1427*t1206;
  t1921 = t1907 + t1920;
  t1926 = t1291*t1918*t1427;
  t1934 = t1905*t1206;
  t1937 = t1926 + t1934;
  t1370 = -1.*t1359;
  t1377 = 1. + t1370;
  t1756 = -1.*t1751;
  t1812 = 1. + t1756;
  t1974 = t1208*t1937;
  t1975 = t1921*t1280;
  t2006 = t1974 + t1975;
  t2035 = t1359*t2006;
  t2042 = t1185*t1918*t1540;
  t2055 = t2035 + t2042;
  t2059 = -1.*t1185*t1359*t1918;
  t2069 = t2006*t1540;
  t2071 = t2059 + t2069;
  t2115 = t1291*t1918;
  t2118 = t1905*t1427*t1206;
  t2120 = t2115 + t2118;
  t2207 = -1.*t1905*t1291*t1427;
  t2249 = t1918*t1206;
  t2258 = t2207 + t2249;
  t2431 = t1208*t2258;
  t2436 = t2120*t1280;
  t2438 = t2431 + t2436;
  t2459 = t1359*t2438;
  t2461 = -1.*t1905*t1185*t1540;
  t2488 = t2459 + t2461;
  t2530 = t1905*t1185*t1359;
  t2550 = t2438*t1540;
  t2551 = t2530 + t2550;
  p_output1[0]=-1.*t1185*t1206*t1283 + 0.15121*(-1.*t1185*t1206*t1208 - 1.*t1185*t1280*t1291) + t1185*t1291*t1329 + 0.28121*t1377*t1381 + 0.28121*t1427*t1540 + 0.50321*t1812*t1825 - 0.50321*t1871*t1874 + 0.23321*(t1751*t1825 + t1871*t1874) + var1[0];
  p_output1[1]=-0.28121*t1185*t1540*t1918 + t1283*t1921 + t1329*t1937 + 0.15121*(t1208*t1921 - 1.*t1280*t1937) + 0.28121*t1377*t2006 + 0.50321*t1812*t2055 - 0.50321*t1874*t2071 + 0.23321*(t1751*t2055 + t1874*t2071) + var1[1];
  p_output1[2]=0.28121*t1185*t1540*t1905 + t1283*t2120 + t1329*t2258 + 0.15121*(t1208*t2120 - 1.*t1280*t2258) + 0.28121*t1377*t2438 + 0.50321*t1812*t2488 - 0.50321*t1874*t2551 + 0.23321*(t1751*t2488 + t1874*t2551) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "FlFoot_sphere_center.hh"

namespace SymFunction
{

void FlFoot_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
