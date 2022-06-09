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
  double t4120;
  double t3648;
  double t3815;
  double t4144;
  double t9456;
  double t9457;
  double t9458;
  double t9452;
  double t9467;
  double t9395;
  double t9468;
  double t9393;
  double t4112;
  double t9345;
  double t9387;
  double t9391;
  double t9463;
  double t9469;
  double t9470;
  double t9478;
  double t9474;
  double t9475;
  double t9476;
  double t9473;
  double t9479;
  double t9480;
  double t9481;
  double t9501;
  double t9502;
  double t9507;
  double t9508;
  double t9510;
  double t9511;
  double t9512;
  double t9513;
  double t9514;
  double t9515;
  double t9516;
  double t9517;
  double t9518;
  double t9522;
  double t9523;
  double t9524;
  double t9503;
  double t9504;
  double t9506;
  double t9519;
  double t9520;
  double t9528;
  double t9529;
  double t9530;
  double t9531;
  double t9532;
  double t9533;
  double t9534;
  double t9537;
  double t9538;
  double t9539;
  double t9521;
  double t9525;
  double t9526;
  double t9487;
  double t9488;
  double t9489;
  double t9490;
  double t9491;
  double t9492;
  double t9493;
  double t9495;
  double t9496;
  double t9535;
  double t9540;
  double t9542;
  double t9544;
  double t9545;
  double t9546;
  double t9550;
  double t9551;
  double t9552;
  double t9497;
  double t9498;
  double t9500;
  double t9527;
  double t9553;
  double t9392;
  double t9471;
  double t9472;
  double t9555;
  double t9556;
  double t9557;
  double t9588;
  double t9593;
  double t9599;
  double t9603;
  double t9630;
  double t9635;
  t4120 = Cos(var1[10]);
  t3648 = Cos(var1[11]);
  t3815 = Sin(var1[10]);
  t4144 = Sin(var1[11]);
  t9456 = -1.*t4120*t3648;
  t9457 = -1.*t3815*t4144;
  t9458 = t9456 + t9457;
  t9452 = Cos(var1[5]);
  t9467 = Sin(var1[9]);
  t9395 = Cos(var1[9]);
  t9468 = Sin(var1[5]);
  t9393 = Cos(var1[4]);
  t4112 = -1.*t3648*t3815;
  t9345 = t4120*t4144;
  t9387 = t4112 + t9345;
  t9391 = Sin(var1[4]);
  t9463 = t9395*t9452*t9458;
  t9469 = -1.*t9467*t9458*t9468;
  t9470 = t9463 + t9469;
  t9478 = Sin(var1[3]);
  t9474 = t9452*t9467*t9458;
  t9475 = t9395*t9458*t9468;
  t9476 = t9474 + t9475;
  t9473 = Cos(var1[3]);
  t9479 = t9393*t9387;
  t9480 = -1.*t9391*t9470;
  t9481 = t9479 + t9480;
  t9501 = -1.*t9395;
  t9502 = 1. + t9501;
  t9507 = -1.*t4120;
  t9508 = 1. + t9507;
  t9510 = -0.28121*t9508;
  t9511 = -1.*t3648;
  t9512 = 1. + t9511;
  t9513 = -0.50321*t9512;
  t9514 = -0.19821*t3648;
  t9515 = t9513 + t9514;
  t9516 = t4120*t9515;
  t9517 = 0.305*t3815*t4144;
  t9518 = t9510 + t9516 + t9517;
  t9522 = -0.15121*t9502;
  t9523 = t9395*t9518;
  t9524 = t9522 + t9523;
  t9503 = 0.15121*t9502;
  t9504 = 0.15121*t9395;
  t9506 = 0.15121*t9467;
  t9519 = t9467*t9518;
  t9520 = t9503 + t9504 + t9506 + t9519;
  t9528 = t9452*t9467;
  t9529 = t9395*t9468;
  t9530 = t9528 + t9529;
  t9531 = 0.28121*t3815;
  t9532 = t9515*t3815;
  t9533 = -0.305*t4120*t4144;
  t9534 = t9531 + t9532 + t9533;
  t9537 = t9452*t9524;
  t9538 = -1.*t9520*t9468;
  t9539 = t9537 + t9538;
  t9521 = t9452*t9520;
  t9525 = t9524*t9468;
  t9526 = t9521 + t9525;
  t9487 = t4120*t3648;
  t9488 = t3815*t4144;
  t9489 = t9487 + t9488;
  t9490 = t9489*t9391;
  t9491 = t9395*t9452*t9387;
  t9492 = -1.*t9467*t9387*t9468;
  t9493 = t9491 + t9492;
  t9495 = t9393*t9493;
  t9496 = t9490 + t9495;
  t9535 = t9534*t9391;
  t9540 = t9393*t9539;
  t9542 = t9535 + t9540;
  t9544 = t9393*t9534;
  t9545 = -1.*t9391*t9539;
  t9546 = t9544 + t9545;
  t9550 = t9452*t9467*t9387;
  t9551 = t9395*t9387*t9468;
  t9552 = t9550 + t9551;
  t9497 = -1.*t9395*t9452;
  t9498 = t9467*t9468;
  t9500 = t9497 + t9498;
  t9527 = -1.*t9500*t9526;
  t9553 = t9552*t9526;
  t9392 = t9387*t9391;
  t9471 = t9393*t9470;
  t9472 = t9392 + t9471;
  t9555 = t9393*t9489;
  t9556 = -1.*t9391*t9493;
  t9557 = t9555 + t9556;
  t9588 = -1.*t9552*t9526;
  t9593 = t9476*t9526;
  t9599 = -1.*t9534*t9489;
  t9603 = t9534*t9387;
  t9630 = t9500*t9526;
  t9635 = -1.*t9476*t9526;
  p_output1[0]=t9472;
  p_output1[1]=t9473*t9476 - 1.*t9478*t9481;
  p_output1[2]=t9476*t9478 + t9473*t9481;
  p_output1[3]=t9496*(t9527 - 1.*t9393*t9530*t9542 + t9391*t9530*t9546) + t9393*t9530*(t9496*t9542 + t9553 + t9546*t9557);
  p_output1[4]=(t9527 - 1.*t9530*t9539)*t9552 + t9500*(t9489*t9534 + t9493*t9539 + t9553);
  p_output1[5]=t9489*(t9395*t9520 - 1.*t9467*t9524);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t9458 + 0.15121*t9489;
  p_output1[10]=0.28121*t4144 - 0.305*t3648*t4144 + t4144*t9515;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t9393*t9530;
  p_output1[19]=t9473*t9500 + t9391*t9478*t9530;
  p_output1[20]=t9478*t9500 - 1.*t9391*t9473*t9530;
  p_output1[21]=t9472*(-1.*t9496*t9542 - 1.*t9546*t9557 + t9588) + t9496*(t9472*t9542 + t9481*t9546 + t9593);
  p_output1[22]=t9476*(-1.*t9493*t9539 + t9588 + t9599) + t9552*(t9470*t9539 + t9593 + t9603);
  p_output1[23]=t9387*(-1.*t9387*t9467*t9520 - 1.*t9387*t9395*t9524 + t9599) + t9489*(t9458*t9467*t9520 + t9395*t9458*t9524 + t9603);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t9387*(-1.*t9387*t9518 + t9599) + t9489*(t9458*t9518 + t9603);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t9496;
  p_output1[37]=t9473*t9552 - 1.*t9478*t9557;
  p_output1[38]=t9478*t9552 + t9473*t9557;
  p_output1[39]=t9472*(t9393*t9530*t9542 - 1.*t9391*t9530*t9546 + t9630) + t9393*t9530*(-1.*t9472*t9542 - 1.*t9481*t9546 + t9635);
  p_output1[40]=t9476*(t9530*t9539 + t9630) + t9500*(-1.*t9387*t9534 - 1.*t9470*t9539 + t9635);
  p_output1[41]=t9387*(-1.*t9395*t9520 + t9467*t9524);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t3648 + 0.305*Power(t4144,2) + t3648*t9515;
  p_output1[47]=-0.305;
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

#include "fRlFoot_map_DiagonalImpact2.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
