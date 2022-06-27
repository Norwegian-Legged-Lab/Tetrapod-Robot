/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:12 GMT+02:00
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
  double t3669;
  double t17070;
  double t19547;
  double t19576;
  double t19591;
  double t19597;
  double t19602;
  double t19676;
  double t19674;
  double t19693;
  double t19675;
  double t19694;
  double t19695;
  double t19710;
  double t19721;
  double t19723;
  double t16411;
  double t16412;
  double t19732;
  double t19738;
  double t19739;
  double t19740;
  double t19749;
  double t19752;
  double t19753;
  double t19754;
  double t19760;
  double t19761;
  double t19762;
  double t19763;
  t3669 = Cos(var1[3]);
  t17070 = Cos(var1[12]);
  t19547 = -1.*t17070;
  t19576 = 1. + t19547;
  t19591 = Sin(var1[12]);
  t19597 = -0.15121*t19591;
  t19602 = Cos(var1[5]);
  t19676 = Sin(var1[3]);
  t19674 = Sin(var1[4]);
  t19693 = Sin(var1[5]);
  t19675 = -1.*t3669*t19602*t19674;
  t19694 = t19676*t19693;
  t19695 = t19675 + t19694;
  t19710 = t19602*t19676;
  t19721 = t3669*t19674*t19693;
  t19723 = t19710 + t19721;
  t16411 = Cos(var1[4]);
  t16412 = Sin(var1[13]);
  t19732 = Cos(var1[13]);
  t19738 = t17070*t19695;
  t19739 = t19591*t19723;
  t19740 = t19738 + t19739;
  t19749 = Cos(var1[14]);
  t19752 = -1.*t3669*t16411*t16412;
  t19753 = t19732*t19740;
  t19754 = t19752 + t19753;
  t19760 = Sin(var1[14]);
  t19761 = t19732*t3669*t16411;
  t19762 = t16412*t19740;
  t19763 = t19761 + t19762;
  p_output1[0]=(0.15121*t19576 + t19597)*t19695 + (-0.15121*t19576 + t19597)*t19723 - 0.15121*(-1.*t19591*t19695 + t17070*t19723) + 0.28121*(1. - 1.*t19732)*t19740 + 0.50321*(1. - 1.*t19749)*t19754 - 0.50321*t19760*t19763 + 0.19821*(t19749*t19754 + t19760*t19763) + 0.28121*t16411*t16412*t3669 + var1[2];
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

#include "u_frontSwingFootHeightflat_ParallelStance2.hh"

namespace SymFunction
{

void u_frontSwingFootHeightflat_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
