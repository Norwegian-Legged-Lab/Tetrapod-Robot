/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:55:03 GMT+02:00
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
  double t15674;
  double t15766;
  double t15771;
  double t15821;
  double t15932;
  double t15956;
  double t15964;
  double t15976;
  double t15968;
  double t15984;
  double t15972;
  double t15992;
  double t16069;
  double t16303;
  double t16315;
  double t16419;
  double t15750;
  double t15754;
  double t16629;
  double t16863;
  double t16864;
  double t16878;
  double t16887;
  double t16905;
  double t16906;
  double t16911;
  double t16914;
  double t16915;
  double t16916;
  double t16929;
  t15674 = Cos(var1[3]);
  t15766 = Cos(var1[9]);
  t15771 = -1.*t15766;
  t15821 = 1. + t15771;
  t15932 = Sin(var1[9]);
  t15956 = 0.15121*t15932;
  t15964 = Cos(var1[5]);
  t15976 = Sin(var1[3]);
  t15968 = Sin(var1[4]);
  t15984 = Sin(var1[5]);
  t15972 = -1.*t15674*t15964*t15968;
  t15992 = t15976*t15984;
  t16069 = t15972 + t15992;
  t16303 = t15964*t15976;
  t16315 = t15674*t15968*t15984;
  t16419 = t16303 + t16315;
  t15750 = Cos(var1[4]);
  t15754 = Sin(var1[10]);
  t16629 = Cos(var1[10]);
  t16863 = t15766*t16069;
  t16864 = t15932*t16419;
  t16878 = t16863 + t16864;
  t16887 = Cos(var1[11]);
  t16905 = t15674*t15750*t15754;
  t16906 = t16629*t16878;
  t16911 = t16905 + t16906;
  t16914 = Sin(var1[11]);
  t16915 = t16629*t15674*t15750;
  t16916 = -1.*t15754*t16878;
  t16929 = t16915 + t16916;
  p_output1[0]=0.28121*t15674*t15750*t15754 + (-0.15121*t15821 + t15956)*t16069 + (0.15121*t15821 + t15956)*t16419 + 0.15121*(-1.*t15932*t16069 + t15766*t16419) - 0.28121*(1. - 1.*t16629)*t16878 - 0.50321*(1. - 1.*t16887)*t16911 - 0.50321*t16914*t16929 - 0.19821*(t16887*t16911 - 1.*t16914*t16929) + var1[2];
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
