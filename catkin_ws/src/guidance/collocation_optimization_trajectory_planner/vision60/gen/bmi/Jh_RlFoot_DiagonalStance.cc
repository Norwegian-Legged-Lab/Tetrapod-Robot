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
static void output1(double *p_output1,const double *var1)
{
  double t2952;
  double t2916;
  double t2927;
  double t2971;
  double t2939;
  double t2973;
  double t2974;
  double t3177;
  double t3054;
  double t2684;
  double t3160;
  double t3178;
  double t3173;
  double t3174;
  double t3175;
  double t3164;
  double t3176;
  double t3179;
  double t3180;
  double t3244;
  double t3256;
  double t3215;
  double t3219;
  double t3224;
  double t3231;
  double t3240;
  double t3241;
  double t3249;
  double t3250;
  double t3251;
  double t3257;
  double t3258;
  double t3262;
  double t3279;
  double t3283;
  double t3289;
  double t3298;
  double t3299;
  double t3300;
  double t3302;
  double t3303;
  double t3304;
  double t3214;
  double t3242;
  double t3243;
  double t3323;
  double t3327;
  double t3331;
  double t3334;
  double t3336;
  double t3337;
  double t3338;
  double t3339;
  double t3340;
  double t3201;
  double t3208;
  double t3213;
  double t3322;
  double t3332;
  double t3341;
  double t3342;
  double t3346;
  double t3347;
  double t3348;
  double t3349;
  double t3350;
  double t3351;
  double t3316;
  double t3317;
  double t3318;
  double t3320;
  double t3343;
  double t3344;
  double t3355;
  double t3356;
  double t3357;
  double t3359;
  double t3360;
  double t3361;
  double t3345;
  double t3352;
  double t3353;
  double t3358;
  double t3362;
  double t3363;
  double t3365;
  double t3369;
  double t3370;
  double t3135;
  double t3185;
  double t3187;
  double t3354;
  double t3376;
  double t3386;
  double t3391;
  double t3397;
  double t3402;
  double t3417;
  double t3424;
  double t3440;
  double t3433;
  double t3445;
  double t3453;
  double t3491;
  double t3483;
  t2952 = Cos(var1[10]);
  t2916 = Cos(var1[11]);
  t2927 = Sin(var1[10]);
  t2971 = Sin(var1[11]);
  t2939 = t2916*t2927;
  t2973 = -1.*t2952*t2971;
  t2974 = t2939 + t2973;
  t3177 = Sin(var1[9]);
  t3054 = Sin(var1[4]);
  t2684 = Cos(var1[9]);
  t3160 = Cos(var1[4]);
  t3178 = Sin(var1[5]);
  t3173 = t2952*t2916;
  t3174 = t2927*t2971;
  t3175 = t3173 + t3174;
  t3164 = Cos(var1[5]);
  t3176 = t3164*t3175;
  t3179 = t3177*t2974*t3178;
  t3180 = t3176 + t3179;
  t3244 = Cos(var1[3]);
  t3256 = Sin(var1[3]);
  t3215 = -1.*t2916*t2927;
  t3219 = t2952*t2971;
  t3224 = t3215 + t3219;
  t3231 = t3164*t3224;
  t3240 = t3177*t3175*t3178;
  t3241 = t3231 + t3240;
  t3249 = -1.*t3164*t3177*t2974;
  t3250 = t3175*t3178;
  t3251 = t3249 + t3250;
  t3257 = t2684*t3160*t2974;
  t3258 = -1.*t3054*t3180;
  t3262 = t3257 + t3258;
  t3279 = t3160*t3177;
  t3283 = t2684*t3054*t3178;
  t3289 = t3279 + t3283;
  t3298 = -1.*t3164*t3177*t3175;
  t3299 = t3224*t3178;
  t3300 = t3298 + t3299;
  t3302 = t2684*t3160*t3175;
  t3303 = -1.*t3054*t3241;
  t3304 = t3302 + t3303;
  t3214 = t2684*t3175*t3054;
  t3242 = t3160*t3241;
  t3243 = t3214 + t3242;
  t3323 = -0.0641*t2916;
  t3327 = -0.28*t2971;
  t3331 = t3323 + t3327;
  t3334 = -1.*t2916;
  t3336 = 1. + t3334;
  t3337 = -0.575*t3336;
  t3338 = -0.295*t2916;
  t3339 = -0.0641*t2971;
  t3340 = t3337 + t3338 + t3339;
  t3201 = t3177*t3054;
  t3208 = -1.*t2684*t3160*t3178;
  t3213 = t3201 + t3208;
  t3322 = 0.325*t2927;
  t3332 = t2952*t3331;
  t3341 = t2927*t3340;
  t3342 = t3322 + t3332 + t3341;
  t3346 = -1.*t2952;
  t3347 = 1. + t3346;
  t3348 = -0.325*t3347;
  t3349 = -1.*t2927*t3331;
  t3350 = t2952*t3340;
  t3351 = t3348 + t3349 + t3350;
  t3316 = -1.*t2684;
  t3317 = 1. + t3316;
  t3318 = 0.1575*t3317;
  t3320 = 0.2255*t2684;
  t3343 = -1.*t3177*t3342;
  t3344 = t3318 + t3320 + t3343;
  t3355 = 0.068*t3177;
  t3356 = t2684*t3342;
  t3357 = t3355 + t3356;
  t3359 = t3164*t3351;
  t3360 = -1.*t3344*t3178;
  t3361 = t3359 + t3360;
  t3345 = t3164*t3344;
  t3352 = t3351*t3178;
  t3353 = t3345 + t3352;
  t3358 = t3357*t3054;
  t3362 = t3160*t3361;
  t3363 = t3358 + t3362;
  t3365 = t3160*t3357;
  t3369 = -1.*t3054*t3361;
  t3370 = t3365 + t3369;
  t3135 = t2684*t2974*t3054;
  t3185 = t3160*t3180;
  t3187 = t3135 + t3185;
  t3354 = -1.*t2684*t3164*t3353;
  t3376 = t3353*t3300;
  t3386 = t3353*t3251;
  t3391 = -1.*t3353*t3300;
  t3397 = t2684*t3164*t3353;
  t3402 = -1.*t3353*t3251;
  t3417 = -1.*t3177*t3357;
  t3424 = t2684*t3357*t3175;
  t3440 = -1.*t2684*t3357*t3175;
  t3433 = t2684*t3357*t2974;
  t3445 = t3177*t3357;
  t3453 = -1.*t2684*t3357*t2974;
  t3491 = t3351*t3175;
  t3483 = -1.*t3351*t3224;
  p_output1[0]=t3187;
  p_output1[1]=t3213;
  p_output1[2]=t3243;
  p_output1[3]=t3244*t3251 - 1.*t3256*t3262;
  p_output1[4]=t2684*t3164*t3244 - 1.*t3256*t3289;
  p_output1[5]=t3244*t3300 - 1.*t3256*t3304;
  p_output1[6]=t3251*t3256 + t3244*t3262;
  p_output1[7]=t2684*t3164*t3256 + t3244*t3289;
  p_output1[8]=t3256*t3300 + t3244*t3304;
  p_output1[9]=t3243*(t3354 - 1.*t3213*t3363 - 1.*t3289*t3370) + t3213*(t3243*t3363 + t3304*t3370 + t3376);
  p_output1[10]=t3243*(t3187*t3363 + t3262*t3370 + t3386) + t3187*(-1.*t3243*t3363 - 1.*t3304*t3370 + t3391);
  p_output1[11]=t3187*(t3213*t3363 + t3289*t3370 + t3397) + t3213*(-1.*t3187*t3363 - 1.*t3262*t3370 + t3402);
  p_output1[12]=t3300*(t3354 + t2684*t3178*t3361 + t3417) + t2684*t3164*(t3241*t3361 + t3376 + t3424);
  p_output1[13]=t3300*(t3180*t3361 + t3386 + t3433) + t3251*(-1.*t3241*t3361 + t3391 + t3440);
  p_output1[14]=t3251*(-1.*t2684*t3178*t3361 + t3397 + t3445) + t2684*t3164*(-1.*t3180*t3361 + t3402 + t3453);
  p_output1[15]=t2684*t3175*(-1.*t2684*t3344 + t3417) + t3177*(-1.*t3175*t3177*t3344 + t3224*t3351 + t3424);
  p_output1[16]=t2684*t2974*(t3175*t3177*t3344 + t3440 + t3483) + t2684*t3175*(-1.*t2974*t3177*t3344 + t3433 + t3491);
  p_output1[17]=t2684*t2974*(t2684*t3344 + t3445) + t3177*(t2974*t3177*t3344 - 1.*t3175*t3351 + t3453);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.1575*t2974 - 0.2255*t3224;
  p_output1[28]=t3175*(-1.*t3175*t3342 + t3483) + t3224*(t2974*t3342 + t3491);
  p_output1[29]=0.068*t3175;
  p_output1[30]=-0.325*t2971 - 1.*t2916*t3331 - 1.*t2971*t3340;
  p_output1[31]=0;
  p_output1[32]=0.325*t2916 - 1.*t2971*t3331 + t2916*t3340;
  p_output1[33]=-0.0641;
  p_output1[34]=0;
  p_output1[35]=-0.28;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
