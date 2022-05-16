/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:42:38 GMT+02:00
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
  double t2818;
  double t4547;
  double t4876;
  double t4897;
  double t4942;
  double t4980;
  double t10520;
  double t10599;
  double t10537;
  double t10666;
  double t10578;
  double t10777;
  double t10793;
  double t11588;
  double t12297;
  double t12948;
  double t2883;
  double t4364;
  double t13097;
  double t13202;
  double t13209;
  double t13215;
  double t13227;
  double t14699;
  double t14720;
  double t14751;
  double t14759;
  double t14839;
  double t14874;
  double t14947;
  t2818 = Cos(var1[3]);
  t4547 = Cos(var1[15]);
  t4876 = -1.*t4547;
  t4897 = 1. + t4876;
  t4942 = -0.15121*t4897;
  t4980 = Sin(var1[15]);
  t10520 = Cos(var1[5]);
  t10599 = Sin(var1[3]);
  t10537 = Sin(var1[4]);
  t10666 = Sin(var1[5]);
  t10578 = -1.*t2818*t10520*t10537;
  t10777 = t10599*t10666;
  t10793 = t10578 + t10777;
  t11588 = t10520*t10599;
  t12297 = t2818*t10537*t10666;
  t12948 = t11588 + t12297;
  t2883 = Cos(var1[4]);
  t4364 = Sin(var1[16]);
  t13097 = Cos(var1[16]);
  t13202 = t4547*t10793;
  t13209 = t4980*t12948;
  t13215 = t13202 + t13209;
  t13227 = Cos(var1[17]);
  t14699 = t2818*t2883*t4364;
  t14720 = t13097*t13215;
  t14751 = t14699 + t14720;
  t14759 = Sin(var1[17]);
  t14839 = t13097*t2818*t2883;
  t14874 = -1.*t4364*t13215;
  t14947 = t14839 + t14874;
  p_output1[0]=-0.28121*(1. - 1.*t13097)*t13215 - 0.50321*(1. - 1.*t13227)*t14751 - 0.50321*t14759*t14947 - 0.23321*(t13227*t14751 - 1.*t14759*t14947) + 0.28121*t2818*t2883*t4364 + t10793*(t4942 - 0.15121*t4980) + t12948*(t4942 + 0.15121*t4980) - 0.15121*(t12948*t4547 - 1.*t10793*t4980) + var1[2];
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

namespace DiagonalStance
{

void u_rearSwingFootHeight1_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
