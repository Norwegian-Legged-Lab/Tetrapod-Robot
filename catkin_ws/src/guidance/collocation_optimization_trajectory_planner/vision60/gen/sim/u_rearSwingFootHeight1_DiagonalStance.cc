/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:40:42 GMT+02:00
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
  double t3591;
  double t3617;
  double t3629;
  double t3624;
  double t3630;
  double t3592;
  double t3606;
  double t3639;
  double t3647;
  double t3652;
  double t3653;
  double t3678;
  double t3628;
  double t3631;
  double t3632;
  double t3612;
  double t3679;
  double t3680;
  double t3681;
  double t3695;
  double t3696;
  double t3697;
  double t3701;
  double t3703;
  double t3709;
  double t3717;
  double t3720;
  t3591 = Cos(var1[3]);
  t3617 = Cos(var1[5]);
  t3629 = Sin(var1[3]);
  t3624 = Sin(var1[4]);
  t3630 = Sin(var1[5]);
  t3592 = Cos(var1[4]);
  t3606 = Sin(var1[15]);
  t3639 = Cos(var1[15]);
  t3647 = t3617*t3629;
  t3652 = t3591*t3624*t3630;
  t3653 = t3647 + t3652;
  t3678 = Sin(var1[16]);
  t3628 = -1.*t3591*t3617*t3624;
  t3631 = t3629*t3630;
  t3632 = t3628 + t3631;
  t3612 = Cos(var1[16]);
  t3679 = t3639*t3591*t3592;
  t3680 = -1.*t3606*t3653;
  t3681 = t3679 + t3680;
  t3695 = Sin(var1[17]);
  t3696 = -1.*t3678*t3632;
  t3697 = t3612*t3681;
  t3701 = t3696 + t3697;
  t3703 = Cos(var1[17]);
  t3709 = t3612*t3632;
  t3717 = t3678*t3681;
  t3720 = t3709 + t3717;
  p_output1[0]=0.1575*t3591*t3592*t3606 - 0.325*(1. - 1.*t3612)*t3632 - 0.1575*(1. - 1.*t3639)*t3653 - 0.2255*(t3591*t3592*t3606 + t3639*t3653) + 0.325*t3678*t3681 - 0.575*t3695*t3701 - 0.575*(1. - 1.*t3703)*t3720 - 0.0641*(t3701*t3703 + t3695*t3720) - 0.295*(-1.*t3695*t3701 + t3703*t3720) + var1[2];
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
