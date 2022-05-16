/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:06 GMT+02:00
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
  double t304;
  double t1175;
  double t1376;
  double t1845;
  double t2817;
  double t3109;
  double t418;
  double t45227;
  double t5894;
  double t21049;
  double t46137;
  double t46368;
  double t46369;
  double t46370;
  double t46558;
  double t46580;
  double t46584;
  double t46586;
  double t46588;
  double t46589;
  double t46590;
  double t46595;
  double t2213;
  double t4118;
  double t46672;
  double t23474;
  double t41486;
  double t46784;
  double t46772;
  double t46790;
  double t46792;
  double t46802;
  double t46803;
  double t46804;
  double t46146;
  double t46364;
  double t46564;
  double t46568;
  double t46816;
  double t46820;
  double t46831;
  double t46844;
  double t46845;
  double t46846;
  double t46902;
  double t46906;
  double t46910;
  double t46925;
  double t46926;
  double t46927;
  double t46930;
  double t46934;
  double t46938;
  double t46953;
  double t46964;
  double t46965;
  double t46968;
  double t46969;
  double t46970;
  double t46976;
  double t46977;
  double t46992;
  t304 = Cos(var1[4]);
  t1175 = Cos(var1[9]);
  t1376 = -1.*t1175;
  t1845 = 1. + t1376;
  t2817 = Sin(var1[9]);
  t3109 = 0.15121*t2817;
  t418 = Cos(var1[5]);
  t45227 = Sin(var1[5]);
  t5894 = Sin(var1[10]);
  t21049 = Sin(var1[4]);
  t46137 = Cos(var1[10]);
  t46368 = t1175*t304*t418;
  t46369 = -1.*t304*t2817*t45227;
  t46370 = t46368 + t46369;
  t46558 = Cos(var1[11]);
  t46580 = t5894*t21049;
  t46584 = t46137*t46370;
  t46586 = t46580 + t46584;
  t46588 = Sin(var1[11]);
  t46589 = t46137*t21049;
  t46590 = -1.*t5894*t46370;
  t46595 = t46589 + t46590;
  t2213 = -0.15121*t1845;
  t4118 = t2213 + t3109;
  t46672 = Sin(var1[3]);
  t23474 = 0.15121*t1845;
  t41486 = t23474 + t3109;
  t46784 = Cos(var1[3]);
  t46772 = t418*t46672*t21049;
  t46790 = t46784*t45227;
  t46792 = t46772 + t46790;
  t46802 = t46784*t418;
  t46803 = -1.*t46672*t21049*t45227;
  t46804 = t46802 + t46803;
  t46146 = -1.*t46137;
  t46364 = 1. + t46146;
  t46564 = -1.*t46558;
  t46568 = 1. + t46564;
  t46816 = t1175*t46792;
  t46820 = t2817*t46804;
  t46831 = t46816 + t46820;
  t46844 = -1.*t304*t5894*t46672;
  t46845 = t46137*t46831;
  t46846 = t46844 + t46845;
  t46902 = -1.*t46137*t304*t46672;
  t46906 = -1.*t5894*t46831;
  t46910 = t46902 + t46906;
  t46925 = -1.*t46784*t418*t21049;
  t46926 = t46672*t45227;
  t46927 = t46925 + t46926;
  t46930 = t418*t46672;
  t46934 = t46784*t21049*t45227;
  t46938 = t46930 + t46934;
  t46953 = t1175*t46927;
  t46964 = t2817*t46938;
  t46965 = t46953 + t46964;
  t46968 = t46784*t304*t5894;
  t46969 = t46137*t46965;
  t46970 = t46968 + t46969;
  t46976 = t46137*t46784*t304;
  t46977 = -1.*t5894*t46965;
  t46992 = t46976 + t46977;
  p_output1[0]=t304*t4118*t418 - 1.*t304*t41486*t45227 + 0.15121*(-1.*t2817*t304*t418 - 1.*t1175*t304*t45227) - 0.28121*t46364*t46370 - 0.50321*t46568*t46586 - 0.50321*t46588*t46595 - 0.23321*(t46558*t46586 - 1.*t46588*t46595) + 0.28121*t21049*t5894 + var1[0] - 1.*var2[0];
  p_output1[1]=t4118*t46792 + t41486*t46804 + 0.15121*(-1.*t2817*t46792 + t1175*t46804) - 0.28121*t46364*t46831 - 0.50321*t46568*t46846 - 0.50321*t46588*t46910 - 0.23321*(t46558*t46846 - 1.*t46588*t46910) - 0.28121*t304*t46672*t5894 + var1[1] - 1.*var2[1];
  p_output1[2]=t4118*t46927 + t41486*t46938 + 0.15121*(-1.*t2817*t46927 + t1175*t46938) - 0.28121*t46364*t46965 - 0.50321*t46568*t46970 - 0.50321*t46588*t46992 - 0.23321*(t46558*t46970 - 1.*t46588*t46992) + 0.28121*t304*t46784*t5894 + var1[2] - 1.*var2[2];
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
