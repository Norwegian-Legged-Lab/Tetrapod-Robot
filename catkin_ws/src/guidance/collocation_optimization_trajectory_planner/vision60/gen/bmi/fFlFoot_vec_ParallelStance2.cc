/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:24:36 GMT+02:00
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
  double t3069;
  double t3210;
  double t2456;
  double t3070;
  double t3211;
  double t3505;
  double t3563;
  double t3638;
  double t3659;
  double t3773;
  double t3796;
  double t3817;
  double t8049;
  double t8051;
  double t8053;
  double t8018;
  double t8236;
  double t8239;
  double t5074;
  double t8059;
  double t8065;
  double t8200;
  double t8213;
  double t8216;
  double t8218;
  double t8221;
  double t8227;
  double t8241;
  double t8242;
  double t8247;
  double t8263;
  double t8264;
  double t8265;
  double t8270;
  double t8271;
  double t8272;
  double t8278;
  double t8279;
  double t8280;
  double t8285;
  double t8286;
  double t8287;
  double t8330;
  double t8331;
  double t8332;
  double t8334;
  double t8335;
  double t8336;
  double t8337;
  double t8338;
  double t8339;
  double t8329;
  double t8333;
  double t8340;
  double t8342;
  double t3209;
  double t3328;
  double t3329;
  double t8325;
  double t8326;
  double t8327;
  double t8328;
  double t8343;
  double t8344;
  double t8345;
  double t8347;
  double t8350;
  double t8351;
  double t8354;
  double t8355;
  double t8357;
  double t8360;
  double t8361;
  double t8366;
  double t8367;
  double t8368;
  double t5004;
  double t8152;
  double t8181;
  double t8376;
  double t8377;
  double t8378;
  double t8372;
  double t8373;
  double t8374;
  double t8365;
  double t8369;
  double t8370;
  double t8184;
  double t8228;
  double t8230;
  double t8380;
  double t8384;
  double t8393;
  double t8398;
  double t8407;
  double t8410;
  double t8467;
  double t8476;
  double t8432;
  double t8435;
  double t8451;
  double t8441;
  double t8522;
  double t8515;
  t3069 = Cos(var1[6]);
  t3210 = Sin(var1[4]);
  t2456 = Cos(var1[4]);
  t3070 = Sin(var1[5]);
  t3211 = Sin(var1[6]);
  t3505 = Cos(var1[8]);
  t3563 = Sin(var1[7]);
  t3638 = t3505*t3563;
  t3659 = Cos(var1[7]);
  t3773 = Sin(var1[8]);
  t3796 = -1.*t3659*t3773;
  t3817 = t3638 + t3796;
  t8049 = t3659*t3505;
  t8051 = t3563*t3773;
  t8053 = t8049 + t8051;
  t8018 = Cos(var1[5]);
  t8236 = Cos(var1[3]);
  t8239 = Sin(var1[3]);
  t5074 = t3070*t3211*t3817;
  t8059 = t8018*t8053;
  t8065 = t5074 + t8059;
  t8200 = -1.*t3505*t3563;
  t8213 = t3659*t3773;
  t8216 = t8200 + t8213;
  t8218 = t8018*t8216;
  t8221 = t3070*t3211*t8053;
  t8227 = t8218 + t8221;
  t8241 = t3069*t3210*t3070;
  t8242 = t2456*t3211;
  t8247 = t8241 + t8242;
  t8263 = -1.*t8018*t3211*t3817;
  t8264 = t3070*t8053;
  t8265 = t8263 + t8264;
  t8270 = t2456*t3069*t3817;
  t8271 = -1.*t3210*t8065;
  t8272 = t8270 + t8271;
  t8278 = t3070*t8216;
  t8279 = -1.*t8018*t3211*t8053;
  t8280 = t8278 + t8279;
  t8285 = t2456*t3069*t8053;
  t8286 = -1.*t3210*t8227;
  t8287 = t8285 + t8286;
  t8330 = -0.0641*t3505;
  t8331 = -0.28*t3773;
  t8332 = t8330 + t8331;
  t8334 = -1.*t3505;
  t8335 = 1. + t8334;
  t8336 = 0.075*t8335;
  t8337 = 0.355*t3505;
  t8338 = -0.0641*t3773;
  t8339 = t8336 + t8337 + t8338;
  t8329 = -0.325*t3563;
  t8333 = t3659*t8332;
  t8340 = t3563*t8339;
  t8342 = t8329 + t8333 + t8340;
  t3209 = -1.*t2456*t3069*t3070;
  t3328 = t3210*t3211;
  t3329 = t3209 + t3328;
  t8325 = -1.*t3069;
  t8326 = 1. + t8325;
  t8327 = 0.1575*t8326;
  t8328 = 0.2255*t3069;
  t8343 = -1.*t3211*t8342;
  t8344 = t8327 + t8328 + t8343;
  t8345 = -1.*t3070*t8344;
  t8347 = -1.*t3659;
  t8350 = 1. + t8347;
  t8351 = 0.325*t8350;
  t8354 = -1.*t3563*t8332;
  t8355 = t3659*t8339;
  t8357 = t8351 + t8354 + t8355;
  t8360 = t8018*t8357;
  t8361 = t8345 + t8360;
  t8366 = 0.068*t3211;
  t8367 = t3069*t8342;
  t8368 = t8366 + t8367;
  t5004 = t3069*t3210*t3817;
  t8152 = t2456*t8065;
  t8181 = t5004 + t8152;
  t8376 = t8018*t8344;
  t8377 = t3070*t8357;
  t8378 = t8376 + t8377;
  t8372 = t2456*t8361;
  t8373 = t3210*t8368;
  t8374 = t8372 + t8373;
  t8365 = -1.*t3210*t8361;
  t8369 = t2456*t8368;
  t8370 = t8365 + t8369;
  t8184 = t3069*t3210*t8053;
  t8228 = t2456*t8227;
  t8230 = t8184 + t8228;
  t8380 = t8018*t3069*t8378;
  t8384 = -1.*t8378*t8265;
  t8393 = t8378*t8265;
  t8398 = -1.*t8378*t8280;
  t8407 = -1.*t8018*t3069*t8378;
  t8410 = t8378*t8280;
  t8467 = -1.*t3211*t8368;
  t8476 = t3069*t8368*t8053;
  t8432 = t3211*t8368;
  t8435 = -1.*t3069*t8368*t3817;
  t8451 = -1.*t3069*t8368*t8053;
  t8441 = t3069*t8368*t3817;
  t8522 = t8357*t8053;
  t8515 = -1.*t8357*t8216;
  p_output1[0]=t8181*var2[0] + t3329*var2[1] + t8230*var2[2];
  p_output1[1]=(t8236*t8265 - 1.*t8239*t8272)*var2[0] + (t3069*t8018*t8236 - 1.*t8239*t8247)*var2[1] + (t8236*t8280 - 1.*t8239*t8287)*var2[2];
  p_output1[2]=(t8239*t8265 + t8236*t8272)*var2[0] + (t3069*t8018*t8239 + t8236*t8247)*var2[1] + (t8239*t8280 + t8236*t8287)*var2[2];
  p_output1[3]=(t8230*(-1.*t8247*t8370 - 1.*t3329*t8374 + t8407) + t3329*(t8287*t8370 + t8230*t8374 + t8410))*var2[0] + (t8230*(t8272*t8370 + t8181*t8374 + t8393) + t8181*(-1.*t8287*t8370 - 1.*t8230*t8374 + t8398))*var2[1] + (t8181*(t8247*t8370 + t3329*t8374 + t8380) + t3329*(-1.*t8272*t8370 - 1.*t8181*t8374 + t8384))*var2[2];
  p_output1[4]=(t8280*(t3069*t3070*t8361 + t8407 + t8467) + t3069*t8018*(t8227*t8361 + t8410 + t8476))*var2[0] + (t8280*(t8065*t8361 + t8393 + t8441) + t8265*(-1.*t8227*t8361 + t8398 + t8451))*var2[1] + (t8265*(-1.*t3069*t3070*t8361 + t8380 + t8432) + t3069*t8018*(-1.*t8065*t8361 + t8384 + t8435))*var2[2];
  p_output1[5]=(t3069*t8053*(-1.*t3069*t8344 + t8467) + t3211*(-1.*t3211*t8053*t8344 + t8216*t8357 + t8476))*var2[0] + (t3069*t3817*(t3211*t8053*t8344 + t8451 + t8515) + t3069*t8053*(-1.*t3211*t3817*t8344 + t8441 + t8522))*var2[1] + (t3069*t3817*(t3069*t8344 + t8432) + t3211*(t3211*t3817*t8344 - 1.*t8053*t8357 + t8435))*var2[2];
  p_output1[6]=(-0.1575*t3817 - 0.2255*t8216)*var2[0] + (t8053*(-1.*t8053*t8342 + t8515) + t8216*(t3817*t8342 + t8522))*var2[1] + 0.068*t8053*var2[2];
  p_output1[7]=(0.325*t3773 - 1.*t3505*t8332 - 1.*t3773*t8339)*var2[0] + (-0.325*t3505 - 1.*t3773*t8332 + t3505*t8339)*var2[2];
  p_output1[8]=-0.0641*var2[0] - 0.28*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fFlFoot_vec_ParallelStance2.hh"

namespace SymFunction
{

void fFlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
