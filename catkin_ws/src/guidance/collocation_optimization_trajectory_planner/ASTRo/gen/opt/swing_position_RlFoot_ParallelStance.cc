/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:01:24 GMT+02:00
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
  double t1368;
  double t2048;
  double t2054;
  double t2626;
  double t2833;
  double t3036;
  double t3251;
  double t3655;
  double t3274;
  double t3667;
  double t3339;
  double t3677;
  double t3696;
  double t4388;
  double t4699;
  double t4707;
  double t1867;
  double t1876;
  double t4863;
  double t5192;
  double t5213;
  double t5262;
  double t5439;
  double t5789;
  double t5858;
  double t6784;
  double t6851;
  double t7115;
  double t7127;
  double t7133;
  t1368 = Cos(var1[3]);
  t2048 = Cos(var1[9]);
  t2054 = -1.*t2048;
  t2626 = 1. + t2054;
  t2833 = Sin(var1[9]);
  t3036 = 0.15121*t2833;
  t3251 = Cos(var1[5]);
  t3655 = Sin(var1[3]);
  t3274 = Sin(var1[4]);
  t3667 = Sin(var1[5]);
  t3339 = -1.*t1368*t3251*t3274;
  t3677 = t3655*t3667;
  t3696 = t3339 + t3677;
  t4388 = t3251*t3655;
  t4699 = t1368*t3274*t3667;
  t4707 = t4388 + t4699;
  t1867 = Cos(var1[4]);
  t1876 = Sin(var1[10]);
  t4863 = Cos(var1[10]);
  t5192 = t2048*t3696;
  t5213 = t2833*t4707;
  t5262 = t5192 + t5213;
  t5439 = Cos(var1[11]);
  t5789 = t1368*t1867*t1876;
  t5858 = t4863*t5262;
  t6784 = t5789 + t5858;
  t6851 = Sin(var1[11]);
  t7115 = t4863*t1368*t1867;
  t7127 = -1.*t1876*t5262;
  t7133 = t7115 + t7127;
  p_output1[0]=0.28121*t1368*t1867*t1876 + (-0.15121*t2626 + t3036)*t3696 + (0.15121*t2626 + t3036)*t4707 + 0.15121*(-1.*t2833*t3696 + t2048*t4707) - 0.28121*(1. - 1.*t4863)*t5262 - 0.50321*(1. - 1.*t5439)*t6784 - 0.50321*t6851*t7133 - 0.19821*(t5439*t6784 - 1.*t6851*t7133) + var1[2];
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
