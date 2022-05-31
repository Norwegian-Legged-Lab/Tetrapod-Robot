/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 17:22:44 GMT+02:00
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
  double t3907;
  double t3981;
  double t6070;
  double t6273;
  double t6334;
  double t6739;
  double t6950;
  double t7337;
  double t7295;
  double t7338;
  double t7311;
  double t7393;
  double t7394;
  double t7489;
  double t7517;
  double t7521;
  double t3921;
  double t3935;
  double t7607;
  double t7650;
  double t7651;
  double t7653;
  double t7662;
  double t7666;
  double t7667;
  double t7675;
  double t7680;
  double t7681;
  double t7683;
  double t7684;
  t3907 = Cos(var1[3]);
  t3981 = Cos(var1[15]);
  t6070 = -1.*t3981;
  t6273 = 1. + t6070;
  t6334 = -0.15121*t6273;
  t6739 = Sin(var1[15]);
  t6950 = Cos(var1[5]);
  t7337 = Sin(var1[3]);
  t7295 = Sin(var1[4]);
  t7338 = Sin(var1[5]);
  t7311 = -1.*t3907*t6950*t7295;
  t7393 = t7337*t7338;
  t7394 = t7311 + t7393;
  t7489 = t6950*t7337;
  t7517 = t3907*t7295*t7338;
  t7521 = t7489 + t7517;
  t3921 = Cos(var1[4]);
  t3935 = Sin(var1[16]);
  t7607 = Cos(var1[16]);
  t7650 = t3981*t7394;
  t7651 = t6739*t7521;
  t7653 = t7650 + t7651;
  t7662 = Cos(var1[17]);
  t7666 = t3907*t3921*t3935;
  t7667 = t7607*t7653;
  t7675 = t7666 + t7667;
  t7680 = Sin(var1[17]);
  t7681 = t7607*t3907*t3921;
  t7683 = -1.*t3935*t7653;
  t7684 = t7681 + t7683;
  p_output1[0]=0.28121*t3907*t3921*t3935 + (t6334 - 0.15121*t6739)*t7394 + (t6334 + 0.15121*t6739)*t7521 - 0.15121*(-1.*t6739*t7394 + t3981*t7521) - 0.28121*(1. - 1.*t7607)*t7653 - 0.50321*(1. - 1.*t7662)*t7675 - 0.50321*t7680*t7684 - 0.23321*(t7662*t7675 - 1.*t7680*t7684) + var1[2];
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
