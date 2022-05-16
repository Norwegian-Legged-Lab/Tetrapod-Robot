/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:16 GMT+02:00
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
  double t27222;
  double t44873;
  double t44978;
  double t44986;
  double t45036;
  double t45189;
  double t44817;
  double t45393;
  double t45237;
  double t45238;
  double t45449;
  double t45455;
  double t45456;
  double t45481;
  double t45498;
  double t45508;
  double t45509;
  double t45522;
  double t45530;
  double t45536;
  double t45549;
  double t45590;
  double t45192;
  double t45199;
  double t45888;
  double t45295;
  double t45303;
  double t46120;
  double t46119;
  double t46131;
  double t46132;
  double t46134;
  double t46135;
  double t46136;
  double t45450;
  double t45454;
  double t45500;
  double t45506;
  double t46150;
  double t46151;
  double t46152;
  double t46158;
  double t46159;
  double t46160;
  double t46163;
  double t46164;
  double t46165;
  double t46337;
  double t46343;
  double t46344;
  double t46346;
  double t46349;
  double t46350;
  double t46357;
  double t46358;
  double t46359;
  double t46361;
  double t46362;
  double t46363;
  double t46365;
  double t46366;
  double t46367;
  t27222 = Cos(var1[4]);
  t44873 = Cos(var1[15]);
  t44978 = -1.*t44873;
  t44986 = 1. + t44978;
  t45036 = -0.15121*t44986;
  t45189 = Sin(var1[15]);
  t44817 = Cos(var1[5]);
  t45393 = Sin(var1[5]);
  t45237 = Sin(var1[16]);
  t45238 = Sin(var1[4]);
  t45449 = Cos(var1[16]);
  t45455 = t44873*t27222*t44817;
  t45456 = -1.*t27222*t45189*t45393;
  t45481 = t45455 + t45456;
  t45498 = Cos(var1[17]);
  t45508 = t45237*t45238;
  t45509 = t45449*t45481;
  t45522 = t45508 + t45509;
  t45530 = Sin(var1[17]);
  t45536 = t45449*t45238;
  t45549 = -1.*t45237*t45481;
  t45590 = t45536 + t45549;
  t45192 = -0.15121*t45189;
  t45199 = t45036 + t45192;
  t45888 = Sin(var1[3]);
  t45295 = 0.15121*t45189;
  t45303 = t45036 + t45295;
  t46120 = Cos(var1[3]);
  t46119 = t44817*t45888*t45238;
  t46131 = t46120*t45393;
  t46132 = t46119 + t46131;
  t46134 = t46120*t44817;
  t46135 = -1.*t45888*t45238*t45393;
  t46136 = t46134 + t46135;
  t45450 = -1.*t45449;
  t45454 = 1. + t45450;
  t45500 = -1.*t45498;
  t45506 = 1. + t45500;
  t46150 = t44873*t46132;
  t46151 = t45189*t46136;
  t46152 = t46150 + t46151;
  t46158 = -1.*t27222*t45237*t45888;
  t46159 = t45449*t46152;
  t46160 = t46158 + t46159;
  t46163 = -1.*t45449*t27222*t45888;
  t46164 = -1.*t45237*t46152;
  t46165 = t46163 + t46164;
  t46337 = -1.*t46120*t44817*t45238;
  t46343 = t45888*t45393;
  t46344 = t46337 + t46343;
  t46346 = t44817*t45888;
  t46349 = t46120*t45238*t45393;
  t46350 = t46346 + t46349;
  t46357 = t44873*t46344;
  t46358 = t45189*t46350;
  t46359 = t46357 + t46358;
  t46361 = t46120*t27222*t45237;
  t46362 = t45449*t46359;
  t46363 = t46361 + t46362;
  t46365 = t45449*t46120*t27222;
  t46366 = -1.*t45237*t46359;
  t46367 = t46365 + t46366;
  p_output1[0]=t27222*t44817*t45199 + 0.28121*t45237*t45238 - 1.*t27222*t45303*t45393 - 0.15121*(-1.*t27222*t44817*t45189 - 1.*t27222*t44873*t45393) - 0.28121*t45454*t45481 - 0.50321*t45506*t45522 - 0.50321*t45530*t45590 - 0.23321*(t45498*t45522 - 1.*t45530*t45590) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t27222*t45237*t45888 + t45199*t46132 + t45303*t46136 - 0.15121*(-1.*t45189*t46132 + t44873*t46136) - 0.28121*t45454*t46152 - 0.50321*t45506*t46160 - 0.50321*t45530*t46165 - 0.23321*(t45498*t46160 - 1.*t45530*t46165) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t27222*t45237*t46120 + t45199*t46344 + t45303*t46350 - 0.15121*(-1.*t45189*t46344 + t44873*t46350) - 0.28121*t45454*t46359 - 0.50321*t45506*t46363 - 0.50321*t45530*t46367 - 0.23321*(t45498*t46363 - 1.*t45530*t46367) + var1[2] - 1.*var2[2];
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

namespace ParallelStance
{

void h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
