/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:07 GMT+02:00
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
  double t672;
  double t36;
  double t41;
  double t673;
  double t3119;
  double t3134;
  double t3142;
  double t3054;
  double t3059;
  double t3154;
  double t3058;
  double t3155;
  double t3052;
  double t71;
  double t3014;
  double t3045;
  double t3153;
  double t3158;
  double t3159;
  double t3261;
  double t3189;
  double t3206;
  double t3208;
  double t3245;
  double t3216;
  double t3220;
  double t3224;
  double t3235;
  double t3237;
  double t3238;
  double t3246;
  double t3247;
  double t3256;
  double t3262;
  double t3263;
  double t3264;
  double t3287;
  double t3291;
  double t3292;
  double t3299;
  double t3300;
  double t3301;
  double t3318;
  double t3319;
  double t3328;
  double t3228;
  double t3241;
  double t3243;
  double t3385;
  double t3386;
  double t3403;
  double t3404;
  double t3405;
  double t3406;
  double t3410;
  double t3411;
  double t3412;
  double t3413;
  double t3414;
  double t3415;
  double t3416;
  double t3421;
  double t3422;
  double t3423;
  double t3387;
  double t3388;
  double t3399;
  double t3417;
  double t3419;
  double t3429;
  double t3430;
  double t3431;
  double t3435;
  double t3437;
  double t3438;
  double t3439;
  double t3420;
  double t3426;
  double t3427;
  double t3436;
  double t3440;
  double t3443;
  double t3445;
  double t3446;
  double t3450;
  double t3053;
  double t3161;
  double t3166;
  double t3428;
  double t3458;
  double t3473;
  double t3478;
  double t3487;
  double t3494;
  double t3524;
  double t3528;
  t672 = Cos(var1[10]);
  t36 = Cos(var1[11]);
  t41 = Sin(var1[10]);
  t673 = Sin(var1[11]);
  t3119 = -1.*t672*t36;
  t3134 = -1.*t41*t673;
  t3142 = t3119 + t3134;
  t3054 = Cos(var1[4]);
  t3059 = Cos(var1[5]);
  t3154 = Sin(var1[9]);
  t3058 = Cos(var1[9]);
  t3155 = Sin(var1[5]);
  t3052 = Sin(var1[4]);
  t71 = -1.*t36*t41;
  t3014 = t672*t673;
  t3045 = t71 + t3014;
  t3153 = t3058*t3059*t3142;
  t3158 = -1.*t3154*t3142*t3155;
  t3159 = t3153 + t3158;
  t3261 = Sin(var1[3]);
  t3189 = t3059*t3154;
  t3206 = t3058*t3155;
  t3208 = t3189 + t3206;
  t3245 = Cos(var1[3]);
  t3216 = t672*t36;
  t3220 = t41*t673;
  t3224 = t3216 + t3220;
  t3235 = t3058*t3059*t3045;
  t3237 = -1.*t3154*t3045*t3155;
  t3238 = t3235 + t3237;
  t3246 = t3059*t3154*t3142;
  t3247 = t3058*t3142*t3155;
  t3256 = t3246 + t3247;
  t3262 = t3054*t3045;
  t3263 = -1.*t3052*t3159;
  t3264 = t3262 + t3263;
  t3287 = -1.*t3058*t3059;
  t3291 = t3154*t3155;
  t3292 = t3287 + t3291;
  t3299 = t3059*t3154*t3045;
  t3300 = t3058*t3045*t3155;
  t3301 = t3299 + t3300;
  t3318 = t3054*t3224;
  t3319 = -1.*t3052*t3238;
  t3328 = t3318 + t3319;
  t3228 = t3224*t3052;
  t3241 = t3054*t3238;
  t3243 = t3228 + t3241;
  t3385 = -1.*t3058;
  t3386 = 1. + t3385;
  t3403 = -1.*t672;
  t3404 = 1. + t3403;
  t3405 = -0.28121*t3404;
  t3406 = -1.*t36;
  t3410 = 1. + t3406;
  t3411 = -0.50321*t3410;
  t3412 = -0.19821*t36;
  t3413 = t3411 + t3412;
  t3414 = t672*t3413;
  t3415 = 0.305*t41*t673;
  t3416 = t3405 + t3414 + t3415;
  t3421 = -0.15121*t3386;
  t3422 = t3058*t3416;
  t3423 = t3421 + t3422;
  t3387 = 0.15121*t3386;
  t3388 = 0.15121*t3058;
  t3399 = 0.15121*t3154;
  t3417 = t3154*t3416;
  t3419 = t3387 + t3388 + t3399 + t3417;
  t3429 = 0.28121*t41;
  t3430 = t3413*t41;
  t3431 = -0.305*t672*t673;
  t3435 = t3429 + t3430 + t3431;
  t3437 = t3059*t3423;
  t3438 = -1.*t3419*t3155;
  t3439 = t3437 + t3438;
  t3420 = t3059*t3419;
  t3426 = t3423*t3155;
  t3427 = t3420 + t3426;
  t3436 = t3435*t3052;
  t3440 = t3054*t3439;
  t3443 = t3436 + t3440;
  t3445 = t3054*t3435;
  t3446 = -1.*t3052*t3439;
  t3450 = t3445 + t3446;
  t3053 = t3045*t3052;
  t3161 = t3054*t3159;
  t3166 = t3053 + t3161;
  t3428 = -1.*t3292*t3427;
  t3458 = t3301*t3427;
  t3473 = -1.*t3301*t3427;
  t3478 = t3256*t3427;
  t3487 = t3292*t3427;
  t3494 = -1.*t3256*t3427;
  t3524 = -1.*t3435*t3224;
  t3528 = t3435*t3045;
  p_output1[0]=t3166;
  p_output1[1]=t3054*t3208;
  p_output1[2]=t3243;
  p_output1[3]=t3245*t3256 - 1.*t3261*t3264;
  p_output1[4]=t3052*t3208*t3261 + t3245*t3292;
  p_output1[5]=t3245*t3301 - 1.*t3261*t3328;
  p_output1[6]=t3256*t3261 + t3245*t3264;
  p_output1[7]=-1.*t3052*t3208*t3245 + t3261*t3292;
  p_output1[8]=t3261*t3301 + t3245*t3328;
  p_output1[9]=t3243*(t3428 - 1.*t3054*t3208*t3443 + t3052*t3208*t3450) + t3054*t3208*(t3243*t3443 + t3328*t3450 + t3458);
  p_output1[10]=t3166*(-1.*t3243*t3443 - 1.*t3328*t3450 + t3473) + t3243*(t3166*t3443 + t3264*t3450 + t3478);
  p_output1[11]=t3166*(t3054*t3208*t3443 - 1.*t3052*t3208*t3450 + t3487) + t3054*t3208*(-1.*t3166*t3443 - 1.*t3264*t3450 + t3494);
  p_output1[12]=t3301*(t3428 - 1.*t3208*t3439) + t3292*(t3224*t3435 + t3238*t3439 + t3458);
  p_output1[13]=t3256*(-1.*t3238*t3439 + t3473 + t3524) + t3301*(t3159*t3439 + t3478 + t3528);
  p_output1[14]=t3256*(t3208*t3439 + t3487) + t3292*(-1.*t3045*t3435 - 1.*t3159*t3439 + t3494);
  p_output1[15]=t3224*(t3058*t3419 - 1.*t3154*t3423);
  p_output1[16]=t3045*(-1.*t3045*t3154*t3419 - 1.*t3045*t3058*t3423 + t3524) + t3224*(t3142*t3154*t3419 + t3058*t3142*t3423 + t3528);
  p_output1[17]=t3045*(-1.*t3058*t3419 + t3154*t3423);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0.15121*t3142 + 0.15121*t3224;
  p_output1[28]=-0.15121 + t3045*(-1.*t3045*t3416 + t3524) + t3224*(t3142*t3416 + t3528);
  p_output1[29]=0;
  p_output1[30]=0.28121*t673 + t3413*t673 - 0.305*t36*t673;
  p_output1[31]=0;
  p_output1[32]=0.28121*t36 + t3413*t36 + 0.305*Power(t673,2);
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=-0.305;
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
