/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:16:10 GMT+01:00
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
  double t114;
  double t115;
  double t117;
  double t126;
  double t16;
  double t55;
  double t60;
  double t74;
  double t76;
  double t80;
  double t123;
  double t17;
  double t193;
  double t138;
  double t225;
  double t364;
  double t375;
  double t376;
  double t392;
  double t274;
  double t165;
  double t296;
  double t237;
  double t244;
  double t245;
  double t323;
  double t334;
  double t335;
  double t414;
  double t213;
  double t451;
  double t228;
  double t496;
  double t384;
  double t540;
  double t543;
  double t130;
  double t440;
  double t444;
  double t450;
  double t455;
  double t456;
  double t457;
  double t464;
  double t466;
  double t467;
  double t617;
  double t558;
  double t560;
  double t562;
  double t564;
  double t569;
  double t588;
  double t591;
  double t602;
  double t640;
  double t644;
  double t651;
  double t654;
  double t659;
  double t669;
  double t673;
  double t679;
  double t420;
  double t703;
  double t394;
  double t778;
  double t513;
  double t714;
  double t716;
  double t505;
  double t90;
  double t122;
  double t133;
  double t135;
  double t141;
  double t151;
  double t160;
  double t75;
  double t84;
  double t869;
  double t181;
  double t185;
  double t883;
  double t196;
  double t205;
  double t215;
  double t222;
  double t230;
  double t231;
  double t234;
  double t872;
  double t884;
  double t885;
  double t906;
  double t909;
  double t910;
  double t256;
  double t272;
  double t281;
  double t283;
  double t297;
  double t312;
  double t320;
  double t351;
  double t378;
  double t395;
  double t412;
  double t427;
  double t430;
  double t437;
  double t918;
  double t922;
  double t934;
  double t937;
  double t950;
  double t955;
  double t488;
  double t493;
  double t508;
  double t512;
  double t515;
  double t516;
  double t529;
  double t610;
  double t614;
  double t619;
  double t620;
  double t622;
  double t628;
  double t638;
  double t708;
  double t975;
  double t985;
  double t990;
  double t996;
  double t719;
  double t1001;
  double t1003;
  double t1010;
  double t1011;
  double t742;
  double t746;
  double t1017;
  double t1025;
  double t1026;
  double t1036;
  double t765;
  double t766;
  double t780;
  double t788;
  double t814;
  double t826;
  double t827;
  double t842;
  double t1107;
  double t1108;
  double t1109;
  double t1112;
  double t1115;
  double t1117;
  double t1119;
  double t1124;
  double t1128;
  double t1131;
  double t1138;
  double t1140;
  double t1149;
  double t1150;
  double t1153;
  double t1156;
  double t1160;
  double t1171;
  double t1172;
  double t1183;
  double t1200;
  double t1209;
  double t1212;
  double t1215;
  t114 = Cos(var1[13]);
  t115 = -1.*t114;
  t117 = 1. + t115;
  t126 = Sin(var1[13]);
  t16 = Cos(var1[4]);
  t55 = Cos(var1[12]);
  t60 = -1.*t55;
  t74 = 1. + t60;
  t76 = Sin(var1[12]);
  t80 = 0.15121*t76;
  t123 = 4.e-6*t117;
  t17 = Cos(var1[5]);
  t193 = Sin(var1[5]);
  t138 = -2.8e-11*t117;
  t225 = 7.e-6*t117;
  t364 = Cos(var1[14]);
  t375 = -1.*t364;
  t376 = 1. + t375;
  t392 = Sin(var1[14]);
  t274 = -1.*t126;
  t165 = Sin(var1[4]);
  t296 = -4.e-6*t126;
  t237 = -1.*t16*t17*t76;
  t244 = -1.*t55*t16*t193;
  t245 = t237 + t244;
  t323 = t55*t16*t17;
  t334 = -1.*t16*t76*t193;
  t335 = t323 + t334;
  t414 = 7.e-6*t376;
  t213 = -7.e-6*t126;
  t451 = -7.e-6*t117;
  t228 = 4.e-6*t126;
  t496 = 4.e-6*t376;
  t384 = -2.8e-11*t376;
  t540 = -1. + t114;
  t543 = 4.e-6*t540;
  t130 = 7.e-6*t126;
  t440 = 2.8e-11*t117;
  t444 = t440 + t274;
  t450 = t444*t165;
  t455 = t451 + t296;
  t456 = t455*t245;
  t457 = -1.000000000016*t117;
  t464 = 1. + t457;
  t466 = t464*t335;
  t467 = t450 + t456 + t466;
  t617 = 7.e-6*t392;
  t558 = t543 + t213;
  t560 = t558*t165;
  t562 = -6.5e-11*t117;
  t564 = 1. + t562;
  t569 = t564*t245;
  t588 = t451 + t228;
  t591 = t588*t335;
  t602 = t560 + t569 + t591;
  t640 = -1.000000000049*t117;
  t644 = 1. + t640;
  t651 = t644*t165;
  t654 = t543 + t130;
  t659 = t654*t245;
  t669 = t440 + t126;
  t673 = t669*t335;
  t679 = t651 + t659 + t673;
  t420 = -4.e-6*t392;
  t703 = 2.8e-11*t376;
  t394 = -1.*t392;
  t778 = -7.e-6*t376;
  t513 = 4.e-6*t392;
  t714 = -1. + t364;
  t716 = 4.e-6*t714;
  t505 = -7.e-6*t392;
  t90 = 5.856279999999999e-13*var1[13];
  t122 = -0.0387489999948987*t117;
  t133 = t123 + t130;
  t135 = -2.123459e-6*t133;
  t141 = t138 + t126;
  t151 = -0.281209000004*t141;
  t160 = t90 + t122 + t135 + t151;
  t75 = -0.15121*t74;
  t84 = t75 + t80;
  t869 = Sin(var1[3]);
  t181 = 0.15121*t74;
  t185 = t181 + t80;
  t883 = Cos(var1[3]);
  t196 = -1.4640699999999997e-7*var1[13];
  t205 = -1.38024835e-16*t117;
  t215 = t123 + t213;
  t222 = -0.038748999993*t215;
  t230 = t225 + t228;
  t231 = -0.281209000004*t230;
  t234 = t196 + t205 + t222 + t231;
  t872 = t17*t869*t165;
  t884 = t883*t193;
  t885 = t872 + t884;
  t906 = t883*t17;
  t909 = -1.*t869*t165*t193;
  t910 = t906 + t909;
  t256 = 1.0248489999999998e-12*var1[13];
  t272 = -0.28120900000849935*t117;
  t281 = t138 + t274;
  t283 = -0.038748999993*t281;
  t297 = t225 + t296;
  t312 = -2.123459e-6*t297;
  t320 = t256 + t272 + t283 + t312;
  t351 = 1.8190549999999993e-12*var1[14];
  t378 = -0.5031490000160505*t376;
  t395 = t384 + t394;
  t412 = -0.038922999986*t395;
  t427 = t414 + t420;
  t430 = -3.6777349999999994e-6*t427;
  t437 = t351 + t378 + t412 + t430;
  t918 = -1.*t76*t885;
  t922 = t55*t910;
  t934 = t918 + t922;
  t937 = t55*t885;
  t950 = t76*t910;
  t955 = t937 + t950;
  t488 = -2.598649999999999e-7*var1[14];
  t493 = -2.3905277499999995e-16*t376;
  t508 = t496 + t505;
  t512 = -0.038922999986*t508;
  t515 = t414 + t513;
  t516 = -0.503149000008*t515;
  t529 = t488 + t493 + t512 + t516;
  t610 = 1.0394599999999997e-12*var1[14];
  t614 = -0.03892299998790722*t376;
  t619 = t496 + t617;
  t620 = -3.6777349999999994e-6*t619;
  t622 = t384 + t392;
  t628 = -0.503149000008*t622;
  t638 = t610 + t614 + t620 + t628;
  t708 = t703 + t392;
  t975 = -1.*t16*t444*t869;
  t985 = t455*t934;
  t990 = t464*t955;
  t996 = t975 + t985 + t990;
  t719 = t716 + t617;
  t1001 = -1.*t16*t558*t869;
  t1003 = t564*t934;
  t1010 = t588*t955;
  t1011 = t1001 + t1003 + t1010;
  t742 = -1.000000000049*t376;
  t746 = 1. + t742;
  t1017 = -1.*t644*t16*t869;
  t1025 = t654*t934;
  t1026 = t669*t955;
  t1036 = t1017 + t1025 + t1026;
  t765 = -1.000000000016*t376;
  t766 = 1. + t765;
  t780 = t778 + t420;
  t788 = t703 + t394;
  t814 = t778 + t513;
  t826 = -6.5e-11*t376;
  t827 = 1. + t826;
  t842 = t716 + t505;
  t1107 = -1.*t883*t17*t165;
  t1108 = t869*t193;
  t1109 = t1107 + t1108;
  t1112 = t17*t869;
  t1115 = t883*t165*t193;
  t1117 = t1112 + t1115;
  t1119 = -1.*t76*t1109;
  t1124 = t55*t1117;
  t1128 = t1119 + t1124;
  t1131 = t55*t1109;
  t1138 = t76*t1117;
  t1140 = t1131 + t1138;
  t1149 = t883*t16*t444;
  t1150 = t455*t1128;
  t1153 = t464*t1140;
  t1156 = t1149 + t1150 + t1153;
  t1160 = t883*t16*t558;
  t1171 = t564*t1128;
  t1172 = t588*t1140;
  t1183 = t1160 + t1171 + t1172;
  t1200 = t644*t883*t16;
  t1209 = t654*t1128;
  t1212 = t669*t1140;
  t1215 = t1200 + t1209 + t1212;
  p_output1[0]=t160*t165 - 1.*t16*t185*t193 + t234*t245 + t320*t335 + t437*t467 + t529*t602 + t638*t679 - 0.038924*(t467*t708 + t602*t719 + t679*t746) - 0.80315*(t467*t766 + t602*t780 + t679*t788) + t16*t17*t84 + 0.148705*(t467*t814 + t602*t827 + t679*t842) + var1[0] - 1.*var2[0];
  p_output1[1]=t1011*t529 + t1036*t638 - 1.*t16*t160*t869 + t84*t885 + t185*t910 + t234*t934 + t320*t955 + t437*t996 - 0.038924*(t1011*t719 + t1036*t746 + t708*t996) - 0.80315*(t1011*t780 + t1036*t788 + t766*t996) + 0.148705*(t1011*t827 + t1036*t842 + t814*t996) + var1[1] - 1.*var2[1];
  p_output1[2]=t1117*t185 + t1128*t234 + t1140*t320 + t1156*t437 + t1183*t529 + t1215*t638 - 0.038924*(t1156*t708 + t1183*t719 + t1215*t746) - 0.80315*(t1156*t766 + t1183*t780 + t1215*t788) + t1109*t84 + 0.148705*(t1156*t814 + t1183*t827 + t1215*t842) + t16*t160*t883 + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_TrotStance1.hh"

namespace TrotStance1
{

void h_RlFoot_TrotStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
