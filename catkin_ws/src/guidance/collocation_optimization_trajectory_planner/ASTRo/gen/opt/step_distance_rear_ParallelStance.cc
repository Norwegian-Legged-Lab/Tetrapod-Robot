/*
 * Automatically Generated from Mathematica.
 * Thu 26 May 2022 14:48:56 GMT+02:00
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
  double t414;
  double t7785;
  double t16191;
  double t8212;
  double t8253;
  double t14171;
  double t14371;
  double t14442;
  double t15880;
  double t15888;
  double t15896;
  double t15905;
  double t15924;
  double t16225;
  double t16187;
  double t16581;
  double t16710;
  double t16754;
  double t16934;
  double t16205;
  double t17072;
  double t17080;
  double t17085;
  double t17115;
  double t17187;
  double t17675;
  double t17748;
  double t17764;
  double t17801;
  double t18444;
  double t18599;
  double t18612;
  double t18632;
  double t18661;
  double t18663;
  double t18917;
  double t19356;
  double t19358;
  double t19360;
  double t19376;
  double t19874;
  double t14329;
  double t14456;
  double t16046;
  double t16180;
  double t19886;
  double t19888;
  double t19890;
  double t19900;
  double t16219;
  double t16223;
  double t16298;
  double t16307;
  double t20046;
  double t20146;
  double t20150;
  double t16590;
  double t16676;
  double t17074;
  double t17079;
  double t17205;
  double t17230;
  double t20267;
  double t20322;
  double t20371;
  double t18641;
  double t18647;
  double t20415;
  double t20423;
  double t20433;
  double t20459;
  double t20501;
  double t20503;
  double t20531;
  double t20541;
  double t20551;
  double t20597;
  double t20617;
  double t20623;
  double t20659;
  double t20682;
  double t20716;
  t414 = Cos(var1[4]);
  t7785 = Cos(var1[5]);
  t16191 = Sin(var1[4]);
  t8212 = Cos(var1[9]);
  t8253 = -1.*t8212;
  t14171 = 1. + t8253;
  t14371 = Sin(var1[9]);
  t14442 = 0.15121*t14371;
  t15880 = Cos(var1[15]);
  t15888 = -1.*t15880;
  t15896 = 1. + t15888;
  t15905 = -0.15121*t15896;
  t15924 = Sin(var1[15]);
  t16225 = Sin(var1[5]);
  t16187 = Sin(var1[10]);
  t16581 = Cos(var1[10]);
  t16710 = t8212*t414*t7785;
  t16754 = -1.*t414*t14371*t16225;
  t16934 = t16710 + t16754;
  t16205 = Sin(var1[16]);
  t17072 = Cos(var1[16]);
  t17080 = t15880*t414*t7785;
  t17085 = -1.*t414*t15924*t16225;
  t17115 = t17080 + t17085;
  t17187 = Cos(var1[11]);
  t17675 = t16187*t16191;
  t17748 = t16581*t16934;
  t17764 = t17675 + t17748;
  t17801 = Sin(var1[11]);
  t18444 = t16581*t16191;
  t18599 = -1.*t16187*t16934;
  t18612 = t18444 + t18599;
  t18632 = Cos(var1[17]);
  t18661 = t16205*t16191;
  t18663 = t17072*t17115;
  t18917 = t18661 + t18663;
  t19356 = Sin(var1[17]);
  t19358 = t17072*t16191;
  t19360 = -1.*t16205*t17115;
  t19376 = t19358 + t19360;
  t19874 = Sin(var1[3]);
  t14329 = -0.15121*t14171;
  t14456 = t14329 + t14442;
  t16046 = -0.15121*t15924;
  t16180 = t15905 + t16046;
  t19886 = t7785*t19874*t16191;
  t19888 = Cos(var1[3]);
  t19890 = t19888*t16225;
  t19900 = t19886 + t19890;
  t16219 = 0.15121*t14171;
  t16223 = t16219 + t14442;
  t16298 = 0.15121*t15924;
  t16307 = t15905 + t16298;
  t20046 = t19888*t7785;
  t20146 = -1.*t19874*t16191*t16225;
  t20150 = t20046 + t20146;
  t16590 = -1.*t16581;
  t16676 = 1. + t16590;
  t17074 = -1.*t17072;
  t17079 = 1. + t17074;
  t17205 = -1.*t17187;
  t17230 = 1. + t17205;
  t20267 = t8212*t19900;
  t20322 = t14371*t20150;
  t20371 = t20267 + t20322;
  t18641 = -1.*t18632;
  t18647 = 1. + t18641;
  t20415 = t15880*t19900;
  t20423 = t15924*t20150;
  t20433 = t20415 + t20423;
  t20459 = -1.*t414*t16187*t19874;
  t20501 = t16581*t20371;
  t20503 = t20459 + t20501;
  t20531 = -1.*t16581*t414*t19874;
  t20541 = -1.*t16187*t20371;
  t20551 = t20531 + t20541;
  t20597 = -1.*t414*t16205*t19874;
  t20617 = t17072*t20433;
  t20623 = t20597 + t20617;
  t20659 = -1.*t17072*t414*t19874;
  t20682 = -1.*t16205*t20433;
  t20716 = t20659 + t20682;
  p_output1[0]=0.28121*t16187*t16191 - 0.28121*t16191*t16205 - 0.28121*t16676*t16934 + 0.28121*t17079*t17115 - 0.50321*t17230*t17764 - 0.50321*t17801*t18612 - 0.19821*(t17187*t17764 - 1.*t17801*t18612) + 0.50321*t18647*t18917 + 0.50321*t19356*t19376 + 0.19821*(t18632*t18917 - 1.*t19356*t19376) - 1.*t16223*t16225*t414 + t16225*t16307*t414 + t14456*t414*t7785 - 1.*t16180*t414*t7785 + 0.15121*(-1.*t15880*t16225*t414 - 1.*t15924*t414*t7785) + 0.15121*(-1.*t14371*t414*t7785 - 1.*t16225*t414*t8212);
  p_output1[1]=t14456*t19900 - 1.*t16180*t19900 + t16223*t20150 - 1.*t16307*t20150 + 0.15121*(-1.*t15924*t19900 + t15880*t20150) - 0.28121*t16676*t20371 + 0.28121*t17079*t20433 - 0.50321*t17230*t20503 - 0.50321*t17801*t20551 - 0.19821*(t17187*t20503 - 1.*t17801*t20551) + 0.50321*t18647*t20623 + 0.50321*t19356*t20716 + 0.19821*(t18632*t20623 - 1.*t19356*t20716) - 0.28121*t16187*t19874*t414 + 0.28121*t16205*t19874*t414 + 0.15121*(-1.*t14371*t19900 + t20150*t8212);
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

#include "step_distance_rear_ParallelStance.hh"

namespace ParallelStance
{

void step_distance_rear_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
