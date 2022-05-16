/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:16 GMT+02:00
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
  double t672;
  double t2279;
  double t2475;
  double t2644;
  double t3039;
  double t3172;
  double t3572;
  double t3914;
  double t3770;
  double t3947;
  double t3833;
  double t3983;
  double t4010;
  double t4155;
  double t4174;
  double t4175;
  double t714;
  double t2087;
  double t4577;
  double t4671;
  double t4771;
  double t4793;
  double t4830;
  double t4934;
  double t5041;
  double t5049;
  double t5097;
  double t5106;
  double t5215;
  double t5244;
  t672 = Cos(var1[3]);
  t2279 = Cos(var1[12]);
  t2475 = -1.*t2279;
  t2644 = 1. + t2475;
  t3039 = Sin(var1[12]);
  t3172 = -0.15121*t3039;
  t3572 = Cos(var1[5]);
  t3914 = Sin(var1[3]);
  t3770 = Sin(var1[4]);
  t3947 = Sin(var1[5]);
  t3833 = -1.*t672*t3572*t3770;
  t3983 = t3914*t3947;
  t4010 = t3833 + t3983;
  t4155 = t3572*t3914;
  t4174 = t672*t3770*t3947;
  t4175 = t4155 + t4174;
  t714 = Cos(var1[4]);
  t2087 = Sin(var1[13]);
  t4577 = Cos(var1[13]);
  t4671 = t2279*t4010;
  t4771 = t3039*t4175;
  t4793 = t4671 + t4771;
  t4830 = Cos(var1[14]);
  t4934 = -1.*t672*t714*t2087;
  t5041 = t4577*t4793;
  t5049 = t4934 + t5041;
  t5097 = Sin(var1[14]);
  t5106 = t4577*t672*t714;
  t5215 = t2087*t4793;
  t5244 = t5106 + t5215;
  p_output1[0]=(0.15121*t2644 + t3172)*t4010 + (-0.15121*t2644 + t3172)*t4175 - 0.15121*(-1.*t3039*t4010 + t2279*t4175) + 0.28121*(1. - 1.*t4577)*t4793 + 0.50321*(1. - 1.*t4830)*t5049 - 0.50321*t5097*t5244 + 0.23321*(t4830*t5049 + t5097*t5244) + 0.28121*t2087*t672*t714 + var1[2];
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

#include "u_frontSwingFootHeight4_ParallelStance2.hh"

namespace SymFunction
{

void u_frontSwingFootHeight4_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
