/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:06 GMT+02:00
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
  double t75;
  double t1804;
  double t1957;
  double t2868;
  double t3004;
  double t3005;
  double t1377;
  double t3049;
  double t3015;
  double t3034;
  double t3061;
  double t3114;
  double t3115;
  double t3118;
  double t3121;
  double t3128;
  double t3130;
  double t3131;
  double t3136;
  double t3137;
  double t3139;
  double t3141;
  double t2964;
  double t3006;
  double t3162;
  double t3046;
  double t3048;
  double t3180;
  double t3176;
  double t3184;
  double t3185;
  double t3190;
  double t3198;
  double t3201;
  double t3109;
  double t3113;
  double t3122;
  double t3123;
  double t3221;
  double t3222;
  double t3223;
  double t3225;
  double t3226;
  double t3227;
  double t3229;
  double t3230;
  double t3233;
  double t3248;
  double t3252;
  double t3254;
  double t3257;
  double t3258;
  double t3259;
  double t3266;
  double t3270;
  double t3271;
  double t3278;
  double t3279;
  double t3281;
  double t3283;
  double t3284;
  double t3285;
  t75 = Cos(var1[4]);
  t1804 = Cos(var1[9]);
  t1957 = -1.*t1804;
  t2868 = 1. + t1957;
  t3004 = Sin(var1[9]);
  t3005 = 0.15121*t3004;
  t1377 = Cos(var1[5]);
  t3049 = Sin(var1[5]);
  t3015 = Sin(var1[10]);
  t3034 = Sin(var1[4]);
  t3061 = Cos(var1[10]);
  t3114 = t1804*t75*t1377;
  t3115 = -1.*t75*t3004*t3049;
  t3118 = t3114 + t3115;
  t3121 = Cos(var1[11]);
  t3128 = t3015*t3034;
  t3130 = t3061*t3118;
  t3131 = t3128 + t3130;
  t3136 = Sin(var1[11]);
  t3137 = t3061*t3034;
  t3139 = -1.*t3015*t3118;
  t3141 = t3137 + t3139;
  t2964 = -0.15121*t2868;
  t3006 = t2964 + t3005;
  t3162 = Sin(var1[3]);
  t3046 = 0.15121*t2868;
  t3048 = t3046 + t3005;
  t3180 = Cos(var1[3]);
  t3176 = t1377*t3162*t3034;
  t3184 = t3180*t3049;
  t3185 = t3176 + t3184;
  t3190 = t3180*t1377;
  t3198 = -1.*t3162*t3034*t3049;
  t3201 = t3190 + t3198;
  t3109 = -1.*t3061;
  t3113 = 1. + t3109;
  t3122 = -1.*t3121;
  t3123 = 1. + t3122;
  t3221 = t1804*t3185;
  t3222 = t3004*t3201;
  t3223 = t3221 + t3222;
  t3225 = -1.*t75*t3015*t3162;
  t3226 = t3061*t3223;
  t3227 = t3225 + t3226;
  t3229 = -1.*t3061*t75*t3162;
  t3230 = -1.*t3015*t3223;
  t3233 = t3229 + t3230;
  t3248 = -1.*t3180*t1377*t3034;
  t3252 = t3162*t3049;
  t3254 = t3248 + t3252;
  t3257 = t1377*t3162;
  t3258 = t3180*t3034*t3049;
  t3259 = t3257 + t3258;
  t3266 = t1804*t3254;
  t3270 = t3004*t3259;
  t3271 = t3266 + t3270;
  t3278 = t3180*t75*t3015;
  t3279 = t3061*t3271;
  t3281 = t3278 + t3279;
  t3283 = t3061*t3180*t75;
  t3284 = -1.*t3015*t3271;
  t3285 = t3283 + t3284;
  p_output1[0]=0.28121*t3015*t3034 - 0.28121*t3113*t3118 - 0.50321*t3123*t3131 - 0.50321*t3136*t3141 - 0.19821*(t3121*t3131 - 1.*t3136*t3141) + t1377*t3006*t75 - 1.*t3048*t3049*t75 + 0.15121*(-1.*t1377*t3004*t75 - 1.*t1804*t3049*t75) + var1[0] - 1.*var2[0];
  p_output1[1]=t3006*t3185 + t3048*t3201 + 0.15121*(-1.*t3004*t3185 + t1804*t3201) - 0.28121*t3113*t3223 - 0.50321*t3123*t3227 - 0.50321*t3136*t3233 - 0.19821*(t3121*t3227 - 1.*t3136*t3233) - 0.28121*t3015*t3162*t75 + var1[1] - 1.*var2[1];
  p_output1[2]=t3006*t3254 + t3048*t3259 + 0.15121*(-1.*t3004*t3254 + t1804*t3259) - 0.28121*t3113*t3271 - 0.50321*t3123*t3281 - 0.50321*t3136*t3285 - 0.19821*(t3121*t3281 - 1.*t3136*t3285) + 0.28121*t3015*t3180*t75 + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
