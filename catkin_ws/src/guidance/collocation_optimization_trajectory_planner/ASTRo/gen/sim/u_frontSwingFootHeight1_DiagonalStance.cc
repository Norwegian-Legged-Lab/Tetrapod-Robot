/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:26 GMT+02:00
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
  double t22382;
  double t5072;
  double t24799;
  double t5085;
  double t38333;
  double t38396;
  double t38398;
  double t38400;
  double t38402;
  double t38412;
  double t5234;
  double t38335;
  double t38341;
  double t38431;
  double t38432;
  double t38483;
  double t38568;
  double t38627;
  double t38638;
  double t38659;
  double t38666;
  double t38670;
  double t38675;
  double t38705;
  double t38707;
  double t38709;
  double t38814;
  double t38815;
  double t38816;
  double t38836;
  t22382 = Cos(var1[3]);
  t5072 = Cos(var1[5]);
  t24799 = Sin(var1[4]);
  t5085 = Sin(var1[3]);
  t38333 = Sin(var1[5]);
  t38396 = Cos(var1[6]);
  t38398 = -1.*t38396;
  t38400 = 1. + t38398;
  t38402 = 0.15121*t38400;
  t38412 = Sin(var1[6]);
  t5234 = t5072*t5085;
  t38335 = t22382*t24799*t38333;
  t38341 = t5234 + t38335;
  t38431 = -1.*t22382*t5072*t24799;
  t38432 = t5085*t38333;
  t38483 = t38431 + t38432;
  t38568 = Cos(var1[7]);
  t38627 = t38396*t38483;
  t38638 = t38341*t38412;
  t38659 = t38627 + t38638;
  t38666 = Cos(var1[4]);
  t38670 = Sin(var1[7]);
  t38675 = Cos(var1[8]);
  t38705 = t38568*t38659;
  t38707 = -1.*t22382*t38666*t38670;
  t38709 = t38705 + t38707;
  t38814 = t22382*t38666*t38568;
  t38815 = t38659*t38670;
  t38816 = t38814 + t38815;
  t38836 = Sin(var1[8]);
  p_output1[0]=t38341*(t38402 - 0.15121*t38412) + (t38402 + 0.15121*t38412)*t38483 + 0.15121*(t38341*t38396 - 1.*t38412*t38483) + 0.28121*(1. - 1.*t38568)*t38659 + 0.28121*t22382*t38666*t38670 + 0.50321*(1. - 1.*t38675)*t38709 - 0.50321*t38816*t38836 + 0.23321*(t38675*t38709 + t38816*t38836) + var1[2];
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

#include "u_frontSwingFootHeight1_DiagonalStance.hh"

namespace SymFunction
{

void u_frontSwingFootHeight1_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
