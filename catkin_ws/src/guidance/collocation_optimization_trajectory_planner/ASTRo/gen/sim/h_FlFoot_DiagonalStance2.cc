/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:27 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t8732;
  double t14649;
  double t14671;
  double t14689;
  double t14724;
  double t14726;
  double t11277;
  double t14822;
  double t14884;
  double t14904;
  double t14910;
  double t14912;
  double t14927;
  double t14934;
  double t14950;
  double t15042;
  double t15050;
  double t15052;
  double t15065;
  double t15069;
  double t15079;
  double t15085;
  double t14744;
  double t14771;
  double t15160;
  double t15152;
  double t14831;
  double t14861;
  double t15156;
  double t15163;
  double t15166;
  double t15172;
  double t15177;
  double t15242;
  double t14886;
  double t14894;
  double t14954;
  double t15037;
  double t15263;
  double t15273;
  double t15274;
  double t15279;
  double t15285;
  double t15291;
  double t15294;
  double t15302;
  double t15304;
  double t15350;
  double t15356;
  double t15358;
  double t15368;
  double t15369;
  double t15374;
  double t15390;
  double t15391;
  double t15392;
  double t15395;
  double t15398;
  double t15401;
  double t15405;
  double t15408;
  double t15414;
  t8732 = Cos(var1[4]);
  t14649 = Cos(var1[6]);
  t14671 = -1.*t14649;
  t14689 = 1. + t14671;
  t14724 = 0.15121*t14689;
  t14726 = Sin(var1[6]);
  t11277 = Sin(var1[5]);
  t14822 = Cos(var1[5]);
  t14884 = Cos(var1[7]);
  t14904 = t8732*t14822*t14649;
  t14910 = -1.*t8732*t11277*t14726;
  t14912 = t14904 + t14910;
  t14927 = Sin(var1[4]);
  t14934 = Sin(var1[7]);
  t14950 = Cos(var1[8]);
  t15042 = t14884*t14912;
  t15050 = -1.*t14927*t14934;
  t15052 = t15042 + t15050;
  t15065 = t14884*t14927;
  t15069 = t14912*t14934;
  t15079 = t15065 + t15069;
  t15085 = Sin(var1[8]);
  t14744 = -0.15121*t14726;
  t14771 = t14724 + t14744;
  t15160 = Sin(var1[3]);
  t15152 = Cos(var1[3]);
  t14831 = 0.15121*t14726;
  t14861 = t14724 + t14831;
  t15156 = t15152*t14822;
  t15163 = -1.*t15160*t14927*t11277;
  t15166 = t15156 + t15163;
  t15172 = t14822*t15160*t14927;
  t15177 = t15152*t11277;
  t15242 = t15172 + t15177;
  t14886 = -1.*t14884;
  t14894 = 1. + t14886;
  t14954 = -1.*t14950;
  t15037 = 1. + t14954;
  t15263 = t14649*t15242;
  t15273 = t15166*t14726;
  t15274 = t15263 + t15273;
  t15279 = t14884*t15274;
  t15285 = t8732*t15160*t14934;
  t15291 = t15279 + t15285;
  t15294 = -1.*t8732*t14884*t15160;
  t15302 = t15274*t14934;
  t15304 = t15294 + t15302;
  t15350 = t14822*t15160;
  t15356 = t15152*t14927*t11277;
  t15358 = t15350 + t15356;
  t15368 = -1.*t15152*t14822*t14927;
  t15369 = t15160*t11277;
  t15374 = t15368 + t15369;
  t15390 = t14649*t15374;
  t15391 = t15358*t14726;
  t15392 = t15390 + t15391;
  t15395 = t14884*t15392;
  t15398 = -1.*t15152*t8732*t14934;
  t15401 = t15395 + t15398;
  t15405 = t15152*t8732*t14884;
  t15408 = t15392*t14934;
  t15414 = t15405 + t15408;
  p_output1[0]=0.28121*t14894*t14912 + 0.28121*t14927*t14934 + 0.50321*t15037*t15052 - 0.50321*t15079*t15085 + 0.19821*(t14950*t15052 + t15079*t15085) - 1.*t11277*t14771*t8732 + t14822*t14861*t8732 + 0.15121*(-1.*t11277*t14649*t8732 - 1.*t14726*t14822*t8732) + var1[0] - 1.*var2[0];
  p_output1[1]=t14771*t15166 + t14861*t15242 + 0.15121*(t14649*t15166 - 1.*t14726*t15242) + 0.28121*t14894*t15274 + 0.50321*t15037*t15291 - 0.50321*t15085*t15304 + 0.19821*(t14950*t15291 + t15085*t15304) - 0.28121*t14934*t15160*t8732 + var1[1] - 1.*var2[1];
  p_output1[2]=t14771*t15358 + t14861*t15374 + 0.15121*(t14649*t15358 - 1.*t14726*t15374) + 0.28121*t14894*t15392 + 0.50321*t15037*t15401 - 0.50321*t15085*t15414 + 0.19821*(t14950*t15401 + t15085*t15414) + 0.28121*t14934*t15152*t8732 + var1[2] - 1.*var2[2];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_FlFoot_DiagonalStance2.hh"

namespace SymFunction
{

void h_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
