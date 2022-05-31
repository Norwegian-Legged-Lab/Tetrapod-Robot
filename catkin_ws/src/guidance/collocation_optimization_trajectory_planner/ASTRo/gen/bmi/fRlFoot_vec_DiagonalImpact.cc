/*
 * Automatically Generated from Mathematica.
 * Fri 27 May 2022 16:03:43 GMT+02:00
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
  double t6221;
  double t6259;
  double t6246;
  double t6279;
  double t6284;
  double t6278;
  double t6288;
  double t6256;
  double t6293;
  double t6294;
  double t6295;
  double t6265;
  double t6291;
  double t6304;
  double t6305;
  double t6342;
  double t6257;
  double t6267;
  double t6268;
  double t6357;
  double t6354;
  double t6280;
  double t6289;
  double t6290;
  double t6296;
  double t6297;
  double t6298;
  double t6346;
  double t6347;
  double t6348;
  double t6358;
  double t6359;
  double t6360;
  double t6365;
  double t6366;
  double t6367;
  double t6370;
  double t6371;
  double t6372;
  double t6377;
  double t6378;
  double t6379;
  double t6381;
  double t6382;
  double t6383;
  double t6292;
  double t6299;
  double t6300;
  double t6402;
  double t6404;
  double t6408;
  double t6409;
  double t6410;
  double t6411;
  double t6412;
  double t6413;
  double t6414;
  double t6415;
  double t6416;
  double t6417;
  double t6418;
  double t6422;
  double t6423;
  double t6424;
  double t6405;
  double t6406;
  double t6407;
  double t6419;
  double t6420;
  double t6428;
  double t6429;
  double t6430;
  double t6431;
  double t6433;
  double t6434;
  double t6435;
  double t6421;
  double t6425;
  double t6426;
  double t6432;
  double t6436;
  double t6437;
  double t6439;
  double t6440;
  double t6441;
  double t6302;
  double t6350;
  double t6351;
  double t6427;
  double t6445;
  double t6452;
  double t6457;
  double t6464;
  double t6469;
  double t6495;
  double t6499;
  t6221 = Cos(var1[4]);
  t6259 = Cos(var1[9]);
  t6246 = Cos(var1[5]);
  t6279 = Cos(var1[11]);
  t6284 = Sin(var1[10]);
  t6278 = Cos(var1[10]);
  t6288 = Sin(var1[11]);
  t6256 = Sin(var1[9]);
  t6293 = -1.*t6279*t6284;
  t6294 = t6278*t6288;
  t6295 = t6293 + t6294;
  t6265 = Sin(var1[5]);
  t6291 = Sin(var1[4]);
  t6304 = -1.*t6278*t6279;
  t6305 = -1.*t6284*t6288;
  t6342 = t6304 + t6305;
  t6257 = t6246*t6256;
  t6267 = t6259*t6265;
  t6268 = t6257 + t6267;
  t6357 = Cos(var1[3]);
  t6354 = Sin(var1[3]);
  t6280 = t6278*t6279;
  t6289 = t6284*t6288;
  t6290 = t6280 + t6289;
  t6296 = t6259*t6246*t6295;
  t6297 = -1.*t6256*t6295*t6265;
  t6298 = t6296 + t6297;
  t6346 = t6259*t6246*t6342;
  t6347 = -1.*t6256*t6342*t6265;
  t6348 = t6346 + t6347;
  t6358 = -1.*t6259*t6246;
  t6359 = t6256*t6265;
  t6360 = t6358 + t6359;
  t6365 = t6246*t6256*t6295;
  t6366 = t6259*t6295*t6265;
  t6367 = t6365 + t6366;
  t6370 = t6221*t6290;
  t6371 = -1.*t6291*t6298;
  t6372 = t6370 + t6371;
  t6377 = t6246*t6256*t6342;
  t6378 = t6259*t6342*t6265;
  t6379 = t6377 + t6378;
  t6381 = t6221*t6295;
  t6382 = -1.*t6291*t6348;
  t6383 = t6381 + t6382;
  t6292 = t6290*t6291;
  t6299 = t6221*t6298;
  t6300 = t6292 + t6299;
  t6402 = -1.*t6259;
  t6404 = 1. + t6402;
  t6408 = -1.*t6278;
  t6409 = 1. + t6408;
  t6410 = -0.28121*t6409;
  t6411 = -1.*t6279;
  t6412 = 1. + t6411;
  t6413 = -0.50321*t6412;
  t6414 = -0.19821*t6279;
  t6415 = t6413 + t6414;
  t6416 = t6278*t6415;
  t6417 = 0.305*t6284*t6288;
  t6418 = t6410 + t6416 + t6417;
  t6422 = -0.15121*t6404;
  t6423 = t6259*t6418;
  t6424 = t6422 + t6423;
  t6405 = 0.15121*t6404;
  t6406 = 0.15121*t6259;
  t6407 = 0.15121*t6256;
  t6419 = t6256*t6418;
  t6420 = t6405 + t6406 + t6407 + t6419;
  t6428 = 0.28121*t6284;
  t6429 = t6415*t6284;
  t6430 = -0.305*t6278*t6288;
  t6431 = t6428 + t6429 + t6430;
  t6433 = t6246*t6424;
  t6434 = -1.*t6420*t6265;
  t6435 = t6433 + t6434;
  t6421 = t6246*t6420;
  t6425 = t6424*t6265;
  t6426 = t6421 + t6425;
  t6432 = t6431*t6291;
  t6436 = t6221*t6435;
  t6437 = t6432 + t6436;
  t6439 = t6221*t6431;
  t6440 = -1.*t6291*t6435;
  t6441 = t6439 + t6440;
  t6302 = t6295*t6291;
  t6350 = t6221*t6348;
  t6351 = t6302 + t6350;
  t6427 = -1.*t6360*t6426;
  t6445 = t6367*t6426;
  t6452 = t6360*t6426;
  t6457 = -1.*t6379*t6426;
  t6464 = -1.*t6367*t6426;
  t6469 = t6379*t6426;
  t6495 = -1.*t6431*t6290;
  t6499 = t6431*t6295;
  p_output1[0]=t6351*var2[0] + t6221*t6268*var2[1] + t6300*var2[2];
  p_output1[1]=(t6357*t6379 - 1.*t6354*t6383)*var2[0] + (t6268*t6291*t6354 + t6357*t6360)*var2[1] + (t6357*t6367 - 1.*t6354*t6372)*var2[2];
  p_output1[2]=(t6354*t6379 + t6357*t6383)*var2[0] + (-1.*t6268*t6291*t6357 + t6354*t6360)*var2[1] + (t6354*t6367 + t6357*t6372)*var2[2];
  p_output1[3]=(t6300*(t6427 - 1.*t6221*t6268*t6437 + t6268*t6291*t6441) + t6221*t6268*(t6300*t6437 + t6372*t6441 + t6445))*var2[0] + (t6351*(-1.*t6300*t6437 - 1.*t6372*t6441 + t6464) + t6300*(t6351*t6437 + t6383*t6441 + t6469))*var2[1] + (t6351*(t6221*t6268*t6437 - 1.*t6268*t6291*t6441 + t6452) + t6221*t6268*(-1.*t6351*t6437 - 1.*t6383*t6441 + t6457))*var2[2];
  p_output1[4]=(t6367*(t6427 - 1.*t6268*t6435) + t6360*(t6290*t6431 + t6298*t6435 + t6445))*var2[0] + (t6379*(-1.*t6298*t6435 + t6464 + t6495) + t6367*(t6348*t6435 + t6469 + t6499))*var2[1] + (t6379*(t6268*t6435 + t6452) + t6360*(-1.*t6295*t6431 - 1.*t6348*t6435 + t6457))*var2[2];
  p_output1[5]=t6290*(t6259*t6420 - 1.*t6256*t6424)*var2[0] + (t6295*(-1.*t6256*t6295*t6420 - 1.*t6259*t6295*t6424 + t6495) + t6290*(t6256*t6342*t6420 + t6259*t6342*t6424 + t6499))*var2[1] + t6295*(-1.*t6259*t6420 + t6256*t6424)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t6290 + 0.15121*t6342)*var2[0] + (-0.15121 + t6295*(-1.*t6295*t6418 + t6495) + t6290*(t6342*t6418 + t6499))*var2[1];
  p_output1[10]=(0.28121*t6288 - 0.305*t6279*t6288 + t6288*t6415)*var2[0] + (0.28121*t6279 + 0.305*Power(t6288,2) + t6279*t6415)*var2[2];
  p_output1[11]=-0.305*var2[2];
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

#include "fRlFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
