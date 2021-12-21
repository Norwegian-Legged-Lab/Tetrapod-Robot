/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:09:36 GMT+01:00
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
  double t120;
  double t127;
  double t128;
  double t146;
  double t22;
  double t59;
  double t62;
  double t74;
  double t79;
  double t105;
  double t143;
  double t34;
  double t202;
  double t170;
  double t235;
  double t360;
  double t373;
  double t387;
  double t395;
  double t308;
  double t190;
  double t316;
  double t264;
  double t267;
  double t272;
  double t334;
  double t335;
  double t340;
  double t409;
  double t226;
  double t448;
  double t249;
  double t473;
  double t394;
  double t505;
  double t508;
  double t147;
  double t428;
  double t435;
  double t436;
  double t449;
  double t450;
  double t455;
  double t456;
  double t458;
  double t459;
  double t575;
  double t513;
  double t521;
  double t525;
  double t533;
  double t546;
  double t548;
  double t551;
  double t556;
  double t597;
  double t603;
  double t604;
  double t608;
  double t627;
  double t631;
  double t634;
  double t641;
  double t415;
  double t645;
  double t398;
  double t727;
  double t490;
  double t651;
  double t656;
  double t482;
  double t116;
  double t139;
  double t150;
  double t152;
  double t174;
  double t176;
  double t181;
  double t76;
  double t114;
  double t848;
  double t199;
  double t201;
  double t875;
  double t217;
  double t222;
  double t229;
  double t231;
  double t256;
  double t262;
  double t263;
  double t873;
  double t882;
  double t886;
  double t894;
  double t900;
  double t902;
  double t287;
  double t300;
  double t310;
  double t314;
  double t318;
  double t323;
  double t332;
  double t359;
  double t392;
  double t400;
  double t407;
  double t422;
  double t424;
  double t427;
  double t904;
  double t913;
  double t914;
  double t923;
  double t924;
  double t925;
  double t466;
  double t471;
  double t483;
  double t484;
  double t497;
  double t500;
  double t503;
  double t568;
  double t569;
  double t578;
  double t580;
  double t588;
  double t590;
  double t593;
  double t649;
  double t930;
  double t933;
  double t934;
  double t938;
  double t667;
  double t941;
  double t942;
  double t945;
  double t947;
  double t683;
  double t701;
  double t956;
  double t965;
  double t970;
  double t977;
  double t721;
  double t722;
  double t730;
  double t735;
  double t765;
  double t773;
  double t779;
  double t814;
  double t1069;
  double t1071;
  double t1073;
  double t1079;
  double t1084;
  double t1093;
  double t1104;
  double t1105;
  double t1106;
  double t1110;
  double t1124;
  double t1128;
  double t1138;
  double t1140;
  double t1153;
  double t1162;
  double t1170;
  double t1172;
  double t1178;
  double t1182;
  double t1206;
  double t1210;
  double t1212;
  double t1219;
  t120 = Cos(var1[13]);
  t127 = -1.*t120;
  t128 = 1. + t127;
  t146 = Sin(var1[13]);
  t22 = Cos(var1[4]);
  t59 = Cos(var1[12]);
  t62 = -1.*t59;
  t74 = 1. + t62;
  t79 = Sin(var1[12]);
  t105 = 0.15121*t79;
  t143 = 4.e-6*t128;
  t34 = Cos(var1[5]);
  t202 = Sin(var1[5]);
  t170 = -2.8e-11*t128;
  t235 = 7.e-6*t128;
  t360 = Cos(var1[14]);
  t373 = -1.*t360;
  t387 = 1. + t373;
  t395 = Sin(var1[14]);
  t308 = -1.*t146;
  t190 = Sin(var1[4]);
  t316 = -4.e-6*t146;
  t264 = -1.*t22*t34*t79;
  t267 = -1.*t59*t22*t202;
  t272 = t264 + t267;
  t334 = t59*t22*t34;
  t335 = -1.*t22*t79*t202;
  t340 = t334 + t335;
  t409 = 7.e-6*t387;
  t226 = -7.e-6*t146;
  t448 = -7.e-6*t128;
  t249 = 4.e-6*t146;
  t473 = 4.e-6*t387;
  t394 = -2.8e-11*t387;
  t505 = -1. + t120;
  t508 = 4.e-6*t505;
  t147 = 7.e-6*t146;
  t428 = 2.8e-11*t128;
  t435 = t428 + t308;
  t436 = t435*t190;
  t449 = t448 + t316;
  t450 = t449*t272;
  t455 = -1.000000000016*t128;
  t456 = 1. + t455;
  t458 = t456*t340;
  t459 = t436 + t450 + t458;
  t575 = 7.e-6*t395;
  t513 = t508 + t226;
  t521 = t513*t190;
  t525 = -6.5e-11*t128;
  t533 = 1. + t525;
  t546 = t533*t272;
  t548 = t448 + t249;
  t551 = t548*t340;
  t556 = t521 + t546 + t551;
  t597 = -1.000000000049*t128;
  t603 = 1. + t597;
  t604 = t603*t190;
  t608 = t508 + t147;
  t627 = t608*t272;
  t631 = t428 + t146;
  t634 = t631*t340;
  t641 = t604 + t627 + t634;
  t415 = -4.e-6*t395;
  t645 = 2.8e-11*t387;
  t398 = -1.*t395;
  t727 = -7.e-6*t387;
  t490 = 4.e-6*t395;
  t651 = -1. + t360;
  t656 = 4.e-6*t651;
  t482 = -7.e-6*t395;
  t116 = 5.856279999999999e-13*var1[13];
  t139 = -0.0387489999948987*t128;
  t150 = t143 + t147;
  t152 = -2.123459e-6*t150;
  t174 = t170 + t146;
  t176 = -0.281209000004*t174;
  t181 = t116 + t139 + t152 + t176;
  t76 = -0.15121*t74;
  t114 = t76 + t105;
  t848 = Sin(var1[3]);
  t199 = 0.15121*t74;
  t201 = t199 + t105;
  t875 = Cos(var1[3]);
  t217 = -1.4640699999999997e-7*var1[13];
  t222 = -1.38024835e-16*t128;
  t229 = t143 + t226;
  t231 = -0.038748999993*t229;
  t256 = t235 + t249;
  t262 = -0.281209000004*t256;
  t263 = t217 + t222 + t231 + t262;
  t873 = t34*t848*t190;
  t882 = t875*t202;
  t886 = t873 + t882;
  t894 = t875*t34;
  t900 = -1.*t848*t190*t202;
  t902 = t894 + t900;
  t287 = 1.0248489999999998e-12*var1[13];
  t300 = -0.28120900000849935*t128;
  t310 = t170 + t308;
  t314 = -0.038748999993*t310;
  t318 = t235 + t316;
  t323 = -2.123459e-6*t318;
  t332 = t287 + t300 + t314 + t323;
  t359 = 1.8190549999999993e-12*var1[14];
  t392 = -0.5031490000160505*t387;
  t400 = t394 + t398;
  t407 = -0.038922999986*t400;
  t422 = t409 + t415;
  t424 = -3.6777349999999994e-6*t422;
  t427 = t359 + t392 + t407 + t424;
  t904 = -1.*t79*t886;
  t913 = t59*t902;
  t914 = t904 + t913;
  t923 = t59*t886;
  t924 = t79*t902;
  t925 = t923 + t924;
  t466 = -2.598649999999999e-7*var1[14];
  t471 = -2.3905277499999995e-16*t387;
  t483 = t473 + t482;
  t484 = -0.038922999986*t483;
  t497 = t409 + t490;
  t500 = -0.503149000008*t497;
  t503 = t466 + t471 + t484 + t500;
  t568 = 1.0394599999999997e-12*var1[14];
  t569 = -0.03892299998790722*t387;
  t578 = t473 + t575;
  t580 = -3.6777349999999994e-6*t578;
  t588 = t394 + t395;
  t590 = -0.503149000008*t588;
  t593 = t568 + t569 + t580 + t590;
  t649 = t645 + t395;
  t930 = -1.*t22*t435*t848;
  t933 = t449*t914;
  t934 = t456*t925;
  t938 = t930 + t933 + t934;
  t667 = t656 + t575;
  t941 = -1.*t22*t513*t848;
  t942 = t533*t914;
  t945 = t548*t925;
  t947 = t941 + t942 + t945;
  t683 = -1.000000000049*t387;
  t701 = 1. + t683;
  t956 = -1.*t603*t22*t848;
  t965 = t608*t914;
  t970 = t631*t925;
  t977 = t956 + t965 + t970;
  t721 = -1.000000000016*t387;
  t722 = 1. + t721;
  t730 = t727 + t415;
  t735 = t645 + t398;
  t765 = t727 + t490;
  t773 = -6.5e-11*t387;
  t779 = 1. + t773;
  t814 = t656 + t482;
  t1069 = -1.*t875*t34*t190;
  t1071 = t848*t202;
  t1073 = t1069 + t1071;
  t1079 = t34*t848;
  t1084 = t875*t190*t202;
  t1093 = t1079 + t1084;
  t1104 = -1.*t79*t1073;
  t1105 = t59*t1093;
  t1106 = t1104 + t1105;
  t1110 = t59*t1073;
  t1124 = t79*t1093;
  t1128 = t1110 + t1124;
  t1138 = t875*t22*t435;
  t1140 = t449*t1106;
  t1153 = t456*t1128;
  t1162 = t1138 + t1140 + t1153;
  t1170 = t875*t22*t513;
  t1172 = t533*t1106;
  t1178 = t548*t1128;
  t1182 = t1170 + t1172 + t1178;
  t1206 = t603*t875*t22;
  t1210 = t608*t1106;
  t1212 = t631*t1128;
  t1219 = t1206 + t1210 + t1212;
  p_output1[0]=t181*t190 - 1.*t201*t202*t22 + t263*t272 + t114*t22*t34 + t332*t340 + t427*t459 + t503*t556 + t593*t641 - 0.038924*(t459*t649 + t556*t667 + t641*t701) - 0.80315*(t459*t722 + t556*t730 + t641*t735) + 0.148705*(t459*t765 + t556*t779 + t641*t814) + var1[0] - 1.*var2[0];
  p_output1[1]=-1.*t181*t22*t848 + t114*t886 + t201*t902 + t263*t914 + t332*t925 + t427*t938 + t503*t947 + t593*t977 - 0.038924*(t649*t938 + t667*t947 + t701*t977) - 0.80315*(t722*t938 + t730*t947 + t735*t977) + 0.148705*(t765*t938 + t779*t947 + t814*t977) + var1[1] - 1.*var2[1];
  p_output1[2]=t1073*t114 + t1093*t201 + t1106*t263 + t1128*t332 + t1162*t427 + t1182*t503 + t1219*t593 - 0.038924*(t1162*t649 + t1182*t667 + t1219*t701) - 0.80315*(t1162*t722 + t1182*t730 + t1219*t735) + 0.148705*(t1162*t765 + t1182*t779 + t1219*t814) + t181*t22*t875 + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_DiagonalStance1.hh"

namespace DiagonalStance1
{

void h_RlFoot_DiagonalStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
