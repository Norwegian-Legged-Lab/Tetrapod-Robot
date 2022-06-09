/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:41:45 GMT+02:00
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
  double t4987;
  double t4843;
  double t4845;
  double t5101;
  double t4961;
  double t5136;
  double t5139;
  double t9157;
  double t9255;
  double t9158;
  double t9160;
  double t9161;
  double t9263;
  double t3435;
  double t9137;
  double t5162;
  double t9163;
  double t9269;
  double t9282;
  double t9299;
  double t9294;
  double t9295;
  double t9296;
  double t9293;
  double t9301;
  double t9302;
  double t9303;
  double t9325;
  double t9326;
  double t9327;
  double t9330;
  double t9331;
  double t9332;
  double t9334;
  double t9335;
  double t9336;
  double t9324;
  double t9329;
  double t9337;
  double t9338;
  double t9344;
  double t9345;
  double t9346;
  double t9347;
  double t9349;
  double t9350;
  double t9320;
  double t9321;
  double t9322;
  double t9323;
  double t9340;
  double t9341;
  double t9358;
  double t9359;
  double t9360;
  double t9362;
  double t9363;
  double t9364;
  double t9355;
  double t9356;
  double t9357;
  double t9342;
  double t9351;
  double t9352;
  double t9311;
  double t9312;
  double t9313;
  double t9361;
  double t9365;
  double t9366;
  double t9309;
  double t9314;
  double t9316;
  double t9317;
  double t9318;
  double t9319;
  double t9371;
  double t9373;
  double t9374;
  double t9379;
  double t9380;
  double t9381;
  double t9354;
  double t9383;
  double t9393;
  double t9397;
  double t9368;
  double t9369;
  double t9370;
  double t5446;
  double t9288;
  double t9292;
  double t9386;
  double t9387;
  double t9388;
  double t9423;
  double t9428;
  double t9438;
  double t9434;
  double t9448;
  double t9443;
  double t9465;
  double t9470;
  double t9476;
  double t9480;
  t4987 = Cos(var1[10]);
  t4843 = Cos(var1[11]);
  t4845 = Sin(var1[10]);
  t5101 = Sin(var1[11]);
  t4961 = t4843*t4845;
  t5136 = -1.*t4987*t5101;
  t5139 = t4961 + t5136;
  t9157 = Cos(var1[5]);
  t9255 = Sin(var1[9]);
  t9158 = t4987*t4843;
  t9160 = t4845*t5101;
  t9161 = t9158 + t9160;
  t9263 = Sin(var1[5]);
  t3435 = Cos(var1[9]);
  t9137 = Cos(var1[4]);
  t5162 = Sin(var1[4]);
  t9163 = t9157*t9161;
  t9269 = t9255*t5139*t9263;
  t9282 = t9163 + t9269;
  t9299 = Sin(var1[3]);
  t9294 = -1.*t9157*t9255*t5139;
  t9295 = t9161*t9263;
  t9296 = t9294 + t9295;
  t9293 = Cos(var1[3]);
  t9301 = t3435*t9137*t5139;
  t9302 = -1.*t5162*t9282;
  t9303 = t9301 + t9302;
  t9325 = -0.0641*t4843;
  t9326 = -0.28*t5101;
  t9327 = t9325 + t9326;
  t9330 = -1.*t4843;
  t9331 = 1. + t9330;
  t9332 = -0.575*t9331;
  t9334 = -0.295*t4843;
  t9335 = -0.0641*t5101;
  t9336 = t9332 + t9334 + t9335;
  t9324 = 0.325*t4845;
  t9329 = t4987*t9327;
  t9337 = t4845*t9336;
  t9338 = t9324 + t9329 + t9337;
  t9344 = -1.*t4987;
  t9345 = 1. + t9344;
  t9346 = -0.325*t9345;
  t9347 = -1.*t4845*t9327;
  t9349 = t4987*t9336;
  t9350 = t9346 + t9347 + t9349;
  t9320 = -1.*t3435;
  t9321 = 1. + t9320;
  t9322 = 0.1575*t9321;
  t9323 = 0.2255*t3435;
  t9340 = -1.*t9255*t9338;
  t9341 = t9322 + t9323 + t9340;
  t9358 = 0.068*t9255;
  t9359 = t3435*t9338;
  t9360 = t9358 + t9359;
  t9362 = t9157*t9350;
  t9363 = -1.*t9341*t9263;
  t9364 = t9362 + t9363;
  t9355 = t9255*t5162;
  t9356 = -1.*t3435*t9137*t9263;
  t9357 = t9355 + t9356;
  t9342 = t9157*t9341;
  t9351 = t9350*t9263;
  t9352 = t9342 + t9351;
  t9311 = -1.*t4843*t4845;
  t9312 = t4987*t5101;
  t9313 = t9311 + t9312;
  t9361 = t9360*t5162;
  t9365 = t9137*t9364;
  t9366 = t9361 + t9365;
  t9309 = t3435*t9161*t5162;
  t9314 = t9157*t9313;
  t9316 = t9255*t9161*t9263;
  t9317 = t9314 + t9316;
  t9318 = t9137*t9317;
  t9319 = t9309 + t9318;
  t9371 = t9137*t9360;
  t9373 = -1.*t5162*t9364;
  t9374 = t9371 + t9373;
  t9379 = -1.*t9157*t9255*t9161;
  t9380 = t9313*t9263;
  t9381 = t9379 + t9380;
  t9354 = -1.*t3435*t9157*t9352;
  t9383 = t9352*t9381;
  t9393 = -1.*t9255*t9360;
  t9397 = t3435*t9360*t9161;
  t9368 = t9137*t9255;
  t9369 = t3435*t5162*t9263;
  t9370 = t9368 + t9369;
  t5446 = t3435*t5139*t5162;
  t9288 = t9137*t9282;
  t9292 = t5446 + t9288;
  t9386 = t3435*t9137*t9161;
  t9387 = -1.*t5162*t9317;
  t9388 = t9386 + t9387;
  t9423 = t9352*t9296;
  t9428 = -1.*t9352*t9381;
  t9438 = -1.*t3435*t9360*t9161;
  t9434 = t3435*t9360*t5139;
  t9448 = t9350*t9161;
  t9443 = -1.*t9350*t9313;
  t9465 = t3435*t9157*t9352;
  t9470 = -1.*t9352*t9296;
  t9476 = t9255*t9360;
  t9480 = -1.*t3435*t9360*t5139;
  p_output1[0]=t9292;
  p_output1[1]=t9293*t9296 - 1.*t9299*t9303;
  p_output1[2]=t9296*t9299 + t9293*t9303;
  p_output1[3]=t9319*(t9354 - 1.*t9357*t9366 - 1.*t9370*t9374) + t9357*(t9319*t9366 + t9383 + t9374*t9388);
  p_output1[4]=t9381*(t9354 + t3435*t9263*t9364 + t9393) + t3435*t9157*(t9317*t9364 + t9383 + t9397);
  p_output1[5]=t3435*t9161*(-1.*t3435*t9341 + t9393) + t9255*(-1.*t9161*t9255*t9341 + t9313*t9350 + t9397);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.1575*t5139 - 0.2255*t9313;
  p_output1[10]=-0.325*t5101 - 1.*t4843*t9327 - 1.*t5101*t9336;
  p_output1[11]=-0.0641;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t9357;
  p_output1[19]=t3435*t9157*t9293 - 1.*t9299*t9370;
  p_output1[20]=t3435*t9157*t9299 + t9293*t9370;
  p_output1[21]=t9319*(t9292*t9366 + t9303*t9374 + t9423) + t9292*(-1.*t9319*t9366 - 1.*t9374*t9388 + t9428);
  p_output1[22]=t9381*(t9282*t9364 + t9423 + t9434) + t9296*(-1.*t9317*t9364 + t9428 + t9438);
  p_output1[23]=t3435*t5139*(t9161*t9255*t9341 + t9438 + t9443) + t3435*t9161*(-1.*t5139*t9255*t9341 + t9434 + t9448);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t9161*(-1.*t9161*t9338 + t9443) + t9313*(t5139*t9338 + t9448);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t9319;
  p_output1[37]=t9293*t9381 - 1.*t9299*t9388;
  p_output1[38]=t9299*t9381 + t9293*t9388;
  p_output1[39]=t9292*(t9357*t9366 + t9370*t9374 + t9465) + t9357*(-1.*t9292*t9366 - 1.*t9303*t9374 + t9470);
  p_output1[40]=t9296*(-1.*t3435*t9263*t9364 + t9465 + t9476) + t3435*t9157*(-1.*t9282*t9364 + t9470 + t9480);
  p_output1[41]=t3435*t5139*(t3435*t9341 + t9476) + t9255*(t5139*t9255*t9341 - 1.*t9161*t9350 + t9480);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.068*t9161;
  p_output1[46]=0.325*t4843 - 1.*t5101*t9327 + t4843*t9336;
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

#include "fRlFoot_map_ParallelImpact2.hh"

namespace SymFunction
{

void fRlFoot_map_ParallelImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
