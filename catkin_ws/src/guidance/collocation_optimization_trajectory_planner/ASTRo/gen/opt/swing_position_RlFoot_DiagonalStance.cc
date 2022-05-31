/*
 * Automatically Generated from Mathematica.
 * Thu 26 May 2022 14:47:32 GMT+02:00
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
  double t685;
  double t747;
  double t748;
  double t749;
  double t775;
  double t780;
  double t782;
  double t785;
  double t783;
  double t786;
  double t784;
  double t787;
  double t788;
  double t792;
  double t796;
  double t800;
  double t737;
  double t745;
  double t809;
  double t821;
  double t822;
  double t823;
  double t826;
  double t829;
  double t830;
  double t831;
  double t834;
  double t835;
  double t839;
  double t840;
  t685 = Cos(var1[3]);
  t747 = Cos(var1[9]);
  t748 = -1.*t747;
  t749 = 1. + t748;
  t775 = Sin(var1[9]);
  t780 = 0.15121*t775;
  t782 = Cos(var1[5]);
  t785 = Sin(var1[3]);
  t783 = Sin(var1[4]);
  t786 = Sin(var1[5]);
  t784 = -1.*t685*t782*t783;
  t787 = t785*t786;
  t788 = t784 + t787;
  t792 = t782*t785;
  t796 = t685*t783*t786;
  t800 = t792 + t796;
  t737 = Cos(var1[4]);
  t745 = Sin(var1[10]);
  t809 = Cos(var1[10]);
  t821 = t747*t788;
  t822 = t775*t800;
  t823 = t821 + t822;
  t826 = Cos(var1[11]);
  t829 = t685*t737*t745;
  t830 = t809*t823;
  t831 = t829 + t830;
  t834 = Sin(var1[11]);
  t835 = t809*t685*t737;
  t839 = -1.*t745*t823;
  t840 = t835 + t839;
  p_output1[0]=0.28121*t685*t737*t745 + (-0.15121*t749 + t780)*t788 + (0.15121*t749 + t780)*t800 + 0.15121*(-1.*t775*t788 + t747*t800) - 0.28121*(1. - 1.*t809)*t823 - 0.50321*(1. - 1.*t826)*t831 - 0.50321*t834*t840 - 0.19821*(t826*t831 - 1.*t834*t840) + var1[2];
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

#include "swing_position_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void swing_position_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
