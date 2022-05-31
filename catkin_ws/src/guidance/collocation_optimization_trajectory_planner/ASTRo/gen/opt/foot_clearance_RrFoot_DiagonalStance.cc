/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 16:59:46 GMT+02:00
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
  double t9;
  double t370;
  double t508;
  double t523;
  double t564;
  double t570;
  double t765;
  double t837;
  double t796;
  double t838;
  double t817;
  double t855;
  double t862;
  double t892;
  double t942;
  double t967;
  double t50;
  double t333;
  double t1501;
  double t1602;
  double t1610;
  double t1690;
  double t1710;
  double t1961;
  double t2077;
  double t2078;
  double t2239;
  double t2242;
  double t2246;
  double t2251;
  t9 = Cos(var1[3]);
  t370 = Cos(var1[15]);
  t508 = -1.*t370;
  t523 = 1. + t508;
  t564 = -0.15121*t523;
  t570 = Sin(var1[15]);
  t765 = Cos(var1[5]);
  t837 = Sin(var1[3]);
  t796 = Sin(var1[4]);
  t838 = Sin(var1[5]);
  t817 = -1.*t9*t765*t796;
  t855 = t837*t838;
  t862 = t817 + t855;
  t892 = t765*t837;
  t942 = t9*t796*t838;
  t967 = t892 + t942;
  t50 = Cos(var1[4]);
  t333 = Sin(var1[16]);
  t1501 = Cos(var1[16]);
  t1602 = t370*t862;
  t1610 = t570*t967;
  t1690 = t1602 + t1610;
  t1710 = Cos(var1[17]);
  t1961 = t9*t50*t333;
  t2077 = t1501*t1690;
  t2078 = t1961 + t2077;
  t2239 = Sin(var1[17]);
  t2242 = t1501*t9*t50;
  t2246 = -1.*t333*t1690;
  t2251 = t2242 + t2246;
  p_output1[0]=-0.28121*(1. - 1.*t1501)*t1690 - 0.50321*(1. - 1.*t1710)*t2078 - 0.50321*t2239*t2251 - 0.19821*(t1710*t2078 - 1.*t2239*t2251) + (t564 - 0.15121*t570)*t862 + 0.28121*t333*t50*t9 + (t564 + 0.15121*t570)*t967 - 0.15121*(-1.*t570*t862 + t370*t967) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "foot_clearance_RrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void foot_clearance_RrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
