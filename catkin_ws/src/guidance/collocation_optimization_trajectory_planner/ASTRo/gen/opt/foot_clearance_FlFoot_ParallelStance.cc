/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:41 GMT+02:00
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
  double t1986;
  double t292;
  double t2004;
  double t1273;
  double t2213;
  double t2987;
  double t3913;
  double t4121;
  double t4469;
  double t4639;
  double t1476;
  double t2538;
  double t2673;
  double t10764;
  double t12448;
  double t15180;
  double t22945;
  double t24531;
  double t24586;
  double t25354;
  double t27169;
  double t27879;
  double t27930;
  double t28091;
  double t28142;
  double t28306;
  double t29420;
  double t29605;
  double t29620;
  double t29850;
  t1986 = Cos(var1[3]);
  t292 = Cos(var1[5]);
  t2004 = Sin(var1[4]);
  t1273 = Sin(var1[3]);
  t2213 = Sin(var1[5]);
  t2987 = Cos(var1[6]);
  t3913 = -1.*t2987;
  t4121 = 1. + t3913;
  t4469 = 0.15121*t4121;
  t4639 = Sin(var1[6]);
  t1476 = t292*t1273;
  t2538 = t1986*t2004*t2213;
  t2673 = t1476 + t2538;
  t10764 = -1.*t1986*t292*t2004;
  t12448 = t1273*t2213;
  t15180 = t10764 + t12448;
  t22945 = Cos(var1[7]);
  t24531 = t2987*t15180;
  t24586 = t2673*t4639;
  t25354 = t24531 + t24586;
  t27169 = Cos(var1[4]);
  t27879 = Sin(var1[7]);
  t27930 = Cos(var1[8]);
  t28091 = t22945*t25354;
  t28142 = -1.*t1986*t27169*t27879;
  t28306 = t28091 + t28142;
  t29420 = t1986*t27169*t22945;
  t29605 = t25354*t27879;
  t29620 = t29420 + t29605;
  t29850 = Sin(var1[8]);
  p_output1[0]=0.28121*(1. - 1.*t22945)*t25354 + 0.28121*t1986*t27169*t27879 + 0.50321*(1. - 1.*t27930)*t28306 - 0.50321*t29620*t29850 + 0.23321*(t27930*t28306 + t29620*t29850) + t2673*(t4469 - 0.15121*t4639) + t15180*(t4469 + 0.15121*t4639) + 0.15121*(t2673*t2987 - 1.*t15180*t4639) + var1[2];
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

#include "foot_clearance_FlFoot_ParallelStance.hh"

namespace ParallelStance
{

void foot_clearance_FlFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
