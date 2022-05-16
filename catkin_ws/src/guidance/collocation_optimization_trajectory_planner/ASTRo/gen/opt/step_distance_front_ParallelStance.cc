/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:50 GMT+02:00
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
  double t44466;
  double t45022;
  double t45076;
  double t45105;
  double t45109;
  double t45113;
  double t44570;
  double t45193;
  double t45186;
  double t45187;
  double t45211;
  double t45233;
  double t45246;
  double t45247;
  double t45254;
  double t45260;
  double t45264;
  double t45268;
  double t45271;
  double t45272;
  double t45274;
  double t45275;
  double t45282;
  double t45284;
  double t45290;
  double t45291;
  double t45292;
  double t45340;
  double t45353;
  double t45359;
  double t45369;
  double t45374;
  double t45379;
  double t45392;
  double t45394;
  double t45395;
  double t45400;
  double t45401;
  double t45403;
  double t45404;
  double t45108;
  double t45133;
  double t45415;
  double t45190;
  double t45191;
  double t45418;
  double t45417;
  double t45419;
  double t45423;
  double t45430;
  double t45433;
  double t45434;
  double t45212;
  double t45217;
  double t45255;
  double t45256;
  double t45440;
  double t45441;
  double t45442;
  double t45457;
  double t45458;
  double t45475;
  double t45485;
  double t45494;
  double t45495;
  double t45297;
  double t45300;
  double t45304;
  double t45305;
  double t45345;
  double t45348;
  double t45380;
  double t45390;
  double t45547;
  double t45548;
  double t45558;
  double t45561;
  double t45562;
  double t45563;
  double t45565;
  double t45567;
  double t45568;
  t44466 = Cos(var1[4]);
  t45022 = Cos(var1[12]);
  t45076 = -1.*t45022;
  t45105 = 1. + t45076;
  t45109 = Sin(var1[12]);
  t45113 = -0.15121*t45109;
  t44570 = Cos(var1[5]);
  t45193 = Sin(var1[5]);
  t45186 = Sin(var1[13]);
  t45187 = Sin(var1[4]);
  t45211 = Cos(var1[13]);
  t45233 = t45022*t44466*t44570;
  t45246 = -1.*t44466*t45109*t45193;
  t45247 = t45233 + t45246;
  t45254 = Cos(var1[14]);
  t45260 = -1.*t45186*t45187;
  t45264 = t45211*t45247;
  t45268 = t45260 + t45264;
  t45271 = Sin(var1[14]);
  t45272 = t45211*t45187;
  t45274 = t45186*t45247;
  t45275 = t45272 + t45274;
  t45282 = Cos(var1[6]);
  t45284 = -1.*t45282;
  t45290 = 1. + t45284;
  t45291 = 0.15121*t45290;
  t45292 = Sin(var1[6]);
  t45340 = Cos(var1[7]);
  t45353 = t44466*t44570*t45282;
  t45359 = -1.*t44466*t45193*t45292;
  t45369 = t45353 + t45359;
  t45374 = Sin(var1[7]);
  t45379 = Cos(var1[8]);
  t45392 = t45340*t45369;
  t45394 = -1.*t45187*t45374;
  t45395 = t45392 + t45394;
  t45400 = t45340*t45187;
  t45401 = t45369*t45374;
  t45403 = t45400 + t45401;
  t45404 = Sin(var1[8]);
  t45108 = 0.15121*t45105;
  t45133 = t45108 + t45113;
  t45415 = Sin(var1[3]);
  t45190 = -0.15121*t45105;
  t45191 = t45190 + t45113;
  t45418 = Cos(var1[3]);
  t45417 = t44570*t45415*t45187;
  t45419 = t45418*t45193;
  t45423 = t45417 + t45419;
  t45430 = t45418*t44570;
  t45433 = -1.*t45415*t45187*t45193;
  t45434 = t45430 + t45433;
  t45212 = -1.*t45211;
  t45217 = 1. + t45212;
  t45255 = -1.*t45254;
  t45256 = 1. + t45255;
  t45440 = t45022*t45423;
  t45441 = t45109*t45434;
  t45442 = t45440 + t45441;
  t45457 = t44466*t45186*t45415;
  t45458 = t45211*t45442;
  t45475 = t45457 + t45458;
  t45485 = -1.*t45211*t44466*t45415;
  t45494 = t45186*t45442;
  t45495 = t45485 + t45494;
  t45297 = -0.15121*t45292;
  t45300 = t45291 + t45297;
  t45304 = 0.15121*t45292;
  t45305 = t45291 + t45304;
  t45345 = -1.*t45340;
  t45348 = 1. + t45345;
  t45380 = -1.*t45379;
  t45390 = 1. + t45380;
  t45547 = t45282*t45423;
  t45548 = t45434*t45292;
  t45558 = t45547 + t45548;
  t45561 = t45340*t45558;
  t45562 = t44466*t45415*t45374;
  t45563 = t45561 + t45562;
  t45565 = -1.*t44466*t45340*t45415;
  t45567 = t45558*t45374;
  t45568 = t45565 + t45567;
  p_output1[0]=-1.*t44466*t44570*t45133 - 0.28121*t45186*t45187 + t44466*t45191*t45193 + 0.15121*(-1.*t44466*t44570*t45109 - 1.*t44466*t45022*t45193) - 0.28121*t45217*t45247 - 0.50321*t45256*t45268 + 0.50321*t45271*t45275 - 0.23321*(t45254*t45268 + t45271*t45275) + 0.15121*(-1.*t44466*t45193*t45282 - 1.*t44466*t44570*t45292) - 1.*t44466*t45193*t45300 + t44466*t44570*t45305 + 0.28121*t45348*t45369 + 0.28121*t45187*t45374 + 0.50321*t45390*t45395 - 0.50321*t45403*t45404 + 0.23321*(t45379*t45395 + t45403*t45404);
  p_output1[1]=0.28121*t44466*t45186*t45415 - 0.28121*t44466*t45374*t45415 - 1.*t45133*t45423 + t45305*t45423 - 1.*t45191*t45434 + t45300*t45434 + 0.15121*(-1.*t45109*t45423 + t45022*t45434) + 0.15121*(-1.*t45292*t45423 + t45282*t45434) - 0.28121*t45217*t45442 - 0.50321*t45256*t45475 + 0.50321*t45271*t45495 - 0.23321*(t45254*t45475 + t45271*t45495) + 0.28121*t45348*t45558 + 0.50321*t45390*t45563 - 0.50321*t45404*t45568 + 0.23321*(t45379*t45563 + t45404*t45568);
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

#include "step_distance_front_ParallelStance.hh"

namespace ParallelStance
{

void step_distance_front_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
