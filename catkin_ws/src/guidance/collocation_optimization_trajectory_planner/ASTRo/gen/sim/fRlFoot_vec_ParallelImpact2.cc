/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:29 GMT+02:00
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
  double t259;
  double t7295;
  double t428;
  double t8122;
  double t8321;
  double t7891;
  double t8415;
  double t3369;
  double t8891;
  double t8932;
  double t8943;
  double t7514;
  double t8837;
  double t9105;
  double t9122;
  double t9129;
  double t3480;
  double t7580;
  double t7684;
  double t11762;
  double t10681;
  double t8314;
  double t8651;
  double t8790;
  double t8992;
  double t9029;
  double t9051;
  double t9680;
  double t10087;
  double t10216;
  double t12199;
  double t12436;
  double t12678;
  double t13103;
  double t13214;
  double t14970;
  double t15521;
  double t15523;
  double t15905;
  double t15991;
  double t16021;
  double t16069;
  double t16093;
  double t16099;
  double t16122;
  double t8862;
  double t9073;
  double t9078;
  double t16279;
  double t16319;
  double t16342;
  double t16344;
  double t16345;
  double t16346;
  double t16385;
  double t16454;
  double t16477;
  double t16638;
  double t16844;
  double t17101;
  double t17119;
  double t41052;
  double t41055;
  double t41071;
  double t16333;
  double t16335;
  double t16336;
  double t39356;
  double t40971;
  double t41092;
  double t41094;
  double t41095;
  double t41104;
  double t41112;
  double t41113;
  double t41114;
  double t41051;
  double t41073;
  double t41078;
  double t41111;
  double t41116;
  double t41119;
  double t41125;
  double t41126;
  double t41131;
  double t9099;
  double t10217;
  double t10229;
  double t41088;
  double t41137;
  double t41317;
  double t41348;
  double t41400;
  double t41502;
  double t43948;
  double t44156;
  t259 = Cos(var1[4]);
  t7295 = Cos(var1[9]);
  t428 = Cos(var1[5]);
  t8122 = Cos(var1[11]);
  t8321 = Sin(var1[10]);
  t7891 = Cos(var1[10]);
  t8415 = Sin(var1[11]);
  t3369 = Sin(var1[9]);
  t8891 = -1.*t8122*t8321;
  t8932 = t7891*t8415;
  t8943 = t8891 + t8932;
  t7514 = Sin(var1[5]);
  t8837 = Sin(var1[4]);
  t9105 = -1.*t7891*t8122;
  t9122 = -1.*t8321*t8415;
  t9129 = t9105 + t9122;
  t3480 = t428*t3369;
  t7580 = t7295*t7514;
  t7684 = t3480 + t7580;
  t11762 = Cos(var1[3]);
  t10681 = Sin(var1[3]);
  t8314 = t7891*t8122;
  t8651 = t8321*t8415;
  t8790 = t8314 + t8651;
  t8992 = t7295*t428*t8943;
  t9029 = -1.*t3369*t8943*t7514;
  t9051 = t8992 + t9029;
  t9680 = t7295*t428*t9129;
  t10087 = -1.*t3369*t9129*t7514;
  t10216 = t9680 + t10087;
  t12199 = -1.*t7295*t428;
  t12436 = t3369*t7514;
  t12678 = t12199 + t12436;
  t13103 = t428*t3369*t8943;
  t13214 = t7295*t8943*t7514;
  t14970 = t13103 + t13214;
  t15521 = t259*t8790;
  t15523 = -1.*t8837*t9051;
  t15905 = t15521 + t15523;
  t15991 = t428*t3369*t9129;
  t16021 = t7295*t9129*t7514;
  t16069 = t15991 + t16021;
  t16093 = t259*t8943;
  t16099 = -1.*t8837*t10216;
  t16122 = t16093 + t16099;
  t8862 = t8790*t8837;
  t9073 = t259*t9051;
  t9078 = t8862 + t9073;
  t16279 = -1.*t7295;
  t16319 = 1. + t16279;
  t16342 = -1.*t7891;
  t16344 = 1. + t16342;
  t16345 = -0.28121*t16344;
  t16346 = -1.*t8122;
  t16385 = 1. + t16346;
  t16454 = -0.50321*t16385;
  t16477 = -0.23321*t8122;
  t16638 = t16454 + t16477;
  t16844 = t7891*t16638;
  t17101 = 0.27*t8321*t8415;
  t17119 = t16345 + t16844 + t17101;
  t41052 = -0.15121*t16319;
  t41055 = t7295*t17119;
  t41071 = t41052 + t41055;
  t16333 = 0.15121*t16319;
  t16335 = 0.15121*t7295;
  t16336 = 0.15121*t3369;
  t39356 = t3369*t17119;
  t40971 = t16333 + t16335 + t16336 + t39356;
  t41092 = 0.28121*t8321;
  t41094 = t16638*t8321;
  t41095 = -0.27*t7891*t8415;
  t41104 = t41092 + t41094 + t41095;
  t41112 = t428*t41071;
  t41113 = -1.*t40971*t7514;
  t41114 = t41112 + t41113;
  t41051 = t428*t40971;
  t41073 = t41071*t7514;
  t41078 = t41051 + t41073;
  t41111 = t41104*t8837;
  t41116 = t259*t41114;
  t41119 = t41111 + t41116;
  t41125 = t259*t41104;
  t41126 = -1.*t8837*t41114;
  t41131 = t41125 + t41126;
  t9099 = t8943*t8837;
  t10217 = t259*t10216;
  t10229 = t9099 + t10217;
  t41088 = -1.*t12678*t41078;
  t41137 = t14970*t41078;
  t41317 = t12678*t41078;
  t41348 = -1.*t16069*t41078;
  t41400 = -1.*t14970*t41078;
  t41502 = t16069*t41078;
  t43948 = -1.*t41104*t8790;
  t44156 = t41104*t8943;
  p_output1[0]=t10229*var2[0] + t259*t7684*var2[1] + t9078*var2[2];
  p_output1[1]=(t11762*t16069 - 1.*t10681*t16122)*var2[0] + (t11762*t12678 + t10681*t7684*t8837)*var2[1] + (t11762*t14970 - 1.*t10681*t15905)*var2[2];
  p_output1[2]=(t10681*t16069 + t11762*t16122)*var2[0] + (t10681*t12678 - 1.*t11762*t7684*t8837)*var2[1] + (t10681*t14970 + t11762*t15905)*var2[2];
  p_output1[3]=((t41088 - 1.*t259*t41119*t7684 + t41131*t7684*t8837)*t9078 + t259*t7684*(t15905*t41131 + t41137 + t41119*t9078))*var2[0] + ((t10229*t41119 + t16122*t41131 + t41502)*t9078 + t10229*(-1.*t15905*t41131 + t41400 - 1.*t41119*t9078))*var2[1] + (t259*(-1.*t10229*t41119 - 1.*t16122*t41131 + t41348)*t7684 + t10229*(t41317 + t259*t41119*t7684 - 1.*t41131*t7684*t8837))*var2[2];
  p_output1[4]=(t14970*(t41088 - 1.*t41114*t7684) + t12678*(t41137 + t41104*t8790 + t41114*t9051))*var2[0] + (t14970*(t10216*t41114 + t41502 + t44156) + t16069*(t41400 + t43948 - 1.*t41114*t9051))*var2[1] + (t16069*(t41317 + t41114*t7684) + t12678*(-1.*t10216*t41114 + t41348 - 1.*t41104*t8943))*var2[2];
  p_output1[5]=(-1.*t3369*t41071 + t40971*t7295)*t8790*var2[0] + (t8943*(t43948 - 1.*t3369*t40971*t8943 - 1.*t41071*t7295*t8943) + t8790*(t44156 + t3369*t40971*t9129 + t41071*t7295*t9129))*var2[1] + (t3369*t41071 - 1.*t40971*t7295)*t8943*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t8790 + 0.15121*t9129)*var2[0] + (-0.15121 + t8943*(t43948 - 1.*t17119*t8943) + t8790*(t44156 + t17119*t9129))*var2[1];
  p_output1[10]=(0.28121*t8415 + t16638*t8415 - 0.27*t8122*t8415)*var2[0] + (0.28121*t8122 + t16638*t8122 + 0.27*Power(t8415,2))*var2[2];
  p_output1[11]=-0.27*var2[2];
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

#include "fRlFoot_vec_ParallelImpact2.hh"

namespace SymFunction
{

void fRlFoot_vec_ParallelImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
