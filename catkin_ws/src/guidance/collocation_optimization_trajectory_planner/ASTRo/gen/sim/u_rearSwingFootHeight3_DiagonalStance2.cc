/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:23 GMT+02:00
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
  double t3833;
  double t3901;
  double t3905;
  double t3907;
  double t3921;
  double t3922;
  double t3927;
  double t3934;
  double t3928;
  double t3935;
  double t3933;
  double t3945;
  double t3981;
  double t6028;
  double t6029;
  double t6070;
  double t3834;
  double t3890;
  double t6273;
  double t6334;
  double t6345;
  double t6346;
  double t6739;
  double t6804;
  double t6940;
  double t6950;
  double t7488;
  double t7489;
  double t7517;
  double t7529;
  t3833 = Cos(var1[3]);
  t3901 = Cos(var1[9]);
  t3905 = -1.*t3901;
  t3907 = 1. + t3905;
  t3921 = Sin(var1[9]);
  t3922 = 0.15121*t3921;
  t3927 = Cos(var1[5]);
  t3934 = Sin(var1[3]);
  t3928 = Sin(var1[4]);
  t3935 = Sin(var1[5]);
  t3933 = -1.*t3833*t3927*t3928;
  t3945 = t3934*t3935;
  t3981 = t3933 + t3945;
  t6028 = t3927*t3934;
  t6029 = t3833*t3928*t3935;
  t6070 = t6028 + t6029;
  t3834 = Cos(var1[4]);
  t3890 = Sin(var1[10]);
  t6273 = Cos(var1[10]);
  t6334 = t3901*t3981;
  t6345 = t3921*t6070;
  t6346 = t6334 + t6345;
  t6739 = Cos(var1[11]);
  t6804 = t3833*t3834*t3890;
  t6940 = t6273*t6346;
  t6950 = t6804 + t6940;
  t7488 = Sin(var1[11]);
  t7489 = t6273*t3833*t3834;
  t7517 = -1.*t3890*t6346;
  t7529 = t7489 + t7517;
  p_output1[0]=0.28121*t3833*t3834*t3890 + (-0.15121*t3907 + t3922)*t3981 + (0.15121*t3907 + t3922)*t6070 + 0.15121*(-1.*t3921*t3981 + t3901*t6070) - 0.28121*(1. - 1.*t6273)*t6346 - 0.50321*(1. - 1.*t6739)*t6950 - 0.50321*t7488*t7529 - 0.23321*(t6739*t6950 - 1.*t7488*t7529) + var1[2];
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

#include "u_rearSwingFootHeight3_DiagonalStance2.hh"

namespace SymFunction
{

void u_rearSwingFootHeight3_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
