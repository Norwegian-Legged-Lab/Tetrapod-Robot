/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:28:56 GMT+01:00
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
  double t77;
  double t79;
  double t82;
  double t88;
  double t19;
  double t34;
  double t36;
  double t41;
  double t42;
  double t44;
  double t101;
  double t104;
  double t23;
  double t160;
  double t167;
  double t85;
  double t291;
  double t299;
  double t305;
  double t323;
  double t120;
  double t235;
  double t206;
  double t208;
  double t219;
  double t261;
  double t270;
  double t278;
  double t339;
  double t105;
  double t361;
  double t89;
  double t310;
  double t471;
  double t475;
  double t498;
  double t183;
  double t369;
  double t170;
  double t550;
  double t363;
  double t368;
  double t370;
  double t371;
  double t378;
  double t380;
  double t381;
  double t386;
  double t568;
  double t493;
  double t494;
  double t497;
  double t505;
  double t508;
  double t520;
  double t536;
  double t539;
  double t590;
  double t599;
  double t604;
  double t608;
  double t613;
  double t615;
  double t633;
  double t640;
  double t451;
  double t667;
  double t480;
  double t700;
  double t648;
  double t324;
  double t68;
  double t83;
  double t95;
  double t100;
  double t110;
  double t111;
  double t113;
  double t57;
  double t61;
  double t779;
  double t138;
  double t154;
  double t786;
  double t162;
  double t164;
  double t172;
  double t177;
  double t193;
  double t195;
  double t205;
  double t784;
  double t787;
  double t788;
  double t799;
  double t802;
  double t803;
  double t221;
  double t223;
  double t237;
  double t245;
  double t246;
  double t248;
  double t258;
  double t288;
  double t308;
  double t329;
  double t332;
  double t349;
  double t350;
  double t358;
  double t807;
  double t808;
  double t811;
  double t823;
  double t826;
  double t828;
  double t410;
  double t416;
  double t463;
  double t465;
  double t484;
  double t486;
  double t492;
  double t547;
  double t548;
  double t558;
  double t562;
  double t573;
  double t584;
  double t586;
  double t649;
  double t830;
  double t839;
  double t840;
  double t847;
  double t674;
  double t850;
  double t852;
  double t858;
  double t859;
  double t680;
  double t682;
  double t864;
  double t865;
  double t880;
  double t883;
  double t710;
  double t721;
  double t724;
  double t731;
  double t739;
  double t744;
  double t750;
  double t758;
  double t970;
  double t974;
  double t977;
  double t990;
  double t993;
  double t996;
  double t999;
  double t1000;
  double t1004;
  double t1009;
  double t1019;
  double t1020;
  double t1026;
  double t1036;
  double t1040;
  double t1044;
  double t1051;
  double t1055;
  double t1062;
  double t1065;
  double t1074;
  double t1075;
  double t1076;
  double t1080;
  t77 = Cos(var1[16]);
  t79 = -1.*t77;
  t82 = 1. + t79;
  t88 = Sin(var1[16]);
  t19 = Cos(var1[4]);
  t34 = Cos(var1[15]);
  t36 = -1.*t34;
  t41 = 1. + t36;
  t42 = -0.15121*t41;
  t44 = Sin(var1[15]);
  t101 = -1. + t77;
  t104 = 4.e-6*t101;
  t23 = Cos(var1[5]);
  t160 = Sin(var1[5]);
  t167 = 7.e-6*t82;
  t85 = 2.8e-11*t82;
  t291 = Cos(var1[17]);
  t299 = -1.*t291;
  t305 = 1. + t299;
  t323 = Sin(var1[17]);
  t120 = Sin(var1[4]);
  t235 = -4.e-6*t88;
  t206 = -1.*t19*t23*t44;
  t208 = -1.*t34*t19*t160;
  t219 = t206 + t208;
  t261 = t34*t19*t23;
  t270 = -1.*t19*t44*t160;
  t278 = t261 + t270;
  t339 = 2.8e-11*t305;
  t105 = -7.e-6*t88;
  t361 = -2.8e-11*t82;
  t89 = -1.*t88;
  t310 = 7.e-6*t305;
  t471 = -1. + t291;
  t475 = 4.e-6*t471;
  t498 = 4.e-6*t82;
  t183 = 7.e-6*t88;
  t369 = -7.e-6*t82;
  t170 = 4.e-6*t88;
  t550 = 4.e-6*t323;
  t363 = t361 + t88;
  t368 = t363*t120;
  t370 = t369 + t235;
  t371 = t370*t219;
  t378 = -1.000000000016*t82;
  t380 = 1. + t378;
  t381 = t380*t278;
  t386 = t368 + t371 + t381;
  t568 = 7.e-6*t323;
  t493 = -1.000000000049*t82;
  t494 = 1. + t493;
  t497 = t494*t120;
  t505 = t498 + t105;
  t508 = t505*t219;
  t520 = t361 + t89;
  t536 = t520*t278;
  t539 = t497 + t508 + t536;
  t590 = t498 + t183;
  t599 = t590*t120;
  t604 = -6.5e-11*t82;
  t608 = 1. + t604;
  t613 = t608*t219;
  t615 = t369 + t170;
  t633 = t615*t278;
  t640 = t599 + t613 + t633;
  t451 = -1.*t323;
  t667 = 4.e-6*t305;
  t480 = -7.e-6*t323;
  t700 = -2.8e-11*t305;
  t648 = -7.e-6*t305;
  t324 = -4.e-6*t323;
  t68 = 1.5843479999999999e-12*var1[16];
  t83 = -0.03874900000889869*t82;
  t95 = t85 + t89;
  t100 = -0.281211000004*t95;
  t110 = t104 + t105;
  t111 = -1.8134809999999998e-6*t110;
  t113 = t68 + t83 + t100 + t111;
  t57 = -0.15121*t44;
  t61 = t42 + t57;
  t779 = Sin(var1[3]);
  t138 = 0.15121*t44;
  t154 = t42 + t138;
  t786 = Cos(var1[3]);
  t162 = 3.9608699999999997e-7*var1[16];
  t164 = -1.1787626499999999e-16*t82;
  t172 = t167 + t170;
  t177 = -0.281211000004*t172;
  t193 = t104 + t183;
  t195 = -0.038749000006999997*t193;
  t205 = t162 + t164 + t177 + t195;
  t784 = t23*t779*t120;
  t787 = t786*t160;
  t788 = t784 + t787;
  t799 = t786*t23;
  t802 = -1.*t779*t120*t160;
  t803 = t799 + t802;
  t221 = -2.7726089999999997e-12*var1[16];
  t223 = -0.2812110000084994*t82;
  t237 = t167 + t235;
  t245 = -1.8134809999999998e-6*t237;
  t246 = t85 + t88;
  t248 = -0.038749000006999997*t246;
  t258 = t221 + t223 + t245 + t248;
  t288 = -1.9784030000000015e-12*var1[17];
  t308 = -0.5031510000160505*t305;
  t329 = t310 + t324;
  t332 = -3.367757e-6*t329;
  t349 = t339 + t323;
  t350 = -0.038575000014*t349;
  t358 = t288 + t308 + t332 + t350;
  t807 = -1.*t44*t788;
  t808 = t34*t803;
  t811 = t807 + t808;
  t823 = t34*t788;
  t826 = t44*t803;
  t828 = t823 + t826;
  t410 = 1.1305160000000008e-12*var1[17];
  t416 = -0.03857500001589017*t305;
  t463 = t339 + t451;
  t465 = -0.5031510000080001*t463;
  t484 = t475 + t480;
  t486 = -3.367757e-6*t484;
  t492 = t410 + t416 + t465 + t486;
  t547 = 2.826290000000002e-7*var1[17];
  t548 = -2.18904205e-16*t305;
  t558 = t310 + t550;
  t562 = -0.5031510000080001*t558;
  t573 = t475 + t568;
  t584 = -0.038575000014*t573;
  t586 = t547 + t548 + t562 + t584;
  t649 = t648 + t550;
  t830 = -1.*t19*t363*t779;
  t839 = t370*t811;
  t840 = t380*t828;
  t847 = t830 + t839 + t840;
  t674 = t667 + t568;
  t850 = -1.*t494*t19*t779;
  t852 = t505*t811;
  t858 = t520*t828;
  t859 = t850 + t852 + t858;
  t680 = -6.5e-11*t305;
  t682 = 1. + t680;
  t864 = -1.*t19*t590*t779;
  t865 = t608*t811;
  t880 = t615*t828;
  t883 = t864 + t865 + t880;
  t710 = t700 + t451;
  t721 = -1.000000000049*t305;
  t724 = 1. + t721;
  t731 = t667 + t480;
  t739 = -1.000000000016*t305;
  t744 = 1. + t739;
  t750 = t700 + t323;
  t758 = t648 + t324;
  t970 = -1.*t786*t23*t120;
  t974 = t779*t160;
  t977 = t970 + t974;
  t990 = t23*t779;
  t993 = t786*t120*t160;
  t996 = t990 + t993;
  t999 = -1.*t44*t977;
  t1000 = t34*t996;
  t1004 = t999 + t1000;
  t1009 = t34*t977;
  t1019 = t44*t996;
  t1020 = t1009 + t1019;
  t1026 = t786*t19*t363;
  t1036 = t370*t1004;
  t1040 = t380*t1020;
  t1044 = t1026 + t1036 + t1040;
  t1051 = t494*t786*t19;
  t1055 = t505*t1004;
  t1062 = t520*t1020;
  t1065 = t1051 + t1055 + t1062;
  t1074 = t786*t19*t590;
  t1075 = t608*t1004;
  t1076 = t615*t1020;
  t1080 = t1074 + t1075 + t1076;
  p_output1[0]=t113*t120 - 1.*t154*t160*t19 + t205*t219 + t258*t278 + t358*t386 + t492*t539 + t19*t23*t61 + t586*t640 - 0.148715*(t386*t649 + t539*t674 + t640*t682) - 0.038576*(t386*t710 + t539*t724 + t640*t731) - 0.80315*(t386*t744 + t539*t750 + t640*t758) + var1[0] - 1.*var2[0];
  p_output1[1]=-1.*t113*t19*t779 + t61*t788 + t154*t803 + t205*t811 + t258*t828 + t358*t847 + t492*t859 + t586*t883 - 0.148715*(t649*t847 + t674*t859 + t682*t883) - 0.038576*(t710*t847 + t724*t859 + t731*t883) - 0.80315*(t744*t847 + t750*t859 + t758*t883) + var1[1] - 1.*var2[1];
  p_output1[2]=t1004*t205 + t1020*t258 + t1044*t358 + t1065*t492 + t1080*t586 - 0.148715*(t1044*t649 + t1065*t674 + t1080*t682) - 0.038576*(t1044*t710 + t1065*t724 + t1080*t731) - 0.80315*(t1044*t744 + t1065*t750 + t1080*t758) + t113*t19*t786 + t61*t977 + t154*t996 + var1[2] - 1.*var2[2];
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
