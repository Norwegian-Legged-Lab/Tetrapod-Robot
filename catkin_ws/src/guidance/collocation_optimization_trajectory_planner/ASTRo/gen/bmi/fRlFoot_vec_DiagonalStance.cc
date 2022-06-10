/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:26 GMT+02:00
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
  double t328;
  double t479;
  double t401;
  double t537;
  double t550;
  double t522;
  double t556;
  double t425;
  double t581;
  double t621;
  double t623;
  double t483;
  double t565;
  double t715;
  double t725;
  double t730;
  double t473;
  double t486;
  double t516;
  double t752;
  double t745;
  double t542;
  double t560;
  double t561;
  double t624;
  double t626;
  double t633;
  double t731;
  double t733;
  double t734;
  double t756;
  double t762;
  double t766;
  double t778;
  double t783;
  double t785;
  double t795;
  double t796;
  double t799;
  double t823;
  double t825;
  double t826;
  double t832;
  double t839;
  double t872;
  double t572;
  double t637;
  double t640;
  double t1043;
  double t1048;
  double t1066;
  double t1068;
  double t1073;
  double t1076;
  double t1081;
  double t1085;
  double t1087;
  double t1089;
  double t1091;
  double t1098;
  double t1100;
  double t1114;
  double t1125;
  double t1128;
  double t1050;
  double t1056;
  double t1065;
  double t1104;
  double t1105;
  double t1136;
  double t1137;
  double t1140;
  double t1142;
  double t1148;
  double t1155;
  double t1157;
  double t1108;
  double t1131;
  double t1132;
  double t1147;
  double t1158;
  double t1161;
  double t1166;
  double t1167;
  double t1170;
  double t695;
  double t735;
  double t736;
  double t1135;
  double t1182;
  double t1212;
  double t1223;
  double t1243;
  double t1261;
  double t1410;
  double t1454;
  t328 = Cos(var1[4]);
  t479 = Cos(var1[9]);
  t401 = Cos(var1[5]);
  t537 = Cos(var1[11]);
  t550 = Sin(var1[10]);
  t522 = Cos(var1[10]);
  t556 = Sin(var1[11]);
  t425 = Sin(var1[9]);
  t581 = -1.*t537*t550;
  t621 = t522*t556;
  t623 = t581 + t621;
  t483 = Sin(var1[5]);
  t565 = Sin(var1[4]);
  t715 = -1.*t522*t537;
  t725 = -1.*t550*t556;
  t730 = t715 + t725;
  t473 = t401*t425;
  t486 = t479*t483;
  t516 = t473 + t486;
  t752 = Cos(var1[3]);
  t745 = Sin(var1[3]);
  t542 = t522*t537;
  t560 = t550*t556;
  t561 = t542 + t560;
  t624 = t479*t401*t623;
  t626 = -1.*t425*t623*t483;
  t633 = t624 + t626;
  t731 = t479*t401*t730;
  t733 = -1.*t425*t730*t483;
  t734 = t731 + t733;
  t756 = -1.*t479*t401;
  t762 = t425*t483;
  t766 = t756 + t762;
  t778 = t401*t425*t623;
  t783 = t479*t623*t483;
  t785 = t778 + t783;
  t795 = t328*t561;
  t796 = -1.*t565*t633;
  t799 = t795 + t796;
  t823 = t401*t425*t730;
  t825 = t479*t730*t483;
  t826 = t823 + t825;
  t832 = t328*t623;
  t839 = -1.*t565*t734;
  t872 = t832 + t839;
  t572 = t561*t565;
  t637 = t328*t633;
  t640 = t572 + t637;
  t1043 = -1.*t479;
  t1048 = 1. + t1043;
  t1066 = -1.*t522;
  t1068 = 1. + t1066;
  t1073 = -0.28121*t1068;
  t1076 = -1.*t537;
  t1081 = 1. + t1076;
  t1085 = -0.50321*t1081;
  t1087 = -0.19821*t537;
  t1089 = t1085 + t1087;
  t1091 = t522*t1089;
  t1098 = 0.305*t550*t556;
  t1100 = t1073 + t1091 + t1098;
  t1114 = -0.15121*t1048;
  t1125 = t479*t1100;
  t1128 = t1114 + t1125;
  t1050 = 0.15121*t1048;
  t1056 = 0.15121*t479;
  t1065 = 0.15121*t425;
  t1104 = t425*t1100;
  t1105 = t1050 + t1056 + t1065 + t1104;
  t1136 = 0.28121*t550;
  t1137 = t1089*t550;
  t1140 = -0.305*t522*t556;
  t1142 = t1136 + t1137 + t1140;
  t1148 = t401*t1128;
  t1155 = -1.*t1105*t483;
  t1157 = t1148 + t1155;
  t1108 = t401*t1105;
  t1131 = t1128*t483;
  t1132 = t1108 + t1131;
  t1147 = t1142*t565;
  t1158 = t328*t1157;
  t1161 = t1147 + t1158;
  t1166 = t328*t1142;
  t1167 = -1.*t565*t1157;
  t1170 = t1166 + t1167;
  t695 = t623*t565;
  t735 = t328*t734;
  t736 = t695 + t735;
  t1135 = -1.*t766*t1132;
  t1182 = t785*t1132;
  t1212 = t766*t1132;
  t1223 = -1.*t826*t1132;
  t1243 = -1.*t785*t1132;
  t1261 = t826*t1132;
  t1410 = -1.*t1142*t561;
  t1454 = t1142*t623;
  p_output1[0]=t736*var2[0] + t328*t516*var2[1] + t640*var2[2];
  p_output1[1]=(t752*t826 - 1.*t745*t872)*var2[0] + (t516*t565*t745 + t752*t766)*var2[1] + (t752*t785 - 1.*t745*t799)*var2[2];
  p_output1[2]=(t745*t826 + t752*t872)*var2[0] + (-1.*t516*t565*t752 + t745*t766)*var2[1] + (t745*t785 + t752*t799)*var2[2];
  p_output1[3]=((t1135 - 1.*t1161*t328*t516 + t1170*t516*t565)*t640 + t328*t516*(t1182 + t1161*t640 + t1170*t799))*var2[0] + (t736*(t1243 - 1.*t1161*t640 - 1.*t1170*t799) + t640*(t1261 + t1161*t736 + t1170*t872))*var2[1] + ((t1212 + t1161*t328*t516 - 1.*t1170*t516*t565)*t736 + t328*t516*(t1223 - 1.*t1161*t736 - 1.*t1170*t872))*var2[2];
  p_output1[4]=((t1182 + t1142*t561 + t1157*t633)*t766 + (t1135 - 1.*t1157*t516)*t785)*var2[0] + ((t1261 + t1454 + t1157*t734)*t785 + (t1243 + t1410 - 1.*t1157*t633)*t826)*var2[1] + ((t1223 - 1.*t1142*t623 - 1.*t1157*t734)*t766 + (t1212 + t1157*t516)*t826)*var2[2];
  p_output1[5]=(-1.*t1128*t425 + t1105*t479)*t561*var2[0] + (t623*(t1410 - 1.*t1105*t425*t623 - 1.*t1128*t479*t623) + t561*(t1454 + t1105*t425*t730 + t1128*t479*t730))*var2[1] + (t1128*t425 - 1.*t1105*t479)*t623*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t561 + 0.15121*t730)*var2[0] + (-0.15121 + t623*(t1410 - 1.*t1100*t623) + t561*(t1454 + t1100*t730))*var2[1];
  p_output1[10]=(0.28121*t556 + t1089*t556 - 0.305*t537*t556)*var2[0] + (0.28121*t537 + t1089*t537 + 0.305*Power(t556,2))*var2[2];
  p_output1[11]=-0.305*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRlFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
