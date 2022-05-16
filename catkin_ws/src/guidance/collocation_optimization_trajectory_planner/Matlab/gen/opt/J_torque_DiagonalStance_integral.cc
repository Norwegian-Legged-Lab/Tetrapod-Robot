/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:27:44 GMT+01:00
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
  double t38;
  double t110;
  double t145;
  double t148;
  double t154;
  double t223;
  double t281;
  double t286;
  double t298;
  double t330;
  double t350;
  double t358;
  double t364;
  double t660;
  double t664;
  t38 = Power(var2[9],2);
  t110 = Power(var2[10],2);
  t145 = Power(var2[11],2);
  t148 = Power(var2[0],2);
  t154 = Power(var2[1],2);
  t223 = Power(var2[2],2);
  t281 = Power(var2[3],2);
  t286 = Power(var2[4],2);
  t298 = Power(var2[5],2);
  t330 = Power(var2[6],2);
  t350 = Power(var2[7],2);
  t358 = Power(var2[8],2);
  t364 = t38 + t110 + t145 + t148 + t154 + t223 + t281 + t286 + t298 + t330 + t350 + t358;
  t660 = -1.*var1[0];
  t664 = t660 + var1[1];
  p_output1[0]=-1.*t364*var3[0];
  p_output1[1]=t364*var3[0];
  p_output1[2]=2.*t664*var2[0]*var3[0];
  p_output1[3]=2.*t664*var2[1]*var3[0];
  p_output1[4]=2.*t664*var2[2]*var3[0];
  p_output1[5]=2.*t664*var2[3]*var3[0];
  p_output1[6]=2.*t664*var2[4]*var3[0];
  p_output1[7]=2.*t664*var2[5]*var3[0];
  p_output1[8]=2.*t664*var2[6]*var3[0];
  p_output1[9]=2.*t664*var2[7]*var3[0];
  p_output1[10]=2.*t664*var2[8]*var3[0];
  p_output1[11]=2.*t664*var2[9]*var3[0];
  p_output1[12]=2.*t664*var2[10]*var3[0];
  p_output1[13]=2.*t664*var2[11]*var3[0];
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
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 12 && ncols == 1) && 
      !(mrows == 1 && ncols == 12))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "J_torque_DiagonalStance_integral.hh"

namespace DiagonalStance
{

void J_torque_DiagonalStance_integral_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE