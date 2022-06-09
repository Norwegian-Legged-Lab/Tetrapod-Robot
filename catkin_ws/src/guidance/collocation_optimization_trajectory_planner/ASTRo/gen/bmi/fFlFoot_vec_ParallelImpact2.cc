/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:00:26 GMT+02:00
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
  double t3884;
  double t4190;
  double t3996;
  double t9115;
  double t9117;
  double t9114;
  double t9174;
  double t4053;
  double t4194;
  double t9185;
  double t9189;
  double t9190;
  double t9113;
  double t9116;
  double t9178;
  double t9179;
  double t4108;
  double t4336;
  double t4411;
  double t9210;
  double t9208;
  double t9191;
  double t9192;
  double t9193;
  double t9197;
  double t9198;
  double t9199;
  double t9201;
  double t9202;
  double t9203;
  double t9211;
  double t9212;
  double t9213;
  double t9217;
  double t9218;
  double t9220;
  double t9222;
  double t9223;
  double t9225;
  double t9229;
  double t9231;
  double t9232;
  double t9235;
  double t9236;
  double t9237;
  double t9180;
  double t9194;
  double t9195;
  double t9255;
  double t9256;
  double t9257;
  double t9258;
  double t9259;
  double t9260;
  double t9262;
  double t9263;
  double t9264;
  double t9265;
  double t9267;
  double t9268;
  double t9269;
  double t9270;
  double t9271;
  double t9272;
  double t9274;
  double t9275;
  double t9276;
  double t9277;
  double t9281;
  double t9282;
  double t9283;
  double t9284;
  double t9286;
  double t9287;
  double t9288;
  double t9273;
  double t9278;
  double t9279;
  double t9285;
  double t9289;
  double t9290;
  double t9292;
  double t9293;
  double t9294;
  double t9200;
  double t9204;
  double t9205;
  double t9280;
  double t9298;
  double t9305;
  double t9310;
  double t9317;
  double t9322;
  double t9348;
  double t9352;
  t3884 = Cos(var1[4]);
  t4190 = Cos(var1[5]);
  t3996 = Cos(var1[6]);
  t9115 = Cos(var1[8]);
  t9117 = Sin(var1[7]);
  t9114 = Cos(var1[7]);
  t9174 = Sin(var1[8]);
  t4053 = Sin(var1[5]);
  t4194 = Sin(var1[6]);
  t9185 = t9115*t9117;
  t9189 = -1.*t9114*t9174;
  t9190 = t9185 + t9189;
  t9113 = Sin(var1[4]);
  t9116 = t9114*t9115;
  t9178 = t9117*t9174;
  t9179 = t9116 + t9178;
  t4108 = -1.*t3996*t4053;
  t4336 = -1.*t4190*t4194;
  t4411 = t4108 + t4336;
  t9210 = Cos(var1[3]);
  t9208 = Sin(var1[3]);
  t9191 = t4190*t3996*t9190;
  t9192 = -1.*t4053*t4194*t9190;
  t9193 = t9191 + t9192;
  t9197 = -1.*t9115*t9117;
  t9198 = t9114*t9174;
  t9199 = t9197 + t9198;
  t9201 = t4190*t3996*t9179;
  t9202 = -1.*t4053*t4194*t9179;
  t9203 = t9201 + t9202;
  t9211 = t4190*t3996;
  t9212 = -1.*t4053*t4194;
  t9213 = t9211 + t9212;
  t9217 = t3996*t4053*t9190;
  t9218 = t4190*t4194*t9190;
  t9220 = t9217 + t9218;
  t9222 = t3884*t9179;
  t9223 = -1.*t9113*t9193;
  t9225 = t9222 + t9223;
  t9229 = t3996*t4053*t9179;
  t9231 = t4190*t4194*t9179;
  t9232 = t9229 + t9231;
  t9235 = t3884*t9199;
  t9236 = -1.*t9113*t9203;
  t9237 = t9235 + t9236;
  t9180 = t9113*t9179;
  t9194 = t3884*t9193;
  t9195 = t9180 + t9194;
  t9255 = -1.*t3996;
  t9256 = 1. + t9255;
  t9257 = 0.15121*t9256;
  t9258 = -1.*t9114;
  t9259 = 1. + t9258;
  t9260 = 0.28121*t9259;
  t9262 = -1.*t9115;
  t9263 = 1. + t9262;
  t9264 = 0.50321*t9263;
  t9265 = 0.19821*t9115;
  t9267 = t9264 + t9265;
  t9268 = t9114*t9267;
  t9269 = -0.305*t9117*t9174;
  t9270 = t9260 + t9268 + t9269;
  t9271 = t3996*t9270;
  t9272 = t9257 + t9271;
  t9274 = 0.15121*t3996;
  t9275 = -0.15121*t4194;
  t9276 = t4194*t9270;
  t9277 = t9257 + t9274 + t9275 + t9276;
  t9281 = 0.28121*t9117;
  t9282 = -1.*t9267*t9117;
  t9283 = -0.305*t9114*t9174;
  t9284 = t9281 + t9282 + t9283;
  t9286 = t4190*t9272;
  t9287 = -1.*t4053*t9277;
  t9288 = t9286 + t9287;
  t9273 = t4053*t9272;
  t9278 = t4190*t9277;
  t9279 = t9273 + t9278;
  t9285 = t9113*t9284;
  t9289 = t3884*t9288;
  t9290 = t9285 + t9289;
  t9292 = t3884*t9284;
  t9293 = -1.*t9113*t9288;
  t9294 = t9292 + t9293;
  t9200 = t9113*t9199;
  t9204 = t3884*t9203;
  t9205 = t9200 + t9204;
  t9280 = -1.*t9213*t9279;
  t9298 = t9220*t9279;
  t9305 = t9213*t9279;
  t9310 = -1.*t9232*t9279;
  t9317 = -1.*t9220*t9279;
  t9322 = t9232*t9279;
  t9348 = -1.*t9284*t9179;
  t9352 = t9284*t9199;
  p_output1[0]=t9205*var2[0] + t3884*t4411*var2[1] + t9195*var2[2];
  p_output1[1]=(t9210*t9232 - 1.*t9208*t9237)*var2[0] + (t4411*t9113*t9208 + t9210*t9213)*var2[1] + (t9210*t9220 - 1.*t9208*t9225)*var2[2];
  p_output1[2]=(t9208*t9232 + t9210*t9237)*var2[0] + (-1.*t4411*t9113*t9210 + t9208*t9213)*var2[1] + (t9208*t9220 + t9210*t9225)*var2[2];
  p_output1[3]=(t9195*(t9280 - 1.*t3884*t4411*t9290 + t4411*t9113*t9294) + t3884*t4411*(t9195*t9290 + t9225*t9294 + t9298))*var2[0] + (t9205*(-1.*t9195*t9290 - 1.*t9225*t9294 + t9317) + t9195*(t9205*t9290 + t9237*t9294 + t9322))*var2[1] + (t9205*(t3884*t4411*t9290 - 1.*t4411*t9113*t9294 + t9305) + t3884*t4411*(-1.*t9205*t9290 - 1.*t9237*t9294 + t9310))*var2[2];
  p_output1[4]=(t9220*(t9280 - 1.*t4411*t9288) + t9213*(t9179*t9284 + t9193*t9288 + t9298))*var2[0] + (t9232*(-1.*t9193*t9288 + t9317 + t9348) + t9220*(t9203*t9288 + t9322 + t9352))*var2[1] + (t9232*(t4411*t9288 + t9305) + t9213*(-1.*t9199*t9284 - 1.*t9203*t9288 + t9310))*var2[2];
  p_output1[5]=t9179*(t4194*t9272 - 1.*t3996*t9277)*var2[0] + (t9199*(-1.*t3996*t9190*t9272 - 1.*t4194*t9190*t9277 + t9348) + t9179*(t3996*t9179*t9272 + t4194*t9179*t9277 + t9352))*var2[1] + t9199*(-1.*t4194*t9272 + t3996*t9277)*var2[2];
  p_output1[6]=(-0.15121 + t9199*(-1.*t9190*t9270 + t9348) + t9179*(t9179*t9270 + t9352))*var2[1] + (0.15121*t9190 + 0.15121*t9199)*var2[2];
  p_output1[7]=(0.28121*t9174 - 0.305*t9115*t9174 - 1.*t9174*t9267)*var2[0] + (0.28121*t9115 + 0.305*Power(t9174,2) - 1.*t9115*t9267)*var2[2];
  p_output1[8]=-0.305*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
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

#include "fFlFoot_vec_ParallelImpact2.hh"

namespace SymFunction
{

void fFlFoot_vec_ParallelImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
