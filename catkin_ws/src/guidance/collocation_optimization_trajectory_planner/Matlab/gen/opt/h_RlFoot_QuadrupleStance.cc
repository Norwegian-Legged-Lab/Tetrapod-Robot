/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 22:33:25 GMT+01:00
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
  double t93;
  double t95;
  double t96;
  double t110;
  double t43;
  double t53;
  double t58;
  double t60;
  double t68;
  double t75;
  double t105;
  double t50;
  double t141;
  double t123;
  double t160;
  double t253;
  double t255;
  double t257;
  double t281;
  double t184;
  double t129;
  double t193;
  double t172;
  double t176;
  double t177;
  double t214;
  double t219;
  double t226;
  double t297;
  double t152;
  double t327;
  double t161;
  double t360;
  double t264;
  double t418;
  double t420;
  double t113;
  double t322;
  double t324;
  double t325;
  double t331;
  double t336;
  double t337;
  double t338;
  double t344;
  double t345;
  double t454;
  double t422;
  double t423;
  double t426;
  double t428;
  double t430;
  double t435;
  double t439;
  double t440;
  double t481;
  double t482;
  double t485;
  double t486;
  double t487;
  double t494;
  double t504;
  double t509;
  double t299;
  double t530;
  double t283;
  double t586;
  double t408;
  double t539;
  double t543;
  double t373;
  double t88;
  double t100;
  double t118;
  double t122;
  double t126;
  double t127;
  double t128;
  double t65;
  double t78;
  double t627;
  double t136;
  double t137;
  double t640;
  double t146;
  double t148;
  double t155;
  double t157;
  double t165;
  double t167;
  double t169;
  double t636;
  double t641;
  double t645;
  double t651;
  double t655;
  double t668;
  double t180;
  double t181;
  double t188;
  double t189;
  double t195;
  double t196;
  double t208;
  double t248;
  double t259;
  double t285;
  double t286;
  double t303;
  double t308;
  double t318;
  double t677;
  double t681;
  double t682;
  double t693;
  double t695;
  double t706;
  double t350;
  double t351;
  double t384;
  double t392;
  double t413;
  double t415;
  double t416;
  double t446;
  double t447;
  double t466;
  double t468;
  double t477;
  double t479;
  double t480;
  double t531;
  double t714;
  double t715;
  double t716;
  double t730;
  double t545;
  double t736;
  double t738;
  double t741;
  double t742;
  double t556;
  double t559;
  double t750;
  double t751;
  double t753;
  double t755;
  double t572;
  double t582;
  double t588;
  double t594;
  double t599;
  double t604;
  double t608;
  double t611;
  double t820;
  double t822;
  double t823;
  double t833;
  double t839;
  double t840;
  double t842;
  double t843;
  double t844;
  double t851;
  double t860;
  double t870;
  double t873;
  double t875;
  double t877;
  double t878;
  double t886;
  double t887;
  double t891;
  double t895;
  double t899;
  double t900;
  double t901;
  double t910;
  t93 = Cos(var1[13]);
  t95 = -1.*t93;
  t96 = 1. + t95;
  t110 = Sin(var1[13]);
  t43 = Cos(var1[4]);
  t53 = Cos(var1[12]);
  t58 = -1.*t53;
  t60 = 1. + t58;
  t68 = Sin(var1[12]);
  t75 = 0.15121*t68;
  t105 = 4.e-6*t96;
  t50 = Cos(var1[5]);
  t141 = Sin(var1[5]);
  t123 = -2.8e-11*t96;
  t160 = 7.e-6*t96;
  t253 = Cos(var1[14]);
  t255 = -1.*t253;
  t257 = 1. + t255;
  t281 = Sin(var1[14]);
  t184 = -1.*t110;
  t129 = Sin(var1[4]);
  t193 = -4.e-6*t110;
  t172 = -1.*t43*t50*t68;
  t176 = -1.*t53*t43*t141;
  t177 = t172 + t176;
  t214 = t53*t43*t50;
  t219 = -1.*t43*t68*t141;
  t226 = t214 + t219;
  t297 = 7.e-6*t257;
  t152 = -7.e-6*t110;
  t327 = -7.e-6*t96;
  t161 = 4.e-6*t110;
  t360 = 4.e-6*t257;
  t264 = -2.8e-11*t257;
  t418 = -1. + t93;
  t420 = 4.e-6*t418;
  t113 = 7.e-6*t110;
  t322 = 2.8e-11*t96;
  t324 = t322 + t184;
  t325 = t324*t129;
  t331 = t327 + t193;
  t336 = t331*t177;
  t337 = -1.000000000016*t96;
  t338 = 1. + t337;
  t344 = t338*t226;
  t345 = t325 + t336 + t344;
  t454 = 7.e-6*t281;
  t422 = t420 + t152;
  t423 = t422*t129;
  t426 = -6.5e-11*t96;
  t428 = 1. + t426;
  t430 = t428*t177;
  t435 = t327 + t161;
  t439 = t435*t226;
  t440 = t423 + t430 + t439;
  t481 = -1.000000000049*t96;
  t482 = 1. + t481;
  t485 = t482*t129;
  t486 = t420 + t113;
  t487 = t486*t177;
  t494 = t322 + t110;
  t504 = t494*t226;
  t509 = t485 + t487 + t504;
  t299 = -4.e-6*t281;
  t530 = 2.8e-11*t257;
  t283 = -1.*t281;
  t586 = -7.e-6*t257;
  t408 = 4.e-6*t281;
  t539 = -1. + t253;
  t543 = 4.e-6*t539;
  t373 = -7.e-6*t281;
  t88 = 5.856279999999999e-13*var1[13];
  t100 = -0.0387489999948987*t96;
  t118 = t105 + t113;
  t122 = -2.123459e-6*t118;
  t126 = t123 + t110;
  t127 = -0.281209000004*t126;
  t128 = t88 + t100 + t122 + t127;
  t65 = -0.15121*t60;
  t78 = t65 + t75;
  t627 = Sin(var1[3]);
  t136 = 0.15121*t60;
  t137 = t136 + t75;
  t640 = Cos(var1[3]);
  t146 = -1.4640699999999997e-7*var1[13];
  t148 = -1.38024835e-16*t96;
  t155 = t105 + t152;
  t157 = -0.038748999993*t155;
  t165 = t160 + t161;
  t167 = -0.281209000004*t165;
  t169 = t146 + t148 + t157 + t167;
  t636 = t50*t627*t129;
  t641 = t640*t141;
  t645 = t636 + t641;
  t651 = t640*t50;
  t655 = -1.*t627*t129*t141;
  t668 = t651 + t655;
  t180 = 1.0248489999999998e-12*var1[13];
  t181 = -0.28120900000849935*t96;
  t188 = t123 + t184;
  t189 = -0.038748999993*t188;
  t195 = t160 + t193;
  t196 = -2.123459e-6*t195;
  t208 = t180 + t181 + t189 + t196;
  t248 = 1.8190549999999993e-12*var1[14];
  t259 = -0.5031490000160505*t257;
  t285 = t264 + t283;
  t286 = -0.038922999986*t285;
  t303 = t297 + t299;
  t308 = -3.6777349999999994e-6*t303;
  t318 = t248 + t259 + t286 + t308;
  t677 = -1.*t68*t645;
  t681 = t53*t668;
  t682 = t677 + t681;
  t693 = t53*t645;
  t695 = t68*t668;
  t706 = t693 + t695;
  t350 = -2.598649999999999e-7*var1[14];
  t351 = -2.3905277499999995e-16*t257;
  t384 = t360 + t373;
  t392 = -0.038922999986*t384;
  t413 = t297 + t408;
  t415 = -0.503149000008*t413;
  t416 = t350 + t351 + t392 + t415;
  t446 = 1.0394599999999997e-12*var1[14];
  t447 = -0.03892299998790722*t257;
  t466 = t360 + t454;
  t468 = -3.6777349999999994e-6*t466;
  t477 = t264 + t281;
  t479 = -0.503149000008*t477;
  t480 = t446 + t447 + t468 + t479;
  t531 = t530 + t281;
  t714 = -1.*t43*t324*t627;
  t715 = t331*t682;
  t716 = t338*t706;
  t730 = t714 + t715 + t716;
  t545 = t543 + t454;
  t736 = -1.*t43*t422*t627;
  t738 = t428*t682;
  t741 = t435*t706;
  t742 = t736 + t738 + t741;
  t556 = -1.000000000049*t257;
  t559 = 1. + t556;
  t750 = -1.*t482*t43*t627;
  t751 = t486*t682;
  t753 = t494*t706;
  t755 = t750 + t751 + t753;
  t572 = -1.000000000016*t257;
  t582 = 1. + t572;
  t588 = t586 + t299;
  t594 = t530 + t283;
  t599 = t586 + t408;
  t604 = -6.5e-11*t257;
  t608 = 1. + t604;
  t611 = t543 + t373;
  t820 = -1.*t640*t50*t129;
  t822 = t627*t141;
  t823 = t820 + t822;
  t833 = t50*t627;
  t839 = t640*t129*t141;
  t840 = t833 + t839;
  t842 = -1.*t68*t823;
  t843 = t53*t840;
  t844 = t842 + t843;
  t851 = t53*t823;
  t860 = t68*t840;
  t870 = t851 + t860;
  t873 = t640*t43*t324;
  t875 = t331*t844;
  t877 = t338*t870;
  t878 = t873 + t875 + t877;
  t886 = t640*t43*t422;
  t887 = t428*t844;
  t891 = t435*t870;
  t895 = t886 + t887 + t891;
  t899 = t482*t640*t43;
  t900 = t486*t844;
  t901 = t494*t870;
  t910 = t899 + t900 + t901;
  p_output1[0]=t128*t129 + t169*t177 + t208*t226 + t318*t345 - 1.*t137*t141*t43 + t416*t440 + t480*t509 - 0.038924*(t345*t531 + t440*t545 + t509*t559) - 0.80315*(t345*t582 + t440*t588 + t509*t594) + 0.148705*(t345*t599 + t440*t608 + t509*t611) + t43*t50*t78 + var1[0] - 1.*var2[0];
  p_output1[1]=-1.*t128*t43*t627 + t137*t668 + t169*t682 + t208*t706 + t318*t730 + t416*t742 + t480*t755 - 0.038924*(t531*t730 + t545*t742 + t559*t755) - 0.80315*(t582*t730 + t588*t742 + t594*t755) + 0.148705*(t599*t730 + t608*t742 + t611*t755) + t645*t78 + var1[1] - 1.*var2[1];
  p_output1[2]=t128*t43*t640 + t78*t823 + t137*t840 + t169*t844 + t208*t870 + t318*t878 + t416*t895 + t480*t910 - 0.038924*(t531*t878 + t545*t895 + t559*t910) - 0.80315*(t582*t878 + t588*t895 + t594*t910) + 0.148705*(t599*t878 + t608*t895 + t611*t910) + var1[2] - 1.*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_RlFoot_QuadrupleStance.hh"

namespace QuadrupleStance
{

void h_RlFoot_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
