/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:40 GMT+02:00
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
  double t3953;
  double t31091;
  double t31633;
  double t33308;
  double t34148;
  double t34348;
  double t28597;
  double t34457;
  double t35126;
  double t35130;
  double t35131;
  double t35157;
  double t35177;
  double t35186;
  double t35196;
  double t35207;
  double t35210;
  double t35215;
  double t35377;
  double t35378;
  double t35379;
  double t35382;
  double t34352;
  double t34387;
  double t35400;
  double t35396;
  double t34904;
  double t35001;
  double t35398;
  double t35401;
  double t35402;
  double t35409;
  double t35423;
  double t35431;
  double t35128;
  double t35129;
  double t35197;
  double t35205;
  double t35449;
  double t35450;
  double t35453;
  double t35459;
  double t35511;
  double t35512;
  double t35594;
  double t35622;
  double t35623;
  double t35655;
  double t35657;
  double t35658;
  double t35677;
  double t35680;
  double t35687;
  double t35726;
  double t35727;
  double t35734;
  double t35743;
  double t35765;
  double t35846;
  double t35848;
  double t35864;
  double t35865;
  t3953 = Cos(var1[4]);
  t31091 = Cos(var1[6]);
  t31633 = -1.*t31091;
  t33308 = 1. + t31633;
  t34148 = 0.15121*t33308;
  t34348 = Sin(var1[6]);
  t28597 = Sin(var1[5]);
  t34457 = Cos(var1[5]);
  t35126 = Cos(var1[7]);
  t35130 = t3953*t34457*t31091;
  t35131 = -1.*t3953*t28597*t34348;
  t35157 = t35130 + t35131;
  t35177 = Sin(var1[4]);
  t35186 = Sin(var1[7]);
  t35196 = Cos(var1[8]);
  t35207 = t35126*t35157;
  t35210 = -1.*t35177*t35186;
  t35215 = t35207 + t35210;
  t35377 = t35126*t35177;
  t35378 = t35157*t35186;
  t35379 = t35377 + t35378;
  t35382 = Sin(var1[8]);
  t34352 = -0.15121*t34348;
  t34387 = t34148 + t34352;
  t35400 = Sin(var1[3]);
  t35396 = Cos(var1[3]);
  t34904 = 0.15121*t34348;
  t35001 = t34148 + t34904;
  t35398 = t35396*t34457;
  t35401 = -1.*t35400*t35177*t28597;
  t35402 = t35398 + t35401;
  t35409 = t34457*t35400*t35177;
  t35423 = t35396*t28597;
  t35431 = t35409 + t35423;
  t35128 = -1.*t35126;
  t35129 = 1. + t35128;
  t35197 = -1.*t35196;
  t35205 = 1. + t35197;
  t35449 = t31091*t35431;
  t35450 = t35402*t34348;
  t35453 = t35449 + t35450;
  t35459 = t35126*t35453;
  t35511 = t3953*t35400*t35186;
  t35512 = t35459 + t35511;
  t35594 = -1.*t3953*t35126*t35400;
  t35622 = t35453*t35186;
  t35623 = t35594 + t35622;
  t35655 = t34457*t35400;
  t35657 = t35396*t35177*t28597;
  t35658 = t35655 + t35657;
  t35677 = -1.*t35396*t34457*t35177;
  t35680 = t35400*t28597;
  t35687 = t35677 + t35680;
  t35726 = t31091*t35687;
  t35727 = t35658*t34348;
  t35734 = t35726 + t35727;
  t35743 = t35126*t35734;
  t35765 = -1.*t35396*t3953*t35186;
  t35846 = t35743 + t35765;
  t35848 = t35396*t3953*t35126;
  t35864 = t35734*t35186;
  t35865 = t35848 + t35864;
  p_output1[0]=0.28121*t35129*t35157 + 0.28121*t35177*t35186 + 0.50321*t35205*t35215 - 0.50321*t35379*t35382 + 0.19821*(t35196*t35215 + t35379*t35382) - 1.*t28597*t34387*t3953 + t34457*t35001*t3953 + 0.15121*(-1.*t28597*t31091*t3953 - 1.*t34348*t34457*t3953) + var1[0] - 1.*var2[0];
  p_output1[1]=t34387*t35402 + t35001*t35431 + 0.15121*(t31091*t35402 - 1.*t34348*t35431) + 0.28121*t35129*t35453 + 0.50321*t35205*t35512 - 0.50321*t35382*t35623 + 0.19821*(t35196*t35512 + t35382*t35623) - 0.28121*t35186*t35400*t3953 + var1[1] - 1.*var2[1];
  p_output1[2]=t34387*t35658 + t35001*t35687 + 0.15121*(t31091*t35658 - 1.*t34348*t35687) + 0.28121*t35129*t35734 + 0.50321*t35205*t35846 - 0.50321*t35382*t35865 + 0.19821*(t35196*t35846 + t35382*t35865) + 0.28121*t35186*t35396*t3953 + var1[2] - 1.*var2[2];
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

#include "h_FlFoot_DiagonalStance2.hh"

namespace SymFunction
{

void h_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
