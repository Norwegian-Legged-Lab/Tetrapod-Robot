/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:58 GMT+02:00
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
  double t9187;
  double t9183;
  double t9185;
  double t9230;
  double t9186;
  double t9278;
  double t9287;
  double t9313;
  double t9320;
  double t9314;
  double t9315;
  double t9316;
  double t9321;
  double t9177;
  double t9309;
  double t9294;
  double t9317;
  double t9324;
  double t9325;
  double t9333;
  double t9329;
  double t9330;
  double t9331;
  double t9328;
  double t9334;
  double t9335;
  double t9336;
  double t9358;
  double t9359;
  double t9361;
  double t9363;
  double t9365;
  double t9366;
  double t9367;
  double t9368;
  double t9370;
  double t9357;
  double t9362;
  double t9371;
  double t9372;
  double t9377;
  double t9378;
  double t9379;
  double t9380;
  double t9381;
  double t9382;
  double t9352;
  double t9353;
  double t9355;
  double t9356;
  double t9373;
  double t9375;
  double t9389;
  double t9390;
  double t9391;
  double t9394;
  double t9395;
  double t9397;
  double t9386;
  double t9387;
  double t9388;
  double t9376;
  double t9383;
  double t9384;
  double t9343;
  double t9344;
  double t9345;
  double t9392;
  double t9398;
  double t9399;
  double t9342;
  double t9346;
  double t9347;
  double t9348;
  double t9350;
  double t9351;
  double t9405;
  double t9407;
  double t9408;
  double t9412;
  double t9413;
  double t9414;
  double t9385;
  double t9415;
  double t9424;
  double t9428;
  double t9401;
  double t9402;
  double t9404;
  double t9304;
  double t9326;
  double t9327;
  double t9417;
  double t9418;
  double t9419;
  double t9454;
  double t9459;
  double t9469;
  double t9465;
  double t9479;
  double t9474;
  double t9496;
  double t9501;
  double t9507;
  double t9511;
  t9187 = Cos(var1[16]);
  t9183 = Cos(var1[17]);
  t9185 = Sin(var1[16]);
  t9230 = Sin(var1[17]);
  t9186 = t9183*t9185;
  t9278 = -1.*t9187*t9230;
  t9287 = t9186 + t9278;
  t9313 = Cos(var1[5]);
  t9320 = Sin(var1[15]);
  t9314 = t9187*t9183;
  t9315 = t9185*t9230;
  t9316 = t9314 + t9315;
  t9321 = Sin(var1[5]);
  t9177 = Cos(var1[15]);
  t9309 = Cos(var1[4]);
  t9294 = Sin(var1[4]);
  t9317 = t9313*t9316;
  t9324 = t9320*t9287*t9321;
  t9325 = t9317 + t9324;
  t9333 = Sin(var1[3]);
  t9329 = -1.*t9313*t9320*t9287;
  t9330 = t9316*t9321;
  t9331 = t9329 + t9330;
  t9328 = Cos(var1[3]);
  t9334 = t9177*t9309*t9287;
  t9335 = -1.*t9294*t9325;
  t9336 = t9334 + t9335;
  t9358 = -0.0641*t9183;
  t9359 = -0.28*t9230;
  t9361 = t9358 + t9359;
  t9363 = -1.*t9183;
  t9365 = 1. + t9363;
  t9366 = -0.575*t9365;
  t9367 = -0.295*t9183;
  t9368 = -0.0641*t9230;
  t9370 = t9366 + t9367 + t9368;
  t9357 = 0.325*t9185;
  t9362 = t9187*t9361;
  t9371 = t9185*t9370;
  t9372 = t9357 + t9362 + t9371;
  t9377 = -1.*t9187;
  t9378 = 1. + t9377;
  t9379 = -0.325*t9378;
  t9380 = -1.*t9185*t9361;
  t9381 = t9187*t9370;
  t9382 = t9379 + t9380 + t9381;
  t9352 = -1.*t9177;
  t9353 = 1. + t9352;
  t9355 = -0.1575*t9353;
  t9356 = -0.2255*t9177;
  t9373 = -1.*t9320*t9372;
  t9375 = t9355 + t9356 + t9373;
  t9389 = -0.068*t9320;
  t9390 = t9177*t9372;
  t9391 = t9389 + t9390;
  t9394 = t9313*t9382;
  t9395 = -1.*t9375*t9321;
  t9397 = t9394 + t9395;
  t9386 = t9320*t9294;
  t9387 = -1.*t9177*t9309*t9321;
  t9388 = t9386 + t9387;
  t9376 = t9313*t9375;
  t9383 = t9382*t9321;
  t9384 = t9376 + t9383;
  t9343 = -1.*t9183*t9185;
  t9344 = t9187*t9230;
  t9345 = t9343 + t9344;
  t9392 = t9391*t9294;
  t9398 = t9309*t9397;
  t9399 = t9392 + t9398;
  t9342 = t9177*t9316*t9294;
  t9346 = t9313*t9345;
  t9347 = t9320*t9316*t9321;
  t9348 = t9346 + t9347;
  t9350 = t9309*t9348;
  t9351 = t9342 + t9350;
  t9405 = t9309*t9391;
  t9407 = -1.*t9294*t9397;
  t9408 = t9405 + t9407;
  t9412 = -1.*t9313*t9320*t9316;
  t9413 = t9345*t9321;
  t9414 = t9412 + t9413;
  t9385 = -1.*t9177*t9313*t9384;
  t9415 = t9384*t9414;
  t9424 = -1.*t9320*t9391;
  t9428 = t9177*t9391*t9316;
  t9401 = t9309*t9320;
  t9402 = t9177*t9294*t9321;
  t9404 = t9401 + t9402;
  t9304 = t9177*t9287*t9294;
  t9326 = t9309*t9325;
  t9327 = t9304 + t9326;
  t9417 = t9177*t9309*t9316;
  t9418 = -1.*t9294*t9348;
  t9419 = t9417 + t9418;
  t9454 = t9384*t9331;
  t9459 = -1.*t9384*t9414;
  t9469 = -1.*t9177*t9391*t9316;
  t9465 = t9177*t9391*t9287;
  t9479 = t9382*t9316;
  t9474 = -1.*t9382*t9345;
  t9496 = t9177*t9313*t9384;
  t9501 = -1.*t9384*t9331;
  t9507 = t9320*t9391;
  t9511 = -1.*t9177*t9391*t9287;
  p_output1[0]=t9327;
  p_output1[1]=t9328*t9331 - 1.*t9333*t9336;
  p_output1[2]=t9331*t9333 + t9328*t9336;
  p_output1[3]=t9351*(t9385 - 1.*t9388*t9399 - 1.*t9404*t9408) + t9388*(t9351*t9399 + t9415 + t9408*t9419);
  p_output1[4]=t9414*(t9385 + t9177*t9321*t9397 + t9424) + t9177*t9313*(t9348*t9397 + t9415 + t9428);
  p_output1[5]=t9177*t9316*(-1.*t9177*t9375 + t9424) + t9320*(-1.*t9316*t9320*t9375 + t9345*t9382 + t9428);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0.1575*t9287 + 0.2255*t9345;
  p_output1[16]=-0.325*t9230 - 1.*t9183*t9361 - 1.*t9230*t9370;
  p_output1[17]=-0.0641;
  p_output1[18]=t9388;
  p_output1[19]=t9177*t9313*t9328 - 1.*t9333*t9404;
  p_output1[20]=t9177*t9313*t9333 + t9328*t9404;
  p_output1[21]=t9351*(t9327*t9399 + t9336*t9408 + t9454) + t9327*(-1.*t9351*t9399 - 1.*t9408*t9419 + t9459);
  p_output1[22]=t9414*(t9325*t9397 + t9454 + t9465) + t9331*(-1.*t9348*t9397 + t9459 + t9469);
  p_output1[23]=t9177*t9287*(t9316*t9320*t9375 + t9469 + t9474) + t9177*t9316*(-1.*t9287*t9320*t9375 + t9465 + t9479);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=t9316*(-1.*t9316*t9372 + t9474) + t9345*(t9287*t9372 + t9479);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t9351;
  p_output1[37]=t9328*t9414 - 1.*t9333*t9419;
  p_output1[38]=t9333*t9414 + t9328*t9419;
  p_output1[39]=t9327*(t9388*t9399 + t9404*t9408 + t9496) + t9388*(-1.*t9327*t9399 - 1.*t9336*t9408 + t9501);
  p_output1[40]=t9331*(-1.*t9177*t9321*t9397 + t9496 + t9507) + t9177*t9313*(-1.*t9325*t9397 + t9501 + t9511);
  p_output1[41]=t9177*t9287*(t9177*t9375 + t9507) + t9320*(t9287*t9320*t9375 - 1.*t9316*t9382 + t9511);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.068*t9316;
  p_output1[52]=0.325*t9183 - 1.*t9230*t9361 + t9183*t9370;
  p_output1[53]=-0.28;
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

#include "fRrFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fRrFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
