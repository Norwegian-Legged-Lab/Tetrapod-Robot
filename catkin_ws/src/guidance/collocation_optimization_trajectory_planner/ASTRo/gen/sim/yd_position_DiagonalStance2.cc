/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:18 GMT+02:00
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
  double t3422;
  double t3502;
  double t3506;
  double t3541;
  double t3542;
  double t3543;
  double t3505;
  double t3513;
  double t3526;
  double t3540;
  double t3545;
  double t3546;
  double t3547;
  double t3573;
  double t3574;
  double t3579;
  double t3591;
  double t3601;
  t3422 = -1.*var3[0];
  t3502 = t3422 + var3[1];
  t3506 = t3422 + var1[0];
  t3541 = 1/t3502;
  t3542 = -1.*t3541*t3506;
  t3543 = 1. + t3542;
  t3505 = Power(t3502,-5);
  t3513 = Power(t3506,5);
  t3526 = Power(t3502,-4);
  t3540 = Power(t3506,4);
  t3545 = Power(t3502,-3);
  t3546 = Power(t3506,3);
  t3547 = Power(t3543,2);
  t3573 = Power(t3502,-2);
  t3574 = Power(t3506,2);
  t3579 = Power(t3543,3);
  t3591 = Power(t3543,4);
  t3601 = Power(t3543,5);
  p_output1[0]=t3601*var2[0] + 5.*t3506*t3541*t3591*var2[11] + 10.*t3573*t3574*t3579*var2[22] + 10.*t3545*t3546*t3547*var2[33] + 5.*t3526*t3540*t3543*var2[44] + t3505*t3513*var2[55];
  p_output1[1]=t3601*var2[1] + 5.*t3506*t3541*t3591*var2[12] + 10.*t3573*t3574*t3579*var2[23] + 10.*t3545*t3546*t3547*var2[34] + 5.*t3526*t3540*t3543*var2[45] + t3505*t3513*var2[56];
  p_output1[2]=t3601*var2[2] + 5.*t3506*t3541*t3591*var2[13] + 10.*t3573*t3574*t3579*var2[24] + 10.*t3545*t3546*t3547*var2[35] + 5.*t3526*t3540*t3543*var2[46] + t3505*t3513*var2[57];
  p_output1[3]=t3601*var2[3] + 5.*t3506*t3541*t3591*var2[14] + 10.*t3573*t3574*t3579*var2[25] + 10.*t3545*t3546*t3547*var2[36] + 5.*t3526*t3540*t3543*var2[47] + t3505*t3513*var2[58];
  p_output1[4]=t3601*var2[4] + 5.*t3506*t3541*t3591*var2[15] + 10.*t3573*t3574*t3579*var2[26] + 10.*t3545*t3546*t3547*var2[37] + 5.*t3526*t3540*t3543*var2[48] + t3505*t3513*var2[59];
  p_output1[5]=t3601*var2[5] + 5.*t3506*t3541*t3591*var2[16] + 10.*t3573*t3574*t3579*var2[27] + 10.*t3545*t3546*t3547*var2[38] + 5.*t3526*t3540*t3543*var2[49] + t3505*t3513*var2[60];
  p_output1[6]=t3601*var2[6] + 5.*t3506*t3541*t3591*var2[17] + 10.*t3573*t3574*t3579*var2[28] + 10.*t3545*t3546*t3547*var2[39] + 5.*t3526*t3540*t3543*var2[50] + t3505*t3513*var2[61];
  p_output1[7]=t3601*var2[7] + 5.*t3506*t3541*t3591*var2[18] + 10.*t3573*t3574*t3579*var2[29] + 10.*t3545*t3546*t3547*var2[40] + 5.*t3526*t3540*t3543*var2[51] + t3505*t3513*var2[62];
  p_output1[8]=t3601*var2[8] + 5.*t3506*t3541*t3591*var2[19] + 10.*t3573*t3574*t3579*var2[30] + 10.*t3545*t3546*t3547*var2[41] + 5.*t3526*t3540*t3543*var2[52] + t3505*t3513*var2[63];
  p_output1[9]=t3601*var2[9] + 5.*t3506*t3541*t3591*var2[20] + 10.*t3573*t3574*t3579*var2[31] + 10.*t3545*t3546*t3547*var2[42] + 5.*t3526*t3540*t3543*var2[53] + t3505*t3513*var2[64];
  p_output1[10]=t3601*var2[10] + 5.*t3506*t3541*t3591*var2[21] + 10.*t3573*t3574*t3579*var2[32] + 10.*t3545*t3546*t3547*var2[43] + 5.*t3526*t3540*t3543*var2[54] + t3505*t3513*var2[65];
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

#include "yd_position_DiagonalStance2.hh"

namespace SymFunction
{

void yd_position_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
