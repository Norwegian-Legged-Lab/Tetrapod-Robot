/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 13:05:02 GMT+02:00
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
  double t33020;
  double t57274;
  double t57241;
  double t57348;
  double t57355;
  double t57347;
  double t57359;
  double t57266;
  double t57365;
  double t57366;
  double t57367;
  double t57275;
  double t57363;
  double t57349;
  double t57360;
  double t57362;
  double t57273;
  double t57276;
  double t57277;
  double t57390;
  double t57388;
  double t57369;
  double t57370;
  double t57371;
  double t57376;
  double t57377;
  double t57378;
  double t57380;
  double t57381;
  double t57383;
  double t57391;
  double t57393;
  double t57395;
  double t57400;
  double t57401;
  double t57403;
  double t57405;
  double t57407;
  double t57408;
  double t57416;
  double t57417;
  double t57418;
  double t57420;
  double t57422;
  double t57423;
  double t57364;
  double t57373;
  double t57374;
  double t57447;
  double t57448;
  double t57454;
  double t57455;
  double t57456;
  double t57457;
  double t57458;
  double t57459;
  double t57460;
  double t57461;
  double t57462;
  double t57463;
  double t57465;
  double t57469;
  double t57470;
  double t57471;
  double t57449;
  double t57450;
  double t57453;
  double t57466;
  double t57467;
  double t57477;
  double t57478;
  double t57480;
  double t57481;
  double t57483;
  double t57484;
  double t57485;
  double t57468;
  double t57473;
  double t57474;
  double t57482;
  double t57486;
  double t57487;
  double t57489;
  double t57490;
  double t57492;
  double t57379;
  double t57384;
  double t57385;
  double t57475;
  double t57497;
  double t57505;
  double t57512;
  double t57520;
  double t57527;
  double t57559;
  double t57564;
  t33020 = Cos(var1[4]);
  t57274 = Cos(var1[12]);
  t57241 = Cos(var1[5]);
  t57348 = Cos(var1[14]);
  t57355 = Sin(var1[13]);
  t57347 = Cos(var1[13]);
  t57359 = Sin(var1[14]);
  t57266 = Sin(var1[12]);
  t57365 = t57348*t57355;
  t57366 = -1.*t57347*t57359;
  t57367 = t57365 + t57366;
  t57275 = Sin(var1[5]);
  t57363 = Sin(var1[4]);
  t57349 = t57347*t57348;
  t57360 = t57355*t57359;
  t57362 = t57349 + t57360;
  t57273 = -1.*t57241*t57266;
  t57276 = -1.*t57274*t57275;
  t57277 = t57273 + t57276;
  t57390 = Cos(var1[3]);
  t57388 = Sin(var1[3]);
  t57369 = t57274*t57241*t57367;
  t57370 = -1.*t57266*t57367*t57275;
  t57371 = t57369 + t57370;
  t57376 = -1.*t57348*t57355;
  t57377 = t57347*t57359;
  t57378 = t57376 + t57377;
  t57380 = t57274*t57241*t57362;
  t57381 = -1.*t57266*t57362*t57275;
  t57383 = t57380 + t57381;
  t57391 = t57274*t57241;
  t57393 = -1.*t57266*t57275;
  t57395 = t57391 + t57393;
  t57400 = t57241*t57266*t57367;
  t57401 = t57274*t57367*t57275;
  t57403 = t57400 + t57401;
  t57405 = t33020*t57362;
  t57407 = -1.*t57363*t57371;
  t57408 = t57405 + t57407;
  t57416 = t57241*t57266*t57362;
  t57417 = t57274*t57362*t57275;
  t57418 = t57416 + t57417;
  t57420 = t33020*t57378;
  t57422 = -1.*t57363*t57383;
  t57423 = t57420 + t57422;
  t57364 = t57362*t57363;
  t57373 = t33020*t57371;
  t57374 = t57364 + t57373;
  t57447 = -1.*t57274;
  t57448 = 1. + t57447;
  t57454 = -1.*t57347;
  t57455 = 1. + t57454;
  t57456 = 0.28121*t57455;
  t57457 = -1.*t57348;
  t57458 = 1. + t57457;
  t57459 = 0.50321*t57458;
  t57460 = 0.19821*t57348;
  t57461 = t57459 + t57460;
  t57462 = t57347*t57461;
  t57463 = -0.305*t57355*t57359;
  t57465 = t57456 + t57462 + t57463;
  t57469 = 0.15121*t57448;
  t57470 = t57274*t57465;
  t57471 = t57469 + t57470;
  t57449 = -0.15121*t57448;
  t57450 = -0.15121*t57274;
  t57453 = -0.15121*t57266;
  t57466 = t57266*t57465;
  t57467 = t57449 + t57450 + t57453 + t57466;
  t57477 = 0.28121*t57355;
  t57478 = -1.*t57461*t57355;
  t57480 = -0.305*t57347*t57359;
  t57481 = t57477 + t57478 + t57480;
  t57483 = t57241*t57471;
  t57484 = -1.*t57467*t57275;
  t57485 = t57483 + t57484;
  t57468 = t57241*t57467;
  t57473 = t57471*t57275;
  t57474 = t57468 + t57473;
  t57482 = t57481*t57363;
  t57486 = t33020*t57485;
  t57487 = t57482 + t57486;
  t57489 = t33020*t57481;
  t57490 = -1.*t57363*t57485;
  t57492 = t57489 + t57490;
  t57379 = t57378*t57363;
  t57384 = t33020*t57383;
  t57385 = t57379 + t57384;
  t57475 = -1.*t57395*t57474;
  t57497 = t57403*t57474;
  t57505 = t57395*t57474;
  t57512 = -1.*t57418*t57474;
  t57520 = -1.*t57403*t57474;
  t57527 = t57418*t57474;
  t57559 = -1.*t57481*t57362;
  t57564 = t57481*t57378;
  p_output1[0]=t57385*var2[0] + t33020*t57277*var2[1] + t57374*var2[2];
  p_output1[1]=(t57390*t57418 - 1.*t57388*t57423)*var2[0] + (t57277*t57363*t57388 + t57390*t57395)*var2[1] + (t57390*t57403 - 1.*t57388*t57408)*var2[2];
  p_output1[2]=(t57388*t57418 + t57390*t57423)*var2[0] + (-1.*t57277*t57363*t57390 + t57388*t57395)*var2[1] + (t57388*t57403 + t57390*t57408)*var2[2];
  p_output1[3]=(t57374*(t57475 - 1.*t33020*t57277*t57487 + t57277*t57363*t57492) + t33020*t57277*(t57374*t57487 + t57408*t57492 + t57497))*var2[0] + (t57385*(-1.*t57374*t57487 - 1.*t57408*t57492 + t57520) + t57374*(t57385*t57487 + t57423*t57492 + t57527))*var2[1] + (t57385*(t33020*t57277*t57487 - 1.*t57277*t57363*t57492 + t57505) + t33020*t57277*(-1.*t57385*t57487 - 1.*t57423*t57492 + t57512))*var2[2];
  p_output1[4]=(t57403*(t57475 - 1.*t57277*t57485) + t57395*(t57362*t57481 + t57371*t57485 + t57497))*var2[0] + (t57418*(-1.*t57371*t57485 + t57520 + t57559) + t57403*(t57383*t57485 + t57527 + t57564))*var2[1] + (t57418*(t57277*t57485 + t57505) + t57395*(-1.*t57378*t57481 - 1.*t57383*t57485 + t57512))*var2[2];
  p_output1[5]=t57362*(-1.*t57274*t57467 + t57266*t57471)*var2[0] + (t57378*(-1.*t57266*t57367*t57467 - 1.*t57274*t57367*t57471 + t57559) + t57362*(t57266*t57362*t57467 + t57274*t57362*t57471 + t57564))*var2[1] + t57378*(t57274*t57467 - 1.*t57266*t57471)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t57378*(-1.*t57367*t57465 + t57559) + t57362*(t57362*t57465 + t57564))*var2[1] + (-0.15121*t57367 - 0.15121*t57378)*var2[2];
  p_output1[13]=(0.28121*t57359 - 0.305*t57348*t57359 - 1.*t57359*t57461)*var2[0] + (0.28121*t57348 + 0.305*Power(t57359,2) - 1.*t57348*t57461)*var2[2];
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

#include "fFrFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
