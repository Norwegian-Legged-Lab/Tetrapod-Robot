/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:48:26 GMT+02:00
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
  double t25880;
  double t26405;
  double t26435;
  double t26420;
  double t26456;
  double t26251;
  double t26357;
  double t26473;
  double t26482;
  double t26486;
  double t26510;
  double t26528;
  double t26434;
  double t26468;
  double t26470;
  double t26360;
  double t26543;
  double t26561;
  double t26566;
  double t26576;
  double t26579;
  double t26580;
  double t26587;
  double t26590;
  double t26616;
  double t26622;
  double t26631;
  t25880 = Cos(var1[3]);
  t26405 = Cos(var1[5]);
  t26435 = Sin(var1[3]);
  t26420 = Sin(var1[4]);
  t26456 = Sin(var1[5]);
  t26251 = Cos(var1[4]);
  t26357 = Sin(var1[15]);
  t26473 = Cos(var1[15]);
  t26482 = t26405*t26435;
  t26486 = t25880*t26420*t26456;
  t26510 = t26482 + t26486;
  t26528 = Sin(var1[16]);
  t26434 = -1.*t25880*t26405*t26420;
  t26468 = t26435*t26456;
  t26470 = t26434 + t26468;
  t26360 = Cos(var1[16]);
  t26543 = t26473*t25880*t26251;
  t26561 = -1.*t26357*t26510;
  t26566 = t26543 + t26561;
  t26576 = Sin(var1[17]);
  t26579 = -1.*t26528*t26470;
  t26580 = t26360*t26566;
  t26587 = t26579 + t26580;
  t26590 = Cos(var1[17]);
  t26616 = t26360*t26470;
  t26622 = t26528*t26566;
  t26631 = t26616 + t26622;
  p_output1[0]=0.1575*t25880*t26251*t26357 - 0.325*(1. - 1.*t26360)*t26470 - 0.1575*(1. - 1.*t26473)*t26510 - 0.2255*(t25880*t26251*t26357 + t26473*t26510) + 0.325*t26528*t26566 - 0.575*t26576*t26587 - 0.575*(1. - 1.*t26590)*t26631 - 0.0641*(t26587*t26590 + t26576*t26631) - 0.295*(-1.*t26576*t26587 + t26590*t26631) + var1[2];
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

#include "swing_position_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void swing_position_RrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
