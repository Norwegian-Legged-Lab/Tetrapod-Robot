/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:39 GMT+02:00
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
  double t7221;
  double t7239;
  double t7256;
  double t7258;
  double t7259;
  double t7262;
  double t7263;
  double t7281;
  double t2415;
  double t7334;
  double t3200;
  double t7335;
  double t7338;
  double t7339;
  double t7341;
  double t7337;
  double t7336;
  double t7345;
  double t7346;
  double t7417;
  double t7423;
  double t7382;
  double t7383;
  double t7384;
  double t7396;
  double t7402;
  double t7413;
  double t7418;
  double t7419;
  double t7421;
  double t7427;
  double t7428;
  double t7436;
  double t7443;
  double t7444;
  double t7445;
  double t7461;
  double t7462;
  double t7464;
  double t7466;
  double t7467;
  double t7468;
  double t7485;
  double t7486;
  double t7487;
  double t7491;
  double t7492;
  double t7493;
  double t7494;
  double t7495;
  double t7496;
  double t7484;
  double t7489;
  double t7497;
  double t7498;
  double t7362;
  double t7379;
  double t7380;
  double t7480;
  double t7481;
  double t7482;
  double t7483;
  double t7499;
  double t7500;
  double t7501;
  double t7502;
  double t7503;
  double t7504;
  double t7505;
  double t7507;
  double t7508;
  double t7510;
  double t7511;
  double t7514;
  double t7515;
  double t7516;
  double t7381;
  double t7415;
  double t7416;
  double t7524;
  double t7525;
  double t7526;
  double t7520;
  double t7521;
  double t7522;
  double t7513;
  double t7517;
  double t7518;
  double t7270;
  double t7347;
  double t7349;
  double t7527;
  double t7530;
  double t7536;
  double t7541;
  double t7549;
  double t7552;
  double t7559;
  double t7562;
  double t7571;
  double t7567;
  double t7577;
  double t7580;
  double t7598;
  double t7593;
  t7221 = Cos(var1[8]);
  t7239 = Sin(var1[7]);
  t7256 = t7221*t7239;
  t7258 = Cos(var1[7]);
  t7259 = Sin(var1[8]);
  t7262 = -1.*t7258*t7259;
  t7263 = t7256 + t7262;
  t7281 = Cos(var1[4]);
  t2415 = Cos(var1[6]);
  t7334 = Sin(var1[5]);
  t3200 = Sin(var1[4]);
  t7335 = Sin(var1[6]);
  t7338 = t7258*t7221;
  t7339 = t7239*t7259;
  t7341 = t7338 + t7339;
  t7337 = Cos(var1[5]);
  t7336 = t7334*t7335*t7263;
  t7345 = t7337*t7341;
  t7346 = t7336 + t7345;
  t7417 = Cos(var1[3]);
  t7423 = Sin(var1[3]);
  t7382 = -1.*t7221*t7239;
  t7383 = t7258*t7259;
  t7384 = t7382 + t7383;
  t7396 = t7337*t7384;
  t7402 = t7334*t7335*t7341;
  t7413 = t7396 + t7402;
  t7418 = -1.*t7337*t7335*t7263;
  t7419 = t7334*t7341;
  t7421 = t7418 + t7419;
  t7427 = t7281*t2415*t7263;
  t7428 = -1.*t3200*t7346;
  t7436 = t7427 + t7428;
  t7443 = t2415*t3200*t7334;
  t7444 = t7281*t7335;
  t7445 = t7443 + t7444;
  t7461 = t7334*t7384;
  t7462 = -1.*t7337*t7335*t7341;
  t7464 = t7461 + t7462;
  t7466 = t7281*t2415*t7341;
  t7467 = -1.*t3200*t7413;
  t7468 = t7466 + t7467;
  t7485 = -0.0641*t7221;
  t7486 = -0.28*t7259;
  t7487 = t7485 + t7486;
  t7491 = -1.*t7221;
  t7492 = 1. + t7491;
  t7493 = 0.075*t7492;
  t7494 = 0.355*t7221;
  t7495 = -0.0641*t7259;
  t7496 = t7493 + t7494 + t7495;
  t7484 = -0.325*t7239;
  t7489 = t7258*t7487;
  t7497 = t7239*t7496;
  t7498 = t7484 + t7489 + t7497;
  t7362 = -1.*t7281*t2415*t7334;
  t7379 = t3200*t7335;
  t7380 = t7362 + t7379;
  t7480 = -1.*t2415;
  t7481 = 1. + t7480;
  t7482 = 0.1575*t7481;
  t7483 = 0.2255*t2415;
  t7499 = -1.*t7335*t7498;
  t7500 = t7482 + t7483 + t7499;
  t7501 = -1.*t7334*t7500;
  t7502 = -1.*t7258;
  t7503 = 1. + t7502;
  t7504 = 0.325*t7503;
  t7505 = -1.*t7239*t7487;
  t7507 = t7258*t7496;
  t7508 = t7504 + t7505 + t7507;
  t7510 = t7337*t7508;
  t7511 = t7501 + t7510;
  t7514 = 0.068*t7335;
  t7515 = t2415*t7498;
  t7516 = t7514 + t7515;
  t7381 = t2415*t3200*t7341;
  t7415 = t7281*t7413;
  t7416 = t7381 + t7415;
  t7524 = t7337*t7500;
  t7525 = t7334*t7508;
  t7526 = t7524 + t7525;
  t7520 = t7281*t7511;
  t7521 = t3200*t7516;
  t7522 = t7520 + t7521;
  t7513 = -1.*t3200*t7511;
  t7517 = t7281*t7516;
  t7518 = t7513 + t7517;
  t7270 = t2415*t3200*t7263;
  t7347 = t7281*t7346;
  t7349 = t7270 + t7347;
  t7527 = -1.*t7337*t2415*t7526;
  t7530 = t7526*t7464;
  t7536 = t7526*t7421;
  t7541 = -1.*t7526*t7464;
  t7549 = t7337*t2415*t7526;
  t7552 = -1.*t7526*t7421;
  t7559 = -1.*t7335*t7516;
  t7562 = t2415*t7516*t7341;
  t7571 = -1.*t2415*t7516*t7341;
  t7567 = t2415*t7516*t7263;
  t7577 = t7335*t7516;
  t7580 = -1.*t2415*t7516*t7263;
  t7598 = t7508*t7341;
  t7593 = -1.*t7508*t7384;
  p_output1[0]=t7349;
  p_output1[1]=t7380;
  p_output1[2]=t7416;
  p_output1[3]=t7417*t7421 - 1.*t7423*t7436;
  p_output1[4]=t2415*t7337*t7417 - 1.*t7423*t7445;
  p_output1[5]=t7417*t7464 - 1.*t7423*t7468;
  p_output1[6]=t7421*t7423 + t7417*t7436;
  p_output1[7]=t2415*t7337*t7423 + t7417*t7445;
  p_output1[8]=t7423*t7464 + t7417*t7468;
  p_output1[9]=t7416*(-1.*t7445*t7518 - 1.*t7380*t7522 + t7527) + t7380*(t7468*t7518 + t7416*t7522 + t7530);
  p_output1[10]=t7416*(t7436*t7518 + t7349*t7522 + t7536) + t7349*(-1.*t7468*t7518 - 1.*t7416*t7522 + t7541);
  p_output1[11]=t7349*(t7445*t7518 + t7380*t7522 + t7549) + t7380*(-1.*t7436*t7518 - 1.*t7349*t7522 + t7552);
  p_output1[12]=t7464*(t2415*t7334*t7511 + t7527 + t7559) + t2415*t7337*(t7413*t7511 + t7530 + t7562);
  p_output1[13]=t7464*(t7346*t7511 + t7536 + t7567) + t7421*(-1.*t7413*t7511 + t7541 + t7571);
  p_output1[14]=t7421*(-1.*t2415*t7334*t7511 + t7549 + t7577) + t2415*t7337*(-1.*t7346*t7511 + t7552 + t7580);
  p_output1[15]=t2415*t7341*(-1.*t2415*t7500 + t7559) + t7335*(-1.*t7335*t7341*t7500 + t7384*t7508 + t7562);
  p_output1[16]=t2415*t7263*(t7335*t7341*t7500 + t7571 + t7593) + t2415*t7341*(-1.*t7263*t7335*t7500 + t7567 + t7598);
  p_output1[17]=t2415*t7263*(t2415*t7500 + t7577) + t7335*(t7263*t7335*t7500 - 1.*t7341*t7508 + t7580);
  p_output1[18]=-0.1575*t7263 - 0.2255*t7384;
  p_output1[19]=t7341*(-1.*t7341*t7498 + t7593) + t7384*(t7263*t7498 + t7598);
  p_output1[20]=0.068*t7341;
  p_output1[21]=0.325*t7259 - 1.*t7221*t7487 - 1.*t7259*t7496;
  p_output1[22]=0;
  p_output1[23]=-0.325*t7221 - 1.*t7259*t7487 + t7221*t7496;
  p_output1[24]=-0.0641;
  p_output1[25]=0;
  p_output1[26]=-0.28;
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

#include "Jh_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void Jh_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
