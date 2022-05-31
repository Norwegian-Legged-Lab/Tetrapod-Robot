/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:47 GMT+02:00
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
  double t163;
  double t27078;
  double t3419;
  double t37033;
  double t37040;
  double t37031;
  double t37042;
  double t16270;
  double t37081;
  double t37097;
  double t37104;
  double t27650;
  double t37079;
  double t37119;
  double t37120;
  double t37121;
  double t17658;
  double t27664;
  double t36885;
  double t37188;
  double t37186;
  double t37035;
  double t37043;
  double t37062;
  double t37105;
  double t37106;
  double t37107;
  double t37122;
  double t37123;
  double t37124;
  double t37190;
  double t37191;
  double t37192;
  double t37197;
  double t37198;
  double t37202;
  double t37205;
  double t37206;
  double t37207;
  double t37213;
  double t37214;
  double t37215;
  double t37220;
  double t37221;
  double t37222;
  double t37080;
  double t37111;
  double t37115;
  double t37240;
  double t37241;
  double t37242;
  double t37246;
  double t37248;
  double t37249;
  double t37252;
  double t37262;
  double t37263;
  double t37264;
  double t37268;
  double t37269;
  double t37273;
  double t37275;
  double t37283;
  double t37284;
  double t37243;
  double t37244;
  double t37280;
  double t37281;
  double t37294;
  double t37298;
  double t37300;
  double t37301;
  double t37306;
  double t37307;
  double t37308;
  double t37282;
  double t37288;
  double t37292;
  double t37302;
  double t37309;
  double t37310;
  double t37312;
  double t37313;
  double t37314;
  double t37118;
  double t37125;
  double t37126;
  double t37293;
  double t37320;
  double t37328;
  double t37333;
  double t37341;
  double t37347;
  double t37378;
  double t37382;
  t163 = Cos(var1[4]);
  t27078 = Cos(var1[15]);
  t3419 = Cos(var1[5]);
  t37033 = Cos(var1[17]);
  t37040 = Sin(var1[16]);
  t37031 = Cos(var1[16]);
  t37042 = Sin(var1[17]);
  t16270 = Sin(var1[15]);
  t37081 = -1.*t37033*t37040;
  t37097 = t37031*t37042;
  t37104 = t37081 + t37097;
  t27650 = Sin(var1[5]);
  t37079 = Sin(var1[4]);
  t37119 = -1.*t37031*t37033;
  t37120 = -1.*t37040*t37042;
  t37121 = t37119 + t37120;
  t17658 = t3419*t16270;
  t27664 = t27078*t27650;
  t36885 = t17658 + t27664;
  t37188 = Cos(var1[3]);
  t37186 = Sin(var1[3]);
  t37035 = t37031*t37033;
  t37043 = t37040*t37042;
  t37062 = t37035 + t37043;
  t37105 = t27078*t3419*t37104;
  t37106 = -1.*t16270*t37104*t27650;
  t37107 = t37105 + t37106;
  t37122 = t27078*t3419*t37121;
  t37123 = -1.*t16270*t37121*t27650;
  t37124 = t37122 + t37123;
  t37190 = -1.*t27078*t3419;
  t37191 = t16270*t27650;
  t37192 = t37190 + t37191;
  t37197 = t3419*t16270*t37104;
  t37198 = t27078*t37104*t27650;
  t37202 = t37197 + t37198;
  t37205 = t163*t37062;
  t37206 = -1.*t37079*t37107;
  t37207 = t37205 + t37206;
  t37213 = t3419*t16270*t37121;
  t37214 = t27078*t37121*t27650;
  t37215 = t37213 + t37214;
  t37220 = t163*t37104;
  t37221 = -1.*t37079*t37124;
  t37222 = t37220 + t37221;
  t37080 = t37062*t37079;
  t37111 = t163*t37107;
  t37115 = t37080 + t37111;
  t37240 = -1.*t27078;
  t37241 = 1. + t37240;
  t37242 = -0.15121*t37241;
  t37246 = -1.*t37031;
  t37248 = 1. + t37246;
  t37249 = -0.28121*t37248;
  t37252 = -1.*t37033;
  t37262 = 1. + t37252;
  t37263 = -0.50321*t37262;
  t37264 = -0.19821*t37033;
  t37268 = t37263 + t37264;
  t37269 = t37031*t37268;
  t37273 = 0.305*t37040*t37042;
  t37275 = t37249 + t37269 + t37273;
  t37283 = t27078*t37275;
  t37284 = t37242 + t37283;
  t37243 = -0.15121*t27078;
  t37244 = 0.15121*t16270;
  t37280 = t16270*t37275;
  t37281 = t37242 + t37243 + t37244 + t37280;
  t37294 = 0.28121*t37040;
  t37298 = t37268*t37040;
  t37300 = -0.305*t37031*t37042;
  t37301 = t37294 + t37298 + t37300;
  t37306 = t3419*t37284;
  t37307 = -1.*t37281*t27650;
  t37308 = t37306 + t37307;
  t37282 = t3419*t37281;
  t37288 = t37284*t27650;
  t37292 = t37282 + t37288;
  t37302 = t37301*t37079;
  t37309 = t163*t37308;
  t37310 = t37302 + t37309;
  t37312 = t163*t37301;
  t37313 = -1.*t37079*t37308;
  t37314 = t37312 + t37313;
  t37118 = t37104*t37079;
  t37125 = t163*t37124;
  t37126 = t37118 + t37125;
  t37293 = -1.*t37192*t37292;
  t37320 = t37202*t37292;
  t37328 = t37192*t37292;
  t37333 = -1.*t37215*t37292;
  t37341 = -1.*t37202*t37292;
  t37347 = t37215*t37292;
  t37378 = -1.*t37301*t37062;
  t37382 = t37301*t37104;
  p_output1[0]=t37126*var2[0] + t163*t36885*var2[1] + t37115*var2[2];
  p_output1[1]=(t37188*t37215 - 1.*t37186*t37222)*var2[0] + (t36885*t37079*t37186 + t37188*t37192)*var2[1] + (t37188*t37202 - 1.*t37186*t37207)*var2[2];
  p_output1[2]=(t37186*t37215 + t37188*t37222)*var2[0] + (-1.*t36885*t37079*t37188 + t37186*t37192)*var2[1] + (t37186*t37202 + t37188*t37207)*var2[2];
  p_output1[3]=(t37115*(t37293 - 1.*t163*t36885*t37310 + t36885*t37079*t37314) + t163*t36885*(t37115*t37310 + t37207*t37314 + t37320))*var2[0] + (t37126*(-1.*t37115*t37310 - 1.*t37207*t37314 + t37341) + t37115*(t37126*t37310 + t37222*t37314 + t37347))*var2[1] + (t37126*(t163*t36885*t37310 - 1.*t36885*t37079*t37314 + t37328) + t163*t36885*(-1.*t37126*t37310 - 1.*t37222*t37314 + t37333))*var2[2];
  p_output1[4]=(t37202*(t37293 - 1.*t36885*t37308) + t37192*(t37062*t37301 + t37107*t37308 + t37320))*var2[0] + (t37215*(-1.*t37107*t37308 + t37341 + t37378) + t37202*(t37124*t37308 + t37347 + t37382))*var2[1] + (t37215*(t36885*t37308 + t37328) + t37192*(-1.*t37104*t37301 - 1.*t37124*t37308 + t37333))*var2[2];
  p_output1[5]=t37062*(t27078*t37281 - 1.*t16270*t37284)*var2[0] + (t37104*(-1.*t16270*t37104*t37281 - 1.*t27078*t37104*t37284 + t37378) + t37062*(t16270*t37121*t37281 + t27078*t37121*t37284 + t37382))*var2[1] + t37104*(-1.*t27078*t37281 + t16270*t37284)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t37062 - 0.15121*t37121)*var2[0] + (-0.15121 + t37104*(-1.*t37104*t37275 + t37378) + t37062*(t37121*t37275 + t37382))*var2[1];
  p_output1[16]=(0.28121*t37042 - 0.305*t37033*t37042 + t37042*t37268)*var2[0] + (0.28121*t37033 + 0.305*Power(t37042,2) + t37033*t37268)*var2[2];
  p_output1[17]=-0.305*var2[2];
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

#include "fRrFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fRrFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
