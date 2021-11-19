/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:29 GMT+01:00
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
  double t61;
  double t304;
  double t376;
  double t937;
  double t1255;
  double t942;
  double t960;
  double t1276;
  double t527;
  double t990;
  double t1309;
  double t1352;
  double t1469;
  double t1789;
  double t1814;
  double t1826;
  double t709;
  double t744;
  double t1907;
  double t1937;
  double t1610;
  double t1782;
  double t1915;
  double t2032;
  double t2072;
  double t2111;
  double t2112;
  double t2118;
  double t1840;
  double t1842;
  double t2087;
  double t2127;
  double t2131;
  double t1859;
  double t1860;
  double t2167;
  double t2171;
  double t2194;
  double t2325;
  double t2331;
  double t2350;
  double t2402;
  double t2411;
  double t2412;
  double t2376;
  double t2414;
  double t2420;
  double t2432;
  double t2434;
  double t2436;
  t61 = Cos(var1[10]);
  t304 = -1.*t61;
  t376 = 1. + t304;
  t937 = Cos(var1[4]);
  t1255 = Cos(var1[9]);
  t942 = Cos(var1[5]);
  t960 = Sin(var1[9]);
  t1276 = Sin(var1[5]);
  t527 = Sin(var1[4]);
  t990 = -1.*t937*t942*t960;
  t1309 = -1.*t1255*t937*t1276;
  t1352 = t990 + t1309;
  t1469 = Sin(var1[10]);
  t1789 = t1255*t937*t942;
  t1814 = -1.*t937*t960*t1276;
  t1826 = t1789 + t1814;
  t709 = -1.6e-11*t376;
  t744 = 1. + t709;
  t1907 = Sin(var1[3]);
  t1937 = Cos(var1[3]);
  t1610 = 4.e-6*t1469;
  t1782 = 0. + t1610;
  t1915 = t942*t1907*t527;
  t2032 = t1937*t1276;
  t2072 = t1915 + t2032;
  t2111 = t1937*t942;
  t2112 = -1.*t1907*t527*t1276;
  t2118 = t2111 + t2112;
  t1840 = -1.*t376;
  t1842 = 1. + t1840;
  t2087 = -1.*t960*t2072;
  t2127 = t1255*t2118;
  t2131 = t2087 + t2127;
  t1859 = -1.*t1469;
  t1860 = 0. + t1859;
  t2167 = t1255*t2072;
  t2171 = t960*t2118;
  t2194 = t2167 + t2171;
  t2325 = -1.*t1937*t942*t527;
  t2331 = t1907*t1276;
  t2350 = t2325 + t2331;
  t2402 = t942*t1907;
  t2411 = t1937*t527*t1276;
  t2412 = t2402 + t2411;
  t2376 = -1.*t960*t2350;
  t2414 = t1255*t2412;
  t2420 = t2376 + t2414;
  t2432 = t1255*t2350;
  t2434 = t960*t2412;
  t2436 = t2432 + t2434;
  p_output1[0]=-1.*t1782*t1826 - 4.e-6*t376*t527 - 4.e-6*(t1826*t1860 + 4.e-6*t1352*t376 + t1842*t527) - 1.*t1352*t744;
  p_output1[1]=-1.*t1782*t2194 - 1.*t2131*t744 + 4.e-6*t1907*t376*t937 - 4.e-6*(t1860*t2194 + 4.e-6*t2131*t376 - 1.*t1842*t1907*t937);
  p_output1[2]=-1.*t1782*t2436 - 1.*t2420*t744 - 4.e-6*t1937*t376*t937 - 4.e-6*(t1860*t2436 + 4.e-6*t2420*t376 + t1842*t1937*t937);
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

#include "Joint_fr_hip_pitch_axis.hh"

namespace SymFunction
{

void Joint_fr_hip_pitch_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
