/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:56 GMT+02:00
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
  double t5284;
  double t5357;
  double t15493;
  double t19013;
  double t19513;
  double t22930;
  double t23344;
  double t25159;
  double t26216;
  double t27520;
  double t51313;
  double t51541;
  double t51560;
  double t51616;
  double t51633;
  double t51837;
  t5284 = -1.*var3[0];
  t5357 = t5284 + var3[1];
  t15493 = Power(t5357,-5);
  t19013 = t5284 + var1[0];
  t19513 = Power(t19013,4);
  t22930 = Power(t5357,-4);
  t23344 = Power(t19013,3);
  t25159 = 1/t5357;
  t26216 = -1.*t25159*t19013;
  t27520 = 1. + t26216;
  t51313 = Power(t5357,-3);
  t51541 = Power(t19013,2);
  t51560 = Power(t27520,2);
  t51616 = Power(t5357,-2);
  t51633 = Power(t27520,3);
  t51837 = Power(t27520,4);
  p_output1[0]=-5.*t25159*t51837*var2[0] - 20.*t19013*t51616*t51633*var2[11] + 5.*t25159*t51837*var2[11] - 30.*t51313*t51541*t51560*var2[22] + 20.*t19013*t51616*t51633*var2[22] - 20.*t22930*t23344*t27520*var2[33] + 30.*t51313*t51541*t51560*var2[33] - 5.*t15493*t19513*var2[44] + 20.*t22930*t23344*t27520*var2[44] + 5.*t15493*t19513*var2[55];
  p_output1[1]=-5.*t25159*t51837*var2[1] - 20.*t19013*t51616*t51633*var2[12] + 5.*t25159*t51837*var2[12] - 30.*t51313*t51541*t51560*var2[23] + 20.*t19013*t51616*t51633*var2[23] - 20.*t22930*t23344*t27520*var2[34] + 30.*t51313*t51541*t51560*var2[34] - 5.*t15493*t19513*var2[45] + 20.*t22930*t23344*t27520*var2[45] + 5.*t15493*t19513*var2[56];
  p_output1[2]=-5.*t25159*t51837*var2[2] - 20.*t19013*t51616*t51633*var2[13] + 5.*t25159*t51837*var2[13] - 30.*t51313*t51541*t51560*var2[24] + 20.*t19013*t51616*t51633*var2[24] - 20.*t22930*t23344*t27520*var2[35] + 30.*t51313*t51541*t51560*var2[35] - 5.*t15493*t19513*var2[46] + 20.*t22930*t23344*t27520*var2[46] + 5.*t15493*t19513*var2[57];
  p_output1[3]=-5.*t25159*t51837*var2[3] - 20.*t19013*t51616*t51633*var2[14] + 5.*t25159*t51837*var2[14] - 30.*t51313*t51541*t51560*var2[25] + 20.*t19013*t51616*t51633*var2[25] - 20.*t22930*t23344*t27520*var2[36] + 30.*t51313*t51541*t51560*var2[36] - 5.*t15493*t19513*var2[47] + 20.*t22930*t23344*t27520*var2[47] + 5.*t15493*t19513*var2[58];
  p_output1[4]=-5.*t25159*t51837*var2[4] - 20.*t19013*t51616*t51633*var2[15] + 5.*t25159*t51837*var2[15] - 30.*t51313*t51541*t51560*var2[26] + 20.*t19013*t51616*t51633*var2[26] - 20.*t22930*t23344*t27520*var2[37] + 30.*t51313*t51541*t51560*var2[37] - 5.*t15493*t19513*var2[48] + 20.*t22930*t23344*t27520*var2[48] + 5.*t15493*t19513*var2[59];
  p_output1[5]=-5.*t25159*t51837*var2[5] - 20.*t19013*t51616*t51633*var2[16] + 5.*t25159*t51837*var2[16] - 30.*t51313*t51541*t51560*var2[27] + 20.*t19013*t51616*t51633*var2[27] - 20.*t22930*t23344*t27520*var2[38] + 30.*t51313*t51541*t51560*var2[38] - 5.*t15493*t19513*var2[49] + 20.*t22930*t23344*t27520*var2[49] + 5.*t15493*t19513*var2[60];
  p_output1[6]=-5.*t25159*t51837*var2[6] - 20.*t19013*t51616*t51633*var2[17] + 5.*t25159*t51837*var2[17] - 30.*t51313*t51541*t51560*var2[28] + 20.*t19013*t51616*t51633*var2[28] - 20.*t22930*t23344*t27520*var2[39] + 30.*t51313*t51541*t51560*var2[39] - 5.*t15493*t19513*var2[50] + 20.*t22930*t23344*t27520*var2[50] + 5.*t15493*t19513*var2[61];
  p_output1[7]=-5.*t25159*t51837*var2[7] - 20.*t19013*t51616*t51633*var2[18] + 5.*t25159*t51837*var2[18] - 30.*t51313*t51541*t51560*var2[29] + 20.*t19013*t51616*t51633*var2[29] - 20.*t22930*t23344*t27520*var2[40] + 30.*t51313*t51541*t51560*var2[40] - 5.*t15493*t19513*var2[51] + 20.*t22930*t23344*t27520*var2[51] + 5.*t15493*t19513*var2[62];
  p_output1[8]=-5.*t25159*t51837*var2[8] - 20.*t19013*t51616*t51633*var2[19] + 5.*t25159*t51837*var2[19] - 30.*t51313*t51541*t51560*var2[30] + 20.*t19013*t51616*t51633*var2[30] - 20.*t22930*t23344*t27520*var2[41] + 30.*t51313*t51541*t51560*var2[41] - 5.*t15493*t19513*var2[52] + 20.*t22930*t23344*t27520*var2[52] + 5.*t15493*t19513*var2[63];
  p_output1[9]=-5.*t25159*t51837*var2[9] - 20.*t19013*t51616*t51633*var2[20] + 5.*t25159*t51837*var2[20] - 30.*t51313*t51541*t51560*var2[31] + 20.*t19013*t51616*t51633*var2[31] - 20.*t22930*t23344*t27520*var2[42] + 30.*t51313*t51541*t51560*var2[42] - 5.*t15493*t19513*var2[53] + 20.*t22930*t23344*t27520*var2[53] + 5.*t15493*t19513*var2[64];
  p_output1[10]=-5.*t25159*t51837*var2[10] - 20.*t19013*t51616*t51633*var2[21] + 5.*t25159*t51837*var2[21] - 30.*t51313*t51541*t51560*var2[32] + 20.*t19013*t51616*t51633*var2[32] - 20.*t22930*t23344*t27520*var2[43] + 30.*t51313*t51541*t51560*var2[43] - 5.*t15493*t19513*var2[54] + 20.*t22930*t23344*t27520*var2[54] + 5.*t15493*t19513*var2[65];
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
    ( !(mrows == 66 && ncols == 1) && 
      !(mrows == 1 && ncols == 66))) 
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "d1yd_position_DiagonalStance2.hh"

namespace SymFunction
{

void d1yd_position_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
