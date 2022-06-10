/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:24 GMT+02:00
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
  double t545;
  double t12187;
  double t12189;
  double t12397;
  double t12624;
  double t15819;
  double t16530;
  double t17038;
  double t16589;
  double t17043;
  double t16705;
  double t17046;
  double t17080;
  double t17266;
  double t17279;
  double t17320;
  double t843;
  double t893;
  double t17612;
  double t18438;
  double t18450;
  double t18451;
  double t20126;
  double t20160;
  double t20164;
  double t20193;
  double t20216;
  double t20219;
  double t20220;
  double t20223;
  t545 = Cos(var1[3]);
  t12187 = Cos(var1[12]);
  t12189 = -1.*t12187;
  t12397 = 1. + t12189;
  t12624 = Sin(var1[12]);
  t15819 = -0.15121*t12624;
  t16530 = Cos(var1[5]);
  t17038 = Sin(var1[3]);
  t16589 = Sin(var1[4]);
  t17043 = Sin(var1[5]);
  t16705 = -1.*t545*t16530*t16589;
  t17046 = t17038*t17043;
  t17080 = t16705 + t17046;
  t17266 = t16530*t17038;
  t17279 = t545*t16589*t17043;
  t17320 = t17266 + t17279;
  t843 = Cos(var1[4]);
  t893 = Sin(var1[13]);
  t17612 = Cos(var1[13]);
  t18438 = t12187*t17080;
  t18450 = t12624*t17320;
  t18451 = t18438 + t18450;
  t20126 = Cos(var1[14]);
  t20160 = -1.*t545*t843*t893;
  t20164 = t17612*t18451;
  t20193 = t20160 + t20164;
  t20216 = Sin(var1[14]);
  t20219 = t17612*t545*t843;
  t20220 = t893*t18451;
  t20223 = t20219 + t20220;
  p_output1[0]=(0.15121*t12397 + t15819)*t17080 + (-0.15121*t12397 + t15819)*t17320 - 0.15121*(-1.*t12624*t17080 + t12187*t17320) + 0.28121*(1. - 1.*t17612)*t18451 + 0.50321*(1. - 1.*t20126)*t20193 - 0.50321*t20216*t20223 + 0.19821*(t20126*t20193 + t20216*t20223) + 0.28121*t545*t843*t893 + var1[2];
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
