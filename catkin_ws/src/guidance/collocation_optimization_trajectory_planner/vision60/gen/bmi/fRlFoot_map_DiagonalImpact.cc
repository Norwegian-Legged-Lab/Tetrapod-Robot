/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:11:13 GMT+02:00
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
  double t991;
  double t454;
  double t796;
  double t1294;
  double t906;
  double t1389;
  double t1572;
  double t2914;
  double t2944;
  double t2920;
  double t2921;
  double t2922;
  double t3112;
  double t428;
  double t2897;
  double t1642;
  double t2924;
  double t3124;
  double t3126;
  double t3156;
  double t3147;
  double t3148;
  double t3149;
  double t3146;
  double t3157;
  double t3169;
  double t3170;
  double t3248;
  double t3249;
  double t3250;
  double t3257;
  double t3258;
  double t3268;
  double t3269;
  double t3272;
  double t3273;
  double t3239;
  double t3251;
  double t3274;
  double t3276;
  double t3284;
  double t3287;
  double t3289;
  double t3322;
  double t3324;
  double t3328;
  double t3215;
  double t3236;
  double t3237;
  double t3238;
  double t3279;
  double t3281;
  double t3370;
  double t3371;
  double t3374;
  double t3380;
  double t3383;
  double t3384;
  double t3336;
  double t3338;
  double t3369;
  double t3283;
  double t3329;
  double t3331;
  double t3191;
  double t3193;
  double t3194;
  double t3378;
  double t3385;
  double t3391;
  double t3186;
  double t3197;
  double t3201;
  double t3212;
  double t3213;
  double t3214;
  double t3412;
  double t3416;
  double t3417;
  double t3428;
  double t3432;
  double t3433;
  double t3332;
  double t3434;
  double t3466;
  double t3470;
  double t3408;
  double t3410;
  double t3411;
  double t2369;
  double t3127;
  double t3134;
  double t3439;
  double t3440;
  double t3449;
  double t3517;
  double t3533;
  double t3580;
  double t3569;
  double t3638;
  double t3605;
  double t3671;
  double t3678;
  double t3691;
  double t3696;
  t991 = Cos(var1[10]);
  t454 = Cos(var1[11]);
  t796 = Sin(var1[10]);
  t1294 = Sin(var1[11]);
  t906 = t454*t796;
  t1389 = -1.*t991*t1294;
  t1572 = t906 + t1389;
  t2914 = Cos(var1[5]);
  t2944 = Sin(var1[9]);
  t2920 = t991*t454;
  t2921 = t796*t1294;
  t2922 = t2920 + t2921;
  t3112 = Sin(var1[5]);
  t428 = Cos(var1[9]);
  t2897 = Cos(var1[4]);
  t1642 = Sin(var1[4]);
  t2924 = t2914*t2922;
  t3124 = t2944*t1572*t3112;
  t3126 = t2924 + t3124;
  t3156 = Sin(var1[3]);
  t3147 = -1.*t2914*t2944*t1572;
  t3148 = t2922*t3112;
  t3149 = t3147 + t3148;
  t3146 = Cos(var1[3]);
  t3157 = t428*t2897*t1572;
  t3169 = -1.*t1642*t3126;
  t3170 = t3157 + t3169;
  t3248 = -0.0641*t454;
  t3249 = -0.28*t1294;
  t3250 = t3248 + t3249;
  t3257 = -1.*t454;
  t3258 = 1. + t3257;
  t3268 = -0.575*t3258;
  t3269 = -0.295*t454;
  t3272 = -0.0641*t1294;
  t3273 = t3268 + t3269 + t3272;
  t3239 = 0.325*t796;
  t3251 = t991*t3250;
  t3274 = t796*t3273;
  t3276 = t3239 + t3251 + t3274;
  t3284 = -1.*t991;
  t3287 = 1. + t3284;
  t3289 = -0.325*t3287;
  t3322 = -1.*t796*t3250;
  t3324 = t991*t3273;
  t3328 = t3289 + t3322 + t3324;
  t3215 = -1.*t428;
  t3236 = 1. + t3215;
  t3237 = 0.1575*t3236;
  t3238 = 0.2255*t428;
  t3279 = -1.*t2944*t3276;
  t3281 = t3237 + t3238 + t3279;
  t3370 = 0.068*t2944;
  t3371 = t428*t3276;
  t3374 = t3370 + t3371;
  t3380 = t2914*t3328;
  t3383 = -1.*t3281*t3112;
  t3384 = t3380 + t3383;
  t3336 = t2944*t1642;
  t3338 = -1.*t428*t2897*t3112;
  t3369 = t3336 + t3338;
  t3283 = t2914*t3281;
  t3329 = t3328*t3112;
  t3331 = t3283 + t3329;
  t3191 = -1.*t454*t796;
  t3193 = t991*t1294;
  t3194 = t3191 + t3193;
  t3378 = t3374*t1642;
  t3385 = t2897*t3384;
  t3391 = t3378 + t3385;
  t3186 = t428*t2922*t1642;
  t3197 = t2914*t3194;
  t3201 = t2944*t2922*t3112;
  t3212 = t3197 + t3201;
  t3213 = t2897*t3212;
  t3214 = t3186 + t3213;
  t3412 = t2897*t3374;
  t3416 = -1.*t1642*t3384;
  t3417 = t3412 + t3416;
  t3428 = -1.*t2914*t2944*t2922;
  t3432 = t3194*t3112;
  t3433 = t3428 + t3432;
  t3332 = -1.*t428*t2914*t3331;
  t3434 = t3331*t3433;
  t3466 = -1.*t2944*t3374;
  t3470 = t428*t3374*t2922;
  t3408 = t2897*t2944;
  t3410 = t428*t1642*t3112;
  t3411 = t3408 + t3410;
  t2369 = t428*t1572*t1642;
  t3127 = t2897*t3126;
  t3134 = t2369 + t3127;
  t3439 = t428*t2897*t2922;
  t3440 = -1.*t1642*t3212;
  t3449 = t3439 + t3440;
  t3517 = t3331*t3149;
  t3533 = -1.*t3331*t3433;
  t3580 = -1.*t428*t3374*t2922;
  t3569 = t428*t3374*t1572;
  t3638 = t3328*t2922;
  t3605 = -1.*t3328*t3194;
  t3671 = t428*t2914*t3331;
  t3678 = -1.*t3331*t3149;
  t3691 = t2944*t3374;
  t3696 = -1.*t428*t3374*t1572;
  p_output1[0]=t3134;
  p_output1[1]=t3146*t3149 - 1.*t3156*t3170;
  p_output1[2]=t3149*t3156 + t3146*t3170;
  p_output1[3]=t3214*(t3332 - 1.*t3369*t3391 - 1.*t3411*t3417) + t3369*(t3214*t3391 + t3434 + t3417*t3449);
  p_output1[4]=t2914*(t3212*t3384 + t3434 + t3470)*t428 + t3433*(t3332 + t3466 + t3112*t3384*t428);
  p_output1[5]=t2944*(-1.*t2922*t2944*t3281 + t3194*t3328 + t3470) + t2922*t428*(t3466 - 1.*t3281*t428);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.1575*t1572 - 0.2255*t3194;
  p_output1[10]=-0.325*t1294 - 1.*t1294*t3273 - 1.*t3250*t454;
  p_output1[11]=-0.0641;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t3369;
  p_output1[19]=-1.*t3156*t3411 + t2914*t3146*t428;
  p_output1[20]=t3146*t3411 + t2914*t3156*t428;
  p_output1[21]=t3214*(t3134*t3391 + t3170*t3417 + t3517) + t3134*(-1.*t3214*t3391 - 1.*t3417*t3449 + t3533);
  p_output1[22]=t3433*(t3126*t3384 + t3517 + t3569) + t3149*(-1.*t3212*t3384 + t3533 + t3580);
  p_output1[23]=t1572*(t2922*t2944*t3281 + t3580 + t3605)*t428 + t2922*(-1.*t1572*t2944*t3281 + t3569 + t3638)*t428;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t2922*(-1.*t2922*t3276 + t3605) + t3194*(t1572*t3276 + t3638);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t3214;
  p_output1[37]=t3146*t3433 - 1.*t3156*t3449;
  p_output1[38]=t3156*t3433 + t3146*t3449;
  p_output1[39]=t3134*(t3369*t3391 + t3411*t3417 + t3671) + t3369*(-1.*t3134*t3391 - 1.*t3170*t3417 + t3678);
  p_output1[40]=t2914*(-1.*t3126*t3384 + t3678 + t3696)*t428 + t3149*(t3671 + t3691 - 1.*t3112*t3384*t428);
  p_output1[41]=t2944*(t1572*t2944*t3281 - 1.*t2922*t3328 + t3696) + t1572*t428*(t3691 + t3281*t428);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.068*t2922;
  p_output1[46]=-1.*t1294*t3250 + 0.325*t454 + t3273*t454;
  p_output1[47]=-0.28;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRlFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
