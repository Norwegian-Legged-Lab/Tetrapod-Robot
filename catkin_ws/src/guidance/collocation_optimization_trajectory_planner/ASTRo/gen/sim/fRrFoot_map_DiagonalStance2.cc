/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:55 GMT+02:00
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
  double t3572;
  double t37;
  double t376;
  double t4932;
  double t10796;
  double t10811;
  double t14490;
  double t6253;
  double t16688;
  double t6252;
  double t16925;
  double t6251;
  double t3571;
  double t5022;
  double t6244;
  double t6249;
  double t16394;
  double t17345;
  double t17608;
  double t18327;
  double t18314;
  double t18318;
  double t18319;
  double t18313;
  double t18328;
  double t18337;
  double t18354;
  double t18442;
  double t18466;
  double t18467;
  double t18471;
  double t18483;
  double t18484;
  double t18489;
  double t18490;
  double t18493;
  double t18504;
  double t18505;
  double t18507;
  double t18508;
  double t18509;
  double t18521;
  double t18522;
  double t18468;
  double t18469;
  double t18510;
  double t18517;
  double t18530;
  double t18531;
  double t18532;
  double t18537;
  double t18544;
  double t18545;
  double t18546;
  double t18548;
  double t18549;
  double t18550;
  double t18519;
  double t18525;
  double t18527;
  double t18376;
  double t18377;
  double t18413;
  double t18418;
  double t18419;
  double t18420;
  double t18433;
  double t18434;
  double t18435;
  double t18547;
  double t18558;
  double t18561;
  double t18564;
  double t18598;
  double t18599;
  double t18617;
  double t18621;
  double t18624;
  double t18439;
  double t18440;
  double t18441;
  double t18529;
  double t18627;
  double t6250;
  double t17765;
  double t18279;
  double t18629;
  double t18630;
  double t18633;
  double t18757;
  double t18765;
  double t18774;
  double t18784;
  double t18820;
  double t18825;
  t3572 = Cos(var1[16]);
  t37 = Cos(var1[17]);
  t376 = Sin(var1[16]);
  t4932 = Sin(var1[17]);
  t10796 = -1.*t3572*t37;
  t10811 = -1.*t376*t4932;
  t14490 = t10796 + t10811;
  t6253 = Cos(var1[5]);
  t16688 = Sin(var1[15]);
  t6252 = Cos(var1[15]);
  t16925 = Sin(var1[5]);
  t6251 = Cos(var1[4]);
  t3571 = -1.*t37*t376;
  t5022 = t3572*t4932;
  t6244 = t3571 + t5022;
  t6249 = Sin(var1[4]);
  t16394 = t6252*t6253*t14490;
  t17345 = -1.*t16688*t14490*t16925;
  t17608 = t16394 + t17345;
  t18327 = Sin(var1[3]);
  t18314 = t6253*t16688*t14490;
  t18318 = t6252*t14490*t16925;
  t18319 = t18314 + t18318;
  t18313 = Cos(var1[3]);
  t18328 = t6251*t6244;
  t18337 = -1.*t6249*t17608;
  t18354 = t18328 + t18337;
  t18442 = -1.*t6252;
  t18466 = 1. + t18442;
  t18467 = -0.15121*t18466;
  t18471 = -1.*t3572;
  t18483 = 1. + t18471;
  t18484 = -0.28121*t18483;
  t18489 = -1.*t37;
  t18490 = 1. + t18489;
  t18493 = -0.50321*t18490;
  t18504 = -0.19821*t37;
  t18505 = t18493 + t18504;
  t18507 = t3572*t18505;
  t18508 = 0.305*t376*t4932;
  t18509 = t18484 + t18507 + t18508;
  t18521 = t6252*t18509;
  t18522 = t18467 + t18521;
  t18468 = -0.15121*t6252;
  t18469 = 0.15121*t16688;
  t18510 = t16688*t18509;
  t18517 = t18467 + t18468 + t18469 + t18510;
  t18530 = t6253*t16688;
  t18531 = t6252*t16925;
  t18532 = t18530 + t18531;
  t18537 = 0.28121*t376;
  t18544 = t18505*t376;
  t18545 = -0.305*t3572*t4932;
  t18546 = t18537 + t18544 + t18545;
  t18548 = t6253*t18522;
  t18549 = -1.*t18517*t16925;
  t18550 = t18548 + t18549;
  t18519 = t6253*t18517;
  t18525 = t18522*t16925;
  t18527 = t18519 + t18525;
  t18376 = t3572*t37;
  t18377 = t376*t4932;
  t18413 = t18376 + t18377;
  t18418 = t18413*t6249;
  t18419 = t6252*t6253*t6244;
  t18420 = -1.*t16688*t6244*t16925;
  t18433 = t18419 + t18420;
  t18434 = t6251*t18433;
  t18435 = t18418 + t18434;
  t18547 = t18546*t6249;
  t18558 = t6251*t18550;
  t18561 = t18547 + t18558;
  t18564 = t6251*t18546;
  t18598 = -1.*t6249*t18550;
  t18599 = t18564 + t18598;
  t18617 = t6253*t16688*t6244;
  t18621 = t6252*t6244*t16925;
  t18624 = t18617 + t18621;
  t18439 = -1.*t6252*t6253;
  t18440 = t16688*t16925;
  t18441 = t18439 + t18440;
  t18529 = -1.*t18441*t18527;
  t18627 = t18624*t18527;
  t6250 = t6244*t6249;
  t17765 = t6251*t17608;
  t18279 = t6250 + t17765;
  t18629 = t6251*t18413;
  t18630 = -1.*t6249*t18433;
  t18633 = t18629 + t18630;
  t18757 = -1.*t18624*t18527;
  t18765 = t18319*t18527;
  t18774 = -1.*t18546*t18413;
  t18784 = t18546*t6244;
  t18820 = t18441*t18527;
  t18825 = -1.*t18319*t18527;
  p_output1[0]=t18279;
  p_output1[1]=t18313*t18319 - 1.*t18327*t18354;
  p_output1[2]=t18319*t18327 + t18313*t18354;
  p_output1[3]=t18532*(t18435*t18561 + t18627 + t18599*t18633)*t6251 + t18435*(t18529 + t18532*t18599*t6249 - 1.*t18532*t18561*t6251);
  p_output1[4]=(t18529 - 1.*t18532*t18550)*t18624 + t18441*(t18413*t18546 + t18433*t18550 + t18627);
  p_output1[5]=t18413*(-1.*t16688*t18522 + t18517*t6252);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t14490 - 0.15121*t18413;
  p_output1[16]=0.28121*t4932 + t18505*t4932 - 0.305*t37*t4932;
  p_output1[17]=0;
  p_output1[18]=t18532*t6251;
  p_output1[19]=t18313*t18441 + t18327*t18532*t6249;
  p_output1[20]=t18327*t18441 - 1.*t18313*t18532*t6249;
  p_output1[21]=t18279*(-1.*t18435*t18561 - 1.*t18599*t18633 + t18757) + t18435*(t18279*t18561 + t18354*t18599 + t18765);
  p_output1[22]=t18319*(-1.*t18433*t18550 + t18757 + t18774) + t18624*(t17608*t18550 + t18765 + t18784);
  p_output1[23]=t18413*(t14490*t16688*t18517 + t18784 + t14490*t18522*t6252) + t6244*(t18774 - 1.*t16688*t18517*t6244 - 1.*t18522*t6244*t6252);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t18413*(t14490*t18509 + t18784) + t6244*(t18774 - 1.*t18509*t6244);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t18435;
  p_output1[37]=t18313*t18624 - 1.*t18327*t18633;
  p_output1[38]=t18327*t18624 + t18313*t18633;
  p_output1[39]=t18532*(-1.*t18279*t18561 - 1.*t18354*t18599 + t18825)*t6251 + t18279*(t18820 - 1.*t18532*t18599*t6249 + t18532*t18561*t6251);
  p_output1[40]=t18319*(t18532*t18550 + t18820) + t18441*(-1.*t17608*t18550 + t18825 - 1.*t18546*t6244);
  p_output1[41]=t6244*(t16688*t18522 - 1.*t18517*t6252);
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
  p_output1[52]=0.28121*t37 + t18505*t37 + 0.305*Power(t4932,2);
  p_output1[53]=-0.305;
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

#include "fRrFoot_map_DiagonalStance2.hh"

namespace SymFunction
{

void fRrFoot_map_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
