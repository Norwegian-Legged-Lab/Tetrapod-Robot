/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:16:53 GMT+01:00
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
  double t513;
  double t532;
  double t566;
  double t725;
  double t1077;
  double t858;
  double t930;
  double t1141;
  double t36;
  double t343;
  double t402;
  double t567;
  double t995;
  double t1157;
  double t1160;
  double t1237;
  double t1258;
  double t1297;
  double t1473;
  double t610;
  double t706;
  double t712;
  double t1182;
  double t1523;
  double t1607;
  double t1612;
  double t1628;
  double t1815;
  double t1817;
  double t1865;
  double t1866;
  double t1889;
  double t1896;
  double t1905;
  double t1936;
  double t1945;
  double t1947;
  double t1967;
  double t2020;
  double t2023;
  double t2036;
  double t2038;
  double t2042;
  double t2054;
  double t2162;
  double t436;
  double t494;
  double t2992;
  double t3007;
  double t3037;
  double t3057;
  double t3060;
  double t3015;
  double t3021;
  double t3026;
  double t3029;
  double t3069;
  double t3070;
  double t3107;
  double t3111;
  double t3120;
  double t2237;
  double t2255;
  double t2999;
  double t3072;
  double t3123;
  double t3161;
  double t2368;
  double t2384;
  double t3260;
  double t3315;
  double t3345;
  double t3350;
  double t3449;
  double t3557;
  double t3635;
  double t3638;
  double t2483;
  double t3750;
  double t3765;
  double t3773;
  double t3704;
  double t3737;
  double t3741;
  double t3748;
  double t3780;
  double t3783;
  double t3796;
  double t3859;
  double t3861;
  double t3696;
  double t3784;
  double t3868;
  double t3877;
  double t3882;
  double t3883;
  double t3895;
  double t3911;
  double t3914;
  double t3916;
  double t3919;
  double t3920;
  t513 = Cos(var1[7]);
  t532 = -1.*t513;
  t566 = 1. + t532;
  t725 = Cos(var1[4]);
  t1077 = Cos(var1[5]);
  t858 = Cos(var1[6]);
  t930 = Sin(var1[5]);
  t1141 = Sin(var1[6]);
  t36 = Cos(var1[8]);
  t343 = -1.*t36;
  t402 = 1. + t343;
  t567 = Sin(var1[4]);
  t995 = -1.*t725*t858*t930;
  t1157 = -1.*t725*t1077*t1141;
  t1160 = t995 + t1157;
  t1237 = t725*t1077*t858;
  t1258 = -1.*t725*t930*t1141;
  t1297 = t1237 + t1258;
  t1473 = Sin(var1[7]);
  t610 = -4.e-6*t566*t567;
  t706 = -1.6e-11*t566;
  t712 = 1. + t706;
  t1182 = t712*t1160;
  t1523 = 4.e-6*t1473;
  t1607 = 0. + t1523;
  t1612 = t1297*t1607;
  t1628 = t610 + t1182 + t1612;
  t1815 = -1.*t566;
  t1817 = 1. + t1815;
  t1865 = t1817*t567;
  t1866 = -4.e-6*t566*t1160;
  t1889 = 0. + t1473;
  t1896 = t1297*t1889;
  t1905 = t1865 + t1866 + t1896;
  t1936 = -1.000000000016*t566;
  t1945 = 1. + t1936;
  t1947 = t1945*t1297;
  t1967 = -1.*t1473;
  t2020 = 0. + t1967;
  t2023 = t567*t2020;
  t2036 = -4.e-6*t1473;
  t2038 = 0. + t2036;
  t2042 = t1160*t2038;
  t2054 = t1947 + t2023 + t2042;
  t2162 = Sin(var1[8]);
  t436 = -1.6e-11*t402;
  t494 = 1. + t436;
  t2992 = Sin(var1[3]);
  t3007 = Cos(var1[3]);
  t3037 = t1077*t2992*t567;
  t3057 = t3007*t930;
  t3060 = t3037 + t3057;
  t3015 = t3007*t1077;
  t3021 = -1.*t2992*t567*t930;
  t3026 = t3015 + t3021;
  t3029 = t858*t3026;
  t3069 = -1.*t3060*t1141;
  t3070 = t3029 + t3069;
  t3107 = t858*t3060;
  t3111 = t3026*t1141;
  t3120 = t3107 + t3111;
  t2237 = 4.e-6*t2162;
  t2255 = 0. + t2237;
  t2999 = 4.e-6*t725*t566*t2992;
  t3072 = t712*t3070;
  t3123 = t3120*t1607;
  t3161 = t2999 + t3072 + t3123;
  t2368 = -1.*t402;
  t2384 = 1. + t2368;
  t3260 = -1.*t725*t1817*t2992;
  t3315 = -4.e-6*t566*t3070;
  t3345 = t3120*t1889;
  t3350 = t3260 + t3315 + t3345;
  t3449 = t1945*t3120;
  t3557 = -1.*t725*t2992*t2020;
  t3635 = t3070*t2038;
  t3638 = t3449 + t3557 + t3635;
  t2483 = 0. + t2162;
  t3750 = -1.*t3007*t1077*t567;
  t3765 = t2992*t930;
  t3773 = t3750 + t3765;
  t3704 = t1077*t2992;
  t3737 = t3007*t567*t930;
  t3741 = t3704 + t3737;
  t3748 = t858*t3741;
  t3780 = -1.*t3773*t1141;
  t3783 = t3748 + t3780;
  t3796 = t858*t3773;
  t3859 = t3741*t1141;
  t3861 = t3796 + t3859;
  t3696 = -4.e-6*t3007*t725*t566;
  t3784 = t712*t3783;
  t3868 = t3861*t1607;
  t3877 = t3696 + t3784 + t3868;
  t3882 = t3007*t725*t1817;
  t3883 = -4.e-6*t566*t3783;
  t3895 = t3861*t1889;
  t3911 = t3882 + t3883 + t3895;
  t3914 = t1945*t3861;
  t3916 = t3007*t725*t2020;
  t3919 = t3783*t2038;
  t3920 = t3914 + t3916 + t3919;
  p_output1[0]=t2054*t2255 - 4.e-6*t1905*t402 - 4.e-6*(t1905*t2384 + t2054*t2483 - 4.e-6*t1628*t402) + t1628*t494;
  p_output1[1]=t2255*t3638 - 4.e-6*t3350*t402 - 4.e-6*(t2384*t3350 + t2483*t3638 - 4.e-6*t3161*t402) + t3161*t494;
  p_output1[2]=t2255*t3920 - 4.e-6*t3911*t402 - 4.e-6*(t2384*t3911 + t2483*t3920 - 4.e-6*t3877*t402) + t3877*t494;
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

#include "Joint_fl_knee_pitch_axis.hh"

namespace SymFunction
{

void Joint_fl_knee_pitch_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
