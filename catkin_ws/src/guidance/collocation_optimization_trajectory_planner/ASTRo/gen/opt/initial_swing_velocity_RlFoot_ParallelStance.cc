/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:57 GMT+02:00
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
  double t78;
  double t427;
  double t549;
  double t641;
  double t672;
  double t714;
  double t390;
  double t1768;
  double t2073;
  double t2771;
  double t2788;
  double t2970;
  double t3172;
  double t3572;
  double t3770;
  double t4489;
  double t2207;
  double t2475;
  double t3039;
  double t3293;
  double t3486;
  double t3553;
  double t3833;
  double t3947;
  double t3983;
  double t4010;
  double t4138;
  double t4144;
  double t4155;
  double t4174;
  double t4175;
  double t5041;
  double t5097;
  double t5281;
  double t5370;
  double t5049;
  double t5685;
  double t5780;
  double t5802;
  double t5829;
  double t5860;
  double t19981;
  double t20010;
  double t20288;
  double t1723;
  double t1753;
  double t668;
  double t949;
  double t27412;
  double t27442;
  double t27508;
  double t27686;
  double t27690;
  double t27732;
  double t27799;
  double t28058;
  double t28247;
  double t43262;
  double t44809;
  double t44857;
  double t44911;
  double t44918;
  double t44932;
  double t44942;
  double t44972;
  double t45014;
  double t45018;
  double t45126;
  double t45118;
  double t45134;
  double t45140;
  double t45511;
  double t45529;
  double t45538;
  double t45554;
  double t45599;
  double t45616;
  double t4671;
  double t4793;
  double t4934;
  double t45893;
  double t45926;
  double t45982;
  double t45988;
  double t45996;
  double t45750;
  double t46649;
  double t46650;
  double t46653;
  double t46655;
  double t46669;
  double t46671;
  double t46751;
  double t46752;
  double t46756;
  double t46758;
  double t46759;
  double t46761;
  double t46765;
  double t46774;
  double t46778;
  double t46881;
  double t46882;
  double t46883;
  double t46876;
  double t46884;
  double t46885;
  double t46892;
  double t46893;
  double t46896;
  double t46987;
  double t46989;
  double t46990;
  double t47030;
  double t47032;
  double t47033;
  double t47036;
  double t47037;
  double t47038;
  double t47053;
  double t47055;
  double t47060;
  double t47078;
  double t47110;
  double t47126;
  double t47152;
  double t47166;
  double t47193;
  double t47334;
  double t47335;
  double t47336;
  double t47339;
  double t47340;
  double t47221;
  double t47384;
  double t47385;
  double t47386;
  double t47374;
  double t47400;
  double t47406;
  double t47408;
  double t47410;
  double t47411;
  double t47468;
  double t47469;
  t78 = Cos(var1[4]);
  t427 = Cos(var1[9]);
  t549 = -1.*t427;
  t641 = 1. + t549;
  t672 = Sin(var1[9]);
  t714 = 0.15121*t672;
  t390 = Cos(var1[5]);
  t1768 = Sin(var1[5]);
  t2073 = Cos(var1[10]);
  t2771 = -1.*t78*t390*t672;
  t2788 = -1.*t427*t78*t1768;
  t2970 = t2771 + t2788;
  t3172 = Cos(var1[11]);
  t3572 = Sin(var1[10]);
  t3770 = Sin(var1[11]);
  t4489 = 0.15121*t427;
  t2207 = -1.*t2073;
  t2475 = 1. + t2207;
  t3039 = -0.28121*t2475*t2970;
  t3293 = -1.*t3172;
  t3486 = 1. + t3293;
  t3553 = -0.50321*t2073*t3486*t2970;
  t3833 = 0.50321*t3572*t3770*t2970;
  t3947 = -1.*t427*t78*t390;
  t3983 = t78*t672*t1768;
  t4010 = t3947 + t3983;
  t4138 = 0.15121*t4010;
  t4144 = t2073*t3172*t2970;
  t4155 = t3572*t3770*t2970;
  t4174 = t4144 + t4155;
  t4175 = -0.23321*t4174;
  t5041 = Sin(var1[4]);
  t5097 = t427*t78*t390;
  t5281 = -1.*t78*t672*t1768;
  t5370 = t5097 + t5281;
  t5049 = t3572*t5041;
  t5685 = t2073*t5370;
  t5780 = t5049 + t5685;
  t5802 = t2073*t5041;
  t5829 = -1.*t3572*t5370;
  t5860 = t5802 + t5829;
  t19981 = -1.*t3572*t5041;
  t20010 = -1.*t2073*t5370;
  t20288 = t19981 + t20010;
  t1723 = -0.15121*t641;
  t1753 = t1723 + t714;
  t668 = 0.15121*t641;
  t949 = t668 + t714;
  t27412 = -1.*t427*t390*t5041;
  t27442 = t672*t5041*t1768;
  t27508 = t27412 + t27442;
  t27686 = t78*t3572;
  t27690 = t2073*t27508;
  t27732 = t27686 + t27690;
  t27799 = t2073*t78;
  t28058 = -1.*t3572*t27508;
  t28247 = t27799 + t28058;
  t43262 = Sin(var1[3]);
  t44809 = t427*t78*t390*t43262;
  t44857 = -1.*t78*t672*t43262*t1768;
  t44911 = t44809 + t44857;
  t44918 = t3572*t43262*t5041;
  t44932 = t2073*t44911;
  t44942 = t44918 + t44932;
  t44972 = t2073*t43262*t5041;
  t45014 = -1.*t3572*t44911;
  t45018 = t44972 + t45014;
  t45126 = Cos(var1[3]);
  t45118 = -1.*t390*t43262*t5041;
  t45134 = -1.*t45126*t1768;
  t45140 = t45118 + t45134;
  t45511 = t45126*t390;
  t45529 = -1.*t43262*t5041*t1768;
  t45538 = t45511 + t45529;
  t45554 = t672*t45140;
  t45599 = t427*t45538;
  t45616 = t45554 + t45599;
  t4671 = -0.15121*t672;
  t4793 = t4489 + t4671;
  t4934 = t4489 + t714;
  t45893 = t390*t43262*t5041;
  t45926 = t45126*t1768;
  t45982 = t45893 + t45926;
  t45988 = -1.*t672*t45982;
  t45996 = t45988 + t45599;
  t45750 = -1.*t672*t45538;
  t46649 = t45126*t390*t5041;
  t46650 = -1.*t43262*t1768;
  t46653 = t46649 + t46650;
  t46655 = -1.*t390*t43262;
  t46669 = -1.*t45126*t5041*t1768;
  t46671 = t46655 + t46669;
  t46751 = t427*t46653;
  t46752 = t672*t46671;
  t46756 = t46751 + t46752;
  t46758 = -1.*t45126*t78*t3572;
  t46759 = t2073*t46756;
  t46761 = t46758 + t46759;
  t46765 = -1.*t2073*t45126*t78;
  t46774 = -1.*t3572*t46756;
  t46778 = t46765 + t46774;
  t46881 = t427*t45982;
  t46882 = t672*t45538;
  t46883 = t46881 + t46882;
  t46876 = -1.*t78*t3572*t43262;
  t46884 = t2073*t46883;
  t46885 = t46876 + t46884;
  t46892 = -1.*t2073*t78*t43262;
  t46893 = -1.*t3572*t46883;
  t46896 = t46892 + t46893;
  t46987 = t78*t3572*t43262;
  t46989 = -1.*t2073*t46883;
  t46990 = t46987 + t46989;
  t47030 = -1.*t427*t45126*t78*t390;
  t47032 = t45126*t78*t672*t1768;
  t47033 = t47030 + t47032;
  t47036 = -1.*t45126*t3572*t5041;
  t47037 = t2073*t47033;
  t47038 = t47036 + t47037;
  t47053 = -1.*t2073*t45126*t5041;
  t47055 = -1.*t3572*t47033;
  t47060 = t47053 + t47055;
  t47078 = t390*t43262;
  t47110 = t45126*t5041*t1768;
  t47126 = t47078 + t47110;
  t47152 = t672*t46653;
  t47166 = t427*t47126;
  t47193 = t47152 + t47166;
  t47334 = -1.*t45126*t390*t5041;
  t47335 = t43262*t1768;
  t47336 = t47334 + t47335;
  t47339 = -1.*t672*t47336;
  t47340 = t47339 + t47166;
  t47221 = -1.*t672*t47126;
  t47384 = t427*t47336;
  t47385 = t672*t47126;
  t47386 = t47384 + t47385;
  t47374 = t45126*t78*t3572;
  t47400 = t2073*t47386;
  t47406 = t47374 + t47400;
  t47408 = t2073*t45126*t78;
  t47410 = -1.*t3572*t47386;
  t47411 = t47408 + t47410;
  t47468 = -1.*t2073*t47386;
  t47469 = t46758 + t47468;
  p_output1[0]=var2[0] + (-0.28121*t2475*t27508 - 0.50321*t27732*t3486 - 0.50321*t28247*t3770 - 0.23321*(t27732*t3172 - 1.*t28247*t3770) - 1.*t1753*t390*t5041 + 0.15121*(t1768*t427*t5041 + t390*t5041*t672) + 0.28121*t3572*t78 + t1768*t5041*t949)*var2[4] + (t3039 + t3553 + t3833 + t4138 + t4175 - 1.*t1753*t1768*t78 - 1.*t390*t78*t949)*var2[5] + (t3039 + t3553 + t3833 + t4138 + t4175 + t390*t4793*t78 - 1.*t1768*t4934*t78)*var2[9] + (-0.50321*t20288*t3770 + 0.28121*t2073*t5041 - 0.28121*t3572*t5370 - 0.50321*t3486*t5860 - 0.23321*(-1.*t20288*t3770 + t3172*t5860))*var2[10] + (-0.50321*t3770*t5780 - 0.50321*t3172*t5860 - 0.23321*(-1.*t3770*t5780 - 1.*t3172*t5860))*var2[11];
  p_output1[1]=var2[1] + (t1753*t46653 - 0.28121*t2475*t46756 - 0.50321*t3486*t46761 - 0.50321*t3770*t46778 - 0.23321*(t3172*t46761 - 1.*t3770*t46778) + 0.15121*(t427*t46671 - 1.*t46653*t672) - 0.28121*t3572*t45126*t78 + t46671*t949)*var2[3] + (-0.28121*t2475*t44911 - 0.50321*t3486*t44942 - 0.50321*t3770*t45018 - 0.23321*(t3172*t44942 - 1.*t3770*t45018) + 0.28121*t3572*t43262*t5041 + t1753*t390*t43262*t78 + 0.15121*(-1.*t1768*t427*t43262*t78 - 1.*t390*t43262*t672*t78) - 1.*t1768*t43262*t78*t949)*var2[4] + (t1753*t45538 - 0.28121*t2475*t45616 - 0.50321*t2073*t3486*t45616 + 0.50321*t3572*t3770*t45616 - 0.23321*(t2073*t3172*t45616 + t3572*t3770*t45616) + 0.15121*(t427*t45140 + t45750) + t45140*t949)*var2[5] + (0.15121*(t45750 - 1.*t427*t45982) - 0.28121*t2475*t45996 - 0.50321*t2073*t3486*t45996 + 0.50321*t3572*t3770*t45996 - 0.23321*(t2073*t3172*t45996 + t3572*t3770*t45996) + t45982*t4793 + t45538*t4934)*var2[9] + (-0.28121*t3572*t46883 - 0.50321*t3486*t46896 - 0.50321*t3770*t46990 - 0.23321*(t3172*t46896 - 1.*t3770*t46990) - 0.28121*t2073*t43262*t78)*var2[10] + (-0.50321*t3770*t46885 - 0.50321*t3172*t46896 - 0.23321*(-1.*t3770*t46885 - 1.*t3172*t46896))*var2[11];
  p_output1[2]=var2[2] + (t1753*t45982 + 0.15121*t45996 - 0.28121*t2475*t46883 - 0.50321*t3486*t46885 - 0.50321*t3770*t46896 - 0.23321*(t3172*t46885 - 1.*t3770*t46896) - 0.28121*t3572*t43262*t78 + t45538*t949)*var2[3] + (-0.28121*t2475*t47033 - 0.50321*t3486*t47038 - 0.50321*t3770*t47060 - 0.23321*(t3172*t47038 - 1.*t3770*t47060) - 0.28121*t3572*t45126*t5041 - 1.*t1753*t390*t45126*t78 + 0.15121*(t1768*t427*t45126*t78 + t390*t45126*t672*t78) + t1768*t45126*t78*t949)*var2[4] + (t1753*t47126 - 0.28121*t2475*t47193 - 0.50321*t2073*t3486*t47193 + 0.50321*t3572*t3770*t47193 - 0.23321*(t2073*t3172*t47193 + t3572*t3770*t47193) + 0.15121*(t46751 + t47221) + t46653*t949)*var2[5] + (0.15121*(t47221 - 1.*t427*t47336) - 0.28121*t2475*t47340 - 0.50321*t2073*t3486*t47340 + 0.50321*t3572*t3770*t47340 - 0.23321*(t2073*t3172*t47340 + t3572*t3770*t47340) + t47336*t4793 + t47126*t4934)*var2[9] + (-0.28121*t3572*t47386 - 0.50321*t3486*t47411 - 0.50321*t3770*t47469 - 0.23321*(t3172*t47411 - 1.*t3770*t47469) + 0.28121*t2073*t45126*t78)*var2[10] + (-0.50321*t3770*t47406 - 0.50321*t3172*t47411 - 0.23321*(-1.*t3770*t47406 - 1.*t3172*t47411))*var2[11];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
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

#include "initial_swing_velocity_RlFoot_ParallelStance.hh"

namespace ParallelStance
{

void initial_swing_velocity_RlFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
