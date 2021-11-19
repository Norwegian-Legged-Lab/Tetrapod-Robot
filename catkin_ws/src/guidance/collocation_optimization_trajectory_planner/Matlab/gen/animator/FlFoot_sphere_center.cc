/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:47 GMT+01:00
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
  double t81;
  double t257;
  double t259;
  double t320;
  double t332;
  double t560;
  double t157;
  double t690;
  double t1008;
  double t1067;
  double t1104;
  double t1167;
  double t1489;
  double t1879;
  double t788;
  double t804;
  double t897;
  double t1208;
  double t1211;
  double t1226;
  double t2224;
  double t2226;
  double t2263;
  double t2300;
  double t1892;
  double t2039;
  double t2042;
  double t2098;
  double t2122;
  double t2175;
  double t2946;
  double t2731;
  double t2773;
  double t2779;
  double t2814;
  double t2372;
  double t2390;
  double t2502;
  double t2520;
  double t2581;
  double t2587;
  double t582;
  double t598;
  double t3320;
  double t3315;
  double t713;
  double t756;
  double t3319;
  double t3322;
  double t3344;
  double t3382;
  double t3410;
  double t3411;
  double t929;
  double t1140;
  double t1181;
  double t1182;
  double t1300;
  double t1428;
  double t1465;
  double t1548;
  double t1666;
  double t1686;
  double t1725;
  double t3435;
  double t3453;
  double t3455;
  double t3468;
  double t3477;
  double t3481;
  double t2202;
  double t2275;
  double t2313;
  double t2355;
  double t2589;
  double t2603;
  double t2604;
  double t2819;
  double t2826;
  double t2838;
  double t2848;
  double t2947;
  double t2949;
  double t3528;
  double t3535;
  double t3547;
  double t3548;
  double t3606;
  double t3607;
  double t3608;
  double t3614;
  double t3551;
  double t3556;
  double t3574;
  double t3578;
  double t3102;
  double t3179;
  double t3698;
  double t3699;
  double t3700;
  double t3717;
  double t3720;
  double t3729;
  double t3736;
  double t3745;
  double t3753;
  double t3756;
  double t3759;
  double t3768;
  double t3839;
  double t3846;
  double t3850;
  double t3851;
  double t3880;
  double t3881;
  double t3882;
  double t3884;
  double t3869;
  double t3870;
  double t3873;
  double t3875;
  t81 = Cos(var1[4]);
  t257 = Cos(var1[6]);
  t259 = -1.*t257;
  t320 = 1. + t259;
  t332 = 0.15121*t320;
  t560 = Sin(var1[6]);
  t157 = Sin(var1[5]);
  t690 = Cos(var1[5]);
  t1008 = Cos(var1[7]);
  t1067 = -1.*t1008;
  t1104 = 1. + t1067;
  t1167 = Sin(var1[7]);
  t1489 = Sin(var1[4]);
  t1879 = -1. + t1008;
  t788 = -1.*t81*t257*t157;
  t804 = -1.*t81*t690*t560;
  t897 = t788 + t804;
  t1208 = t81*t690*t257;
  t1211 = -1.*t81*t157*t560;
  t1226 = t1208 + t1211;
  t2224 = Cos(var1[8]);
  t2226 = -1.*t2224;
  t2263 = 1. + t2226;
  t2300 = Sin(var1[8]);
  t1892 = 4.e-6*t1879*t1489;
  t2039 = 1.6e-11*t1879;
  t2042 = 1. + t2039;
  t2098 = t2042*t897;
  t2122 = 4.e-6*t1226*t1167;
  t2175 = t1892 + t2098 + t2122;
  t2946 = -1. + t2224;
  t2731 = t1008*t1489;
  t2773 = 4.e-6*t1879*t897;
  t2779 = t1226*t1167;
  t2814 = t2731 + t2773 + t2779;
  t2372 = -1.000000000016*t1104;
  t2390 = 1. + t2372;
  t2502 = t2390*t1226;
  t2520 = -1.*t1489*t1167;
  t2581 = -4.e-6*t897*t1167;
  t2587 = t2502 + t2520 + t2581;
  t582 = -0.15121*t560;
  t598 = t332 + t582;
  t3320 = Sin(var1[3]);
  t3315 = Cos(var1[3]);
  t713 = 0.15121*t560;
  t756 = t332 + t713;
  t3319 = t3315*t690;
  t3322 = -1.*t3320*t1489*t157;
  t3344 = t3319 + t3322;
  t3382 = t690*t3320*t1489;
  t3410 = t3315*t157;
  t3411 = t3382 + t3410;
  t929 = -1.2484e-7*var1[7];
  t1140 = -1.5499600000248e-7*t1104;
  t1181 = 1.124840000016e-6*t1167;
  t1182 = t929 + t1140 + t1181;
  t1300 = 0.281210000008499*t1104;
  t1428 = 0.03874900000062*t1167;
  t1465 = t1300 + t1428;
  t1548 = 4.9936e-13*var1[7];
  t1666 = -0.03874900000062*t1104;
  t1686 = 0.281210000004*t1167;
  t1725 = t1548 + t1666 + t1686;
  t3435 = t257*t3344;
  t3453 = -1.*t3411*t560;
  t3455 = t3435 + t3453;
  t3468 = t257*t3411;
  t3477 = t3344*t560;
  t3481 = t3468 + t3477;
  t2202 = -1.284e-8*var1[8];
  t2275 = -1.5499600000248e-7*t2263;
  t2313 = 2.012840000032e-6*t2300;
  t2355 = t2202 + t2275 + t2313;
  t2589 = 0.503210000016051*t2263;
  t2603 = 0.03874900000062*t2300;
  t2604 = t2589 + t2603;
  t2819 = 5.136e-14*var1[8];
  t2826 = -0.03874900000062*t2263;
  t2838 = 0.503210000008*t2300;
  t2848 = t2819 + t2826 + t2838;
  t2947 = 1.6e-11*t2946;
  t2949 = 1. + t2947;
  t3528 = -4.e-6*t81*t1879*t3320;
  t3535 = t2042*t3455;
  t3547 = 4.e-6*t3481*t1167;
  t3548 = t3528 + t3535 + t3547;
  t3606 = -1.*t81*t1008*t3320;
  t3607 = 4.e-6*t1879*t3455;
  t3608 = t3481*t1167;
  t3614 = t3606 + t3607 + t3608;
  t3551 = t2390*t3481;
  t3556 = t81*t3320*t1167;
  t3574 = -4.e-6*t3455*t1167;
  t3578 = t3551 + t3556 + t3574;
  t3102 = -1.000000000016*t2263;
  t3179 = 1. + t3102;
  t3698 = t690*t3320;
  t3699 = t3315*t1489*t157;
  t3700 = t3698 + t3699;
  t3717 = -1.*t3315*t690*t1489;
  t3720 = t3320*t157;
  t3729 = t3717 + t3720;
  t3736 = t257*t3700;
  t3745 = -1.*t3729*t560;
  t3753 = t3736 + t3745;
  t3756 = t257*t3729;
  t3759 = t3700*t560;
  t3768 = t3756 + t3759;
  t3839 = 4.e-6*t3315*t81*t1879;
  t3846 = t2042*t3753;
  t3850 = 4.e-6*t3768*t1167;
  t3851 = t3839 + t3846 + t3850;
  t3880 = t3315*t81*t1008;
  t3881 = 4.e-6*t1879*t3753;
  t3882 = t3768*t1167;
  t3884 = t3880 + t3881 + t3882;
  t3869 = t2390*t3768;
  t3870 = -1.*t3315*t81*t1167;
  t3873 = -4.e-6*t3753*t1167;
  t3875 = t3869 + t3870 + t3873;
  p_output1[0]=t1226*t1465 + t1489*t1725 + t2175*t2355 + t2587*t2604 + t2814*t2848 - 0.03875*(t2300*t2587 + t2224*t2814 + 4.e-6*t2175*t2946) + 0.14871*(4.e-6*t2300*t2587 + 4.e-6*t2814*t2946 + t2175*t2949) + 0.80321*(-4.e-6*t2175*t2300 - 1.*t2300*t2814 + t2587*t3179) - 1.*t157*t598*t81 + t690*t756*t81 + t1182*t897 + var1[0];
  p_output1[1]=t1182*t3455 + t1465*t3481 + t2355*t3548 + t2604*t3578 + t2848*t3614 - 0.03875*(4.e-6*t2946*t3548 + t2300*t3578 + t2224*t3614) + 0.80321*(-4.e-6*t2300*t3548 + t3179*t3578 - 1.*t2300*t3614) + 0.14871*(t2949*t3548 + 4.e-6*t2300*t3578 + 4.e-6*t2946*t3614) + t3344*t598 + t3411*t756 - 1.*t1725*t3320*t81 + var1[1];
  p_output1[2]=t1182*t3753 + t1465*t3768 + t2355*t3851 + t2604*t3875 + t2848*t3884 - 0.03875*(4.e-6*t2946*t3851 + t2300*t3875 + t2224*t3884) + 0.80321*(-4.e-6*t2300*t3851 + t3179*t3875 - 1.*t2300*t3884) + 0.14871*(t2949*t3851 + 4.e-6*t2300*t3875 + 4.e-6*t2946*t3884) + t3700*t598 + t3729*t756 + t1725*t3315*t81 + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "FlFoot_sphere_center.hh"

namespace SymFunction
{

void FlFoot_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
