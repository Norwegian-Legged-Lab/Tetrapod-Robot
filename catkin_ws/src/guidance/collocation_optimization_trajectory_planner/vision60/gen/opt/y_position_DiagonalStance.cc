/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:06:41 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t400;
  double t401;
  double t414;
  double t415;
  double t422;
  double t423;
  double t425;
  double t426;
  double t427;
  double t452;
  double t453;
  double t455;
  double t402;
  double t429;
  double t448;
  double t450;
  double t458;
  double t460;
  double t461;
  double t466;
  double t467;
  double t469;
  double t471;
  double t486;
  t400 = -1.*var4[0];
  t401 = t400 + var4[1];
  t414 = -1. + var5[0];
  t415 = -1. + var6[0];
  t422 = 1/t415;
  t423 = -1.*var1[0];
  t425 = t423 + var1[1];
  t426 = t414*t422*t425;
  t427 = t400 + var1[0] + t426;
  t452 = 1/t401;
  t453 = -1.*t452*t427;
  t455 = 1. + t453;
  t402 = Power(t401,-5);
  t429 = Power(t427,5);
  t448 = Power(t401,-4);
  t450 = Power(t427,4);
  t458 = Power(t401,-3);
  t460 = Power(t427,3);
  t461 = Power(t455,2);
  t466 = Power(t401,-2);
  t467 = Power(t427,2);
  t469 = Power(t455,3);
  t471 = Power(t455,4);
  t486 = Power(t455,5);
  p_output1[0]=var2[12] - 1.*t486*var3[0] - 5.*t427*t452*t471*var3[11] - 10.*t466*t467*t469*var3[22] - 10.*t458*t460*t461*var3[33] - 5.*t448*t450*t455*var3[44] - 1.*t402*t429*var3[55];
  p_output1[1]=var2[13] - 1.*t486*var3[1] - 5.*t427*t452*t471*var3[12] - 10.*t466*t467*t469*var3[23] - 10.*t458*t460*t461*var3[34] - 5.*t448*t450*t455*var3[45] - 1.*t402*t429*var3[56];
  p_output1[2]=var2[14] - 1.*t486*var3[2] - 5.*t427*t452*t471*var3[13] - 10.*t466*t467*t469*var3[24] - 10.*t458*t460*t461*var3[35] - 5.*t448*t450*t455*var3[46] - 1.*t402*t429*var3[57];
  p_output1[3]=var2[9] - 1.*t486*var3[3] - 5.*t427*t452*t471*var3[14] - 10.*t466*t467*t469*var3[25] - 10.*t458*t460*t461*var3[36] - 5.*t448*t450*t455*var3[47] - 1.*t402*t429*var3[58];
  p_output1[4]=var2[11] - 1.*t486*var3[4] - 5.*t427*t452*t471*var3[15] - 10.*t466*t467*t469*var3[26] - 10.*t458*t460*t461*var3[37] - 5.*t448*t450*t455*var3[48] - 1.*t402*t429*var3[59];
  p_output1[5]=var2[6] - 1.*t486*var3[5] - 5.*t427*t452*t471*var3[16] - 10.*t466*t467*t469*var3[27] - 10.*t458*t460*t461*var3[38] - 5.*t448*t450*t455*var3[49] - 1.*t402*t429*var3[60];
  p_output1[6]=var2[7] - 1.*t486*var3[6] - 5.*t427*t452*t471*var3[17] - 10.*t466*t467*t469*var3[28] - 10.*t458*t460*t461*var3[39] - 5.*t448*t450*t455*var3[50] - 1.*t402*t429*var3[61];
  p_output1[7]=var2[8] - 1.*t486*var3[7] - 5.*t427*t452*t471*var3[18] - 10.*t466*t467*t469*var3[29] - 10.*t458*t460*t461*var3[40] - 5.*t448*t450*t455*var3[51] - 1.*t402*t429*var3[62];
  p_output1[8]=var2[15] - 1.*t486*var3[8] - 5.*t427*t452*t471*var3[19] - 10.*t466*t467*t469*var3[30] - 10.*t458*t460*t461*var3[41] - 5.*t448*t450*t455*var3[52] - 1.*t402*t429*var3[63];
  p_output1[9]=var2[16] - 1.*t486*var3[9] - 5.*t427*t452*t471*var3[20] - 10.*t466*t467*t469*var3[31] - 10.*t458*t460*t461*var3[42] - 5.*t448*t450*t455*var3[53] - 1.*t402*t429*var3[64];
  p_output1[10]=var2[17] - 1.*t486*var3[10] - 5.*t427*t452*t471*var3[21] - 10.*t466*t467*t469*var3[32] - 10.*t458*t460*t461*var3[43] - 5.*t448*t450*t455*var3[54] - 1.*t402*t429*var3[65];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 66 && ncols == 1) && 
      !(mrows == 1 && ncols == 66))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "y_position_DiagonalStance.hh"

namespace DiagonalStance
{

void y_position_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
