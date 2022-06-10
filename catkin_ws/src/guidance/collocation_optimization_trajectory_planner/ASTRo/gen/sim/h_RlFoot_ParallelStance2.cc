/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:04 GMT+02:00
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
  double t484;
  double t2020;
  double t2085;
  double t3242;
  double t4769;
  double t4838;
  double t534;
  double t6599;
  double t5850;
  double t6163;
  double t8191;
  double t9028;
  double t9109;
  double t9114;
  double t9573;
  double t14461;
  double t14490;
  double t14503;
  double t14506;
  double t14516;
  double t14531;
  double t14550;
  double t3469;
  double t5660;
  double t18711;
  double t6411;
  double t6449;
  double t18750;
  double t18746;
  double t18758;
  double t18771;
  double t18785;
  double t18789;
  double t18790;
  double t8823;
  double t8837;
  double t14450;
  double t14459;
  double t18823;
  double t18824;
  double t18833;
  double t18841;
  double t18846;
  double t18847;
  double t19145;
  double t19146;
  double t19147;
  double t19281;
  double t19289;
  double t19292;
  double t19312;
  double t19319;
  double t19353;
  double t19409;
  double t19413;
  double t19414;
  double t19431;
  double t19434;
  double t19435;
  double t19480;
  double t19481;
  double t19487;
  t484 = Cos(var1[4]);
  t2020 = Cos(var1[9]);
  t2085 = -1.*t2020;
  t3242 = 1. + t2085;
  t4769 = Sin(var1[9]);
  t4838 = 0.15121*t4769;
  t534 = Cos(var1[5]);
  t6599 = Sin(var1[5]);
  t5850 = Sin(var1[10]);
  t6163 = Sin(var1[4]);
  t8191 = Cos(var1[10]);
  t9028 = t2020*t484*t534;
  t9109 = -1.*t484*t4769*t6599;
  t9114 = t9028 + t9109;
  t9573 = Cos(var1[11]);
  t14461 = t5850*t6163;
  t14490 = t8191*t9114;
  t14503 = t14461 + t14490;
  t14506 = Sin(var1[11]);
  t14516 = t8191*t6163;
  t14531 = -1.*t5850*t9114;
  t14550 = t14516 + t14531;
  t3469 = -0.15121*t3242;
  t5660 = t3469 + t4838;
  t18711 = Sin(var1[3]);
  t6411 = 0.15121*t3242;
  t6449 = t6411 + t4838;
  t18750 = Cos(var1[3]);
  t18746 = t534*t18711*t6163;
  t18758 = t18750*t6599;
  t18771 = t18746 + t18758;
  t18785 = t18750*t534;
  t18789 = -1.*t18711*t6163*t6599;
  t18790 = t18785 + t18789;
  t8823 = -1.*t8191;
  t8837 = 1. + t8823;
  t14450 = -1.*t9573;
  t14459 = 1. + t14450;
  t18823 = t2020*t18771;
  t18824 = t4769*t18790;
  t18833 = t18823 + t18824;
  t18841 = -1.*t484*t5850*t18711;
  t18846 = t8191*t18833;
  t18847 = t18841 + t18846;
  t19145 = -1.*t8191*t484*t18711;
  t19146 = -1.*t5850*t18833;
  t19147 = t19145 + t19146;
  t19281 = -1.*t18750*t534*t6163;
  t19289 = t18711*t6599;
  t19292 = t19281 + t19289;
  t19312 = t534*t18711;
  t19319 = t18750*t6163*t6599;
  t19353 = t19312 + t19319;
  t19409 = t2020*t19292;
  t19413 = t4769*t19353;
  t19414 = t19409 + t19413;
  t19431 = t18750*t484*t5850;
  t19434 = t8191*t19414;
  t19435 = t19431 + t19434;
  t19480 = t8191*t18750*t484;
  t19481 = -1.*t5850*t19414;
  t19487 = t19480 + t19481;
  p_output1[0]=-0.50321*t14459*t14503 - 0.50321*t14506*t14550 + t484*t534*t5660 + 0.28121*t5850*t6163 - 1.*t484*t6449*t6599 + 0.15121*(-1.*t4769*t484*t534 - 1.*t2020*t484*t6599) - 0.28121*t8837*t9114 - 0.19821*(-1.*t14506*t14550 + t14503*t9573) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.50321*t14459*t18847 - 0.50321*t14506*t19147 + 0.15121*(t18790*t2020 - 1.*t18771*t4769) + t18771*t5660 - 0.28121*t18711*t484*t5850 + t18790*t6449 - 0.28121*t18833*t8837 - 0.19821*(-1.*t14506*t19147 + t18847*t9573) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.50321*t14459*t19435 - 0.50321*t14506*t19487 + 0.15121*(t19353*t2020 - 1.*t19292*t4769) + t19292*t5660 + 0.28121*t18750*t484*t5850 + t19353*t6449 - 0.28121*t19414*t8837 - 0.19821*(-1.*t14506*t19487 + t19435*t9573) + var1[2] - 1.*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_RlFoot_ParallelStance2.hh"

namespace SymFunction
{

void h_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
