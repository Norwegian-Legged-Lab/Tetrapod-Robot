/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:00:28 GMT+02:00
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
  double t9301;
  double t4541;
  double t9221;
  double t9302;
  double t9325;
  double t9329;
  double t9333;
  double t9324;
  double t9335;
  double t9323;
  double t9336;
  double t9318;
  double t9251;
  double t9304;
  double t9311;
  double t9312;
  double t9334;
  double t9337;
  double t9338;
  double t9346;
  double t9342;
  double t9343;
  double t9344;
  double t9341;
  double t9347;
  double t9349;
  double t9350;
  double t9397;
  double t9398;
  double t9399;
  double t9410;
  double t9411;
  double t9416;
  double t9417;
  double t9419;
  double t9420;
  double t9421;
  double t9422;
  double t9423;
  double t9424;
  double t9425;
  double t9426;
  double t9427;
  double t9431;
  double t9432;
  double t9433;
  double t9412;
  double t9414;
  double t9415;
  double t9428;
  double t9429;
  double t9437;
  double t9438;
  double t9439;
  double t9440;
  double t9441;
  double t9442;
  double t9443;
  double t9446;
  double t9447;
  double t9449;
  double t9430;
  double t9434;
  double t9435;
  double t9396;
  double t9400;
  double t9402;
  double t9403;
  double t9404;
  double t9405;
  double t9445;
  double t9450;
  double t9451;
  double t9453;
  double t9454;
  double t9455;
  double t9459;
  double t9460;
  double t9461;
  double t9407;
  double t9408;
  double t9409;
  double t9436;
  double t9462;
  double t9313;
  double t9339;
  double t9340;
  double t9464;
  double t9465;
  double t9466;
  double t9494;
  double t9499;
  double t9505;
  double t9509;
  double t9536;
  double t9541;
  t9301 = Cos(var1[13]);
  t4541 = Cos(var1[14]);
  t9221 = Sin(var1[13]);
  t9302 = Sin(var1[14]);
  t9325 = t9301*t4541;
  t9329 = t9221*t9302;
  t9333 = t9325 + t9329;
  t9324 = Cos(var1[5]);
  t9335 = Sin(var1[12]);
  t9323 = Cos(var1[12]);
  t9336 = Sin(var1[5]);
  t9318 = Cos(var1[4]);
  t9251 = -1.*t4541*t9221;
  t9304 = t9301*t9302;
  t9311 = t9251 + t9304;
  t9312 = Sin(var1[4]);
  t9334 = t9323*t9324*t9333;
  t9337 = -1.*t9335*t9333*t9336;
  t9338 = t9334 + t9337;
  t9346 = Sin(var1[3]);
  t9342 = t9324*t9335*t9333;
  t9343 = t9323*t9333*t9336;
  t9344 = t9342 + t9343;
  t9341 = Cos(var1[3]);
  t9347 = t9318*t9311;
  t9349 = -1.*t9312*t9338;
  t9350 = t9347 + t9349;
  t9397 = t4541*t9221;
  t9398 = -1.*t9301*t9302;
  t9399 = t9397 + t9398;
  t9410 = -1.*t9323;
  t9411 = 1. + t9410;
  t9416 = -1.*t9301;
  t9417 = 1. + t9416;
  t9419 = 0.28121*t9417;
  t9420 = -1.*t4541;
  t9421 = 1. + t9420;
  t9422 = 0.50321*t9421;
  t9423 = 0.19821*t4541;
  t9424 = t9422 + t9423;
  t9425 = t9301*t9424;
  t9426 = -0.305*t9221*t9302;
  t9427 = t9419 + t9425 + t9426;
  t9431 = 0.15121*t9411;
  t9432 = t9323*t9427;
  t9433 = t9431 + t9432;
  t9412 = -0.15121*t9411;
  t9414 = -0.15121*t9323;
  t9415 = -0.15121*t9335;
  t9428 = t9335*t9427;
  t9429 = t9412 + t9414 + t9415 + t9428;
  t9437 = -1.*t9324*t9335;
  t9438 = -1.*t9323*t9336;
  t9439 = t9437 + t9438;
  t9440 = 0.28121*t9221;
  t9441 = -1.*t9424*t9221;
  t9442 = -0.305*t9301*t9302;
  t9443 = t9440 + t9441 + t9442;
  t9446 = t9324*t9433;
  t9447 = -1.*t9429*t9336;
  t9449 = t9446 + t9447;
  t9430 = t9324*t9429;
  t9434 = t9433*t9336;
  t9435 = t9430 + t9434;
  t9396 = t9333*t9312;
  t9400 = t9323*t9324*t9399;
  t9402 = -1.*t9335*t9399*t9336;
  t9403 = t9400 + t9402;
  t9404 = t9318*t9403;
  t9405 = t9396 + t9404;
  t9445 = t9443*t9312;
  t9450 = t9318*t9449;
  t9451 = t9445 + t9450;
  t9453 = t9318*t9443;
  t9454 = -1.*t9312*t9449;
  t9455 = t9453 + t9454;
  t9459 = t9324*t9335*t9399;
  t9460 = t9323*t9399*t9336;
  t9461 = t9459 + t9460;
  t9407 = t9323*t9324;
  t9408 = -1.*t9335*t9336;
  t9409 = t9407 + t9408;
  t9436 = -1.*t9409*t9435;
  t9462 = t9461*t9435;
  t9313 = t9311*t9312;
  t9339 = t9318*t9338;
  t9340 = t9313 + t9339;
  t9464 = t9318*t9333;
  t9465 = -1.*t9312*t9403;
  t9466 = t9464 + t9465;
  t9494 = -1.*t9461*t9435;
  t9499 = t9344*t9435;
  t9505 = -1.*t9443*t9333;
  t9509 = t9443*t9311;
  t9536 = t9409*t9435;
  t9541 = -1.*t9344*t9435;
  p_output1[0]=t9340;
  p_output1[1]=t9341*t9344 - 1.*t9346*t9350;
  p_output1[2]=t9344*t9346 + t9341*t9350;
  p_output1[3]=t9405*(t9436 - 1.*t9318*t9439*t9451 + t9312*t9439*t9455) + t9318*t9439*(t9405*t9451 + t9462 + t9455*t9466);
  p_output1[4]=(t9436 - 1.*t9439*t9449)*t9461 + t9409*(t9333*t9443 + t9403*t9449 + t9462);
  p_output1[5]=t9333*(-1.*t9323*t9429 + t9335*t9433);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t9302 - 0.305*t4541*t9302 - 1.*t9302*t9424;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t9318*t9439;
  p_output1[19]=t9341*t9409 + t9312*t9346*t9439;
  p_output1[20]=t9346*t9409 - 1.*t9312*t9341*t9439;
  p_output1[21]=t9340*(-1.*t9405*t9451 - 1.*t9455*t9466 + t9494) + t9405*(t9340*t9451 + t9350*t9455 + t9499);
  p_output1[22]=t9344*(-1.*t9403*t9449 + t9494 + t9505) + t9461*(t9338*t9449 + t9499 + t9509);
  p_output1[23]=t9311*(-1.*t9335*t9399*t9429 - 1.*t9323*t9399*t9433 + t9505) + t9333*(t9333*t9335*t9429 + t9323*t9333*t9433 + t9509);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t9311*(-1.*t9399*t9427 + t9505) + t9333*(t9333*t9427 + t9509);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t9405;
  p_output1[37]=t9341*t9461 - 1.*t9346*t9466;
  p_output1[38]=t9346*t9461 + t9341*t9466;
  p_output1[39]=t9340*(t9318*t9439*t9451 - 1.*t9312*t9439*t9455 + t9536) + t9318*t9439*(-1.*t9340*t9451 - 1.*t9350*t9455 + t9541);
  p_output1[40]=t9344*(t9439*t9449 + t9536) + t9409*(-1.*t9311*t9443 - 1.*t9338*t9449 + t9541);
  p_output1[41]=t9311*(t9323*t9429 - 1.*t9335*t9433);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t9311 - 0.15121*t9399;
  p_output1[49]=0.28121*t4541 + 0.305*Power(t9302,2) - 1.*t4541*t9424;
  p_output1[50]=-0.305;
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

#include "fFrFoot_map_DiagonalImpact2.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
