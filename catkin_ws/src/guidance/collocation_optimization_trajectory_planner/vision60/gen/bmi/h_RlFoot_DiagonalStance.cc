/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:23:40 GMT+02:00
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
  double t2912;
  double t2925;
  double t2926;
  double t2928;
  double t2938;
  double t2913;
  double t3034;
  double t2901;
  double t3035;
  double t3048;
  double t3049;
  double t3118;
  double t3122;
  double t3130;
  double t3134;
  double t3136;
  double t3157;
  double t3158;
  double t3159;
  double t2902;
  double t2904;
  double t3186;
  double t2929;
  double t2934;
  double t3189;
  double t3202;
  double t3206;
  double t3207;
  double t3188;
  double t3199;
  double t3200;
  double t3221;
  double t3222;
  double t3223;
  double t3152;
  double t3156;
  double t3228;
  double t3229;
  double t3230;
  double t3232;
  double t3237;
  double t3238;
  double t3263;
  double t3264;
  double t3268;
  double t3259;
  double t3260;
  double t3261;
  double t3285;
  double t3287;
  double t3288;
  double t3290;
  double t3291;
  double t3292;
  double t3294;
  double t3295;
  double t3296;
  t2912 = Cos(var1[4]);
  t2925 = Sin(var1[9]);
  t2926 = Sin(var1[4]);
  t2928 = Cos(var1[9]);
  t2938 = Sin(var1[5]);
  t2913 = Cos(var1[5]);
  t3034 = Sin(var1[10]);
  t2901 = Cos(var1[10]);
  t3035 = t2928*t2926;
  t3048 = t2912*t2925*t2938;
  t3049 = t3035 + t3048;
  t3118 = Sin(var1[11]);
  t3122 = -1.*t2912*t2913*t3034;
  t3130 = t2901*t3049;
  t3134 = t3122 + t3130;
  t3136 = Cos(var1[11]);
  t3157 = t2901*t2912*t2913;
  t3158 = t3034*t3049;
  t3159 = t3157 + t3158;
  t2902 = -1.*t2901;
  t2904 = 1. + t2902;
  t3186 = Sin(var1[3]);
  t2929 = -1.*t2928;
  t2934 = 1. + t2929;
  t3189 = Cos(var1[3]);
  t3202 = t3189*t2913;
  t3206 = -1.*t3186*t2926*t2938;
  t3207 = t3202 + t3206;
  t3188 = t2913*t3186*t2926;
  t3199 = t3189*t2938;
  t3200 = t3188 + t3199;
  t3221 = -1.*t2928*t2912*t3186;
  t3222 = -1.*t2925*t3207;
  t3223 = t3221 + t3222;
  t3152 = -1.*t3136;
  t3156 = 1. + t3152;
  t3228 = -1.*t3034*t3200;
  t3229 = t2901*t3223;
  t3230 = t3228 + t3229;
  t3232 = t2901*t3200;
  t3237 = t3034*t3223;
  t3238 = t3232 + t3237;
  t3263 = t2913*t3186;
  t3264 = t3189*t2926*t2938;
  t3268 = t3263 + t3264;
  t3259 = -1.*t3189*t2913*t2926;
  t3260 = t3186*t2938;
  t3261 = t3259 + t3260;
  t3285 = t2928*t3189*t2912;
  t3287 = -1.*t2925*t3268;
  t3288 = t3285 + t3287;
  t3290 = -1.*t3034*t3261;
  t3291 = t2901*t3288;
  t3292 = t3290 + t3291;
  t3294 = t2901*t3261;
  t3295 = t3034*t3288;
  t3296 = t3294 + t3295;
  p_output1[0]=-0.325*t2904*t2912*t2913 - 0.1575*t2925*t2926 - 0.1575*t2912*t2934*t2938 + 0.2255*(t2925*t2926 - 1.*t2912*t2928*t2938) + 0.325*t3034*t3049 - 0.575*t3118*t3134 - 0.575*t3156*t3159 - 0.0641*(t3134*t3136 + t3118*t3159) - 0.295*(-1.*t3118*t3134 + t3136*t3159) + var1[0] - 1.*var2[0];
  p_output1[1]=0.1575*t2912*t2925*t3186 - 0.325*t2904*t3200 + 0.1575*t2934*t3207 + 0.2255*(-1.*t2912*t2925*t3186 + t2928*t3207) + 0.325*t3034*t3223 - 0.575*t3118*t3230 - 0.575*t3156*t3238 - 0.0641*(t3136*t3230 + t3118*t3238) - 0.295*(-1.*t3118*t3230 + t3136*t3238) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.1575*t2912*t2925*t3189 - 0.325*t2904*t3261 + 0.1575*t2934*t3268 + 0.2255*(t2912*t2925*t3189 + t2928*t3268) + 0.325*t3034*t3288 - 0.575*t3118*t3292 - 0.575*t3156*t3296 - 0.0641*(t3136*t3292 + t3118*t3296) - 0.295*(-1.*t3118*t3292 + t3136*t3296) + var1[2] - 1.*var2[2];
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
