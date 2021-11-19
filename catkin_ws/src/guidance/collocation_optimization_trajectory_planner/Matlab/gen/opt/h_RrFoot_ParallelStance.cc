/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:30:15 GMT+01:00
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
  double t73;
  double t85;
  double t95;
  double t111;
  double t24;
  double t41;
  double t43;
  double t44;
  double t46;
  double t49;
  double t144;
  double t150;
  double t26;
  double t185;
  double t205;
  double t109;
  double t336;
  double t341;
  double t350;
  double t359;
  double t168;
  double t292;
  double t222;
  double t225;
  double t234;
  double t313;
  double t314;
  double t316;
  double t385;
  double t155;
  double t408;
  double t126;
  double t356;
  double t491;
  double t492;
  double t516;
  double t215;
  double t420;
  double t207;
  double t534;
  double t412;
  double t418;
  double t423;
  double t433;
  double t434;
  double t437;
  double t438;
  double t454;
  double t541;
  double t503;
  double t507;
  double t515;
  double t519;
  double t522;
  double t523;
  double t524;
  double t525;
  double t560;
  double t562;
  double t565;
  double t568;
  double t569;
  double t570;
  double t572;
  double t574;
  double t475;
  double t585;
  double t493;
  double t603;
  double t578;
  double t363;
  double t65;
  double t103;
  double t135;
  double t142;
  double t157;
  double t161;
  double t166;
  double t51;
  double t54;
  double t654;
  double t179;
  double t180;
  double t660;
  double t192;
  double t193;
  double t211;
  double t214;
  double t217;
  double t219;
  double t220;
  double t658;
  double t661;
  double t665;
  double t673;
  double t676;
  double t678;
  double t254;
  double t275;
  double t294;
  double t302;
  double t307;
  double t310;
  double t312;
  double t327;
  double t352;
  double t370;
  double t380;
  double t386;
  double t391;
  double t403;
  double t681;
  double t688;
  double t691;
  double t695;
  double t696;
  double t699;
  double t460;
  double t473;
  double t480;
  double t483;
  double t495;
  double t496;
  double t500;
  double t530;
  double t531;
  double t536;
  double t538;
  double t543;
  double t547;
  double t555;
  double t579;
  double t703;
  double t707;
  double t709;
  double t712;
  double t587;
  double t716;
  double t721;
  double t722;
  double t726;
  double t594;
  double t595;
  double t729;
  double t731;
  double t733;
  double t734;
  double t606;
  double t610;
  double t611;
  double t616;
  double t626;
  double t627;
  double t629;
  double t635;
  double t796;
  double t797;
  double t798;
  double t808;
  double t809;
  double t814;
  double t819;
  double t824;
  double t825;
  double t829;
  double t830;
  double t831;
  double t836;
  double t839;
  double t847;
  double t857;
  double t866;
  double t872;
  double t875;
  double t878;
  double t887;
  double t888;
  double t900;
  double t901;
  t73 = Cos(var1[16]);
  t85 = -1.*t73;
  t95 = 1. + t85;
  t111 = Sin(var1[16]);
  t24 = Cos(var1[4]);
  t41 = Cos(var1[15]);
  t43 = -1.*t41;
  t44 = 1. + t43;
  t46 = -0.15121*t44;
  t49 = Sin(var1[15]);
  t144 = -1. + t73;
  t150 = 4.e-6*t144;
  t26 = Cos(var1[5]);
  t185 = Sin(var1[5]);
  t205 = 7.e-6*t95;
  t109 = 2.8e-11*t95;
  t336 = Cos(var1[17]);
  t341 = -1.*t336;
  t350 = 1. + t341;
  t359 = Sin(var1[17]);
  t168 = Sin(var1[4]);
  t292 = -4.e-6*t111;
  t222 = -1.*t24*t26*t49;
  t225 = -1.*t41*t24*t185;
  t234 = t222 + t225;
  t313 = t41*t24*t26;
  t314 = -1.*t24*t49*t185;
  t316 = t313 + t314;
  t385 = 2.8e-11*t350;
  t155 = -7.e-6*t111;
  t408 = -2.8e-11*t95;
  t126 = -1.*t111;
  t356 = 7.e-6*t350;
  t491 = -1. + t336;
  t492 = 4.e-6*t491;
  t516 = 4.e-6*t95;
  t215 = 7.e-6*t111;
  t420 = -7.e-6*t95;
  t207 = 4.e-6*t111;
  t534 = 4.e-6*t359;
  t412 = t408 + t111;
  t418 = t412*t168;
  t423 = t420 + t292;
  t433 = t423*t234;
  t434 = -1.000000000016*t95;
  t437 = 1. + t434;
  t438 = t437*t316;
  t454 = t418 + t433 + t438;
  t541 = 7.e-6*t359;
  t503 = -1.000000000049*t95;
  t507 = 1. + t503;
  t515 = t507*t168;
  t519 = t516 + t155;
  t522 = t519*t234;
  t523 = t408 + t126;
  t524 = t523*t316;
  t525 = t515 + t522 + t524;
  t560 = t516 + t215;
  t562 = t560*t168;
  t565 = -6.5e-11*t95;
  t568 = 1. + t565;
  t569 = t568*t234;
  t570 = t420 + t207;
  t572 = t570*t316;
  t574 = t562 + t569 + t572;
  t475 = -1.*t359;
  t585 = 4.e-6*t350;
  t493 = -7.e-6*t359;
  t603 = -2.8e-11*t350;
  t578 = -7.e-6*t350;
  t363 = -4.e-6*t359;
  t65 = 1.5843479999999999e-12*var1[16];
  t103 = -0.03874900000889869*t95;
  t135 = t109 + t126;
  t142 = -0.281211000004*t135;
  t157 = t150 + t155;
  t161 = -1.8134809999999998e-6*t157;
  t166 = t65 + t103 + t142 + t161;
  t51 = -0.15121*t49;
  t54 = t46 + t51;
  t654 = Sin(var1[3]);
  t179 = 0.15121*t49;
  t180 = t46 + t179;
  t660 = Cos(var1[3]);
  t192 = 3.9608699999999997e-7*var1[16];
  t193 = -1.1787626499999999e-16*t95;
  t211 = t205 + t207;
  t214 = -0.281211000004*t211;
  t217 = t150 + t215;
  t219 = -0.038749000006999997*t217;
  t220 = t192 + t193 + t214 + t219;
  t658 = t26*t654*t168;
  t661 = t660*t185;
  t665 = t658 + t661;
  t673 = t660*t26;
  t676 = -1.*t654*t168*t185;
  t678 = t673 + t676;
  t254 = -2.7726089999999997e-12*var1[16];
  t275 = -0.2812110000084994*t95;
  t294 = t205 + t292;
  t302 = -1.8134809999999998e-6*t294;
  t307 = t109 + t111;
  t310 = -0.038749000006999997*t307;
  t312 = t254 + t275 + t302 + t310;
  t327 = -1.9784030000000015e-12*var1[17];
  t352 = -0.5031510000160505*t350;
  t370 = t356 + t363;
  t380 = -3.367757e-6*t370;
  t386 = t385 + t359;
  t391 = -0.038575000014*t386;
  t403 = t327 + t352 + t380 + t391;
  t681 = -1.*t49*t665;
  t688 = t41*t678;
  t691 = t681 + t688;
  t695 = t41*t665;
  t696 = t49*t678;
  t699 = t695 + t696;
  t460 = 1.1305160000000008e-12*var1[17];
  t473 = -0.03857500001589017*t350;
  t480 = t385 + t475;
  t483 = -0.5031510000080001*t480;
  t495 = t492 + t493;
  t496 = -3.367757e-6*t495;
  t500 = t460 + t473 + t483 + t496;
  t530 = 2.826290000000002e-7*var1[17];
  t531 = -2.18904205e-16*t350;
  t536 = t356 + t534;
  t538 = -0.5031510000080001*t536;
  t543 = t492 + t541;
  t547 = -0.038575000014*t543;
  t555 = t530 + t531 + t538 + t547;
  t579 = t578 + t534;
  t703 = -1.*t24*t412*t654;
  t707 = t423*t691;
  t709 = t437*t699;
  t712 = t703 + t707 + t709;
  t587 = t585 + t541;
  t716 = -1.*t507*t24*t654;
  t721 = t519*t691;
  t722 = t523*t699;
  t726 = t716 + t721 + t722;
  t594 = -6.5e-11*t350;
  t595 = 1. + t594;
  t729 = -1.*t24*t560*t654;
  t731 = t568*t691;
  t733 = t570*t699;
  t734 = t729 + t731 + t733;
  t606 = t603 + t475;
  t610 = -1.000000000049*t350;
  t611 = 1. + t610;
  t616 = t585 + t493;
  t626 = -1.000000000016*t350;
  t627 = 1. + t626;
  t629 = t603 + t359;
  t635 = t578 + t363;
  t796 = -1.*t660*t26*t168;
  t797 = t654*t185;
  t798 = t796 + t797;
  t808 = t26*t654;
  t809 = t660*t168*t185;
  t814 = t808 + t809;
  t819 = -1.*t49*t798;
  t824 = t41*t814;
  t825 = t819 + t824;
  t829 = t41*t798;
  t830 = t49*t814;
  t831 = t829 + t830;
  t836 = t660*t24*t412;
  t839 = t423*t825;
  t847 = t437*t831;
  t857 = t836 + t839 + t847;
  t866 = t507*t660*t24;
  t872 = t519*t825;
  t875 = t523*t831;
  t878 = t866 + t872 + t875;
  t887 = t660*t24*t560;
  t888 = t568*t825;
  t900 = t570*t831;
  t901 = t887 + t888 + t900;
  p_output1[0]=t166*t168 + t220*t234 - 1.*t180*t185*t24 + t312*t316 + t403*t454 + t500*t525 + t24*t26*t54 + t555*t574 - 0.148715*(t454*t579 + t525*t587 + t574*t595) - 0.038576*(t454*t606 + t525*t611 + t574*t616) - 0.80315*(t454*t627 + t525*t629 + t574*t635) + var1[0] - 1.*var2[0];
  p_output1[1]=-1.*t166*t24*t654 + t54*t665 + t180*t678 + t220*t691 + t312*t699 + t403*t712 + t500*t726 + t555*t734 - 0.148715*(t579*t712 + t587*t726 + t595*t734) - 0.038576*(t606*t712 + t611*t726 + t616*t734) - 0.80315*(t627*t712 + t629*t726 + t635*t734) + var1[1] - 1.*var2[1];
  p_output1[2]=t166*t24*t660 + t54*t798 + t180*t814 + t220*t825 + t312*t831 + t403*t857 + t500*t878 + t555*t901 - 0.148715*(t579*t857 + t587*t878 + t595*t901) - 0.038576*(t606*t857 + t611*t878 + t616*t901) - 0.80315*(t627*t857 + t629*t878 + t635*t901) + var1[2] - 1.*var2[2];
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

#include "h_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
