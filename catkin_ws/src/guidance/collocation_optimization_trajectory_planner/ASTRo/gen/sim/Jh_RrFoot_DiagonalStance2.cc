/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:12 GMT+02:00
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
  double t3080;
  double t2887;
  double t3067;
  double t3128;
  double t3181;
  double t3185;
  double t3195;
  double t3161;
  double t3180;
  double t3203;
  double t3178;
  double t3208;
  double t3134;
  double t3072;
  double t3132;
  double t3133;
  double t3199;
  double t3227;
  double t3240;
  double t3302;
  double t3243;
  double t3244;
  double t3248;
  double t3285;
  double t3264;
  double t3265;
  double t3266;
  double t3271;
  double t3273;
  double t3275;
  double t3289;
  double t3290;
  double t3296;
  double t3306;
  double t3317;
  double t3318;
  double t3337;
  double t3338;
  double t3347;
  double t3350;
  double t3358;
  double t3359;
  double t3361;
  double t3373;
  double t3374;
  double t3267;
  double t3276;
  double t3280;
  double t3429;
  double t3430;
  double t3431;
  double t3434;
  double t3435;
  double t3436;
  double t3438;
  double t3439;
  double t3440;
  double t3441;
  double t3442;
  double t3445;
  double t3446;
  double t3447;
  double t3454;
  double t3455;
  double t3432;
  double t3433;
  double t3448;
  double t3449;
  double t3459;
  double t3462;
  double t3463;
  double t3464;
  double t3469;
  double t3471;
  double t3474;
  double t3450;
  double t3456;
  double t3457;
  double t3465;
  double t3476;
  double t3477;
  double t3483;
  double t3486;
  double t3490;
  double t3149;
  double t3241;
  double t3242;
  double t3458;
  double t3494;
  double t3501;
  double t3508;
  double t3519;
  double t3532;
  double t3551;
  double t3559;
  t3080 = Cos(var1[16]);
  t2887 = Cos(var1[17]);
  t3067 = Sin(var1[16]);
  t3128 = Sin(var1[17]);
  t3181 = -1.*t3080*t2887;
  t3185 = -1.*t3067*t3128;
  t3195 = t3181 + t3185;
  t3161 = Cos(var1[4]);
  t3180 = Cos(var1[5]);
  t3203 = Sin(var1[15]);
  t3178 = Cos(var1[15]);
  t3208 = Sin(var1[5]);
  t3134 = Sin(var1[4]);
  t3072 = -1.*t2887*t3067;
  t3132 = t3080*t3128;
  t3133 = t3072 + t3132;
  t3199 = t3178*t3180*t3195;
  t3227 = -1.*t3203*t3195*t3208;
  t3240 = t3199 + t3227;
  t3302 = Sin(var1[3]);
  t3243 = t3180*t3203;
  t3244 = t3178*t3208;
  t3248 = t3243 + t3244;
  t3285 = Cos(var1[3]);
  t3264 = t3080*t2887;
  t3265 = t3067*t3128;
  t3266 = t3264 + t3265;
  t3271 = t3178*t3180*t3133;
  t3273 = -1.*t3203*t3133*t3208;
  t3275 = t3271 + t3273;
  t3289 = t3180*t3203*t3195;
  t3290 = t3178*t3195*t3208;
  t3296 = t3289 + t3290;
  t3306 = t3161*t3133;
  t3317 = -1.*t3134*t3240;
  t3318 = t3306 + t3317;
  t3337 = -1.*t3178*t3180;
  t3338 = t3203*t3208;
  t3347 = t3337 + t3338;
  t3350 = t3180*t3203*t3133;
  t3358 = t3178*t3133*t3208;
  t3359 = t3350 + t3358;
  t3361 = t3161*t3266;
  t3373 = -1.*t3134*t3275;
  t3374 = t3361 + t3373;
  t3267 = t3266*t3134;
  t3276 = t3161*t3275;
  t3280 = t3267 + t3276;
  t3429 = -1.*t3178;
  t3430 = 1. + t3429;
  t3431 = -0.15121*t3430;
  t3434 = -1.*t3080;
  t3435 = 1. + t3434;
  t3436 = -0.28121*t3435;
  t3438 = -1.*t2887;
  t3439 = 1. + t3438;
  t3440 = -0.50321*t3439;
  t3441 = -0.23321*t2887;
  t3442 = t3440 + t3441;
  t3445 = t3080*t3442;
  t3446 = 0.27*t3067*t3128;
  t3447 = t3436 + t3445 + t3446;
  t3454 = t3178*t3447;
  t3455 = t3431 + t3454;
  t3432 = -0.15121*t3178;
  t3433 = 0.15121*t3203;
  t3448 = t3203*t3447;
  t3449 = t3431 + t3432 + t3433 + t3448;
  t3459 = 0.28121*t3067;
  t3462 = t3442*t3067;
  t3463 = -0.27*t3080*t3128;
  t3464 = t3459 + t3462 + t3463;
  t3469 = t3180*t3455;
  t3471 = -1.*t3449*t3208;
  t3474 = t3469 + t3471;
  t3450 = t3180*t3449;
  t3456 = t3455*t3208;
  t3457 = t3450 + t3456;
  t3465 = t3464*t3134;
  t3476 = t3161*t3474;
  t3477 = t3465 + t3476;
  t3483 = t3161*t3464;
  t3486 = -1.*t3134*t3474;
  t3490 = t3483 + t3486;
  t3149 = t3133*t3134;
  t3241 = t3161*t3240;
  t3242 = t3149 + t3241;
  t3458 = -1.*t3347*t3457;
  t3494 = t3359*t3457;
  t3501 = -1.*t3359*t3457;
  t3508 = t3296*t3457;
  t3519 = t3347*t3457;
  t3532 = -1.*t3296*t3457;
  t3551 = -1.*t3464*t3266;
  t3559 = t3464*t3133;
  p_output1[0]=t3242;
  p_output1[1]=t3161*t3248;
  p_output1[2]=t3280;
  p_output1[3]=t3285*t3296 - 1.*t3302*t3318;
  p_output1[4]=t3134*t3248*t3302 + t3285*t3347;
  p_output1[5]=t3285*t3359 - 1.*t3302*t3374;
  p_output1[6]=t3296*t3302 + t3285*t3318;
  p_output1[7]=-1.*t3134*t3248*t3285 + t3302*t3347;
  p_output1[8]=t3302*t3359 + t3285*t3374;
  p_output1[9]=t3280*(t3458 - 1.*t3161*t3248*t3477 + t3134*t3248*t3490) + t3161*t3248*(t3280*t3477 + t3374*t3490 + t3494);
  p_output1[10]=t3242*(-1.*t3280*t3477 - 1.*t3374*t3490 + t3501) + t3280*(t3242*t3477 + t3318*t3490 + t3508);
  p_output1[11]=t3242*(t3161*t3248*t3477 - 1.*t3134*t3248*t3490 + t3519) + t3161*t3248*(-1.*t3242*t3477 - 1.*t3318*t3490 + t3532);
  p_output1[12]=t3359*(t3458 - 1.*t3248*t3474) + t3347*(t3266*t3464 + t3275*t3474 + t3494);
  p_output1[13]=t3296*(-1.*t3275*t3474 + t3501 + t3551) + t3359*(t3240*t3474 + t3508 + t3559);
  p_output1[14]=t3296*(t3248*t3474 + t3519) + t3347*(-1.*t3133*t3464 - 1.*t3240*t3474 + t3532);
  p_output1[15]=t3266*(t3178*t3449 - 1.*t3203*t3455);
  p_output1[16]=t3133*(-1.*t3133*t3203*t3449 - 1.*t3133*t3178*t3455 + t3551) + t3266*(t3195*t3203*t3449 + t3178*t3195*t3455 + t3559);
  p_output1[17]=t3133*(-1.*t3178*t3449 + t3203*t3455);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=-0.15121*t3195 - 0.15121*t3266;
  p_output1[46]=-0.15121 + t3133*(-1.*t3133*t3447 + t3551) + t3266*(t3195*t3447 + t3559);
  p_output1[47]=0;
  p_output1[48]=0.28121*t3128 - 0.27*t2887*t3128 + t3128*t3442;
  p_output1[49]=0;
  p_output1[50]=0.28121*t2887 + 0.27*Power(t3128,2) + t2887*t3442;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=-0.27;
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

#include "Jh_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void Jh_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
