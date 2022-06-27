/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:37:56 GMT+02:00
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
  double t12636;
  double t12694;
  double t12748;
  double t12759;
  double t12769;
  double t13449;
  double t15010;
  double t12693;
  double t15514;
  double t15539;
  double t15546;
  double t15552;
  double t15564;
  double t15688;
  double t15691;
  double t15104;
  double t15516;
  double t15518;
  double t15558;
  double t15565;
  double t15566;
  double t15568;
  double t15572;
  double t15577;
  double t15645;
  double t15663;
  double t15693;
  double t15697;
  double t15704;
  double t15709;
  double t15722;
  double t15900;
  double t15901;
  double t16014;
  double t15826;
  double t15866;
  double t16034;
  double t16035;
  double t16058;
  double t16059;
  double t16100;
  double t16193;
  double t16210;
  double t16212;
  double t14759;
  double t14767;
  double t15284;
  double t16346;
  double t16347;
  double t16351;
  double t16362;
  double t16366;
  double t16369;
  double t16372;
  double t16377;
  double t16385;
  double t16424;
  double t16419;
  double t16437;
  double t16439;
  double t16440;
  double t16420;
  double t16426;
  double t16430;
  double t16447;
  double t16448;
  double t16449;
  double t15797;
  double t15799;
  double t15809;
  double t15815;
  double t16519;
  double t16524;
  double t16535;
  double t16537;
  double t16543;
  double t16471;
  double t16705;
  double t16706;
  double t16707;
  double t16703;
  double t16709;
  double t16711;
  double t16727;
  double t16728;
  double t16738;
  double t16802;
  double t16811;
  double t16812;
  double t16865;
  double t16868;
  double t16869;
  double t16872;
  double t16873;
  double t16874;
  double t16876;
  double t16877;
  double t16878;
  double t16920;
  double t16922;
  double t16923;
  double t16927;
  double t16931;
  double t16932;
  double t16951;
  double t16953;
  double t16954;
  double t16963;
  double t16965;
  double t16973;
  double t16986;
  double t16998;
  double t17000;
  double t17030;
  double t17034;
  double t17035;
  double t17038;
  double t17042;
  double t17045;
  double t17091;
  double t17107;
  double t17117;
  double t17122;
  double t17126;
  double t17049;
  double t17155;
  double t17157;
  double t17159;
  double t17152;
  double t17162;
  double t17163;
  double t17166;
  double t17168;
  double t17169;
  double t17185;
  double t17186;
  double t17278;
  double t17279;
  double t17281;
  double t17292;
  double t17293;
  double t17296;
  double t17299;
  double t17301;
  double t17303;
  t12636 = Cos(var1[4]);
  t12694 = Cos(var1[6]);
  t12748 = -1.*t12694;
  t12759 = 1. + t12748;
  t12769 = 0.15121*t12759;
  t13449 = Sin(var1[6]);
  t15010 = Sin(var1[5]);
  t12693 = Cos(var1[5]);
  t15514 = Cos(var1[7]);
  t15539 = -1.*t12636*t12694*t15010;
  t15546 = -1.*t12636*t12693*t13449;
  t15552 = t15539 + t15546;
  t15564 = Cos(var1[8]);
  t15688 = Sin(var1[7]);
  t15691 = Sin(var1[8]);
  t15104 = 0.15121*t13449;
  t15516 = -1.*t15514;
  t15518 = 1. + t15516;
  t15558 = 0.28121*t15518*t15552;
  t15565 = -1.*t15564;
  t15566 = 1. + t15565;
  t15568 = 0.50321*t15514*t15566*t15552;
  t15572 = -1.*t12636*t12693*t12694;
  t15577 = t12636*t15010*t13449;
  t15645 = t15572 + t15577;
  t15663 = 0.15121*t15645;
  t15693 = -0.50321*t15552*t15688*t15691;
  t15697 = t15514*t15564*t15552;
  t15704 = t15552*t15688*t15691;
  t15709 = t15697 + t15704;
  t15722 = 0.19821*t15709;
  t15900 = t12636*t12693*t12694;
  t15901 = -1.*t12636*t15010*t13449;
  t16014 = t15900 + t15901;
  t15826 = Sin(var1[4]);
  t15866 = t15514*t15826;
  t16034 = t16014*t15688;
  t16035 = t15866 + t16034;
  t16058 = t15514*t16014;
  t16059 = -1.*t15826*t15688;
  t16100 = t16058 + t16059;
  t16193 = -1.*t15514*t15826;
  t16210 = -1.*t16014*t15688;
  t16212 = t16193 + t16210;
  t14759 = -0.15121*t13449;
  t14767 = t12769 + t14759;
  t15284 = t12769 + t15104;
  t16346 = -1.*t12693*t12694*t15826;
  t16347 = t15826*t15010*t13449;
  t16351 = t16346 + t16347;
  t16362 = t15514*t16351;
  t16366 = -1.*t12636*t15688;
  t16369 = t16362 + t16366;
  t16372 = t12636*t15514;
  t16377 = t16351*t15688;
  t16385 = t16372 + t16377;
  t16424 = Cos(var1[3]);
  t16419 = Sin(var1[3]);
  t16437 = t16424*t12693;
  t16439 = -1.*t16419*t15826*t15010;
  t16440 = t16437 + t16439;
  t16420 = -1.*t12693*t16419*t15826;
  t16426 = -1.*t16424*t15010;
  t16430 = t16420 + t16426;
  t16447 = t12694*t16440;
  t16448 = t16430*t13449;
  t16449 = t16447 + t16448;
  t15797 = -0.15121*t12694;
  t15799 = t15797 + t15104;
  t15809 = 0.15121*t12694;
  t15815 = t15809 + t15104;
  t16519 = t12693*t16419*t15826;
  t16524 = t16424*t15010;
  t16535 = t16519 + t16524;
  t16537 = -1.*t16535*t13449;
  t16543 = t16447 + t16537;
  t16471 = -1.*t16440*t13449;
  t16705 = t12694*t16535;
  t16706 = t16440*t13449;
  t16707 = t16705 + t16706;
  t16703 = -1.*t12636*t15514*t16419;
  t16709 = t16707*t15688;
  t16711 = t16703 + t16709;
  t16727 = t15514*t16707;
  t16728 = t12636*t16419*t15688;
  t16738 = t16727 + t16728;
  t16802 = t12636*t15514*t16419;
  t16811 = -1.*t16707*t15688;
  t16812 = t16802 + t16811;
  t16865 = t12636*t12693*t12694*t16419;
  t16868 = -1.*t12636*t16419*t15010*t13449;
  t16869 = t16865 + t16868;
  t16872 = t15514*t16869;
  t16873 = -1.*t16419*t15826*t15688;
  t16874 = t16872 + t16873;
  t16876 = t15514*t16419*t15826;
  t16877 = t16869*t15688;
  t16878 = t16876 + t16877;
  t16920 = -1.*t12693*t16419;
  t16922 = -1.*t16424*t15826*t15010;
  t16923 = t16920 + t16922;
  t16927 = t16424*t12693*t15826;
  t16931 = -1.*t16419*t15010;
  t16932 = t16927 + t16931;
  t16951 = t12694*t16932;
  t16953 = t16923*t13449;
  t16954 = t16951 + t16953;
  t16963 = t15514*t16954;
  t16965 = t16424*t12636*t15688;
  t16973 = t16963 + t16965;
  t16986 = -1.*t16424*t12636*t15514;
  t16998 = t16954*t15688;
  t17000 = t16986 + t16998;
  t17030 = t12693*t16419;
  t17034 = t16424*t15826*t15010;
  t17035 = t17030 + t17034;
  t17038 = t12694*t17035;
  t17042 = t16932*t13449;
  t17045 = t17038 + t17042;
  t17091 = -1.*t16424*t12693*t15826;
  t17107 = t16419*t15010;
  t17117 = t17091 + t17107;
  t17122 = -1.*t17117*t13449;
  t17126 = t17038 + t17122;
  t17049 = -1.*t17035*t13449;
  t17155 = t12694*t17117;
  t17157 = t17035*t13449;
  t17159 = t17155 + t17157;
  t17152 = t16424*t12636*t15514;
  t17162 = t17159*t15688;
  t17163 = t17152 + t17162;
  t17166 = t15514*t17159;
  t17168 = -1.*t16424*t12636*t15688;
  t17169 = t17166 + t17168;
  t17185 = -1.*t17159*t15688;
  t17186 = t16986 + t17185;
  t17278 = -1.*t16424*t12636*t12693*t12694;
  t17279 = t16424*t12636*t15010*t13449;
  t17281 = t17278 + t17279;
  t17292 = t15514*t17281;
  t17293 = t16424*t15826*t15688;
  t17296 = t17292 + t17293;
  t17299 = -1.*t16424*t15514*t15826;
  t17301 = t17281*t15688;
  t17303 = t17299 + t17301;
  p_output1[0]=var2[0] + (0.28121*t12636*t15688 + t14767*t15010*t15826 - 1.*t12693*t15284*t15826 + 0.15121*(t12693*t13449*t15826 + t12694*t15010*t15826) + 0.28121*t15518*t16351 + 0.50321*t15566*t16369 - 0.50321*t15691*t16385 + 0.19821*(t15564*t16369 + t15691*t16385))*var2[4] + (-1.*t12636*t12693*t14767 - 1.*t12636*t15010*t15284 + t15558 + t15568 + t15663 + t15693 + t15722)*var2[5] + (t15558 + t15568 + t15663 + t15693 + t15722 - 1.*t12636*t15010*t15799 + t12636*t12693*t15815)*var2[6] + (0.28121*t15514*t15826 + 0.28121*t15688*t16014 - 0.50321*t15691*t16100 + 0.50321*t15566*t16212 + 0.19821*(t15691*t16100 + t15564*t16212))*var2[7] + (-0.50321*t15564*t16035 + 0.50321*t15691*t16100 + 0.19821*(t15564*t16035 - 1.*t15691*t16100))*var2[8];
  p_output1[1]=var2[1] + (-0.28121*t12636*t15688*t16424 + t14767*t16923 + t15284*t16932 + 0.15121*(t12694*t16923 - 1.*t13449*t16932) + 0.28121*t15518*t16954 + 0.50321*t15566*t16973 - 0.50321*t15691*t17000 + 0.19821*(t15564*t16973 + t15691*t17000))*var2[3] + (-1.*t12636*t14767*t15010*t16419 + t12636*t12693*t15284*t16419 + 0.28121*t15688*t15826*t16419 + 0.15121*(-1.*t12636*t12693*t13449*t16419 - 1.*t12636*t12694*t15010*t16419) + 0.28121*t15518*t16869 + 0.50321*t15566*t16874 - 0.50321*t15691*t16878 + 0.19821*(t15564*t16874 + t15691*t16878))*var2[4] + (t14767*t16430 + t15284*t16440 + 0.28121*t15518*t16449 + 0.50321*t15514*t15566*t16449 - 0.50321*t15688*t15691*t16449 + 0.19821*(t15514*t15564*t16449 + t15688*t15691*t16449) + 0.15121*(t12694*t16430 + t16471))*var2[5] + (t15799*t16440 + t15815*t16535 + 0.15121*(t16471 - 1.*t12694*t16535) + 0.28121*t15518*t16543 + 0.50321*t15514*t15566*t16543 - 0.50321*t15688*t15691*t16543 + 0.19821*(t15514*t15564*t16543 + t15688*t15691*t16543))*var2[6] + (-0.28121*t12636*t15514*t16419 + 0.28121*t15688*t16707 - 0.50321*t15691*t16738 + 0.50321*t15566*t16812 + 0.19821*(t15691*t16738 + t15564*t16812))*var2[7] + (-0.50321*t15564*t16711 + 0.50321*t15691*t16738 + 0.19821*(t15564*t16711 - 1.*t15691*t16738))*var2[8];
  p_output1[2]=var2[2] + (-0.28121*t12636*t15688*t16419 + t14767*t16440 + t15284*t16535 + 0.15121*t16543 + 0.28121*t15518*t16707 - 0.50321*t15691*t16711 + 0.50321*t15566*t16738 + 0.19821*(t15691*t16711 + t15564*t16738))*var2[3] + (t12636*t14767*t15010*t16424 - 1.*t12636*t12693*t15284*t16424 - 0.28121*t15688*t15826*t16424 + 0.15121*(t12636*t12693*t13449*t16424 + t12636*t12694*t15010*t16424) + 0.28121*t15518*t17281 + 0.50321*t15566*t17296 - 0.50321*t15691*t17303 + 0.19821*(t15564*t17296 + t15691*t17303))*var2[4] + (t14767*t16932 + t15284*t17035 + 0.28121*t15518*t17045 + 0.50321*t15514*t15566*t17045 - 0.50321*t15688*t15691*t17045 + 0.19821*(t15514*t15564*t17045 + t15688*t15691*t17045) + 0.15121*(t16951 + t17049))*var2[5] + (t15799*t17035 + t15815*t17117 + 0.15121*(t17049 - 1.*t12694*t17117) + 0.28121*t15518*t17126 + 0.50321*t15514*t15566*t17126 - 0.50321*t15688*t15691*t17126 + 0.19821*(t15514*t15564*t17126 + t15688*t15691*t17126))*var2[6] + (0.28121*t12636*t15514*t16424 + 0.28121*t15688*t17159 - 0.50321*t15691*t17169 + 0.50321*t15566*t17186 + 0.19821*(t15691*t17169 + t15564*t17186))*var2[7] + (-0.50321*t15564*t17163 + 0.50321*t15691*t17169 + 0.19821*(t15564*t17163 - 1.*t15691*t17169))*var2[8];
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

#include "impact_velocity_FlFoot_ParallelStance.hh"

namespace ParallelStance
{

void impact_velocity_FlFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
