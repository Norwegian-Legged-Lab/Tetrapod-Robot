/*
 * Automatically Generated from Mathematica.
 * Thu 26 May 2022 14:48:54 GMT+02:00
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
  double t15673;
  double t16801;
  double t17067;
  double t17089;
  double t17093;
  double t17095;
  double t16658;
  double t17730;
  double t17251;
  double t17638;
  double t17836;
  double t17944;
  double t17998;
  double t18069;
  double t18077;
  double t18099;
  double t18155;
  double t18223;
  double t18307;
  double t18325;
  double t18342;
  double t18376;
  double t18468;
  double t18475;
  double t18489;
  double t18557;
  double t18574;
  double t18934;
  double t18965;
  double t19038;
  double t19099;
  double t19163;
  double t19192;
  double t19246;
  double t19252;
  double t19258;
  double t19284;
  double t19300;
  double t19310;
  double t19320;
  double t17092;
  double t17099;
  double t19386;
  double t17693;
  double t17711;
  double t19416;
  double t19406;
  double t19426;
  double t19432;
  double t19439;
  double t19440;
  double t19449;
  double t17855;
  double t17873;
  double t18084;
  double t18092;
  double t19516;
  double t19526;
  double t19531;
  double t19563;
  double t19570;
  double t19579;
  double t19643;
  double t19653;
  double t19662;
  double t18590;
  double t18709;
  double t18805;
  double t18809;
  double t18948;
  double t18956;
  double t19202;
  double t19204;
  double t19762;
  double t19763;
  double t19764;
  double t19775;
  double t19779;
  double t19780;
  double t19782;
  double t19786;
  double t19788;
  t15673 = Cos(var1[4]);
  t16801 = Cos(var1[12]);
  t17067 = -1.*t16801;
  t17089 = 1. + t17067;
  t17093 = Sin(var1[12]);
  t17095 = -0.15121*t17093;
  t16658 = Cos(var1[5]);
  t17730 = Sin(var1[5]);
  t17251 = Sin(var1[13]);
  t17638 = Sin(var1[4]);
  t17836 = Cos(var1[13]);
  t17944 = t16801*t15673*t16658;
  t17998 = -1.*t15673*t17093*t17730;
  t18069 = t17944 + t17998;
  t18077 = Cos(var1[14]);
  t18099 = -1.*t17251*t17638;
  t18155 = t17836*t18069;
  t18223 = t18099 + t18155;
  t18307 = Sin(var1[14]);
  t18325 = t17836*t17638;
  t18342 = t17251*t18069;
  t18376 = t18325 + t18342;
  t18468 = Cos(var1[6]);
  t18475 = -1.*t18468;
  t18489 = 1. + t18475;
  t18557 = 0.15121*t18489;
  t18574 = Sin(var1[6]);
  t18934 = Cos(var1[7]);
  t18965 = t15673*t16658*t18468;
  t19038 = -1.*t15673*t17730*t18574;
  t19099 = t18965 + t19038;
  t19163 = Sin(var1[7]);
  t19192 = Cos(var1[8]);
  t19246 = t18934*t19099;
  t19252 = -1.*t17638*t19163;
  t19258 = t19246 + t19252;
  t19284 = t18934*t17638;
  t19300 = t19099*t19163;
  t19310 = t19284 + t19300;
  t19320 = Sin(var1[8]);
  t17092 = 0.15121*t17089;
  t17099 = t17092 + t17095;
  t19386 = Sin(var1[3]);
  t17693 = -0.15121*t17089;
  t17711 = t17693 + t17095;
  t19416 = Cos(var1[3]);
  t19406 = t16658*t19386*t17638;
  t19426 = t19416*t17730;
  t19432 = t19406 + t19426;
  t19439 = t19416*t16658;
  t19440 = -1.*t19386*t17638*t17730;
  t19449 = t19439 + t19440;
  t17855 = -1.*t17836;
  t17873 = 1. + t17855;
  t18084 = -1.*t18077;
  t18092 = 1. + t18084;
  t19516 = t16801*t19432;
  t19526 = t17093*t19449;
  t19531 = t19516 + t19526;
  t19563 = t15673*t17251*t19386;
  t19570 = t17836*t19531;
  t19579 = t19563 + t19570;
  t19643 = -1.*t17836*t15673*t19386;
  t19653 = t17251*t19531;
  t19662 = t19643 + t19653;
  t18590 = -0.15121*t18574;
  t18709 = t18557 + t18590;
  t18805 = 0.15121*t18574;
  t18809 = t18557 + t18805;
  t18948 = -1.*t18934;
  t18956 = 1. + t18948;
  t19202 = -1.*t19192;
  t19204 = 1. + t19202;
  t19762 = t18468*t19432;
  t19763 = t19449*t18574;
  t19764 = t19762 + t19763;
  t19775 = t18934*t19764;
  t19779 = t15673*t19386*t19163;
  t19780 = t19775 + t19779;
  t19782 = -1.*t15673*t18934*t19386;
  t19786 = t19764*t19163;
  t19788 = t19782 + t19786;
  p_output1[0]=-1.*t15673*t16658*t17099 - 0.28121*t17251*t17638 + t15673*t17711*t17730 + 0.15121*(-1.*t15673*t16658*t17093 - 1.*t15673*t16801*t17730) - 0.28121*t17873*t18069 - 0.50321*t18092*t18223 + 0.50321*t18307*t18376 - 0.19821*(t18077*t18223 + t18307*t18376) + 0.15121*(-1.*t15673*t17730*t18468 - 1.*t15673*t16658*t18574) - 1.*t15673*t17730*t18709 + t15673*t16658*t18809 + 0.28121*t18956*t19099 + 0.28121*t17638*t19163 + 0.50321*t19204*t19258 - 0.50321*t19310*t19320 + 0.19821*(t19192*t19258 + t19310*t19320);
  p_output1[1]=0.28121*t15673*t17251*t19386 - 0.28121*t15673*t19163*t19386 - 1.*t17099*t19432 + t18809*t19432 - 1.*t17711*t19449 + t18709*t19449 + 0.15121*(-1.*t17093*t19432 + t16801*t19449) + 0.15121*(-1.*t18574*t19432 + t18468*t19449) - 0.28121*t17873*t19531 - 0.50321*t18092*t19579 + 0.50321*t18307*t19662 - 0.19821*(t18077*t19579 + t18307*t19662) + 0.28121*t18956*t19764 + 0.50321*t19204*t19780 - 0.50321*t19320*t19788 + 0.19821*(t19192*t19780 + t19320*t19788);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "step_distance_front_ParallelStance.hh"

namespace ParallelStance
{

void step_distance_front_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
