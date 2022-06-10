/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:38 GMT+02:00
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
  double t404;
  double t249;
  double t747;
  double t349;
  double t1462;
  double t2133;
  double t2628;
  double t2656;
  double t2667;
  double t3006;
  double t355;
  double t1606;
  double t1839;
  double t3021;
  double t3050;
  double t3057;
  double t3104;
  double t3288;
  double t3295;
  double t3311;
  double t3352;
  double t3359;
  double t3376;
  double t3408;
  double t3410;
  double t3472;
  double t3491;
  double t3494;
  double t3496;
  double t3514;
  t404 = Cos(var1[3]);
  t249 = Cos(var1[5]);
  t747 = Sin(var1[4]);
  t349 = Sin(var1[3]);
  t1462 = Sin(var1[5]);
  t2133 = Cos(var1[6]);
  t2628 = -1.*t2133;
  t2656 = 1. + t2628;
  t2667 = 0.15121*t2656;
  t3006 = Sin(var1[6]);
  t355 = t249*t349;
  t1606 = t404*t747*t1462;
  t1839 = t355 + t1606;
  t3021 = -1.*t404*t249*t747;
  t3050 = t349*t1462;
  t3057 = t3021 + t3050;
  t3104 = Cos(var1[7]);
  t3288 = t2133*t3057;
  t3295 = t1839*t3006;
  t3311 = t3288 + t3295;
  t3352 = Cos(var1[4]);
  t3359 = Sin(var1[7]);
  t3376 = Cos(var1[8]);
  t3408 = t3104*t3311;
  t3410 = -1.*t404*t3352*t3359;
  t3472 = t3408 + t3410;
  t3491 = t404*t3352*t3104;
  t3494 = t3311*t3359;
  t3496 = t3491 + t3494;
  t3514 = Sin(var1[8]);
  p_output1[0]=t1839*(t2667 - 0.15121*t3006) + (t2667 + 0.15121*t3006)*t3057 + 0.15121*(t1839*t2133 - 1.*t3006*t3057) + 0.28121*(1. - 1.*t3104)*t3311 + 0.50321*(1. - 1.*t3376)*t3472 - 0.50321*t3496*t3514 + 0.19821*(t3376*t3472 + t3496*t3514) + 0.28121*t3352*t3359*t404 + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "u_frontSwingFootHeightflat_ParallelStance.hh"

namespace SymFunction
{

void u_frontSwingFootHeightflat_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
