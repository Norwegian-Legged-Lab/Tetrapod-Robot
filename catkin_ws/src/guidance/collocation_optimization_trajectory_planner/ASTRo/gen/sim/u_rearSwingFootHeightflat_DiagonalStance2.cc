/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:54 GMT+02:00
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
  double t3180;
  double t6086;
  double t6096;
  double t6097;
  double t6105;
  double t6107;
  double t6118;
  double t6124;
  double t6119;
  double t6128;
  double t6120;
  double t6129;
  double t6130;
  double t6134;
  double t6135;
  double t6136;
  double t3227;
  double t3248;
  double t6144;
  double t6186;
  double t6187;
  double t6188;
  double t6191;
  double t6198;
  double t6199;
  double t6200;
  double t6206;
  double t6207;
  double t6210;
  double t6211;
  t3180 = Cos(var1[3]);
  t6086 = Cos(var1[9]);
  t6096 = -1.*t6086;
  t6097 = 1. + t6096;
  t6105 = Sin(var1[9]);
  t6107 = 0.15121*t6105;
  t6118 = Cos(var1[5]);
  t6124 = Sin(var1[3]);
  t6119 = Sin(var1[4]);
  t6128 = Sin(var1[5]);
  t6120 = -1.*t3180*t6118*t6119;
  t6129 = t6124*t6128;
  t6130 = t6120 + t6129;
  t6134 = t6118*t6124;
  t6135 = t3180*t6119*t6128;
  t6136 = t6134 + t6135;
  t3227 = Cos(var1[4]);
  t3248 = Sin(var1[10]);
  t6144 = Cos(var1[10]);
  t6186 = t6086*t6130;
  t6187 = t6105*t6136;
  t6188 = t6186 + t6187;
  t6191 = Cos(var1[11]);
  t6198 = t3180*t3227*t3248;
  t6199 = t6144*t6188;
  t6200 = t6198 + t6199;
  t6206 = Sin(var1[11]);
  t6207 = t6144*t3180*t3227;
  t6210 = -1.*t3248*t6188;
  t6211 = t6207 + t6210;
  p_output1[0]=0.28121*t3180*t3227*t3248 + (-0.15121*t6097 + t6107)*t6130 + (0.15121*t6097 + t6107)*t6136 + 0.15121*(-1.*t6105*t6130 + t6086*t6136) - 0.28121*(1. - 1.*t6144)*t6188 - 0.50321*(1. - 1.*t6191)*t6200 - 0.50321*t6206*t6211 - 0.19821*(t6191*t6200 - 1.*t6206*t6211) + var1[2];
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

#include "u_rearSwingFootHeightflat_DiagonalStance2.hh"

namespace SymFunction
{

void u_rearSwingFootHeightflat_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
