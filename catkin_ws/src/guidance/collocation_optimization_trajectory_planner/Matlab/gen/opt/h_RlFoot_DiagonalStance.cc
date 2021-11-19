/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:28:30 GMT+01:00
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
  double t86;
  double t92;
  double t104;
  double t117;
  double t39;
  double t45;
  double t47;
  double t52;
  double t71;
  double t72;
  double t115;
  double t40;
  double t200;
  double t135;
  double t226;
  double t360;
  double t370;
  double t373;
  double t386;
  double t274;
  double t164;
  double t295;
  double t245;
  double t246;
  double t250;
  double t320;
  double t326;
  double t332;
  double t416;
  double t208;
  double t482;
  double t227;
  double t529;
  double t382;
  double t570;
  double t574;
  double t124;
  double t446;
  double t453;
  double t475;
  double t493;
  double t495;
  double t496;
  double t497;
  double t498;
  double t508;
  double t623;
  double t578;
  double t585;
  double t593;
  double t598;
  double t600;
  double t603;
  double t610;
  double t611;
  double t643;
  double t645;
  double t649;
  double t663;
  double t669;
  double t677;
  double t681;
  double t689;
  double t417;
  double t697;
  double t390;
  double t748;
  double t546;
  double t707;
  double t709;
  double t538;
  double t85;
  double t109;
  double t126;
  double t133;
  double t139;
  double t143;
  double t152;
  double t60;
  double t74;
  double t825;
  double t195;
  double t198;
  double t833;
  double t202;
  double t206;
  double t222;
  double t223;
  double t234;
  double t238;
  double t241;
  double t832;
  double t835;
  double t840;
  double t867;
  double t874;
  double t882;
  double t256;
  double t258;
  double t285;
  double t293;
  double t300;
  double t310;
  double t319;
  double t347;
  double t380;
  double t395;
  double t414;
  double t421;
  double t422;
  double t444;
  double t886;
  double t888;
  double t891;
  double t900;
  double t904;
  double t910;
  double t524;
  double t526;
  double t540;
  double t544;
  double t557;
  double t564;
  double t569;
  double t621;
  double t622;
  double t626;
  double t629;
  double t630;
  double t634;
  double t640;
  double t700;
  double t914;
  double t916;
  double t926;
  double t938;
  double t711;
  double t948;
  double t956;
  double t986;
  double t987;
  double t726;
  double t729;
  double t1000;
  double t1001;
  double t1023;
  double t1024;
  double t739;
  double t740;
  double t749;
  double t758;
  double t783;
  double t802;
  double t803;
  double t808;
  double t1112;
  double t1114;
  double t1119;
  double t1134;
  double t1137;
  double t1145;
  double t1160;
  double t1162;
  double t1164;
  double t1186;
  double t1193;
  double t1199;
  double t1202;
  double t1203;
  double t1206;
  double t1211;
  double t1222;
  double t1225;
  double t1227;
  double t1229;
  double t1238;
  double t1245;
  double t1247;
  double t1250;
  t86 = Cos(var1[13]);
  t92 = -1.*t86;
  t104 = 1. + t92;
  t117 = Sin(var1[13]);
  t39 = Cos(var1[4]);
  t45 = Cos(var1[12]);
  t47 = -1.*t45;
  t52 = 1. + t47;
  t71 = Sin(var1[12]);
  t72 = 0.15121*t71;
  t115 = 4.e-6*t104;
  t40 = Cos(var1[5]);
  t200 = Sin(var1[5]);
  t135 = -2.8e-11*t104;
  t226 = 7.e-6*t104;
  t360 = Cos(var1[14]);
  t370 = -1.*t360;
  t373 = 1. + t370;
  t386 = Sin(var1[14]);
  t274 = -1.*t117;
  t164 = Sin(var1[4]);
  t295 = -4.e-6*t117;
  t245 = -1.*t39*t40*t71;
  t246 = -1.*t45*t39*t200;
  t250 = t245 + t246;
  t320 = t45*t39*t40;
  t326 = -1.*t39*t71*t200;
  t332 = t320 + t326;
  t416 = 7.e-6*t373;
  t208 = -7.e-6*t117;
  t482 = -7.e-6*t104;
  t227 = 4.e-6*t117;
  t529 = 4.e-6*t373;
  t382 = -2.8e-11*t373;
  t570 = -1. + t86;
  t574 = 4.e-6*t570;
  t124 = 7.e-6*t117;
  t446 = 2.8e-11*t104;
  t453 = t446 + t274;
  t475 = t453*t164;
  t493 = t482 + t295;
  t495 = t493*t250;
  t496 = -1.000000000016*t104;
  t497 = 1. + t496;
  t498 = t497*t332;
  t508 = t475 + t495 + t498;
  t623 = 7.e-6*t386;
  t578 = t574 + t208;
  t585 = t578*t164;
  t593 = -6.5e-11*t104;
  t598 = 1. + t593;
  t600 = t598*t250;
  t603 = t482 + t227;
  t610 = t603*t332;
  t611 = t585 + t600 + t610;
  t643 = -1.000000000049*t104;
  t645 = 1. + t643;
  t649 = t645*t164;
  t663 = t574 + t124;
  t669 = t663*t250;
  t677 = t446 + t117;
  t681 = t677*t332;
  t689 = t649 + t669 + t681;
  t417 = -4.e-6*t386;
  t697 = 2.8e-11*t373;
  t390 = -1.*t386;
  t748 = -7.e-6*t373;
  t546 = 4.e-6*t386;
  t707 = -1. + t360;
  t709 = 4.e-6*t707;
  t538 = -7.e-6*t386;
  t85 = 5.856279999999999e-13*var1[13];
  t109 = -0.0387489999948987*t104;
  t126 = t115 + t124;
  t133 = -2.123459e-6*t126;
  t139 = t135 + t117;
  t143 = -0.281209000004*t139;
  t152 = t85 + t109 + t133 + t143;
  t60 = -0.15121*t52;
  t74 = t60 + t72;
  t825 = Sin(var1[3]);
  t195 = 0.15121*t52;
  t198 = t195 + t72;
  t833 = Cos(var1[3]);
  t202 = -1.4640699999999997e-7*var1[13];
  t206 = -1.38024835e-16*t104;
  t222 = t115 + t208;
  t223 = -0.038748999993*t222;
  t234 = t226 + t227;
  t238 = -0.281209000004*t234;
  t241 = t202 + t206 + t223 + t238;
  t832 = t40*t825*t164;
  t835 = t833*t200;
  t840 = t832 + t835;
  t867 = t833*t40;
  t874 = -1.*t825*t164*t200;
  t882 = t867 + t874;
  t256 = 1.0248489999999998e-12*var1[13];
  t258 = -0.28120900000849935*t104;
  t285 = t135 + t274;
  t293 = -0.038748999993*t285;
  t300 = t226 + t295;
  t310 = -2.123459e-6*t300;
  t319 = t256 + t258 + t293 + t310;
  t347 = 1.8190549999999993e-12*var1[14];
  t380 = -0.5031490000160505*t373;
  t395 = t382 + t390;
  t414 = -0.038922999986*t395;
  t421 = t416 + t417;
  t422 = -3.6777349999999994e-6*t421;
  t444 = t347 + t380 + t414 + t422;
  t886 = -1.*t71*t840;
  t888 = t45*t882;
  t891 = t886 + t888;
  t900 = t45*t840;
  t904 = t71*t882;
  t910 = t900 + t904;
  t524 = -2.598649999999999e-7*var1[14];
  t526 = -2.3905277499999995e-16*t373;
  t540 = t529 + t538;
  t544 = -0.038922999986*t540;
  t557 = t416 + t546;
  t564 = -0.503149000008*t557;
  t569 = t524 + t526 + t544 + t564;
  t621 = 1.0394599999999997e-12*var1[14];
  t622 = -0.03892299998790722*t373;
  t626 = t529 + t623;
  t629 = -3.6777349999999994e-6*t626;
  t630 = t382 + t386;
  t634 = -0.503149000008*t630;
  t640 = t621 + t622 + t629 + t634;
  t700 = t697 + t386;
  t914 = -1.*t39*t453*t825;
  t916 = t493*t891;
  t926 = t497*t910;
  t938 = t914 + t916 + t926;
  t711 = t709 + t623;
  t948 = -1.*t39*t578*t825;
  t956 = t598*t891;
  t986 = t603*t910;
  t987 = t948 + t956 + t986;
  t726 = -1.000000000049*t373;
  t729 = 1. + t726;
  t1000 = -1.*t645*t39*t825;
  t1001 = t663*t891;
  t1023 = t677*t910;
  t1024 = t1000 + t1001 + t1023;
  t739 = -1.000000000016*t373;
  t740 = 1. + t739;
  t749 = t748 + t417;
  t758 = t697 + t390;
  t783 = t748 + t546;
  t802 = -6.5e-11*t373;
  t803 = 1. + t802;
  t808 = t709 + t538;
  t1112 = -1.*t833*t40*t164;
  t1114 = t825*t200;
  t1119 = t1112 + t1114;
  t1134 = t40*t825;
  t1137 = t833*t164*t200;
  t1145 = t1134 + t1137;
  t1160 = -1.*t71*t1119;
  t1162 = t45*t1145;
  t1164 = t1160 + t1162;
  t1186 = t45*t1119;
  t1193 = t71*t1145;
  t1199 = t1186 + t1193;
  t1202 = t833*t39*t453;
  t1203 = t493*t1164;
  t1206 = t497*t1199;
  t1211 = t1202 + t1203 + t1206;
  t1222 = t833*t39*t578;
  t1225 = t598*t1164;
  t1227 = t603*t1199;
  t1229 = t1222 + t1225 + t1227;
  t1238 = t645*t833*t39;
  t1245 = t663*t1164;
  t1247 = t677*t1199;
  t1250 = t1238 + t1245 + t1247;
  p_output1[0]=t152*t164 + t241*t250 + t319*t332 - 1.*t198*t200*t39 + t444*t508 + t569*t611 + t640*t689 - 0.038924*(t508*t700 + t611*t711 + t689*t729) + t39*t40*t74 - 0.80315*(t508*t740 + t611*t749 + t689*t758) + 0.148705*(t508*t783 + t611*t803 + t689*t808) + var1[0] - 1.*var2[0];
  p_output1[1]=t1024*t640 - 1.*t152*t39*t825 + t74*t840 + t198*t882 + t241*t891 + t319*t910 + t444*t938 + t569*t987 - 0.038924*(t1024*t729 + t700*t938 + t711*t987) - 0.80315*(t1024*t758 + t740*t938 + t749*t987) + 0.148705*(t1024*t808 + t783*t938 + t803*t987) + var1[1] - 1.*var2[1];
  p_output1[2]=t1145*t198 + t1164*t241 + t1199*t319 + t1211*t444 + t1229*t569 + t1250*t640 - 0.038924*(t1211*t700 + t1229*t711 + t1250*t729) + t1119*t74 - 0.80315*(t1211*t740 + t1229*t749 + t1250*t758) + 0.148705*(t1211*t783 + t1229*t803 + t1250*t808) + t152*t39*t833 + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
