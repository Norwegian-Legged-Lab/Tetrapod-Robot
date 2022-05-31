/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:16 GMT+02:00
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
  double t3168;
  double t4342;
  double t4447;
  double t4448;
  double t4457;
  double t4493;
  double t4615;
  double t4650;
  double t4646;
  double t4776;
  double t4649;
  double t4805;
  double t4843;
  double t4882;
  double t4891;
  double t4905;
  double t3504;
  double t4178;
  double t4999;
  double t5015;
  double t5018;
  double t5019;
  double t5021;
  double t5041;
  double t5056;
  double t5069;
  double t5140;
  double t5142;
  double t5144;
  double t5160;
  t3168 = Cos(var1[3]);
  t4342 = Cos(var1[15]);
  t4447 = -1.*t4342;
  t4448 = 1. + t4447;
  t4457 = -0.15121*t4448;
  t4493 = Sin(var1[15]);
  t4615 = Cos(var1[5]);
  t4650 = Sin(var1[3]);
  t4646 = Sin(var1[4]);
  t4776 = Sin(var1[5]);
  t4649 = -1.*t3168*t4615*t4646;
  t4805 = t4650*t4776;
  t4843 = t4649 + t4805;
  t4882 = t4615*t4650;
  t4891 = t3168*t4646*t4776;
  t4905 = t4882 + t4891;
  t3504 = Cos(var1[4]);
  t4178 = Sin(var1[16]);
  t4999 = Cos(var1[16]);
  t5015 = t4342*t4843;
  t5018 = t4493*t4905;
  t5019 = t5015 + t5018;
  t5021 = Cos(var1[17]);
  t5041 = t3168*t3504*t4178;
  t5056 = t4999*t5019;
  t5069 = t5041 + t5056;
  t5140 = Sin(var1[17]);
  t5142 = t4999*t3168*t3504;
  t5144 = -1.*t4178*t5019;
  t5160 = t5142 + t5144;
  p_output1[0]=0.28121*t3168*t3504*t4178 + (t4457 - 0.15121*t4493)*t4843 + (t4457 + 0.15121*t4493)*t4905 - 0.15121*(-1.*t4493*t4843 + t4342*t4905) - 0.28121*(1. - 1.*t4999)*t5019 - 0.50321*(1. - 1.*t5021)*t5069 - 0.50321*t5140*t5160 - 0.19821*(t5021*t5069 - 1.*t5140*t5160) + var1[2];
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

#include "u_rearSwingFootHeight1_DiagonalStance.hh"

namespace SymFunction
{

void u_rearSwingFootHeight1_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
