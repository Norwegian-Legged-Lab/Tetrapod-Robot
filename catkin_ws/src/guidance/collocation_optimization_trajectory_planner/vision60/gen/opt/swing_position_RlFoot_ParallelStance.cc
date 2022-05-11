/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:48:22 GMT+02:00
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
  double t24706;
  double t25109;
  double t25161;
  double t25140;
  double t25169;
  double t25059;
  double t25072;
  double t25240;
  double t25320;
  double t25324;
  double t25329;
  double t25383;
  double t25155;
  double t25182;
  double t25189;
  double t25079;
  double t25399;
  double t25407;
  double t25408;
  double t25410;
  double t25414;
  double t25431;
  double t25623;
  double t25690;
  double t25723;
  double t25752;
  double t25756;
  t24706 = Cos(var1[3]);
  t25109 = Cos(var1[5]);
  t25161 = Sin(var1[3]);
  t25140 = Sin(var1[4]);
  t25169 = Sin(var1[5]);
  t25059 = Cos(var1[4]);
  t25072 = Sin(var1[9]);
  t25240 = Cos(var1[9]);
  t25320 = t25109*t25161;
  t25324 = t24706*t25140*t25169;
  t25329 = t25320 + t25324;
  t25383 = Sin(var1[10]);
  t25155 = -1.*t24706*t25109*t25140;
  t25182 = t25161*t25169;
  t25189 = t25155 + t25182;
  t25079 = Cos(var1[10]);
  t25399 = t25240*t24706*t25059;
  t25407 = -1.*t25072*t25329;
  t25408 = t25399 + t25407;
  t25410 = Sin(var1[11]);
  t25414 = -1.*t25383*t25189;
  t25431 = t25079*t25408;
  t25623 = t25414 + t25431;
  t25690 = Cos(var1[11]);
  t25723 = t25079*t25189;
  t25752 = t25383*t25408;
  t25756 = t25723 + t25752;
  p_output1[0]=-0.1575*t24706*t25059*t25072 - 0.325*(1. - 1.*t25079)*t25189 + 0.1575*(1. - 1.*t25240)*t25329 + 0.2255*(t24706*t25059*t25072 + t25240*t25329) + 0.325*t25383*t25408 - 0.575*t25410*t25623 - 0.575*(1. - 1.*t25690)*t25756 - 0.0641*(t25623*t25690 + t25410*t25756) - 0.295*(-1.*t25410*t25623 + t25690*t25756) + var1[2];
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

#include "swing_position_RlFoot_ParallelStance.hh"

namespace ParallelStance
{

void swing_position_RlFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
