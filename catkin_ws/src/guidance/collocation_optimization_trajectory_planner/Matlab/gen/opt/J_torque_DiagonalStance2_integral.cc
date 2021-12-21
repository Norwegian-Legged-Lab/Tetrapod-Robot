/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:08:44 GMT+01:00
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
  double t193;
  double t195;
  double t199;
  double t201;
  double t202;
  double t206;
  double t207;
  double t215;
  double t216;
  double t221;
  double t231;
  double t234;
  double t235;
  double t238;
  double t239;
  t193 = Power(var2[9],2);
  t195 = Power(var2[10],2);
  t199 = Power(var2[11],2);
  t201 = Power(var2[0],2);
  t202 = Power(var2[1],2);
  t206 = Power(var2[2],2);
  t207 = Power(var2[3],2);
  t215 = Power(var2[4],2);
  t216 = Power(var2[5],2);
  t221 = Power(var2[6],2);
  t231 = Power(var2[7],2);
  t234 = Power(var2[8],2);
  t235 = t193 + t195 + t199 + t201 + t202 + t206 + t207 + t215 + t216 + t221 + t231 + t234;
  t238 = -1.*var1[0];
  t239 = t238 + var1[1];
  p_output1[0]=-1.*t235*var3[0];
  p_output1[1]=t235*var3[0];
  p_output1[2]=2.*t239*var2[0]*var3[0];
  p_output1[3]=2.*t239*var2[1]*var3[0];
  p_output1[4]=2.*t239*var2[2]*var3[0];
  p_output1[5]=2.*t239*var2[3]*var3[0];
  p_output1[6]=2.*t239*var2[4]*var3[0];
  p_output1[7]=2.*t239*var2[5]*var3[0];
  p_output1[8]=2.*t239*var2[6]*var3[0];
  p_output1[9]=2.*t239*var2[7]*var3[0];
  p_output1[10]=2.*t239*var2[8]*var3[0];
  p_output1[11]=2.*t239*var2[9]*var3[0];
  p_output1[12]=2.*t239*var2[10]*var3[0];
  p_output1[13]=2.*t239*var2[11]*var3[0];
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

#include "J_torque_DiagonalStance2_integral.hh"

namespace DiagonalStance2
{

void J_torque_DiagonalStance2_integral_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
