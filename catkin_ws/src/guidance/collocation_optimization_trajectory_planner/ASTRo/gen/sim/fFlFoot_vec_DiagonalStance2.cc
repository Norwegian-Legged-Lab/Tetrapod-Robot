/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:03 GMT+02:00
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
  double t536;
  double t1123;
  double t697;
  double t2242;
  double t2253;
  double t2115;
  double t2265;
  double t845;
  double t1199;
  double t2349;
  double t2360;
  double t2402;
  double t1973;
  double t2246;
  double t2270;
  double t2291;
  double t898;
  double t1209;
  double t1438;
  double t53425;
  double t53415;
  double t2955;
  double t3020;
  double t3097;
  double t51926;
  double t52150;
  double t52238;
  double t52264;
  double t52285;
  double t52297;
  double t53426;
  double t53429;
  double t53430;
  double t53434;
  double t53435;
  double t53436;
  double t53438;
  double t53440;
  double t53441;
  double t53447;
  double t53448;
  double t53449;
  double t53451;
  double t53453;
  double t53454;
  double t2295;
  double t13155;
  double t22902;
  double t53503;
  double t53505;
  double t53506;
  double t53507;
  double t53508;
  double t53521;
  double t53522;
  double t53523;
  double t53524;
  double t53527;
  double t53529;
  double t53530;
  double t53531;
  double t53532;
  double t53533;
  double t53538;
  double t53543;
  double t53544;
  double t53545;
  double t53546;
  double t53550;
  double t53551;
  double t53552;
  double t53558;
  double t53561;
  double t53562;
  double t53566;
  double t53542;
  double t53547;
  double t53548;
  double t53559;
  double t53567;
  double t53569;
  double t53571;
  double t53572;
  double t53575;
  double t52260;
  double t52301;
  double t53407;
  double t53549;
  double t53580;
  double t53590;
  double t53600;
  double t53610;
  double t53615;
  double t53647;
  double t53653;
  t536 = Cos(var1[4]);
  t1123 = Cos(var1[5]);
  t697 = Cos(var1[6]);
  t2242 = Cos(var1[8]);
  t2253 = Sin(var1[7]);
  t2115 = Cos(var1[7]);
  t2265 = Sin(var1[8]);
  t845 = Sin(var1[5]);
  t1199 = Sin(var1[6]);
  t2349 = t2242*t2253;
  t2360 = -1.*t2115*t2265;
  t2402 = t2349 + t2360;
  t1973 = Sin(var1[4]);
  t2246 = t2115*t2242;
  t2270 = t2253*t2265;
  t2291 = t2246 + t2270;
  t898 = -1.*t697*t845;
  t1209 = -1.*t1123*t1199;
  t1438 = t898 + t1209;
  t53425 = Cos(var1[3]);
  t53415 = Sin(var1[3]);
  t2955 = t1123*t697*t2402;
  t3020 = -1.*t845*t1199*t2402;
  t3097 = t2955 + t3020;
  t51926 = -1.*t2242*t2253;
  t52150 = t2115*t2265;
  t52238 = t51926 + t52150;
  t52264 = t1123*t697*t2291;
  t52285 = -1.*t845*t1199*t2291;
  t52297 = t52264 + t52285;
  t53426 = t1123*t697;
  t53429 = -1.*t845*t1199;
  t53430 = t53426 + t53429;
  t53434 = t697*t845*t2402;
  t53435 = t1123*t1199*t2402;
  t53436 = t53434 + t53435;
  t53438 = t536*t2291;
  t53440 = -1.*t1973*t3097;
  t53441 = t53438 + t53440;
  t53447 = t697*t845*t2291;
  t53448 = t1123*t1199*t2291;
  t53449 = t53447 + t53448;
  t53451 = t536*t52238;
  t53453 = -1.*t1973*t52297;
  t53454 = t53451 + t53453;
  t2295 = t1973*t2291;
  t13155 = t536*t3097;
  t22902 = t2295 + t13155;
  t53503 = -1.*t697;
  t53505 = 1. + t53503;
  t53506 = 0.15121*t53505;
  t53507 = -1.*t2115;
  t53508 = 1. + t53507;
  t53521 = 0.28121*t53508;
  t53522 = -1.*t2242;
  t53523 = 1. + t53522;
  t53524 = 0.50321*t53523;
  t53527 = 0.23321*t2242;
  t53529 = t53524 + t53527;
  t53530 = t2115*t53529;
  t53531 = -0.27*t2253*t2265;
  t53532 = t53521 + t53530 + t53531;
  t53533 = t697*t53532;
  t53538 = t53506 + t53533;
  t53543 = 0.15121*t697;
  t53544 = -0.15121*t1199;
  t53545 = t1199*t53532;
  t53546 = t53506 + t53543 + t53544 + t53545;
  t53550 = 0.28121*t2253;
  t53551 = -1.*t53529*t2253;
  t53552 = -0.27*t2115*t2265;
  t53558 = t53550 + t53551 + t53552;
  t53561 = t1123*t53538;
  t53562 = -1.*t845*t53546;
  t53566 = t53561 + t53562;
  t53542 = t845*t53538;
  t53547 = t1123*t53546;
  t53548 = t53542 + t53547;
  t53559 = t1973*t53558;
  t53567 = t536*t53566;
  t53569 = t53559 + t53567;
  t53571 = t536*t53558;
  t53572 = -1.*t1973*t53566;
  t53575 = t53571 + t53572;
  t52260 = t1973*t52238;
  t52301 = t536*t52297;
  t53407 = t52260 + t52301;
  t53549 = -1.*t53430*t53548;
  t53580 = t53436*t53548;
  t53590 = t53430*t53548;
  t53600 = -1.*t53449*t53548;
  t53610 = -1.*t53436*t53548;
  t53615 = t53449*t53548;
  t53647 = -1.*t53558*t2291;
  t53653 = t53558*t52238;
  p_output1[0]=t53407*var2[0] + t1438*t536*var2[1] + t22902*var2[2];
  p_output1[1]=(t53425*t53449 - 1.*t53415*t53454)*var2[0] + (t1438*t1973*t53415 + t53425*t53430)*var2[1] + (t53425*t53436 - 1.*t53415*t53441)*var2[2];
  p_output1[2]=(t53415*t53449 + t53425*t53454)*var2[0] + (-1.*t1438*t1973*t53425 + t53415*t53430)*var2[1] + (t53415*t53436 + t53425*t53441)*var2[2];
  p_output1[3]=(t1438*(t22902*t53569 + t53441*t53575 + t53580)*t536 + t22902*(t53549 + t1438*t1973*t53575 - 1.*t1438*t53569*t536))*var2[0] + (t53407*(-1.*t22902*t53569 - 1.*t53441*t53575 + t53610) + t22902*(t53407*t53569 + t53454*t53575 + t53615))*var2[1] + (t53407*(-1.*t1438*t1973*t53575 + t53590 + t1438*t53569*t536) + t1438*t536*(-1.*t53407*t53569 - 1.*t53454*t53575 + t53600))*var2[2];
  p_output1[4]=(t53436*(t53549 - 1.*t1438*t53566) + t53430*(t2291*t53558 + t3097*t53566 + t53580))*var2[0] + (t53449*(-1.*t3097*t53566 + t53610 + t53647) + t53436*(t52297*t53566 + t53615 + t53653))*var2[1] + (t53449*(t1438*t53566 + t53590) + t53430*(-1.*t52238*t53558 - 1.*t52297*t53566 + t53600))*var2[2];
  p_output1[5]=t2291*(t1199*t53538 - 1.*t53546*t697)*var2[0] + (t2291*(t1199*t2291*t53546 + t53653 + t2291*t53538*t697) + t52238*(-1.*t1199*t2402*t53546 + t53647 - 1.*t2402*t53538*t697))*var2[1] + t52238*(-1.*t1199*t53538 + t53546*t697)*var2[2];
  p_output1[6]=(-0.15121 + t52238*(-1.*t2402*t53532 + t53647) + t2291*(t2291*t53532 + t53653))*var2[1] + (0.15121*t2402 + 0.15121*t52238)*var2[2];
  p_output1[7]=(0.28121*t2265 - 0.27*t2242*t2265 - 1.*t2265*t53529)*var2[0] + (0.28121*t2242 + 0.27*Power(t2265,2) - 1.*t2242*t53529)*var2[2];
  p_output1[8]=-0.27*var2[2];
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

#include "fFlFoot_vec_DiagonalStance2.hh"

namespace SymFunction
{

void fFlFoot_vec_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
