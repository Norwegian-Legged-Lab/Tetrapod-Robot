/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:26 GMT+02:00
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
  double t8992;
  double t8715;
  double t8720;
  double t9018;
  double t8731;
  double t9227;
  double t9251;
  double t9312;
  double t9340;
  double t9317;
  double t9324;
  double t9325;
  double t9341;
  double t8446;
  double t9297;
  double t9262;
  double t9338;
  double t9346;
  double t9348;
  double t9402;
  double t9377;
  double t9382;
  double t9398;
  double t9373;
  double t9407;
  double t9410;
  double t9411;
  double t9465;
  double t9466;
  double t9468;
  double t9476;
  double t9478;
  double t9479;
  double t9480;
  double t9482;
  double t9484;
  double t9464;
  double t9469;
  double t9485;
  double t9487;
  double t9499;
  double t9501;
  double t9503;
  double t9505;
  double t9506;
  double t9508;
  double t9447;
  double t9448;
  double t9452;
  double t9463;
  double t9488;
  double t9494;
  double t9522;
  double t9525;
  double t9528;
  double t9533;
  double t9534;
  double t9536;
  double t9513;
  double t9515;
  double t9521;
  double t9496;
  double t9509;
  double t9510;
  double t9424;
  double t9426;
  double t9432;
  double t9530;
  double t9538;
  double t9541;
  double t9422;
  double t9434;
  double t9437;
  double t9438;
  double t9443;
  double t9446;
  double t9553;
  double t9555;
  double t9556;
  double t9562;
  double t9567;
  double t9569;
  double t9511;
  double t9571;
  double t9583;
  double t9592;
  double t9543;
  double t9544;
  double t9550;
  double t9282;
  double t9364;
  double t9369;
  double t9575;
  double t9576;
  double t9577;
  double t9643;
  double t9649;
  double t9664;
  double t9658;
  double t9697;
  double t9682;
  double t9754;
  double t9798;
  double t9819;
  double t9825;
  t8992 = Cos(var1[16]);
  t8715 = Cos(var1[17]);
  t8720 = Sin(var1[16]);
  t9018 = Sin(var1[17]);
  t8731 = t8715*t8720;
  t9227 = -1.*t8992*t9018;
  t9251 = t8731 + t9227;
  t9312 = Cos(var1[5]);
  t9340 = Sin(var1[15]);
  t9317 = t8992*t8715;
  t9324 = t8720*t9018;
  t9325 = t9317 + t9324;
  t9341 = Sin(var1[5]);
  t8446 = Cos(var1[15]);
  t9297 = Cos(var1[4]);
  t9262 = Sin(var1[4]);
  t9338 = t9312*t9325;
  t9346 = t9340*t9251*t9341;
  t9348 = t9338 + t9346;
  t9402 = Sin(var1[3]);
  t9377 = -1.*t9312*t9340*t9251;
  t9382 = t9325*t9341;
  t9398 = t9377 + t9382;
  t9373 = Cos(var1[3]);
  t9407 = t8446*t9297*t9251;
  t9410 = -1.*t9262*t9348;
  t9411 = t9407 + t9410;
  t9465 = -0.0641*t8715;
  t9466 = -0.28*t9018;
  t9468 = t9465 + t9466;
  t9476 = -1.*t8715;
  t9478 = 1. + t9476;
  t9479 = -0.575*t9478;
  t9480 = -0.295*t8715;
  t9482 = -0.0641*t9018;
  t9484 = t9479 + t9480 + t9482;
  t9464 = 0.325*t8720;
  t9469 = t8992*t9468;
  t9485 = t8720*t9484;
  t9487 = t9464 + t9469 + t9485;
  t9499 = -1.*t8992;
  t9501 = 1. + t9499;
  t9503 = -0.325*t9501;
  t9505 = -1.*t8720*t9468;
  t9506 = t8992*t9484;
  t9508 = t9503 + t9505 + t9506;
  t9447 = -1.*t8446;
  t9448 = 1. + t9447;
  t9452 = -0.1575*t9448;
  t9463 = -0.2255*t8446;
  t9488 = -1.*t9340*t9487;
  t9494 = t9452 + t9463 + t9488;
  t9522 = -0.068*t9340;
  t9525 = t8446*t9487;
  t9528 = t9522 + t9525;
  t9533 = t9312*t9508;
  t9534 = -1.*t9494*t9341;
  t9536 = t9533 + t9534;
  t9513 = t9340*t9262;
  t9515 = -1.*t8446*t9297*t9341;
  t9521 = t9513 + t9515;
  t9496 = t9312*t9494;
  t9509 = t9508*t9341;
  t9510 = t9496 + t9509;
  t9424 = -1.*t8715*t8720;
  t9426 = t8992*t9018;
  t9432 = t9424 + t9426;
  t9530 = t9528*t9262;
  t9538 = t9297*t9536;
  t9541 = t9530 + t9538;
  t9422 = t8446*t9325*t9262;
  t9434 = t9312*t9432;
  t9437 = t9340*t9325*t9341;
  t9438 = t9434 + t9437;
  t9443 = t9297*t9438;
  t9446 = t9422 + t9443;
  t9553 = t9297*t9528;
  t9555 = -1.*t9262*t9536;
  t9556 = t9553 + t9555;
  t9562 = -1.*t9312*t9340*t9325;
  t9567 = t9432*t9341;
  t9569 = t9562 + t9567;
  t9511 = -1.*t8446*t9312*t9510;
  t9571 = t9510*t9569;
  t9583 = -1.*t9340*t9528;
  t9592 = t8446*t9528*t9325;
  t9543 = t9297*t9340;
  t9544 = t8446*t9262*t9341;
  t9550 = t9543 + t9544;
  t9282 = t8446*t9251*t9262;
  t9364 = t9297*t9348;
  t9369 = t9282 + t9364;
  t9575 = t8446*t9297*t9325;
  t9576 = -1.*t9262*t9438;
  t9577 = t9575 + t9576;
  t9643 = t9510*t9398;
  t9649 = -1.*t9510*t9569;
  t9664 = -1.*t8446*t9528*t9325;
  t9658 = t8446*t9528*t9251;
  t9697 = t9508*t9325;
  t9682 = -1.*t9508*t9432;
  t9754 = t8446*t9312*t9510;
  t9798 = -1.*t9510*t9398;
  t9819 = t9340*t9528;
  t9825 = -1.*t8446*t9528*t9251;
  p_output1[0]=t9369;
  p_output1[1]=t9373*t9398 - 1.*t9402*t9411;
  p_output1[2]=t9398*t9402 + t9373*t9411;
  p_output1[3]=t9446*(t9511 - 1.*t9521*t9541 - 1.*t9550*t9556) + t9521*(t9446*t9541 + t9571 + t9556*t9577);
  p_output1[4]=t9569*(t9511 + t8446*t9341*t9536 + t9583) + t8446*t9312*(t9438*t9536 + t9571 + t9592);
  p_output1[5]=t8446*t9325*(-1.*t8446*t9494 + t9583) + t9340*(-1.*t9325*t9340*t9494 + t9432*t9508 + t9592);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0.1575*t9251 + 0.2255*t9432;
  p_output1[16]=-0.325*t9018 - 1.*t8715*t9468 - 1.*t9018*t9484;
  p_output1[17]=-0.0641;
  p_output1[18]=t9521;
  p_output1[19]=t8446*t9312*t9373 - 1.*t9402*t9550;
  p_output1[20]=t8446*t9312*t9402 + t9373*t9550;
  p_output1[21]=t9446*(t9369*t9541 + t9411*t9556 + t9643) + t9369*(-1.*t9446*t9541 - 1.*t9556*t9577 + t9649);
  p_output1[22]=t9569*(t9348*t9536 + t9643 + t9658) + t9398*(-1.*t9438*t9536 + t9649 + t9664);
  p_output1[23]=t8446*t9251*(t9325*t9340*t9494 + t9664 + t9682) + t8446*t9325*(-1.*t9251*t9340*t9494 + t9658 + t9697);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=t9325*(-1.*t9325*t9487 + t9682) + t9432*(t9251*t9487 + t9697);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t9446;
  p_output1[37]=t9373*t9569 - 1.*t9402*t9577;
  p_output1[38]=t9402*t9569 + t9373*t9577;
  p_output1[39]=t9369*(t9521*t9541 + t9550*t9556 + t9754) + t9521*(-1.*t9369*t9541 - 1.*t9411*t9556 + t9798);
  p_output1[40]=t9398*(-1.*t8446*t9341*t9536 + t9754 + t9819) + t8446*t9312*(-1.*t9348*t9536 + t9798 + t9825);
  p_output1[41]=t8446*t9251*(t8446*t9494 + t9819) + t9340*(t9251*t9340*t9494 - 1.*t9325*t9508 + t9825);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.068*t9325;
  p_output1[52]=0.325*t8715 - 1.*t9018*t9468 + t8715*t9484;
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
