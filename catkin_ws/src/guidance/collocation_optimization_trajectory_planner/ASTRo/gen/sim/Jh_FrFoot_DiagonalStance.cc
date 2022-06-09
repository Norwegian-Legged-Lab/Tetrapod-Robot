/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:10 GMT+02:00
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
  double t2390;
  double t1923;
  double t2163;
  double t2414;
  double t3006;
  double t3014;
  double t3045;
  double t2631;
  double t3005;
  double t3054;
  double t2964;
  double t3059;
  double t2424;
  double t3237;
  double t3238;
  double t3241;
  double t2379;
  double t2420;
  double t2423;
  double t3053;
  double t3123;
  double t3136;
  double t3319;
  double t3141;
  double t3155;
  double t3184;
  double t3283;
  double t3254;
  double t3256;
  double t3258;
  double t3284;
  double t3285;
  double t3286;
  double t3354;
  double t3388;
  double t3399;
  double t3413;
  double t3415;
  double t3419;
  double t3423;
  double t3427;
  double t3429;
  double t3435;
  double t3436;
  double t3437;
  double t3235;
  double t3259;
  double t3278;
  double t3474;
  double t3475;
  double t3482;
  double t3483;
  double t3486;
  double t3487;
  double t3488;
  double t3489;
  double t3492;
  double t3499;
  double t3500;
  double t3501;
  double t3506;
  double t3521;
  double t3522;
  double t3526;
  double t3476;
  double t3478;
  double t3481;
  double t3507;
  double t3512;
  double t3531;
  double t3535;
  double t3536;
  double t3541;
  double t3545;
  double t3546;
  double t3548;
  double t3513;
  double t3528;
  double t3529;
  double t3542;
  double t3554;
  double t3555;
  double t3561;
  double t3564;
  double t3569;
  double t2452;
  double t3137;
  double t3139;
  double t3530;
  double t3579;
  double t3651;
  double t3675;
  double t3690;
  double t3703;
  double t3751;
  double t3768;
  t2390 = Cos(var1[13]);
  t1923 = Cos(var1[14]);
  t2163 = Sin(var1[13]);
  t2414 = Sin(var1[14]);
  t3006 = t2390*t1923;
  t3014 = t2163*t2414;
  t3045 = t3006 + t3014;
  t2631 = Cos(var1[4]);
  t3005 = Cos(var1[5]);
  t3054 = Sin(var1[12]);
  t2964 = Cos(var1[12]);
  t3059 = Sin(var1[5]);
  t2424 = Sin(var1[4]);
  t3237 = t1923*t2163;
  t3238 = -1.*t2390*t2414;
  t3241 = t3237 + t3238;
  t2379 = -1.*t1923*t2163;
  t2420 = t2390*t2414;
  t2423 = t2379 + t2420;
  t3053 = t2964*t3005*t3045;
  t3123 = -1.*t3054*t3045*t3059;
  t3136 = t3053 + t3123;
  t3319 = Sin(var1[3]);
  t3141 = -1.*t3005*t3054;
  t3155 = -1.*t2964*t3059;
  t3184 = t3141 + t3155;
  t3283 = Cos(var1[3]);
  t3254 = t2964*t3005*t3241;
  t3256 = -1.*t3054*t3241*t3059;
  t3258 = t3254 + t3256;
  t3284 = t3005*t3054*t3045;
  t3285 = t2964*t3045*t3059;
  t3286 = t3284 + t3285;
  t3354 = t2631*t2423;
  t3388 = -1.*t2424*t3136;
  t3399 = t3354 + t3388;
  t3413 = t2964*t3005;
  t3415 = -1.*t3054*t3059;
  t3419 = t3413 + t3415;
  t3423 = t3005*t3054*t3241;
  t3427 = t2964*t3241*t3059;
  t3429 = t3423 + t3427;
  t3435 = t2631*t3045;
  t3436 = -1.*t2424*t3258;
  t3437 = t3435 + t3436;
  t3235 = t3045*t2424;
  t3259 = t2631*t3258;
  t3278 = t3235 + t3259;
  t3474 = -1.*t2964;
  t3475 = 1. + t3474;
  t3482 = -1.*t2390;
  t3483 = 1. + t3482;
  t3486 = 0.28121*t3483;
  t3487 = -1.*t1923;
  t3488 = 1. + t3487;
  t3489 = 0.50321*t3488;
  t3492 = 0.19821*t1923;
  t3499 = t3489 + t3492;
  t3500 = t2390*t3499;
  t3501 = -0.305*t2163*t2414;
  t3506 = t3486 + t3500 + t3501;
  t3521 = 0.15121*t3475;
  t3522 = t2964*t3506;
  t3526 = t3521 + t3522;
  t3476 = -0.15121*t3475;
  t3478 = -0.15121*t2964;
  t3481 = -0.15121*t3054;
  t3507 = t3054*t3506;
  t3512 = t3476 + t3478 + t3481 + t3507;
  t3531 = 0.28121*t2163;
  t3535 = -1.*t3499*t2163;
  t3536 = -0.305*t2390*t2414;
  t3541 = t3531 + t3535 + t3536;
  t3545 = t3005*t3526;
  t3546 = -1.*t3512*t3059;
  t3548 = t3545 + t3546;
  t3513 = t3005*t3512;
  t3528 = t3526*t3059;
  t3529 = t3513 + t3528;
  t3542 = t3541*t2424;
  t3554 = t2631*t3548;
  t3555 = t3542 + t3554;
  t3561 = t2631*t3541;
  t3564 = -1.*t2424*t3548;
  t3569 = t3561 + t3564;
  t2452 = t2423*t2424;
  t3137 = t2631*t3136;
  t3139 = t2452 + t3137;
  t3530 = -1.*t3419*t3529;
  t3579 = t3429*t3529;
  t3651 = -1.*t3429*t3529;
  t3675 = t3286*t3529;
  t3690 = t3419*t3529;
  t3703 = -1.*t3286*t3529;
  t3751 = -1.*t3541*t3045;
  t3768 = t3541*t2423;
  p_output1[0]=t3139;
  p_output1[1]=t2631*t3184;
  p_output1[2]=t3278;
  p_output1[3]=t3283*t3286 - 1.*t3319*t3399;
  p_output1[4]=t2424*t3184*t3319 + t3283*t3419;
  p_output1[5]=t3283*t3429 - 1.*t3319*t3437;
  p_output1[6]=t3286*t3319 + t3283*t3399;
  p_output1[7]=-1.*t2424*t3184*t3283 + t3319*t3419;
  p_output1[8]=t3319*t3429 + t3283*t3437;
  p_output1[9]=t3278*(t3530 - 1.*t2631*t3184*t3555 + t2424*t3184*t3569) + t2631*t3184*(t3278*t3555 + t3437*t3569 + t3579);
  p_output1[10]=t3139*(-1.*t3278*t3555 - 1.*t3437*t3569 + t3651) + t3278*(t3139*t3555 + t3399*t3569 + t3675);
  p_output1[11]=t3139*(t2631*t3184*t3555 - 1.*t2424*t3184*t3569 + t3690) + t2631*t3184*(-1.*t3139*t3555 - 1.*t3399*t3569 + t3703);
  p_output1[12]=t3429*(t3530 - 1.*t3184*t3548) + t3419*(t3045*t3541 + t3258*t3548 + t3579);
  p_output1[13]=t3286*(-1.*t3258*t3548 + t3651 + t3751) + t3429*(t3136*t3548 + t3675 + t3768);
  p_output1[14]=t3286*(t3184*t3548 + t3690) + t3419*(-1.*t2423*t3541 - 1.*t3136*t3548 + t3703);
  p_output1[15]=t3045*(-1.*t2964*t3512 + t3054*t3526);
  p_output1[16]=t2423*(-1.*t3054*t3241*t3512 - 1.*t2964*t3241*t3526 + t3751) + t3045*(t3045*t3054*t3512 + t2964*t3045*t3526 + t3768);
  p_output1[17]=t2423*(t2964*t3512 - 1.*t3054*t3526);
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
  p_output1[37]=-0.15121 + t2423*(-1.*t3241*t3506 + t3751) + t3045*(t3045*t3506 + t3768);
  p_output1[38]=-0.15121*t2423 - 0.15121*t3241;
  p_output1[39]=0.28121*t2414 - 0.305*t1923*t2414 - 1.*t2414*t3499;
  p_output1[40]=0;
  p_output1[41]=0.28121*t1923 + 0.305*Power(t2414,2) - 1.*t1923*t3499;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=-0.305;
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

#include "Jh_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
