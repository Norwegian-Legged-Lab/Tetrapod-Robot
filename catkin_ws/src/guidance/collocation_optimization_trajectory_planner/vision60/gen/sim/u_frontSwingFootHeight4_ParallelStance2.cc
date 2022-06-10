/*
 * Automatically Generated from Mathematica.
 * Thu 9 Jun 2022 14:44:39 GMT+02:00
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
  double t4014;
  double t16285;
  double t16330;
  double t16301;
  double t16331;
  double t4125;
  double t4671;
  double t16454;
  double t16466;
  double t16504;
  double t16526;
  double t16560;
  double t16316;
  double t16342;
  double t16431;
  double t6878;
  double t16563;
  double t16564;
  double t16565;
  double t16567;
  double t16568;
  double t16569;
  double t16575;
  double t16580;
  double t16593;
  double t16601;
  double t16603;
  double t8471;
  double t16232;
  double t16463;
  double t16464;
  double t16694;
  double t16706;
  double t16707;
  double t16581;
  double t16582;
  double t16710;
  double t16714;
  double t16716;
  double t16759;
  double t16767;
  double t16768;
  double t16669;
  double t16671;
  double t16675;
  double t16676;
  double t16677;
  double t16678;
  double t16693;
  double t16708;
  double t16732;
  double t16813;
  double t16830;
  double t16831;
  double t16858;
  double t16861;
  double t16890;
  double t16898;
  double t16900;
  double t16901;
  double t16902;
  t4014 = Cos(var1[3]);
  t16285 = Cos(var1[5]);
  t16330 = Sin(var1[3]);
  t16301 = Sin(var1[4]);
  t16331 = Sin(var1[5]);
  t4125 = Cos(var1[4]);
  t4671 = Sin(var1[12]);
  t16454 = Cos(var1[12]);
  t16466 = t16285*t16330;
  t16504 = t4014*t16301*t16331;
  t16526 = t16466 + t16504;
  t16560 = Sin(var1[13]);
  t16316 = -1.*t4014*t16285*t16301;
  t16342 = t16330*t16331;
  t16431 = t16316 + t16342;
  t6878 = Cos(var1[13]);
  t16563 = t16454*t4014*t4125;
  t16564 = -1.*t4671*t16526;
  t16565 = t16563 + t16564;
  t16567 = Sin(var1[14]);
  t16568 = -1.*t16560*t16431;
  t16569 = t6878*t16565;
  t16575 = t16568 + t16569;
  t16580 = Cos(var1[14]);
  t16593 = t6878*t16431;
  t16601 = t16560*t16565;
  t16603 = t16593 + t16601;
  t8471 = -1.*t6878;
  t16232 = 1. + t8471;
  t16463 = -1.*t16454;
  t16464 = 1. + t16463;
  t16694 = t16454*t16301;
  t16706 = t4125*t4671*t16331;
  t16707 = t16694 + t16706;
  t16581 = -1.*t16580;
  t16582 = 1. + t16581;
  t16710 = -1.*t4125*t16285*t16560;
  t16714 = t6878*t16707;
  t16716 = t16710 + t16714;
  t16759 = t6878*t4125*t16285;
  t16767 = t16560*t16707;
  t16768 = t16759 + t16767;
  t16669 = 0.325*t16232*t4125*t16285;
  t16671 = 0.1575*t4671*t16301;
  t16675 = 0.1575*t16464*t4125*t16331;
  t16676 = t4671*t16301;
  t16677 = -1.*t16454*t4125*t16331;
  t16678 = t16676 + t16677;
  t16693 = -0.2255*t16678;
  t16708 = -0.325*t16560*t16707;
  t16732 = 0.075*t16567*t16716;
  t16813 = 0.075*t16582*t16768;
  t16830 = -1.*t16567*t16716;
  t16831 = t16580*t16768;
  t16858 = t16830 + t16831;
  t16861 = 0.355*t16858;
  t16890 = t16580*t16716;
  t16898 = t16567*t16768;
  t16900 = t16890 + t16898;
  t16901 = -0.0641*t16900;
  t16902 = -2. + var1[0] + t16669 + t16671 + t16675 + t16693 + t16708 + t16732 + t16813 + t16861 + t16901;
  p_output1[0]=0.325*t16232*t16431 - 0.1575*t16464*t16526 - 0.325*t16560*t16565 + 0.075*t16567*t16575 + 0.075*t16582*t16603 - 0.0641*(t16575*t16580 + t16567*t16603) + 0.355*(-1.*t16567*t16575 + t16580*t16603) + 0.1575*t4014*t4125*t4671 - 0.2255*(t16454*t16526 + t4014*t4125*t4671) + var1[2] - 0.0015*t16902*(1. + Tanh(100.*t16902));
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

#include "u_frontSwingFootHeight4_ParallelStance2.hh"

namespace SymFunction
{

void u_frontSwingFootHeight4_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
