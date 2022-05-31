/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:11 GMT+02:00
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
  double t2983;
  double t3024;
  double t3025;
  double t3033;
  double t3034;
  double t3053;
  double t3023;
  double t3078;
  double t3068;
  double t3071;
  double t3137;
  double t3141;
  double t3142;
  double t3147;
  double t3150;
  double t3156;
  double t3158;
  double t3160;
  double t3172;
  double t3173;
  double t3174;
  double t3177;
  double t3064;
  double t3065;
  double t3204;
  double t3073;
  double t3077;
  double t3217;
  double t3209;
  double t3220;
  double t3225;
  double t3231;
  double t3235;
  double t3239;
  double t3138;
  double t3140;
  double t3153;
  double t3155;
  double t3245;
  double t3246;
  double t3247;
  double t3249;
  double t3252;
  double t3254;
  double t3257;
  double t3260;
  double t3262;
  double t3277;
  double t3278;
  double t3279;
  double t3281;
  double t3282;
  double t3283;
  double t3298;
  double t3300;
  double t3301;
  double t3303;
  double t3304;
  double t3305;
  double t3310;
  double t3311;
  double t3312;
  t2983 = Cos(var1[4]);
  t3024 = Cos(var1[15]);
  t3025 = -1.*t3024;
  t3033 = 1. + t3025;
  t3034 = -0.15121*t3033;
  t3053 = Sin(var1[15]);
  t3023 = Cos(var1[5]);
  t3078 = Sin(var1[5]);
  t3068 = Sin(var1[16]);
  t3071 = Sin(var1[4]);
  t3137 = Cos(var1[16]);
  t3141 = t3024*t2983*t3023;
  t3142 = -1.*t2983*t3053*t3078;
  t3147 = t3141 + t3142;
  t3150 = Cos(var1[17]);
  t3156 = t3068*t3071;
  t3158 = t3137*t3147;
  t3160 = t3156 + t3158;
  t3172 = Sin(var1[17]);
  t3173 = t3137*t3071;
  t3174 = -1.*t3068*t3147;
  t3177 = t3173 + t3174;
  t3064 = -0.15121*t3053;
  t3065 = t3034 + t3064;
  t3204 = Sin(var1[3]);
  t3073 = 0.15121*t3053;
  t3077 = t3034 + t3073;
  t3217 = Cos(var1[3]);
  t3209 = t3023*t3204*t3071;
  t3220 = t3217*t3078;
  t3225 = t3209 + t3220;
  t3231 = t3217*t3023;
  t3235 = -1.*t3204*t3071*t3078;
  t3239 = t3231 + t3235;
  t3138 = -1.*t3137;
  t3140 = 1. + t3138;
  t3153 = -1.*t3150;
  t3155 = 1. + t3153;
  t3245 = t3024*t3225;
  t3246 = t3053*t3239;
  t3247 = t3245 + t3246;
  t3249 = -1.*t2983*t3068*t3204;
  t3252 = t3137*t3247;
  t3254 = t3249 + t3252;
  t3257 = -1.*t3137*t2983*t3204;
  t3260 = -1.*t3068*t3247;
  t3262 = t3257 + t3260;
  t3277 = -1.*t3217*t3023*t3071;
  t3278 = t3204*t3078;
  t3279 = t3277 + t3278;
  t3281 = t3023*t3204;
  t3282 = t3217*t3071*t3078;
  t3283 = t3281 + t3282;
  t3298 = t3024*t3279;
  t3300 = t3053*t3283;
  t3301 = t3298 + t3300;
  t3303 = t3217*t2983*t3068;
  t3304 = t3137*t3301;
  t3305 = t3303 + t3304;
  t3310 = t3137*t3217*t2983;
  t3311 = -1.*t3068*t3301;
  t3312 = t3310 + t3311;
  p_output1[0]=t2983*t3023*t3065 + 0.28121*t3068*t3071 - 1.*t2983*t3077*t3078 - 0.15121*(-1.*t2983*t3023*t3053 - 1.*t2983*t3024*t3078) - 0.28121*t3140*t3147 - 0.50321*t3155*t3160 - 0.50321*t3172*t3177 - 0.23321*(t3150*t3160 - 1.*t3172*t3177) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t2983*t3068*t3204 + t3065*t3225 + t3077*t3239 - 0.15121*(-1.*t3053*t3225 + t3024*t3239) - 0.28121*t3140*t3247 - 0.50321*t3155*t3254 - 0.50321*t3172*t3262 - 0.23321*(t3150*t3254 - 1.*t3172*t3262) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t2983*t3068*t3217 + t3065*t3279 + t3077*t3283 - 0.15121*(-1.*t3053*t3279 + t3024*t3283) - 0.28121*t3140*t3301 - 0.50321*t3155*t3305 - 0.50321*t3172*t3312 - 0.23321*(t3150*t3305 - 1.*t3172*t3312) + var1[2] - 1.*var2[2];
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

#include "h_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void h_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
