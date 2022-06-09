/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:22 GMT+02:00
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
  double t2832;
  double t18202;
  double t5194;
  double t18278;
  double t18284;
  double t18277;
  double t18292;
  double t15303;
  double t18203;
  double t18296;
  double t18304;
  double t18308;
  double t18270;
  double t18279;
  double t18293;
  double t18294;
  double t18197;
  double t18204;
  double t18205;
  double t18336;
  double t18334;
  double t18309;
  double t18310;
  double t18311;
  double t18316;
  double t18318;
  double t18321;
  double t18324;
  double t18325;
  double t18326;
  double t18337;
  double t18338;
  double t18339;
  double t18346;
  double t18348;
  double t18349;
  double t18351;
  double t18352;
  double t18354;
  double t18360;
  double t18361;
  double t18362;
  double t18364;
  double t18365;
  double t18366;
  double t18295;
  double t18312;
  double t18314;
  double t18384;
  double t18386;
  double t18387;
  double t18388;
  double t18390;
  double t18392;
  double t18393;
  double t18394;
  double t18395;
  double t18396;
  double t18397;
  double t18398;
  double t18399;
  double t18400;
  double t18401;
  double t18402;
  double t18406;
  double t18407;
  double t18410;
  double t18411;
  double t18415;
  double t18416;
  double t18417;
  double t18418;
  double t18420;
  double t18421;
  double t18422;
  double t18403;
  double t18412;
  double t18413;
  double t18419;
  double t18423;
  double t18424;
  double t18426;
  double t18427;
  double t18428;
  double t18322;
  double t18328;
  double t18330;
  double t18414;
  double t18433;
  double t18441;
  double t18447;
  double t18454;
  double t18459;
  double t18486;
  double t18491;
  t2832 = Cos(var1[4]);
  t18202 = Cos(var1[5]);
  t5194 = Cos(var1[6]);
  t18278 = Cos(var1[8]);
  t18284 = Sin(var1[7]);
  t18277 = Cos(var1[7]);
  t18292 = Sin(var1[8]);
  t15303 = Sin(var1[5]);
  t18203 = Sin(var1[6]);
  t18296 = t18278*t18284;
  t18304 = -1.*t18277*t18292;
  t18308 = t18296 + t18304;
  t18270 = Sin(var1[4]);
  t18279 = t18277*t18278;
  t18293 = t18284*t18292;
  t18294 = t18279 + t18293;
  t18197 = -1.*t5194*t15303;
  t18204 = -1.*t18202*t18203;
  t18205 = t18197 + t18204;
  t18336 = Cos(var1[3]);
  t18334 = Sin(var1[3]);
  t18309 = t18202*t5194*t18308;
  t18310 = -1.*t15303*t18203*t18308;
  t18311 = t18309 + t18310;
  t18316 = -1.*t18278*t18284;
  t18318 = t18277*t18292;
  t18321 = t18316 + t18318;
  t18324 = t18202*t5194*t18294;
  t18325 = -1.*t15303*t18203*t18294;
  t18326 = t18324 + t18325;
  t18337 = t18202*t5194;
  t18338 = -1.*t15303*t18203;
  t18339 = t18337 + t18338;
  t18346 = t5194*t15303*t18308;
  t18348 = t18202*t18203*t18308;
  t18349 = t18346 + t18348;
  t18351 = t2832*t18294;
  t18352 = -1.*t18270*t18311;
  t18354 = t18351 + t18352;
  t18360 = t5194*t15303*t18294;
  t18361 = t18202*t18203*t18294;
  t18362 = t18360 + t18361;
  t18364 = t2832*t18321;
  t18365 = -1.*t18270*t18326;
  t18366 = t18364 + t18365;
  t18295 = t18270*t18294;
  t18312 = t2832*t18311;
  t18314 = t18295 + t18312;
  t18384 = -1.*t5194;
  t18386 = 1. + t18384;
  t18387 = 0.15121*t18386;
  t18388 = -1.*t18277;
  t18390 = 1. + t18388;
  t18392 = 0.28121*t18390;
  t18393 = -1.*t18278;
  t18394 = 1. + t18393;
  t18395 = 0.50321*t18394;
  t18396 = 0.19821*t18278;
  t18397 = t18395 + t18396;
  t18398 = t18277*t18397;
  t18399 = -0.305*t18284*t18292;
  t18400 = t18392 + t18398 + t18399;
  t18401 = t5194*t18400;
  t18402 = t18387 + t18401;
  t18406 = 0.15121*t5194;
  t18407 = -0.15121*t18203;
  t18410 = t18203*t18400;
  t18411 = t18387 + t18406 + t18407 + t18410;
  t18415 = 0.28121*t18284;
  t18416 = -1.*t18397*t18284;
  t18417 = -0.305*t18277*t18292;
  t18418 = t18415 + t18416 + t18417;
  t18420 = t18202*t18402;
  t18421 = -1.*t15303*t18411;
  t18422 = t18420 + t18421;
  t18403 = t15303*t18402;
  t18412 = t18202*t18411;
  t18413 = t18403 + t18412;
  t18419 = t18270*t18418;
  t18423 = t2832*t18422;
  t18424 = t18419 + t18423;
  t18426 = t2832*t18418;
  t18427 = -1.*t18270*t18422;
  t18428 = t18426 + t18427;
  t18322 = t18270*t18321;
  t18328 = t2832*t18326;
  t18330 = t18322 + t18328;
  t18414 = -1.*t18339*t18413;
  t18433 = t18349*t18413;
  t18441 = t18339*t18413;
  t18447 = -1.*t18362*t18413;
  t18454 = -1.*t18349*t18413;
  t18459 = t18362*t18413;
  t18486 = -1.*t18418*t18294;
  t18491 = t18418*t18321;
  p_output1[0]=t18330*var2[0] + t18205*t2832*var2[1] + t18314*var2[2];
  p_output1[1]=(t18336*t18362 - 1.*t18334*t18366)*var2[0] + (t18205*t18270*t18334 + t18336*t18339)*var2[1] + (t18336*t18349 - 1.*t18334*t18354)*var2[2];
  p_output1[2]=(t18334*t18362 + t18336*t18366)*var2[0] + (-1.*t18205*t18270*t18336 + t18334*t18339)*var2[1] + (t18334*t18349 + t18336*t18354)*var2[2];
  p_output1[3]=(t18205*(t18314*t18424 + t18354*t18428 + t18433)*t2832 + t18314*(t18414 + t18205*t18270*t18428 - 1.*t18205*t18424*t2832))*var2[0] + (t18330*(-1.*t18314*t18424 - 1.*t18354*t18428 + t18454) + t18314*(t18330*t18424 + t18366*t18428 + t18459))*var2[1] + (t18205*(-1.*t18330*t18424 - 1.*t18366*t18428 + t18447)*t2832 + t18330*(-1.*t18205*t18270*t18428 + t18441 + t18205*t18424*t2832))*var2[2];
  p_output1[4]=(t18349*(t18414 - 1.*t18205*t18422) + t18339*(t18294*t18418 + t18311*t18422 + t18433))*var2[0] + (t18362*(-1.*t18311*t18422 + t18454 + t18486) + t18349*(t18326*t18422 + t18459 + t18491))*var2[1] + (t18362*(t18205*t18422 + t18441) + t18339*(-1.*t18321*t18418 - 1.*t18326*t18422 + t18447))*var2[2];
  p_output1[5]=t18294*(t18203*t18402 - 1.*t18411*t5194)*var2[0] + (t18294*(t18203*t18294*t18411 + t18491 + t18294*t18402*t5194) + t18321*(-1.*t18203*t18308*t18411 + t18486 - 1.*t18308*t18402*t5194))*var2[1] + t18321*(-1.*t18203*t18402 + t18411*t5194)*var2[2];
  p_output1[6]=(-0.15121 + t18321*(-1.*t18308*t18400 + t18486) + t18294*(t18294*t18400 + t18491))*var2[1] + (0.15121*t18308 + 0.15121*t18321)*var2[2];
  p_output1[7]=(0.28121*t18292 - 0.305*t18278*t18292 - 1.*t18292*t18397)*var2[0] + (0.28121*t18278 + 0.305*Power(t18292,2) - 1.*t18278*t18397)*var2[2];
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

#include "fFlFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fFlFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
