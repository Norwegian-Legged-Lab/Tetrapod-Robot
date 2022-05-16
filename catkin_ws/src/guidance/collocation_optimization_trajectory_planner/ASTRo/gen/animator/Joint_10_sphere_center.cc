/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:24:45 GMT+02:00
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
  double t119;
  double t768;
  double t837;
  double t946;
  double t1034;
  double t1110;
  double t495;
  double t1267;
  double t991;
  double t1216;
  double t1234;
  double t1251;
  double t1402;
  double t1385;
  double t1390;
  double t1396;
  double t1407;
  double t1411;
  double t1421;
  double t1429;
  double t1440;
  double t1470;
  double t1471;
  double t1473;
  double t1475;
  double t1477;
  double t1482;
  t119 = Cos(var1[4]);
  t768 = Cos(var1[12]);
  t837 = -1.*t768;
  t946 = 1. + t837;
  t1034 = Sin(var1[12]);
  t1110 = -0.15121*t1034;
  t495 = Cos(var1[5]);
  t1267 = Sin(var1[5]);
  t991 = 0.15121*t946;
  t1216 = t991 + t1110;
  t1234 = -0.15121*t946;
  t1251 = t1234 + t1110;
  t1402 = Cos(var1[3]);
  t1385 = Sin(var1[3]);
  t1390 = Sin(var1[4]);
  t1396 = t495*t1385*t1390;
  t1407 = t1402*t1267;
  t1411 = t1396 + t1407;
  t1421 = t1402*t495;
  t1429 = -1.*t1385*t1390*t1267;
  t1440 = t1421 + t1429;
  t1470 = -1.*t1402*t495*t1390;
  t1471 = t1385*t1267;
  t1473 = t1470 + t1471;
  t1475 = t495*t1385;
  t1477 = t1402*t1390*t1267;
  t1482 = t1475 + t1477;
  p_output1[0]=-1.*t119*t1251*t1267 + t119*t1216*t495 - 0.15121*(-1.*t1034*t119*t495 - 1.*t119*t1267*t768) + 0.15121*(-1.*t1034*t119*t1267 + t119*t495*t768) + var1[0];
  p_output1[1]=t1216*t1411 + t1251*t1440 + 0.15121*(t1034*t1440 + t1411*t768) - 0.15121*(-1.*t1034*t1411 + t1440*t768) + var1[1];
  p_output1[2]=t1216*t1473 + t1251*t1482 + 0.15121*(t1034*t1482 + t1473*t768) - 0.15121*(-1.*t1034*t1473 + t1482*t768) + var1[2];
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

#include "Joint_10_sphere_center.hh"

namespace SymFunction
{

void Joint_10_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
