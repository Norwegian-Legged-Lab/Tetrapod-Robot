/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:22 GMT+01:00
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
  double t155;
  double t182;
  double t243;
  double t407;
  double t432;
  double t465;
  double t169;
  double t488;
  double t545;
  double t558;
  double t565;
  double t578;
  double t665;
  double t666;
  double t675;
  double t718;
  double t520;
  double t521;
  double t530;
  double t770;
  double t466;
  double t475;
  double t841;
  double t830;
  double t493;
  double t513;
  double t836;
  double t850;
  double t851;
  double t856;
  double t859;
  double t861;
  double t533;
  double t570;
  double t591;
  double t592;
  double t676;
  double t681;
  double t692;
  double t724;
  double t726;
  double t730;
  double t732;
  double t746;
  double t747;
  double t884;
  double t887;
  double t889;
  double t867;
  double t868;
  double t872;
  double t775;
  double t782;
  double t1064;
  double t1065;
  double t1072;
  double t1081;
  double t1085;
  double t1090;
  double t1114;
  double t1115;
  double t1120;
  double t1095;
  double t1101;
  double t1105;
  t155 = Cos(var1[4]);
  t182 = Cos(var1[6]);
  t243 = -1.*t182;
  t407 = 1. + t243;
  t432 = 0.15121*t407;
  t465 = Sin(var1[6]);
  t169 = Sin(var1[5]);
  t488 = Cos(var1[5]);
  t545 = Cos(var1[7]);
  t558 = -1.*t545;
  t565 = 1. + t558;
  t578 = Sin(var1[7]);
  t665 = t155*t488*t182;
  t666 = -1.*t155*t169*t465;
  t675 = t665 + t666;
  t718 = Sin(var1[4]);
  t520 = -1.*t155*t182*t169;
  t521 = -1.*t155*t488*t465;
  t530 = t520 + t521;
  t770 = -1. + t545;
  t466 = -0.15121*t465;
  t475 = t432 + t466;
  t841 = Sin(var1[3]);
  t830 = Cos(var1[3]);
  t493 = 0.15121*t465;
  t513 = t432 + t493;
  t836 = t830*t488;
  t850 = -1.*t841*t718*t169;
  t851 = t836 + t850;
  t856 = t488*t841*t718;
  t859 = t830*t169;
  t861 = t856 + t859;
  t533 = -1.2484e-7*var1[7];
  t570 = -1.5499600000248e-7*t565;
  t591 = 1.124840000016e-6*t578;
  t592 = t533 + t570 + t591;
  t676 = 0.281210000008499*t565;
  t681 = 0.03874900000062*t578;
  t692 = t676 + t681;
  t724 = 4.9936e-13*var1[7];
  t726 = -0.03874900000062*t565;
  t730 = 0.281210000004*t578;
  t732 = t724 + t726 + t730;
  t746 = -1.000000000016*t565;
  t747 = 1. + t746;
  t884 = t182*t861;
  t887 = t851*t465;
  t889 = t884 + t887;
  t867 = t182*t851;
  t868 = -1.*t861*t465;
  t872 = t867 + t868;
  t775 = 1.6e-11*t770;
  t782 = 1. + t775;
  t1064 = t488*t841;
  t1065 = t830*t718*t169;
  t1072 = t1064 + t1065;
  t1081 = -1.*t830*t488*t718;
  t1085 = t841*t169;
  t1090 = t1081 + t1085;
  t1114 = t182*t1090;
  t1115 = t1072*t465;
  t1120 = t1114 + t1115;
  t1095 = t182*t1072;
  t1101 = -1.*t1090*t465;
  t1105 = t1095 + t1101;
  p_output1[0]=-1.*t155*t169*t475 + t155*t488*t513 + t530*t592 + t675*t692 + t718*t732 + 0.28121*(-4.e-6*t530*t578 - 1.*t578*t718 + t675*t747) - 0.03875*(t578*t675 + t545*t718 + 4.e-6*t530*t770) + 0.22671*(4.e-6*t578*t675 + 4.e-6*t718*t770 + t530*t782) + var1[0];
  p_output1[1]=-1.*t155*t732*t841 + t475*t851 + t513*t861 + t592*t872 + t692*t889 + 0.22671*(-4.e-6*t155*t770*t841 + t782*t872 + 4.e-6*t578*t889) - 0.03875*(-1.*t155*t545*t841 + 4.e-6*t770*t872 + t578*t889) + 0.28121*(t155*t578*t841 - 4.e-6*t578*t872 + t747*t889) + var1[1];
  p_output1[2]=t1072*t475 + t1090*t513 + t1105*t592 + t1120*t692 + t155*t732*t830 - 0.03875*(t1120*t578 + 4.e-6*t1105*t770 + t155*t545*t830) + 0.28121*(-4.e-6*t1105*t578 + t1120*t747 - 1.*t155*t578*t830) + 0.22671*(4.e-6*t1120*t578 + t1105*t782 + 4.e-6*t155*t770*t830) + var1[2];
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

#include "Joint_fl_hip_pitch_sphere_center.hh"

namespace SymFunction
{

void Joint_fl_hip_pitch_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
