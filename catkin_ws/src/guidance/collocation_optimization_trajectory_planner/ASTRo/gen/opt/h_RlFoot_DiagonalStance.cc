/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:41:51 GMT+02:00
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
  double t177;
  double t183;
  double t243;
  double t251;
  double t401;
  double t533;
  double t180;
  double t1310;
  double t1052;
  double t1157;
  double t1678;
  double t1766;
  double t1866;
  double t1878;
  double t2024;
  double t2459;
  double t2562;
  double t2596;
  double t2646;
  double t2654;
  double t2659;
  double t2662;
  double t315;
  double t874;
  double t2904;
  double t1217;
  double t1280;
  double t3013;
  double t2937;
  double t3613;
  double t3638;
  double t3683;
  double t3854;
  double t3873;
  double t1717;
  double t1737;
  double t2028;
  double t2197;
  double t3929;
  double t3948;
  double t3967;
  double t4026;
  double t4028;
  double t4061;
  double t4120;
  double t4158;
  double t4165;
  double t4372;
  double t4377;
  double t4435;
  double t4470;
  double t4495;
  double t4497;
  double t4565;
  double t4590;
  double t4884;
  double t4952;
  double t4963;
  double t4968;
  double t5069;
  double t5425;
  double t5451;
  t177 = Cos(var1[4]);
  t183 = Cos(var1[9]);
  t243 = -1.*t183;
  t251 = 1. + t243;
  t401 = Sin(var1[9]);
  t533 = 0.15121*t401;
  t180 = Cos(var1[5]);
  t1310 = Sin(var1[5]);
  t1052 = Sin(var1[10]);
  t1157 = Sin(var1[4]);
  t1678 = Cos(var1[10]);
  t1766 = t183*t177*t180;
  t1866 = -1.*t177*t401*t1310;
  t1878 = t1766 + t1866;
  t2024 = Cos(var1[11]);
  t2459 = t1052*t1157;
  t2562 = t1678*t1878;
  t2596 = t2459 + t2562;
  t2646 = Sin(var1[11]);
  t2654 = t1678*t1157;
  t2659 = -1.*t1052*t1878;
  t2662 = t2654 + t2659;
  t315 = -0.15121*t251;
  t874 = t315 + t533;
  t2904 = Sin(var1[3]);
  t1217 = 0.15121*t251;
  t1280 = t1217 + t533;
  t3013 = Cos(var1[3]);
  t2937 = t180*t2904*t1157;
  t3613 = t3013*t1310;
  t3638 = t2937 + t3613;
  t3683 = t3013*t180;
  t3854 = -1.*t2904*t1157*t1310;
  t3873 = t3683 + t3854;
  t1717 = -1.*t1678;
  t1737 = 1. + t1717;
  t2028 = -1.*t2024;
  t2197 = 1. + t2028;
  t3929 = t183*t3638;
  t3948 = t401*t3873;
  t3967 = t3929 + t3948;
  t4026 = -1.*t177*t1052*t2904;
  t4028 = t1678*t3967;
  t4061 = t4026 + t4028;
  t4120 = -1.*t1678*t177*t2904;
  t4158 = -1.*t1052*t3967;
  t4165 = t4120 + t4158;
  t4372 = -1.*t3013*t180*t1157;
  t4377 = t2904*t1310;
  t4435 = t4372 + t4377;
  t4470 = t180*t2904;
  t4495 = t3013*t1157*t1310;
  t4497 = t4470 + t4495;
  t4565 = t183*t4435;
  t4590 = t401*t4497;
  t4884 = t4565 + t4590;
  t4952 = t3013*t177*t1052;
  t4963 = t1678*t4884;
  t4968 = t4952 + t4963;
  t5069 = t1678*t3013*t177;
  t5425 = -1.*t1052*t4884;
  t5451 = t5069 + t5425;
  p_output1[0]=0.28121*t1052*t1157 - 1.*t1280*t1310*t177 - 0.28121*t1737*t1878 - 0.50321*t2197*t2596 - 0.50321*t2646*t2662 - 0.23321*(t2024*t2596 - 1.*t2646*t2662) + 0.15121*(-1.*t1310*t177*t183 - 1.*t177*t180*t401) + t177*t180*t874 + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t1052*t177*t2904 + t1280*t3873 - 0.28121*t1737*t3967 + 0.15121*(t183*t3873 - 1.*t3638*t401) - 0.50321*t2197*t4061 - 0.50321*t2646*t4165 - 0.23321*(t2024*t4061 - 1.*t2646*t4165) + t3638*t874 + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t1052*t177*t3013 + t1280*t4497 + 0.15121*(-1.*t401*t4435 + t183*t4497) - 0.28121*t1737*t4884 - 0.50321*t2197*t4968 - 0.50321*t2646*t5451 - 0.23321*(t2024*t4968 - 1.*t2646*t5451) + t4435*t874 + var1[2] - 1.*var2[2];
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
