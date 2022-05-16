/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:03 GMT+01:00
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
  double t523;
  double t14;
  double t128;
  double t178;
  double t224;
  double t261;
  double t355;
  double t655;
  double t656;
  double t705;
  double t748;
  double t126;
  double t947;
  double t820;
  double t1136;
  double t1155;
  double t1187;
  double t1381;
  double t1384;
  double t1426;
  double t463;
  double t681;
  double t733;
  double t795;
  double t814;
  double t250;
  double t417;
  double t1765;
  double t879;
  double t918;
  double t1803;
  double t1029;
  double t1045;
  double t1055;
  double t1058;
  double t1065;
  double t1799;
  double t1809;
  double t1811;
  double t1826;
  double t1849;
  double t1865;
  double t1226;
  double t1347;
  double t1380;
  double t1881;
  double t1882;
  double t1889;
  double t1502;
  double t1515;
  double t1896;
  double t1904;
  double t1905;
  double t1658;
  double t1674;
  double t2164;
  double t2169;
  double t2186;
  double t2193;
  double t2233;
  double t2255;
  double t2344;
  double t2348;
  double t2372;
  double t2445;
  double t2483;
  double t2496;
  t523 = Cos(var1[10]);
  t14 = Cos(var1[4]);
  t128 = Cos(var1[9]);
  t178 = -1.*t128;
  t224 = 1. + t178;
  t261 = Sin(var1[9]);
  t355 = -0.15121*t261;
  t655 = -1.*t523;
  t656 = 1. + t655;
  t705 = -1. + t523;
  t748 = Sin(var1[10]);
  t126 = Cos(var1[5]);
  t947 = Sin(var1[5]);
  t820 = Sin(var1[4]);
  t1136 = -1.*t14*t126*t261;
  t1155 = -1.*t128*t14*t947;
  t1187 = t1136 + t1155;
  t1381 = t128*t14*t126;
  t1384 = -1.*t14*t261*t947;
  t1426 = t1381 + t1384;
  t463 = -4.9936e-13*var1[10];
  t681 = -0.038749*t656;
  t733 = 6.19984e-13*t705;
  t795 = -0.281210000004*t748;
  t814 = t463 + t681 + t733 + t795;
  t250 = 0.15121*t224;
  t417 = t250 + t355;
  t1765 = Sin(var1[3]);
  t879 = -0.15121*t224;
  t918 = t879 + t355;
  t1803 = Cos(var1[3]);
  t1029 = -1.2484e-7*var1[10];
  t1045 = 2.479936e-18*t656;
  t1055 = -1.54996e-7*t705;
  t1058 = 1.124840000016e-6*t748;
  t1065 = t1029 + t1045 + t1055 + t1058;
  t1799 = t126*t1765*t820;
  t1809 = t1803*t947;
  t1811 = t1799 + t1809;
  t1826 = t1803*t126;
  t1849 = -1.*t1765*t820*t947;
  t1865 = t1826 + t1849;
  t1226 = 0.281210000008499*t656;
  t1347 = -0.03874900000062*t748;
  t1380 = t1226 + t1347;
  t1881 = -1.*t261*t1811;
  t1882 = t128*t1865;
  t1889 = t1881 + t1882;
  t1502 = -1.000000000016*t656;
  t1515 = 1. + t1502;
  t1896 = t128*t1811;
  t1904 = t261*t1865;
  t1905 = t1896 + t1904;
  t1658 = 1.6e-11*t705;
  t1674 = 1. + t1658;
  t2164 = -1.*t1803*t126*t820;
  t2169 = t1765*t947;
  t2186 = t2164 + t2169;
  t2193 = t126*t1765;
  t2233 = t1803*t820*t947;
  t2255 = t2193 + t2233;
  t2344 = -1.*t261*t2186;
  t2348 = t128*t2255;
  t2372 = t2344 + t2348;
  t2445 = t128*t2186;
  t2483 = t261*t2255;
  t2496 = t2445 + t2483;
  p_output1[0]=t1065*t1187 + t1380*t1426 + t126*t14*t417 + t814*t820 - 0.03875*(4.e-6*t1187*t656 - 1.*t1426*t748 + t523*t820) - 0.22671*(t1187*t1674 + 4.e-6*t1426*t748 + 4.e-6*t656*t820) + 0.28121*(t1426*t1515 - 4.e-6*t1187*t748 + t748*t820) - 1.*t14*t918*t947 + var1[0];
  p_output1[1]=t1065*t1889 + t1380*t1905 + t1811*t417 + 0.28121*(t1515*t1905 - 1.*t14*t1765*t748 - 4.e-6*t1889*t748) - 0.03875*(-1.*t14*t1765*t523 + 4.e-6*t1889*t656 - 1.*t1905*t748) - 0.22671*(t1674*t1889 - 4.e-6*t14*t1765*t656 + 4.e-6*t1905*t748) - 1.*t14*t1765*t814 + t1865*t918 + var1[1];
  p_output1[2]=t1065*t2372 + t1380*t2496 + t2186*t417 + 0.28121*(t1515*t2496 + t14*t1803*t748 - 4.e-6*t2372*t748) - 0.03875*(t14*t1803*t523 + 4.e-6*t2372*t656 - 1.*t2496*t748) - 0.22671*(t1674*t2372 + 4.e-6*t14*t1803*t656 + 4.e-6*t2496*t748) + t14*t1803*t814 + t2255*t918 + var1[2];
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

#include "Joint_fr_hip_pitch_sphere_center.hh"

namespace SymFunction
{

void Joint_fr_hip_pitch_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
