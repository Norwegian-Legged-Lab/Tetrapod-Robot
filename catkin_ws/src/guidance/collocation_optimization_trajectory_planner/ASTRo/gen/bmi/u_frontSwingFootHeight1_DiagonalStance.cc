/*
 * Automatically Generated from Mathematica.
 * Fri 27 May 2022 16:03:12 GMT+02:00
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
  double t3474;
  double t3434;
  double t3475;
  double t3448;
  double t3478;
  double t3524;
  double t3532;
  double t3533;
  double t3541;
  double t3542;
  double t3449;
  double t3497;
  double t3498;
  double t3568;
  double t3585;
  double t3591;
  double t3609;
  double t3614;
  double t3615;
  double t3618;
  double t3620;
  double t3633;
  double t3638;
  double t3644;
  double t3649;
  double t3650;
  double t3653;
  double t3656;
  double t3657;
  double t3658;
  t3474 = Cos(var1[3]);
  t3434 = Cos(var1[5]);
  t3475 = Sin(var1[4]);
  t3448 = Sin(var1[3]);
  t3478 = Sin(var1[5]);
  t3524 = Cos(var1[6]);
  t3532 = -1.*t3524;
  t3533 = 1. + t3532;
  t3541 = 0.15121*t3533;
  t3542 = Sin(var1[6]);
  t3449 = t3434*t3448;
  t3497 = t3474*t3475*t3478;
  t3498 = t3449 + t3497;
  t3568 = -1.*t3474*t3434*t3475;
  t3585 = t3448*t3478;
  t3591 = t3568 + t3585;
  t3609 = Cos(var1[7]);
  t3614 = t3524*t3591;
  t3615 = t3498*t3542;
  t3618 = t3614 + t3615;
  t3620 = Cos(var1[4]);
  t3633 = Sin(var1[7]);
  t3638 = Cos(var1[8]);
  t3644 = t3609*t3618;
  t3649 = -1.*t3474*t3620*t3633;
  t3650 = t3644 + t3649;
  t3653 = t3474*t3620*t3609;
  t3656 = t3618*t3633;
  t3657 = t3653 + t3656;
  t3658 = Sin(var1[8]);
  p_output1[0]=t3498*(t3541 - 0.15121*t3542) + (t3541 + 0.15121*t3542)*t3591 + 0.15121*(t3498*t3524 - 1.*t3542*t3591) + 0.28121*(1. - 1.*t3609)*t3618 + 0.28121*t3474*t3620*t3633 + 0.50321*(1. - 1.*t3638)*t3650 - 0.50321*t3657*t3658 + 0.19821*(t3638*t3650 + t3657*t3658) + var1[2];
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

#include "u_frontSwingFootHeight1_DiagonalStance.hh"

namespace SymFunction
{

void u_frontSwingFootHeight1_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
