/*
 * Automatically Generated from Mathematica.
 * Mon 30 May 2022 12:13:59 GMT+02:00
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
  double t1026;
  double t3049;
  double t3760;
  double t958;
  double t3921;
  double t19559;
  double t19575;
  double t19812;
  double t19835;
  double t20650;
  double t1135;
  double t5603;
  double t19141;
  double t21080;
  double t21081;
  double t21172;
  double t21712;
  double t21761;
  double t21764;
  double t21765;
  double t21840;
  double t21843;
  double t21851;
  double t22105;
  double t22106;
  double t22111;
  double t22117;
  double t22119;
  double t22129;
  double t22132;
  double t20915;
  double t20948;
  double t21322;
  double t21330;
  double t21714;
  double t21760;
  double t22069;
  double t22103;
  double t22369;
  double t22374;
  double t22375;
  double t22685;
  double t22686;
  double t22689;
  double t22711;
  double t22712;
  double t22714;
  double t23132;
  double t23133;
  double t23134;
  double t22726;
  double t22727;
  double t22728;
  double t23143;
  double t23154;
  double t23156;
  double t23422;
  double t23425;
  double t23429;
  double t24796;
  double t25948;
  double t23169;
  double t28065;
  double t29160;
  double t29613;
  double t32383;
  double t32457;
  double t32949;
  double t32991;
  double t32993;
  double t33079;
  double t33554;
  double t33585;
  double t33637;
  t1026 = Cos(var1[5]);
  t3049 = Sin(var1[3]);
  t3760 = Sin(var1[4]);
  t958 = Cos(var1[3]);
  t3921 = Sin(var1[5]);
  t19559 = Cos(var1[6]);
  t19575 = -1.*t19559;
  t19812 = 1. + t19575;
  t19835 = 0.15121*t19812;
  t20650 = Sin(var1[6]);
  t1135 = t958*t1026;
  t5603 = -1.*t3049*t3760*t3921;
  t19141 = t1135 + t5603;
  t21080 = t1026*t3049*t3760;
  t21081 = t958*t3921;
  t21172 = t21080 + t21081;
  t21712 = Cos(var1[7]);
  t21761 = t19559*t21172;
  t21764 = t19141*t20650;
  t21765 = t21761 + t21764;
  t21840 = Cos(var1[4]);
  t21843 = Sin(var1[7]);
  t21851 = Cos(var1[8]);
  t22105 = t21712*t21765;
  t22106 = t21840*t3049*t21843;
  t22111 = t22105 + t22106;
  t22117 = -1.*t21840*t21712*t3049;
  t22119 = t21765*t21843;
  t22129 = t22117 + t22119;
  t22132 = Sin(var1[8]);
  t20915 = -0.15121*t20650;
  t20948 = t19835 + t20915;
  t21322 = 0.15121*t20650;
  t21330 = t19835 + t21322;
  t21714 = -1.*t21712;
  t21760 = 1. + t21714;
  t22069 = -1.*t21851;
  t22103 = 1. + t22069;
  t22369 = -1.*t958*t21840*t1026*t19559;
  t22374 = t958*t21840*t3921*t20650;
  t22375 = t22369 + t22374;
  t22685 = t21712*t22375;
  t22686 = t958*t3760*t21843;
  t22689 = t22685 + t22686;
  t22711 = -1.*t958*t21712*t3760;
  t22712 = t22375*t21843;
  t22714 = t22711 + t22712;
  t23132 = t1026*t3049;
  t23133 = t958*t3760*t3921;
  t23134 = t23132 + t23133;
  t22726 = t958*t1026*t3760;
  t22727 = -1.*t3049*t3921;
  t22728 = t22726 + t22727;
  t23143 = t19559*t23134;
  t23154 = t22728*t20650;
  t23156 = t23143 + t23154;
  t23422 = -1.*t958*t1026*t3760;
  t23425 = t3049*t3921;
  t23429 = t23422 + t23425;
  t24796 = -1.*t23429*t20650;
  t25948 = t23143 + t24796;
  t23169 = -1.*t23134*t20650;
  t28065 = t19559*t23429;
  t29160 = t23134*t20650;
  t29613 = t28065 + t29160;
  t32383 = -1.*t958*t21840*t21712;
  t32457 = -1.*t29613*t21843;
  t32949 = t32383 + t32457;
  t32991 = t21712*t29613;
  t32993 = -1.*t958*t21840*t21843;
  t33079 = t32991 + t32993;
  t33554 = t958*t21840*t21712;
  t33585 = t29613*t21843;
  t33637 = t33554 + t33585;
  p_output1[0]=1.;
  p_output1[1]=t19141*t20948 + 0.15121*(t19141*t19559 - 1.*t20650*t21172) + t21172*t21330 + 0.28121*t21760*t21765 + 0.50321*t22103*t22111 - 0.50321*t22129*t22132 + 0.19821*(t21851*t22111 + t22129*t22132) - 0.28121*t21840*t21843*t3049;
  p_output1[2]=0.28121*t21760*t22375 + 0.50321*t22103*t22689 - 0.50321*t22132*t22714 + 0.19821*(t21851*t22689 + t22132*t22714) - 1.*t1026*t21330*t21840*t958 - 0.28121*t21843*t3760*t958 + t20948*t21840*t3921*t958 + 0.15121*(t1026*t20650*t21840*t958 + t19559*t21840*t3921*t958);
  p_output1[3]=t20948*t22728 + t21330*t23134 + 0.28121*t21760*t23156 + 0.50321*t21712*t22103*t23156 - 0.50321*t21843*t22132*t23156 + 0.19821*(t21712*t21851*t23156 + t21843*t22132*t23156) + 0.15121*(t19559*t22728 + t23169);
  p_output1[4]=(-0.15121*t19559 + t21322)*t23134 + (0.15121*t19559 + t21322)*t23429 + 0.15121*(t23169 - 1.*t19559*t23429) + 0.28121*t21760*t25948 + 0.50321*t21712*t22103*t25948 - 0.50321*t21843*t22132*t25948 + 0.19821*(t21712*t21851*t25948 + t21843*t22132*t25948);
  p_output1[5]=0.28121*t21843*t29613 + 0.50321*t22103*t32949 - 0.50321*t22132*t33079 + 0.19821*(t21851*t32949 + t22132*t33079) + 0.28121*t21712*t21840*t958;
  p_output1[6]=0.50321*t22132*t33079 - 0.50321*t21851*t33637 + 0.19821*(-1.*t22132*t33079 + t21851*t33637);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_frontSwingFootHeight2_ParallelStance_ParallelStance.hh"

namespace SymFunction
{

void J_u_frontSwingFootHeight2_ParallelStance_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
