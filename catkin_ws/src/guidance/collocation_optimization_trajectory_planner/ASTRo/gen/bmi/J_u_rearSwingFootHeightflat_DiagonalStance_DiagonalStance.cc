/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:51:05 GMT+02:00
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
  double t53;
  double t89;
  double t93;
  double t120;
  double t131;
  double t144;
  double t197;
  double t179;
  double t186;
  double t215;
  double t193;
  double t236;
  double t248;
  double t263;
  double t267;
  double t269;
  double t19;
  double t50;
  double t286;
  double t292;
  double t302;
  double t319;
  double t328;
  double t345;
  double t371;
  double t377;
  double t390;
  double t391;
  double t401;
  double t403;
  double t154;
  double t166;
  double t256;
  double t259;
  double t287;
  double t288;
  double t330;
  double t336;
  double t551;
  double t553;
  double t557;
  double t561;
  double t572;
  double t573;
  double t600;
  double t622;
  double t626;
  double t725;
  double t730;
  double t733;
  double t735;
  double t740;
  double t741;
  double t752;
  double t753;
  double t783;
  double t946;
  double t986;
  double t1036;
  double t1056;
  double t1058;
  double t799;
  double t1125;
  double t1128;
  double t1131;
  double t1136;
  double t1137;
  double t1155;
  double t1158;
  double t1174;
  double t1180;
  double t1223;
  double t1267;
  double t1291;
  t53 = Sin(var1[3]);
  t89 = Cos(var1[15]);
  t93 = -1.*t89;
  t120 = 1. + t93;
  t131 = -0.15121*t120;
  t144 = Sin(var1[15]);
  t197 = Cos(var1[3]);
  t179 = Cos(var1[5]);
  t186 = Sin(var1[4]);
  t215 = Sin(var1[5]);
  t193 = t179*t53*t186;
  t236 = t197*t215;
  t248 = t193 + t236;
  t263 = t197*t179;
  t267 = -1.*t53*t186*t215;
  t269 = t263 + t267;
  t19 = Cos(var1[4]);
  t50 = Sin(var1[16]);
  t286 = Cos(var1[16]);
  t292 = t89*t248;
  t302 = t144*t269;
  t319 = t292 + t302;
  t328 = Cos(var1[17]);
  t345 = -1.*t19*t50*t53;
  t371 = t286*t319;
  t377 = t345 + t371;
  t390 = Sin(var1[17]);
  t391 = -1.*t286*t19*t53;
  t401 = -1.*t50*t319;
  t403 = t391 + t401;
  t154 = -0.15121*t144;
  t166 = t131 + t154;
  t256 = 0.15121*t144;
  t259 = t131 + t256;
  t287 = -1.*t286;
  t288 = 1. + t287;
  t330 = -1.*t328;
  t336 = 1. + t330;
  t551 = -1.*t89*t197*t19*t179;
  t553 = t197*t19*t144*t215;
  t557 = t551 + t553;
  t561 = -1.*t197*t50*t186;
  t572 = t286*t557;
  t573 = t561 + t572;
  t600 = -1.*t286*t197*t186;
  t622 = -1.*t50*t557;
  t626 = t600 + t622;
  t725 = t197*t179*t186;
  t730 = -1.*t53*t215;
  t733 = t725 + t730;
  t735 = t179*t53;
  t740 = t197*t186*t215;
  t741 = t735 + t740;
  t752 = t144*t733;
  t753 = t89*t741;
  t783 = t752 + t753;
  t946 = -1.*t197*t179*t186;
  t986 = t53*t215;
  t1036 = t946 + t986;
  t1056 = -1.*t144*t1036;
  t1058 = t1056 + t753;
  t799 = -1.*t144*t741;
  t1125 = t89*t1036;
  t1128 = t144*t741;
  t1131 = t1125 + t1128;
  t1136 = -1.*t197*t19*t50;
  t1137 = -1.*t286*t1131;
  t1155 = t1136 + t1137;
  t1158 = t286*t197*t19;
  t1174 = -1.*t50*t1131;
  t1180 = t1158 + t1174;
  t1223 = t197*t19*t50;
  t1267 = t286*t1131;
  t1291 = t1223 + t1267;
  p_output1[0]=1.;
  p_output1[1]=t166*t248 + t259*t269 - 0.28121*t288*t319 - 0.50321*t336*t377 - 0.50321*t390*t403 - 0.19821*(t328*t377 - 1.*t390*t403) - 0.28121*t19*t50*t53 - 0.15121*(-1.*t144*t248 + t269*t89);
  p_output1[2]=-1.*t166*t179*t19*t197 + t19*t197*t215*t259 - 0.28121*t186*t197*t50 - 0.28121*t288*t557 - 0.50321*t336*t573 - 0.50321*t390*t626 - 0.19821*(t328*t573 - 1.*t390*t626) - 0.15121*(t144*t179*t19*t197 + t19*t197*t215*t89);
  p_output1[3]=t259*t733 + t166*t741 - 0.28121*t288*t783 - 0.50321*t286*t336*t783 + 0.50321*t390*t50*t783 - 0.19821*(t286*t328*t783 + t390*t50*t783) - 0.15121*(t799 + t733*t89);
  p_output1[4]=-0.28121*t1058*t288 - 0.50321*t1058*t286*t336 + 0.50321*t1058*t390*t50 - 0.19821*(t1058*t286*t328 + t1058*t390*t50) + t1036*(t154 - 0.15121*t89) + t741*(t154 + 0.15121*t89) - 0.15121*(t799 - 1.*t1036*t89);
  p_output1[5]=0.28121*t19*t197*t286 - 0.50321*t1180*t336 - 0.50321*t1155*t390 - 0.19821*(t1180*t328 - 1.*t1155*t390) - 0.28121*t1131*t50;
  p_output1[6]=-0.50321*t1180*t328 - 0.50321*t1291*t390 - 0.19821*(-1.*t1180*t328 - 1.*t1291*t390);
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

#include "J_u_rearSwingFootHeightflat_DiagonalStance_DiagonalStance.hh"

namespace SymFunction
{

void J_u_rearSwingFootHeightflat_DiagonalStance_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
