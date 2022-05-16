/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:33 GMT+02:00
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
  double t3719;
  double t4694;
  double t5521;
  double t12120;
  double t15496;
  double t18029;
  double t4409;
  double t18653;
  double t21517;
  double t40140;
  double t40558;
  double t40995;
  double t44222;
  double t45658;
  double t45942;
  double t45958;
  double t45959;
  double t45963;
  double t45981;
  double t45985;
  double t45987;
  double t45994;
  double t18330;
  double t18543;
  double t46019;
  double t46016;
  double t18994;
  double t19034;
  double t46018;
  double t46020;
  double t46022;
  double t46029;
  double t46032;
  double t46033;
  double t21552;
  double t23037;
  double t45949;
  double t45952;
  double t46147;
  double t46148;
  double t46149;
  double t46157;
  double t46167;
  double t46169;
  double t46172;
  double t46175;
  double t46176;
  double t46201;
  double t46207;
  double t46212;
  double t46214;
  double t46215;
  double t46216;
  double t46232;
  double t46244;
  double t46248;
  double t46260;
  double t46261;
  double t46264;
  double t46271;
  double t46273;
  double t46274;
  t3719 = Cos(var1[4]);
  t4694 = Cos(var1[6]);
  t5521 = -1.*t4694;
  t12120 = 1. + t5521;
  t15496 = 0.15121*t12120;
  t18029 = Sin(var1[6]);
  t4409 = Sin(var1[5]);
  t18653 = Cos(var1[5]);
  t21517 = Cos(var1[7]);
  t40140 = t3719*t18653*t4694;
  t40558 = -1.*t3719*t4409*t18029;
  t40995 = t40140 + t40558;
  t44222 = Sin(var1[4]);
  t45658 = Sin(var1[7]);
  t45942 = Cos(var1[8]);
  t45958 = t21517*t40995;
  t45959 = -1.*t44222*t45658;
  t45963 = t45958 + t45959;
  t45981 = t21517*t44222;
  t45985 = t40995*t45658;
  t45987 = t45981 + t45985;
  t45994 = Sin(var1[8]);
  t18330 = -0.15121*t18029;
  t18543 = t15496 + t18330;
  t46019 = Sin(var1[3]);
  t46016 = Cos(var1[3]);
  t18994 = 0.15121*t18029;
  t19034 = t15496 + t18994;
  t46018 = t46016*t18653;
  t46020 = -1.*t46019*t44222*t4409;
  t46022 = t46018 + t46020;
  t46029 = t18653*t46019*t44222;
  t46032 = t46016*t4409;
  t46033 = t46029 + t46032;
  t21552 = -1.*t21517;
  t23037 = 1. + t21552;
  t45949 = -1.*t45942;
  t45952 = 1. + t45949;
  t46147 = t4694*t46033;
  t46148 = t46022*t18029;
  t46149 = t46147 + t46148;
  t46157 = t21517*t46149;
  t46167 = t3719*t46019*t45658;
  t46169 = t46157 + t46167;
  t46172 = -1.*t3719*t21517*t46019;
  t46175 = t46149*t45658;
  t46176 = t46172 + t46175;
  t46201 = t18653*t46019;
  t46207 = t46016*t44222*t4409;
  t46212 = t46201 + t46207;
  t46214 = -1.*t46016*t18653*t44222;
  t46215 = t46019*t4409;
  t46216 = t46214 + t46215;
  t46232 = t4694*t46216;
  t46244 = t46212*t18029;
  t46248 = t46232 + t46244;
  t46260 = t21517*t46248;
  t46261 = -1.*t46016*t3719*t45658;
  t46264 = t46260 + t46261;
  t46271 = t46016*t3719*t21517;
  t46273 = t46248*t45658;
  t46274 = t46271 + t46273;
  p_output1[0]=t18653*t19034*t3719 + 0.28121*t23037*t40995 - 1.*t18543*t3719*t4409 + 0.28121*t44222*t45658 + 0.50321*t45952*t45963 - 0.50321*t45987*t45994 + 0.23321*(t45942*t45963 + t45987*t45994) + 0.15121*(-1.*t18029*t18653*t3719 - 1.*t3719*t4409*t4694) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t3719*t45658*t46019 + t18543*t46022 + t19034*t46033 + 0.28121*t23037*t46149 + 0.50321*t45952*t46169 - 0.50321*t45994*t46176 + 0.23321*(t45942*t46169 + t45994*t46176) + 0.15121*(-1.*t18029*t46033 + t46022*t4694) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t3719*t45658*t46016 + t18543*t46212 + t19034*t46216 + 0.28121*t23037*t46248 + 0.50321*t45952*t46264 - 0.50321*t45994*t46274 + 0.23321*(t45942*t46264 + t45994*t46274) + 0.15121*(-1.*t18029*t46216 + t46212*t4694) + var1[2] - 1.*var2[2];
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

#include "h_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void h_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
