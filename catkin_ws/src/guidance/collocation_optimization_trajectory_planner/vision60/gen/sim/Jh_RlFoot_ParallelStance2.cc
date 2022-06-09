/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:41:24 GMT+02:00
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
  double t3644;
  double t3480;
  double t3501;
  double t3745;
  double t3633;
  double t3898;
  double t3903;
  double t7341;
  double t3905;
  double t3166;
  double t5222;
  double t7342;
  double t7317;
  double t7334;
  double t7335;
  double t5861;
  double t7337;
  double t7343;
  double t7344;
  double t7518;
  double t7527;
  double t7475;
  double t7483;
  double t7490;
  double t7494;
  double t7495;
  double t7499;
  double t7519;
  double t7520;
  double t7521;
  double t7528;
  double t7529;
  double t7530;
  double t7540;
  double t7541;
  double t7542;
  double t7556;
  double t7560;
  double t7564;
  double t7569;
  double t7570;
  double t7571;
  double t7462;
  double t7504;
  double t7517;
  double t7603;
  double t7604;
  double t7605;
  double t7607;
  double t7608;
  double t7609;
  double t7610;
  double t7611;
  double t7612;
  double t7381;
  double t7383;
  double t7397;
  double t7602;
  double t7606;
  double t7613;
  double t7614;
  double t7618;
  double t7619;
  double t7620;
  double t7621;
  double t7622;
  double t7623;
  double t7597;
  double t7599;
  double t7600;
  double t7601;
  double t7615;
  double t7616;
  double t7627;
  double t7628;
  double t7629;
  double t7632;
  double t7634;
  double t7635;
  double t7617;
  double t7624;
  double t7625;
  double t7630;
  double t7639;
  double t7643;
  double t7646;
  double t7648;
  double t7649;
  double t3925;
  double t7359;
  double t7380;
  double t7626;
  double t7653;
  double t7659;
  double t7664;
  double t7670;
  double t7675;
  double t7685;
  double t7691;
  double t7703;
  double t7699;
  double t7708;
  double t7712;
  double t7745;
  double t7733;
  t3644 = Cos(var1[10]);
  t3480 = Cos(var1[11]);
  t3501 = Sin(var1[10]);
  t3745 = Sin(var1[11]);
  t3633 = t3480*t3501;
  t3898 = -1.*t3644*t3745;
  t3903 = t3633 + t3898;
  t7341 = Sin(var1[9]);
  t3905 = Sin(var1[4]);
  t3166 = Cos(var1[9]);
  t5222 = Cos(var1[4]);
  t7342 = Sin(var1[5]);
  t7317 = t3644*t3480;
  t7334 = t3501*t3745;
  t7335 = t7317 + t7334;
  t5861 = Cos(var1[5]);
  t7337 = t5861*t7335;
  t7343 = t7341*t3903*t7342;
  t7344 = t7337 + t7343;
  t7518 = Cos(var1[3]);
  t7527 = Sin(var1[3]);
  t7475 = -1.*t3480*t3501;
  t7483 = t3644*t3745;
  t7490 = t7475 + t7483;
  t7494 = t5861*t7490;
  t7495 = t7341*t7335*t7342;
  t7499 = t7494 + t7495;
  t7519 = -1.*t5861*t7341*t3903;
  t7520 = t7335*t7342;
  t7521 = t7519 + t7520;
  t7528 = t3166*t5222*t3903;
  t7529 = -1.*t3905*t7344;
  t7530 = t7528 + t7529;
  t7540 = t5222*t7341;
  t7541 = t3166*t3905*t7342;
  t7542 = t7540 + t7541;
  t7556 = -1.*t5861*t7341*t7335;
  t7560 = t7490*t7342;
  t7564 = t7556 + t7560;
  t7569 = t3166*t5222*t7335;
  t7570 = -1.*t3905*t7499;
  t7571 = t7569 + t7570;
  t7462 = t3166*t7335*t3905;
  t7504 = t5222*t7499;
  t7517 = t7462 + t7504;
  t7603 = -0.0641*t3480;
  t7604 = -0.28*t3745;
  t7605 = t7603 + t7604;
  t7607 = -1.*t3480;
  t7608 = 1. + t7607;
  t7609 = -0.575*t7608;
  t7610 = -0.295*t3480;
  t7611 = -0.0641*t3745;
  t7612 = t7609 + t7610 + t7611;
  t7381 = t7341*t3905;
  t7383 = -1.*t3166*t5222*t7342;
  t7397 = t7381 + t7383;
  t7602 = 0.325*t3501;
  t7606 = t3644*t7605;
  t7613 = t3501*t7612;
  t7614 = t7602 + t7606 + t7613;
  t7618 = -1.*t3644;
  t7619 = 1. + t7618;
  t7620 = -0.325*t7619;
  t7621 = -1.*t3501*t7605;
  t7622 = t3644*t7612;
  t7623 = t7620 + t7621 + t7622;
  t7597 = -1.*t3166;
  t7599 = 1. + t7597;
  t7600 = 0.1575*t7599;
  t7601 = 0.2255*t3166;
  t7615 = -1.*t7341*t7614;
  t7616 = t7600 + t7601 + t7615;
  t7627 = 0.068*t7341;
  t7628 = t3166*t7614;
  t7629 = t7627 + t7628;
  t7632 = t5861*t7623;
  t7634 = -1.*t7616*t7342;
  t7635 = t7632 + t7634;
  t7617 = t5861*t7616;
  t7624 = t7623*t7342;
  t7625 = t7617 + t7624;
  t7630 = t7629*t3905;
  t7639 = t5222*t7635;
  t7643 = t7630 + t7639;
  t7646 = t5222*t7629;
  t7648 = -1.*t3905*t7635;
  t7649 = t7646 + t7648;
  t3925 = t3166*t3903*t3905;
  t7359 = t5222*t7344;
  t7380 = t3925 + t7359;
  t7626 = -1.*t3166*t5861*t7625;
  t7653 = t7625*t7564;
  t7659 = t7625*t7521;
  t7664 = -1.*t7625*t7564;
  t7670 = t3166*t5861*t7625;
  t7675 = -1.*t7625*t7521;
  t7685 = -1.*t7341*t7629;
  t7691 = t3166*t7629*t7335;
  t7703 = -1.*t3166*t7629*t7335;
  t7699 = t3166*t7629*t3903;
  t7708 = t7341*t7629;
  t7712 = -1.*t3166*t7629*t3903;
  t7745 = t7623*t7335;
  t7733 = -1.*t7623*t7490;
  p_output1[0]=t7380;
  p_output1[1]=t7397;
  p_output1[2]=t7517;
  p_output1[3]=t7518*t7521 - 1.*t7527*t7530;
  p_output1[4]=t3166*t5861*t7518 - 1.*t7527*t7542;
  p_output1[5]=t7518*t7564 - 1.*t7527*t7571;
  p_output1[6]=t7521*t7527 + t7518*t7530;
  p_output1[7]=t3166*t5861*t7527 + t7518*t7542;
  p_output1[8]=t7527*t7564 + t7518*t7571;
  p_output1[9]=t7517*(t7626 - 1.*t7397*t7643 - 1.*t7542*t7649) + t7397*(t7517*t7643 + t7571*t7649 + t7653);
  p_output1[10]=t7517*(t7380*t7643 + t7530*t7649 + t7659) + t7380*(-1.*t7517*t7643 - 1.*t7571*t7649 + t7664);
  p_output1[11]=t7380*(t7397*t7643 + t7542*t7649 + t7670) + t7397*(-1.*t7380*t7643 - 1.*t7530*t7649 + t7675);
  p_output1[12]=t7564*(t7626 + t3166*t7342*t7635 + t7685) + t3166*t5861*(t7499*t7635 + t7653 + t7691);
  p_output1[13]=t7564*(t7344*t7635 + t7659 + t7699) + t7521*(-1.*t7499*t7635 + t7664 + t7703);
  p_output1[14]=t7521*(-1.*t3166*t7342*t7635 + t7670 + t7708) + t3166*t5861*(-1.*t7344*t7635 + t7675 + t7712);
  p_output1[15]=t3166*t7335*(-1.*t3166*t7616 + t7685) + t7341*(-1.*t7335*t7341*t7616 + t7490*t7623 + t7691);
  p_output1[16]=t3166*t3903*(t7335*t7341*t7616 + t7703 + t7733) + t3166*t7335*(-1.*t3903*t7341*t7616 + t7699 + t7745);
  p_output1[17]=t3166*t3903*(t3166*t7616 + t7708) + t7341*(t3903*t7341*t7616 - 1.*t7335*t7623 + t7712);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.1575*t3903 - 0.2255*t7490;
  p_output1[28]=t7335*(-1.*t7335*t7614 + t7733) + t7490*(t3903*t7614 + t7745);
  p_output1[29]=0.068*t7335;
  p_output1[30]=-0.325*t3745 - 1.*t3480*t7605 - 1.*t3745*t7612;
  p_output1[31]=0;
  p_output1[32]=0.325*t3480 - 1.*t3745*t7605 + t3480*t7612;
  p_output1[33]=-0.0641;
  p_output1[34]=0;
  p_output1[35]=-0.28;
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

#include "Jh_RlFoot_ParallelStance2.hh"

namespace SymFunction
{

void Jh_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
