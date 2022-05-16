/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:32:22 GMT+02:00
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
  double t2875;
  double t3906;
  double t3842;
  double t3860;
  double t3991;
  double t306;
  double t2338;
  double t4085;
  double t4201;
  double t4279;
  double t4292;
  double t4430;
  double t3892;
  double t4028;
  double t4057;
  double t3696;
  double t4439;
  double t4441;
  double t4447;
  double t4465;
  double t4471;
  double t4473;
  double t4508;
  double t4536;
  double t4718;
  double t4761;
  double t4762;
  double t3732;
  double t3822;
  double t4125;
  double t4183;
  double t5154;
  double t5164;
  double t5201;
  double t4548;
  double t4610;
  double t5212;
  double t5236;
  double t5252;
  double t5278;
  double t5317;
  double t5327;
  double t5388;
  double t5398;
  double t5399;
  double t5441;
  double t5442;
  double t5444;
  double t5447;
  double t5448;
  double t5449;
  double t5465;
  double t5485;
  double t5491;
  double t5621;
  double t5622;
  double t5634;
  double t5740;
  double t5831;
  double t5978;
  double t6147;
  double t6158;
  double t6159;
  double t6182;
  double t6183;
  double t6184;
  double t6187;
  double t6190;
  double t6191;
  double t6240;
  double t6241;
  double t6246;
  t2875 = Sin(var1[3]);
  t3906 = Cos(var1[3]);
  t3842 = Cos(var1[5]);
  t3860 = Sin(var1[4]);
  t3991 = Sin(var1[5]);
  t306 = Cos(var1[4]);
  t2338 = Sin(var1[15]);
  t4085 = Cos(var1[15]);
  t4201 = t3906*t3842;
  t4279 = -1.*t2875*t3860*t3991;
  t4292 = t4201 + t4279;
  t4430 = Sin(var1[16]);
  t3892 = t3842*t2875*t3860;
  t4028 = t3906*t3991;
  t4057 = t3892 + t4028;
  t3696 = Cos(var1[16]);
  t4439 = -1.*t4085*t306*t2875;
  t4441 = -1.*t2338*t4292;
  t4447 = t4439 + t4441;
  t4465 = Sin(var1[17]);
  t4471 = -1.*t4430*t4057;
  t4473 = t3696*t4447;
  t4508 = t4471 + t4473;
  t4536 = Cos(var1[17]);
  t4718 = t3696*t4057;
  t4761 = t4430*t4447;
  t4762 = t4718 + t4761;
  t3732 = -1.*t3696;
  t3822 = 1. + t3732;
  t4125 = -1.*t4085;
  t4183 = 1. + t4125;
  t5154 = -1.*t4085*t3906*t3860;
  t5164 = -1.*t3906*t306*t2338*t3991;
  t5201 = t5154 + t5164;
  t4548 = -1.*t4536;
  t4610 = 1. + t4548;
  t5212 = t3906*t306*t3842*t4430;
  t5236 = t3696*t5201;
  t5252 = t5212 + t5236;
  t5278 = -1.*t3696*t3906*t306*t3842;
  t5317 = t4430*t5201;
  t5327 = t5278 + t5317;
  t5388 = t3906*t3842*t3860;
  t5398 = -1.*t2875*t3991;
  t5399 = t5388 + t5398;
  t5441 = t3842*t2875;
  t5442 = t3906*t3860*t3991;
  t5444 = t5441 + t5442;
  t5447 = -1.*t2338*t4430*t5399;
  t5448 = t3696*t5444;
  t5449 = t5447 + t5448;
  t5465 = -1.*t3696*t2338*t5399;
  t5485 = -1.*t4430*t5444;
  t5491 = t5465 + t5485;
  t5621 = -1.*t3906*t306*t2338;
  t5622 = -1.*t4085*t5444;
  t5634 = t5621 + t5622;
  t5740 = t4085*t3906*t306;
  t5831 = -1.*t2338*t5444;
  t5978 = t5740 + t5831;
  t6147 = -1.*t3906*t3842*t3860;
  t6158 = t2875*t3991;
  t6159 = t6147 + t6158;
  t6182 = -1.*t4430*t6159;
  t6183 = t3696*t5978;
  t6184 = t6182 + t6183;
  t6187 = -1.*t3696*t6159;
  t6190 = -1.*t4430*t5978;
  t6191 = t6187 + t6190;
  t6240 = t3696*t6159;
  t6241 = t4430*t5978;
  t6246 = t6240 + t6241;
  p_output1[0]=1.;
  p_output1[1]=-0.1575*t2338*t2875*t306 - 0.325*t3822*t4057 - 0.1575*t4183*t4292 - 0.2255*(-1.*t2338*t2875*t306 + t4085*t4292) + 0.325*t4430*t4447 - 0.575*t4465*t4508 - 0.575*t4610*t4762 - 0.0641*(t4508*t4536 + t4465*t4762) - 0.295*(-1.*t4465*t4508 + t4536*t4762);
  p_output1[2]=0.325*t306*t3822*t3842*t3906 - 0.1575*t2338*t3860*t3906 - 0.2255*(-1.*t2338*t3860*t3906 + t306*t3906*t3991*t4085) - 0.1575*t306*t3906*t3991*t4183 + 0.325*t4430*t5201 - 0.575*t4465*t5252 - 0.575*t4610*t5327 - 0.0641*(t4536*t5252 + t4465*t5327) - 0.295*(-1.*t4465*t5252 + t4536*t5327);
  p_output1[3]=-0.2255*t4085*t5399 - 0.1575*t4183*t5399 - 0.325*t2338*t4430*t5399 - 0.325*t3822*t5444 - 0.575*t4610*t5449 - 0.575*t4465*t5491 - 0.295*(t4536*t5449 - 1.*t4465*t5491) - 0.0641*(t4465*t5449 + t4536*t5491);
  p_output1[4]=0.1575*t306*t3906*t4085 - 0.1575*t2338*t5444 + 0.325*t4430*t5634 - 0.575*t3696*t4465*t5634 - 0.575*t4430*t4610*t5634 - 0.0641*(t4430*t4465*t5634 + t3696*t4536*t5634) - 0.295*(-1.*t3696*t4465*t5634 + t4430*t4536*t5634) - 0.2255*t5978;
  p_output1[5]=0.325*t3696*t5978 - 0.325*t4430*t6159 - 0.575*t4610*t6184 - 0.575*t4465*t6191 - 0.295*(t4536*t6184 - 1.*t4465*t6191) - 0.0641*(t4465*t6184 + t4536*t6191);
  p_output1[6]=-0.575*t4536*t6184 - 0.575*t4465*t6246 - 0.295*(-1.*t4536*t6184 - 1.*t4465*t6246) - 0.0641*(-1.*t4465*t6184 + t4536*t6246);
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

#include "J_foot_clearance_RrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_foot_clearance_RrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
