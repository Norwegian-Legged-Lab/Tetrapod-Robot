/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:46:33 GMT+02:00
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
  double t361;
  double t407;
  double t450;
  double t490;
  double t507;
  double t381;
  double t627;
  double t159;
  double t679;
  double t696;
  double t702;
  double t728;
  double t851;
  double t924;
  double t992;
  double t1053;
  double t1080;
  double t1082;
  double t1108;
  double t167;
  double t281;
  double t1328;
  double t498;
  double t501;
  double t1459;
  double t1575;
  double t1613;
  double t1743;
  double t1339;
  double t1471;
  double t1488;
  double t2323;
  double t2326;
  double t2328;
  double t1058;
  double t1065;
  double t2403;
  double t2574;
  double t2580;
  double t2716;
  double t2720;
  double t2721;
  double t2962;
  double t2972;
  double t2974;
  double t2908;
  double t2920;
  double t2948;
  double t2987;
  double t2994;
  double t2995;
  double t3292;
  double t3348;
  double t3444;
  double t3646;
  double t3823;
  double t3870;
  t361 = Cos(var1[4]);
  t407 = Sin(var1[9]);
  t450 = Sin(var1[4]);
  t490 = Cos(var1[9]);
  t507 = Sin(var1[5]);
  t381 = Cos(var1[5]);
  t627 = Sin(var1[10]);
  t159 = Cos(var1[10]);
  t679 = t490*t450;
  t696 = t361*t407*t507;
  t702 = t679 + t696;
  t728 = Sin(var1[11]);
  t851 = -1.*t361*t381*t627;
  t924 = t159*t702;
  t992 = t851 + t924;
  t1053 = Cos(var1[11]);
  t1080 = t159*t361*t381;
  t1082 = t627*t702;
  t1108 = t1080 + t1082;
  t167 = -1.*t159;
  t281 = 1. + t167;
  t1328 = Sin(var1[3]);
  t498 = -1.*t490;
  t501 = 1. + t498;
  t1459 = Cos(var1[3]);
  t1575 = t1459*t381;
  t1613 = -1.*t1328*t450*t507;
  t1743 = t1575 + t1613;
  t1339 = t381*t1328*t450;
  t1471 = t1459*t507;
  t1488 = t1339 + t1471;
  t2323 = -1.*t490*t361*t1328;
  t2326 = -1.*t407*t1743;
  t2328 = t2323 + t2326;
  t1058 = -1.*t1053;
  t1065 = 1. + t1058;
  t2403 = -1.*t627*t1488;
  t2574 = t159*t2328;
  t2580 = t2403 + t2574;
  t2716 = t159*t1488;
  t2720 = t627*t2328;
  t2721 = t2716 + t2720;
  t2962 = t381*t1328;
  t2972 = t1459*t450*t507;
  t2974 = t2962 + t2972;
  t2908 = -1.*t1459*t381*t450;
  t2920 = t1328*t507;
  t2948 = t2908 + t2920;
  t2987 = t490*t1459*t361;
  t2994 = -1.*t407*t2974;
  t2995 = t2987 + t2994;
  t3292 = -1.*t627*t2948;
  t3348 = t159*t2995;
  t3444 = t3292 + t3348;
  t3646 = t159*t2948;
  t3823 = t627*t2995;
  t3870 = t3646 + t3823;
  p_output1[0]=-0.575*t1065*t1108 - 0.325*t281*t361*t381 - 0.1575*t407*t450 - 0.1575*t361*t501*t507 + 0.2255*(t407*t450 - 1.*t361*t490*t507) + 0.325*t627*t702 - 0.575*t728*t992 - 0.0641*(t1108*t728 + t1053*t992) - 0.295*(t1053*t1108 - 1.*t728*t992) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.575*t1065*t2721 - 0.325*t1488*t281 + 0.1575*t1328*t361*t407 + 0.2255*(-1.*t1328*t361*t407 + t1743*t490) + 0.1575*t1743*t501 + 0.325*t2328*t627 - 0.575*t2580*t728 - 0.295*(t1053*t2721 - 1.*t2580*t728) - 0.0641*(t1053*t2580 + t2721*t728) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.325*t281*t2948 - 0.575*t1065*t3870 - 0.1575*t1459*t361*t407 + 0.2255*(t1459*t361*t407 + t2974*t490) + 0.1575*t2974*t501 + 0.325*t2995*t627 - 0.575*t3444*t728 - 0.295*(t1053*t3870 - 1.*t3444*t728) - 0.0641*(t1053*t3444 + t3870*t728) + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
