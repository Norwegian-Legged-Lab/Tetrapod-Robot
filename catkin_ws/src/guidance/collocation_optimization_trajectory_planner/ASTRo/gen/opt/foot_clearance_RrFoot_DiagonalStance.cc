/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:36:07 GMT+02:00
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
  double t1780;
  double t2257;
  double t2288;
  double t2329;
  double t2495;
  double t2513;
  double t2544;
  double t2557;
  double t2547;
  double t2565;
  double t2550;
  double t2674;
  double t2788;
  double t2986;
  double t2988;
  double t2989;
  double t1789;
  double t1792;
  double t3396;
  double t3482;
  double t3778;
  double t3821;
  double t4570;
  double t5561;
  double t5562;
  double t5606;
  double t5614;
  double t5636;
  double t5663;
  double t5763;
  t1780 = Cos(var1[3]);
  t2257 = Cos(var1[15]);
  t2288 = -1.*t2257;
  t2329 = 1. + t2288;
  t2495 = -0.15121*t2329;
  t2513 = Sin(var1[15]);
  t2544 = Cos(var1[5]);
  t2557 = Sin(var1[3]);
  t2547 = Sin(var1[4]);
  t2565 = Sin(var1[5]);
  t2550 = -1.*t1780*t2544*t2547;
  t2674 = t2557*t2565;
  t2788 = t2550 + t2674;
  t2986 = t2544*t2557;
  t2988 = t1780*t2547*t2565;
  t2989 = t2986 + t2988;
  t1789 = Cos(var1[4]);
  t1792 = Sin(var1[16]);
  t3396 = Cos(var1[16]);
  t3482 = t2257*t2788;
  t3778 = t2513*t2989;
  t3821 = t3482 + t3778;
  t4570 = Cos(var1[17]);
  t5561 = t1780*t1789*t1792;
  t5562 = t3396*t3821;
  t5606 = t5561 + t5562;
  t5614 = Sin(var1[17]);
  t5636 = t3396*t1780*t1789;
  t5663 = -1.*t1792*t3821;
  t5763 = t5636 + t5663;
  p_output1[0]=0.28121*t1780*t1789*t1792 + (t2495 - 0.15121*t2513)*t2788 + (t2495 + 0.15121*t2513)*t2989 - 0.15121*(-1.*t2513*t2788 + t2257*t2989) - 0.28121*(1. - 1.*t3396)*t3821 - 0.50321*(1. - 1.*t4570)*t5606 - 0.50321*t5614*t5763 - 0.19821*(t4570*t5606 - 1.*t5614*t5763) + var1[2];
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

#include "foot_clearance_RrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void foot_clearance_RrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
