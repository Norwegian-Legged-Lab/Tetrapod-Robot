/*
 * Automatically Generated from Mathematica.
 * Thu 9 Jun 2022 14:43:52 GMT+02:00
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
  double t287;
  double t346;
  double t359;
  double t357;
  double t360;
  double t288;
  double t308;
  double t370;
  double t379;
  double t380;
  double t382;
  double t393;
  double t358;
  double t361;
  double t362;
  double t332;
  double t399;
  double t400;
  double t401;
  double t408;
  double t412;
  double t418;
  double t420;
  double t430;
  double t444;
  double t445;
  double t447;
  double t344;
  double t345;
  double t371;
  double t372;
  double t500;
  double t504;
  double t509;
  double t431;
  double t441;
  double t523;
  double t527;
  double t540;
  double t551;
  double t552;
  double t553;
  double t462;
  double t470;
  double t471;
  double t473;
  double t482;
  double t490;
  double t496;
  double t512;
  double t546;
  double t554;
  double t555;
  double t556;
  double t557;
  double t558;
  double t559;
  double t561;
  double t562;
  double t563;
  double t564;
  t287 = Cos(var1[3]);
  t346 = Cos(var1[5]);
  t359 = Sin(var1[3]);
  t357 = Sin(var1[4]);
  t360 = Sin(var1[5]);
  t288 = Cos(var1[4]);
  t308 = Sin(var1[15]);
  t370 = Cos(var1[15]);
  t379 = t346*t359;
  t380 = t287*t357*t360;
  t382 = t379 + t380;
  t393 = Sin(var1[16]);
  t358 = -1.*t287*t346*t357;
  t361 = t359*t360;
  t362 = t358 + t361;
  t332 = Cos(var1[16]);
  t399 = t370*t287*t288;
  t400 = -1.*t308*t382;
  t401 = t399 + t400;
  t408 = Sin(var1[17]);
  t412 = -1.*t393*t362;
  t418 = t332*t401;
  t420 = t412 + t418;
  t430 = Cos(var1[17]);
  t444 = t332*t362;
  t445 = t393*t401;
  t447 = t444 + t445;
  t344 = -1.*t332;
  t345 = 1. + t344;
  t371 = -1.*t370;
  t372 = 1. + t371;
  t500 = t370*t357;
  t504 = t288*t308*t360;
  t509 = t500 + t504;
  t431 = -1.*t430;
  t441 = 1. + t431;
  t523 = -1.*t288*t346*t393;
  t527 = t332*t509;
  t540 = t523 + t527;
  t551 = t332*t288*t346;
  t552 = t393*t509;
  t553 = t551 + t552;
  t462 = -0.325*t345*t288*t346;
  t470 = 0.1575*t308*t357;
  t471 = 0.1575*t372*t288*t360;
  t473 = t308*t357;
  t482 = -1.*t370*t288*t360;
  t490 = t473 + t482;
  t496 = -0.2255*t490;
  t512 = 0.325*t393*t509;
  t546 = -0.575*t408*t540;
  t554 = -0.575*t441*t553;
  t555 = -1.*t408*t540;
  t556 = t430*t553;
  t557 = t555 + t556;
  t558 = -0.295*t557;
  t559 = t430*t540;
  t561 = t408*t553;
  t562 = t559 + t561;
  t563 = -0.0641*t562;
  t564 = -2. + var1[0] + t462 + t470 + t471 + t496 + t512 + t546 + t554 + t558 + t563;
  p_output1[0]=0.1575*t287*t288*t308 - 0.325*t345*t362 - 0.1575*t372*t382 - 0.2255*(t287*t288*t308 + t370*t382) + 0.325*t393*t401 - 0.575*t408*t420 - 0.575*t441*t447 - 0.0641*(t420*t430 + t408*t447) - 0.295*(-1.*t408*t420 + t430*t447) + var1[2] - 0.0015*t564*(1. + Tanh(100.*t564));
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

#include "u_rearSwingFootHeight1_DiagonalStance.hh"

namespace SymFunction
{

void u_rearSwingFootHeight1_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
