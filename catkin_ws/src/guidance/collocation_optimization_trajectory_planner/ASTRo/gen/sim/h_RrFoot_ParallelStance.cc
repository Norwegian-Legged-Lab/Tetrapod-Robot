/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:30 GMT+02:00
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
  double t2143;
  double t2837;
  double t5802;
  double t9739;
  double t11348;
  double t11786;
  double t2592;
  double t12199;
  double t12173;
  double t12182;
  double t12205;
  double t12229;
  double t12230;
  double t12236;
  double t12246;
  double t12350;
  double t12354;
  double t12355;
  double t12371;
  double t12372;
  double t12373;
  double t12378;
  double t12077;
  double t12169;
  double t12392;
  double t12189;
  double t12198;
  double t12400;
  double t12394;
  double t12401;
  double t12402;
  double t12410;
  double t12413;
  double t12420;
  double t12214;
  double t12228;
  double t12247;
  double t12248;
  double t12432;
  double t12438;
  double t12439;
  double t12457;
  double t12458;
  double t12459;
  double t12463;
  double t12466;
  double t12469;
  double t12504;
  double t12505;
  double t12506;
  double t12587;
  double t12594;
  double t12595;
  double t12623;
  double t12627;
  double t12637;
  double t12639;
  double t12641;
  double t12653;
  double t12656;
  double t12657;
  double t12659;
  t2143 = Cos(var1[4]);
  t2837 = Cos(var1[15]);
  t5802 = -1.*t2837;
  t9739 = 1. + t5802;
  t11348 = -0.15121*t9739;
  t11786 = Sin(var1[15]);
  t2592 = Cos(var1[5]);
  t12199 = Sin(var1[5]);
  t12173 = Sin(var1[16]);
  t12182 = Sin(var1[4]);
  t12205 = Cos(var1[16]);
  t12229 = t2837*t2143*t2592;
  t12230 = -1.*t2143*t11786*t12199;
  t12236 = t12229 + t12230;
  t12246 = Cos(var1[17]);
  t12350 = t12173*t12182;
  t12354 = t12205*t12236;
  t12355 = t12350 + t12354;
  t12371 = Sin(var1[17]);
  t12372 = t12205*t12182;
  t12373 = -1.*t12173*t12236;
  t12378 = t12372 + t12373;
  t12077 = -0.15121*t11786;
  t12169 = t11348 + t12077;
  t12392 = Sin(var1[3]);
  t12189 = 0.15121*t11786;
  t12198 = t11348 + t12189;
  t12400 = Cos(var1[3]);
  t12394 = t2592*t12392*t12182;
  t12401 = t12400*t12199;
  t12402 = t12394 + t12401;
  t12410 = t12400*t2592;
  t12413 = -1.*t12392*t12182*t12199;
  t12420 = t12410 + t12413;
  t12214 = -1.*t12205;
  t12228 = 1. + t12214;
  t12247 = -1.*t12246;
  t12248 = 1. + t12247;
  t12432 = t2837*t12402;
  t12438 = t11786*t12420;
  t12439 = t12432 + t12438;
  t12457 = -1.*t2143*t12173*t12392;
  t12458 = t12205*t12439;
  t12459 = t12457 + t12458;
  t12463 = -1.*t12205*t2143*t12392;
  t12466 = -1.*t12173*t12439;
  t12469 = t12463 + t12466;
  t12504 = -1.*t12400*t2592*t12182;
  t12505 = t12392*t12199;
  t12506 = t12504 + t12505;
  t12587 = t2592*t12392;
  t12594 = t12400*t12182*t12199;
  t12595 = t12587 + t12594;
  t12623 = t2837*t12506;
  t12627 = t11786*t12595;
  t12637 = t12623 + t12627;
  t12639 = t12400*t2143*t12173;
  t12641 = t12205*t12637;
  t12653 = t12639 + t12641;
  t12656 = t12205*t12400*t2143;
  t12657 = -1.*t12173*t12637;
  t12659 = t12656 + t12657;
  p_output1[0]=0.28121*t12173*t12182 - 0.28121*t12228*t12236 - 0.50321*t12248*t12355 - 0.50321*t12371*t12378 - 0.19821*(t12246*t12355 - 1.*t12371*t12378) - 1.*t12198*t12199*t2143 + t12169*t2143*t2592 - 0.15121*(-1.*t11786*t2143*t2592 - 1.*t12199*t2143*t2837) + var1[0] - 1.*var2[0];
  p_output1[1]=t12169*t12402 + t12198*t12420 - 0.28121*t12228*t12439 - 0.50321*t12248*t12459 - 0.50321*t12371*t12469 - 0.19821*(t12246*t12459 - 1.*t12371*t12469) - 0.28121*t12173*t12392*t2143 - 0.15121*(-1.*t11786*t12402 + t12420*t2837) + var1[1] - 1.*var2[1];
  p_output1[2]=t12169*t12506 + t12198*t12595 - 0.28121*t12228*t12637 - 0.50321*t12248*t12653 - 0.50321*t12371*t12659 - 0.19821*(t12246*t12653 - 1.*t12371*t12659) + 0.28121*t12173*t12400*t2143 - 0.15121*(-1.*t11786*t12506 + t12595*t2837) + var1[2] - 1.*var2[2];
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

#include "h_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
