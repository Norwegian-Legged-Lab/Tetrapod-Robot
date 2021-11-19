/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:10:41 GMT+01:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t18;
  double t80;
  double t148;
  double t179;
  double t223;
  double t271;
  double t278;
  double t281;
  double t287;
  double t301;
  double t306;
  double t310;
  double t348;
  double t360;
  double t365;
  double t390;
  t18 = -1.*var3[0];
  t80 = t18 + var3[1];
  t148 = Power(t80,-5);
  t179 = t18 + var1[0];
  t223 = Power(t179,4);
  t271 = Power(t80,-4);
  t278 = Power(t179,3);
  t281 = 1/t80;
  t287 = -1.*t281*t179;
  t301 = 1. + t287;
  t306 = Power(t80,-3);
  t310 = Power(t179,2);
  t348 = Power(t301,2);
  t360 = Power(t80,-2);
  t365 = Power(t301,3);
  t390 = Power(t301,4);
  p_output1[0]=-5.*t281*t390*var2[0] - 20.*t179*t360*t365*var2[10] + 5.*t281*t390*var2[10] - 30.*t306*t310*t348*var2[20] + 20.*t179*t360*t365*var2[20] - 20.*t271*t278*t301*var2[30] + 30.*t306*t310*t348*var2[30] - 5.*t148*t223*var2[40] + 20.*t271*t278*t301*var2[40] + 5.*t148*t223*var2[50];
  p_output1[1]=-5.*t281*t390*var2[1] - 20.*t179*t360*t365*var2[11] + 5.*t281*t390*var2[11] - 30.*t306*t310*t348*var2[21] + 20.*t179*t360*t365*var2[21] - 20.*t271*t278*t301*var2[31] + 30.*t306*t310*t348*var2[31] - 5.*t148*t223*var2[41] + 20.*t271*t278*t301*var2[41] + 5.*t148*t223*var2[51];
  p_output1[2]=-5.*t281*t390*var2[2] - 20.*t179*t360*t365*var2[12] + 5.*t281*t390*var2[12] - 30.*t306*t310*t348*var2[22] + 20.*t179*t360*t365*var2[22] - 20.*t271*t278*t301*var2[32] + 30.*t306*t310*t348*var2[32] - 5.*t148*t223*var2[42] + 20.*t271*t278*t301*var2[42] + 5.*t148*t223*var2[52];
  p_output1[3]=-5.*t281*t390*var2[3] - 20.*t179*t360*t365*var2[13] + 5.*t281*t390*var2[13] - 30.*t306*t310*t348*var2[23] + 20.*t179*t360*t365*var2[23] - 20.*t271*t278*t301*var2[33] + 30.*t306*t310*t348*var2[33] - 5.*t148*t223*var2[43] + 20.*t271*t278*t301*var2[43] + 5.*t148*t223*var2[53];
  p_output1[4]=-5.*t281*t390*var2[4] - 20.*t179*t360*t365*var2[14] + 5.*t281*t390*var2[14] - 30.*t306*t310*t348*var2[24] + 20.*t179*t360*t365*var2[24] - 20.*t271*t278*t301*var2[34] + 30.*t306*t310*t348*var2[34] - 5.*t148*t223*var2[44] + 20.*t271*t278*t301*var2[44] + 5.*t148*t223*var2[54];
  p_output1[5]=-5.*t281*t390*var2[5] - 20.*t179*t360*t365*var2[15] + 5.*t281*t390*var2[15] - 30.*t306*t310*t348*var2[25] + 20.*t179*t360*t365*var2[25] - 20.*t271*t278*t301*var2[35] + 30.*t306*t310*t348*var2[35] - 5.*t148*t223*var2[45] + 20.*t271*t278*t301*var2[45] + 5.*t148*t223*var2[55];
  p_output1[6]=-5.*t281*t390*var2[6] - 20.*t179*t360*t365*var2[16] + 5.*t281*t390*var2[16] - 30.*t306*t310*t348*var2[26] + 20.*t179*t360*t365*var2[26] - 20.*t271*t278*t301*var2[36] + 30.*t306*t310*t348*var2[36] - 5.*t148*t223*var2[46] + 20.*t271*t278*t301*var2[46] + 5.*t148*t223*var2[56];
  p_output1[7]=-5.*t281*t390*var2[7] - 20.*t179*t360*t365*var2[17] + 5.*t281*t390*var2[17] - 30.*t306*t310*t348*var2[27] + 20.*t179*t360*t365*var2[27] - 20.*t271*t278*t301*var2[37] + 30.*t306*t310*t348*var2[37] - 5.*t148*t223*var2[47] + 20.*t271*t278*t301*var2[47] + 5.*t148*t223*var2[57];
  p_output1[8]=-5.*t281*t390*var2[8] - 20.*t179*t360*t365*var2[18] + 5.*t281*t390*var2[18] - 30.*t306*t310*t348*var2[28] + 20.*t179*t360*t365*var2[28] - 20.*t271*t278*t301*var2[38] + 30.*t306*t310*t348*var2[38] - 5.*t148*t223*var2[48] + 20.*t271*t278*t301*var2[48] + 5.*t148*t223*var2[58];
  p_output1[9]=-5.*t281*t390*var2[9] - 20.*t179*t360*t365*var2[19] + 5.*t281*t390*var2[19] - 30.*t306*t310*t348*var2[29] + 20.*t179*t360*t365*var2[29] - 20.*t271*t278*t301*var2[39] + 30.*t306*t310*t348*var2[39] - 5.*t148*t223*var2[49] + 20.*t271*t278*t301*var2[49] + 5.*t148*t223*var2[59];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 60 && ncols == 1) && 
      !(mrows == 1 && ncols == 60))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 10, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "d1yd_position_DiagonalStance.hh"

namespace SymFunction
{

void d1yd_position_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
