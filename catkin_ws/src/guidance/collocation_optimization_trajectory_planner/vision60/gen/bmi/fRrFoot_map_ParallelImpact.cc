/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:11:10 GMT+02:00
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
  double t11558;
  double t9334;
  double t11461;
  double t11590;
  double t11545;
  double t11760;
  double t12603;
  double t14500;
  double t18574;
  double t16291;
  double t18484;
  double t18571;
  double t18597;
  double t8103;
  double t14234;
  double t14207;
  double t18572;
  double t18614;
  double t18615;
  double t18932;
  double t18756;
  double t18759;
  double t18784;
  double t18755;
  double t18944;
  double t18961;
  double t19034;
  double t19330;
  double t19335;
  double t19340;
  double t19355;
  double t19360;
  double t19399;
  double t19401;
  double t19402;
  double t19432;
  double t19317;
  double t19345;
  double t19436;
  double t19444;
  double t19449;
  double t19450;
  double t19454;
  double t19455;
  double t19456;
  double t19460;
  double t19287;
  double t19297;
  double t19301;
  double t19303;
  double t19445;
  double t19446;
  double t19536;
  double t19545;
  double t19548;
  double t19599;
  double t19617;
  double t19633;
  double t19516;
  double t19520;
  double t19532;
  double t19447;
  double t19461;
  double t19462;
  double t19129;
  double t19139;
  double t19156;
  double t19552;
  double t19638;
  double t19640;
  double t19121;
  double t19202;
  double t19249;
  double t19253;
  double t19257;
  double t19263;
  double t19657;
  double t19662;
  double t19671;
  double t19702;
  double t19703;
  double t19704;
  double t19463;
  double t19705;
  double t19747;
  double t19769;
  double t19651;
  double t19654;
  double t19655;
  double t14217;
  double t18658;
  double t18749;
  double t19709;
  double t19710;
  double t19714;
  double t20085;
  double t20190;
  double t20398;
  double t20303;
  double t25404;
  double t23497;
  double t35576;
  double t37301;
  double t39096;
  double t40777;
  t11558 = Cos(var1[16]);
  t9334 = Cos(var1[17]);
  t11461 = Sin(var1[16]);
  t11590 = Sin(var1[17]);
  t11545 = t9334*t11461;
  t11760 = -1.*t11558*t11590;
  t12603 = t11545 + t11760;
  t14500 = Cos(var1[5]);
  t18574 = Sin(var1[15]);
  t16291 = t11558*t9334;
  t18484 = t11461*t11590;
  t18571 = t16291 + t18484;
  t18597 = Sin(var1[5]);
  t8103 = Cos(var1[15]);
  t14234 = Cos(var1[4]);
  t14207 = Sin(var1[4]);
  t18572 = t14500*t18571;
  t18614 = t18574*t12603*t18597;
  t18615 = t18572 + t18614;
  t18932 = Sin(var1[3]);
  t18756 = -1.*t14500*t18574*t12603;
  t18759 = t18571*t18597;
  t18784 = t18756 + t18759;
  t18755 = Cos(var1[3]);
  t18944 = t8103*t14234*t12603;
  t18961 = -1.*t14207*t18615;
  t19034 = t18944 + t18961;
  t19330 = -0.0641*t9334;
  t19335 = -0.28*t11590;
  t19340 = t19330 + t19335;
  t19355 = -1.*t9334;
  t19360 = 1. + t19355;
  t19399 = -0.575*t19360;
  t19401 = -0.295*t9334;
  t19402 = -0.0641*t11590;
  t19432 = t19399 + t19401 + t19402;
  t19317 = 0.325*t11461;
  t19345 = t11558*t19340;
  t19436 = t11461*t19432;
  t19444 = t19317 + t19345 + t19436;
  t19449 = -1.*t11558;
  t19450 = 1. + t19449;
  t19454 = -0.325*t19450;
  t19455 = -1.*t11461*t19340;
  t19456 = t11558*t19432;
  t19460 = t19454 + t19455 + t19456;
  t19287 = -1.*t8103;
  t19297 = 1. + t19287;
  t19301 = -0.1575*t19297;
  t19303 = -0.2255*t8103;
  t19445 = -1.*t18574*t19444;
  t19446 = t19301 + t19303 + t19445;
  t19536 = -0.068*t18574;
  t19545 = t8103*t19444;
  t19548 = t19536 + t19545;
  t19599 = t14500*t19460;
  t19617 = -1.*t19446*t18597;
  t19633 = t19599 + t19617;
  t19516 = t18574*t14207;
  t19520 = -1.*t8103*t14234*t18597;
  t19532 = t19516 + t19520;
  t19447 = t14500*t19446;
  t19461 = t19460*t18597;
  t19462 = t19447 + t19461;
  t19129 = -1.*t9334*t11461;
  t19139 = t11558*t11590;
  t19156 = t19129 + t19139;
  t19552 = t19548*t14207;
  t19638 = t14234*t19633;
  t19640 = t19552 + t19638;
  t19121 = t8103*t18571*t14207;
  t19202 = t14500*t19156;
  t19249 = t18574*t18571*t18597;
  t19253 = t19202 + t19249;
  t19257 = t14234*t19253;
  t19263 = t19121 + t19257;
  t19657 = t14234*t19548;
  t19662 = -1.*t14207*t19633;
  t19671 = t19657 + t19662;
  t19702 = -1.*t14500*t18574*t18571;
  t19703 = t19156*t18597;
  t19704 = t19702 + t19703;
  t19463 = -1.*t8103*t14500*t19462;
  t19705 = t19462*t19704;
  t19747 = -1.*t18574*t19548;
  t19769 = t8103*t19548*t18571;
  t19651 = t14234*t18574;
  t19654 = t8103*t14207*t18597;
  t19655 = t19651 + t19654;
  t14217 = t8103*t12603*t14207;
  t18658 = t14234*t18615;
  t18749 = t14217 + t18658;
  t19709 = t8103*t14234*t18571;
  t19710 = -1.*t14207*t19253;
  t19714 = t19709 + t19710;
  t20085 = t19462*t18784;
  t20190 = -1.*t19462*t19704;
  t20398 = -1.*t8103*t19548*t18571;
  t20303 = t8103*t19548*t12603;
  t25404 = t19460*t18571;
  t23497 = -1.*t19460*t19156;
  t35576 = t8103*t14500*t19462;
  t37301 = -1.*t19462*t18784;
  t39096 = t18574*t19548;
  t40777 = -1.*t8103*t19548*t12603;
  p_output1[0]=t18749;
  p_output1[1]=t18755*t18784 - 1.*t18932*t19034;
  p_output1[2]=t18784*t18932 + t18755*t19034;
  p_output1[3]=t19263*(t19463 - 1.*t19532*t19640 - 1.*t19655*t19671) + t19532*(t19263*t19640 + t19705 + t19671*t19714);
  p_output1[4]=t14500*(t19253*t19633 + t19705 + t19769)*t8103 + t19704*(t19463 + t19747 + t18597*t19633*t8103);
  p_output1[5]=t18574*(-1.*t18571*t18574*t19446 + t19156*t19460 + t19769) + t18571*t8103*(t19747 - 1.*t19446*t8103);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0.1575*t12603 + 0.2255*t19156;
  p_output1[16]=-0.325*t11590 - 1.*t11590*t19432 - 1.*t19340*t9334;
  p_output1[17]=-0.0641;
  p_output1[18]=t19532;
  p_output1[19]=-1.*t18932*t19655 + t14500*t18755*t8103;
  p_output1[20]=t18755*t19655 + t14500*t18932*t8103;
  p_output1[21]=t19263*(t18749*t19640 + t19034*t19671 + t20085) + t18749*(-1.*t19263*t19640 - 1.*t19671*t19714 + t20190);
  p_output1[22]=t19704*(t18615*t19633 + t20085 + t20303) + t18784*(-1.*t19253*t19633 + t20190 + t20398);
  p_output1[23]=t12603*(t18571*t18574*t19446 + t20398 + t23497)*t8103 + t18571*(-1.*t12603*t18574*t19446 + t20303 + t25404)*t8103;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=t18571*(-1.*t18571*t19444 + t23497) + t19156*(t12603*t19444 + t25404);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t19263;
  p_output1[37]=t18755*t19704 - 1.*t18932*t19714;
  p_output1[38]=t18932*t19704 + t18755*t19714;
  p_output1[39]=t18749*(t19532*t19640 + t19655*t19671 + t35576) + t19532*(-1.*t18749*t19640 - 1.*t19034*t19671 + t37301);
  p_output1[40]=t14500*(-1.*t18615*t19633 + t37301 + t40777)*t8103 + t18784*(t35576 + t39096 - 1.*t18597*t19633*t8103);
  p_output1[41]=t18574*(t12603*t18574*t19446 - 1.*t18571*t19460 + t40777) + t12603*t8103*(t39096 + t19446*t8103);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.068*t18571;
  p_output1[52]=-1.*t11590*t19340 + 0.325*t9334 + t19432*t9334;
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

#include "fRrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
