/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:59 GMT+02:00
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
  double t9337;
  double t9340;
  double t9332;
  double t9338;
  double t9341;
  double t9411;
  double t9416;
  double t9420;
  double t9421;
  double t9422;
  double t9423;
  double t9425;
  double t9430;
  double t9431;
  double t9432;
  double t9429;
  double t9449;
  double t9451;
  double t9427;
  double t9433;
  double t9434;
  double t9439;
  double t9440;
  double t9441;
  double t9442;
  double t9443;
  double t9444;
  double t9452;
  double t9453;
  double t9455;
  double t9460;
  double t9461;
  double t9462;
  double t9464;
  double t9466;
  double t9467;
  double t9472;
  double t9473;
  double t9475;
  double t9477;
  double t9478;
  double t9480;
  double t9505;
  double t9506;
  double t9508;
  double t9510;
  double t9512;
  double t9513;
  double t9514;
  double t9515;
  double t9516;
  double t9504;
  double t9509;
  double t9517;
  double t9518;
  double t9339;
  double t9400;
  double t9409;
  double t9499;
  double t9500;
  double t9502;
  double t9503;
  double t9519;
  double t9520;
  double t9521;
  double t9522;
  double t9523;
  double t9524;
  double t9525;
  double t9526;
  double t9527;
  double t9528;
  double t9529;
  double t9531;
  double t9532;
  double t9533;
  double t9426;
  double t9435;
  double t9436;
  double t9541;
  double t9542;
  double t9543;
  double t9537;
  double t9538;
  double t9539;
  double t9530;
  double t9534;
  double t9535;
  double t9438;
  double t9445;
  double t9446;
  double t9544;
  double t9547;
  double t9554;
  double t9559;
  double t9568;
  double t9571;
  double t9600;
  double t9603;
  double t9580;
  double t9583;
  double t9593;
  double t9589;
  double t9633;
  double t9628;
  t9337 = Cos(var1[6]);
  t9340 = Sin(var1[4]);
  t9332 = Cos(var1[4]);
  t9338 = Sin(var1[5]);
  t9341 = Sin(var1[6]);
  t9411 = Cos(var1[8]);
  t9416 = Sin(var1[7]);
  t9420 = t9411*t9416;
  t9421 = Cos(var1[7]);
  t9422 = Sin(var1[8]);
  t9423 = -1.*t9421*t9422;
  t9425 = t9420 + t9423;
  t9430 = t9421*t9411;
  t9431 = t9416*t9422;
  t9432 = t9430 + t9431;
  t9429 = Cos(var1[5]);
  t9449 = Cos(var1[3]);
  t9451 = Sin(var1[3]);
  t9427 = t9338*t9341*t9425;
  t9433 = t9429*t9432;
  t9434 = t9427 + t9433;
  t9439 = -1.*t9411*t9416;
  t9440 = t9421*t9422;
  t9441 = t9439 + t9440;
  t9442 = t9429*t9441;
  t9443 = t9338*t9341*t9432;
  t9444 = t9442 + t9443;
  t9452 = t9337*t9340*t9338;
  t9453 = t9332*t9341;
  t9455 = t9452 + t9453;
  t9460 = -1.*t9429*t9341*t9425;
  t9461 = t9338*t9432;
  t9462 = t9460 + t9461;
  t9464 = t9332*t9337*t9425;
  t9466 = -1.*t9340*t9434;
  t9467 = t9464 + t9466;
  t9472 = t9338*t9441;
  t9473 = -1.*t9429*t9341*t9432;
  t9475 = t9472 + t9473;
  t9477 = t9332*t9337*t9432;
  t9478 = -1.*t9340*t9444;
  t9480 = t9477 + t9478;
  t9505 = -0.0641*t9411;
  t9506 = -0.28*t9422;
  t9508 = t9505 + t9506;
  t9510 = -1.*t9411;
  t9512 = 1. + t9510;
  t9513 = 0.075*t9512;
  t9514 = 0.355*t9411;
  t9515 = -0.0641*t9422;
  t9516 = t9513 + t9514 + t9515;
  t9504 = -0.325*t9416;
  t9509 = t9421*t9508;
  t9517 = t9416*t9516;
  t9518 = t9504 + t9509 + t9517;
  t9339 = -1.*t9332*t9337*t9338;
  t9400 = t9340*t9341;
  t9409 = t9339 + t9400;
  t9499 = -1.*t9337;
  t9500 = 1. + t9499;
  t9502 = 0.1575*t9500;
  t9503 = 0.2255*t9337;
  t9519 = -1.*t9341*t9518;
  t9520 = t9502 + t9503 + t9519;
  t9521 = -1.*t9338*t9520;
  t9522 = -1.*t9421;
  t9523 = 1. + t9522;
  t9524 = 0.325*t9523;
  t9525 = -1.*t9416*t9508;
  t9526 = t9421*t9516;
  t9527 = t9524 + t9525 + t9526;
  t9528 = t9429*t9527;
  t9529 = t9521 + t9528;
  t9531 = 0.068*t9341;
  t9532 = t9337*t9518;
  t9533 = t9531 + t9532;
  t9426 = t9337*t9340*t9425;
  t9435 = t9332*t9434;
  t9436 = t9426 + t9435;
  t9541 = t9429*t9520;
  t9542 = t9338*t9527;
  t9543 = t9541 + t9542;
  t9537 = t9332*t9529;
  t9538 = t9340*t9533;
  t9539 = t9537 + t9538;
  t9530 = -1.*t9340*t9529;
  t9534 = t9332*t9533;
  t9535 = t9530 + t9534;
  t9438 = t9337*t9340*t9432;
  t9445 = t9332*t9444;
  t9446 = t9438 + t9445;
  t9544 = t9429*t9337*t9543;
  t9547 = -1.*t9543*t9462;
  t9554 = t9543*t9462;
  t9559 = -1.*t9543*t9475;
  t9568 = -1.*t9429*t9337*t9543;
  t9571 = t9543*t9475;
  t9600 = -1.*t9341*t9533;
  t9603 = t9337*t9533*t9432;
  t9580 = t9341*t9533;
  t9583 = -1.*t9337*t9533*t9425;
  t9593 = -1.*t9337*t9533*t9432;
  t9589 = t9337*t9533*t9425;
  t9633 = t9527*t9432;
  t9628 = -1.*t9527*t9441;
  p_output1[0]=t9436*var2[0] + t9409*var2[1] + t9446*var2[2];
  p_output1[1]=(t9449*t9462 - 1.*t9451*t9467)*var2[0] + (t9337*t9429*t9449 - 1.*t9451*t9455)*var2[1] + (t9449*t9475 - 1.*t9451*t9480)*var2[2];
  p_output1[2]=(t9451*t9462 + t9449*t9467)*var2[0] + (t9337*t9429*t9451 + t9449*t9455)*var2[1] + (t9451*t9475 + t9449*t9480)*var2[2];
  p_output1[3]=(t9446*(-1.*t9455*t9535 - 1.*t9409*t9539 + t9568) + t9409*(t9480*t9535 + t9446*t9539 + t9571))*var2[0] + (t9446*(t9467*t9535 + t9436*t9539 + t9554) + t9436*(-1.*t9480*t9535 - 1.*t9446*t9539 + t9559))*var2[1] + (t9436*(t9455*t9535 + t9409*t9539 + t9544) + t9409*(-1.*t9467*t9535 - 1.*t9436*t9539 + t9547))*var2[2];
  p_output1[4]=(t9475*(t9337*t9338*t9529 + t9568 + t9600) + t9337*t9429*(t9444*t9529 + t9571 + t9603))*var2[0] + (t9475*(t9434*t9529 + t9554 + t9589) + t9462*(-1.*t9444*t9529 + t9559 + t9593))*var2[1] + (t9462*(-1.*t9337*t9338*t9529 + t9544 + t9580) + t9337*t9429*(-1.*t9434*t9529 + t9547 + t9583))*var2[2];
  p_output1[5]=(t9337*t9432*(-1.*t9337*t9520 + t9600) + t9341*(-1.*t9341*t9432*t9520 + t9441*t9527 + t9603))*var2[0] + (t9337*t9425*(t9341*t9432*t9520 + t9593 + t9628) + t9337*t9432*(-1.*t9341*t9425*t9520 + t9589 + t9633))*var2[1] + (t9337*t9425*(t9337*t9520 + t9580) + t9341*(t9341*t9425*t9520 - 1.*t9432*t9527 + t9583))*var2[2];
  p_output1[6]=(-0.1575*t9425 - 0.2255*t9441)*var2[0] + (t9432*(-1.*t9432*t9518 + t9628) + t9441*(t9425*t9518 + t9633))*var2[1] + 0.068*t9432*var2[2];
  p_output1[7]=(0.325*t9422 - 1.*t9411*t9508 - 1.*t9422*t9516)*var2[0] + (-0.325*t9411 - 1.*t9422*t9508 + t9411*t9516)*var2[2];
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

#include "fFlFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fFlFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
