/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:40 GMT+02:00
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
  double t3568;
  double t3552;
  double t3570;
  double t3557;
  double t3574;
  double t3586;
  double t3590;
  double t3591;
  double t3592;
  double t3593;
  double t3558;
  double t3577;
  double t3581;
  double t3597;
  double t3598;
  double t3599;
  double t3607;
  double t3610;
  double t3611;
  double t3612;
  double t3615;
  double t3616;
  double t3622;
  double t3627;
  double t3628;
  double t3629;
  double t3664;
  double t3670;
  double t3692;
  double t3696;
  t3568 = Cos(var1[3]);
  t3552 = Cos(var1[5]);
  t3570 = Sin(var1[4]);
  t3557 = Sin(var1[3]);
  t3574 = Sin(var1[5]);
  t3586 = Cos(var1[6]);
  t3590 = -1.*t3586;
  t3591 = 1. + t3590;
  t3592 = 0.15121*t3591;
  t3593 = Sin(var1[6]);
  t3558 = t3552*t3557;
  t3577 = t3568*t3570*t3574;
  t3581 = t3558 + t3577;
  t3597 = -1.*t3568*t3552*t3570;
  t3598 = t3557*t3574;
  t3599 = t3597 + t3598;
  t3607 = Cos(var1[7]);
  t3610 = t3586*t3599;
  t3611 = t3581*t3593;
  t3612 = t3610 + t3611;
  t3615 = Cos(var1[4]);
  t3616 = Sin(var1[7]);
  t3622 = Cos(var1[8]);
  t3627 = t3607*t3612;
  t3628 = -1.*t3568*t3615*t3616;
  t3629 = t3627 + t3628;
  t3664 = t3568*t3615*t3607;
  t3670 = t3612*t3616;
  t3692 = t3664 + t3670;
  t3696 = Sin(var1[8]);
  p_output1[0]=t3581*(t3592 - 0.15121*t3593) + (t3592 + 0.15121*t3593)*t3599 + 0.15121*(t3581*t3586 - 1.*t3593*t3599) + 0.28121*(1. - 1.*t3607)*t3612 + 0.28121*t3568*t3615*t3616 + 0.50321*(1. - 1.*t3622)*t3629 - 0.50321*t3692*t3696 + 0.19821*(t3622*t3629 + t3692*t3696) + var1[2];
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

#include "u_frontSwingFootHeight2_ParallelStance.hh"

namespace SymFunction
{

void u_frontSwingFootHeight2_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
