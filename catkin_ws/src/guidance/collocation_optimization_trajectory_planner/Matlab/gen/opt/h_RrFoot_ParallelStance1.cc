/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:11:29 GMT+01:00
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
  double t76;
  double t82;
  double t83;
  double t100;
  double t13;
  double t28;
  double t39;
  double t44;
  double t45;
  double t57;
  double t121;
  double t123;
  double t23;
  double t159;
  double t180;
  double t97;
  double t274;
  double t275;
  double t276;
  double t280;
  double t147;
  double t238;
  double t209;
  double t215;
  double t222;
  double t265;
  double t266;
  double t269;
  double t295;
  double t128;
  double t324;
  double t103;
  double t279;
  double t360;
  double t369;
  double t398;
  double t197;
  double t330;
  double t182;
  double t423;
  double t327;
  double t329;
  double t336;
  double t340;
  double t341;
  double t343;
  double t344;
  double t345;
  double t443;
  double t387;
  double t388;
  double t390;
  double t402;
  double t404;
  double t405;
  double t406;
  double t408;
  double t456;
  double t459;
  double t460;
  double t464;
  double t465;
  double t466;
  double t467;
  double t468;
  double t350;
  double t490;
  double t374;
  double t513;
  double t479;
  double t287;
  double t72;
  double t85;
  double t112;
  double t119;
  double t132;
  double t136;
  double t138;
  double t59;
  double t60;
  double t578;
  double t152;
  double t154;
  double t586;
  double t169;
  double t176;
  double t185;
  double t188;
  double t198;
  double t204;
  double t208;
  double t584;
  double t589;
  double t591;
  double t601;
  double t603;
  double t607;
  double t225;
  double t227;
  double t241;
  double t250;
  double t251;
  double t256;
  double t263;
  double t272;
  double t277;
  double t289;
  double t291;
  double t297;
  double t316;
  double t321;
  double t613;
  double t614;
  double t616;
  double t624;
  double t629;
  double t632;
  double t347;
  double t349;
  double t352;
  double t353;
  double t382;
  double t384;
  double t386;
  double t416;
  double t417;
  double t439;
  double t440;
  double t446;
  double t449;
  double t454;
  double t482;
  double t642;
  double t647;
  double t648;
  double t650;
  double t492;
  double t661;
  double t663;
  double t664;
  double t666;
  double t500;
  double t502;
  double t670;
  double t676;
  double t679;
  double t681;
  double t516;
  double t521;
  double t523;
  double t526;
  double t545;
  double t546;
  double t554;
  double t562;
  double t795;
  double t797;
  double t798;
  double t801;
  double t804;
  double t810;
  double t812;
  double t813;
  double t820;
  double t823;
  double t827;
  double t829;
  double t836;
  double t838;
  double t840;
  double t841;
  double t843;
  double t845;
  double t849;
  double t854;
  double t860;
  double t864;
  double t867;
  double t873;
  t76 = Cos(var1[16]);
  t82 = -1.*t76;
  t83 = 1. + t82;
  t100 = Sin(var1[16]);
  t13 = Cos(var1[4]);
  t28 = Cos(var1[15]);
  t39 = -1.*t28;
  t44 = 1. + t39;
  t45 = -0.15121*t44;
  t57 = Sin(var1[15]);
  t121 = -1. + t76;
  t123 = 4.e-6*t121;
  t23 = Cos(var1[5]);
  t159 = Sin(var1[5]);
  t180 = 7.e-6*t83;
  t97 = 2.8e-11*t83;
  t274 = Cos(var1[17]);
  t275 = -1.*t274;
  t276 = 1. + t275;
  t280 = Sin(var1[17]);
  t147 = Sin(var1[4]);
  t238 = -4.e-6*t100;
  t209 = -1.*t13*t23*t57;
  t215 = -1.*t28*t13*t159;
  t222 = t209 + t215;
  t265 = t28*t13*t23;
  t266 = -1.*t13*t57*t159;
  t269 = t265 + t266;
  t295 = 2.8e-11*t276;
  t128 = -7.e-6*t100;
  t324 = -2.8e-11*t83;
  t103 = -1.*t100;
  t279 = 7.e-6*t276;
  t360 = -1. + t274;
  t369 = 4.e-6*t360;
  t398 = 4.e-6*t83;
  t197 = 7.e-6*t100;
  t330 = -7.e-6*t83;
  t182 = 4.e-6*t100;
  t423 = 4.e-6*t280;
  t327 = t324 + t100;
  t329 = t327*t147;
  t336 = t330 + t238;
  t340 = t336*t222;
  t341 = -1.000000000016*t83;
  t343 = 1. + t341;
  t344 = t343*t269;
  t345 = t329 + t340 + t344;
  t443 = 7.e-6*t280;
  t387 = -1.000000000049*t83;
  t388 = 1. + t387;
  t390 = t388*t147;
  t402 = t398 + t128;
  t404 = t402*t222;
  t405 = t324 + t103;
  t406 = t405*t269;
  t408 = t390 + t404 + t406;
  t456 = t398 + t197;
  t459 = t456*t147;
  t460 = -6.5e-11*t83;
  t464 = 1. + t460;
  t465 = t464*t222;
  t466 = t330 + t182;
  t467 = t466*t269;
  t468 = t459 + t465 + t467;
  t350 = -1.*t280;
  t490 = 4.e-6*t276;
  t374 = -7.e-6*t280;
  t513 = -2.8e-11*t276;
  t479 = -7.e-6*t276;
  t287 = -4.e-6*t280;
  t72 = 1.5843479999999999e-12*var1[16];
  t85 = -0.03874900000889869*t83;
  t112 = t97 + t103;
  t119 = -0.281211000004*t112;
  t132 = t123 + t128;
  t136 = -1.8134809999999998e-6*t132;
  t138 = t72 + t85 + t119 + t136;
  t59 = -0.15121*t57;
  t60 = t45 + t59;
  t578 = Sin(var1[3]);
  t152 = 0.15121*t57;
  t154 = t45 + t152;
  t586 = Cos(var1[3]);
  t169 = 3.9608699999999997e-7*var1[16];
  t176 = -1.1787626499999999e-16*t83;
  t185 = t180 + t182;
  t188 = -0.281211000004*t185;
  t198 = t123 + t197;
  t204 = -0.038749000006999997*t198;
  t208 = t169 + t176 + t188 + t204;
  t584 = t23*t578*t147;
  t589 = t586*t159;
  t591 = t584 + t589;
  t601 = t586*t23;
  t603 = -1.*t578*t147*t159;
  t607 = t601 + t603;
  t225 = -2.7726089999999997e-12*var1[16];
  t227 = -0.2812110000084994*t83;
  t241 = t180 + t238;
  t250 = -1.8134809999999998e-6*t241;
  t251 = t97 + t100;
  t256 = -0.038749000006999997*t251;
  t263 = t225 + t227 + t250 + t256;
  t272 = -1.9784030000000015e-12*var1[17];
  t277 = -0.5031510000160505*t276;
  t289 = t279 + t287;
  t291 = -3.367757e-6*t289;
  t297 = t295 + t280;
  t316 = -0.038575000014*t297;
  t321 = t272 + t277 + t291 + t316;
  t613 = -1.*t57*t591;
  t614 = t28*t607;
  t616 = t613 + t614;
  t624 = t28*t591;
  t629 = t57*t607;
  t632 = t624 + t629;
  t347 = 1.1305160000000008e-12*var1[17];
  t349 = -0.03857500001589017*t276;
  t352 = t295 + t350;
  t353 = -0.5031510000080001*t352;
  t382 = t369 + t374;
  t384 = -3.367757e-6*t382;
  t386 = t347 + t349 + t353 + t384;
  t416 = 2.826290000000002e-7*var1[17];
  t417 = -2.18904205e-16*t276;
  t439 = t279 + t423;
  t440 = -0.5031510000080001*t439;
  t446 = t369 + t443;
  t449 = -0.038575000014*t446;
  t454 = t416 + t417 + t440 + t449;
  t482 = t479 + t423;
  t642 = -1.*t13*t327*t578;
  t647 = t336*t616;
  t648 = t343*t632;
  t650 = t642 + t647 + t648;
  t492 = t490 + t443;
  t661 = -1.*t388*t13*t578;
  t663 = t402*t616;
  t664 = t405*t632;
  t666 = t661 + t663 + t664;
  t500 = -6.5e-11*t276;
  t502 = 1. + t500;
  t670 = -1.*t13*t456*t578;
  t676 = t464*t616;
  t679 = t466*t632;
  t681 = t670 + t676 + t679;
  t516 = t513 + t350;
  t521 = -1.000000000049*t276;
  t523 = 1. + t521;
  t526 = t490 + t374;
  t545 = -1.000000000016*t276;
  t546 = 1. + t545;
  t554 = t513 + t280;
  t562 = t479 + t287;
  t795 = -1.*t586*t23*t147;
  t797 = t578*t159;
  t798 = t795 + t797;
  t801 = t23*t578;
  t804 = t586*t147*t159;
  t810 = t801 + t804;
  t812 = -1.*t57*t798;
  t813 = t28*t810;
  t820 = t812 + t813;
  t823 = t28*t798;
  t827 = t57*t810;
  t829 = t823 + t827;
  t836 = t586*t13*t327;
  t838 = t336*t820;
  t840 = t343*t829;
  t841 = t836 + t838 + t840;
  t843 = t388*t586*t13;
  t845 = t402*t820;
  t849 = t405*t829;
  t854 = t843 + t845 + t849;
  t860 = t586*t13*t456;
  t864 = t464*t820;
  t867 = t466*t829;
  t873 = t860 + t864 + t867;
  p_output1[0]=t138*t147 - 1.*t13*t154*t159 + t208*t222 + t263*t269 + t321*t345 + t386*t408 + t454*t468 - 0.148715*(t345*t482 + t408*t492 + t468*t502) - 0.038576*(t345*t516 + t408*t523 + t468*t526) - 0.80315*(t345*t546 + t408*t554 + t468*t562) + t13*t23*t60 + var1[0] - 1.*var2[0];
  p_output1[1]=-1.*t13*t138*t578 + t591*t60 + t154*t607 + t208*t616 + t263*t632 + t321*t650 + t386*t666 + t454*t681 - 0.148715*(t482*t650 + t492*t666 + t502*t681) - 0.038576*(t516*t650 + t523*t666 + t526*t681) - 0.80315*(t546*t650 + t554*t666 + t562*t681) + var1[1] - 1.*var2[1];
  p_output1[2]=t13*t138*t586 + t60*t798 + t154*t810 + t208*t820 + t263*t829 + t321*t841 + t386*t854 + t454*t873 - 0.148715*(t482*t841 + t492*t854 + t502*t873) - 0.038576*(t516*t841 + t523*t854 + t526*t873) - 0.80315*(t546*t841 + t554*t854 + t562*t873) + var1[2] - 1.*var2[2];
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

#include "h_RrFoot_ParallelStance1.hh"

namespace ParallelStance1
{

void h_RrFoot_ParallelStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
