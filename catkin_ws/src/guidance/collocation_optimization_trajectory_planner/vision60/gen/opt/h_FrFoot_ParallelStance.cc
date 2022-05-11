/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:48 GMT+02:00
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
  double t25101;
  double t25127;
  double t25133;
  double t25142;
  double t25189;
  double t25108;
  double t25373;
  double t3860;
  double t25374;
  double t25383;
  double t25386;
  double t25395;
  double t25399;
  double t25400;
  double t25401;
  double t25406;
  double t25409;
  double t25410;
  double t25414;
  double t24695;
  double t25072;
  double t25512;
  double t25153;
  double t25182;
  double t25525;
  double t25543;
  double t25553;
  double t25554;
  double t25524;
  double t25526;
  double t25527;
  double t25603;
  double t25604;
  double t25605;
  double t25407;
  double t25408;
  double t25621;
  double t25622;
  double t25623;
  double t25641;
  double t25658;
  double t25664;
  double t25698;
  double t25699;
  double t25700;
  double t25693;
  double t25694;
  double t25695;
  double t25711;
  double t25712;
  double t25713;
  double t25715;
  double t25720;
  double t25721;
  double t25723;
  double t25724;
  double t25725;
  t25101 = Cos(var1[4]);
  t25127 = Sin(var1[12]);
  t25133 = Sin(var1[4]);
  t25142 = Cos(var1[12]);
  t25189 = Sin(var1[5]);
  t25108 = Cos(var1[5]);
  t25373 = Sin(var1[13]);
  t3860 = Cos(var1[13]);
  t25374 = t25142*t25133;
  t25383 = t25101*t25127*t25189;
  t25386 = t25374 + t25383;
  t25395 = Sin(var1[14]);
  t25399 = -1.*t25101*t25108*t25373;
  t25400 = t3860*t25386;
  t25401 = t25399 + t25400;
  t25406 = Cos(var1[14]);
  t25409 = t3860*t25101*t25108;
  t25410 = t25373*t25386;
  t25414 = t25409 + t25410;
  t24695 = -1.*t3860;
  t25072 = 1. + t24695;
  t25512 = Sin(var1[3]);
  t25153 = -1.*t25142;
  t25182 = 1. + t25153;
  t25525 = Cos(var1[3]);
  t25543 = t25525*t25108;
  t25553 = -1.*t25512*t25133*t25189;
  t25554 = t25543 + t25553;
  t25524 = t25108*t25512*t25133;
  t25526 = t25525*t25189;
  t25527 = t25524 + t25526;
  t25603 = -1.*t25142*t25101*t25512;
  t25604 = -1.*t25127*t25554;
  t25605 = t25603 + t25604;
  t25407 = -1.*t25406;
  t25408 = 1. + t25407;
  t25621 = -1.*t25373*t25527;
  t25622 = t3860*t25605;
  t25623 = t25621 + t25622;
  t25641 = t3860*t25527;
  t25658 = t25373*t25605;
  t25664 = t25641 + t25658;
  t25698 = t25108*t25512;
  t25699 = t25525*t25133*t25189;
  t25700 = t25698 + t25699;
  t25693 = -1.*t25525*t25108*t25133;
  t25694 = t25512*t25189;
  t25695 = t25693 + t25694;
  t25711 = t25142*t25525*t25101;
  t25712 = -1.*t25127*t25700;
  t25713 = t25711 + t25712;
  t25715 = -1.*t25373*t25695;
  t25720 = t3860*t25713;
  t25721 = t25715 + t25720;
  t25723 = t3860*t25695;
  t25724 = t25373*t25713;
  t25725 = t25723 + t25724;
  p_output1[0]=0.325*t25072*t25101*t25108 + 0.1575*t25127*t25133 + 0.1575*t25101*t25182*t25189 - 0.2255*(t25127*t25133 - 1.*t25101*t25142*t25189) - 0.325*t25373*t25386 + 0.075*t25395*t25401 + 0.075*t25408*t25414 - 0.0641*(t25401*t25406 + t25395*t25414) + 0.355*(-1.*t25395*t25401 + t25406*t25414) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.1575*t25101*t25127*t25512 + 0.325*t25072*t25527 - 0.1575*t25182*t25554 - 0.2255*(-1.*t25101*t25127*t25512 + t25142*t25554) - 0.325*t25373*t25605 + 0.075*t25395*t25623 + 0.075*t25408*t25664 - 0.0641*(t25406*t25623 + t25395*t25664) + 0.355*(-1.*t25395*t25623 + t25406*t25664) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t25101*t25127*t25525 + 0.325*t25072*t25695 - 0.1575*t25182*t25700 - 0.2255*(t25101*t25127*t25525 + t25142*t25700) - 0.325*t25373*t25713 + 0.075*t25395*t25721 + 0.075*t25408*t25725 - 0.0641*(t25406*t25721 + t25395*t25725) + 0.355*(-1.*t25395*t25721 + t25406*t25725) + var1[2] - 1.*var2[2];
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

#include "h_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
