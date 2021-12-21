/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:16:35 GMT+01:00
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
  double t113;
  double t243;
  double t285;
  double t313;
  double t336;
  double t373;
  double t152;
  double t450;
  double t407;
  double t408;
  double t836;
  double t893;
  double t800;
  double t491;
  double t506;
  double t819;
  double t917;
  double t948;
  double t969;
  double t1002;
  double t1008;
  double t1378;
  double t1434;
  double t1442;
  double t1504;
  double t1512;
  double t1527;
  t113 = Cos(var1[4]);
  t243 = Cos(var1[6]);
  t285 = -1.*t243;
  t313 = 1. + t285;
  t336 = 0.15121*t313;
  t373 = Sin(var1[6]);
  t152 = Sin(var1[5]);
  t450 = Cos(var1[5]);
  t407 = -0.15121*t373;
  t408 = t336 + t407;
  t836 = Sin(var1[3]);
  t893 = Sin(var1[4]);
  t800 = Cos(var1[3]);
  t491 = 0.15121*t373;
  t506 = t336 + t491;
  t819 = t800*t450;
  t917 = -1.*t836*t893*t152;
  t948 = t819 + t917;
  t969 = t450*t836*t893;
  t1002 = t800*t152;
  t1008 = t969 + t1002;
  t1378 = t450*t836;
  t1434 = t800*t893*t152;
  t1442 = t1378 + t1434;
  t1504 = -1.*t800*t450*t893;
  t1512 = t836*t152;
  t1527 = t1504 + t1512;
  p_output1[0]=-1.*t113*t152*t408 + 0.15121*(-1.*t113*t152*t373 + t113*t243*t450) + 0.15121*(-1.*t113*t152*t243 - 1.*t113*t373*t450) + t113*t450*t506 + var1[0];
  p_output1[1]=t1008*t506 + t408*t948 + 0.15121*(-1.*t1008*t373 + t243*t948) + 0.15121*(t1008*t243 + t373*t948) + var1[1];
  p_output1[2]=0.15121*(t1527*t243 + t1442*t373) + 0.15121*(t1442*t243 - 1.*t1527*t373) + t1442*t408 + t1527*t506 + var1[2];
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

#include "Joint_fl_hip_yaw_sphere_center.hh"

namespace SymFunction
{

void Joint_fl_hip_yaw_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
