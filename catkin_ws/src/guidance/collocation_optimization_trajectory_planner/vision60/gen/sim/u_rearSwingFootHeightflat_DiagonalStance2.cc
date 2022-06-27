/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:15 GMT+02:00
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
  double t812;
  double t1685;
  double t1712;
  double t1708;
  double t1713;
  double t819;
  double t1083;
  double t1727;
  double t2462;
  double t2463;
  double t2465;
  double t2488;
  double t1709;
  double t1714;
  double t1715;
  double t1420;
  double t2807;
  double t2811;
  double t2812;
  double t3101;
  double t3123;
  double t3280;
  double t3413;
  double t3472;
  double t3715;
  double t3719;
  double t4499;
  t812 = Cos(var1[3]);
  t1685 = Cos(var1[5]);
  t1712 = Sin(var1[3]);
  t1708 = Sin(var1[4]);
  t1713 = Sin(var1[5]);
  t819 = Cos(var1[4]);
  t1083 = Sin(var1[9]);
  t1727 = Cos(var1[9]);
  t2462 = t1685*t1712;
  t2463 = t812*t1708*t1713;
  t2465 = t2462 + t2463;
  t2488 = Sin(var1[10]);
  t1709 = -1.*t812*t1685*t1708;
  t1714 = t1712*t1713;
  t1715 = t1709 + t1714;
  t1420 = Cos(var1[10]);
  t2807 = t1727*t812*t819;
  t2811 = -1.*t1083*t2465;
  t2812 = t2807 + t2811;
  t3101 = Sin(var1[11]);
  t3123 = -1.*t2488*t1715;
  t3280 = t1420*t2812;
  t3413 = t3123 + t3280;
  t3472 = Cos(var1[11]);
  t3715 = t1420*t1715;
  t3719 = t2488*t2812;
  t4499 = t3715 + t3719;
  p_output1[0]=-0.325*(1. - 1.*t1420)*t1715 + 0.1575*(1. - 1.*t1727)*t2465 + 0.325*t2488*t2812 - 0.575*t3101*t3413 - 0.575*(1. - 1.*t3472)*t4499 - 0.0641*(t3413*t3472 + t3101*t4499) - 0.295*(-1.*t3101*t3413 + t3472*t4499) - 0.1575*t1083*t812*t819 + 0.2255*(t1727*t2465 + t1083*t812*t819) + var1[2];
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

#include "u_rearSwingFootHeightflat_DiagonalStance2.hh"

namespace SymFunction
{

void u_rearSwingFootHeightflat_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
