/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 17:58:56 GMT+02:00
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
  double t5118;
  double t5128;
  double t5125;
  double t5250;
  double t5260;
  double t5245;
  double t5261;
  double t5126;
  double t5267;
  double t5268;
  double t5269;
  double t5129;
  double t5265;
  double t5258;
  double t5262;
  double t5263;
  double t5127;
  double t5236;
  double t5240;
  double t5292;
  double t5290;
  double t5270;
  double t5271;
  double t5272;
  double t5276;
  double t5277;
  double t5278;
  double t5280;
  double t5281;
  double t5282;
  double t5294;
  double t5295;
  double t5297;
  double t5302;
  double t5304;
  double t5306;
  double t5309;
  double t5310;
  double t5312;
  double t5316;
  double t5317;
  double t5318;
  double t5320;
  double t5321;
  double t5322;
  double t5266;
  double t5273;
  double t5274;
  double t5353;
  double t5354;
  double t5367;
  double t5368;
  double t5369;
  double t5373;
  double t5377;
  double t5378;
  double t5379;
  double t5383;
  double t5384;
  double t5385;
  double t5386;
  double t5393;
  double t5394;
  double t5395;
  double t5360;
  double t5365;
  double t5366;
  double t5390;
  double t5391;
  double t5400;
  double t5401;
  double t5402;
  double t5404;
  double t5407;
  double t5408;
  double t5409;
  double t5392;
  double t5396;
  double t5397;
  double t5406;
  double t5410;
  double t5411;
  double t5413;
  double t5414;
  double t5415;
  double t5279;
  double t5283;
  double t5284;
  double t5398;
  double t5419;
  double t5426;
  double t5432;
  double t5441;
  double t5446;
  double t5473;
  double t5478;
  t5118 = Cos(var1[4]);
  t5128 = Cos(var1[12]);
  t5125 = Cos(var1[5]);
  t5250 = Cos(var1[14]);
  t5260 = Sin(var1[13]);
  t5245 = Cos(var1[13]);
  t5261 = Sin(var1[14]);
  t5126 = Sin(var1[12]);
  t5267 = t5250*t5260;
  t5268 = -1.*t5245*t5261;
  t5269 = t5267 + t5268;
  t5129 = Sin(var1[5]);
  t5265 = Sin(var1[4]);
  t5258 = t5245*t5250;
  t5262 = t5260*t5261;
  t5263 = t5258 + t5262;
  t5127 = -1.*t5125*t5126;
  t5236 = -1.*t5128*t5129;
  t5240 = t5127 + t5236;
  t5292 = Cos(var1[3]);
  t5290 = Sin(var1[3]);
  t5270 = t5128*t5125*t5269;
  t5271 = -1.*t5126*t5269*t5129;
  t5272 = t5270 + t5271;
  t5276 = -1.*t5250*t5260;
  t5277 = t5245*t5261;
  t5278 = t5276 + t5277;
  t5280 = t5128*t5125*t5263;
  t5281 = -1.*t5126*t5263*t5129;
  t5282 = t5280 + t5281;
  t5294 = t5128*t5125;
  t5295 = -1.*t5126*t5129;
  t5297 = t5294 + t5295;
  t5302 = t5125*t5126*t5269;
  t5304 = t5128*t5269*t5129;
  t5306 = t5302 + t5304;
  t5309 = t5118*t5263;
  t5310 = -1.*t5265*t5272;
  t5312 = t5309 + t5310;
  t5316 = t5125*t5126*t5263;
  t5317 = t5128*t5263*t5129;
  t5318 = t5316 + t5317;
  t5320 = t5118*t5278;
  t5321 = -1.*t5265*t5282;
  t5322 = t5320 + t5321;
  t5266 = t5263*t5265;
  t5273 = t5118*t5272;
  t5274 = t5266 + t5273;
  t5353 = -1.*t5128;
  t5354 = 1. + t5353;
  t5367 = -1.*t5245;
  t5368 = 1. + t5367;
  t5369 = 0.28121*t5368;
  t5373 = -1.*t5250;
  t5377 = 1. + t5373;
  t5378 = 0.50321*t5377;
  t5379 = 0.19821*t5250;
  t5383 = t5378 + t5379;
  t5384 = t5245*t5383;
  t5385 = -0.305*t5260*t5261;
  t5386 = t5369 + t5384 + t5385;
  t5393 = 0.15121*t5354;
  t5394 = t5128*t5386;
  t5395 = t5393 + t5394;
  t5360 = -0.15121*t5354;
  t5365 = -0.15121*t5128;
  t5366 = -0.15121*t5126;
  t5390 = t5126*t5386;
  t5391 = t5360 + t5365 + t5366 + t5390;
  t5400 = 0.28121*t5260;
  t5401 = -1.*t5383*t5260;
  t5402 = -0.305*t5245*t5261;
  t5404 = t5400 + t5401 + t5402;
  t5407 = t5125*t5395;
  t5408 = -1.*t5391*t5129;
  t5409 = t5407 + t5408;
  t5392 = t5125*t5391;
  t5396 = t5395*t5129;
  t5397 = t5392 + t5396;
  t5406 = t5404*t5265;
  t5410 = t5118*t5409;
  t5411 = t5406 + t5410;
  t5413 = t5118*t5404;
  t5414 = -1.*t5265*t5409;
  t5415 = t5413 + t5414;
  t5279 = t5278*t5265;
  t5283 = t5118*t5282;
  t5284 = t5279 + t5283;
  t5398 = -1.*t5297*t5397;
  t5419 = t5306*t5397;
  t5426 = t5297*t5397;
  t5432 = -1.*t5318*t5397;
  t5441 = -1.*t5306*t5397;
  t5446 = t5318*t5397;
  t5473 = -1.*t5404*t5263;
  t5478 = t5404*t5278;
  p_output1[0]=t5284*var2[0] + t5118*t5240*var2[1] + t5274*var2[2];
  p_output1[1]=(t5292*t5318 - 1.*t5290*t5322)*var2[0] + (t5240*t5265*t5290 + t5292*t5297)*var2[1] + (t5292*t5306 - 1.*t5290*t5312)*var2[2];
  p_output1[2]=(t5290*t5318 + t5292*t5322)*var2[0] + (-1.*t5240*t5265*t5292 + t5290*t5297)*var2[1] + (t5290*t5306 + t5292*t5312)*var2[2];
  p_output1[3]=(t5274*(t5398 - 1.*t5118*t5240*t5411 + t5240*t5265*t5415) + t5118*t5240*(t5274*t5411 + t5312*t5415 + t5419))*var2[0] + (t5284*(-1.*t5274*t5411 - 1.*t5312*t5415 + t5441) + t5274*(t5284*t5411 + t5322*t5415 + t5446))*var2[1] + (t5284*(t5118*t5240*t5411 - 1.*t5240*t5265*t5415 + t5426) + t5118*t5240*(-1.*t5284*t5411 - 1.*t5322*t5415 + t5432))*var2[2];
  p_output1[4]=(t5306*(t5398 - 1.*t5240*t5409) + t5297*(t5263*t5404 + t5272*t5409 + t5419))*var2[0] + (t5318*(-1.*t5272*t5409 + t5441 + t5473) + t5306*(t5282*t5409 + t5446 + t5478))*var2[1] + (t5318*(t5240*t5409 + t5426) + t5297*(-1.*t5278*t5404 - 1.*t5282*t5409 + t5432))*var2[2];
  p_output1[5]=t5263*(-1.*t5128*t5391 + t5126*t5395)*var2[0] + (t5278*(-1.*t5126*t5269*t5391 - 1.*t5128*t5269*t5395 + t5473) + t5263*(t5126*t5263*t5391 + t5128*t5263*t5395 + t5478))*var2[1] + t5278*(t5128*t5391 - 1.*t5126*t5395)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t5278*(-1.*t5269*t5386 + t5473) + t5263*(t5263*t5386 + t5478))*var2[1] + (-0.15121*t5269 - 0.15121*t5278)*var2[2];
  p_output1[13]=(0.28121*t5261 - 0.305*t5250*t5261 - 1.*t5261*t5383)*var2[0] + (0.28121*t5250 + 0.305*Power(t5261,2) - 1.*t5250*t5383)*var2[2];
  p_output1[14]=-0.305*var2[2];
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

#include "fFrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
