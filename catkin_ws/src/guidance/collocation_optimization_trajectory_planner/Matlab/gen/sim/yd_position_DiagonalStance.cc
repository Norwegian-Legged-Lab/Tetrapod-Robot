/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:10:40 GMT+01:00
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
  double t17;
  double t52;
  double t64;
  double t127;
  double t130;
  double t131;
  double t59;
  double t79;
  double t93;
  double t111;
  double t155;
  double t177;
  double t178;
  double t182;
  double t192;
  double t200;
  double t225;
  double t233;
  t17 = -1.*var3[0];
  t52 = t17 + var3[1];
  t64 = t17 + var1[0];
  t127 = 1/t52;
  t130 = -1.*t127*t64;
  t131 = 1. + t130;
  t59 = Power(t52,-5);
  t79 = Power(t64,5);
  t93 = Power(t52,-4);
  t111 = Power(t64,4);
  t155 = Power(t52,-3);
  t177 = Power(t64,3);
  t178 = Power(t131,2);
  t182 = Power(t52,-2);
  t192 = Power(t64,2);
  t200 = Power(t131,3);
  t225 = Power(t131,4);
  t233 = Power(t131,5);
  p_output1[0]=t233*var2[0] + 5.*t127*t225*t64*var2[10] + 10.*t182*t192*t200*var2[20] + 10.*t155*t177*t178*var2[30] + 5.*t111*t131*t93*var2[40] + t59*t79*var2[50];
  p_output1[1]=t233*var2[1] + 5.*t127*t225*t64*var2[11] + 10.*t182*t192*t200*var2[21] + 10.*t155*t177*t178*var2[31] + 5.*t111*t131*t93*var2[41] + t59*t79*var2[51];
  p_output1[2]=t233*var2[2] + 5.*t127*t225*t64*var2[12] + 10.*t182*t192*t200*var2[22] + 10.*t155*t177*t178*var2[32] + 5.*t111*t131*t93*var2[42] + t59*t79*var2[52];
  p_output1[3]=t233*var2[3] + 5.*t127*t225*t64*var2[13] + 10.*t182*t192*t200*var2[23] + 10.*t155*t177*t178*var2[33] + 5.*t111*t131*t93*var2[43] + t59*t79*var2[53];
  p_output1[4]=t233*var2[4] + 5.*t127*t225*t64*var2[14] + 10.*t182*t192*t200*var2[24] + 10.*t155*t177*t178*var2[34] + 5.*t111*t131*t93*var2[44] + t59*t79*var2[54];
  p_output1[5]=t233*var2[5] + 5.*t127*t225*t64*var2[15] + 10.*t182*t192*t200*var2[25] + 10.*t155*t177*t178*var2[35] + 5.*t111*t131*t93*var2[45] + t59*t79*var2[55];
  p_output1[6]=t233*var2[6] + 5.*t127*t225*t64*var2[16] + 10.*t182*t192*t200*var2[26] + 10.*t155*t177*t178*var2[36] + 5.*t111*t131*t93*var2[46] + t59*t79*var2[56];
  p_output1[7]=t233*var2[7] + 5.*t127*t225*t64*var2[17] + 10.*t182*t192*t200*var2[27] + 10.*t155*t177*t178*var2[37] + 5.*t111*t131*t93*var2[47] + t59*t79*var2[57];
  p_output1[8]=t233*var2[8] + 5.*t127*t225*t64*var2[18] + 10.*t182*t192*t200*var2[28] + 10.*t155*t177*t178*var2[38] + 5.*t111*t131*t93*var2[48] + t59*t79*var2[58];
  p_output1[9]=t233*var2[9] + 5.*t127*t225*t64*var2[19] + 10.*t182*t192*t200*var2[29] + 10.*t155*t177*t178*var2[39] + 5.*t111*t131*t93*var2[49] + t59*t79*var2[59];
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

#include "yd_position_DiagonalStance.hh"

namespace SymFunction
{

void yd_position_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
