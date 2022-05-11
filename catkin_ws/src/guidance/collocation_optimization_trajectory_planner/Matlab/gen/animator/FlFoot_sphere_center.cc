/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:52:13 GMT+01:00
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
  double t38;
  double t43;
  double t49;
  double t51;
  double t73;
  double t89;
  double t41;
  double t241;
  double t525;
  double t547;
  double t558;
  double t589;
  double t735;
  double t770;
  double t318;
  double t375;
  double t392;
  double t648;
  double t663;
  double t671;
  double t787;
  double t805;
  double t819;
  double t829;
  double t772;
  double t774;
  double t776;
  double t780;
  double t783;
  double t785;
  double t956;
  double t923;
  double t924;
  double t938;
  double t946;
  double t840;
  double t841;
  double t843;
  double t844;
  double t851;
  double t857;
  double t93;
  double t162;
  double t1020;
  double t1017;
  double t258;
  double t268;
  double t1018;
  double t1024;
  double t1029;
  double t1036;
  double t1039;
  double t1041;
  double t514;
  double t577;
  double t599;
  double t641;
  double t682;
  double t691;
  double t698;
  double t741;
  double t745;
  double t746;
  double t759;
  double t1044;
  double t1048;
  double t1049;
  double t1053;
  double t1055;
  double t1056;
  double t786;
  double t823;
  double t830;
  double t834;
  double t876;
  double t884;
  double t891;
  double t947;
  double t948;
  double t951;
  double t953;
  double t958;
  double t960;
  double t1063;
  double t1064;
  double t1065;
  double t1066;
  double t1074;
  double t1075;
  double t1076;
  double t1077;
  double t1069;
  double t1070;
  double t1071;
  double t1072;
  double t1008;
  double t1010;
  double t1101;
  double t1102;
  double t1103;
  double t1105;
  double t1106;
  double t1107;
  double t1109;
  double t1110;
  double t1122;
  double t1124;
  double t1125;
  double t1126;
  double t1129;
  double t1130;
  double t1131;
  double t1132;
  double t1140;
  double t1146;
  double t1147;
  double t1148;
  double t1134;
  double t1136;
  double t1137;
  double t1138;
  t38 = Cos(var1[4]);
  t43 = Cos(var1[6]);
  t49 = -1.*t43;
  t51 = 1. + t49;
  t73 = 0.15121*t51;
  t89 = Sin(var1[6]);
  t41 = Sin(var1[5]);
  t241 = Cos(var1[5]);
  t525 = Cos(var1[7]);
  t547 = -1.*t525;
  t558 = 1. + t547;
  t589 = Sin(var1[7]);
  t735 = Sin(var1[4]);
  t770 = -1. + t525;
  t318 = -1.*t38*t43*t41;
  t375 = -1.*t38*t241*t89;
  t392 = t318 + t375;
  t648 = t38*t241*t43;
  t663 = -1.*t38*t41*t89;
  t671 = t648 + t663;
  t787 = Cos(var1[8]);
  t805 = -1.*t787;
  t819 = 1. + t805;
  t829 = Sin(var1[8]);
  t772 = 4.e-6*t770*t735;
  t774 = 1.6e-11*t770;
  t776 = 1. + t774;
  t780 = t776*t392;
  t783 = 4.e-6*t671*t589;
  t785 = t772 + t780 + t783;
  t956 = -1. + t787;
  t923 = t525*t735;
  t924 = 4.e-6*t770*t392;
  t938 = t671*t589;
  t946 = t923 + t924 + t938;
  t840 = -1.000000000016*t558;
  t841 = 1. + t840;
  t843 = t841*t671;
  t844 = -1.*t735*t589;
  t851 = -4.e-6*t392*t589;
  t857 = t843 + t844 + t851;
  t93 = -0.15121*t89;
  t162 = t73 + t93;
  t1020 = Sin(var1[3]);
  t1017 = Cos(var1[3]);
  t258 = 0.15121*t89;
  t268 = t73 + t258;
  t1018 = t1017*t241;
  t1024 = -1.*t1020*t735*t41;
  t1029 = t1018 + t1024;
  t1036 = t241*t1020*t735;
  t1039 = t1017*t41;
  t1041 = t1036 + t1039;
  t514 = -1.2484e-7*var1[7];
  t577 = -1.5499600000248e-7*t558;
  t599 = 1.124840000016e-6*t589;
  t641 = t514 + t577 + t599;
  t682 = 0.281210000008499*t558;
  t691 = 0.03874900000062*t589;
  t698 = t682 + t691;
  t741 = 4.9936e-13*var1[7];
  t745 = -0.03874900000062*t558;
  t746 = 0.281210000004*t589;
  t759 = t741 + t745 + t746;
  t1044 = t43*t1029;
  t1048 = -1.*t1041*t89;
  t1049 = t1044 + t1048;
  t1053 = t43*t1041;
  t1055 = t1029*t89;
  t1056 = t1053 + t1055;
  t786 = -1.284e-8*var1[8];
  t823 = -1.5499600000248e-7*t819;
  t830 = 2.012840000032e-6*t829;
  t834 = t786 + t823 + t830;
  t876 = 0.503210000016051*t819;
  t884 = 0.03874900000062*t829;
  t891 = t876 + t884;
  t947 = 5.136e-14*var1[8];
  t948 = -0.03874900000062*t819;
  t951 = 0.503210000008*t829;
  t953 = t947 + t948 + t951;
  t958 = 1.6e-11*t956;
  t960 = 1. + t958;
  t1063 = -4.e-6*t38*t770*t1020;
  t1064 = t776*t1049;
  t1065 = 4.e-6*t1056*t589;
  t1066 = t1063 + t1064 + t1065;
  t1074 = -1.*t38*t525*t1020;
  t1075 = 4.e-6*t770*t1049;
  t1076 = t1056*t589;
  t1077 = t1074 + t1075 + t1076;
  t1069 = t841*t1056;
  t1070 = t38*t1020*t589;
  t1071 = -4.e-6*t1049*t589;
  t1072 = t1069 + t1070 + t1071;
  t1008 = -1.000000000016*t819;
  t1010 = 1. + t1008;
  t1101 = t241*t1020;
  t1102 = t1017*t735*t41;
  t1103 = t1101 + t1102;
  t1105 = -1.*t1017*t241*t735;
  t1106 = t1020*t41;
  t1107 = t1105 + t1106;
  t1109 = t43*t1103;
  t1110 = -1.*t1107*t89;
  t1122 = t1109 + t1110;
  t1124 = t43*t1107;
  t1125 = t1103*t89;
  t1126 = t1124 + t1125;
  t1129 = 4.e-6*t1017*t38*t770;
  t1130 = t776*t1122;
  t1131 = 4.e-6*t1126*t589;
  t1132 = t1129 + t1130 + t1131;
  t1140 = t1017*t38*t525;
  t1146 = 4.e-6*t770*t1122;
  t1147 = t1126*t589;
  t1148 = t1140 + t1146 + t1147;
  t1134 = t841*t1126;
  t1136 = -1.*t1017*t38*t589;
  t1137 = -4.e-6*t1122*t589;
  t1138 = t1134 + t1136 + t1137;
  p_output1[0]=t241*t268*t38 - 1.*t162*t38*t41 + t392*t641 + t671*t698 + t735*t759 + t785*t834 + t857*t891 + 0.80321*(-4.e-6*t785*t829 + t1010*t857 - 1.*t829*t946) + t946*t953 - 0.03875*(t829*t857 + t787*t946 + 4.e-6*t785*t956) + 0.14871*(4.e-6*t829*t857 + 4.e-6*t946*t956 + t785*t960) + var1[0];
  p_output1[1]=t1029*t162 + t1041*t268 + t1049*t641 + t1056*t698 - 1.*t1020*t38*t759 + 0.80321*(t1010*t1072 - 4.e-6*t1066*t829 - 1.*t1077*t829) + t1066*t834 + t1072*t891 + t1077*t953 - 0.03875*(t1077*t787 + t1072*t829 + 4.e-6*t1066*t956) + 0.14871*(4.e-6*t1072*t829 + 4.e-6*t1077*t956 + t1066*t960) + var1[1];
  p_output1[2]=t1103*t162 + t1107*t268 + t1122*t641 + t1126*t698 + t1017*t38*t759 + 0.80321*(t1010*t1138 - 4.e-6*t1132*t829 - 1.*t1148*t829) + t1132*t834 + t1138*t891 + t1148*t953 - 0.03875*(t1148*t787 + t1138*t829 + 4.e-6*t1132*t956) + 0.14871*(4.e-6*t1138*t829 + 4.e-6*t1148*t956 + t1132*t960) + var1[2];
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
