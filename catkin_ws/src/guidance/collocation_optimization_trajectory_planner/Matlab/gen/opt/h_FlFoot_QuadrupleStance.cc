/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 22:33:08 GMT+01:00
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
  double t186;
  double t234;
  double t235;
  double t382;
  double t402;
  double t403;
  double t215;
  double t532;
  double t672;
  double t685;
  double t686;
  double t713;
  double t888;
  double t1059;
  double t612;
  double t614;
  double t660;
  double t808;
  double t821;
  double t829;
  double t1229;
  double t1238;
  double t1295;
  double t1321;
  double t1061;
  double t1067;
  double t1104;
  double t1141;
  double t1194;
  double t1207;
  double t1867;
  double t1614;
  double t1642;
  double t1690;
  double t1716;
  double t1403;
  double t1429;
  double t1430;
  double t1463;
  double t1479;
  double t1494;
  double t425;
  double t501;
  double t2356;
  double t2346;
  double t576;
  double t577;
  double t2352;
  double t2357;
  double t2364;
  double t2370;
  double t2395;
  double t2397;
  double t663;
  double t712;
  double t733;
  double t781;
  double t859;
  double t863;
  double t869;
  double t889;
  double t925;
  double t945;
  double t1012;
  double t2416;
  double t2429;
  double t2437;
  double t2447;
  double t2453;
  double t2470;
  double t1213;
  double t1306;
  double t1322;
  double t1346;
  double t1549;
  double t1595;
  double t1597;
  double t1742;
  double t1786;
  double t1787;
  double t1847;
  double t1887;
  double t2046;
  double t2590;
  double t2616;
  double t2635;
  double t2640;
  double t2877;
  double t2882;
  double t2887;
  double t2900;
  double t2793;
  double t2802;
  double t2835;
  double t2851;
  double t2232;
  double t2251;
  double t3009;
  double t3010;
  double t3043;
  double t3055;
  double t3057;
  double t3084;
  double t3102;
  double t3105;
  double t3132;
  double t3151;
  double t3215;
  double t3232;
  double t3378;
  double t3382;
  double t3402;
  double t3436;
  double t3703;
  double t3731;
  double t3752;
  double t3772;
  double t3522;
  double t3619;
  double t3627;
  double t3656;
  t186 = Cos(var1[4]);
  t234 = Cos(var1[6]);
  t235 = -1.*t234;
  t382 = 1. + t235;
  t402 = 0.15121*t382;
  t403 = Sin(var1[6]);
  t215 = Sin(var1[5]);
  t532 = Cos(var1[5]);
  t672 = Cos(var1[7]);
  t685 = -1.*t672;
  t686 = 1. + t685;
  t713 = Sin(var1[7]);
  t888 = Sin(var1[4]);
  t1059 = -1. + t672;
  t612 = -1.*t186*t234*t215;
  t614 = -1.*t186*t532*t403;
  t660 = t612 + t614;
  t808 = t186*t532*t234;
  t821 = -1.*t186*t215*t403;
  t829 = t808 + t821;
  t1229 = Cos(var1[8]);
  t1238 = -1.*t1229;
  t1295 = 1. + t1238;
  t1321 = Sin(var1[8]);
  t1061 = 4.e-6*t1059*t888;
  t1067 = 1.6e-11*t1059;
  t1104 = 1. + t1067;
  t1141 = t1104*t660;
  t1194 = 4.e-6*t829*t713;
  t1207 = t1061 + t1141 + t1194;
  t1867 = -1. + t1229;
  t1614 = t672*t888;
  t1642 = 4.e-6*t1059*t660;
  t1690 = t829*t713;
  t1716 = t1614 + t1642 + t1690;
  t1403 = -1.000000000016*t686;
  t1429 = 1. + t1403;
  t1430 = t1429*t829;
  t1463 = -1.*t888*t713;
  t1479 = -4.e-6*t660*t713;
  t1494 = t1430 + t1463 + t1479;
  t425 = -0.15121*t403;
  t501 = t402 + t425;
  t2356 = Sin(var1[3]);
  t2346 = Cos(var1[3]);
  t576 = 0.15121*t403;
  t577 = t402 + t576;
  t2352 = t2346*t532;
  t2357 = -1.*t2356*t888*t215;
  t2364 = t2352 + t2357;
  t2370 = t532*t2356*t888;
  t2395 = t2346*t215;
  t2397 = t2370 + t2395;
  t663 = -1.2484e-7*var1[7];
  t712 = -1.5499600000248e-7*t686;
  t733 = 1.124840000016e-6*t713;
  t781 = t663 + t712 + t733;
  t859 = 0.281210000008499*t686;
  t863 = 0.03874900000062*t713;
  t869 = t859 + t863;
  t889 = 4.9936e-13*var1[7];
  t925 = -0.03874900000062*t686;
  t945 = 0.281210000004*t713;
  t1012 = t889 + t925 + t945;
  t2416 = t234*t2364;
  t2429 = -1.*t2397*t403;
  t2437 = t2416 + t2429;
  t2447 = t234*t2397;
  t2453 = t2364*t403;
  t2470 = t2447 + t2453;
  t1213 = -1.284e-8*var1[8];
  t1306 = -1.5499600000248e-7*t1295;
  t1322 = 2.012840000032e-6*t1321;
  t1346 = t1213 + t1306 + t1322;
  t1549 = 0.503210000016051*t1295;
  t1595 = 0.03874900000062*t1321;
  t1597 = t1549 + t1595;
  t1742 = 5.136e-14*var1[8];
  t1786 = -0.03874900000062*t1295;
  t1787 = 0.503210000008*t1321;
  t1847 = t1742 + t1786 + t1787;
  t1887 = 1.6e-11*t1867;
  t2046 = 1. + t1887;
  t2590 = -4.e-6*t186*t1059*t2356;
  t2616 = t1104*t2437;
  t2635 = 4.e-6*t2470*t713;
  t2640 = t2590 + t2616 + t2635;
  t2877 = -1.*t186*t672*t2356;
  t2882 = 4.e-6*t1059*t2437;
  t2887 = t2470*t713;
  t2900 = t2877 + t2882 + t2887;
  t2793 = t1429*t2470;
  t2802 = t186*t2356*t713;
  t2835 = -4.e-6*t2437*t713;
  t2851 = t2793 + t2802 + t2835;
  t2232 = -1.000000000016*t1295;
  t2251 = 1. + t2232;
  t3009 = t532*t2356;
  t3010 = t2346*t888*t215;
  t3043 = t3009 + t3010;
  t3055 = -1.*t2346*t532*t888;
  t3057 = t2356*t215;
  t3084 = t3055 + t3057;
  t3102 = t234*t3043;
  t3105 = -1.*t3084*t403;
  t3132 = t3102 + t3105;
  t3151 = t234*t3084;
  t3215 = t3043*t403;
  t3232 = t3151 + t3215;
  t3378 = 4.e-6*t2346*t186*t1059;
  t3382 = t1104*t3132;
  t3402 = 4.e-6*t3232*t713;
  t3436 = t3378 + t3382 + t3402;
  t3703 = t2346*t186*t672;
  t3731 = 4.e-6*t1059*t3132;
  t3752 = t3232*t713;
  t3772 = t3703 + t3731 + t3752;
  t3522 = t1429*t3232;
  t3619 = -1.*t2346*t186*t713;
  t3627 = -4.e-6*t3132*t713;
  t3656 = t3522 + t3619 + t3627;
  p_output1[0]=t1207*t1346 + t1494*t1597 + t1716*t1847 - 0.03875*(t1321*t1494 + t1229*t1716 + 4.e-6*t1207*t1867) + 0.14871*(4.e-6*t1321*t1494 + 4.e-6*t1716*t1867 + t1207*t2046) + 0.80321*(-4.e-6*t1207*t1321 - 1.*t1321*t1716 + t1494*t2251) - 1.*t186*t215*t501 + t186*t532*t577 + t660*t781 + t829*t869 + t1012*t888 + var1[0] - 1.*var2[0];
  p_output1[1]=-1.*t1012*t186*t2356 + t1346*t2640 + t1597*t2851 + t1847*t2900 - 0.03875*(4.e-6*t1867*t2640 + t1321*t2851 + t1229*t2900) + 0.80321*(-4.e-6*t1321*t2640 + t2251*t2851 - 1.*t1321*t2900) + 0.14871*(t2046*t2640 + 4.e-6*t1321*t2851 + 4.e-6*t1867*t2900) + t2364*t501 + t2397*t577 + t2437*t781 + t2470*t869 + var1[1] - 1.*var2[1];
  p_output1[2]=t1012*t186*t2346 + t1346*t3436 + t1597*t3656 + t1847*t3772 - 0.03875*(4.e-6*t1867*t3436 + t1321*t3656 + t1229*t3772) + 0.80321*(-4.e-6*t1321*t3436 + t2251*t3656 - 1.*t1321*t3772) + 0.14871*(t2046*t3436 + 4.e-6*t1321*t3656 + 4.e-6*t1867*t3772) + t3043*t501 + t3084*t577 + t3132*t781 + t3232*t869 + var1[2] - 1.*var2[2];
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

#include "h_FlFoot_QuadrupleStance.hh"

namespace QuadrupleStance
{

void h_FlFoot_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
