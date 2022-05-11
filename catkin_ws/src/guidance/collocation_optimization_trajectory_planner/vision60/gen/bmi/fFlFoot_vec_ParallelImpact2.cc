/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:24:43 GMT+02:00
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
  double t3448;
  double t5652;
  double t3245;
  double t5006;
  double t9298;
  double t9307;
  double t9308;
  double t9367;
  double t9376;
  double t9377;
  double t9378;
  double t9384;
  double t9392;
  double t9394;
  double t9395;
  double t9391;
  double t9413;
  double t9415;
  double t9390;
  double t9396;
  double t9398;
  double t9403;
  double t9404;
  double t9405;
  double t9406;
  double t9407;
  double t9408;
  double t9416;
  double t9417;
  double t9418;
  double t9422;
  double t9424;
  double t9425;
  double t9427;
  double t9429;
  double t9430;
  double t9435;
  double t9436;
  double t9437;
  double t9440;
  double t9441;
  double t9442;
  double t9468;
  double t9469;
  double t9471;
  double t9473;
  double t9474;
  double t9475;
  double t9477;
  double t9478;
  double t9479;
  double t9467;
  double t9472;
  double t9481;
  double t9482;
  double t5028;
  double t9304;
  double t9305;
  double t9462;
  double t9463;
  double t9464;
  double t9466;
  double t9483;
  double t9484;
  double t9485;
  double t9486;
  double t9487;
  double t9488;
  double t9489;
  double t9490;
  double t9491;
  double t9492;
  double t9493;
  double t9495;
  double t9496;
  double t9497;
  double t9389;
  double t9399;
  double t9400;
  double t9505;
  double t9506;
  double t9507;
  double t9501;
  double t9502;
  double t9503;
  double t9494;
  double t9498;
  double t9499;
  double t9402;
  double t9409;
  double t9410;
  double t9508;
  double t9511;
  double t9518;
  double t9523;
  double t9532;
  double t9535;
  double t9564;
  double t9567;
  double t9544;
  double t9547;
  double t9557;
  double t9553;
  double t9597;
  double t9592;
  t3448 = Cos(var1[6]);
  t5652 = Sin(var1[4]);
  t3245 = Cos(var1[4]);
  t5006 = Sin(var1[5]);
  t9298 = Sin(var1[6]);
  t9307 = Cos(var1[8]);
  t9308 = Sin(var1[7]);
  t9367 = t9307*t9308;
  t9376 = Cos(var1[7]);
  t9377 = Sin(var1[8]);
  t9378 = -1.*t9376*t9377;
  t9384 = t9367 + t9378;
  t9392 = t9376*t9307;
  t9394 = t9308*t9377;
  t9395 = t9392 + t9394;
  t9391 = Cos(var1[5]);
  t9413 = Cos(var1[3]);
  t9415 = Sin(var1[3]);
  t9390 = t5006*t9298*t9384;
  t9396 = t9391*t9395;
  t9398 = t9390 + t9396;
  t9403 = -1.*t9307*t9308;
  t9404 = t9376*t9377;
  t9405 = t9403 + t9404;
  t9406 = t9391*t9405;
  t9407 = t5006*t9298*t9395;
  t9408 = t9406 + t9407;
  t9416 = t3448*t5652*t5006;
  t9417 = t3245*t9298;
  t9418 = t9416 + t9417;
  t9422 = -1.*t9391*t9298*t9384;
  t9424 = t5006*t9395;
  t9425 = t9422 + t9424;
  t9427 = t3245*t3448*t9384;
  t9429 = -1.*t5652*t9398;
  t9430 = t9427 + t9429;
  t9435 = t5006*t9405;
  t9436 = -1.*t9391*t9298*t9395;
  t9437 = t9435 + t9436;
  t9440 = t3245*t3448*t9395;
  t9441 = -1.*t5652*t9408;
  t9442 = t9440 + t9441;
  t9468 = -0.0641*t9307;
  t9469 = -0.28*t9377;
  t9471 = t9468 + t9469;
  t9473 = -1.*t9307;
  t9474 = 1. + t9473;
  t9475 = 0.075*t9474;
  t9477 = 0.355*t9307;
  t9478 = -0.0641*t9377;
  t9479 = t9475 + t9477 + t9478;
  t9467 = -0.325*t9308;
  t9472 = t9376*t9471;
  t9481 = t9308*t9479;
  t9482 = t9467 + t9472 + t9481;
  t5028 = -1.*t3245*t3448*t5006;
  t9304 = t5652*t9298;
  t9305 = t5028 + t9304;
  t9462 = -1.*t3448;
  t9463 = 1. + t9462;
  t9464 = 0.1575*t9463;
  t9466 = 0.2255*t3448;
  t9483 = -1.*t9298*t9482;
  t9484 = t9464 + t9466 + t9483;
  t9485 = -1.*t5006*t9484;
  t9486 = -1.*t9376;
  t9487 = 1. + t9486;
  t9488 = 0.325*t9487;
  t9489 = -1.*t9308*t9471;
  t9490 = t9376*t9479;
  t9491 = t9488 + t9489 + t9490;
  t9492 = t9391*t9491;
  t9493 = t9485 + t9492;
  t9495 = 0.068*t9298;
  t9496 = t3448*t9482;
  t9497 = t9495 + t9496;
  t9389 = t3448*t5652*t9384;
  t9399 = t3245*t9398;
  t9400 = t9389 + t9399;
  t9505 = t9391*t9484;
  t9506 = t5006*t9491;
  t9507 = t9505 + t9506;
  t9501 = t3245*t9493;
  t9502 = t5652*t9497;
  t9503 = t9501 + t9502;
  t9494 = -1.*t5652*t9493;
  t9498 = t3245*t9497;
  t9499 = t9494 + t9498;
  t9402 = t3448*t5652*t9395;
  t9409 = t3245*t9408;
  t9410 = t9402 + t9409;
  t9508 = t9391*t3448*t9507;
  t9511 = -1.*t9507*t9425;
  t9518 = t9507*t9425;
  t9523 = -1.*t9507*t9437;
  t9532 = -1.*t9391*t3448*t9507;
  t9535 = t9507*t9437;
  t9564 = -1.*t9298*t9497;
  t9567 = t3448*t9497*t9395;
  t9544 = t9298*t9497;
  t9547 = -1.*t3448*t9497*t9384;
  t9557 = -1.*t3448*t9497*t9395;
  t9553 = t3448*t9497*t9384;
  t9597 = t9491*t9395;
  t9592 = -1.*t9491*t9405;
  p_output1[0]=t9400*var2[0] + t9305*var2[1] + t9410*var2[2];
  p_output1[1]=(t9413*t9425 - 1.*t9415*t9430)*var2[0] + (t3448*t9391*t9413 - 1.*t9415*t9418)*var2[1] + (t9413*t9437 - 1.*t9415*t9442)*var2[2];
  p_output1[2]=(t9415*t9425 + t9413*t9430)*var2[0] + (t3448*t9391*t9415 + t9413*t9418)*var2[1] + (t9415*t9437 + t9413*t9442)*var2[2];
  p_output1[3]=(t9410*(-1.*t9418*t9499 - 1.*t9305*t9503 + t9532) + t9305*(t9442*t9499 + t9410*t9503 + t9535))*var2[0] + (t9410*(t9430*t9499 + t9400*t9503 + t9518) + t9400*(-1.*t9442*t9499 - 1.*t9410*t9503 + t9523))*var2[1] + (t9400*(t9418*t9499 + t9305*t9503 + t9508) + t9305*(-1.*t9430*t9499 - 1.*t9400*t9503 + t9511))*var2[2];
  p_output1[4]=(t9437*(t3448*t5006*t9493 + t9532 + t9564) + t3448*t9391*(t9408*t9493 + t9535 + t9567))*var2[0] + (t9437*(t9398*t9493 + t9518 + t9553) + t9425*(-1.*t9408*t9493 + t9523 + t9557))*var2[1] + (t9425*(-1.*t3448*t5006*t9493 + t9508 + t9544) + t3448*t9391*(-1.*t9398*t9493 + t9511 + t9547))*var2[2];
  p_output1[5]=(t3448*t9395*(-1.*t3448*t9484 + t9564) + t9298*(-1.*t9298*t9395*t9484 + t9405*t9491 + t9567))*var2[0] + (t3448*t9384*(t9298*t9395*t9484 + t9557 + t9592) + t3448*t9395*(-1.*t9298*t9384*t9484 + t9553 + t9597))*var2[1] + (t3448*t9384*(t3448*t9484 + t9544) + t9298*(t9298*t9384*t9484 - 1.*t9395*t9491 + t9547))*var2[2];
  p_output1[6]=(-0.1575*t9384 - 0.2255*t9405)*var2[0] + (t9395*(-1.*t9395*t9482 + t9592) + t9405*(t9384*t9482 + t9597))*var2[1] + 0.068*t9395*var2[2];
  p_output1[7]=(0.325*t9377 - 1.*t9307*t9471 - 1.*t9377*t9479)*var2[0] + (-0.325*t9307 - 1.*t9377*t9471 + t9307*t9479)*var2[2];
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

#include "fFlFoot_vec_ParallelImpact2.hh"

namespace SymFunction
{

void fFlFoot_vec_ParallelImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
