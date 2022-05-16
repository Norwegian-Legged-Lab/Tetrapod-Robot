/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:53:01 GMT+02:00
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
  double t40949;
  double t55128;
  double t45259;
  double t55195;
  double t55197;
  double t55191;
  double t55202;
  double t55122;
  double t55210;
  double t55211;
  double t55212;
  double t55129;
  double t55208;
  double t55196;
  double t55206;
  double t55207;
  double t55127;
  double t55130;
  double t55131;
  double t55232;
  double t55230;
  double t55213;
  double t55214;
  double t55215;
  double t55219;
  double t55220;
  double t55221;
  double t55223;
  double t55224;
  double t55225;
  double t55233;
  double t55235;
  double t55236;
  double t55241;
  double t55243;
  double t55244;
  double t55247;
  double t55248;
  double t55250;
  double t55255;
  double t55256;
  double t55257;
  double t55259;
  double t55260;
  double t55261;
  double t55209;
  double t55216;
  double t55217;
  double t55279;
  double t55281;
  double t55286;
  double t55287;
  double t55288;
  double t55289;
  double t55290;
  double t55291;
  double t55292;
  double t55293;
  double t55294;
  double t55295;
  double t55296;
  double t55300;
  double t55301;
  double t55302;
  double t55282;
  double t55283;
  double t55284;
  double t55297;
  double t55298;
  double t55306;
  double t55307;
  double t55308;
  double t55309;
  double t55311;
  double t55312;
  double t55313;
  double t55299;
  double t55303;
  double t55304;
  double t55310;
  double t55314;
  double t55315;
  double t55317;
  double t55318;
  double t55319;
  double t55222;
  double t55226;
  double t55227;
  double t55305;
  double t55323;
  double t55330;
  double t55335;
  double t55342;
  double t55347;
  double t55374;
  double t55378;
  t40949 = Cos(var1[4]);
  t55128 = Cos(var1[12]);
  t45259 = Cos(var1[5]);
  t55195 = Cos(var1[14]);
  t55197 = Sin(var1[13]);
  t55191 = Cos(var1[13]);
  t55202 = Sin(var1[14]);
  t55122 = Sin(var1[12]);
  t55210 = t55195*t55197;
  t55211 = -1.*t55191*t55202;
  t55212 = t55210 + t55211;
  t55129 = Sin(var1[5]);
  t55208 = Sin(var1[4]);
  t55196 = t55191*t55195;
  t55206 = t55197*t55202;
  t55207 = t55196 + t55206;
  t55127 = -1.*t45259*t55122;
  t55130 = -1.*t55128*t55129;
  t55131 = t55127 + t55130;
  t55232 = Cos(var1[3]);
  t55230 = Sin(var1[3]);
  t55213 = t55128*t45259*t55212;
  t55214 = -1.*t55122*t55212*t55129;
  t55215 = t55213 + t55214;
  t55219 = -1.*t55195*t55197;
  t55220 = t55191*t55202;
  t55221 = t55219 + t55220;
  t55223 = t55128*t45259*t55207;
  t55224 = -1.*t55122*t55207*t55129;
  t55225 = t55223 + t55224;
  t55233 = t55128*t45259;
  t55235 = -1.*t55122*t55129;
  t55236 = t55233 + t55235;
  t55241 = t45259*t55122*t55212;
  t55243 = t55128*t55212*t55129;
  t55244 = t55241 + t55243;
  t55247 = t40949*t55207;
  t55248 = -1.*t55208*t55215;
  t55250 = t55247 + t55248;
  t55255 = t45259*t55122*t55207;
  t55256 = t55128*t55207*t55129;
  t55257 = t55255 + t55256;
  t55259 = t40949*t55221;
  t55260 = -1.*t55208*t55225;
  t55261 = t55259 + t55260;
  t55209 = t55207*t55208;
  t55216 = t40949*t55215;
  t55217 = t55209 + t55216;
  t55279 = -1.*t55128;
  t55281 = 1. + t55279;
  t55286 = -1.*t55191;
  t55287 = 1. + t55286;
  t55288 = 0.28121*t55287;
  t55289 = -1.*t55195;
  t55290 = 1. + t55289;
  t55291 = 0.50321*t55290;
  t55292 = 0.23321*t55195;
  t55293 = t55291 + t55292;
  t55294 = t55191*t55293;
  t55295 = -0.27*t55197*t55202;
  t55296 = t55288 + t55294 + t55295;
  t55300 = 0.15121*t55281;
  t55301 = t55128*t55296;
  t55302 = t55300 + t55301;
  t55282 = -0.15121*t55281;
  t55283 = -0.15121*t55128;
  t55284 = -0.15121*t55122;
  t55297 = t55122*t55296;
  t55298 = t55282 + t55283 + t55284 + t55297;
  t55306 = 0.28121*t55197;
  t55307 = -1.*t55293*t55197;
  t55308 = -0.27*t55191*t55202;
  t55309 = t55306 + t55307 + t55308;
  t55311 = t45259*t55302;
  t55312 = -1.*t55298*t55129;
  t55313 = t55311 + t55312;
  t55299 = t45259*t55298;
  t55303 = t55302*t55129;
  t55304 = t55299 + t55303;
  t55310 = t55309*t55208;
  t55314 = t40949*t55313;
  t55315 = t55310 + t55314;
  t55317 = t40949*t55309;
  t55318 = -1.*t55208*t55313;
  t55319 = t55317 + t55318;
  t55222 = t55221*t55208;
  t55226 = t40949*t55225;
  t55227 = t55222 + t55226;
  t55305 = -1.*t55236*t55304;
  t55323 = t55244*t55304;
  t55330 = t55236*t55304;
  t55335 = -1.*t55257*t55304;
  t55342 = -1.*t55244*t55304;
  t55347 = t55257*t55304;
  t55374 = -1.*t55309*t55207;
  t55378 = t55309*t55221;
  p_output1[0]=t55227*var2[0] + t40949*t55131*var2[1] + t55217*var2[2];
  p_output1[1]=(t55232*t55257 - 1.*t55230*t55261)*var2[0] + (t55131*t55208*t55230 + t55232*t55236)*var2[1] + (t55232*t55244 - 1.*t55230*t55250)*var2[2];
  p_output1[2]=(t55230*t55257 + t55232*t55261)*var2[0] + (-1.*t55131*t55208*t55232 + t55230*t55236)*var2[1] + (t55230*t55244 + t55232*t55250)*var2[2];
  p_output1[3]=(t55217*(t55305 - 1.*t40949*t55131*t55315 + t55131*t55208*t55319) + t40949*t55131*(t55217*t55315 + t55250*t55319 + t55323))*var2[0] + (t55227*(-1.*t55217*t55315 - 1.*t55250*t55319 + t55342) + t55217*(t55227*t55315 + t55261*t55319 + t55347))*var2[1] + (t55227*(t40949*t55131*t55315 - 1.*t55131*t55208*t55319 + t55330) + t40949*t55131*(-1.*t55227*t55315 - 1.*t55261*t55319 + t55335))*var2[2];
  p_output1[4]=(t55244*(t55305 - 1.*t55131*t55313) + t55236*(t55207*t55309 + t55215*t55313 + t55323))*var2[0] + (t55257*(-1.*t55215*t55313 + t55342 + t55374) + t55244*(t55225*t55313 + t55347 + t55378))*var2[1] + (t55257*(t55131*t55313 + t55330) + t55236*(-1.*t55221*t55309 - 1.*t55225*t55313 + t55335))*var2[2];
  p_output1[5]=t55207*(-1.*t55128*t55298 + t55122*t55302)*var2[0] + (t55221*(-1.*t55122*t55212*t55298 - 1.*t55128*t55212*t55302 + t55374) + t55207*(t55122*t55207*t55298 + t55128*t55207*t55302 + t55378))*var2[1] + t55221*(t55128*t55298 - 1.*t55122*t55302)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t55221*(-1.*t55212*t55296 + t55374) + t55207*(t55207*t55296 + t55378))*var2[1] + (-0.15121*t55212 - 0.15121*t55221)*var2[2];
  p_output1[13]=(0.28121*t55202 - 0.27*t55195*t55202 - 1.*t55202*t55293)*var2[0] + (0.28121*t55195 + 0.27*Power(t55202,2) - 1.*t55195*t55293)*var2[2];
  p_output1[14]=-0.27*var2[2];
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

#include "fFrFoot_vec_DiagonalImpact2.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
